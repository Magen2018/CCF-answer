#include<stdio.h>
int leap(int year)		//定义一个计算润平年的函数
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	else
		return 0;	
}

int main()
{
	char f = '/';
	int a, b, c, y1, y2, weekd,d,y;
	int monDay[2][13] = { { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };		//润平年个月对应的天数
 
	scanf("%d%d%d%d%d",&a,&b,&c,&y1,&y2); 
	int days = 0;
	for (int i = 1850; i < y1; i++)	
		days += 365 + leap(i);		//1850年到输入的第一年的天数
	for (int i = y1; i <= y2; i++)
	{
		y = leap(i);		//用于找出该月的天数
		int days2 = days;
		for(int i=1; i<a; i++)
			days2 += monDay[y][i];		//1850年到输入的月的天数
		weekd = 1 + days2 % 7;		//输入月的前一天的星期数，根据提示推算
		d = (b-1) * 7 +((weekd >= c) ? (c + 7 -weekd) : (c - weekd)); 		//推算日期公式
		if(d > monDay[y][a])
			printf("none\n");		//当月没有那个星期数
		else
			{
				printf("%d%c",i,f);
				if(a<10)
					printf("0");
				printf("%d%c",a,f);
				if(d<10)
					printf("0");
				printf("%d\n",d);	
			}
			days += 365 + leap(i);		//计算第二个输入年份
	}
	return 0;
}