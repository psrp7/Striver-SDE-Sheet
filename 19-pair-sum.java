import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public static List<int[]> pairSum(int[] arr, int s) {
        List<int[]> ans = new ArrayList<>();

        int n = arr.length;
        Arrays.sort(arr);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((arr[i] + arr[j] )== s) {
                   
                        int[] pair = new int[2];
                        pair[0] = arr[i];
                        pair[1] = arr[j];
                        ans.add(pair);
                    
                }
            }
        }
        return ans;
    }
}
