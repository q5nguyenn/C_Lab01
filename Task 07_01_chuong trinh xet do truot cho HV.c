// Chuong trinh xet do truot cho hoc vien
#include <stdio.h>

int main (void)
{
	int tsb, sbh;
	int dlt, dth, dbtl;
	printf ("Nhap vao tong so buoi hoc cua mon hoc: ");
	scanf ("%d", &tsb);
	printf ("Nhap vao so buoi ban da di hoc: ");
	scanf ("%d", &sbh);
	if (tsb > 0.75 * sbh)
	{
		printf ("Nhap vao dien ly thuyet, thuc hanh, bai tap lon: \n ");
		scanf ("%d %d %d", &dlt, &dth, &dbtl);
		if (dlt > 20 * 0.4)
			printf ("Ban da thi do ly thuyet.\n");
		else printf ("Ban da thi truot ly thuyet.\n");
		if (dth > 15 * 0.4)
			printf ("Ban da thi do thuc hanh.\n");
		else printf ("Ban da thi truot thuc hanh.\n");
		if (dbtl > 10 * 0.4)
			printf ("Ban da thi do bai tap lon. \n");
		else printf ("Ban da thi truot bai tap lon.\n");
	}
	else printf ("Ban khong duoc thi!");
	return 0;
	
}
