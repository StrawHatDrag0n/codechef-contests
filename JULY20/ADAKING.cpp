#include<bits/stdc++.h>
#define ll long long

using namespace std;

void print_board(char board[][10]) {
    int count_moves = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout<<board[i][j];
        }
        cout<<endl;
    }
}


int main() {
    ll t = 0;
    cin>>t;

    while(t--) {
        ll k = 0;
        char board[10][10];
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                board[i][j] = '.';
            }
        }
        cin>>k;
        bool king_placed = false;
        ll allowed_moves = 64;
        ll i = 0, j = 0;
        for(i = 0; i < 8; i++) {
            if(allowed_moves == k && j == 8 && !king_placed) {
                board[i][7] = 'O';
                king_placed = true;
                break;
            }
            for (j = 0; j < 8; j++) {
                if (allowed_moves > k ){
                    board[i][j] = 'X';
                    allowed_moves -= 1;
                } else if(allowed_moves == k && !king_placed) {
                    board[i][j] = 'O';
                    king_placed = true;
                    break;
                }
            }
        }

        print_board(board);


    }
}