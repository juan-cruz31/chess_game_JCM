#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

// These libraries allow the pieces to be loaded, as they are larger than an ASCII character
#include <wchar.h>
#include <locale.h>

#define SIZE_BOARD 8

// Unicode Chess Symbols
// White: ♚ ♛ ♜ ♝ ♞ ♟
// Black: ♔ ♕ ♖ ♗ ♘ ♙

wchar_t board[SIZE_BOARD][SIZE_BOARD]={
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
    {L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '}
};


void print_board(wchar_t board[SIZE_BOARD][SIZE_BOARD]){
    for(int row = 0; row < SIZE_BOARD; row++){
        for(int column = 0; column < SIZE_BOARD; column++){
            wprintf(L"%c", board[row][column]);
        }
    }
}









