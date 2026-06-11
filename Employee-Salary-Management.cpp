#include <iostream>
using namespace std;

// Overload a function calculateSalary()
double calculateSalary(double basicSalary) {
    return basicSalary;
}

double calculateSalary(double basicSalary, double bonus) {
    return basicSalary + bonus;
}

double calculateSalary(double basicSalary, double bonus, double overtime) {
    return basicSalary + bonus + overtime;
}

// Inline function taxDeduction() that calculates 10% tax
inline double taxDeduction(double grossSalary) {
    return grossSalary * 0.10;
}

int main() {
    double basicSalary, bonus, overtime;
    double grossSalary, netSalary;

    // Case 1: Full-time employee (basic salary)
    cout << "Enter basic salary for Full-time employee: ";
    cin >> basicSalary;
    grossSalary = calculateSalary(basicSalary);
    netSalary = grossSalary - taxDeduction(grossSalary);
    cout << "Gross Salary: " << grossSalary << ", Net Salary: " << netSalary << "\n\n";

    // Case 2: Employee with bonus
    cout << "Enter basic salary and bonus: ";
    cin >> basicSalary >> bonus;
    grossSalary = calculateSalary(basicSalary, bonus);
    netSalary = grossSalary - taxDeduction(grossSalary);
    cout << "Gross Salary: " << grossSalary << ", Net Salary: " << netSalary << "\n\n";

    // Case 3: Employee with bonus and overtime
    cout << "Enter basic salary, bonus, and overtime: ";
    cin >> basicSalary >> bonus >> overtime;
    grossSalary = calculateSalary(basicSalary, bonus, overtime);
    netSalary = grossSalary - taxDeduction(grossSalary);
    cout << "Gross Salary: " << grossSalary << ", Net Salary: " << netSalary << "\n";

    return 0;
}
