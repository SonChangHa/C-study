#include <stdio.h>

int big_cheak(int fir, int sec, int thi) {

	if (fir >= sec && fir >= thi)
		return fir;
	else if (sec >= fir && sec >= thi)
		return sec;
	else
		return thi;
}

int small_cheak(int fir, int sec, int thi) {

	if (fir <= sec && fir <= thi)
		return fir;
	else if (sec <= fir && sec <= thi)
		return sec;
	else
		return thi;
}

int main(void)
{
	int a, b, c;
	int big, small;

	printf("�� 3���� �Է����ּ���. :");
	scanf_s("%d %d %d", &a, &b, &c);

	big = big_cheak(a, b, c);
	small = small_cheak(a, b, c);

	printf("ū �� : %d \n���� �� : %d", big, small);
}