//
//  main.cpp
//  Cpp snippet
//
//  Created by Anuraghu on 29/09/21.
//

#include <iostream>
#include <string.h>
#include "media.hpp"

using namespace std;


int main() {
    // insert code here...
    Media *m = new Book;
    m->show();/* If function is not declared virtual, it will access base class show else            it will acces derived class show*/
    //Media m;
    // m.show();
    //Book b;
    //b.show();
    //Tape t; /* Base class constructor is called */
    //t.show();/* `Display function of class `tape is called */
    return 0;
}
