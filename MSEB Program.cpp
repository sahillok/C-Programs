#include<iostream>
using namespace std;
int main()
{
    float billing_unit,summary_cost;
    float bill,b100,b300,b500,b1000,b1001,final_bill;
    float fixed_charge,prev_dues;
    float vahan_akar,viz_shulk,current_interest;
    cout<<"Welcome to MSEB Billing Section...!!!"<<endl<<endl;
    // copyrights: This program is owned by Sahil Lokhande.......
    cout<<"Enter Billing Unit"<<endl;
    cin>>billing_unit;
    cout<<"Enter fixed charges"<<endl;
    cin>>fixed_charge;
    cout<<"Enter previous dues if any"<<endl;
    cin>>prev_dues;
    vahan_akar = 1.38 * billing_unit;
    if(billing_unit <= 100)
    {
        bill = 3.44 * billing_unit;
    }
    else if(billing_unit > 100 && billing_unit <= 300)
    {
        b100 = 100 * 3.44;
        billing_unit = billing_unit - 100;
        b300 = billing_unit * 7.34;
        bill = b100 + b300;
    }
    else if(billing_unit > 300 && billing_unit <= 500)
    {
        b100 = 100 * 3.44;
        billing_unit = billing_unit - 100;
        b300 = billing_unit * 7.34;
        billing_unit = billing_unit - 200;
        b500 = billing_unit * 10.36;
        bill = b100 + b300 + b500;
    }
    else if(billing_unit > 500 && billing_unit <=1000)
    {
        b100 = 100 * 3.44;
        billing_unit = billing_unit - 100;
        b300 = billing_unit * 7.34;
        billing_unit = billing_unit - 200;
        b500 = billing_unit * 10.36;
        billing_unit = billing_unit - 200;
        b1000 = billing_unit * 11.82;
        bill = b100 + b300 + b500 + b1000;
    }
    else
    {
        b100 = 100 * 3.44;
        billing_unit = billing_unit - 100;
        b300 = billing_unit * 7.34;
        billing_unit = billing_unit - 200;
        b500 = billing_unit * 10.36;
        billing_unit = billing_unit - 200;
        b1000 = billing_unit * 11.82;
        billing_unit = billing_unit - 500;
        b1001 = billing_unit * 11.82;
        bill = b100 + b300 + b500 + b1000 + b1001;
    }
    summary_cost = bill + fixed_charge + vahan_akar;
    viz_shulk = summary_cost * 0.16;
    final_bill = summary_cost + prev_dues + viz_shulk;

    cout<<"Your Current Bill Amount is: "<<final_bill<<endl;
    return(0);


}
