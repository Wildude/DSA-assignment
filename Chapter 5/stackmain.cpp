// sample code for array based stacks
#include "stacks.hpp"
int main(){
    arraystack<string> texts(10);
    texts.push("hey");
    texts.push("what");
    texts.push("the");
    texts.push("fuck");
    texts.push("was");
    texts.push("that");
    texts.push("man");
    texts.push("are");
    texts.push("you");
    texts.push("crazy?");
    texts.push("how?"); // stack overflow
    cout << " is stack full? " << (texts.isFull() ? "yes\n" : "no\n");
    cout << " current stack size: " << texts.size() << endl;
    cout << " max stack capacity: " << texts.maxSize() << endl;
    cout << " top text: " << texts.peek() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl;
    cout << " current stack size: " << texts.size() << endl;
    cout << " just removed: " << texts.pop() << endl; // stack underflow
    cout << " is stack empty? " << (texts.isEmpty() ? "yes\n" : "no\n");
}