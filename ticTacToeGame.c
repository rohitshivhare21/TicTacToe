#include <stdio.h>
char board[3][3];
// Initialize the board with numbers 1-9 for positions
void initializeBoard() {
    char pos = '1';
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            board[i][j] = pos++;
}
// Display the current board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) 
            printf("---|---|---\n");
    }
    printf("\n");
}
// Check if a player has won; returns 'X', 'O' or ' ' (no winner)
char checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];
    return ' ';
}
// Check if the board is full (tie)
int isBoardFull() {
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}
int main() {
    int player = 1;
    int pos;
    char mark;
    char winner = ' ';
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");
    displayBoard();
    while (winner == ' ' && !isBoardFull())
     {
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        printf("Player %d (%c), enter position (1-9): ", player, mark);
        scanf("%d", &pos);
        if (pos < 1 || pos > 9) {
            printf("Invalid position! Try again.\n");
            continue;
        }
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Position already taken! Try again.\n");
            continue;
        }
        board[row][col] = mark;
        displayBoard();
        winner = checkWin();
        if (winner != ' ') {
            printf("Player %d (%c) wins! Congratulations!\n", player, mark);
            break;
        } else if (isBoardFull()) {
            printf("Game ended in a tie!\n");
            break;
        }
        player++;
    }
    return 0;
}