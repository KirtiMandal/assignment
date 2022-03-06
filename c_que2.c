#include<stdio.h>
int student();

int student()
{
	int math, sci, english;
	printf("\nTotal marks out of 100 ");
	printf("\nMarks in maths - ");
	scanf("%d", &math);
		
	printf("Marks in sci - ");
	scanf("%d", &sci);
		
	printf("Marks in eng - ");
	scanf("%d", &english);
	
	float total;
	float per;
	total = (english+math+sci);
	printf("Total marks - %f",total);
	per = (total/300)*100;
	return per;
}
int main()
{
	float result;
	result = student();
	printf("\nPercentage - %f\n",result);
}

