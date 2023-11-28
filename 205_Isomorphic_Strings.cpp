#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s = "badc";
    string t = "baba";
    int flag = 0;
    map<char,char> mapS;
    for(int i=0; i<s.size(); i++)
    {
        if(mapS[s[i]]=='\0'||mapS[s[i]]==t[i])
        {
            mapS[s[i]] = t[i];
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag ==1 )
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }



}
