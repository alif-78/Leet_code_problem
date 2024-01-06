#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<vector<int>> matrix =
    {
        {1,1,2},
        {3,0,7},
        {5,3,1}
    };
    long long int inf = 999999999;
    int m = matrix.size()-1;
    int n = matrix[0].size()-1;
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (matrix[i][j]==0)
            {
                matrix[i][j] = inf;
            }
        }
    }
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (matrix[i][j]==inf)
            {
                int r = i;
                int c = j;
                int flag = 0;
                while (flag==0)
                {
                    cout << "hello" << endl;
                    r++;
                    if (r>m || matrix[r][c]==inf)
                    {
                        flag = 1;
                        r = i;
                    }
                    else
                    {
                        matrix[r][c]=0;

                    }
                    if ( r==m)
                    {
                        flag = 1;
                        r = i;
                    }
                }
                while (flag==1)
                {
                    r--;
                    if (r<0|| matrix[r][c]==inf)
                    {
                        flag = 2;
                        r=i;
                    }
                    else
                    {
                        matrix[r][c]=0;

                    }

                    if (r==0)
                    {
                        flag = 2;
                        r = i;
                    }
                }
                while (flag==2)
                {
                    c--;
                    if(c<0|| matrix[r][c]==inf)
                    {
                        flag=3;
                        c=j;
                    }
                    else
                    {
                        matrix[r][c]=0;

                    }

                    if (c==0)
                    {
                        flag = 3;
                        c = j;
                    }
                }
                while (flag==3)
                {
                    c++;
                    if (c>n|| matrix[r][c]==inf)
                    {
                        flag = 4;
                        c = j;
                    }
                    else
                    {
                        matrix[r][c]=0;

                    }

                    if (c==n)
                    {
                        flag = 4;
                        c = j;
                    }
                }
            }
        }
    }
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (matrix[i][j]==inf)
            {
                matrix[i][j] = 0;
            }
        }
    }



    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


}
