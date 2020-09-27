/*
Create a class which stores name, roll number and total marks for a student. Input data for n students. Find the average marks scored by n students, store it as a data member of the class and display it using a function which may be called without object.
*/

#include <iostream>

using namespace std;

class Student {
    string name;
    int roll;
    float marks;

   public:
    static float total_marks;
    void input_vals() {
        cin >> name >> roll >> marks;
        total_marks = total_marks + marks;
    }
    void display_vals() {
        cout << name << " " << roll << " " << marks << endl;
    }
    static float all_avg_marks(int n) {
        return total_marks / n;
    }
};

float Student::total_marks = 0.0;

int main() {
    int n;
    cin >> n;
    Student objs[n];
    for (int i = 0; i < n; ++i) {
        objs[i].input_vals();
    }
    cout << Student::all_avg_marks(n);
    return 0;
}
