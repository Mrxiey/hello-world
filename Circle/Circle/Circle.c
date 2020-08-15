#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
	int r;//The radius of the circle.
	float b;//The perimeter of the circle.
	float c;//The area of the circle.
	printf("Please enter the length of the radius.\nThe radius:");
	scanf_s("%d", &r);
	b = 2 * PI * r;
	c = PI * r * r;
	printf("The perimeter of the circle is %.2f,and the area of the circle is %.2f.", b, c);
	return 0;
}
