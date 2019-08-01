#include<iostream>

using namespace std;

int main()
{
    int n;
    int num[1001];
    int res = 0;
    cin >> n;
    for(int i=0;i < n;i++)
    {
        cin >> num[i];
    }
    for(int i=0;i < n-1;i++)
    {
        int MIN = num[i];
        for(int j= i;j < n;j++)
        {
            MIN = min(MIN,num[j]);
            res = max(res,(j-i+1)*MIN);
        }
    }
    cout << res;
}