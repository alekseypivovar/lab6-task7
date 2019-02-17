#include <stdio.h>
#include <stdlib.h>
// #include <Windows.h>

short flag = 0;

void place(int x, int y)
{
	extern char arr[10][30];
	system("cls");
	arr[y][x] = 'x';

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 30; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
	
	// Sleep(200);

	if (x == 0)
	{
		puts("Jailbreak done!");
		flag = 1;
	}

		if (arr[y][x - 1] == ' ' && flag == 0)	// left
			place(x - 1, y);
		

		if (arr[y - 1][x] == ' ' && flag == 0)		// up
			place(x, y-1);
		

		if (arr[y][x + 1] == ' ' && flag == 0)	// right
			place(x + 1, y);
		

		if (arr[y + 1][x] == ' ' && flag == 0)		// down
			place(x, y + 1);
		
	
	
}