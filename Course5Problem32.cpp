#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
	{

		Arr[i] = RandomNumber(1,100);;
	}

}

void ReverseArray(int Arr1[100] , int Arr2[100] , int Length)
{

	for (int i = 0; i < Length; i++)
	{
		Arr2[i] = Arr1[Length-1-i];
	}
}

void PrintArray(int Arr[100], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	int Arr[100] , Arr2[100] , Length = 0 ;

	Length = ReadPositiveNumber("Enter a positive number");
	FillArrayWithRandomNumbers(Arr , Length);

	cout << "\nOriginal array 1 elements :\n\n";
	PrintArray(Arr , Length);

	ReverseArray(Arr , Arr2 , Length);

	cout << "\nArray 2after filling it with reversed Array 1 elements:\n\n";
	PrintArray(Arr2 , Length);
	
	return (0);

}