#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,num[1001],res =0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(num[i]-num[j]) ==1)
            {
                res ++;
            }
        }
    }
    cout << res;
}