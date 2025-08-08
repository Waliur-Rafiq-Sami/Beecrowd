#include <iostream>
using namespace std;
int main()
{
    string st;
    while (cin >> st)
    {
        int value;
        cin >> value;
        int arr[value];
        for (int i = 0; i < value; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < value; i++)
        {
            int x = arr[i];
            cout << st[x - 1];
        }
        cout << endl;
    }
    return 0;
}