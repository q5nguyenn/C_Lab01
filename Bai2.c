// Chuong trinh nhap ty gia VND/USD va doi tu USD sang VND
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int usd, tygia, vnd;
	printf ("Nhap vao so USD muon doi:         ");
	scanf ("%d", &usd);
	printf ("Nhap vao ty gia VND/USD hien tai: ");
	scanf ("%d", &tygia);
	vnd = usd * tygia;
	if (usd < 0 && tygia < 0)
		printf ("Hien tai %d USD se doi duoc %d VND.", usd, vnd);
	else
		printf ("Ban da nhap sai! \n");
	return 0;
}
