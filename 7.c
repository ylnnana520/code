#include<stdio.h>
int main()
{
	char upper_char, lower_char;
	
	scanf("%c", &upper_char);
	
	lower_char = upper_char + 32;
	
	printf("%c %c %d\n", upper_char, lower_char, lower_char);
	
	return 0;
}