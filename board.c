#include "board.h"


void clear_board(ChessBoard *board){
    for(int row = 0; row < BOARD_SIZE; row++){
        for(int column = 0; column < BOARD_SIZE; column++){
            board->cells[row][column] = EMPTY;
        }
    }

    board->w_b_turn = 0;

    board->white_can_castle_kingside = false;
    board->white_can_castle_queenside = false;

    board->black_can_castle_kingside = false;
    board->black_can_castle_queenside = false;

}



void load_start_position(ChessBoard *board){

    clear_board(board);

    //  WHITE PIECES
    board->cells[0][0] = W__ROOK;
    board->cells[0][1] = W_KNGHT;
    board->cells[0][2] = W_BISHP;
    board->cells[0][3] = W_QUEEN;
    board->cells[0][4] = W__KING;
    board->cells[0][5] = W_BISHP;
    board->cells[0][6] = W_KNGHT;
    board->cells[0][7] = W__ROOK;

    //BLACK PIECES
    board->cells[7][0] = B__ROOK;
    board->cells[7][1] = B_KNGHT;
    board->cells[7][2] = B_BISHP;
    board->cells[7][3] = B_QUEEN;
    board->cells[7][4] = B__KING;
    board->cells[7][5] = B_BISHP;
    board->cells[7][6] = B_KNGHT;
    board->cells[7][7] = B__ROOK;


    for(int column = 0; column < BOARD_SIZE; column++){
        board->cells[1][column] = W__PAWN;
        board->cells[6][column] = B__PAWN;
    }

    board->white_can_castle_kingside = true;
    board->white_can_castle_queenside = true;

    board->black_can_castle_kingside = true;
    board->black_can_castle_queenside = true;

}



