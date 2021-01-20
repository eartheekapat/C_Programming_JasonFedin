// author : eartheekapat
// purpose : 3x3 grid played by two player

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// check if a player win
bool checkForWin();

int main () {
    printf("        Tic Tac Toe\n");
    printf("\n");
    printf("Player 1 (X)  -  Player 2 (O)");
    printf("\n");
    printf("\n");

    char grid[9][9];
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 0; col++) {
            grid[row][col] = ' ';
        }
    }
    // try to print out visualized grid for now
    // add vertical border of the grid
    for (int row = 0; row < 9; row++) {
        for (int col = 2; col < 9; col += 3) {
            grid[row][col] = '|';
        }
    }
    // loop to print out grid
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 0; col++) {
            printf("%c", grid[row][col]);
        }
    }
}