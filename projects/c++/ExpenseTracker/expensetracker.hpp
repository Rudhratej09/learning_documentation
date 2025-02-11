// expense tracker hpp(header)
#include<iostream>
#include<string>
#include<vector>
class Expense{
    public:
    std::string date;
    std::string time;
    std::string category;
    int amount;
    Expense() : date(""), time(""), amount(0), category(""){}
    Expense(std::string dt,std::string t,int amt,std::string cat);
    void makeExpense(std::vector <Expense> &expenses);
    void removeExpense(std::vector<Expense>&expenses,std::string category,std::string time,std::string date,int amount);
    static void showExpense(std::vector<Expense>&expenses);
    
};
