#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], b[n], a[n];
    int s_c[n], b_c[n], a_c[n];

    int sN = 0, sB = 0, sA = 0;
    int sN_c = 0, sB_c = 0, sA_c = 0;

    string aa;
    for (int i = 0; i < n; i++)
    {
        cin >> aa;
        cin >> s[i] >> b[i] >> a[i];
        cin >> s_c[i] >> b_c[i] >> a_c[i];
        sN += s[i];
        sB += b[i];
        sA += a[i];
        sN_c += s_c[i];
        sB_c += b_c[i];
        sA_c += a_c[i];
    }

    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", (sN_c / (double)sN) * 100,
           (sB_c / (double)sB) * 100,
           (sA_c / (double)sA) * 100);

    return 0;
}