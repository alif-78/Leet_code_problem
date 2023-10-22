#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "a";
    int n = s.size();
    cout << n << endl;
    int i = n-1,c=0,t=0;
    while(s[i]==' ')
    {
        t++;
        i--;
    }
    cout << t << endl;
    i = n-1-t;
    cout<< i << endl;
    while(s[i]!=' ')
    {
        c++;
        i--;
        if (i<0)
        {
            break;
        }
    }
    cout << c << endl;
}
