#include <stdio.h>
void user_input(int* x, int* y,int turn) {
	char a = 0;
	printf("\nPLAYER% d번 차례", turn % 2 + 1);
	while (1) {
		printf("\n행-열: ");
		scanf_s("%d%c%d", x, &a, (int)sizeof(a), y);
		if (*x > 0 && *x < 4 && *y > 0 && *y < 4 && a == '-') { //범위를 1~3으로 설정
			*x = *x - 1;
			*y = *y - 1;
			printf("\n");
			break;
		}
		else {        //입력된 값이 범위를 벗어나면 출력
			printf("잘못된 입력입니다.\n");
		
		}
	}
	
}