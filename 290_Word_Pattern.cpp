#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pattern = "abba";
    string s = "dog cat cat dog";
    map<char,string> patMap;
    map<string,char> sMap;
    int f = 0;
    int flag = 0;
    string t;
    int x = 0;
    for(int i=0;i<=s.size();i++)
    {
        if ( s[i] == ' ' || (x==pattern.size()-1 && i == s.size()) )
        {
            if (s[i]== ' ')
            {
                f++;
            }
            if (patMap[pattern[x]]== "" || patMap[pattern[x]] == t )
            {
                patMap[pattern[x]] = t;

            }
            else
            {
                cout << "false" << endl;
                flag = 1;
                return 0;
            }
            if(sMap[t]=='\0' || sMap[t] == pattern[x])
            {
                sMap[t] = pattern[x];
            }
            else
            {
                cout<<"false" << endl;
                flag = 1;
                return 0;
            }
            x++;
            t = "";
        }
        else if ( s[i]!=' ' )
        {
            t = t+s[i];
            //f++;
        }
    }
    //cout << f-1 << endl;
    if (f!=0 || f >= pattern.size())
    {
        cout << "false1" << endl ;
        cout << f << " " << pattern.size() << endl;
    }
    else
    {
        cout << "true" << endl ;
    }


}
