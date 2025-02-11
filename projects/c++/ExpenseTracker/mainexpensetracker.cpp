// main expense tracker cpp 
#include<iostream>
#include<string>
#include<vector>
#include "expensetracker.hpp"
int main(){
    std::vector <Expense> expenses;
    
    char choice;

    do {
        Expense expense;
        expense.makeExpense(expenses);

        std::cout << "Do you want to add another expense? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    // Display expenses
    std::cout << "\nAll Expenses:\n";
    Expense::showExpense(expenses);

    return 0;
    
}
