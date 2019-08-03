#include<iostream>
#include<cmath>

#define Max 1001
using namespace std;

int main()
{
    int n,num[Max],max_num,res = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
    }
    for(int i=0;i<n-1;i++)
    {
        max_num = abs(num[i] - num[i+1]);
        res = max(res,max_num);
    }
    cout << res;
}