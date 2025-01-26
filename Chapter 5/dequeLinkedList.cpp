// deque linked list test 
#include "queue.hpp"
int main(){
    Dnode* Lhead = new Dnode({"head", NULL});
    Dnode* Rhead = new Dnode({"next_node", NULL});
    Dnode* Bhead = new Dnode({"0_node", NULL});
    Dnode* Chead = new Dnode({"2_node", NULL});
    Dnode* Dhead = new Dnode({"3_node", NULL});
    Dnode* Ehead = new Dnode({"4_node", NULL});
    Dnode* Fhead = new Dnode({"5_node", NULL});
    Dnode* Ghead = new Dnode({"6_node", NULL});
    Dnode* empty = NULL;
    nodedeque ldeque;
    cout << " first (empty deque):\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    cout << " after insertF (one node deque):\n";
    ldeque.insertF(Lhead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    cout << " after second insertR (two node deque):\n";
    ldeque.insertR(Rhead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after 3rd insertF (3 node deque):\n";
    ldeque.insertF(Bhead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after 4th insertR (4 node deque):\n";
    ldeque.insertR(Chead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after 5th insertF (5 node deque):\n";
    ldeque.insertF(Dhead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after 6th insertR (6 node deque):\n";
    ldeque.insertR(Ehead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after 7th insertF (7 node deque):\n";
    ldeque.insertF(Fhead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after 8th insertR (8 node deque):\n";
    ldeque.insertR(Ghead);
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (7 node deque):\n";
    cout << " just removedF node:\n";
    Display(ldeque.removeF());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (6 node deque):\n";
    cout << " just removedR node:\n";
    Display(ldeque.removeR());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (5 node deque):\n";
    cout << " just removedF node:\n";
    Display(ldeque.removeF());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (4 node deque):\n";
    cout << " just removedR node:\n";
    Display(ldeque.removeR());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (3 node deque):\n";
    cout << " just removedF node:\n";
    Display(ldeque.removeF());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (2 node deque):\n";
    cout << " just removedR node:\n";
    Display(ldeque.removeR());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (1 node deque):\n";
    cout << " just removedF node:\n";
    Display(ldeque.removeF());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " after remove (0 node deque):\n";
    cout << " just removedR node:\n";
    Display(ldeque.removeR());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    // Deque Underflow
    cout << " after remove (0 node Underflow deque):\n";
    cout << " just removedF node:\n";
    Display(ldeque.removeF());
    cout << " now deque top is:\n";
    cout << " peekF: \n";
    Display(ldeque.peekF());
    cout << " peekR: \n";
    Display(ldeque.peekR());
    cout << " deque size is now: " << ldeque.size() << endl;
    //
    cout << " is deque empty? " << (ldeque.isEmpty() ? "yes\n" : "no\n");
}
