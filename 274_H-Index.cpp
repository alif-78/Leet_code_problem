#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> citations{0,0,0,0,0};
    sort(citations.begin(),citations.end());
    int n = citations.size();
    vector <int> c(n);
    if (c==citations)
    {
        cout << 0;
    }
    else if (n==1)
    {
        if (citations[0]==0)
        {
            cout << "0";
            return 0;
        }
        else
        {
            cout << "1";
            return 1;
        }
    }
    else if (n==2)
    {
        if (citations[0]==0 )
        {
            cout << "1";
            return 1;
        }
        else
        {
            cout << "2";
            return 2;
        }
    }
    else
    {
//        if (n%2==0)
//        {
//            cout << n/2;
//            return n/2;
//        }
//        else
//        {
//            cout << n/2+1;
//            return (n/2+1);
//
//        }
    cout << citations[n/2];

    }

}

