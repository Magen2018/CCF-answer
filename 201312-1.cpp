#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,num;
    int number[1001];
    for(int i=0;i<1001;i++)
    {
        number[i]=0;
    }
    cin >> n;
    for(int i=0;i < n;i++)
    {
        cin >> num;
        number[num]++;          //数组统计
    }

    int max =1;
    int max_num = 0;
    for(int i=1;i<1001;i++)
    {
        if(number[i] > max_num)
        {
            max_num = number[i];
            max =i;
        }
    }
    cout << max;
    return 0;
}