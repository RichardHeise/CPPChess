#include "classes/piece/piece.hpp"
#include "classes/board/board.hpp"

int main () {

    gameBoard test_game;

    test_game = initialize_game();

    print_board(test_game);

    //printf("coluna: %u, linha %u\n", peao.position.first, peao.position.second);

    return 1;
}