//for avoiding runtime: joto ghor rotate krte hbe thik toto ghor position update kore dilei hbe
//circulation er jonno n diye vag kre nite hbe
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums {1,2,3,4,5,6,7};
    int n = nums.size();
    vector<int> nums1 (n);
    int k = 3;
    for (int i=0;i<nums.size();i++)
    {
        nums1[(i+k)%n] =nums[i];
    }
    nums = nums1;
    for (int &i : nums)
    {
        cout << i << " ";
    }


}
