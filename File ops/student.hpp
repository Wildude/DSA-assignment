#include <iostream>
#include <cctype>
using namespace std;
typedef unsigned short ushort;
class student{
    string firstname;
    string lastname;
    string id;
    ushort level;
    void fixID(){
        id[0] = toupper(id[0]);
        id[1] = toupper(id[1]);
        id[2] = toupper(id[2]);
    }
    bool checkID(){
        if(id.length() != 11 || id.find('/') != 3 || id.find_last_of('/') != 8){
            cout << " Invalid ID: " << id << "\a\n";
            return false;
        }
        string gradtype = id.substr(0, 3);
        string numberID = id.substr(4, 4);
        string yearJoined = id.substr(9, 2);
        for(int i = 0; i < 3; i++){
            if(!isalpha(gradtype[i])){
                cout << " Invalid ID: " << id << "\a\n";
                return false;
            }
        }
        for(int i = 0; i < 4; i++){
            if(!isdigit(numberID[i])){
                cout << " Invalid ID: " << id << "\a\n";
                return false;
            }
        }
        if(!isdigit(yearJoined[0]) || !isdigit(yearJoined[1])){
            cout << " Invalid ID: " << id << "\a\n";
            return false;
        }
        // cout << " ID valid: " << id << endl;
        return true;
    }
    public:
    student(){

    }
    student(string fname, string lname, string Id, ushort lvl) : 
    firstname(fname), lastname(lname), id(Id), level(lvl){
        //checkID();
    }
    bool edit(string fname, string lname, string Id, ushort lvl){
        firstname = fname;
        lastname = lname;
        id = Id;
        level = lvl;
        return 0;
    }
    friend ostream& operator<<(ostream&, const student&);
    friend istream& operator>>(istream&, student&);
    bool operator>(const student& stud){
        return this->id > stud.id;
    }
    bool operator<(const student& stud){
        return this->id < stud.id;
    }
    bool operator!=(const student& stud){
        return this->id != stud.id;
    }
    bool operator==(const student& stud){
        return this->id == stud.id;
    }
    bool operator<=(const student& stud){
        return this->id <= stud.id;
    }
    bool operator>=(const student& stud){
        return this->id >= stud.id;
    }
};
ostream& operator<<(ostream& os, const student& stud){
    os << " Student details: \n";
    os << " Name: " << stud.firstname << ' ' << stud.lastname << endl;
    os << " ID: " << stud.id << endl;
    os << " Level: " << stud.level << endl;
    return os;
}
istream& operator>>(istream& in, student& stud){
    string temp_fname, temp_lname, ID;
    ushort year;
    cout << " Enter Student's details: \n";
    cout << " Name: ";
    in >> temp_fname >> temp_lname;
    enter_id:
    cout << " ID: ";
    in >> ID;
    cout << " Level: ";
    in >> year;
    stud.edit(temp_fname, temp_lname, ID, year);
    return in;
}
