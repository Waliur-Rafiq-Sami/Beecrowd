#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set<string> uniqueJewels;
    string s;

    while (cin >> s)
    {
        uniqueJewels.insert(s);
    }

    cout << uniqueJewels.size() << endl;
    return 0;
}