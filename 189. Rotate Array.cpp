//rotation by me but I faced runtime error
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums {1,2,3,4,5,6,7};
    vector<int> nums1 (nums.size()+1);
    int t;
    for (int &i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int j=0; j<3; j++)
    {
        for (int i = nums1.size()-1; i>=0; i--)
        {
            nums1[i] = nums[i-1];
        }
        int t = nums1[1];
        nums1[0]=nums1[nums1.size()-1];
        nums.assign(nums1.begin(),nums1.end()-1);
        nums1.assign(nums1.size(),0);
    }
    for (int &i : nums)
    {
        cout << i << " ";
    }
}
