import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;

import java.util.Iterator;
public class Permutation {
    public static void main(String[] args) {
        int N = Integer.valueOf(args[0]);
        RandomizedQueue<String> rq = new RandomizedQueue<>();
        while (!StdIn.isEmpty()) {
            String value = StdIn.readString();
            rq.enqueue(value);
        }
        Iterator<String> it = rq.iterator();
        for (int i = 0; i < N && it.hasNext(); i++) {
            StdOut.println(it.next());
        }
    }
}
