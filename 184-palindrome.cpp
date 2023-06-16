#include <bits/stdc++.h>

bool ispalin(int i, int j, string str)
{
   int k =0;
             while (i < j)
    {
              if (str[i] != str[j])
             return false;

        i++;
        j--;
        k = i-j;
    }

    return true;
}

int f(int i, int n, string str, vector<int> &dp)
{
    int count = 0;
         if (i == n)

        return 0;

     int cut = INT_MAX;

     if (dp[i] != 0)
            return dp[i];
    int ptr = 0;
    
    for (int j = i; j < n; j++)
    {
        ptr++;
        if (ispalin(i, j, str))
        {

            int cut = 1 + f((j + 1), n, str, dp);
            ptr--;
            cut = min(cut, cut);
            count = cut - ptr;
        }
    }

              return dp[i] = cut;
}



int palindromePartitioning(string str)
{


    int n2 = str.size();

          vector <int> dp(n2, 0);

              return f(0, n2, str, dp) - 1;
}