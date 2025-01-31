// expense tracker cpp
#include<iostream>
#include<string>
#include<vector>
#include "expensetracker.hpp"

// add
void Expense::makeExpense(std::string dt,std::string t,std::string cat,int amt){
    date=dt;
    amount=amt;
    categories=cat;
    time=t;
}

//remove
void Expense::removeExpense(std::vector<Expense>&expenses,std::string dt,std::string t,std::string cat,int amt){
for(int i=0;i<expenses.size();i++){
    if(expenses[i].categories==cat && expenses[i].date==dt and expenses[i].amount==amt ){
        expenses.erase(expenses.begin()+i);
        std::cout<<"record succesfully erased";
        return;
    }
}
std::cout<<"record not found";
}
//display expneses
void Expense::showExpense(std::vector<Expense>&expenses){
    for(int i=0;i<expenses.size();i++){
        std::cout<<"==========================\n";
        std::cout<<"Date:"<<expenses[i].date<<"\n";
        std::cout<<"Time:"<<expenses[i].time<<"\n";
        std::cout<<"Amount:"<<expenses[i].amount<<"\n";
        std::cout<<"Category:"<<expenses[i].categories<<"\n";
        std::cout<<"==========================\n";
    }
}
