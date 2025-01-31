// expense tracker hpp
#include<iostream>
#include<string>
#include<vector>
class Expense{
    private:
    std::string date;
    std::string time;
    std::string categories;
    int amount;
    public:
    Expense(){}
    void makeExpense(std::string dt,std::string t,std::string cat,int amt);
    void removeExpense(std::vector<Expense>&expenses,std::string dt,std::string t,std::string cat,int amt);
    void showExpense(std::vector<Expense>&expenses);
    
};
