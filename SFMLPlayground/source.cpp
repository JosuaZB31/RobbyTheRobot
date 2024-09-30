#include <iostream>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Table for " << i << std::endl;
		for (int j = 1; j < 21; j++)
		{
			std::cout <<i<< "x" << j << " = " << i * j << std::endl;
		}
	}

	system("Pause");
}