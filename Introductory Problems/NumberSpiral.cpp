#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int64_t x, y;
        cin >> x >> y;
 
        if (y >= x)
        {
            if (y % 2 == 0)
            {
                y--;
                int64_t ans = y * y + x;
                cout << ans << endl;
            }
            else
            {
                int64_t ans = y * y - x + 1;
                cout << ans << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                int64_t ans = x * x - y + 1;
                cout << ans << endl;
            }
            else
            {
                x--;
                int64_t ans=x*x+y;
                cout<<ans<<endl;
            }
        }
    }
}
