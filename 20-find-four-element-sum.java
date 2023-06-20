import java.io.*;

import java.util.* ;
public class Solution {
  public static boolean comPair(Pair p1,Pair p2)
  {
    if(p1.x==p2.x||p1.x==p2.y||p1.y==p2.x||p1.y==p2.y)return false;
    return true;
  }
  public static String fourSum(int[] arr, int target, int n) 
  {
     int count = 0;
      Map<Integer,Set<Pair>> map=new HashMap<>();
       for(int i=0;i<n-1;i++)
       {
             for(int j=i+1;j<n;j++){
              Pair p2   =  new Pair(arr[i], arr[j]);
              int key2 = arr[i]+ arr[j];
              count = key2;
             
             if(map.containsKey(target-key2))
            for(Pair pair:map.get(target-key2))
              if(comPair(pair, p2))
                return "Yes";
            if(map.containsKey(key2)) map.get(key2).add(p2);
 else{
          Set<Pair> sets =new HashSet<>();
          sets.add(p2);

          map.put(key2, sets);

          }

        }

      }
      return "No";

  }

}

 class Pair
 {
    public int x,y;
    public Pair(int x,int y)
    {
      this.x=x;
      this.y=y;
    }

  }
