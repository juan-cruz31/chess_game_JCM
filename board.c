#include "board.h"


struct chessboard {
    Piece cells[BOARD_SIZE][BOARD_SIZE];
    int w_b_turn;

    bool white_can_castle_kingside;
    bool white_can_castle_queenside;

    bool black_can_castle_kingside;
    bool black_can_castle_queenside;

    //other rules
};


enum Col = { a, b, c, d, e, f, g, h };



void clear_board(board b){
    for(int row = 0; row < BOARD_SIZE; row++){
        for(int column = 0; column < BOARD_SIZE; column++){
            b->cells[row][column] = EMPTY;
        }
    }

    b->w_b_turn = 0;

    b->white_can_castle_kingside = false;
    b->white_can_castle_queenside = false;

    b->black_can_castle_kingside = false;
    b->black_can_castle_queenside = false;

}



void load_start_position(board b){

    clear_board(b);

    //  WHITE PIECES
    b->cells[0][0] = W__ROOK;
    b->cells[0][1] = W_KNGHT;
    b->cells[0][2] = W_BISHP;
    b->cells[0][3] = W_QUEEN;
    b->cells[0][4] = W__KING;
    b->cells[0][5] = W_BISHP;
    b->cells[0][6] = W_KNGHT;
    b->cells[0][7] = W__ROOK;

    //BLACK PIECES
    b->cells[7][0] = B__ROOK;
    b->cells[7][1] = B_KNGHT;
    b->cells[7][2] = B_BISHP;
    b->cells[7][3] = B_QUEEN;
    b->cells[7][4] = B__KING;
    b->cells[7][5] = B_BISHP;
    b->cells[7][6] = B_KNGHT;
    b->cells[7][7] = B__ROOK;


    for(int column = 0; column < BOARD_SIZE; column++){
        b->cells[1][column] = W__PAWN;
        b->cells[6][column] = B__PAWN;
    }

    b->white_can_castle_kingside = true;
    b->white_can_castle_queenside = true;

    b->black_can_castle_kingside = true;
    b->black_can_castle_queenside = true;

}


int square_w_b(board b, int row, int column){
    int color;    // WHITE = 0  BLACK = 1

    if((row % 2 == 0 && column % 2 == 0) || (row % 2 == 1 && column % 2 == 1)){
        color = 1;
    } else{
        color = 0;
    }

    return color;
}

/*
board (board p, int row, int column){

    board q;
    q = malloc(sizeof(struct chessboard));


    q->cells[row][column] = p -> snd;
    q->snd = p -> fst;

    return q;
}

void var_destroy(board p){

    free(p);
    p = NULL;
}
*/



void move_piece(board b, int row, int column){

    if(row < 0 || row >= BOARD_SIZE || column < 0 || column >= BOARD_SIZE){
        printf("Invalid square; please enter a valid value.");
    }

    int color;    // WHITE = 0  BLACK = 1

    color = square_w_b(b, row, column);




}







