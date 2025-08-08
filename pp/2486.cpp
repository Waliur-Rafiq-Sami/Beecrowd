#include <iostream>
using namespace std;

int list_vitamin(string s)
{
    if (s == "suco de laranja")
        return 120;
    if (s == "morango fresco")
        return 85;
    if (s == "mamao")
        return 85;
    if (s == "goiaba vermelha")
        return 70;
    if (s == "manga")
        return 56;
    if (s == "laranja")
        return 50;
    if (s == "brocolis")
        return 34;
    return 0;
}
int main()
{
    int n = 0;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            string s;
            cin >> c;
            cin.ignore();
            getline(cin, s);
            int r = list_vitamin(s);
            r *= c;
            sum += r;
        }
        if (sum > 130)
        {
            cout << "Menos " << sum - 130 << " mg" << endl;
        }
        else if (sum < 110)
        {
            cout << "Mais " << 110 - sum << " mg" << endl;
        }
        else
        {
            cout << sum << " mg" << endl;
        }
    }
    return 0;
}