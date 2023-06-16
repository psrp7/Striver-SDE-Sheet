import java.io.*;
import java.util.*;

import java.util.ArrayList;

public class Solution {
    public static ArrayList<Integer> majorityElementII(ArrayList<Integer> arr) {

        int n = arr.size();
        int count = 0;
        ArrayList<Integer> res2 = new ArrayList<>();
        Map<Integer, Integer> hm2 = new HashMap<>();
        for (int i : arr) {
            hm2.put(i, hm2.getOrDefault(i, 0) + 1);
        }
        for (int i : hm2.keySet()) {
            if (hm2.get(i) > (int) Math.floor(n / 3)) {
                res2.add(i);
                count++;
            }
        }
        return res2;
    }
}