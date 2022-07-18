#include <iostream>
#include <string>

using namespace std;

int const ROW = 5;
int const COL = 5;
char gameBoardObj[ROW][COL]{

	{' ','|',' ','|',' '},
	{'-','|','-','|','-'},
	{' ','|',' ','|',' '},
	{'-','|','-','|','-'},
	{' ','|',' ','|',' '}
}; //this is the game board
						  
void drawGame();
void playerOneInput();
void gameLoop();
void checkWinState();
void backToMainMenu();
void playerTwoInput();
void resetGame();
void seeTutorial();
int main()
{
	resetGame();
	 char choose;
	cout << "Welcome to Tic-Tac-Toe!" << endl;
	cout << "-----------------------" << endl;
	cout << endl;
	cout << "Do you want to?" << endl;
	cout << "a) Play a game of Tic-Tac-Toe." << endl;
	cout << "b) see tutorial." << endl;
	cout << "c) Exit." << endl;
	cin >> choose;
	cin.get();
	if (choose == 'a')
	{
		
		gameLoop();
	}
	else if (choose == 'b')
	{
		seeTutorial();
	}
	else if (choose == 'c')
	{
		return 0;
	}
}
void seeTutorial()
{
	cout << endl;
	cout << "TUTORIAL" << endl;
	cout << "--------" << endl;
	cout << endl;
	cout << "The original rules of tic-tac-toe apply to this game. " << endl;
	cout << "players place X and O on the game board and try to get" << endl;
	cout << "3 symbols in vertical/horizontal line or slice from le" << endl;
	cout << "ft to right or from right to left." << endl;
	cout << endl;
	cout << "players place symbols by typing a number from 1-9. the" << endl;
	cout << "(upper row is 1,2,3) (middle row is 4,5,6)(bottom row " << endl;
	cout << "is 7,8,9. Visual representation under this text" << endl;
	cout << endl;
	cout << "1|2|3" << endl;
	cout << "4|5|6" << endl;
	cout << "7|8|9" << endl;
	cout << endl;
	cout << "this is the end of the tutorial. Have fun while gaming!" << endl;
	cout << "press a to go back to main menu" << endl;
	char userInput;
	cin >> userInput;
	if (userInput == 'a')
	{
		main();
	}
	else
	{
		main();
	}
}
void resetGame()
{
	gameBoardObj[0][0] = ' ';
	gameBoardObj[0][2] = ' ';
	gameBoardObj[0][4] = ' ';
	gameBoardObj[2][0] = ' ';
	gameBoardObj[2][2] = ' ';
	gameBoardObj[2][4] = ' ';
	gameBoardObj[4][0] = ' ';
	gameBoardObj[4][2] = ' ';
	gameBoardObj[4][4] = ' ';
}

