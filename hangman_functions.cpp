#include<iostream>
#include<vector>
#include<string.h>
void game_start(){
    std::cout<<"welcome to hangman\nguess the codeword to win and save the man from dying\n";
}
void display_status(std::vector<char>incorrect,std::string answer){
    std::cout<< "incorrect gussses\n";
    for(int i=0;i<incorrect.size();i++){
        std::cout<<incorrect[i]<<" ";
    }
    std::cout<<"\ncodeword\n";
    for(int i=0;i<answer.length();i++){
        std::cout<<answer[i]<<" ";
    }

}
void game_end(std::string answer,std::string codeword){
    if(answer==codeword){
        std::cout<<"YOU WIN";
    }else{
        std::cout<<"you lost";
    }
}
void display_mistakes(int misses){
    switch(misses){
        case 1:
        std::cout << " |_______        \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       O      \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "_____            \n";
        break;
        case 2:
        std::cout << "  |_______       \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       O      \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       |      \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "_____            \n";
        break;
        case 3:
        std::cout << " |_______        \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       O      \n";
        std::cout << "  |       |\\    \n";
        std::cout << "  |       |      \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "_____            \n";
        break;
        case 4:
        std::cout << " |_______        \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       O      \n";
        std::cout << "  |      /|\\     \n";
        std::cout << "  |       |      \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "_____            \n";
        break;
        case 5:
        std::cout << " |_______        \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       O      \n";
        std::cout << "  |      /|\\    \n";
        std::cout << "  |       |      \n";
        std::cout << "  |      /       \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "_____            \n";
        break;
        case 6:
        std::cout << " |_______        \n";
        std::cout << "  |       |      \n";
        std::cout << "  |       O      \n";
        std::cout << "  |      /|\\    \n";
        std::cout << "  |       |      \n";
        std::cout << "  |      / \\   \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "  |              \n";
        std::cout << "_____            \n";
        break;

    }
}