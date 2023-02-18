#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size() - 1,temp;

        for (int i = 0; i <= (n + 1) / 2; i++) {
            for (int sqr = i; sqr < (n - i); sqr++) {
                //clockwise
                temp = mat[n - sqr][i];
                mat[n - sqr][i] = mat[n - i][n - sqr] ;
                mat[n - i][n - sqr] = mat[sqr][n - i];
                mat[sqr][n - i] = mat[i][sqr];
                mat[i][sqr] = temp;

                //anticlockwise
                // temp = mat[i][sqr];
                // mat[i][sqr] = mat[sqr][n - i];
                // mat[sqr][n - i] = mat[n - i][n - sqr];
                // mat[n - i][n - sqr] = mat[n - sqr][i];
                // mat[n - sqr][i] = temp;
            }
        }
    }
};

int main() {
    Solution obj;
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (vector<int> i : a) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    obj.rotate(a);
    for (vector<int> i : a) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}