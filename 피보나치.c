#include <stdio.h>

void pi(int d) {

	int a = 0, b = 1, c;

	if(d!=0)
		printf("0");

	for (int i = 1; i < d; i++) {
		
		c = a + b;

		printf(", %d", c);

		a = b;
		b = c;
	}

}

int main(void)
{
	int d;
	printf("몇자리 출력해드릴까?");
	scanf_s("%d", &d);
	pi(d);
	return 0;
}