#include <iostream>
#include <vector> // Include the vector header file

using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<vector<string>> keys = {
            {"a", "b", "c"},
            {"d", "e", "f"},
            {"g", "h", "i"},
            {"j", "k", "l"},
            {"m", "n", "o"},
            {"p", "q", "r", "s"},
            {"t", "u", "v"},
            {"w", "x", "y", "z"}};

        vector<string> result;

        if (digits.empty())
        {
            return result; // Return an empty vector if the input string is empty
        }

        backtrack(keys, digits, 0, "", result);

        return result;
    }

private:
    void backtrack(const vector<vector<string>> &keys, const string &digits, int index, string current, vector<string> &result)
    {
        if (index == digits.size())
        {
            result.push_back(current);
            return;
        }

        int digit = digits[index] - '2'; // Convert char to integer ('2' maps to index 0)

        for (const string &letter : keys[digit])
        {
            backtrack(keys, digits, index + 1, current + letter, result);
        }
    }
};

int main()
{
    Solution s;
    vector<string> result = s.letterCombinations("23");
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}