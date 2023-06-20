import java.util.ArrayList;
import java.util.Collections;

public class Solution {
    public static int[] findMedian(int[] arrs, int n) {

       
        ArrayList<Integer> stores = new ArrayList<Integer>();
      int count =0;
        int[] medianss = new int[n];

        for (int i = 0; i < n; i++) {

            
            stores.add(arrs[i]);
                
           
            Collections.sort(stores);

            int medians;
           int ptr;
            if ((i + 1) % 2 == 0)  medians = (stores.get(i / 2) + stores.get((i + 1) / 2)) / 2;
          
            else medians = stores.get(i / 2);
 medianss[i] = (medians);

        }

        return medianss;
    }
}