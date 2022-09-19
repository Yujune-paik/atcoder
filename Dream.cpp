#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

vector<string> divide{"dream", "dreamer", "erase", "eraser"};

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

    bool can = true;
    for (int i = 0; i < s.size();) {
        bool can2 = false;

        for (int j = 0; j < 4; j++) {
            string d = divide[j];
            if (s.substr(i, d.size()) == d) {
                can2 = true;
                i += d.size();
            }
        }

        if (!can2) {
            can = false;
            break;
        }
    }

    if (can)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
