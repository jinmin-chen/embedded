#include<stdio.h>
int main()
{
	while(1)
	{
		printf("A");
		fflush(stdout);
		usleep(150000);
		printf("\b");
		printf("B");
		fflush(stdout);
		usleep(150000);
		printf("\b");
		printf("C");
		fflush(stdout);
		usleep(150000);
		printf("\b");
		printf("*");
	}
}
