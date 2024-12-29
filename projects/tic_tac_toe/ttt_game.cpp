#include<iostream>
#include "ttt_functions.hpp"
int main(){
    intro();
     while (!win_con() && !grid_status()) {
        continue_game();
    }
    end_game();
}