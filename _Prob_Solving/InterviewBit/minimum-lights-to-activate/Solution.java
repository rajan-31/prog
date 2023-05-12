import java.io.*;
import java.util.*;

public class Solution {
	public int solve(ArrayList<Integer> A, int B) {
	int n=A.size();
        
        int i=0;
        int count=0;
        while(i<n) {
            // we haven't selected working bulb for current iteration/ range of bulbs
            boolean curStat = false;    // current state

            int j = Math.max(0, i-B+1);
            int k = Math.min(n-1, i+B-1);

            System.out.println(j+" "+k);
            for(int l=k; l>=j; l--) {
                if(A.get(l) == 1) {
                    // we found lefmost working bulb in current iteration
                    curStat = true;
                    count++;

                    // set i outside the range of currently found bulb
                    i=l+B;  // note that B is added to l and not i

                    break;
                }
            }

            // not able to find any working bulb
            if(curStat == false) return -1;
        }

        return count;

    }

	public static void main(String[] args) {
		ArrayList<Integer> A = new ArrayList<Integer> (Arrays.asList(0, 0, 1, 1, 1, 0, 0, 1));
		int B = 3;

		Solution sol = new Solution();
		System.out.println(sol.solve(A, B));
	}
}