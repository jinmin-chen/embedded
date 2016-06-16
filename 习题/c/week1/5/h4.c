/*----------------------------------------
**	编写程序求解下式中各个字母所代表的数字，
**	不同的字母代表不同的数字
		   P E A R
		   - A R A
		  ———— ————
		     P E A
**----------------------------------------
*/


#include <stdio.h>
void main()
{
	int A, E, P, R, i, j, k;
	for (R = 0; R <= 9; R++)
	{
		for (E = 0; E <= 9; E++)
		{
			for (A = 0; A <= 9; A++)
			{
				for (P = 1;P < 2; P++)
				{
					i = P * 1000 + E * 100 + A * 10 + R;
					j = A * 100 + R * 10 + A;
					k = P * 100 + E * 10 + A;
					if (i - j == k)
					{
						printf("%d\n-%d\n=%d\n",i,j,k);
					}
				}
			}
		}
	}
}
