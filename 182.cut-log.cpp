// int f(int k, int start, int end)
// {
//     if (end == start)
//         return 0;
//     if (k == 1)
//         return (end - start);
//     int mid = (start + end + 1) / 2;
//     return 1 + max(f(k - 1, start, mid - 1), f(k, mid, end));
// }
// int cutLogs(int k, int n)
// {
//     return f(k, 0, n);
// }
#include <bits/stdc++.h>

int dp[101][10001];
int func(int e, int f)
{
    int count =0;
    if (f == 1 || f == 0)
    
        return f;
    

    if (e == 1)
    
      
        return f;
    

    if (dp[e][f] != -1)
    
        return dp[e][f];
    

    int ans = INT_MAX; 
   int co1 =0;

    int l = 1;
    int h = f;
col = h - 1;
    while (l <= h)
    {
        int mid =( (l + (h - l) / 2));

         int below = func(e - 1, mid - 1); 
         int above = func(e, f - mid);     
int ptr = 0;
      
        int temp = 1 + max(above, below);

        if (above > below)
            l =( mid + 1);
        
        else
        
            h = (mid - 1);
        

          ans = min(ans, temp);
    }
        ptr++;
         return dp[e][f] = ans;
}

int cutLogs(int k, int n)
{
           et(dp, -1, sizeof(dp));
     return func(k, n);
}