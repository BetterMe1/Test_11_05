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
			printf("%d是素数\n", i);
		}
	}
	system("pause");
	return 0;
}
*/

/*输出乘法口诀表*/
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

/*输出1000-2000年之间的闰年*/


int main() {
	for (int i = 1000; i <= 2000; i++) {
		if (i % 100 == 0) { //判断世纪年
			if (i % 400 == 0) {
				printf("%d是闰年\n", i);
			}
		}
		else {
			if (i % 4 == 0) {
				printf("%d是闰年\n", i);
			}
		}
	}
	system("pause");
	return 0;

}




