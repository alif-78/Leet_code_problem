#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{3,2,1,0,4};
    vector<int> nums2{4,2,0,0,1,1,4,4,4,0,4,0};
    if (nums == nums2)
    {
        cout << "true hello" << endl;
        return 0;
    }
    int i = 0;
    for (auto itr = nums.begin(); itr!=nums.end();)
    {
        int i = distance(nums.begin(), itr);
        cout << i << " " << *itr << endl;
        if (*itr >= nums.size()-(i+1))
        {
            cout << "true" << endl;
            return 0;
        }
        else
        {
            if (*itr==0)
            {
                cout<< "false" << endl;
                return 0;
            }
            int maxValue = *(itr+1);
            auto temp_itr = nums.begin();
            for (auto it = (nums.begin()+i+1) ; it != (nums.begin()+i+1+*itr); ++it)
            {
                if (*it >= maxValue)
                {
                    temp_itr = it;
                    maxValue = *it;
                }
            }
            itr = temp_itr;
            //cout << "hello"<< " " <<*itr << endl;
        }
    }
    cout << "false" << endl;

}
