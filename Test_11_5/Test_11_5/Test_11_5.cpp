#include <stdio.h>
#include<stdlib.h>
#include<math.h>

/*时间：2018/11/5*/
/*输出100-200之间的素数*/
/*方法一*/
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
			printf("%d是素数\n", i);
		}
	}
	system("pause");
	return 0;
}
*/

/*方法二*/

int main() {
	for (int i = 100; i <= 200; i++) {
		int j = 2;

		for (j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			printf("%d是素数\n", i);
		}
	}
	system("pause");
	return 0;
}




