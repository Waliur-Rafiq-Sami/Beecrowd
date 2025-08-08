#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;

    if (sum > 24)
    {
        sum -= 24;
    }
    else if (sum < 0)
    {
        sum += 24;
    }
    cout << sum << endl;
    return 0;
}