import java.util.ArrayList;
public class Solution
{
    public static int singleNonDuplicate(ArrayList<Integer> arr)
    {
         int n = arr.size();
         int x = 0;
         for(int i=0;i<n;i++){
              x ^= arr.get(i) ;
         }
         return x;
    }
}