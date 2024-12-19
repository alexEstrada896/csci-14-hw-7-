/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{

	string userAnswer;
	int userPoints = 0, compPoints = 0;






	do
	{
//generates random answer for computer
		int compChoice;
		string compAnswer;
		int seed = time(0);
		srand(seed);
		compChoice = (rand()%(3 - 1 + 1))+1;

		switch (compChoice)
		{
		case 1:
			compAnswer = "rock";
			break;

		case 2:
			compAnswer = "paper";
			break;

		case 3:
			compAnswer = "scissors";
			break;

		}

//prompts user to enter rock paper scissors or exit
		cout <<"Choose your option (rock, paper, scissors), or type exit to quit:"<<endl;
		cin >> userAnswer;


//validates input
		while (!(userAnswer == "rock" || userAnswer == "paper" || userAnswer == "scissors" || userAnswer == "exit"))
		{
			cout<<"Invalid input. Please choose your option (rock, paper,scissors), or type exit to quit: "<<endl;
			cin>>userAnswer;
		}

// displays answers and points
		if ( compChoice == 1 && userAnswer == "scissors")
		{
			compPoints++;
			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"You lose."<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 2 && userAnswer == "rock")
		{
			compPoints++;
			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"You lose."<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 3 && userAnswer == "paper")
		{
			compPoints++;
			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"You lose."<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 1 && userAnswer == "paper")
		{
			userPoints++;
			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"You Win!"<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 2 && userAnswer == "scissors")
		{
			userPoints++;
			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"You Win!"<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}


		if ( compChoice == 3 && userAnswer == "rock")
		{
			userPoints++;
			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"You Win!"<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 1 && userAnswer == "rock")
		{

			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"It was a tie"<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 2 && userAnswer == "paper")
		{

			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"It was a tie"<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}

		if ( compChoice == 3 && userAnswer == "scissors")
		{

			cout <<"Computer chooses: "<<compAnswer<<endl;
			cout <<"It was a tie"<<endl;
			cout<<"Score: You "<<userPoints<<"- Computer "<<compPoints<<endl;
		}







	} while (userAnswer == "rock" || userAnswer == "paper" || userAnswer == "scissors");
//exits the game if user types exit
	if (userAnswer == "exit")
	{
		cout << "Thank You for playing!"<<endl;
	}





	return 0;
}