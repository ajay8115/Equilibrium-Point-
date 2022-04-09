#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int equilibriumPoint(long long a[], int n)
{
    long long sumr = 0;
    for (int i = 0; i < n; i++)
    {
        sumr += a[i];
    }

    long long suml = a[0];
    sumr -= a[0];
    for (int i = 1; i < n; i++)
    {
        sumr -= (a[i]);

        if (sumr == suml)
        {
            return i + 1;
        }
        suml += a[i - 1];
    }

    return -1;
}