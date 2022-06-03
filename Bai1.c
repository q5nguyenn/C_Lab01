// Chuong trinh kiem tra mot so la so nguyen duong, nguyen am hay so 0
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int num;
	printf ("Nhap vao mot so bat ki: ");
	scanf ("%d", &num);
	if (num < 0)
		printf ("So %d la so am.", num);
	else if (num == 0)
			printf ("So da nhap la so 0.");
		else 
			printf ("So %d la so duong.", num);
	return 0;
}
