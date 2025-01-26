#include "../File ops/student.hpp"
#include "../Chapter 6/trees.hpp"
#include "../File ops/arrays.hpp"
int main(){
    /*
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
    */
    string filename;
    cout << " Enter filename to store the list: ";
    cin >> filename;
    string path = "../Data/" + filename;
    ifstream filein(path);
    fstream file;
    if(filein){
        cout << " File already exists: \n";
        cout << " Do you want to overwrite (y for yes): ";
        char c;
        cin >> c;
        if(c == 'y' or toupper(c) == 'Y'){
            filein.close();
            file.open(path, ios::trunc|ios::out);
        }
        else file.open(path, ios::out|ios::in);
    }
    else file.open(path, ios::out|ios::trunc);
    /*
    int listsize = getSize(studentList);
    Bnode<student>** studentsArray = new Bnode<student>*[listsize];
    for(int i = 0; i < listsize; i++){
        studentsArray[i] = new Bnode<student>({studentList->id, NULL, NULL});
        Bnode<student>* temp = studentList;
        setNextNode(studentList);
        delete temp;
    }
    */
    Bnode<int>** intArr = new Bnode<int>*[15];
    for(int i = 0; i < 15; i++){
        intArr[i] = new Bnode<int>({i, NULL, NULL});
    }
    int rooter = makeBST(intArr, 15);
    /*
    sortB(studentsArray, listsize);
    int rootindex = makeBST(studentsArray, listsize);
    Bnode<student>* root = studentsArray[rootindex];
    delete studentsArray;
    */
    cout << " inordered display:\n";
    int left = 0, right = 0;
    inorder(intArr[rooter], file, left, right);
    cout << " Left, right: " << left << ", " << right << endl;
}
