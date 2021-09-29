//
//  media.hpp
//  Cpp snippet
//
//  Created by Anuraghu on 29/09/21.
//

#ifndef media_hpp
#define media_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Media
{
    
protected:
    string title, publication;
public:
    Media()
    {
        cout<<"Enter title ";
        cin>>title;
        cout<<"\nEnter Publication ";
        cin>>publication;
    }
    virtual void show()
    {
        cout<<"\nTitle"<<title<<"\nPublication"<<publication;
    }
    
};

class Book: public Media
{
    int pg_no;
public:
    Book()
    {
        cout<<"Enter no of pages";
        cin>>pg_no;
    }
    void show()
    {
        cout<<"\nTotal pages"<<pg_no;
    }
};

class Tape: public Media
{
    int duration;
public:
    Tape()
    {
        cout<<"Enter duration";
        cin>>duration;
    }
    void show()
    {
        cout<<"\n Duration"<<duration;
    }
};

#endif /* media_hpp */
