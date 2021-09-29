//
//  File Name: institute.hpp
//  It contains Institute and Date class declaration.
//  institute
//
//  Created by Anuraghu on 29/09/21.
//

#ifndef institute_hpp
#define institute_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
/* `Class Name : dDate is declared to hold date mont and year values*/
class dDate
{
    int dd,mm,yy;
public:
    /* Function Name: read_date
       It is fucntion to read date from user */
    void read_date()
    {
        cout<<"Please enter date in the following format dd<space>mm<space>yyyy";
        cin>>dd>>mm>>yy;
    }
    /* Function Name: display_date
       It is fucntion to display date  */
    void display_date()
    {
        cout<<"\n"<<dd<<"/"<<mm<<"/"<<yy;
    }
};
/* Class Name :Institute is declared to create Various Institute objects */
class Institute

{
    char *inst_city;   /* Institute city */
    string inst_name;  /* Insitute name */
    int rank,          /* Rank secured */
    slct_prcs_scr,     /* Selection process score */
    acad_xcl_scr,      /* academic excellence score */
    inf_strt_scr,      /* Infrastructure score */
    plcmt_scr,         /* Placement score */
    overall_scr;       /* Overall score */
    dDate d;           /* Date of entry */
public:
    Institute()
    {
        inst_city = new char[20];
    }
    /* Function Name: read_input
       It is function to read input data from user */
    void read_input()
    {
        cout<<"Enter Institute name";
        getline(cin,inst_name);
        cout<<"\nEnter Institute city";
        cin>>inst_city;
        d.read_date(); /* Function call to read date */
        cout<<" Enter in order please\n "<<"Selection process score \n"<<" Infrastructure score \n"<<" Academic excellence score \n"<<" Placement score \n";
        cin>>slct_prcs_scr>>inf_strt_scr>>acad_xcl_scr>>plcmt_scr;
        if( (slct_prcs_scr < 0 || slct_prcs_scr > 200) ||
            (inf_strt_scr < 0 || inf_strt_scr > 250 ) ||
            ( acad_xcl_scr < 0  || acad_xcl_scr > 300 ) ||
            ( plcmt_scr < 0  || plcmt_scr > 250)
         )
        {
            
            cout<<" Please enter values again one or many of the values are incorrect";
            cout<<" Enter in order please\n "<<"Selection process score \n"<<" Infrastructure score \n"<<" Academic excellence score \n"<<" Placement score \n";
            cin>>slct_prcs_scr>>inf_strt_scr>>acad_xcl_scr>>plcmt_scr;
        }
    }
    void overall_score()
    {
        overall_scr = slct_prcs_scr + inf_strt_scr + acad_xcl_scr + plcmt_scr ;
    }
    /* Function Name: display_record
       It is function to display input received from user */
    void display_record()
    {
        d.display_date();/* Function call to display date */
        cout<<" "<<inst_name<<" "<<inst_city<<" "<<overall_scr;
    }
    void display_rank()
    {
        cout<<"The top rank is "<<inst_name;
    }
    friend Institute cal_rank(Institute *inst, int n);
};


#endif /* institute_hpp */
