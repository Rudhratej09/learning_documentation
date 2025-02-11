# Expense Tracker Project

## Overview

This project was created to improve knowledge of **Classes and Objects in C++**. The next steps will involve **file handling integration with JSON**, as well as adding features like **reports and statistics** to enhance its functionality.

## Learnings from the Project

### **Learnings from ****`expensetracker_functions.hpp`**** (Header File)**

#### **1. Why Take ****`std::vector<Expense>&`**** as a Reference in ****`MakeExpense()`****?**

- Passing the vector **by value** creates a **copy**, meaning modifications inside the function **do not affect the original list**.
- Passing it **by reference (****`&`****)** ensures that expenses are **added directly** to the original vector, avoiding unnecessary copies and improving performance.

#### **2. Why Use ****`const std::vector<Expense>&`**** in ****`ShowExpenses()`****?**

- Since `ShowExpenses()` **only reads** the data and does **not modify** the vector, it should be passed as `const std::vector<Expense>&`.
- This prevents accidental modifications and also **avoids unnecessary copying**, improving efficiency.

#### **3. Why Make ****`showExpense()`**** a Static Function?**

- Since `showExpense()` only **reads data** and does not modify an `Expense` object, it does not need to depend on an instance.
- Making it **static** allows it to be called **without creating an object**, improving code structure.

#### **4. Defining Constructors in ****`hpp`**** vs ****`cpp`**** Files**

- If the constructor is **defined in both ****`hpp`**** and ****`cpp`**, it causes **multiple definition errors**.
- For **large projects**, the constructor should be **declared in the header (****`hpp`****)** and **defined in the source (****`cpp`****)**.
- For **small projects**, an **inline constructor** in the header may be acceptable, but not ideal for scalability.

---

### **Learnings from ****`expensetracker_functions.cpp`**** (Implementation File)**

#### **1. No Matching Constructor (****`Expense expense;`**** Error)**

- If only a **parameterized constructor** exists, creating an object without parameters results in a compilation error.
- Adding a **default constructor** solves this issue, ensuring an object can be created without explicit arguments.

#### **2. Why Use ****`expenses.erase(expenses.begin() + i)`**** Instead of ****`expenses.erase(i)`****?**

- `std::vector::erase()` expects an **iterator**, not an index.
- `expenses.begin() + i` converts the index `i` into an iterator pointing to the correct position.
- Directly using `expenses.erase(i)` results in a compilation error because `i` is an integer, not an iterator.

#### **3. ****`emplace_back()`**** vs ****`push_back()`**

- `push_back()` **creates a temporary object first** and then copies/moves it into the vector.
- `emplace_back()` **constructs the object directly in place**, avoiding the need for a temporary object.
- `emplace_back()` is **more efficient** for constructing objects inside a vector, especially for complex objects.

---

## **Steps to Run the Project Using CMD**

### **1. Compile the Code**

Open **Command Prompt (CMD)** and navigate to the project directory. Then, compile the code using `g++`:

```sh
 g++ -o expense_tracker mainexpensetracker.cpp expensetracker_functions.cpp
```

### **2. Run the Executable**

Once compiled, run the program:

```sh
 ./expense_tracker   # On Linux/Mac
 expense_tracker.exe  # On Windows
```

### **3. Add and View Expenses**

- Follow the prompts to enter expenses.
- View the recorded expenses after adding them.

---

## Future Enhancements

- **File Handling with JSON**: To store and retrieve expense data.
- **Reports and Statistics**: Generate summaries based on user expenses.
- **Graphical Representation**: Visualize expenses with charts.

---

This project helped in **understanding OOP concepts in C++**, improving **code structure**, and gaining insight into **efficient data handling**. Future iterations will focus on **expanding its features and integrating external libraries**.


