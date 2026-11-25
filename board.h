#ifndef BOARD_H
#define BOARD_H

#include <stdbool.h>
#include <stdio.h>

#define BOARD_SIZE 8



typedef enum {
    EMPTY = 0,
    W__PAWN, W_KNGHT, W_BISHP, W__ROOK, W_QUEEN, W__KING,
    B__PAWN, B_KNGHT, B_BISHP, B__ROOK, B_QUEEN, B__KING
} Piece;




typedef struct chessboard * board;




void clear_board(board b);

void load_start_position(board b);

int square_w_b(int row, int column);

void move_piece(board b); // INCOMPLETE

#endif








