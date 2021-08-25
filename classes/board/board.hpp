#include <vector>
#include <iostream>
using namespace std;

typedef vector<vector<char>> gameBoard;

gameBoard initialize_board();

gameBoard initialize_game();

void initialize_pieces(gameBoard *g);

void print_board (gameBoard g);