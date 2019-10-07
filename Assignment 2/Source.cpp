//David Fox, Assignment 2
//10/6/2019
//Find the Gold Game

#include <iostream>
#include <ctime>
using namespace std;

//declare array size and functions
int const XMAX = 8, YMAX = 8;
int boardGenerator(int *boardArray[XMAX][YMAX]);
bool checkAnswer(int *board[XMAX][YMAX], int x, int y);
int displayBoard(int *visBoard[XMAX][YMAX]);

int main()
{
	char donePlaying;
	int i, xCoord, yCoord, numCorrect;
	int newBoard[XMAX][YMAX];
	
	

	//Generate hidden board
	boardGenerator(&newBoard);

	
	//Display instructions
	cout << "Welcome to Find the Gold!n/" << endl;
	cout << "The board above shows 64 possible locations that " << endl;
	cout << "may contain one of five pieces of gold, or one bomb.n/" << endl;
	cout << "You have five chances to find all of the gold.n/" << endl;
	cout << "If you find the bomb, then the game is over.n/" << endl;
	cout << "Please enter your choice of X and Y coordinates below.n/" << endl;
	
	
		

	//User gets five chances
	for (i = 0; i < 5; i++)
	{
		//Request input
		cout << "X: " << endl;
		cin >> xCoord;
		cout << "Y: " << endl;
		cin >> yCoord;
			
		//Check input for errors
		if (xCoord > 8 || yCoord > 8 || xCoord < 1 || yCoord < 1)
		{
			//error message
			cout << "Sorry, all coordinates must be between 1 and 8" << endl;
			system("pause");
			return;

		}

		//Check if answers are correct
		checkAnswer(&newBoard, xCoord, yCoord);
		

		//Display the number of correct answers
		cout << "You have " << numCorrect << "pieces of gold!" << endl;
		return i;
	}
	
	

	//Display unhidden gameboard
	displayBoard();

	cout << "Please enter y if you want to keep playing." << endl;
	cout << "Press any other key to exit." << endl;
	cin >> donePlaying;
	system("pause");
	if (donePlaying = (char) "y")
		main;
	else
		exit;
}

//display generated board (with answers hidden) to the user
int boardGenerator(int *hidboard[XMAX][YMAX])
{	
	srand(time(NULL));
	
	int hidboard[XMAX][YMAX];
	int x, y, i, n;

	for (i = 0; i < YMAX; i++)
	{
		for (n = 0; n < XMAX; n++)
		{

			x = rand() % XMAX;

			break;
		}

		y = rand() % YMAX;

		
	}
	
	cout << hidboard[x][y];

	return 0;



}


//check user's answer for correctness
bool checkAnswer(int *board[XMAX][YMAX], int x, int y)
{
	int board[XMAX][YMAX];
	int i, n, x, y;
	if ();

	return true;
}

//display the unhidden board to the user
int displayBoard(int *visBoard[XMAX][YMAX])
{
	

	return 0;
}