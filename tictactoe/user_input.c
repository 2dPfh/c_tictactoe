#include <stdio.h>
void user_input(int* x, int* y,int turn) {
	char a = 0;
	printf("\nPLAYER% d�� ����", turn % 2 + 1);
	while (1) {
		printf("\n��-��: ");
		scanf_s("%d%c%d", x, &a, (int)sizeof(a), y);
		if (*x > 0 && *x < 4 && *y > 0 && *y < 4 && a == '-') { //������ 1~3���� ����
			*x = *x - 1;
			*y = *y - 1;
			printf("\n");
			break;
		}
		else {        //�Էµ� ���� ������ ����� ���
			printf("�߸��� �Է��Դϴ�.\n");
		
		}
	}
	
}