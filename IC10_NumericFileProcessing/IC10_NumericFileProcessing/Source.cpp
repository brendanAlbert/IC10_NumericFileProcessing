#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ifstream randomFile("\\OCC Spring 2016\\CS A150 C++\\Week 6\\IC11_NumericFileProcessing\\Random.txt");

	// To loop through a file
	// \\OCC Spring 2016\\CS A150 C++\\Week 6\\IC11_NumericFileProcessing
	int number, maxNumb = INT_MIN, minNumb = INT_MAX, count = 0, sumOfNumbers = 0;
	double average;
	vector <int> allNumbers;
	while (randomFile >> number)
	{
		allNumbers.push_back(number);
		if (number > maxNumb)
			maxNumb = number;
		if (number < minNumb)
			minNumb = number;
		count++;
		sumOfNumbers += number;
	}
	randomFile.close(); // Don't forget to close files once you are done reading, else you will hog it from others being able to use it.

	average = sumOfNumbers / count;

	cout << "The minimum number is: " << minNumb << endl
		<< "The maximum number is: " << maxNumb << endl
		<< "There are " << count << " numbers." << endl
		<< "The sum of all the numbers is: " << sumOfNumbers << endl
		<< "The average of all the numbers is: " << average << endl << endl;

	system("pause");
	return 0;
}
