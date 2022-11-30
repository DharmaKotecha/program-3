// Ordered lists
// Author: Dharma
// Date: 5/11/2022

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include "State.h"
using namespace std;

void add(list <int> < state> &l, double x) //function to display the ordered list

{
    cout << "State" << "% of land used" << endl

    list <int> ::iterator it;
    list <int> ::iterator previous;


    if ( l.empty() || (l.front() > x)) //    cout<<l.front() << endl;
        {
        l.push_front(x);        // k.push_front(h);
        }

    else {
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it)
            {
            if (*it > x)
                break;
            else previous =  it;
            }

        l.insert(++previous,x);        //k.insert(++previous,h);

         }
}

void printPercentages (list<int> l)
{
    for (auto it = l.begin(); it !=l.end(); it++){
        cout <<*it << "% ";
    }
}
// add a function to insert the state object into the ordered list.
int main()
{
    list <State> myList;
    list <State>::iterator it;
    string name;
    double energy;
    long long int Size;
    list<int> ordered;
    list <State> orderedStateList;

    State tx("Texas",13480.8, 7487580672000);
    tx.findPercentage();

    State ca("California",6922.8, 4563554688000);
    ca.findPercentage();

    State la("Louisiana",4200.4, 1445216256000);
    la.findPercentage();

    State fl("Florida",4003.1, 1805265792000);
    fl.findPercentage();

    State il("Illinois",3612.9, 1614549657600);
    il.findPercentage();

    State pa("Pennsylvania",3413.0, 1283967590400);
    pa.findPercentage();

    State oh("Ohio",3404.5, 1249649280000);
    oh.findPercentage();

    State ny("New York",3354.2, 1520933990400);
    ny.findPercentage();

    State ga("Georgia",2727.6, 1656673920000);
    ga.findPercentage();

    State mi("Michigan",2610.6, 2696287334400);
    mi.findPercentage();

    myList.push_back(tx);
    myList.push_back(ca);
    myList.push_back(la);
    myList.push_back(fl);
    myList.push_back(il);
    myList.push_back(pa);
    myList.push_back(oh);
    myList.push_back(ny);
    myList.push_back(ga);
    myList.push_back(mi);

}

cout << "Percentage of land area of each state :" << endl;
printPercentages (ordered);
cout << endl;


    return 0;
}