void drawGame()
{
	cout << endl;
	cout << "GAME BOARD" << endl;
	cout << "----------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << gameBoardObj[0][i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << gameBoardObj[1][i];
	}
	cout <<endl;
	for (int i = 0; i < 5; i++)
	{
		cout << gameBoardObj[2][i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << gameBoardObj[3][i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << gameBoardObj[4][i];
	}
	//this displays gameboard on screen
} 
void playerOneInput()
{
	cout << "Player 1 turn. Where do you want to place your X." << endl;
	cout << "(Where number puts your X on the board)" << endl;
	cout << "|-----|" << endl;
	cout << "|1|2|3|" << endl;
	cout << "|4|5|6|" << endl;
	cout << "|7|8|9|" << endl;
	cout << "-------" << endl;
	int playerOneInputVal;
	
	cin >> playerOneInputVal;
	switch (playerOneInputVal)
	{
	case 1:
		if (gameBoardObj[0][0] == ' ')
		{
			gameBoardObj[0][0] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
	case 2:
		if (gameBoardObj[0][2] == ' ')
		{
			gameBoardObj[0][2] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
	case 3:
		if (gameBoardObj[0][4] == ' ')
		{
			gameBoardObj[0][4] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
		//These three place X in the upper row
	case 4:
		if (gameBoardObj[2][0] == ' ')
		{
			gameBoardObj[2][0] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
	case 5:
		if (gameBoardObj[2][2] == ' ')
		{
			gameBoardObj[2][2] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
	case 6:
		if (gameBoardObj[2][4] == ' ')
		{
			gameBoardObj[2][4] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
		//These three place X in the middle row
	case 7:
		if (gameBoardObj[4][0] == ' ')
		{
			gameBoardObj[4][0] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
	case 8:
		if (gameBoardObj[4][2] == ' ')
		{
			gameBoardObj[4][2] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		break;
	case 9:
		if (gameBoardObj[4][4] == ' ')
		{
			gameBoardObj[4][4] = 'X';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerOneInput();
		}
		//these three place X in the bottom row
		break;
	default:
		cout << "HEY! dont try to crash this game >:(. try again a number on the range of 1-9." << endl;
		playerOneInput();
		break;
	}
}
void playerTwoInput()
{
	cout << "Player 2 turn. Where do you want to place your O." << endl;
	cout << "(Where number puts your O on the board)" << endl;
	cout << "|-----|" << endl;
	cout << "|1|2|3|" << endl;
	cout << "|4|5|6|" << endl;
	cout << "|7|8|9|" << endl;
	cout << "-------" << endl;
	int playerTwoInputVal;
	cin >> playerTwoInputVal;
	switch (playerTwoInputVal)
	{
	case 1:
		if (gameBoardObj[0][0] == ' ')
		{
			gameBoardObj[0][0] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
	case 2:
		if (gameBoardObj[0][2] == ' ')
		{
			gameBoardObj[0][2] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
	case 3:
		if (gameBoardObj[0][4] == ' ')
		{
			gameBoardObj[0][4] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
		//These three place X in the upper row
	case 4:
		if (gameBoardObj[2][0] == ' ')
		{
			gameBoardObj[2][0] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
	case 5:
		if (gameBoardObj[2][2] == ' ')
		{
			gameBoardObj[2][2] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
	case 6:
		if (gameBoardObj[2][4] == ' ')
		{
			gameBoardObj[2][4] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
		//These three place X in the middle row
	case 7:
		if (gameBoardObj[4][0] == ' ')
		{
			gameBoardObj[4][0] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
	case 8:
		if (gameBoardObj[4][2] == ' ')
		{
			gameBoardObj[4][2] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		break;
	case 9:
		if (gameBoardObj[4][4] == ' ')
		{
			gameBoardObj[4][4] = 'O';
		}
		else
		{
			cout << "that slot is allready occupied! Choose another one." << endl;
			playerTwoInput();
		}
		//these three place X in the bottom row
		break;
	default:
		cout << "HEY! dont try to crash this game >:(. try again a number on the range of 1-9." << endl;
		playerTwoInput();
		break;
	}
}
void checkWinState()
{

	if (gameBoardObj[0][0] == 'X' && gameBoardObj[0][2] == 'X' && gameBoardObj[0][4] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[0][0] == 'O' && gameBoardObj[0][2] == 'O' && gameBoardObj[0][4] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//Upper horizontal win
	else if (gameBoardObj[2][0] == 'X' && gameBoardObj[2][2] == 'X' && gameBoardObj[2][4] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[2][0] == 'O' && gameBoardObj[2][2] == 'O' && gameBoardObj[2][4] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//middle horizontal win
	else if (gameBoardObj[4][0] == 'X' && gameBoardObj[4][2] == 'X' && gameBoardObj[4][4] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[4][0] == 'O' && gameBoardObj[4][2] == 'O' && gameBoardObj[4][4] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//lower horizontal win
	else if (gameBoardObj[0][0] == 'X' && gameBoardObj[2][0] == 'X' && gameBoardObj[4][0] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[0][0] == 'O' && gameBoardObj[2][0] == 'O' && gameBoardObj[4][0] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//left vertical win
	else if (gameBoardObj[0][2] == 'X' && gameBoardObj[2][2] == 'X' && gameBoardObj[4][2] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[0][2] == 'O' && gameBoardObj[2][2] == 'O' && gameBoardObj[4][2] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();

	}//middle vertical win
	else if (gameBoardObj[0][4] == 'X' && gameBoardObj[2][4] == 'X' && gameBoardObj[4][4] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[0][4] == 'O' && gameBoardObj[2][4] == 'O' && gameBoardObj[4][4] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//right vertical win
	else if (gameBoardObj[0][0] == 'X' && gameBoardObj[2][2] == 'X' && gameBoardObj[4][4] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[0][0] == 'O' && gameBoardObj[2][2] == 'O' && gameBoardObj[4][4] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//Left slice win
	else if (gameBoardObj[0][4] == 'X' && gameBoardObj[2][2] == 'X' && gameBoardObj[4][0] == 'X')
	{
		cout << "Player 1 Victory!" << endl;
		backToMainMenu();
	}
	else if (gameBoardObj[0][4] == 'O' && gameBoardObj[2][2] == 'O' && gameBoardObj[4][0] == 'O')
	{
		cout << "Player 2 Victory!" << endl;
		backToMainMenu();
	}//right slice win
	else if (gameBoardObj[0][0] != ' ' && gameBoardObj[0][2] != ' ' && gameBoardObj[0][4] != ' ' && gameBoardObj[2][0] != ' ' && gameBoardObj[2][2] != ' ' && gameBoardObj[2][4] != ' ' && gameBoardObj[4][0] != ' ' && gameBoardObj[4][2] != ' ' && gameBoardObj[4][4] != ' ')
	{
		cout << "All spaces occupied! its a tie." << endl;
		backToMainMenu();
	}
}

void backToMainMenu()
{
	char input;
	cout << "go back to main menu by pressing a" << endl;
	cin >> input;
	if (input == 'a')
	{
		main();
	}
	else
	{
		backToMainMenu();
	}
}
void gameLoop()
{
	drawGame();
	cout << endl;
	playerOneInput();
	checkWinState();
	drawGame();
	cout << endl;
	playerTwoInput();
	checkWinState();
	gameLoop();
}