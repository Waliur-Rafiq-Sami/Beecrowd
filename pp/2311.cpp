#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string d;
    double arr[7];
    double sum = 0;
    double min = 0;
    double max = 0;
    double w = 0;
    while (n--)
    {
        cin >> d;
        cin >> w;
        cin >> arr[0];
        min = arr[0];
        max = arr[0];
        sum = arr[0];
        for (int i = 1; i < 7; i++)
        {
            cin >> arr[i];
            if (min > arr[i])
            {
                min = arr[i];
            }
            if (max < arr[i])
            {
                max = arr[i];
            }
            sum += arr[i];
        }
        sum -= (min + max);
        sum *= w;
        cout << d << " ";
        printf("%.2f\n", sum);
    }

    return 0;
}