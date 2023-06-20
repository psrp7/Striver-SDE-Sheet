#include <bits/stdc++.h> 
void recur_permute(string &s, vector<string>&ans, string&ds, int freq[])
    {
        int n1 = ds.size();
        int n2 = s.size();
             if(n1==n2)
        {
            ans.push_back(ds);
            return;
        }
               for(int i=0;i<n2;i++)
         {
             if(!freq[i])
             {
                 ds.push_back(s[i]);
                 freq[i]=1;

                   recur_permute(s,ans,ds,freq);
                 freq[i]=0;

                    ds.pop_back();
            }
        }
    }
vector<string> findPermutations(string &s) {
 
	      vector<string>anss;
 string dss="";  int size = s.size();
      int freqs[size];for(int i=0;i<s.size();i++)freqs[i]=0; recur_permute(s,anss,dss,freqs);
        
        return anss;
}