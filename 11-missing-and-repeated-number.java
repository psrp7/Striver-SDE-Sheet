import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

    public static int[] missingAndRepeating(ArrayList<Integer> arr, int n) {
        int repeat = 0;
           HashSet<Integer> ans = new HashSet<>();
             int i =0;
             int flag =0;
             int index =0;
           for(i=0;i<n;i++){
               if(ans.contains(arr.get(i))==true && flag == 0){
                  flag = 1;
                  index = i;
               }
                 ans.add(arr.get(i));
           }
           int [] a = new int[2];
            a[1] = arr.get(index);
     
          for(int j = 1;j<=n;j++){
              if(ans.contains(j) == false){
                 
                  a[0] = j;
                break;
              }
          }
         return a;
        
    }
}