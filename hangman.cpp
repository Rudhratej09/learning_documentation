#include<iostream>
#include<vector>
#include<string.h>
#include "hangman.hpp"
int main(){
    std::string codeword="codecademy";
    std::string answer="__________";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess=false;
    char letter;
    while(answer!=codeword && misses<7){
        display_mistakes(misses);
        display_status(incorrect,answer);
        std::cout<<"please enter your letter";
        std::cin>>letter;
        for (int i=0;i<codeword.length();i++){
            if(letter == codeword[i]){
                answer[i]=letter;
                guess=true;
            }
        }
        if(guess){
            std::cout<<"correct !";

        }else{
            std::cout<<"incorrect!";
            incorrect.push_back(letter);
            misses++;
        }
        guess=false;

        
    }
    game_end(answer, codeword);
}