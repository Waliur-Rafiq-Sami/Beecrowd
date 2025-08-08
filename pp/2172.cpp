#include <iostream>
using namespace std;
int main()
{
    int s, m;
    while (true)
    {
        cin >> s >> m;
        if (s == 0 && m == 0)
        {
            break;
        }

        long long int sum = 0;
        for (int i = 0; i < s; i++)
        {
            sum += m;
        }
        cout << sum << endl;
    }

    return 0;
}