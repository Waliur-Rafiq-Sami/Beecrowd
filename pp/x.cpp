#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> sheep(n); // Use long long for large sums
    for (int i = 0; i < n; i++)
    {
        cin >> sheep[i];
    }

    vector<bool> visited(n, false); // track stars attacked
    int i = 0;                      // start at Star 1 (index 0)

    while (i >= 0 && i < n)
    {
        if (sheep[i] > 0)
        {
            visited[i] = true; // mark star as attacked
            sheep[i]--;        // steal 1 sheep
        }

        // move based on the number of sheep BEFORE stealing
        if ((sheep[i] + 1) % 2 == 1)
        {
            i++; // was odd, move to next star
        }
        else
        {
            i--; // was even, move to previous star
        }
    }

    // Count number of attacked stars
    int attacked = 0;
    long long remaining = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            attacked++;
        remaining += sheep[i];
    }

    cout << attacked << " " << remaining << endl;

    return 0;
}
