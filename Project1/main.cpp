#include <iostream>
#include <windows.h>
int cordenadaydojogador =0, cordenadaxdojogador= 0 , totaldepontos=0, y = 0, x = 0, bolay = 0, bolax = 0;
bool precisagerardenovo = true;
int main ()
{
	SetConsoleTitle(L"Get Async Teste ");
	

	

	while (true)
	{
		system("cls");

		do
		{
			if(precisagerardenovo == true)
			{ 
			bolay = 0 + (rand() % 8);
			bolax = 0 + (rand() % 13);
			precisagerardenovo = false;
			}
		} while (precisagerardenovo == true);

		if (GetAsyncKeyState(VK_UP))
		{
			if (y < 8)
				y--;
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			if (y < 8)
				y++;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			if (x < 14)
				x++;
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			if (x < 14)
				x--;
		}
		for (int i = 0; i < 8; i++)
		{
			if (i != y && i != bolay)
				std::cout << "-";

			for (int j = 0; j < 14; j++)
			{

				if (j != x && j != bolax)
				{
					std::cout << "-";
				}
				if (j == x && i == y)
				{
					std::cout << "B";
				}
				if (j == bolax && i == bolay)
				{
					std::cout << "0";
				}

			}

			printf("\n");
		}
		if (x == bolax && y == bolay)
		{
			totaldepontos++;
			precisagerardenovo = true;
		}
		std::cout << "Pontos: " << totaldepontos << "\n";
		Sleep(500);
	}
	
}