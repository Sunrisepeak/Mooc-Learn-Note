import java.util.Iterator;
import java.util.NoSuchElementException;

public class Deque<Item> implements Iterable<Item> {

    private Node first, last;
    private int size;

    // construct an empty deque
    public Deque() {
        first = last = null;
        size = 0;
    }

    //Data Structure of doubleLink-list Node
    private class Node {
        Item item;
        Node next, previous;
    }

    // is the deque empty?
    public boolean isEmpty() {
        return first == null || last == null;
    }

    // return the number of items on the deque
    public int size() {
        return size;
    }

    // add the item to the front
    public void addFirst(Item item) {
        if (item == null) throw new IllegalArgumentException("item can't is null");
        Node oldFirst = first;
        first = new Node();
        first.item = item;
        first.next = oldFirst;
        if (isEmpty())
            last = first;
        else
            oldFirst.previous = first;
        size++;
    }

    // add the item to the back
    public void addLast(Item item) {
        if (item == null) throw new IllegalArgumentException("item can't is null");
        Node oldLast = last;
        last = new Node();
        last.item = item;
        last.previous = oldLast;
        if (isEmpty())
            first = last;
        else
            oldLast.next = last;
        size++;
    }

    // remove and return the item from the front
    public Item removeFirst() {
        if (isEmpty()) throw new NoSuchElementException("Deque is empty");
        Item oldFirst = first.item;
        if (first == last) {
            first = last = null;
        } else {
            first = first.next;
            first.previous = null;
        }
        size--;
        return oldFirst;
    }

    // remove and return the item from the back
    public Item removeLast() {
        if (isEmpty()) throw new NoSuchElementException("Deque is empty");
        Item oldLast = last.item;
        if (first == last) {
            first = last = null;
        } else {
            last = last.previous;
            last.next = null;
        }
        size--;
        return oldLast;
    }

    // return an iterator over items in order from front to back
    public Iterator<Item> iterator() {
        return new ListIterator();
    }

    private class ListIterator implements Iterator<Item> {

        private Node current = first;

        @Override
        public boolean hasNext() {
            return current != null;
        }

        @Override
        public Item next() {
            if (!hasNext()) {
                throw new NoSuchElementException("Haven't next Item");
            }
            Item oldCurrent = current.item;
            current = current.next;
            return oldCurrent;
        }

        @Override
        public void remove() {
            throw new UnsupportedOperationException("remove haven't implements");
        }
    }

    // unit testing (required)
    public static void main(String[] args) {
        Deque<String> deque = new Deque<String>();
        deque.addFirst("a");
        deque.addLast("b");
        deque.addFirst("c");
        Iterator<String> it = deque.iterator();
        while (it.hasNext()) {
            String temp = it.next();
            System.out.println(temp);
        }
        System.out.println(deque.size());
        it.next();
    }
}
