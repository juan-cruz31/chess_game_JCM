#ifndef BOARD_H
#define BOARD_H

#include <stdbool.h>

#define BOARD_SIZE 8



typedef enum = {
    EMPTY = 0,
    W__PAWN, W_KNGHT, W_BISHP, W__ROOK, W_QUEEN, W__KING,
    B__PAWN, B_KNGHT, B_BISHP, B__ROOK, B_QUEEN, B__KING
} Piece;




typedef struct {
    Piece cells[BOARD_SIZE][BOARD_SIZE];
    int w_b_turn;

    bool white_can_castle_kingside;
    bool white_can_castle_queenside;

    bool black_can_castle_kingside;
    bool black_can_castle_queenside;

    //other rules
} ChessBoard;




void clear_board(ChessBoard *board);

void load_start_position(ChessBoard *board);

#endif








