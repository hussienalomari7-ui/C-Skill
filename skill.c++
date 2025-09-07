#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 5;
    int grades[NUM_STUDENTS];
    int total = 0;
    double average;
    
    cout << "Welcome to the Student Grades Manager!" << endl;
    cout << "======================================" << endl;
    
    // Input grades using a for loop
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grades[i];
        total += grades[i];
    }
    
    // Calculate average
    average = static_cast<double>(total) / NUM_STUDENTS;
    
    cout << "\nGrade Results:" << endl;
    cout << "==============" << endl;
    
    // Display all grades with evaluation
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ": " << grades[i];
        
        // Use if else to evaluate grades
        if (grades[i] >= 90) {
            cout << " (Excellent)" << endl;
        } else if (grades[i] >= 80) {
            cout << " (Very Good)" << endl;
        } else if (grades[i] >= 70) {
            cout << " (Good)" << endl;
        } else if (grades[i] >= 60) {
            cout << " (Pass)" << endl;
        } else {
            cout << " (Fail)" << endl;
        }
    }
    
    // Display total and average
    cout << "\nTotal of all grades: " << total << endl;
    cout << "Average grade: " << average << endl;
    
    // Find highest grade
    int highest = grades[0];
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    cout << "Highest grade in class: " << highest << endl;
    
    cout << "\nThank you for using the program!" << endl;
    
    return 0;
}