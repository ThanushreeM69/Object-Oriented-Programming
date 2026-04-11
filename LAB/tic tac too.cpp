#include <iostream>
#include <vector>

using namespace std;


void drawBoard(const vector<vector<char> >& board) {
    cout << "\n    0   1   2  (Columns)";
    for (int i = 0; i < 3; i++) {
        cout << "\n  -------------";
        cout << "\n" << i << " | "; 
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
    }
    cout << "\n  -------------\n";
}

bool checkWin(const vector<vector<char> >& board, char player) {
    for (int i = 0; i < 3; i++) {
        
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

int main() {
    
    vector<vector<char> > board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int row, col, moves = 0;

    cout << "--- Tic-Tac-Toe: C++ Edition ---\n";
    cout << "Instructions: Enter Row and Column (e.g., 0 1)\n";

    while (true) {
        drawBoard(board);
        cout << "Player " << currentPlayer << ", enter row (0-2) and column (0-2): ";
        
        
        if (!(cin >> row >> col)) {
            cout << "Invalid input! Please enter numbers only.\n";
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            continue;
        }

        
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "\n[!] Invalid move! That spot is taken or out of bounds.\n";
            continue;
        }

        board[row][col] = currentPlayer;
        moves++;

        if (checkWin(board, currentPlayer)) {
            drawBoard(board);
            cout << "\nCONGRATULATIONS! Player " << currentPlayer << " wins!\n";
            break;
        }

        if (moves == 9) {
            drawBoard(board);
            cout << "\nIt's a draw! Well played both.\n";
            break;
        }

        
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
