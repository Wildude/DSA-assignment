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
    insert:
    cout << " Displaying data\n";
    int listsize = getSize(studentList);
    Bnode<student>* tailnode = nextNode(studentList, listsize - 1);
    {
        int counter = 0;
        while(tailnode){
            counter++;
            cout << " " << counter << ": " << tailnode->id << endl;
            tailnode = tailnode->prev;
        }
    }
    student stud;
    cout << " Enter insertion details: \n";
    cin >> stud;
    cout << " Inserted student: ";
    cout << stud;
    tailnode = nextNode(studentList, listsize - 1);
    Bnode<student>* headnode = studentList;
    Bnode<student>* nowNode = new Bnode<student>({stud, NULL, NULL});
    for(int i = 0; i < listsize; i++){
        if(nowNode->id < headnode->id){
            headnode = headnode->next;
            if(!headnode)insertDnode(studentList, nowNode, i + 1);
            continue;
        }
        else{
            insertDnode(studentList, nowNode, i);
            break;
        }
    }
    cout << " would you like to continue (n for no): ";
    char c;
    cin >> c;
    if(c != 'n' && toupper(c) != 'N') goto insert;
    else {
        headnode = studentList;
        ofstream file(path);
        if(!file){
            cout << " File opening for insertion failed\n\a";
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
