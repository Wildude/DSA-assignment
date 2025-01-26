// linked list test of stack
#include "stacks.hpp"
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
    nodestack lstack;
    cout << " first (empty stack):\n";
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    cout << " after push (one node stack):\n";
    lstack.push(Lhead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    cout << " after second push (two node stack):\n";
    lstack.push(Rhead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after 3rd push (3 node stack):\n";
    lstack.push(Bhead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after 4th push (4 node stack):\n";
    lstack.push(Chead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after 5th push (5 node stack):\n";
    lstack.push(Dhead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after 6th push (6 node stack):\n";
    lstack.push(Ehead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after 7th push (7 node stack):\n";
    lstack.push(Fhead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after 8th push (8 node stack):\n";
    lstack.push(Ghead);
    cout << " peek: \n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (7 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (6 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (5 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (4 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (3 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (2 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (1 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " after pop (0 node stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    // Stack Underflow
    cout << " after pop (0 node Underflow stack):\n";
    cout << " just popped node:\n";
    Display(lstack.pop());
    cout << " now stack top is:\n";
    Display(lstack.peek());
    cout << " stack size is now: " << lstack.size() << endl;
    //
    cout << " is stack empty? " << (lstack.isEmpty() ? "yes\n" : "no\n");
}