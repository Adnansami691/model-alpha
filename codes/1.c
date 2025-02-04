#include <stdio.h>

char check_winner(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') return board[0][2];

    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) if (board[i][j] == ' ') return '\0'; // Not finished

    return 'D'; // Draw
}

int main() {
    char board[3][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf(" %c", &board[i][j]);

    char winner = check_winner(board);
    printf("%s\n", winner == 'X' ? "X" : winner == 'O' ? "O" : "Draw"); // Ternary operator for concise output
    return 0;
}