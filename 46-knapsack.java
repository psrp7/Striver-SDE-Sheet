import java.util.*;

import java.io.*;

public class Solution {

        public static List<Integer> maximumMeetings(int[] start, int[] end) {


        int n2 = start.length;

             List<List<Integer>> lsss = new ArrayList<>();
          int count =0;
        for (int i = 0; i < n2; i++) {

            List<Integer> s = new ArrayList<>();

            s.add(start[i]);

            s.add(end[i]);

            s.add(i);

            lsss.add(s);
            count = s.size();

        }
      
        Collections.sort(lsss, (a1, b1) -> (a1.get(1) - b1.get(1)));
            int ptr= count;
                  List<Integer> l1 = new ArrayList<>();

        int e1 = lsss.get(0).get(1);

        l1.add(lsss.get(0).get(2) + 1);

        for (int i = 1; i < lsss.size(); i++) {
              ptr++;  if (e1 < lsss.get(i).get(0)) { l1.add(lsss.get(i).get(2) + 1);
 e1 = lsss.get(i).get(1);
                //  ptr =lsss.get(i) - e1;
            }

        }

        return l1;

    }

}