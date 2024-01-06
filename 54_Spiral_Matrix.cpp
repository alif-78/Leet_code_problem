#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<vector<int>> matrix =
    {
        { 1, 2, 3, 4},
        { 5, 6, 7, 8},
        {9,10,11,12},

    };

    int m = matrix.size();
    int n = matrix[0].size();
    int middle=0;
    if (n%2!=0)
    {
        middle = n/2;

    }
    vector<int> spiralOrder(m*n);
    //cout << m << " " << n << endl;
    int min_r = 0 , min_c = 0 , max_r = m-1, max_c = n-1;
    int r = min_r, c=min_c,flag=0;
    for(int i=0;i<m*n;i++)
    {
        spiralOrder[i] = matrix[r][c];
        if (max_c == middle)
        {
            r++;
        }
        else if (flag==0 && r==min_r)
        {
            c++;
            if (c == max_c)
            {
                flag++;
            }
        }
        else if (c == max_c && flag==1)
        {
            r++;
            if (r == max_r)
            {
                flag++;
            }
        }
        else if (r==max_r && flag==2)
        {
            c--;
            if (c == min_c)
            {
                flag++;
            }
        }
        else
        {
            r--;
            if (r == min_r)
            {
                flag++;
            }
        }
        if (flag == 4)
        {
            flag = 0;
            min_r++;
            min_c++;
            max_r--;
            max_c--;
            r = min_r;
            c = min_c;
//            cout <<r <<" " << c << endl;
//            cout << max_r << " " << max_c << endl;

        }





    }
    for (int i : spiralOrder)
    {
        cout << i << " " ;
    }
}
