#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    /* namespsaces = provides a solution for preveting name conflicts
    in large projects. Each entity needs a unique name.
    A namespace allows for identically named entities
    as long the namespaces are different.
    */

   using std::cout;
   using std::string;

    return 0;
}
