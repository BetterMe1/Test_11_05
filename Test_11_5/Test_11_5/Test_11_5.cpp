#include <stdio.h>
#include<stdlib.h>
#include<math.h>

/*ʱ�䣺2018/11/5*/
/*���100-200֮�������*/
/*����һ*/
/*
int main() {
	for (int i = 100; i <= 200; i++) {
		int j = 2;
		while (j <= i) {
			if (i%j == 0) {
				break;
			}
			else{
				j++;
			}
		}
		if (i == j) {
			printf("%d������\n", i);
		}
	}
	system("pause");
	return 0;
}
*/

/*������*/

int main() {
	for (int i = 100; i <= 200; i++) {
		int j = 2;

		for (j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			printf("%d������\n", i);
		}
	}
	system("pause");
	return 0;
}




