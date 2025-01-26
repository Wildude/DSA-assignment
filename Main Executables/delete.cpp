#include "../File ops/student.hpp"
#include "../Chapter 6/trees.hpp"
#include "../File ops/arrays.hpp"
#include "../File ops/formaters.hpp"
int main(){
    string filename;
    cout << " Enter filename to read: ";
    cin >> filename;
    string path = "../Data/" + filename;
    ifstream file(path);
    if(!file){
        cout << " file opening error\a\n";
        return 0;
    }
    Bnode<student>* studentList = NULL;
    while(!file.eof()){
        string fname, lname, id;
        bool datareached = false;
        ushort level;
        string buffer;
        file >> buffer;
        if(buffer == "Name:"){
            datareached = true;
            file >> buffer;
            fname = buffer;
            file >> buffer;
            lname = buffer;
            file >> buffer;
        }
        if(buffer == "ID:"){
            file >> buffer;
            id = buffer;
            file >> buffer;
        }
        if(buffer == "Level:"){
            file >> buffer;
            level = (int)(buffer[0] - 48);
            file >> buffer;
        }
        if(!datareached)continue;
        student stud(fname, lname, id, level);
        Bnode<student>* nowNode = new Bnode<student>({stud, NULL, NULL});
        insertDnode(studentList, nowNode);
    }
    file.close();
    deleter:
    cout << " Displaying data\n";
    int listsize = getSize(studentList);
    Bnode<student>* tailnode = nextNode(studentList, listsize - 1);
    Bnode<student>* headnode = studentList;
    {
        int counter = 0;
        while(tailnode){
            counter++;
            cout << " " << counter << " " << tailnode->id << endl;
            tailnode = tailnode->prev;
        }
    }
    string id;
    cout << " Enter deletion key: ";
    cin >> id;
    student stud("", "", id, 1);
    tailnode = nextNode(studentList, listsize - 1);
    int index = searchNodeI(studentList, stud);
    if(index < 0)cout << " student with ID: " << id << " not found\a\n";
    else deleteDnode(studentList, index);
    cout << " would you like to continue (n for no): ";
    char c;
    cin >> c;
    if(c != 'n' && toupper(c) != 'N') goto deleter;
    else {
        headnode = studentList;
        ofstream file(path);
        if(!file){
            cout << " File opening for deletion failed\n\a";
            return 0;
        }
        int counter = 0;
        while(tailnode){
            counter++;
            file << " " << counter <<": " << tailnode->id << endl;
            tailnode = tailnode->prev;
        }
        file.close();
        return 0;
    }
}
