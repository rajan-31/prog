import java.util.*;

public class Solution {
    public int solve(ArrayList<Integer> A, int B) {
        int max_val = 0;
        int n=A.size();

        for(int i=0; i<B; i++) {
            max_val+=A.get(i);
        }

        int sum = max_val;
        int k=B-1;

        for(int j=n-1; j>n-B-1; j--) {
            sum = Math.max(sum, max_val - A.get(k) + A.get(j));

            max_val = max_val - A.get(k) + A.get(j);
            k--;
        }

        return sum;
    }

    public static void main(String[] args) {
        ArrayList<Integer> A = new ArrayList<Integer> (Arrays.asList(5, -2, 3 , 1, 2));
        int B = 3;

        Solution sol = new Solution();

        System.out.println(sol.solve(A, B));
    }
}
