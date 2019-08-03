#include<iostream>
#define Max 1001

using namespace std;

int main()
{
    int n,num[Max],flag,res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        flag =(num[i-1] - num[i])*(num[i] - num[i+1]);
        if(flag < 0)
            res++;
    }
    cout << res;
}