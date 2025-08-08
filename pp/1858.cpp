#include <iostream>
using namespace std;
int main()
{
    int n;
    int idx = -1;
    int value = 21;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (value > x)
        {
            value = x;
            idx = i + 1;
        }
    }
    cout << idx << endl;
    return 0;
}