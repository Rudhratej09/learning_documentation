// main expense tracker cpp 
#include<iostream>
#include<string>
#include<vector>
#include "expensetracker.hpp"
int main(){
    std::vector <Expense> expenses;
    Expense exp;
    
    exp.makeExpense("30-01-2025","17:32","Food",35);
    expenses.push_back(exp);
    exp.showExpense(expenses);
    exp.removeExpense(expenses,"30-01-2025","17:32","Food",35);
    
}
