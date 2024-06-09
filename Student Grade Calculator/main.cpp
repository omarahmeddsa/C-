#include <iostream>
using namespace std;

std::string gradeStudent(double percentage) {
    if (percentage < 0 || percentage > 100) {
        return "Invalid Percentage";
    } else if (percentage >= 90) {
        return "A";
    } else if (percentage >= 80) {
        return "B";
    } else if (percentage >= 70) {
        return "C";
    } else if (percentage >= 60) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    double percentages[] = {95, 85, 75, 65, 55, -10, 105};
    for (double percentage : percentages) {
        cout << "Percentage: " << percentage << " - Grade: " << gradeStudent(percentage) << endl;
    }
    return 0;
}
