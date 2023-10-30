#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll num;
        cin >> num;
        string str;
        cin >> str;
        ll count = 0, tr = true;
        vector<int> v;
        for (int i = 0; i < str.size() / 2; i++)
        {
            if (str[i] == str[str.size() - 1 - i])
            {
                if (str[i] == '0')
                {
                    v.push_back(str.size() - 1 - i + 1);
                    str.insert(str.size() - 1 - i + 1, "01");
                    count++;
                    if (count > 300)
                    {
                        tr = false;
                        break;
                    }
                }
                else
                {

                    v.push_back(i);
                    str.insert(i, "01");
                    count++;
                    if (count > 300)
                    {
                        tr = false;
                        break;
                    }
                }
            }
        }
        if (num % 2 == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        if (tr)
        {
            
            cout << count << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}