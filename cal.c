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
	printf("¿¬»ê ÀÔ·Â(1. µ¡¼À, 2. »¬¼À, 3. °ö¼À, 4. ³ª´°¼À. ±âÅ¸. Á¾·á)");
	scanf_s("%d", &in);

	printf("µÎ Á¤¼ö ÀÔ·Â");
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

	printf("°á°ú : %d", result);


}


int main() {

	input();

	return 0;


}