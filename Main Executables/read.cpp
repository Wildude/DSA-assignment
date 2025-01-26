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
    cout << " Displaying data\n";
    int listsize = getSize(studentList);
    Bnode<student>* tailnode = nextNode(studentList, listsize - 1);
    {
        int counter = 0;
        while(tailnode){
            counter++;
            cout << " " << counter << " " << tailnode->id << endl;
            tailnode = tailnode->prev;
        }
    }
    tailnode = nextNode(studentList, listsize - 1);
    Bnode<student>** studentArray = new Bnode<student>*[listsize];
    for(int i = 0; i < listsize && tailnode; i++){
        studentArray[i] = new Bnode<student>({tailnode->id, NULL, NULL});
        tailnode = tailnode->prev;
    }
    int root = makeBST(studentArray, listsize);
    Bnode<student>* rootnode = studentArray[root];
    delete studentArray;
    string keyid;
    searcher:
    cout << " Enter key to search: ";
    cin >> keyid;
    student temp("", "", keyid, 1);
    Bnode<student>* retkey = searchBST(rootnode, temp);
    cout <<" Search for student with ID: " << keyid << (retkey ? " success\n": " failed\n");
    if(retkey){
        cout << retkey->id << endl;
    }
    cout << " would you like to continue (n for no): ";
    char c;
    cin >> c;
    if(c != 'n' && toupper(c) != 'N') goto searcher;
    else return 0;
}