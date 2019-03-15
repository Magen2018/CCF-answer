#include<stdio.h>
#include<string.h>
int main()
{
	int a[1005];	 //定义一个数组略大于题目要求
	int n,num;
	int i,j;
	memset(a,0,sizeof(int)*1005);	//初始化数组
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);	//数组下标代表出现的数字
		a[num]++;	//数字的值代表该数字出现的次数
	}
	for (i=1004;i>0;i--)	//数字出现次数多的先输出
	{
		for(j=0;j<1005;j++)		//出现次数相同的情况下数字小的先输出
		{
			if(a[j] == i)		//判定输入的数字和出现的次数相等
			{
				printf("%d %d\n",j,a[j]);	
			}
		}
	}
	return 0;
}
