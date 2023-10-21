#include<bits/stdc++.h>
#define inf 999999
using namespace std;
int main()
{
    vector<int> nums {0,0,1,1,1,1,2,3,3};
    int c=1,t=0,ct=0;
    for (int i=1;i<nums.size();i++)
    {
        if (nums[i-1]==nums[i] && c==1 && t==0)
        {
            t = i-1;
            //cout << t << endl;
        }
        if (nums[t]==nums[i])
        {
            c = c+1;
            if (c>2)
            {
                nums[i]=inf;
                ct = ct+1;
                //cout << "hello & i= " << i  << endl;
            }
        }
        else
        {
            c=1;
            t=0;
        }
    }
    sort(nums.begin(),nums.end());
    for (int &i: nums)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << nums.size()-ct << endl;
}
