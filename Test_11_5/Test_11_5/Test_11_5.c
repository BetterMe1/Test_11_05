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
/*
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
*/

/*����˷��ھ���*/
/*
int main() {
	for (short i = 1; i <10; i++) {
		for (short j = 1; j <= i; j++) {
			short m = i * j;
			printf("%d*%d=%d  ", i, j, m);
		}
		printf("\n");
	}
	system("pause");
	return 0;

	*/

/*���1000-2000��֮�������*/


int main() {
	for (int i = 1000; i <= 2000; i++) {
		if (i % 100 == 0) { //�ж�������
			if (i % 400 == 0) {
				printf("%d������\n", i);
			}
		}
		else {
			if (i % 4 == 0) {
				printf("%d������\n", i);
			}
		}
	}
	system("pause");
	return 0;

}




