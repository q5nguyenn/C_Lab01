// Chuong trinh tinh dien tich va chu vi cua hinh tron
#include <stdio.h>
#include <stdlib.h>

 #define pi 3.14
 
int main(void) 
{
	float r, p ,s;
	printf ("Nhap vao ban kinh hinh tron: ");
	scanf ("%f", &r);
	p = 2 * pi * r;
	s = pi * r * r;
	if (r >= 0)
	{
		printf ("Chu vi cua hinh tron co ban kinh %.2f la:    %.2f\n", r, p);
		printf ("Dien tich cua hinh tron co ban kinh %.2f la: %.2f", r, s);
	}
	else 
		printf ("Ban da nhap sai!");
	return 0;
}
