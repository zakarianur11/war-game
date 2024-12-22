#include<iostream>
#include<windows.h>
#include<string>
#include<conio.h>
#include<stdlib.h>

void wait(unsigned timeout)
{
	timeout += clock();
	while (clock() < timeout)continue;
}

int main()
{

	std::string text1 = "Your Name is Dimitri\n You have been captured by ukranian soldiers in donetsk by the border\n your mission is to now escape captivity using the available weapons nearby\n" ;
	std::string text2 = "you have been hurt badly\n to use a med kit enter 1\n";
	std::string text3 = "you are fully mobile, enter 2 to grab the unloaded pistol\n";
	std::string text4 = "you are now armed\n  to shoot the guards enter 3\n";
	std::string text5 = "Congratulations, the guard is dead and you have made it out!!! enter 4 for an option...\n";
	std::string text6 = "to escape with the dirt bike found abandoned enter 5\n";
	std::string text7 = "you are  now equipped and ready to escape capture\n";
	std::string text8 = "to reach the open land field, enter 6 before the other guards at base capture you\n";
	
	int input = 0;
	for (int i = 0; i < text1.size(); i++)
	{
		std::cout << text1[i];

		wait(50);
	}

	for (int i = 0; i < text2.size(); i++)
	{
		std::cout << text2[i];

		wait(50);
	}


	while (input !=-1)
	{

		std::cin >> input;
		if (input == 1) {
			for (int i = 0; i < text3.size(); i++)
			{
				std::cout << text3[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 2)
		{
			for (int i = 0; i < text4.size(); i++)
			{
				std::cout << text4[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 3)
		{
			for (int i = 0; i < text5.size(); i++)
			{
				std::cout << text5[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 4)
		{
			for (int i = 0; i < text6.size(); i++)
			{
				std::cout << text6[i];
				wait(50);
			}
		}
	

		std::cin >> input;
		if (input == 3)
		{
			for (int i = 0; i < text3.size(); i++)
			{
				std::cout << text3[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 4)
		{
			for (int i = 0; i < text6.size(); i++)
			{
				std::cout << text6[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 5)
		{
			for (int i = 0; i < text7.size(); i++)
			{
				std::cout << text7[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 6)
		{
			for (int i = 0; i < text8.size(); i++)
			{
				std::cout << text8[i];
				wait(50);
			}
		}
	}

	return 0;

	  
}