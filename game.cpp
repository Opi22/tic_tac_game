#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
void playerX(int, char(&board)[3][3]);
void playerO(int , char (&board)[3][3] );
bool win(char (&board)[3][3]);
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
        {'X', '2', '3'},
        {'4', 'X', '6'},
        {'7', '8', 'X'}
    };
    int count=0;
    bool winner=false;
    int num;
     displayBoard(board);
     while(winner=false){
     cout<<"\n Enter A number to palce X:  ";
     cin>>num;
    playerX(num, board);
    if (win(board)){
        cout <<"X won the game \n";
        winner =true;
    } else{
        displayBoard(board);
        cout<<"Enter a number to place O:  ";
        cin>>num;
        playerO(num, board);
        if (win(board)){
            cout<<"O won the game \n";
            winner = true;
        } else {
            winner =false;
        }
    }
    }
    
    
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

void playerO(int num, char (&board)[3][3] ){
    switch(num){
        case 1:
        board[0][0]='O';
        break;
        case 2:
        board[0][1]='O';
        break;
        case 3:
        board[0][2]='O';
        break;
        case 4:
        board[1][0]='O';
        break;
        case 5:
        board[1][1]='O';
        break;
        case 6:
        board[1][2]='O';
         break;
         case 7:
         board[2][0]='O';
         break;
         case 8:
         board[2][1]='O';
         break;
         case 9:
         board[2][2]='O';
         break;
        default:
        cout<<"invalid input \n";
        break;
    }
}
//board[][]==board[][]&&board[][]==board[][]
bool win(char (&board)[3][3]){
    if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]){
        return true;
    } else if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]){
        return true;
    } else if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]){
        return true;
    } else if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]){
        return true;
    } else if (board[0][1]==board[1][1]&&board[1][1]==board[2][1]){
        return true;
    }else if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]){
        return true;
    } else if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]){
       return true;
    } else if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]){
     return true;
    } else {
        return false;
    }
}