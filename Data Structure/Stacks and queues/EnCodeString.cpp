#include <iostream>
#include <stack>
#include <string>

using namespace std;

string to_string(long long n)
{
    string s = "";
    while (n > 0)
    {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    s = s + '@';
    stack<char> st;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() || st.top() == s[i])
        {
            st.push(s[i]);
        }
        else
        {
            int count = 0;
            str = str + st.top();
            while (!st.empty())
            {
                count++;
                st.pop();
            }
            str = str + to_string(count);
            st.push(s[i]);
        }
    }
    cout << str;
    return 0;
}
