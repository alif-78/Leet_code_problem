#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums {3,2,3};
    sort(nums.begin(),nums.end());
    int c=1,t=0,output;
    for (int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
        {
            c = c+1;
            if (i == nums.size()-1 && c>t)
            {
                t = c;
                output = nums[i];
            }
        }
        else
        {
            if (c>t && i!=1)
            {
                t = c;
                output=nums[i-1];
            }
            c=1;
        }

    }
    cout << output << endl;

}
