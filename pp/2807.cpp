#include <iostream>
using namespace std;

int f_b(int &f, int &l)
{
    int sum = f + l;
    f = l;
    l = sum;
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int f = 0;
    int l = 1;
    int v[n];
    n--;
    int i = 0;
    while (n--)
    {
        v[i++] = f_b(f, l);
    }
    while (i--)
    {
        cout << v[i] << " ";
    }
    cout << 1 << endl;

    return 0;
}