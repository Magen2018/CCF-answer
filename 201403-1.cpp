#include<iostream>

using namespace std;

int main()
{
    int a,b = 0;        //a为即将输入的个数，b为相反数的组数
    int num[501];       //一组数保存到数组当中
    cin >> a;
    for(int i = 0;i < a;i++)
    {
        cin >> num[i];
    }
    for(int i=0;i < a-1;i++)
    {
        for(int j = i+1;j < a;j++)
        {
            if(num[i] + num[j] == 0)        //从前往后检验，是相反数组数加1
            {
                b++;      
            }
        }
    }
    cout << b <<endl;
}