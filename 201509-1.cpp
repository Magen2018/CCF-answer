#include<iostream>
#define Max 1001

using namespace std;

int main()
{
    int n,num[Max],res =1;
    cin >> n;               //输入有多少个数字
    for(int i=0;i<n;i++)
    {
        cin >> num[i];      //输入数组
    }
    for(int i=0;i<n-1;i++)
    {
        if(num[i] != num[i+1])
        {
            res++;
        }
    }
    cout << res;
    return 0;
}