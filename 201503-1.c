#include<stdio.h>
#define N 1000
int matrix[N][N];   //定义二维数组代表数字矩阵
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&matrix[i][j]);  //按照矩阵顺序输入
    for(int j=1;j<=m;j++){
        for(int i=0;i<n;i++){
            if(i != 0)         //保证每一列之间有空格
               putchar(' ');  
            printf("%d",matrix[i][m-j]);    //改变下标模拟矩阵旋转
        }
        putchar('\n');
    }
}