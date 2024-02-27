#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook{
public:
    GradeBook(string name){
        setCourseName(name);
    }
    void setCourseName(string name){
        courseName = name;
    }
    string getCourseName(){
        return courseName;
    }
    void displayMessage(){
        cout << "Welcome to grade book for\n" << getCourseName() << "!" << endl;
    }
private:
    string courseName;
};

int main(){
    GradeBook gradeBook1("Matematica");
    GradeBook gradeBook2("Fisica");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
    return 0;
}