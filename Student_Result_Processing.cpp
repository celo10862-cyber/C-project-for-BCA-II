#include <iostream>
using namespace std;

// Overload a function calculateAverage()
double calculateAverage(double sub1, double sub2) {
    return (sub1 + sub2) / 2.0;
}

double calculateAverage(double sub1, double sub2, double sub3) {
    return (sub1 + sub2 + sub3) / 3.0;
}

double calculateAverage(double sub1, double sub2, double sub3, double sub4, double sub5) {
    return (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
}

// Inline function isPass() that returns true if average >= 40
inline bool isPass(double average) {
    return average >= 40.0;
}

int main() {
    double s1, s2, s3, s4, s5, avg;

    // Two subjects
    cout << "Enter marks for 2 subjects: ";
    cin >> s1 >> s2;
    avg = calculateAverage(s1, s2);
    cout << "Average: " << avg << " Status: " << (isPass(avg) ? "Pass" : "Fail") << "\n\n";

    // Three subjects
    cout << "Enter marks for 3 subjects: ";
    cin >> s1 >> s2 >> s3;
    avg = calculateAverage(s1, s2, s3);
    cout << "Average: " << avg << " Status: " << (isPass(avg) ? "Pass" : "Fail") << "\n\n";

    // Five subjects
    cout << "Enter marks for 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    avg = calculateAverage(s1, s2, s3, s4, s5);
    cout << "Average: " << avg << " Status: " << (isPass(avg) ? "Pass" : "Fail") << "\n";

    return 0;
}
