//h

#include<iostream>
#include<vector>
#include<string>

using std::vector; using std::string;

#ifndef TicTacToe_h
#define TicTacToe_h

class TicTacToe
{
  public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const;
    void display_board()const;

  private:
    void set_next_player();
    bool check_board_full()const;
    void clear_board();
    string player;
    vector<string> pegs{9," "};
}
#endif