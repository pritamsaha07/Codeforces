#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int beautifulMatrix(vector<vector<int>>& mat) {
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] == 1) {
                row = abs(i - 2);
                col = abs(j - 2);
                break;
            }
        }
    }
    return row + col;
}

int main() {
    vector<vector<int>> mat(5, vector<int>(5, 0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }

    int moves = beautifulMatrix(mat);

    cout << moves << endl;

    return 0;
}
