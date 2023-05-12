#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> players;
    for (int i = 0; i < n; i++)
    {
        int runs, wickets;
        cin >> runs >> wickets;
        players.push_back(make_pair(runs, wickets));
    }

    int good_all_rounders = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (players[i].first < players[j].first && players[i].second < players[j].second)
            {
                good_all_rounders -= 1;
                break;
            }
        }
    }

    cout << good_all_rounders << endl;
    return 0;
}
