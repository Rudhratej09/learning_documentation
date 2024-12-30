#include<iostream>
#include<string>
#include "ttt_functions.hpp"
std::string grid [9]={" "," "," "," "," "," "," "," "," "};
int player=1;
int position=0;
void intro(){
  std::cout<<"welcome to tic tac toe";
  std::cout<<"the rules are as follows ";
  std::cout<<"""1.the players should move turnwise\n2.if any one player fills the grid in such a way that the grid is filled vertically or horizontally or digonallay in three slots""";
  std::cout<<"press enter to start the game";
  std::cin.ignore();
  std::cout << "===========\n";
  std::cout << "Tic-Tac-Toe\n";
  std::cout << "===========\n\n";
  
  std::cout << "Player 1) X\n";
  std::cout << "Player 2) O\n\n";

  std::cout << "Here's the 3 x 3 grid:\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  1  |  2  |  3   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  4  |  5  |  6   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  7  |  8  |  9   \n";
  std::cout << "     |     |      \n\n";
}
bool win_con(){
    bool condition=false;
//horizaontal possiblities
    if(grid[0]==grid[1] && grid[1]==grid[2] && grid[0]!=" " ){
        condition=true;
    }
     if(grid[3]==grid[4] && grid[4]==grid[5] && grid[3]!=" " ){
        condition=true;
    }
     if(grid[6]==grid[7] && grid[7]==grid[8] && grid[6]!=" " ){
        condition=true;
    }
    //vertical possibilities
     if(grid[0]==grid[3] && grid[3]==grid[6] && grid[0]!=" " ){
        condition=true;
    }
     if(grid[1]==grid[4] && grid[4]==grid[7] && grid[1]!=" " ){
        condition=true;
    }
     if(grid[2]==grid[5] && grid[5]==grid[8] && grid[2]!=" " ){
        condition=true;
    }
    //diagonal possibilities
     if(grid[0]==grid[4] && grid[4]==grid[8] && grid[0]!=" " ){
        condition=true;}
    
    if(grid[6]==grid[4] && grid[4]==grid[2] && grid[6]!=" " ){
        condition=true;}
        return condition;
    
}
bool grid_status(){
    bool filled=true;
    for(int i=0;i<=9;i++){
        if(grid[i]==" "){
            filled=false;
        }
    }
    return filled;
}
void grid_layout(){

  std::cout << "     |     |      \n";

  std::cout << "  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << "\n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << "\n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << "\n";
  std::cout << "     |     |      \n";

  std::cout << "\n";
        
}
void select_grid(){
    std::cout<<"player"<<player<<"'s turn (enter a number from 1-9)";
    while(!(std::cin>> position)){
    std::cout<<"please enter a valid number from 1-9";
    std::cin.clear();
    std::cin.ignore();

    }
    while( (grid[position-1])!=" "){
     std::cout<<"this place is filled try again";
     std::cout<<"please enter a valid number from 1-9";
     std::cout<<"\n";
    }}
void grid_update() {
    if(player==1){
        grid[position-1]="X";
    }
else{
    grid[position-1]="O";
}
}

void turn_switch(){
    if(player==1){
        player=2;
    }else{
        player=1;
    }
}
void continue_game(){
    if(win_con()==0 && grid_status()==0){
        select_grid();
        grid_update();
        
        grid_layout();
        if (!win_con() && !grid_status()) {
        turn_switch();
    }
    }
}
void end_game(){
    if(win_con()==1){
        std::cout<<" We have a winner!";
    }
    else if(win_con()==0){
        std::cout<<" We have a tie";
    }
}
