#include "tic_tac_toe.h"

using std::cout; using std::cin;

int main() 
{
  int marker;
  std::string player;
  TicTacToe game;

  cout<<"Enter a capital X or O for your sign: ";
  cin>>player;

  game.start_game(player);

  while(game.game_over() == false)
  {
    cout<< "Choose where you'd like to place your position (1-9): ";
    cin>> marker;
    game.mark_board(marker);
    game.display_board();
  }

  cout<<"The game has finished.";
	return 0;
}