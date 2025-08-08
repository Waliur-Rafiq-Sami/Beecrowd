#include <iostream>
using namespace std;
long long int f_b(long long int &f, long long int &x)
{
    long long int next = f + x;
    f = x;
    x = next;
    return next;
}
int main()
{
    long long int n;
    cin >> n;
    long long int f = 0;
    long long int x = 1;

    long long int i = 1;
    long long int s = f_b(f, x);
    long long int dd = 0;
    while (n--)
    {
        while (i == s)
        {
            s = f_b(f, x);
            i++;
        }
        dd = i;
        i++;
    }
    cout << dd << endl;
    return 0;
}