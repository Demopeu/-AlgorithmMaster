#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> N;
    vector<pair<int, int>> list;
    for (size_t i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        list.push_back(make_pair(a, b));
    }

    sort(list.begin(), list.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first){
            return a.second < b.second;
        }
        return a.first < b.first;
        });
    for (size_t i = 0; i < N; i++){
        cout << list[i].first <<' '<< list[i].second << '\n';
    }
    
}

