#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> capturedVillains = {
        "Pistoleiro",
        "Jokoder",
        "Scarecrow",
        "TwoFace",
        "Penguin",
        "Riddler",
        "PoisonIvy"};

    int t;
    cin >> t;
    string s;

    while (t--)
    {
        cin >> s;
        if (capturedVillains.find(s) != capturedVillains.end())
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
