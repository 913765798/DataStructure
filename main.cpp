#include <iostream>
#include "LinerList/SqList.h"
#include "LinerList/LinerList.h"
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    LinerList<int>* l = new SqList<int>();
    l->insert(1,1);
    l->insert(1,2);
    l->insert(1,3);
    l->insert(4,4);
    l->display();

    cout << endl;
    l->delElem(2,a[0]);
    l->display();

    cout << endl << l->locateElem(4) << endl;


}