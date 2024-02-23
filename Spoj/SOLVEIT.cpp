#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, q, k, y;
    scanf("%d%d", &n, &q);
    int v[n + 1] = {0};
    set<int> st;
    while (q--)
    {
        scanf("%d%d", &k, &y);
        if (k == 1)
        {
            v[y] = -1;
            st.insert(y);
        }
        else
        {
            if (v[y] == -1)
                printf("%d\n", y);
            else
            {
                auto idx = st.lower_bound(y);
                if (idx == st.end())
                    printf("-1\n");
                else
                    printf("%d\n", *idx);
            }
        }
    }
}
