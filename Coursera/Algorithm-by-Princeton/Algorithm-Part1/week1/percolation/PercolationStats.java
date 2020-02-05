/* *****************************************************************************
 *  Name:              SPeak Shen
 *  Coursera User ID:
 *  Last modified:     1/20/2020
 **************************************************************************** */


import edu.princeton.cs.algs4.StdRandom;
import edu.princeton.cs.algs4.WeightedQuickUnionUF;

public class PercolationStats {
    private  Double stddev;
    private Double mean;
    private Double confIntervalLow;
    private Double confIntervalHigh;
    // perform independent trials on an n-by-n grid
    public PercolationStats(int n, int trials) {
        if( n < 1 || trials < 1)
            throw new IllegalArgumentException(n + " or " + trials + "(n Or trials) not is > 1");
        Double probabilitySum = 0.0;
        Double xSquareSum = 0.0;
        Percolation perc = null;
        for (int i = 0; i < trials; i++) {
            perc = new Percolation(n);
            randomTest(perc, n);
            Double probability = (double) perc.numberOfOpenSites() / (n * n);
            probabilitySum += probability;
            xSquareSum += probability * probability;
        }
        mean = probabilitySum / trials;
        stddev = Math.sqrt((xSquareSum - 2 * mean * probabilitySum + trials * mean * mean) / (trials - 1));
        confIntervalLow = mean - 1.96 * stddev / Math.sqrt(trials);
        confIntervalHigh = mean + 1.96 * stddev / Math.sqrt(trials);
    }

    // sample mean of percolation threshold
    public double mean() {
        return mean;
    }

    // sample standard deviation of percolation threshold
    public double stddev() {
        return stddev;
    }

    // low endpoint of 95% confidence interval
    public double confidenceLo() {
        return confIntervalLow;
    }

    // high endpoint of 95% confidence interval
    public double confidenceHi() {
        return confIntervalHigh;
    }

    /*
    *
    *
    *
    * */

    private void randomTest(Percolation perc, int n) {
        int x, y;
        while(!perc.percolates()) {
            x = StdRandom.uniform(n) + 1;
            y = StdRandom.uniform(n) + 1;
            if (!perc.isOpen(x, y)) {
                perc.open(x, y);
            }
        }
    }

    // test client (see below)
    public static void main(String[] args) {
        //Exception test
        new PercolationStats(23, 0);

        /*Scanner io = new Scanner(System.in);
        int n = io.nextInt();
        int trials = io.nextInt();
        PercolationStats ps = new PercolationStats(n, trials);
        System.out.println("mean                    = " + ps.mean());
        System.out.println("stddev                  = " + ps.stddev());
        System.out.println("95% confidence interval = [" + ps.confidenceLo() +
                                   ", " + ps.confidenceHi() + "]");*/
    }
}
