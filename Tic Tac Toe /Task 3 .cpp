#include<iostream>
using namespace std;

char board[3][3];
char currentplayer ;

void resetBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';   
        }
    }
    currentplayer = 'X'; 
}


void displayboard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];      
            if (j < 2) cout << " | "; 
        }
        if (i < 2) cout << "\n-----------\n"; 
    }
    cout << "\n\n";
}



bool placemark(int pos){
    int row = (pos -1)/3;
    int  column = (pos -1 ) % 3 ;
    if(board[row][column] != 'X'&& board[row][column]!='O'){
        board[row][column] = currentplayer;
        return true ;
    }
    return false ;
}


bool checkwin(){
    for(int i =0 ; i<3 ; i++){
        if((board[i][0]== currentplayer && board[i][1] == currentplayer && board[i][2] == currentplayer) || (board[0][i]== currentplayer &&board[1][i] == currentplayer && board[2][i] == currentplayer))
        return true ;
    }

        if((board[0][0] == currentplayer && board[1][1] == currentplayer && board[2][2] == currentplayer) || (board[0][2] == currentplayer && board[1][1] == currentplayer && board[2][0] == currentplayer))
        return true;

    return false;
}

bool checkdraw(){
    for(int i= 0 ;i<3 ; i++){
        for(int j =0 ; j<3 ; j++){
            if(board[i][j]!='X' && board[i][j]!= 'O'){
                return false ;
            }
        }
    }
    return true ;
}

void switchplayer(){
    currentplayer= (currentplayer == 'X')? 'O':'X';
}

int main() {
    char playAgain;

    do {
        resetBoard();
        bool gameOver = false;

        while(!gameOver) {
            displayboard();
            int move;

            cout << "Player " << currentplayer << ", enter your move (1-9): ";
            cin >> move;

            if(move < 1 || move > 9 || !placemark(move)) {
                cout << "Invalid move. Try again.\n";
                continue;
            }

            if(checkwin()) {
                displayboard();
                cout << "🎉 Player " << currentplayer << " wins!\n";
                gameOver = true;
            } else if(checkdraw()) {
                displayboard();
                cout << "It's a draw!\n";
                gameOver = true;            } else {
                switchplayer();
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
