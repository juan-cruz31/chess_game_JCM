#ifndef BOARD_H
#define BOARD_H

#include <stdbool.h>

#define BOARD_SIZE 8



typedef enum = {
    EMPTY = 0,
    W_PAWN, W_KNIGHT, W_BISHOP, W_ROOK, W_QUEEN, W_KING,
    B_PAWN, B_KNIGHT, B_BISHOP, B_ROOK, B_QUEEN, B_KING
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








