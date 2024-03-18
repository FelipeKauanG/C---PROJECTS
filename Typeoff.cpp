#include <iostream>
#include <vector>


typedef std::string text_t;
typedef int number_t;

using text_t = std::string;
using number_t = int;


int main(){
    /*
        typedef = reversed keyword used to create an additional name
        ( alias ) for another datas type.
        New identifier for an existing type.
        Helps with readabilty and reduces typos.
        Use when there is a clear benefit.
        Replaced with 'using' ( work better w/ template )
    */



    text_t firstName = "Bro";
    number_t age = 21;
    
    std::cout << firstName << "\n";
    std::cout << age << "\n";
    return 0;   
}
