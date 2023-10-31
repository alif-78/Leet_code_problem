#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices{7,1,5,3,6,4};
    int total_profit=0;
    int daily_max_profit=0;
    int flag ;
//    cout << " hello ";
    for (int i=0; i<prices.size(); i++)
    {
        int j;
//        cout << i << endl;
        for(j=i+1;j<prices.size()-2;j++)
        {
            int t = prices[j]-prices[i];
            if (t>daily_max_profit)
            {
              daily_max_profit = t;
              flag = j;
              cout << prices[j] << " ";
            }
        }
        //cout << flag << endl;
        //i = flag;
        total_profit = total_profit + daily_max_profit;
    }
}
