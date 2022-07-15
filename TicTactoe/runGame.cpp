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
void playerInput();

int main()
{
	cout << "Welcome to Tic-Tac-Toe!" << endl;
	cout << endl;
	drawGame();
	cout << endl;
	cout << "Player 1 starts. type the index of you choise." << endl;
	cin.get()
	return 0;
}
//this displays gameboard on screen
void drawGame()
{

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

} 
void playerInput()
{

}
//make the playerinput next time and the system thast checks if one player won the game.