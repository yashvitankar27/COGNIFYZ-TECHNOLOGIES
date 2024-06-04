#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numSubjects;
    double grade, totalGrades = 0;
    vector<double> grades;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter grade for subject " << i + 1 << ": ";
        cin >> grade;
        grades.push_back(grade);
        totalGrades += grade;
    }

    
    double averageGrade = totalGrades / numSubjects;

    
    cout << "Average grade: " << averageGrade << endl;

    return 0;
}