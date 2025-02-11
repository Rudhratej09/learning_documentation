// expense tracker cpp
#include<iostream>
#include<string>
#include<vector>
#include "expensetracker.hpp"
Expense::Expense(std::string dt, std::string t, int amt, std::string cat){
date = dt;
    time = t;
    amount = amt;
    category = cat;
}
// add
void Expense::makeExpense(std::vector<Expense>& expenses){
    std::string dt, t, cat;
    int amt;
    std::cout << "Enter Date (DD-MM-YYYY): ";
    std::cin.ignore();
    std::getline(std::cin, dt);

    std::cout << "Enter Time (HH:MM): ";
    std::getline(std::cin, t);

    std::cout << "Enter Amount: ";
    std::cin >> amt;
    std::cin.ignore(); // Clear buffer to ensure correct input

    std::cout << "Enter Category: ";
    std::getline(std::cin, cat);

    // Add new Expense to the vector
    expenses.emplace_back(dt, t, amt, cat);
    std::cout << "Expense added successfully!\n";
}

//remove
void Expense::removeExpense(std::vector<Expense>&expenses,std::string category, std::string time, std::string date, int amount){
for(int i=0;i<expenses.size();i++){
    if(expenses[i].categories==category && expenses[i].date==date and expenses[i].amount==amount && expenses[i].time == time ){
        expenses.erase(expenses.begin()+i);
        std::cout<<"record succesfully erased";
        break;
    }
}
if (!found) {
        std::cout << "Expense not found.\n";
    }
}
//display expneses
void Expense::showExpense(std::vector<Expense>&expenses){
    if (expenses.empty()) {
        std::cout << "No expenses recorded.\n";
        return;
    }

    std::cout << "\n--- Expense List ---\n";
    for (int i = 0; i < expenses.size(); i++) {
        std::cout << "Date: " << expenses[i].date << ", Time: " << expenses[i].time 
                  << ", Amount: ₹ " << expenses[i].amount << ", Category: " << expenses[i].category << "\n";
    }
}
