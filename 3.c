#include<stdio.h>
#include<math.h>

int main()
{
	double a = 2.0, b = 7.0, c = -5.0;
	double discriminant, root1, root2;
	
	discriminant = b * b - 4 * a * c;
	
	if (discriminant > 0)
	{
		root1 = (- b + sqrt(discriminant)) / (2 * a);
		root2 = (- b - sqrt(discriminant)) / (2 * a);
		
		printf("%.2lf\n", root1);
		printf("%.2lf\n", root2);
	}
	else if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		
		printf("%.2lf\n", root1);
		printf("%.2lf\n", root2);
	}
	else if (discriminant < 0)
	{
		printf("方程无实数根\n");
	}
	
	return 0;
}