int update_status(int arr[3][3])
{
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1) ||
            (board[0][i] == 1 && board[1][i] == 1 && board[2][i] == 1)) {
            return 1; // °¡·Î, ¼¼·Î(Â÷·Ê´ë·Î) ½Â¸®
        }
    }
    if ((board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1) ||
        (board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1)) {
        return 1; // ´ë°¢¼± ½Â¸® (2°³)
    }
}

for (int i = 0; i < 3; ++i) {
    if ((board[i][0] == 2 && board[i][1] == 2 && board[i][2] == 2) ||
        (board[0][i] == 2 && board[1][i] == 2 && board[2][i] == 2)) {
        return 1; // °¡·Î, ¼¼·Î(Â÷·Ê´ë·Î) ½Â¸®
    }
}
if ((board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2) ||
    (board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 2)) {
    return 1; // ´ë°¢¼± ½Â¸® (2°³)
}
	return 0;
}