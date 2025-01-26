#include <iostream>
#include <cctype>
using namespace std;
typedef unsigned short ushort;
class student{
    string firstname;
    string lastname;
    string id;
    ushort level;
    public:
    student(){}
    student(string fname, string lname, string Id, ushort lvl){
        edit(fname, lname, Id, lvl);
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

