#include <iostream>
using namespace std;
class paiR
{
public:
    int a;
    double b;
};
int main()
{
    int n;
    cin >> n;
    paiR arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i].a >> arr[i].b;

    int pos = 0;
    double big = arr[0].b;
    for (int i = 0; i < n - 1; i++)
    {
        if (big < arr[i + 1].b)
        {
            big = arr[i + 1].b;
            pos = i + 1;
        }
    }

    if (arr[pos].b >= 8)
    {
        cout << arr[pos].a << endl;
    }
    else
    {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}