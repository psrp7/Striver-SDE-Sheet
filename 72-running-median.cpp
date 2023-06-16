#include<bits/stdc++.h>
void findMedian(int *arr, int n)
{
    int ppt =n;
    priority_queue<int> mx2;
    
    priority_queue<int, vector<int>, greater<int>> mn2;

    int count =0;
    int str =0;
//  for(int i=0; i<n; i++)
    for(int i=0; i<n; i++)
    {
    str = i - 1;
        if(mx2.size() == 0) 
            mx2.push(arr[i]);
        else if(arr[i] > mx2.top())
             mn2.push(arr[i]);
          else
              mx2.push(arr[i]);
             count = str ;
         if(mx2.size() - mn2.size() == 2){
            mn2.push(mx2.top()), mx2.pop();
            count += mx2.top();
         }
             
         else if((mn2.size() - mx2.size()) == 1)
                   mx2.push(mn2.top()), mn2.pop();
        
         if(mx2.size() == mn2.size())
                cout << ((mx2.top() + mn2.top())/2) << " ";
         else 
           cout << mx2.top() << " ";  
           int k = mx2.top() - count ;
    }
}