#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector < vector<string>> board = {
         {"5","3",".",".","7",".",".",".","."}
        ,{"6",".",".","1","9","5",".",".","."}
        ,{".","9","8",".",".",".",".","6","."}
        ,{"8",".",".",".","6",".",".",".","3"}
        ,{"4",".",".","8",".","3",".",".","1"}
        ,{"7",".",".",".","2",".",".",".","6"}
        ,{".","6",".",".",".",".","2","8","."}
        ,{".",".",".","4","1","9",".",".","5"}
        ,{".",".",".",".","8",".",".","7","9"}
    };
    unordered_set<string> t;
    int r=0,i=0,j=0;
    int x=0,y=0,z=0;
    while (x<9)
    {
        for ( i=y; i<y+3; i++)
        {
            for ( j=z; j<z+3; j++)
            {
                if (board[i][j]!=".")
                {
                    r++;
                    t.insert(board[i][j]);
                }
            }
        }
        if (r != t.size())
        {
            cout << "box false" << x << endl;
            return 0;
        }
        r=0;
        t.clear();
        x++;
        if (x>0 && x<3)
        {
            y = 0;
        }
        else if (x>2&&x<6)
        {
            y=3;
        }
        else
        {
            y=6;
        }
        if (x==0 || x==3 || x== 6)
        {
            z=0;
        }
        else if (x==1||x==4||x==7)
        {
            z=3;
        }
        else
        {
            z = 6;
        }

    }
    //row check
    for ( i=0; i<9; i++)
    {
        for ( j=0; j<9; j++)
        {
            if (board[i][j]!=".")
            {
                r++;
                t.insert(board[i][j]);
            }
        }

        if (r != t.size())
        {
            cout << "row false" << endl;
            return 0;
        }
        r=0;
        t.clear();

    }
    //column check
    for ( i=0; i<9; i++)
    {
        for ( j=0; j<9; j++)
        {
            if (board[j][i]!=".")
            {
                r++;
                t.insert(board[j][i]);
            }
        }

        if (r != t.size())
        {
            cout << "column false" << endl;
            return 0;
        }
        r=0;
        t.clear();
    }
    cout << "true" << endl;
}
