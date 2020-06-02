import javax.swing.text.Segment;

public class BruteCollinearPoints {

    private LineSegment[] lineSegments = new LineSegment[1];
    private int numLine = 0;

    // finds all line segments containing 4 points
    public BruteCollinearPoints(Point[] points) {
        Point[] temp = new Point[4];
        for (int i = 0; i < points.length; i++) {
            temp[0] = points[i];
            for (int j = i + 1; j < points.length; j++) {
                temp[1] = points[j];
                for (int k = j + 1; k < points.length; k++) {
                    if (points[i].slopeOrder().compare(points[j], points[k]) != 0) continue;
                    temp[2] = points[k];
                    for (int z = k + 1; z < points.length; z++) {
                        if (points[i].slopeOrder().compare(points[k],points[z]) == 0) {
                            temp[3] = points[z];
                            MergeSort.sort(temp, points[0].slopeOrder());
                            LineSegment ls = new LineSegment(temp[0], temp[1]);
                            if (numLine == lineSegments.length) {
                                resize(lineSegments.length * 2);
                            }
                            lineSegments[numLine++] = ls;
                        }
                    }
                }
            }
        }
    }

    private void resize(int i) {

    }

    // the number of line segments
    public int numberOfSegments() {
        return 0;
    }
    // the line segments
    public LineSegment[] segments() {
        return null;
    }
}
