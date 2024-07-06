int update_status(int arr[3][3])
{
	for (int i = 1; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((arr[j][0] == i && arr[j][1] == i && arr[j][2] == i) ||
				(arr[0][j] == i && arr[1][j] == i && arr[2][j] == i))
			{
				return 1; // °¡·Î, ¼¼·Î(Â÷·Ê´ë·Î) ½Â¸®
			}
		}

		if ((arr[0][0] == i && arr[1][1] == i && arr[2][2] == i) ||
			(arr[0][2] == i && arr[1][1] == i && arr[2][0] == i))
		{
			return 1; // ´ë°¢¼± ½Â¸® (2°³)
		}
	}

	return 0;
}