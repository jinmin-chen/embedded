/*----------------------------------------
**	 比较两个分数的大小，人工比较分数大小的常
**	 用方法是通分后比较分子的大小。
**	试编程模拟手工方式
**----------------------------------------
*/

#include <stdio.h>
void main()
{
	int i,j,k,m,n;
	printf("请输入2个分数，如:1/2,1/3\n");
	scanf("%d/%d,%d/%d",&i,&j,&k,&m);
	if(i*m>k*j)
		printf("前者较大!\n");
	else
		printf("后者较大!\n");
}
