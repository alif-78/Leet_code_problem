#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s = "anagram";
    string t = "nngaram";
    int flag = 0;
    unordered_map<char,int> mapS;
    unordered_map<char,int> mapt;
    if (s.size()==t.size())
    {
        for(char c: s)
        {
            mapS[c]++;
        }
        for (char c: t)
        {
            if ( mapS[c]>0)
            {
                mapt[c]++;
            }
            else
            {
                flag = 1;
                cout << "false" << endl;
                return 0;
            }
        }
        for (char c:t)
        {
            if(mapt[c]!=mapS[c])
            {
                cout << "false" << endl;
                return 0;
            }
        }
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
        return 0;
    }

}
