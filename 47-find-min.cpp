import java.util.* ;
import java.io.*; 
public class Solution
{
public static int findMinimumCoins(int amount)
    {
        // Write your code here.
        int total =0;
           int count =0;

         if(amount == 1 || amount== 2 || amount == 5 || amount == 10 || amount == 20 || amount == 100 || amount == 500 || amount == 1000
         ){
             return 1;
         }else
         {
             int a = amount;
              while(amount != 0){
                      if (a >= 1000) {
                    a -= 1000;
                    count++;
                } else if (a >= 500) {
                    a -= 500;
                    count++;
                } else if (a >= 100) {
                    a -= 100;
                    count++;
                } else if (a >= 50) {
                    a -= 50;
                    count++;
                } else if (a >= 20) {
                    a -= 20;
                    count++;
                } else if (a >= 10) {
                    a -= 10;
                    count++;
                } else if (a >= 5) {
                    a -= 5;
                    count++;
                } else if (a >= 2) {
                    a -= 2;
                    count++;
                }else if(a == 1){
                    a -=1;
                    count++;
                }

                if( a < 1){
                    
                    break;
                }
              }
 
         }
         return count;
    }
}
