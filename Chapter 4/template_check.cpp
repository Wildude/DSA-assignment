#include "structNode.hpp"
int main(){
    Lnode<string>* stringNode = new Lnode<string>({"something", NULL});
    Lnode<string>* nextStringNode = new Lnode<string>({" wrong?", NULL});
    cout << " String node first: \n";
    DisplayS(stringNode);
    cout << " Next String node first: \n";
    DisplayS(nextStringNode);
    insertSnode(stringNode, nextStringNode);
    cout << " String node then: \n";
    DisplayS(stringNode);
    cout << " Next String node then: \n";
    DisplayS(nextStringNode);
}