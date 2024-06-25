#include <stdlib.h>
#include <stdio.h>
#include "print_game.h"
#include "user_input.h"
#include "update_game.h"
#include "update_status.h"

int main() {
	int arr[3][3] = { 0, };
	int game_status = 0; // 0 �ݺ�, 1 ����
	int turn = 1; // turn % 2 �� �� Ȯ��
	int x, y; // ��ǥ
	
	while (game_status == 0) {
		int temp = 0; // �Է�, ���� �ݺ� ����

		print_game(arr, turn); // �ֿܼ� ���
		while (temp == 0) {
			user_input(&x, &y); // ���� �Է�
			temp = update_game(arr, x, y, turn); // ���� ���� ������Ʈ; ��ġ �����ϸ� 1, �Ұ����ϸ� 0
		}
		turn++;
		game_status = update_status(arr); // 0 Ȥ�� 1 ����
	}
	printf("player%d win", turn % 2);
	system("pause");
	return 0;
}