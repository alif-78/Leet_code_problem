#include<bits/stdc++.h>
using namespace std;
int main()
{
    string haystack = "a", needle="a";
    int n1 = haystack.size();
    int n2 = needle.size(),flag=0;
    for (int i=0;i<=n1-n2;i++)
    {
        if (haystack[i] == needle[0])
        {
            flag = 0;
            for (int j=0;j<n2;j++)
            {
                if (haystack[i+j]==needle[j])
                {
                    flag++;
                }
            }
            if (flag==n2)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

}
