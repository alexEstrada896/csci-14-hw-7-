3. (2 pts) Write a complete program in a cpp file that prompts the user for a positive integer
no greater than 15 (must implement input validation inside a loop). The program should
then display a square on the screen using the character ‘X’. The number entered by the
user will be the length of each side of the square. For example, if the user enters 5, the
program should display the following:
XXXXX
XXXXX
XXXXX
XXXXX
XXXXX
If the user enters 8, the program should display the following:
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX


4. (4 pts) Write a complete program in a cpp file that works as a Rock, Paper, Scissors
Game. It will be a game between the user and the computer.
The program should prompt the user to enter their choice (all in lowercase: rock, paper,
or scissors). The program will then generate a choice randomly. The program will
determine the winner of this round based on the rules of the game:
● rock beats scissors
● scissors beats paper
● paper beats rock
The program will display the choices of both the user and the computer, and announce
the winner. The game will keep going until the user enters “exit”. The program should
keep track of the number of rounds played and the score:
● The winner will add one point to their score.
● If two choices are the same (tie), no point is added to either.
The program needs to implement input validation, making sure that the user enters a valid
choice (all in lowercase: rock, paper, scissors).
Sample input and output:
1. Input:
Choose your option (rock, paper, scissors), or type ‘exit’ to
quit: rock
Output:
Computer chooses: scissors
You win!
Score: You 1 - Computer 0
2. Input (continuing from the previous input/output):
Choose your option (rock, paper, scissors), or type ‘exit’ to
quit: fist
Invalid input. Please choose your option (rock, paper,
scissors), or type ‘exit’ to quit: paper
Output:
Computer chooses: paper
It was a tie
Score: You 1 - Computer 0
3. Input:
Choose your option (rock, paper, scissors), or type ‘exit’ to
quit: exit
Output:
Thanks for playing!
