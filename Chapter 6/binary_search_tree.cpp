#include "trees.hpp"
int main(){
    int size;
    cout << " Enter size: ";
    cin >> size;
    Bnode<int>** number_list = new Bnode<int>*[size];
    for(int i = 0; i < size; i++){
        number_list[i] = new Bnode<int>({i, NULL, NULL});
    }
    int start = 1;
    int add = 4;
    while(start < size){
        int index = start;
        while(index < size){
            number_list[index]->prev = number_list[index - add / 4];
            int rindex = index + add / 4;
            int counter = 0;
            while(true){
                if(rindex >= size){
                    if(rindex % 2 == 0)break;
                    counter++;
                    rindex -= add / (4 * (counter + 1));
                }
                else {
                    number_list[index]->next = number_list[rindex];
                    break;
                }
            }
            index += add;
        }
        start += add / 2;
        add *= 2;
    }
    inorder(number_list[7]);
}