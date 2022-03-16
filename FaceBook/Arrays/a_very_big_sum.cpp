//https://www.hackerrank.com/challenges/a-very-big-sum/problem

#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    unsigned long long int sum=0,in;
    for(int i=0;i<n;i++)
        {cin>>in;
        sum+=in;}
    cout<<sum;
    return 0;
}
