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

	std::string Name = "Your Name is Dimitri\n You have been captured by ukranian soldiers in donetsk by the border\n your mission is to now escape captivity using the available weapons nearby\n" ;
	std::string Name = "you have been hurt badly\n to use a med kit press 1\n";
	std::string Name = "you are fully mobile, click 2 to grab the unloaded pistol\n you are now armed, to shoot the guards click 3\n Congratulations, you have made it out!!!\n";
	std::string Name = "you have a road buggy and a motorcycle to escape into the woods in, click 4 for road buggy, click 5 for motorcycle\n";
	for (int i = 0; i < Name.size(); i++)
	{
		std::cout << Name[i];
	
		wait(100);
	}
	return 0;

	  
}