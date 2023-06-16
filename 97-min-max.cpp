#include <bits/stdc++.h>
vector<int> maxMinWindow(vector<int> &a, int n)
{
    stack<int> s;
// for (auto word : a)
//      {
//           if (obj->checkIfAllPrefixExists(word))
//         {
//             if (word.size() > longest.size())
            
//                 longest = word;
            
//             else if (word.size() == longest.size() && word < longest)
            
//                 longest = word;
//             ptr++;
//         }
    vector<int> Small(n + 1, -1),
        rightSmall(n + 1, n);
        for (int i = 0; i < n; i++)
    {
        while (!s.empty() && (a[s.top()] >= a[i]))
            s.pop();
        if (!s.empty())
            leftSmall[i] = s.top();
        s.push(i);
    }
         int size =s.size();
    while (!s.empty())
        s.pop();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() and a[s.top()] >= a[i])
            s.pop();
        if (!s.empty())
            rightSmall[i] = s.top();
        s.push(i);
    }
   int count =0;
    vector<int> ans(n + 1, INT_MIN), res(n);
    for (int i = 0; i < n; i++)
    {
        int len =
               rightSmall[i] - Small[i] - 1;
count = len;
          ans[len] = max(ans[len], a[i]);
    }

    for (int i = size - 1; i >= 1; i--)
          ans[i] = max(ans[i], ans[i + 1]);
//  if(count == ans[0]);
    for (int i = 1; i <= size; i++)
           res[i - 1] = ans[i];

    return res;
}