#include <iostream>
using namespace std;
// January: 31 days
// February: 28 days (29 in a leap year)
// March: 31 days
// April: 30 days
// May: 31 days
// June: 30 days
// July: 31 days
// August: 31 days
// September: 30 days
// October: 31 days
// November: 30 days
// December: 31 days

int main()
{
    int m, d;
    int monthArr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    while (cin >> m >> d)
    {
        if (m == 12 && d == 25)
        {
            cout << "E natal!" << endl;
        }
        else if (m == 12 && d == 24)
        {
            cout << "E vespera de natal!" << endl;
        }
        else if (m == 12 && d > 25)
        {
            cout << "Ja passou!" << endl;
        }
        else
        {
            int dd, mm, sum = 0;
            for (int i = m - 1; i < 12; i++)
            {
                sum += monthArr[i];
            }
            cout << "Faltam " << sum - d << " dias para o natal!" << endl;
        }
    }
    return 0;
}