#include <iostream>
using namespace std;

int getHashValue(int a, int m)
{
    return a % m;
}
int getHashValue2(double a, int m)
{
    double f = a * 0.6180339887;

    int q = f;
    double z = f - q;

    return m * z;
}
int getHashValue_folding(int a, int b, int c, int m)
{
    int sum = a + b + c;
    cout << sum << endl;
    cout << sum % 100 << endl;
    return (a + b + c) % m;
}

int main()
{
    // cout << getHashValue(1234, 97) << endl;
    // cout << getHashValue(5462, 97) << endl;

    cout << getHashValue_folding(5678, 321, 34567, 100) << endl;

    return 0;
}