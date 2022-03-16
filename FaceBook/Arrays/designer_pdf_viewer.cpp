//https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    map<int,int> char_height;
    for(int i=1;i<=26;i++)
    {
        cin>> a;
        char_height[i]=a;
    }
    string s;
    cin>>s;
    char c;
    int max=0;
    for(int i=0;i<s.length();i++)
    {
        int index=s[i]-96;
        if(char_height[index]>max)
            max=char_height[index];
    }
    cout<<s.length()*max;
    return 0;
}
