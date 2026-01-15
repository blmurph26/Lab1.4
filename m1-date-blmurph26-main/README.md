# Assignment: Working with Constructors and Operator Overloading

## Learning Outcomes
By completing this assignment, you will:

- Strengthen your understanding of constructor overloading.
- Practice writing accessor methods.
- Implement operator overloading for custom classes.
- Work with string formatting and output stream operators in C++.

---

## Description
In this assignment, you will extend the provided `Date` class by adding new constructors, accessor methods, and overloaded operators. Your goal is to make the class more flexible and intuitive while avoiding redundant code.


You will Create a `Date` class to include the following:

### 1. Add New Constructors
- **Default Constructor:** Initializes `year`, `month` and `day` to `1`.
- **Overloaded Constructor:** Accepts three arguments—`year`, `month` and `day`.

### 2. Add Accessor Methods
Implement the following methods:
- `getYear()`
- `getMonth()`
- `getDate()`

Each method should return the corresponding field of the date object.




### 3. Overload the `+` Operator
- Implement `operator+` so that for any date object `d`, the expression `d + n` calls `d.addDays(n)` internally, where `n` is the number of days to add.
- You will directly call `addDays()` within the operator to avoid duplicating logic.


```angular2html
Date d(2025, 1, 5);
Date d2 = d1 + 20; 
cout << d2; //Should be Jan 25, 2025

```


### 4. Complete the `toString()` Method
- Return a string representing the date in the format:  
  **"Mon day, year"**  
- Month text should only be three characters including Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec.

Given:
```cpp
Date* d = new Date(2019, 2, 14);
```
Would display as 
```c
Feb 14, 2019
```

### 5. Write a main() method
Write a main() method to test your program.  The user enters a starting date, and the program tells them when tehir next appointment will be after a certain number of days. Make sure to use the operator+ to add the days to the date.  
```angular2html
=== Appointment Scheduler ===

Enter appointment year: 2025
Enter appointment month: 3
Enter appointment day: 12

How many days until the next appointment? 45

Your next appointment will be on:
Apr 26, 2025


```

### 6.  Make sure to run the test cases.  Then Push the changes to Git.  Submit your git link.