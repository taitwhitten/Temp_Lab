#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("C:/Users/WHITTEN1/Desktop/Temp_Lab/Temp_Lab/Input.txt");

	char data;

	if (!inFile)
	{
		cout << "Can't find file!" << endl;

		return 1;
	}

	int count; //variable declaration
	float stars;

	cout << "      " << "-30         0        30        60        90        120" << endl;

	inFile >> data; //priming read
	
	while (inFile)
	{
		if (data > 120)
			cout << "Invalid Data" << endl;
		else if (data < -30)
			cout << "Invalid Data" << endl;
		else if (data == 0)
		{
			cout << setw(4) << data;
			cout << "                |" << endl;
		}
		else if (data > 0)
		{
			cout << data;
			cout << "                 |";
			count = 0;
			stars = (data / 3);
			while (count <= stars)
			{
				cout << "*";
				count++;
			}
			cout << endl;
		
		}
		else if (data < 0) 
		{
			cout << data;
			count = 0;
		}

		inFile >> data;
	}

	return 0;
}