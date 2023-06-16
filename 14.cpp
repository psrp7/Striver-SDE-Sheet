#include <bits/stdc++.h>
#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m)
{
    long ans = 1;
    long x1 = x;
    while (n > 0)
    {
        if ((n % 2) != 0)
            ans = ((ans) % m * (x) % m) % m;

        x1 = (((x) % m * (x) % m) % m);
        n = n >> 1;
    }
    return (int)(ans % m);
}