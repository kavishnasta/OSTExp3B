#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks (0 to 100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered." << endl;
        return 0;
    }

    switch (marks / 10) {
        case 10: 
        case 9:
            cout << "Grade: A (Excellent)" << endl;
            break;
        case 8:
            cout << "Grade: B (Very Good)" << endl;
            break;
        case 7:
            cout << "Grade: C (Good)" << endl;
            break;
        case 6:
            cout << "Grade: D (Satisfactory)" << endl;
            break;
        case 5:
            cout << "Grade: E (Needs Improvement)" << endl;
            break;
        default:
            cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
