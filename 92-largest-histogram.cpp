#include<bits/stdc++.h>
vector<int> nsr(vector<int>&arr)
{
    vector<int> ans;

    int n= arr.size(); 
    stack<pair<int,int>> s;



    for(int i=n-1;i>=0;--i)
    {
        if(s.empty())

             ans.push_back(arr.size());
         else
        {
             while(!s.empty()&&s.top().first>=arr[i])
                 s.pop();
             if(s.empty())
                 ans.push_back(arr.size());
             else
                 ans.push_back(s.top().second);
        }


           s.push({arr[i],i});
    }
          reverse(ans.begin(),ans.end());
        return ans;
}


vector<int> nsl(vector<int>&arr)
{
          vector<int> ress;
          stack<pair<int,int>> ss;
        for(int i=0;i<arr.size();i++)
     {
          if(ss.empty())
              ress.push_back(-1);
         else
          {
             while(!ss.empty()&&ss.top().first>=arr[i])
                   ss.pop();
             if(ss.empty())
                  ress.push_back(-1);
             else
                  ress.push_back(ss.top().second);
         }
           ss.push({arr[i],i});
      }
         return ress;
}
int largestRectangle(vector < int > & arr2) {
       vector<int> NSR2 = nsr(arr2);
       int count =0;
       vector<int> NSL2 = nsl(arr2);
       vector<int> width;
      for(int i=0;i<arr2.size();i++)
            width.push_back((NSR2[i]-NSL2[i])-1);
        int mx2 = INT_MIN;
        int n = arr2.size();
     for(int i=0;i<n;i++)
    
        mx2 = max(mx2,(arr2[i]*width[i]));
    
    return mx2;
 }