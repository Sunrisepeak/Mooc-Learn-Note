import edu.princeton.cs.algs4.StdRandom;
import java.util.Iterator;
import java.util.NoSuchElementException;

public class RandomizedQueue<Item> implements Iterable<Item> {
    private Item[] rQue;
    private int head, tail;

    // construct an empty randomized queue
    public RandomizedQueue() {
        rQue = (Item[])new Object[1];
        head = tail = 0;
    }

    // is the randomized queue empty?
    public boolean isEmpty() {
        return head == tail;
    }

    // return the number of items on the randomized queue
    public int size() {
        return tail - head;
    }

    // add the item
    public void enqueue(Item item) {
        if (item == null) throw new IllegalArgumentException("Argument can't is null");
        if (rQue.length == tail) {
            resize(2 * size());
        }
        rQue[tail++] = item;
    }

    // remove and return a random item
    public Item dequeue() {
        if (isEmpty()) throw new NoSuchElementException("Randomized Queue is empty");
        if (head == rQue.length / 2) {  //free space (not useful)
            resize(2 * size());
        }
        int rNum = StdRandom.uniform(head, tail);
        Item temp = rQue[rNum];
        rQue[rNum] = rQue[head];
        rQue[head++] = null;    //avoid loitering obj
        return temp;
    }

    private void resize(int size) {
        Item[] newRQue = (Item[]) new Object[size];
        for (int i = head; i < tail; i++) {
            newRQue[i - head] = rQue[i];
        }
        tail = tail - head;
        head = 0;
        rQue = newRQue;
    }

    // return a random item (but do not remove it)
    public Item sample() {
        if (isEmpty()) throw new NoSuchElementException("Randomized Queue is empty");
        int rNum = StdRandom.uniform(head, tail);
        return rQue[rNum];
    }

    // return an independent iterator over items in random order
    public Iterator<Item> iterator() {
        return new RandomizedIterator();
    }

    private class RandomizedIterator implements Iterator<Item> {
        int[] randomNums;
        int current;
        public RandomizedIterator() {
            randomNums = StdRandom.permutation(size());
            current = 0;
        }

        @Override
        public boolean hasNext() {
            return current < randomNums.length;
        }

        @Override
        public Item next() {
            if (!hasNext()) throw new NoSuchElementException("Hasn't next Item");
            Item currentValue = rQue[randomNums[current] + head];
            current++;
            return currentValue;
        }

        @Override
        public void remove() {
            throw new UnsupportedOperationException("remove haven't implements");
        }
    }
    // unit testing (required)
    public static void main(String[] args) {
        RandomizedQueue<Integer> rq = new RandomizedQueue<Integer>();
        for (int i = 0; i < 10; i++) {
            rq.enqueue(i);
        }
        for (int i = 0; i < 3; i++) {
            Iterator<Integer> it = rq.iterator();
            while (it.hasNext()) {
                System.out.print(it.next() + " ");
            }
            System.out.println();
        }
        for (int i = 0; i < rq.size(); i++) {
            System.out.println(rq.sample());
        }
     }

}