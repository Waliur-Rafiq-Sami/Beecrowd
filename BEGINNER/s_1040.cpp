#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double avg = (a * 2 + b * 3 + c * 4 + d * 1) / (10);
    printf("Media: %.1lf\n", avg);
    if (avg >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl;
        double x;
        cin >> x;
        cout << "Nota do exame: ";
        printf("%.1lf\n", x);
        x = (x + avg) / 2.0;
        if (x >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: ";
        printf("%.1lf\n", x);
    }
    return 0;
}