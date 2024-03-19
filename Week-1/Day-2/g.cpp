#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    queue<int> q;
    sort(s.begin(), s.end());
    int count[26] = {0};
    for (char c : s)
    {
        count[c - 'a']++;
    }
    cout << endl;
    for (int i = 0; i < 26; i++)
    {
        q.push(count[i]);
    }
    int counter = 0;
    for (int i = 0; i < 26; i++)
    {
        while (q.front() != 0)
        {
            q.pop();
            counter++;
            break;
        }
    }
    if (counter == 26)
    {
        cout << "None" << endl;
    }
    else
    {
        char ch = 'a' + counter;
        cout << ch << endl;
    }

    return 0;
}