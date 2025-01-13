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
	std::string text7 = "you are  now equipped and ready to escape capture, enter 6 for the next message\n";
	std::string text8 = "to reach the open land field, enter 7 before the other guards at base capture you\n";
	std::string text9 = "three enemy soldiers have appeared on the other side of the field\n to gear up enter 8\n ";
	std::string text10 = "to wipe out 3 soldiers enter 8\n, to surrender and end game enter 10\n";
	std::string text11 = "you have now past all threat\n to set up a sniper base on the hill, enter 11\n";
	std::string text12 = "there are 2 guards walking outside the interrogation\n to kill, enter 12\n";
	std::string text13 = "there are roughly 15 soldiers left on camp, and to infiltrate, put on the uniform of the dead soldier\n enter 13 for the next OP\n";
	std::string text14 = "you are now under the name of Oleksander Zinchenko\n to put a suppressor on the Glock17, enter 14\n";
	std::string text15 = "you are now on the ground floor, there is a guard sitting reading the newspaper on the room on the right, enter 15 to eliminate\n";
	std::string text16 = "its for the best to put a automatic switch on the pistol, clear out the kitchen with several soldiers by entering 16\n ";
	std::string text17 = "you now have the opportunity to take out the general\n, your going up the stairs, you have now come face to face with the man who called for your torture\n to shoot him inbetween the eyes, enter 17\n ";
	std::string text18 = "the general is dead\n you now have to escape the base\n enter 18 to break one soldiers neck and use his body as sheild from fire\n";
	std::string text19 = "well done... john wick style\n the next task is to make way to the gun inventory\n enter 19 to arm yourself with grenades and a AR15\n";
	std::string text20 = "there are 2 loan soldiers on a golf buggy heading way to the base, enter 20 to lob a grenade and take out the opposition\n";

	
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
		if (input == 1) 
		{
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
		std::cin >> input;
		if (input == 7)
		{
			for (int i = 0; i < text9.size(); i++)
			{
				std::cout << text9[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 8)
		{
			for (int i = 0; i < text10.size(); i++)
			{
				std::cout << text10[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 8)
		{
			for (int i = 0; i < text10.size(); i++)
			{
				std::cout << text10[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 9)
		{
			for (int i = 0; i < text11.size(); i++)
			{
				std::cout << text11[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 10)
		{
			for (int i = 0; i < text12.size(); i++)
			{
				std::cout << text12[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 11)
		{
			for (int i = 0; i < text13.size(); i++)
			{
				std::cout << text13[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 12)
		{
			for (int i = 0; i < text14.size(); i++)
			{
				std::cout << text14[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 13)
		{
			for (int i = 0; i < text15.size(); i++)
			{
				std::cout << text15[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 14)
		{
			for (int i = 0; i < text16.size(); i++)
			{
				std::cout << text16[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 15)
		{
			for (int i = 0; i < text17.size(); i++)
			{
				std::cout << text17[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 16)
		{
			for (int i = 0; i < text18.size(); i++)
			{
				std::cout << text18[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 17)
		{
			for (int i = 0; i < text19.size(); i++)
			{
				std::cout << text19[i];
				wait(50);
			}
		}
		std::cin >> input;
		if (input == 18)
		{
			for (int i = 0; i < text20.size(); i++)
			{
				std::cout << text20[i];
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
		std::cin >> input;
		if (input == 7)
		{
			for (int i = 0; i < text9.size(); i++)
			{
				std::cout << text9[i];
				wait(50);
			}
		}
	}

	return 0;

	  
}