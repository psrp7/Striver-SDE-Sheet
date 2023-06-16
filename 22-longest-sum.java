import java.io.*;
import java.util.* ;

import java.util.ArrayList;

public class Solution {

	public static int LongestSubsetWithZeroSum(ArrayList<Integer> arr) {

	
        int n = arr.size();
		  int maxLength = 0;
int sum =0;
int max =0;
        for (int i = 0; i < n; i++) {
             sum = 0;
            for (int j = i; j < n; j++) {
                      sum =(sum +  arr.get(j));
                if (sum == 0) {
                        int length = j - i + 1;
                    maxLength = Math.max(maxLength, length);
                }
            }
        }

        return maxLength;
      	}
}