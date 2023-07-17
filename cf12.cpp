#include <climits>
#include<iostream>

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> mp = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ans += mp[s];
    }

    cout << ans << endl;
    return 0;
}

