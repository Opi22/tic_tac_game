#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
void playerX(int, char(&board)[3][3]);
void playerO(int , char (&board)[3][3] );
void displayBoard(char(& board)[][3]){
 
for (int i=0; i<3; i++){
     cout<<"[ ";   
    for (int j = 0;  j< 3; j++)
    {
        cout<<board[i][j]<<",    ";
    }
    cout<<"]  \n";
    
}
}
int main(){
    char board[3][3]={
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    int count=0;
    do{
     displayBoard(board);
     playerX(9, board);
     displayBoard(board);
    count++;
    }while(count<9);
return 0;
}

void playerX(int num, char (&board)[3][3] ){
    switch(num){
        case 1:
        board[0][0]='X';
        break;
        case 2:
        board[0][1]='X';
        break;
        case 3:
        board[0][2]='X';
        break;
        case 4:
        board[1][0]='X';
        break;
        case 5:
        board[1][1]='X';
        break;
        case 6:
        board[1][2]='X';
         break;
         case 7:
         board[2][0]='X';
         break;
         case 8:
         board[2][1]='X';
         break;
         case 9:
         board[2][2]='X';
         break;
        default:
        cout<<"invalid input \n";
        break;
    }
}