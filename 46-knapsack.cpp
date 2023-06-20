#include <bits/stdc++.h>

static bool comp(pair<int, int> a1, pair<int, int> b1)
{
    int ans = 0;
    double r11 = (double)a1.second / (double)a1.first;
    double r21 = (double)b1.second / (double)b1.first;
    ans = r11 - r21;
    return r11 > r21;
}
double maximumValue(vector<pair<int, int>> &items1, int n, int w)
{

    sort(items1.begin(), items1.end(), comp);

    int Wt = 0;
    double res = 0.0;
    int remain = 0;
    double Val = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (Wt + items1[i].first <= w)
        {
            Wt += items1[i].first;
            Val += items1[i].second;
        }

        else
        {
            remain = (w - Wt);
            Val += (items1[i].second / ((double)items1[i].first) * (double)remain);
            break;
        }
    }

    return Val;
}