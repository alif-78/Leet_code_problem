#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "AB";
    int numRows = 1;
    vector<string>v(numRows,"");
    int r,flag=1;
    if (numRows == 1)
    {
        cout << s << endl;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if (flag)
        {
            v[r]+= s[i];
            //cout << "s[i]= " << s[i] <<" r: " << r <<" flag: " << flag <<  " v[" << r <<"]=" << v[r]<<endl;
            if (r == numRows - 1)
            {
               flag = 0;
            }
            else
            {
                r++;
            }
        }
        else
        {
            r--;
            v[r]+= s[i];
            //cout << "s[i]= " << s[i] <<" r: " << r <<" flag: " << flag <<  " v[" << r <<"]=" << v[r]<<endl;
            if ( r == 0)
            {
                flag = 1;
                r = r+1;
            }
        }
    }
    string output;
    for (int i = 0; i < numRows; i++) {
            output += v[i];
    }
    cout << output << endl;
    return 0;

}
