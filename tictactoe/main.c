#include <stdlib.h>
#include <stdio.h>
#include "print_game.h"
#include "user_input.h"
#include "update_game.h"
#include "update_status.h"

int main() {
	int arr[3][3] = { 0, };
	int game_status = 0; // 0 반복, 1 종료
	int turn = 2; // turn % 2 로 턴 확인
	int x, y; // 좌표
	
	while (game_status == 0) {
		int temp = 0; // 입력, 적용 반복 여부
	
		print_game(arr, turn); // 콘솔에 출력
		printf("\n예시\n행-열: 1-2, 2-3\n");
		while (temp == 0) {
			user_input(&x, &y, turn); // 유저 입력
			temp = update_game(arr, x, y, turn); // 게임 상태 업데이트; 배치 가능하면 1, 불가능하면 0
		}
		turn++;
		game_status = update_status(arr); // 0 혹은 1 리턴
	}

	if (turn % 2)
		printf("WINNER : PLAYER 1\n\n");
	else
		printf("WINNER : PLAYER 2\n\n");

	system("pause");
	return 0;
}
