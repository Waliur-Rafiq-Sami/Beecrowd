#include <iostream>
using namespace std;
int main()
{
    int startDay = 0, endDay = 0;
    int sH = 0, sM = 0, sS = 0;
    int eH = 0, eM = 0, eS = 0;

    cin >> startDay;
    cin >> sH;
    cin >> sM;
    cin >> sS;

    cin >> endDay;
    cin >> eH;
    cin >> eM;
    cin >> eS;

    int ansD = 0;
    int ansH = 0;
    int ansM = 0;
    int ansS = 0;
    if (sH > eH || ((sH == eH && sM > eM)) || (sH == eH && sM == eM && sS > eS))
    {
        ansD = endDay - startDay - 1;
        if (eS >= sS)
        {
            ansS = eS - sS;
        }
        else
        {
            ansS = 60 + eS - sS;
            sM += 1;
        }

        if (eM >= sM)
        {
            ansM = eM - sM;
        }
        else
        {
            ansM = 60 + eM - sM;
            sH += 1;
        }

        if (eH >= sH)
        {
            ansH = eH - sH;
        }
        else
        {
            ansH = 24 + eH - sH;
        }
    }
    else
    {
        ansD = endDay - startDay;
        if (eS >= sS)
        {
            ansS = eS - sS;
        }
        else
        {
            ansS = 60 + eS - sS;
            sM += 1;
        }

        if (eM >= sM)
        {
            ansM = eM - sM;
        }
        else
        {
            ansM = 60 + eM - sM;
            sH += 1;
        }

        if (eH >= sH)
        {
            ansH = eH - sH;
        }
        else
        {
            ansH = 24 + eH - sH;
        }
    }

    // cout << endl;
    // cout << startDay << endl
    //      << sH << " : " << sM << " : " << sS << endl;
    // cout << endDay << endl
    //      << eH << " : " << eM << " : " << eS << endl;

    // output
    cout << ansD << " dia(s)\n"
         << ansH << " hora(s)\n"
         << ansM << " minuto(s)\n"
         << ansS << " segundo(s)" << endl;
    return 0;
}