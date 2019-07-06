#include <bits/stdc++.h>
using namespace std;
int main()

{
    double mealcost,tip,tax,totalcost;
    int tippercent,taxpercent,tot;
    cin>>mealcost;
    cin>>tippercent>>taxpercent;
    tip=mealcost*tippercent/100;
    tax=mealcost*taxpercent/100;
    totalcost=mealcost+tip+tax;
    totalcost=round(totalcost);
    cout<<totalcost;
    return 0;
}




