#include <stdlib.h>
#include <stdio.h>

char int_to_square(int square);
void print_game(int arr[3][3], int turn);
int update_game(int (*arr)[3], int x, int y, int turn);
int update_status(int arr[3][3]);
void user_input(int *x, int *y, int turn);

int main()
{
    int arr[3][3] = {
        // 0 빈칸, 1 P1, 2 P2
        0,
    };
    int game_status = 0; // 0 반복, 1 종료
    int turn = 2;        // turn % 2 로 턴 확인
    int x, y;            // 좌표

    while (game_status == 0 && turn < 11)
    {
        int temp = 0; // 입력, 적용 반복 여부

        print_game(arr, turn); // 콘솔에 출력
        printf("\n예시\n행-열: 1-2, 2-3\n");
        while (temp == 0)
        {
            user_input(&x, &y, turn);            // 유저 입력
            temp = update_game(arr, x, y, turn); // 게임 상태 업데이트; 배치 가능하면 1, 불가능하면 0
        }
        turn++;
        game_status = update_status(arr); // 0 혹은 1 리턴
    }
    print_game(arr, turn); // 콘솔에 출력

    if (game_status == 0)
        printf("DRAW\n\n");
    else if (turn % 2)
        printf("WINNER : PLAYER 1\n\n");
    else
        printf("WINNER : PLAYER 2\n\n");

    system("pause");
    return 0;
}

char int_to_square(int square)
{ // square에 따라서 문자를 리턴하는 함수
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

void print_game(int arr[3][3], int turn)
{
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

int update_game(int (*arr)[3], int x, int y, int turn)
{
    if (arr[x][y] == 0)
    {                             // 배열에 0이 있다면 빈공간이므로 포인터배열을 통해 플레이어를 구분할 수 있는 값으로 초기화
        arr[x][y] = turn % 2 + 1; // 1이 있다면 player 1이 이미 채운 위치, 2가 있다면 player 2가 이미 채운 위치
        return 1;
    }
    else
    {
        printf("이미 사용한 자리입니다.\n다시 입력해주십시오.\n");
        return 0;
    }
}

int update_status(int arr[3][3])
{
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((arr[j][0] == i && arr[j][1] == i && arr[j][2] == i) ||
                (arr[0][j] == i && arr[1][j] == i && arr[2][j] == i))
            {
                return 1; // 가로, 세로(차례대로) 승리
            }
        }

        if ((arr[0][0] == i && arr[1][1] == i && arr[2][2] == i) ||
            (arr[0][2] == i && arr[1][1] == i && arr[2][0] == i))
        {
            return 1; // 대각선 승리 (2개)
        }
    }

    return 0;
}

void user_input(int *x, int *y, int turn)
{
    char a = 0;
    printf("\nPLAYER %d번 차례", turn % 2 + 1);
    while (1)
    {
        printf("\n행-열: ");
        scanf_s("%d%c%d", x, &a, (int)sizeof(a), y);
        if (*x > 0 && *x < 4 && *y > 0 && *y < 4 && a == '-')
        { // 범위를 1~3으로 설정
            *x = *x - 1;
            *y = *y - 1;
            printf("\n");
            break;
        }
        else // 입력된 값이 범위를 벗어나면 출력
            printf("잘못된 입력입니다.\n");
    }
}