#include <iostream>
#include <algorithm>
using namespace std;

class value
{
public:
    int a;
    int b;
    int c;
};

class people
{
public:
    string name;
    int inx;
    char ope;
    bool t = true;
};

int main()
{
    int n;
    while (cin >> n)
    {
        value value[n];
        people people[n];
        int a, b, c;
        char g;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> g >> c;
            value[i].a = a;
            value[i].b = b;
            value[i].c = c;
        }
        string name;
        int inx;
        char ope;
        for (int i = 0; i < n; i++)
        {
            cin >> name >> inx >> ope;
            inx--;
            people[i].name = name;
            people[i].inx = inx;
            people[i].ope = ope;
        }

        // operator
        int count_n = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << "ops : " << people[i].ope << endl;
            if (people[i].ope == '+')
            {
                // cout << "plus" << endl;
                int id = people[i].inx;
                if (value[id].a + value[id].b == value[id].c)
                {
                    count_n++;
                    people[i].t = false;
                    // cout << "tt " << people[i].t << endl;
                }
            }
            else if (people[i].ope == '-')
            {
                int id = people[i].inx;
                if (value[id].a - value[id].b == value[id].c)
                {
                    count_n++;
                    people[i].t = false;
                }
            }
            else if (people[i].ope == '*')
            {
                int id = people[i].inx;
                if (value[id].a * value[id].b == value[id].c)
                {
                    count_n++;
                    people[i].t = false;
                }
            }
            else if (people[i].ope == 'I')
            {
                int id = people[i].inx;
                if (value[id].a + value[id].b != value[id].c &&
                    value[id].a - value[id].b != value[id].c &&
                    value[id].a * value[id].b != value[id].c)
                {
                    count_n++;
                    people[i].t = false;
                }
            }
        }
        string sx[n];
        int j = 0;
        if (count_n == n)
        {
            cout << "You Shall All Pass!" << endl;
            continue;
        }
        else if (count_n == 0)
        {
            cout << "None Shall Pass!" << endl;
            continue;
        }
        else
        {
            // cout << "\n\n-------output------" << endl;
            for (int i = 0; i < n; i++)
            {
                if (people[i].t)
                {
                    // cout << people[i].name << " ";
                    sx[j++] = people[i].name;
                }
            }
            // cout << endl;
        }
        sort(sx, sx + j);
        for (int i = 0; i < j; i++)
        {
            cout << sx[i];
            if (i != j - 1)
                cout << " ";
            else
                cout << endl;
        }
        // cout << "\n\n-------output------" << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << value[i].a << " ";
        //     cout << value[i].b << "=";
        //     cout << value[i].c;
        //     cout << endl;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << people[i].name << " ";
        //     cout << people[i].inx << " ";
        //     cout << people[i].ope;
        //     cout << endl;
        // }
        // cout << endl;
    }

    return 0;
}