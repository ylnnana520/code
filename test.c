#include <stdio.h>																																							//v1.0
#include<time.h>
#include<stdlib.h>
int main()
{
	int s, x, y;
	int a, b, c, d, a1=1, b1=2, c1=3, d1=4;
	do
	{
		srand(time(NULL));																																		//��ȡ�����
		s = rand() % 10000;
		a = s / 1000;
		b = s % 1000 / 100;
		c = s % 100 / 10;
		d = s % 10;
	} while (((a != b) + (a != c) + (c != d) + (b != c) + (b != d) + (c != d))!=6);
	printf("%d%d%d%d\n",a, b, c, d);
	do 
	{
		while ((a1 != b1) * (a1 != c1) * (a1 != d1) * (b1 != c1) * (b1 != d1) * (c1 != d1) != 1)
		{
			scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
		 if (((a1 != b1) * (a1 != c1) * (a1 != d1) * (b1 != c1) * (b1 != d1) * (c1 != d1)) != 1) printf("������û���ظ����ֵ�����\n");
		}
	 x = (a == a1) + (a == b1) + (a == c1) + (a == d1) + (b == a1) + (b == b1) + (b == c1) + (b == d1) + (c == a1) + (c == b1) + (c == c1) + (c == d1) + (d == a1) + (d == b1) + (d == c1) + (d == d1);
	 y = (a == a1) + (b == b1) + (c == c1) + (d == d1);
	 if (y != 4) printf("(%d)%d%d%d%d(%d)\n", x, a1, b1, c1, d1, y);
	 else printf("������ȷ\n");
	} while (y != 4);
	

   return 0;
}