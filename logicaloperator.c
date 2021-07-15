#include <stdio.h>
int main(void)
{
	char sex, ms;
	int age;
	printf("Enter age, marital status (M/U),sex (M/F).\n");
	scanf("%d %c %c", &age, &ms, &sex);
	if ((ms == 'M' || ms == 'm') || ((ms == 'U' || ms == 'u') && (sex == 'M' || sex == 'm') && age > 30) || ((ms == 'U' || ms == 'u') && (sex == 'F' || sex == 'f') && age > 25))
		printf("Driver is insured\n");
	else
		printf("Driver is not insured\n");
	return 0;
}