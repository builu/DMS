#include <iostream>
#include "DModel.h"

using namespace std;

int main()
{
	DModel md;

	md.addInjection("IJ1", "ABC", "ND1");
	md.addLoad("LD1", "ABCN", "ND20", 6.5, 4.1);
	md.addSwitch("SW1", "ABC", "ND1", "ND2", 650);
	md.addCable("CB1", "BC", "ND2", "ND3", 50);

	cout << md << endl;

	
	std::cin.get();
	return 0;
}