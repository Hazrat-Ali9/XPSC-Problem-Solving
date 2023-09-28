#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string s);
int main()
{
    string a="l";
    cout<<is_palindrome(a);
    return 0;
}
bool is_palindrome(string s)
{
    // base case
    if(s=="" || s.size()==1)
        return true;
    string small_str = s.substr(1, s.size()-2);
    return is_palindrome(small_str) && (s[0] == s.back());
}
