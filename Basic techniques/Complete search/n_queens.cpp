#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

// Printing the given solution board
void printSolution(vector<vector<int>> board){
    static int k = 1;

    // if(k > 1) return;                        To restrict printing to only one solution

    cout << "Solution " << k++ << "\n";

    loop(i,0,board.size()){
        loop(j,0,board.size()){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// Check if the queen can be placed at board[row][col] given queens have been put in col 0 to col-1
bool isSafe(vector<vector<int>> board, int row, int col){
    int i, j;

    loop(i,0,col){              // Ensure no queen present on same row
        if(board[row][i]){
            return false;
        }
    }

    for(i=row, j=col; i>=0 && j>=0; i--, j--){      // Ensure no queen present on upper left diagonal
        if(board[i][j]){
            return false;
        }
    }

    for(i=row, j=col; j >= 0 && i<board.size(); i++,j--){   // Ensure no queen on bottom left diagonal
        if(board[i][j]){
            return false;
        }
    }
    return true;
}

bool solveNQueensUtil(vector<vector<int>> board, int col){

    // If all queens placed then solution has been obtained
    if(col == board.size()){
        printSolution(board);
        return true;
    }

    // For this column, try placing queen in each of the row
    bool res = false;

    loop(i,0,board.size()){
        if(isSafe(board,i,col)){        // Is it safe in board[i][col]
            board[i][col] = 1;          // Place it then

            res = solveNQueensUtil(board, col+1) || res;    // True if any placement possible

            board[i][col] = 0;  // Backtrack i.e. if not leading to a solution then remove queen from [i][col]
        }
    }
    return res;     // If queen cant be placed in any row in this column then returns false
}

void solveNQueens(){
    int n;
    cout << "Enter the side length(N) of the square board: ";
    cin >> n;
    vector<vector<int>> board(n, vector<int> (n,0));

    if(solveNQueensUtil(board,0) == false){
        cout << "No solutions exist\n";
        return ;
    }
    return ;
}

int main(){
    solveNQueens();
    return 0;
}