#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

class GradeBook{
public:
    // Definindo um set
    void setCourseName(string name){
        courseName = name;
    }
    // Definindo o get
    string getCourseName(){
        return courseName;
    }
    void displayMessage(){
        cout << "Welcolme to the Grade Book for\n" <<getCourseName() << "!" << endl;
    }
private:
    string courseName;
};


int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Enter your course:" << myGradeBook.getCourseName() <<endl;
    cout << "\nEnter course name:" << endl;
    getline(cin, nameOfCourse);
    // Utiliza-se getline para receber o nome digitado pelo usuário.
    // Isso porque cin salvará a string até o primeiro espaço.
    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage();
    return 0;
}
