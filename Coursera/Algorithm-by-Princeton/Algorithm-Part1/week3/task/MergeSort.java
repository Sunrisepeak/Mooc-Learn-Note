import java.util.Comparator;

public class MergeSort {

    static private Comparator comparator = null;

    /*  @output: a is sorted
     *  @input: aux
     * */
    private static void merge(Object[] a, Object[] aux, int low, int mid, int high) {

        System.out.println(low + " " + mid + " " + high + " array: hashcode" + a.hashCode());

        if (lessOrEqual(aux[mid], aux[mid + 1])) {  // because low <= mid < high
            return;
        }

        int i = low, j = mid + 1;
        for (int k = low; k <= high; k++) {
            if (i > mid)                // array1 over border
                a[k] = aux[j++];
            else if (j > high)          // array2 over border
                a[k] = aux[i++];
            else if (lessOrEqual(aux[i], aux[j])) {
                a[k] = aux[i++];
            } else {
                a[k] = aux[j++];
            }
        }
    }

    /*
    *   Notes: alternately output-array, save time of copy element of array
    *   @input: aux
    *   @output: a is sorted
    * */
    private static void sort(Object[] a, Object[] aux, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            sort(aux, a, low, mid);             // aux-L is sorted
            sort(aux, a, mid + 1, high);    // aux-R is sorted
            merge(a, aux, low, mid, high);      // [aux-L, aux-R] -> a(sorted)
        }
    }

    private static boolean less(Object o1, Object o2) {
        return comparator.compare(o1, o2) < 0;
    }

    private static boolean equal(Object o1, Object o2) {
        return comparator.compare(o1, o2) == 0;
    }

    private static boolean lessOrEqual(Object o1, Object o2) {
        return less(o1, o2) || equal(o1, o2);
    }

    // interface for outside
    public static void sort(Object[] a, Comparator c) {
        Object[] aux = new Object[a.length];
        comparator = c;
        for (int i = 0; i < a.length; i++) {    // copy element
            aux[i] = a[i];                      // ensure is equivalence of element position when
        }                                       // only one(arr-element)

        sort(a, aux, 0, a.length - 1);
    }

    public static boolean isSorted(int[] a) {
        for (int i = 1; i < a.length; i++) {
            if (a[i - 1] > a[i]) {
                return false;
            }
        }
        return true;
    }

    // test -- debug
    public static void main(String[] args) {
        /*int[] test = {1, 4, 2, 6, 19, 5, 8};
        sort(test);

        System.out.print("\ntest--sorted: ");
        for (int i = 0; i < test.length; i++) {
            System.out.print(test[i] + " ");
        }*/
    }
}
