#include "board.hpp"
#include "../../utils/chessUtils.hpp"

gameBoard initialize_board() {
    gameBoard g(8);
    for (int i = 0; i < 8; i++) {
        g[i].resize(8);
    }

    return g;
}

void print_board (gameBoard g) {
    for (int i = 0; i < g.size(); i++) {
        for (int j = 0; j < g[0].size(); j++) {
            if ( g[i][j] )
                printf("%c ", g[i][j]);
            else 
                printf("0 ");
        }
        printf("\n");
    }
}

void initialize_pieces(gameBoard *g) {
    for (uint i = A; i <= H; i++) {
        (*g)[1][i] = 'p';
        (*g)[6][i] = 'p';
    }
}

gameBoard initialize_game() {
    gameBoard game;
    game = initialize_board();
    initialize_pieces(&game);

    return game;
}