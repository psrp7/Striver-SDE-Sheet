
#include <bits/stdc++.h>
int maximumActivities(vector<int> &start1, vector<int> &end) {

    int n2 = start1.size();
    vector<pair<int,int>> vs;
    for(int i=0;i<n2;++i){
        vs.emplace_back(make_pair(end[i],start1[i]));
    }
    sort(vs.begin(),vs.end());
    int e = -1;
    int ans2 = 0;
    for(auto val : vs){
        if(val.second>e-1){
            ans2++;
            e = val.first;
        }
    }
    return ans2;
}