#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "1010";
    string b = "1011";
    string output = "";
    int n=0,t=0,c=0,t1 =0;
    if (a.size() >= b.size())
    {
        n = a.size()-b.size();
        b.insert(0,n,'0');

    }
    else
    {
        n = b.size()-a.size();
        a.insert(0,n,'0');

    }
    for (int i = a.size()-1;i>=0;i--)
    {
        t = a[i] - '0' + b[i] - '0' + c;
        if (t >= 2)
        {
            t1 = t - 2;
            c = 1;
            string s = to_string(t1);
            output += s;
            cout << "IF :" <<t1  << " " << c << endl;
        }
        else
        {
            c = 0;
            cout << "Else : " << t << " " << c << endl;
            string s = to_string(t);
            output += s;

        }
    }
    if ( c == 1)
    {
        string s = to_string(c);
        output += s;
        cout << c << endl;
    }
    reverse(output.begin(),output.end());
    cout << output << endl;



}
