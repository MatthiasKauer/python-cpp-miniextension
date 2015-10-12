#include "mystack.h"

int main() {
    mystack<int> ms;
    ms.put(3);
    ms.put(4);
    ms.put(5);

    ms.print_stack();
}

