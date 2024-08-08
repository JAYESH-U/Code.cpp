#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> vec;

    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    int i = 0, j = 0;

    while (top <= bottom and left <= right)
    {
        j = left;
        while (j <= right)
            vec.push_back(matrix[top][j++]);
        top++;

        i = top;
        while (i <= bottom)
            vec.push_back(matrix[i++][right]);
        right--;

        if (top <= bottom)
        {
            j = right;
            while (j >= left)
                vec.push_back(matrix[bottom][j--]);
            bottom--;
        }

        if (left <= right)
        {
            i = bottom;
            while (i >= top)
                vec.push_back(matrix[i--][left]);
            left++;
        }
    }

    return vec;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> vec = spiralOrder(matrix);
    for (int i : vec)
        cout << i << " ";

    return 0;
}