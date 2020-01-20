import edu.princeton.cs.algs4.WeightedQuickUnionUF;

/* *****************************************************************************
 *  Name:              SPeak Shen
 *  Coursera User ID:
 *  Last modified:     1/20/2020
 **************************************************************************** */
public class Percolation {
    //0 is blocked, 1 is opened, 2 is full
    private int[][] sites;  //save status of sites
    private int countOpenNumber;
    private boolean virtualBottom;
    private int sideLen;

    // creates n-by-n grid, with all sites initially blocked
    public Percolation(int n) {
        sideLen = n;
        countOpenNumber = 0;
        virtualBottom = false;
        sites = new int[n + 1][n + 1];
        for (int[] rows : sites) {  //init to blocked for sites
            for(int col : rows) {
                col = 0;
            }
        }
        for (int i = 0; i < n + 1; i++) {
            sites[0][i] = 2;
        }
    }

    // opens the site (row, col) if it is not open already
    public void open(int row, int col) {
        if(isOpen(row, col))   //opened or full
            return;
        sites[row] [col] = 1;
        countOpenNumber++;
        flushStatusOfFull(row, col);  // fullStatus
    }



    // is the site (row, col) open?
    public boolean isOpen(int row, int col) {
        return (sites[row][col] >= 1);
    }

    // is the site (row, col) full?
    public boolean isFull(int row, int col) {
        return (sites[row][col] == 2);
    }

    // returns the number of open sites
    public int numberOfOpenSites() {
        return countOpenNumber;
    }

    // does the system percolate?
    public boolean percolates() {
        return virtualBottom;
    }

    /**
     *
     *
     */

    private void flushStatusOfFull(int row, int col) {
        if (validata(row, col) && sites[row][col] == 1) {
            if (aroundExistFull(row, col)) {
                sites[row][col] = 2;
                if(row == sideLen)
                    virtualBottom = true;
                flushStatusOfFull(row + 1, col);
                flushStatusOfFull(row - 1, col);
                flushStatusOfFull(row, col + 1);
                flushStatusOfFull(row, col - 1);
            }
        }

    }

    private boolean aroundExistFull(int row, int col) {
        boolean isFull = false;
        if (validata(row, col + 1) && isFull(row, col + 1))
            isFull = true;
        if (validata(row + 1, col) && isFull(row + 1, col))
            isFull = true;
        if (validata(row, col - 1) && isFull(row, col - 1))
            isFull = true;
        if (validata(row - 1, col) && isFull(row - 1, col))
            isFull = true;
        return isFull;
    }

    private boolean validata(int row, int col) {
        if(row >= 0 && row < sideLen + 1 && col >= 0 && col < sideLen + 1) {
            return true;
        }
        return false;
    }

    // test client (optional)
    public static void main(String[] args) {
        System.out.println("test");
        WeightedQuickUnionUF uf = new WeightedQuickUnionUF(3);
        System.out.println(uf.getClass());
    }
}
