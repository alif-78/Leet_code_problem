#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1 {0};
    vector <int> nums2 {1};
    int m=0,n=1;
    int tm=0, tn=0;
    vector<int> output(m+n);
    for (int i=0; i<(m+n); i++)
    {
        if (i<m)
        {
            output[i]=nums1[tm];
            tm++;
        }
        else if (i>=m)
        {
            output[i]=nums2[tn];
            tn++;
        }
    }
    sort(output.begin(),output.end());
    nums1.clear();
    nums1.assign(output.begin(),output.end());
    for (int &i : nums1)
    {
        cout << i << " ";
    }
}
