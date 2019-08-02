#include<iostream>
#define Max 1001
using namespace std;

int main()
{
    int n,num[Max],a,count[Max];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        num[i] = 0;     //置0
    }
    for(int i=0;i<n;i++)
    {
        cin >> a;   //获取输入的数字，当成数组的下标
        num[a]++;   //数组的值代表数字出现的次数
        count[i] = num[a];
    }
    for(int i=0;i<n;i++)
    {
        cout <<count[i]<<" ";   //输出号码出现的次数
    }
}