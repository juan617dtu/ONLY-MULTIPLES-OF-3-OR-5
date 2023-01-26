#include <iostream>

int main()
{
	int num, i = 0, j = 0;
	bool flag = true;

	do
	{
		std::cout << "Enter a number: ";
		std::cin >> num;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			flag = false;
		}
	} while (flag == true);

	if (num == 0)
	{
		std::cout << std::endl << num << std::endl;
		std::exit(0);
	}

	do
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			std::cout << i << " + ";
			j += i;
		}
		i++;

	} while (i != num);

	j += i;

	std::cout << i << " = " << j << std::endl;

	return 0;
}
