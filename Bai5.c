// Chuong trinh tinh the tich hinh tru voi chieu cao va banh kinh day
#include <stdio.h>
#include <stdlib.h>
 
 #define pi 3.14
 
int main(void) 
{
	float r, h , v;
	printf ("Nhap vao ban kinh day cua hinh tru: ");
	scanf ("%f", &r);
	printf ("Nhap vao chieu cao cua hinh tru:    ");
	scanf ("%f", &h);
	v = h * (pi * r * r);
	if (r > 0 && h > 0)
		printf ("The tich hinh tru co ban kinh day %.2f va chieu cao %.2f la: %.2f", r, h, v);
	else
		printf ("Ban da nhap sai!");
	return 0;
}
