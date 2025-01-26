// deque array test
#include "queue.hpp"
int main(){
    dequeS<string> texts(10);
    cout << " is deque empty: " << (texts.isEmpty() ? "yes\n" : "no\n");
    texts.insertF("hey");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertR("what");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertF("the");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertR("fuck");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertF("was");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertR("that");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertF("man");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertR("are");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertF("you");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertR("crazy?");
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    texts.insertF("how?"); // deque overflow
    cout << " just added (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " is deque full: " << (texts.isFull() ? "yes\n" : "no\n");
    cout << " current deque size: " << texts.size() << endl;
    cout << " max deque capacity: " << texts.maxSize() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " just removedF: " << texts.removeF() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedR: " << texts.removeR() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedF: " << texts.removeF() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedR: " << texts.removeR() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedF: " << texts.removeF() << endl;
    cout << " insertingR \"after crazy\" \n";
    texts.insertR("after crazy");
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedR: " << texts.removeR() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedF: " << texts.removeF() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedR: " << texts.removeR() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedF: " << texts.removeF() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedR: " << texts.removeR() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " current deque size: " << texts.size() << endl;
    cout << " just removedF: " << texts.removeF() << endl;
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " just removedR (underflow): " << texts.removeR() << endl; // deque underflow
    cout << " text (F, R): " << texts.peekF() << ", " << texts.peekR() << endl;
    cout << " is deque empty? " << (texts.isEmpty() ? "yes\n" : "no\n");
}