#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits {9};
    int flag = 1;
    for (int i=digits.size()-1; i>=0; i--)
    {
        if (digits[i]==9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] = digits[i]+1;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        vector<int>output(digits.size()+1);
        output[0] = 1;
        for (int &i: output)
        {
            cout << i << " ";
        }

    }
    else
    {
        for (int &i: digits)
        {
            cout << i << " ";
        }

    }

}
