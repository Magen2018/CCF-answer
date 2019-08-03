#include<iostream>

using namespace std;

int main()
{
    int n=1,res = 0,num[31],s = 0; 
    while(n)
    {
        cin >> n;
        if(n==1)
        {
            res+=1;
            s = 0;
        }
        if(n==2)
        {
            s +=2;
            res += s;
        }
    }
    cout << res;
}