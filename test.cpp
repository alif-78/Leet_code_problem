#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag = 0;
    string ransomNote = "a";
    string magazine = "b";
    map<char , int> ranMap;
    map<char ,int> magaMap;
    for (char c : ransomNote)
    {
        ranMap[c]++;
    }
    for (char c : magazine)
    {
        magaMap[c]++;
    }
    for (auto itr:ranMap)
    {
        char c = itr.first;
        int countran = itr.second;
        if (magaMap[c] >= countran)
        {
            flag++;

        }
        else
        {
            flag = -1;
            break;
        }

    }
    if (flag < 0)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }

}
