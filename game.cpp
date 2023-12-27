#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
void displayBoard(char board[][3]){
 
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

return 0;
}