#include <stdio.h>

int cheak(int input) {

	int total = 0;

	for (int i = 1; i*i <= input; i++) {
		if (input % i == 0) {
			total++;
		}
	}
	
	if (total == 1)
		return input;
	else
		return 0;

}


int main(void) {
	int go = 1, result, c=0;

	while (1) {
		result = cheak(go);

		if (result != 0) {
			c++;
			printf("%d ", go);
		}

		if (c == 500)
			break;
		
		go++;
	}




	return 0;
}
