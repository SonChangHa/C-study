#include <stdio.h>

int pls(int fir, int sec) {

	return fir + sec;
}

int min(int fir, int sec) {

	return fir - sec;
}

int tim(int fir, int sec) {

	return fir * sec;
}

int div(int fir, int sec) {

	return fir / sec;
}

int input() {

	int in, fir, sec, result;
	printf("���� �Է�(1. ����, 2. ����, 3. ����, 4. ������. ��Ÿ. ����)");
	scanf_s("%d", &in);

	printf("�� ���� �Է�");
	scanf_s("%d %d", &fir, &sec);

	switch (in) {
		case 1:
			result = pls(fir, sec);
			break;
		case 2:
			result = min(fir, sec);
			break;
		case 3:
			result = tim(fir, sec);
			break;
		case 4:
			result = div(fir, sec);
			break;
	default:
		break;
	}

	printf("��� : %d", result);


}


int main() {

	input();

	return 0;


}