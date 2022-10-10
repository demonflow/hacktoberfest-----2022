#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cp = 0, cm = 0;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '+')
                cp++;
            else if (s[i] == '-')
                cm++;
            else
            {
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        string ans = "";
        int l = cm + cp;
        int q = v.size() - 1;
        for (int i = q; i > v.size() - l - 1; --i)
        {
            ans += v[i];
            if(v.size() > 0)
            v.pop_back();
        }
        while (cp--)
        {
            ans += '+';
            ans += v[v.size() - 1];
            if(v.size() > 0)
            v.pop_back();
        }
        while (cm--)
        {
            ans += '-';
            ans += v[v.size() - 1];
            if(v.size() > 0)
            v.pop_back();
        }
        cout<<ans;
        cout << endl;
    }
    return 0;
}
