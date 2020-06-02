public class MergeSort {

    /*  @output: a is sorted
     *  @input: aux
     * */
    private static void merge(int[] a, int[] aux, int low, int mid, int high) {

        System.out.println(low + " " + mid + " " + high + " array: hashcode" + a.hashCode());

        if (aux[mid] <= aux[mid + 1]) {  // because low <= mid < high
            return;
        }

        int i = low, j = mid + 1;
        for (int k = low; k <= high; k++) {
            if (i > mid)                // array1 over border
                a[k] = aux[j++];
            else if (j > high)          // array2 over border
                a[k] = aux[i++];
            else if (aux[i] <= aux[j]) {
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
    private static void sort(int[] a, int[] aux, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            sort(aux, a, low, mid);             // aux-L is sorted
            sort(aux, a, mid + 1, high);    // aux-R is sorted
            merge(a, aux, low, mid, high);      // [aux-L, aux-R] -> a(sorted)
        }
    }

    // interface for outside
    public static void sort(int[] a) {
        int[] aux = new int[a.length];

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
        int[] test = {1, 4, 2, 6, 19, 5, 8};
        sort(test);

        System.out.print("\ntest--sorted: ");
        for (int i = 0; i < test.length; i++) {
            System.out.print(test[i] + " ");
        }
    }
}
