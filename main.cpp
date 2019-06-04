#include <iostream>

using namespace std;

int main()
{
    double sell,buy,op,amount,result=0;
    char currency;
    cout<<"\a\t\t\twelcome to the currency converter\r"<<endl;
    cout<<"\t\t\t---------------------------------\n\n"<<endl;
    cout<<"choose the currency you want (press the sign of currency ):"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"'*' Euro\n";
    cout<<"'$' Dollar\n";
    cout<<"'+' British Pound\n";
    cout<<"'Y' Yen  (uppercase letter)\n";
    cout<<"'R' Riyal  (uppercase letter)\n"<<endl;
    cin>>currency;
    while(currency!='*'&&currency!='$'&&currency!='+'&&currency!='Y'&&currency!='R'){
        cout<<"please choose on of this signs only('*','$','+','Y','R'):";cin>>currency;}
    cout<<"\t\t\t====================="<<endl;
    cout<<"please enter the selling price :";
    cin>>sell;
    while(sell<0){
        cout<<"the number is not valid, write it again :";cin>>sell;}
    cout<<"please enter the buying price :";
    cin>>buy;
    while(buy<0){
        cout<<"the number is not valid, write it again :";cin>>buy;}
    cout<<"\t\t\t====================="<<endl;
    cout<<"please press 0 if you want to buy , and 1 if you want to sell."<<endl;
    cin>>op;
    while(op!=0&&op!=1){
        cout<<"please enter (0) or (1) only :";cin>>op;}
    cout<<"\t\t\t====================="<<endl;
    cout<<"please enter the amount :";
    cin>>amount;
    while(amount<0){
        cout<<"the number is not valid, write it again :";cin>>amount;}
    cout<<"\t\t\t====================="<<endl;
    if (op==0){
        result=amount*sell;
        cout<<"the operation result of buying is :"<<result;}
    else if (op==1){
        result=amount*buy;
        cout<<"the operation result of selling is :"<<result;}
    else
        cout<<"please check the steps and try again, there is something wrong. thank you";

    return 0;}
