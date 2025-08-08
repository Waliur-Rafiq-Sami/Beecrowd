#include <iostream>
using namespace std;
int main()
{
    double salary;
    cin >> salary;

    double t = 0;
    if (salary <= 400)
        t = salary * 15 / 100;
    else if (salary <= 800)
        t = salary * 12 / 100;
    else if (salary <= 1200)
        t = salary * 10 / 100;
    else if (salary <= 2000)
        t = salary * 7 / 100;
    else
        t = salary * 4 / 100;

    cout << "Novo salario : ";
    printf("%.2lf\n", salary + t);
    cout << " Reajuste ganho : ";
    printf("%.2lf\n", t);

    return 0;
}