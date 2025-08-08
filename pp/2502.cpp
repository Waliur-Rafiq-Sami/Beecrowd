#include <iostream>
#include <cctype>
#include <string>
using namespace std;

char decipherChar(char c, const string &m1, const string &m2)
{
    for (int i = 0; i < (int)m1.length(); i++)
    {
        if (tolower(c) == tolower(m1[i]))
        {
            return islower(c) ? tolower(m2[i]) : toupper(m2[i]);
        }
        if (tolower(c) == tolower(m2[i]))
        {
            return islower(c) ? tolower(m1[i]) : toupper(m1[i]);
        }
    }
    return c;
}

int main()
{
    int C, N;
    while (cin >> C >> N)
    {

        string m1, m2;
        cin >> m1 >> m2;

        cin.ignore(); // Ignore newline after numbers
        for (int i = 0; i < N; i++)
        {
            string text;
            getline(cin, text);

            for (char &ch : text)
            {
                ch = decipherChar(ch, m1, m2);
            }
            cout << text << endl;
        }
        cout << endl;
    }
    return 0;
}
