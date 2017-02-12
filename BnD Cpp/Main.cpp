//Streams
#include<iostream>
//#include<sstream>
//#include<fstream>

//Essentials
//#include <string>

inline void Clear()
{
	system("cls");
}

int main()
{
	while (true)
	{
		Clear();
		std::cout << "\n\nBattles and Dungeons: C++ Edition\n" << std::endl;
		std::cout << "\t[P]lay Game\n\t[L]oad Game\n\t[O]ptions\n\t[E]xit\n" << std::endl;
		char input;
		std::cin >> input;
		switch (input)
		{
		case('P'):
			//RunGame(CreateGame());
			break;
		case('L'):
			//RunGame(LoadGame());
			break;
		case('O'):
			//Options();
			break;
		case('E'):
			exit(0);
		}
	}
	return 0;
}