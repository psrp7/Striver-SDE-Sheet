import java.io.*;
import java.util.*;

public class Solution {
	public static int findMajority(int[] arr, int n) {
		// Write your code here.

		int ptr = arr[0];
		int count = 1;
		int mid = (n / 2);
		Arrays.sort(arr);
		int rep = 1;
		int ptr2 =0;
		for (int i = 1; i < n; i++) {
			if (ptr == arr[i]) {

				count++;
				rep++;
				ptr2++;
			} else 
				count--;
			
			if (count <= 0) {
				count = 1;
				rep = 1;
				ptr = arr[i];
			}
		}
		count = 0;

		for (int i = 0; i < n; i++)

		{

			if (arr[i] == ptr)

			

				count++;

			
		}
		if (count > mid) {
			return ptr;
		} else 
			return -1;
		
	}
}