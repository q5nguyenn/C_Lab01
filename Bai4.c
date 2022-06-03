// Chuong trinh nhap vao chieu cao, canh day cua tam giac va tinh dien tich
#include <stdio.h>
#include <stdlib.h>
 
int main(void) 
{
	float b, h , s;
	printf ("Nhap vao canh day cua tam giac:  ");
	scanf ("%f", &b);
	printf ("Nhap vao chieu cao cua tam giac: ");
	scanf ("%f", &h);
	s = b * h / 2;
	if (b >= 0 && h >=0)
		printf ("Dien tich tam giac co canh day %.2f va chieu cao %.2f la: %.2f", b, h, s);
	else 
		printf ("Ban da nhap sai!");
	return 0;
}
