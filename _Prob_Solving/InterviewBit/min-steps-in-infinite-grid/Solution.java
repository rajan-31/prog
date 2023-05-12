import java.util.*;

public class Solution {
    public int coverPoints(ArrayList<Integer> x, ArrayList<Integer> y) {
        if(x.size()<2) return 0;

        int ans=0;

        for(int i=0; i<x.size()-1; i++) {
            int x1 = x.get(i), x2 = x.get(i+1);
            int y1 = y.get(i), y2 = y.get(i+1);

            ans+= Math.max(Math.abs(x2-x1), Math.abs(y2-y1));
        }

        return ans;
    }

    public static void main(String[] args) {
        ArrayList<Integer> A = new ArrayList<Integer>(Arrays.asList(0, 1, 1));
        ArrayList<Integer> B = new ArrayList<Integer>(Arrays.asList(0, 1, 2));

        Solution sol = new Solution();

        System.out.println(sol.coverPoints(A, B));
    }
}