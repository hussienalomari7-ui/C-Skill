#include <iostream>
using namespace std;

int main() {
    const int NUM_DAYS = 7;
    int expenses[NUM_DAYS];
    int total = 0;
    double average;
    
    cout << "Daily Expense Tracker Program" << endl;
    cout << "=============================" << endl;
    
    // Input expenses for each day
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Enter expenses for day " << i + 1 << ": ";
        cin >> expenses[i];
        total += expenses[i];
    }
    
    // Calculate average
    average = static_cast<double>(total) / NUM_DAYS;
    
    cout << "\nWeekly Expense Report:" << endl;
    cout << "======================" << endl;
    
    // Display expenses for each day with evaluation
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Day " << i + 1 << ": " << expenses[i] << " SAR";
        
        // Evaluate expenses using if else
        if (expenses[i] == 0) {
            cout << " (You spent nothing)" << endl;
        } else if (expenses[i] < 20) {
            cout << " (Low expenses)" << endl;
        } else if (expenses[i] < 50) {
            cout << " (Moderate expenses)" << endl;
        } else {
            cout << " (High expenses)" << endl;
        }
    }
    
    // Display statistics
    cout << "\nStatistics:" << endl;
    cout << "===========" << endl;
    cout << "Total expenses: " << total << " SAR" << endl;
    cout << "Daily average: " << average << " SAR" << endl;
    
    // Find day with highest expenses
    int highestExpense = expenses[0];
    int highestDay = 1;
    
    for (int i = 1; i < NUM_DAYS; i++) {
        if (expenses[i] > highestExpense) {
            highestExpense = expenses[i];
            highestDay = i + 1;
        }
    }
    
    cout << "Highest expense was on day " << highestDay << " with " << highestExpense << " SAR" << endl;
    
    // Provide recommendations based on expenses
    cout << "\nRecommendations:" << endl;
    cout << "================" << endl;
    
    if (average > 50) {
        cout << "Your expenses are high! Try to reduce them a little." << endl;
    } else if (average > 20) {
        cout << "Your expenses are moderate. Well done!" << endl;
    } else {
        cout << "Your expenses are low. You're good at managing money!" << endl;
    }
    
    cout << "\nThank you for using the Expense Tracker Program!" << endl;
    
    return 0;
}