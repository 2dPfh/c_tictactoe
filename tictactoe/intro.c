#include <stdio.h>                                         
#include <stdlib.h>   
#include <windows.h>

void print_tic()
{
	printf("                                        бс                бс                \n");
	printf("                             бс         бс       бс       бс     бсбсбс     \n");
	printf("                           бсбсбсбс     бс                бс   бс      бс   \n");
	printf("                             бс         бс       бс       бс   бс           \n");
	printf("                             бс         бс       бс       бс   бс           \n");
	printf("                             бс         бс       бс       бс   бс      бс   \n");
	printf("                              бсбс      бс       бс       бс     бсбсбс     \n");
	printf("                                        бс                бс                \n");
	printf("                        бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");
}

void print_tac()
{
	print_tic();
	printf("                                        бс                бс                \n");
	printf("                             бс         бс     бсбсбс     бс     бсбсбс     \n");
	printf("                           бсбсбсбс     бс   бс      бс   бс   бс      бс   \n");
	printf("                             бс         бс           бс   бс   бс           \n");
	printf("                             бс         бс     бсбсбсбс   бс   бс           \n");
	printf("                             бс         бс   бс      бс   бс   бс      бс   \n");
	printf("                              бсбс      бс     бсбсбс  бс бс     бсбсбс     \n");
	printf("                                        бс                бс                \n");
	printf("                        бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");

}

void print_toe()
{
	print_tac();
	printf("                                        бс                бс                \n");
	printf("                             бс         бс     бсбсбс     бс     бсбсбс     \n");
	printf("                           бсбсбсбс     бс   бс      бс   бс   бс      бс   \n");
	printf("                             бс         бс   бс      бс   бс   бсбсбсбсбс   \n");
	printf("                             бс         бс   бс      бс   бс   бс           \n");
	printf("                             бс         бс   бс      бс   бс   бс      бс   \n");
	printf("                              бсбс      бс     бсбсбс     бс     бсбсбс     \n");
	printf("                                        бс                бс                \n");
}

void print_line()
{
	int j;
	for (j = 0; j < 8; j++)
		printf("                                        бс                бс\n");
}

void root()
{
	int i, j;
	for (i = 0; i < 3; i++) {
		print_line();
		if (i != 2)
			printf("                        бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");
	}
	Sleep(1000);
	system("cls");

	print_tic();
	for (i = 0; i < 2; i++) {
		print_line();
		if (i != 1)
			printf("                        бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");
	}
	Sleep(1000);
	system("cls");

	print_tac();
	print_line();
	Sleep(1000);
	system("cls");

	print_toe();
	Sleep(1000);

	printf("\n                                               < PLAY >");
	_getch();

	return 0;
}