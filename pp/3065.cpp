#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 0;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;

        int sum = 0;
        int e = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            sum += e;
        }
        cout << "Teste " << ++i << endl;
        cout << sum << endl
             << endl;
    }
    return 0;
}