#include <stdio.h>
#include <stdlib.h>

char int_to_square(int square) { // square에 따라서 문자를 리턴하는 함수
	switch (square)
	{
	case 0:
		return ' ';
	case 1:
		return 'X';
	case 2:
		return 'O';
	}
}

void print_game(int arr[3][3], int turn) {
	system("cls");
	printf("PLAYER 1 : X\n");
	printf("PLAYER 2 : O\n\n");

	printf("    1   2   3\n");
	printf("   -----------\n");
	printf("1 | %c | %c | %c |\n", int_to_square(arr[0][0]), int_to_square(arr[0][1]), int_to_square(arr[0][2]));
	printf("  |---|---|---|\n");
	printf("2 | %c | %c | %c |\n", int_to_square(arr[1][0]), int_to_square(arr[1][1]), int_to_square(arr[1][2]));
	printf("  |---|---|---|\n");
	printf("3 | %c | %c | %c |\n", int_to_square(arr[2][0]), int_to_square(arr[2][1]), int_to_square(arr[2][2]));
	printf("   -----------\n");
}