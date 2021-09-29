//
//  File Name: main.cpp
//  It contains code to execute Institute class.
//  institute
//
//  Created by Anuraghu on 28/09/21.
//

#include <iostream>
#include <string.h>
#include "institute.hpp"
using namespace std;

Institute cal_rank(Institute *ins_obj, int n)
{
    //Institute *rank_obj = new Institute[n];
    int  j, ind_val =0, temp_val;
    temp_val = ins_obj[0].overall_scr;
    for (j = 1;j < n;j++)
    {
        if(temp_val>ins_obj[j].overall_scr)
        {
            temp_val = ins_obj[j].overall_scr;
            ind_val =j;
        }

    }
    return ins_obj[ind_val];
    
    
}

int main() {
    // insert code here...
    int choice, n, num;
    static int i =0;
    cout<<" WELCOME\n"<<" \v Please enter number of Institutes to be entered this time\n";
    cin>>n;
    Institute *inst = new Institute[n]; /* Instantiating objects */
    char ch = 'y';
    
    
while(ch == 'y')
{
    cout<<" Please read menu carefully and Enter your choice"<<"\n"<<
    " 1. Enter new record"<< "\n"<<
    " 2. Display record "<<"\n"<<
    " 3. Display Top rank\n";
    cin>>choice;
    cin.ignore(1,'\n');/* as getline() is used to get string input */

    switch(choice)
    {
        case 1:
        {

          inst[i].read_input();
          inst[i].overall_score();
          cout<<"\nSuccessfully entered\n";
          i++;
          break;
            
        }

        case 2:
        {
            if(i>0)
            {
                cout<<"Please enter number of records to be displayed, currently there     are "<<i<<" records";
                cin>>num;
                cout<<"**************************************************************************";
                cout<<"\nDate"<<" "<<"Institute name "<<"  "<<"Institute city"<<" "<<"Overall score";
                while( num>=0)
                {
                   inst[num].display_record();
                   num--;
                }
            }
            else
            {
                cout<<"No records to display";
            }
            
            break;
            
        }
        case 3:
        {
            if (n >1 )
            {
                Institute r_obj = cal_rank(inst,n);
                r_obj.display_rank();
            }
            else
            {
                cout<<"Only one record is there";
            }
            break;
            
        }
        default:
        {
            cout<<" Please enter valid choice\n";
            break;
        }
    }
            cout<<" \n Do you want to continue please enter y - yes or n - No";
            cin>>ch;

}

    return 0;
}
