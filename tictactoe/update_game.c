int update_game(int(* arr)[3], int x, int y, int turn)
{
	if (arr[x][y] == 0) {             //�迭�� 0�� �ִٸ� ������̹Ƿ� �����͹迭�� ���� �÷��̾ ������ �� �ִ� ������ �ʱ�ȭ 
		arr[x][y] == turn % 2 + 1;    //1�� �ִٸ� player 1�� �̹� ä�� ��ġ, 2�� �ִٸ� player 2�� �̹� ä�� ��ġ
		return 1;
	}
	else                              
	{
		printf("PLAYER %d�� �̹� ����� �ڸ��Դϴ�.\n�ٽ� �Է����ֽʽÿ�.\n", turn % 2 + 1);
		return 0;
	}
}