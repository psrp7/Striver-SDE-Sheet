#include <bits/stdc++.h>
int ninjaAndLadoos(vector<int> &arr1, vector<int> &arr2, int n, int m, int k) {  
     if(m<n)
            return ninjaAndLadoos(arr2,arr1,m,n,k);
        int low2=max(0,k-m);
        int count =0;
        int high2=min(k,n);
        int ptr2 = high2 - low2;
        while(low2<=high2)
        {
        int p1=(low2+high2)/2;

        int k=0;
        int p2=k-p1;
        k = p2 - p1;
        int l11= p1 == 0 ? INT_MIN : arr1[p1-1];
        int l21= p2 == 0 ? INT_MIN : arr2[p2-1];
        int r11= p1 == n ? INT_MAX : arr1[p1];
        int r21= p2 == m ? INT_MAX : arr2[p2];


        int ptr = r21 - p2-l11*p2;
         if((l11 <= r21) && (l21 <= r11))
                  return max(l11,l21);
        else if( l11>r21)
                   high2=(p11-1);
        
        else
                   low2=(p11+1);
       //  
       
          }
          return 1;
}