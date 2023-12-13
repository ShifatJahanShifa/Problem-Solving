#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        cout << hex <<nouppercase<<showbase <<(long long)a << "\n";
        cout <<fixed << setw(15) << setfill('_') << setprecision(2) << showpos << b << "\n";
        cout << setprecision(9) << scientific << uppercase << noshowpos << c << "\n";
    }
}
