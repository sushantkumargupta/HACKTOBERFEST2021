// problem link : https://codeforces.com/contest/1593/problem/B
/*problem statement : It is given a positive integer n. In 1 move, one can select any single digit and remove it (i.e. one selects some position in the number and removes the digit located at this position). The operation cannot be performed if only one digit remains. If the resulting number contains leading zeroes, they are automatically removed.

E.g. if one removes from the number 32925 the 3-rd digit, the resulting number will be 3225. If one removes from the number 20099050 the first digit, the resulting number will be 99050 (the 2 zeroes going next to the first digit are automatically removed).

What is the minimum number of steps to get a number such that it is divisible by 25 and positive? It is guaranteed that, for each n occurring in the input, the answer exists. It is guaranteed that the number n has no leading zeros.

Input
The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

Each test case consists of one line containing one integer n (25≤n≤1018). It is guaranteed that, for each n occurring in the input, the answer exists. It is guaranteed that the number n has no leading zeros.

Output
For each test case output on a separate line an integer k (k≥0) — the minimum number of steps to get a number such that it is divisible by 25 and positive.


Example
input
5
100
71345
3259
50555
2050047
output
0
3
1
3
2
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define count n
void solve()
{
   
    string s;
    cin >> s;
    ll end_p = s.size() - 1;
    ll dig = end_p + 1;
    for (ll i = end_p; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            for (ll j = i - 1; j >= 0; j--)
            {
                if (s[j] == '5' || s[j] == '0')
                {
                    dig = min(dig, end_p - (j + 1));
                }
            }
        }

        if (s[i] == '5')
        {
            for (ll j = i - 1; j >= 0; j--)
            {
                if (s[j] == '2' || s[j] == '7')
                {
                    dig = min(dig, end_p - (j + 1));
                }
            }
        }
    }
    cout << dig << endl;
}

int main()
{
    FAST1;
    FAST2;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
