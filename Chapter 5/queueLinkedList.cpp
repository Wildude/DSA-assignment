// queue linked list test
#include "queue.hpp"
int main(){
    Snode* Lhead = new Snode({"head", NULL});
    Snode* Rhead = new Snode({"next_node", NULL});
    Snode* Bhead = new Snode({"0_node", NULL});
    Snode* Chead = new Snode({"2_node", NULL});
    Snode* Dhead = new Snode({"3_node", NULL});
    Snode* Ehead = new Snode({"4_node", NULL});
    Snode* Fhead = new Snode({"5_node", NULL});
    Snode* Ghead = new Snode({"6_node", NULL});
    Snode* empty = NULL;
    nodequeue lqueue;
    cout << " first (empty queue):\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    cout << " after insert (one node queue):\n";
    lqueue.insert(Lhead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    cout << " after second insert (two node queue):\n";
    lqueue.insert(Rhead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after 3rd insert (3 node queue):\n";
    lqueue.insert(Bhead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after 4th insert (4 node queue):\n";
    lqueue.insert(Chead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after 5th insert (5 node queue):\n";
    lqueue.insert(Dhead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after 6th insert (6 node queue):\n";
    lqueue.insert(Ehead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after 7th insert (7 node queue):\n";
    lqueue.insert(Fhead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after 8th insert (8 node queue):\n";
    lqueue.insert(Ghead);
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (7 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (6 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (5 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (4 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (3 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (2 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (1 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " after remove (0 node queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    // Queue Underflow
    cout << " after remove (0 node Underflow queue):\n";
    cout << " just removed node:\n";
    Display(lqueue.remove());
    cout << " now queue top is:\n";
    cout << " peekF: \n";
    Display(lqueue.peekF());
    cout << " peekR: \n";
    Display(lqueue.peekR());
    cout << " queue size is now: " << lqueue.size() << endl;
    //
    cout << " is queue empty? " << (lqueue.isEmpty() ? "yes\n" : "no\n");
}