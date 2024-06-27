int update_game(int(* arr)[3], int x, int y, int turn)
{
	if (arr[x][y] == 0) {             //배열에 0이 있다면 빈공간이므로 포인터배열을 통해 플레이어를 구분할 수 있는 값으로 초기화 
		arr[x][y] == turn % 2 + 1;    //1이 있다면 player 1이 이미 채운 위치, 2가 있다면 player 2가 이미 채운 위치
		return 1;
	}
	else                              
	{
		printf("PLAYER %d가 이미 사용한 자리입니다.\n다시 입력해주십시오.\n", turn % 2 + 1);
		return 0;
	}
}