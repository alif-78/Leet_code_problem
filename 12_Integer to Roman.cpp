#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int nums = 3;
    string output = "";
    string numstr = to_string(nums);
    int n = numstr.size();
    for (int i=0; i<numstr.size();i++)
    {
        n--;
        int t = numstr[i] - '0';
        t = t * pow(10,n);
        cout << t << " ";
        if (t>=1000)
        {
            t = t /1000;
            string temp(t,'M');
            output += temp;


        }
        else if (t<1000 && t>=100)
        {
            if (t==400)
            {
                output += "CD";
            }
            else if (t==900)
            {
                output += "CM";
            }
            else if (t == 100)
            {
                output += "C";
            }
            else if (t == 200)
            {
                output += "CC";
            }
            else if (t == 300)
            {
                output += "CCC";
            }
            else if (t == 500)
            {
                output += "D";
            }
            else if (t == 600)
            {
                output += "DC";
            }
            else if (t == 700)
            {
                output += "DCC";
            }
            else if (t == 800)
            {
                output += "DCCC";
            }

        }
        else if (t>=10 && t<100)
        {
            if (t==10)
            {
                output += "X";
            }
            else if (t==20)
            {
                output += "XX";
            }
            else if (t == 30)
            {
                output += "XXX";
            }
            else if (t == 40)
            {
                output += "XL";
            }
            else if (t == 50)
            {
                output += "L";
            }
            else if (t == 60)
            {
                output += "LX";
            }
            else if (t == 70)
            {
                output += "LXX";
            }
            else if (t == 80)
            {
                output += "LXXX";
            }
            else if (t == 90)
            {
                output += "XC";
            }
        }
        else
        {
            if (t==1)
            {
                output += "I";
            }
            else if (t==2)
            {
                output += "II";
            }
            else if (t == 3)
            {
                output += "III";
            }
            else if (t == 4)
            {
                output += "IV";
            }
            else if (t == 5)
            {
                output += "V";
            }
            else if (t == 6)
            {
                output += "VI";
            }
            else if (t == 7)
            {
                output += "VII";
            }
            else if (t == 8)
            {
                output += "VIII";
            }
            else if (t == 9)
            {
                output += "IX";
            }
        }
    }
    cout << output << endl;
}
