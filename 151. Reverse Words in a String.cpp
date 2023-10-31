#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "the sky is blue";
    string sout,soutput ,test;
    int flag = 0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]==' ' && flag==0)
        {
            continue;
        }
        else if (s[i]!=' ')
        {
            sout += s[i];
            flag = 1;
        }
        else if ( s[i]==' ' && flag == 1)
        {
            sout +=s[i];
            flag = 0;
        }
    }
    int n = sout.size()-1;
    for (int i=n;i>=0;i--)
    {
        //cout << "hi" << endl;
        if(i == n && sout[i]==' ')
        {
            cout << "last hello" << endl;
            continue;
        }
        else if ( sout[i]!= ' ')
        {
            test +=sout[i];
            cout << sout[i] << " " << test <<endl;
            if (sout[i-1] == ' ' || i==0)
            {
                reverse(test.begin(),test.end());
                cout << test << endl;
                soutput +=test;
                cout << endl;
                test = "";

            }
        }
        else
        {
            cout <<"hello i = "<<i << endl;
            soutput += sout[i];
        }
    }
    cout << s.size() << endl;
    cout << sout.size() << endl;
    cout << soutput << endl;
}
