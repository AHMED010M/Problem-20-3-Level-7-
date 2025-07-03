#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(short From, short To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillaMatrix3x3(short arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] ;

		}

	}


}

void PrintMatrix(short arr[3][3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}

bool IsMatrixIsPalindrome(short arr[3][3], short Rows, short Cols)
{


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols/2; j++)
		{
			if (arr[i][j] != arr[i][Cols-1-j])
				return false;

		}
		
	}

	return true;

}



int main()
{

	srand(time(0));

	short arr1[3][3] = { {1,2,1} ,{5,2,5} ,{7,3,7} };


	FillaMatrix3x3(arr1, 3, 3);

	
	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);

	if (IsMatrixIsPalindrome(arr1, 3, 3))
	{
		cout << "\nYes : This is Palindrome Matrix" << endl;
	}
	else
		cout << "\nNo : This is NOT Palindrome Matrix" << endl;

}

