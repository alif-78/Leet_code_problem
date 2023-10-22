#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices {7,6,4,3,1};
    int minn = prices[0];
    int maxx = 0;
    for (int i=0;i<prices.size();i++)
    {
        maxx = max(maxx, prices[i]-minn);
        minn = min(minn,prices[i]);
    }
    cout << maxx << endl;

}
