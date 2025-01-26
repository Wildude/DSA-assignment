#include "../File ops/student.hpp"
#include "../Chapter 6/trees.hpp"
#include "../File ops/arrays.hpp"
int main(){
    Bnode<student>* studentList = NULL;
    int count = 0;
    cout << " ==================================================================================\n";
    cout << " Students details writer: \n";
    cout << " ==================================================================================\n";
    cout << " INSTRUCTIONS: \n";
    cout << " Student's details are: Name (first and last), ID and Level (seniority)\n";
    cout << " press any key to add students, n to stop adding\n";
    cout << " ==================================================================================\n";
    cout << " Enter students' details: \n";
    while(true){
        count++;
        char c;
        cout << " Enter any button to continue (n to stop): ";
        cin >> c;
        Bnode<student>* studentn = new Bnode<student>({student(), NULL, NULL});
        if(c != 'n' || toupper(c) != 'N'){
            cout << " Student " << count << ":\n";
            cin >> studentn->id;
            insertDnode(studentList, studentn);
        }
        else break;
    }
    if(!studentList){
        cout << " Students list empty\n";
        return 0;
    }
    cout << " ==================================================================================\n";
    cout << " You entered these students (put in a doubly linked list): \n";
    cout << " ==================================================================================\n";
    DisplayD(studentList);
    cout << " ==================================================================================\n";
    string filename;
    cout << " Enter filename to store the list: ";
    cin >> filename;
    string path = "../Data/" + filename;
    ofstream file(path);
    int listsize = getSize(studentList);
    Bnode<student>** studentsArray = new Bnode<student>*[listsize];
    for(int i = 0; i < listsize; i++){
        studentsArray[i] = new Bnode<student>({studentList->id, NULL, NULL});
        Bnode<student>* temp = studentList;
        setNextNode(studentList);
        delete temp;
    }
    sortNode(studentsArray, listsize);
    for(int i = 0; i < listsize; i++){
        file << " " << i + 1 << ": ";
        file << studentsArray[i]->id << endl;
    }
}
