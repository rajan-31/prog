import java.io.*;
import java.util.*;

public class Solution {
	public int maxSubArray(final List<Integer> A) {
		int maxEndingHere = A.get(0);
        int maxSoFar = A.get(0);
        // System.out.println(maxEndingHere+"   "+maxSoFar);

        for (int i = 1; i < A.size(); i++) {
            maxEndingHere = Math.max(A.get(i), A.get(i) + maxEndingHere);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);
            // System.out.println(maxEndingHere+"   "+maxSoFar);
        }
        return maxSoFar;
    }

	public static void main(String[] args) {
		List<Integer> A = new ArrayList<Integer>(Arrays.asList(-2, 1, -3, 4, -1, 2, 1, -5, 5, 1));

		Solution sol = new Solution();
		System.out.println(sol.maxSubArray(A));
	}
}