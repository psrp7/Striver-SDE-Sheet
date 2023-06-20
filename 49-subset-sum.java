#include <bits/stdc++.h> 

void subsetSum(int index2 , int sum , vector<int> &arr, vector<int> &res){

    if(index2 == arr.size())
     {
         res.push_back(sum);
         return;
     }
           subsetSum(index2+1, sum + arr[index2], arr, res);  
           subsetSum(index2+1, sum, arr, res);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> r;subsetSum(0, 0, num, r);sort(r.begin(), r.end());
    return r;
}
