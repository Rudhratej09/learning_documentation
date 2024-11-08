#include<iostream>
#include<vector>
#include<string>
void game_start();
void display_mistakes(int misses);
void game_end(std::string answer,std::string codeword);
void display_status(std::vector<char>incorrect,std::string answer);