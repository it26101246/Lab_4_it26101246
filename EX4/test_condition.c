#include <stdio.h>
int main (void)
{
	float section_1 = 0;
	float section_2 = 0;
	float section_3 = 0;
	float Average = 0;
	float Total_Mark = 0;

	printf("Enter the marks of section_1, section_2 and section_3: ");
	scanf("%f %f %f", &section_1, &section_2, &section_3);

	Total_Mark = (section_1 + section_2 + section_3);

	Average = (Total_Mark/3);

	if (section_1 >= 70 && section_2 >= 70 && section_3 >= 70 && Average >= 75)
	{
		printf("You have passed the examination \n");

	}

	else
	{
		printf("You didnt pass the exam \n");

	}

	return 0;

}

