#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    std::vector<std::vector<int>> matrix = {
        {1}

    };
    int n = matrix[0].size();
    cout << n << endl;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            int t = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i] = t;
        }
    }
    for (auto row:matrix)
    {
        for (auto num:row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (auto &row:matrix)
    {
        reverse(row.begin(),row.end());
    }

     //Reverse each row individually
    // Output:
    // 3 2 1
    // 6 5 4
    // 9 8 7
    for (auto row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
