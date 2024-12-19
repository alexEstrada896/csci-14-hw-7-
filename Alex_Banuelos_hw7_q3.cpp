/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{

	int num;

	//prompts user for positive integer no greater than 15
	cout <<"Enter a positive number no greater than 15: "<<endl;
	cin>>num;
	//validates imput
	while (num > 15 || num < 0)
	{
		cout << "Error! Enter a posotive value no greater than 15:"<<endl;
		cin>>num;
	}

	for (int count = 0 ; count < num ; count++)
	{


		for (int count2 = 0 ; count2 < num ; count2++)
		{

			cout<<"X";


		}
		cout<<endl;
	}
	return 0;
}