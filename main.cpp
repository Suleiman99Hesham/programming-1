#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
char x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11;
double x,y,sum=0,counter=0;
cout<<"Enter the number of year that you are going to: ";
cin>>x;
while (x!=2 && x!=3){
    cout<<"this number is not valid please enter 2 or 3: ";
    cin>>x;}
 if (x==2){
    cout<<"Enter your grades for all the previous years:\n\t";
    cout<<"1122 Fundamentals of Management: ";
    cin>>x1;
    while (x1!='A'&&x1!='B'&&x1!='C'&&x1!='D'&&x1!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x1;}
    if (x1=='A')
        sum+=4.00;
    else if (x1=='B')
        sum+=3.30;
    else if (x1=='C')
        sum+=2.70;
    else if (x1=='D')
        sum+=2.20;
    else if (x1=='F')
        sum+=0.00;
     cout<<"\t1111 Math-1: ";
    cin>>x2;
    while (x2!='A'&&x2!='B'&&x2!='C'&&x2!='D'&&x2!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x2;}
    if (x2=='A')
        sum+=4.00;
    else if (x2=='B')
        sum+=3.30;
    else if (x2=='C')
        sum+=2.70;
    else if (x2=='D')
        sum+=2.20;
    else if (x2=='F')
        sum+=0.00;
    cout<<"\tCS111 Fundamentals of Computer Science: ";
    cin>>x3;
    while (x3!='A'&&x3!='B'&&x3!='C'&&x3!='D'&&x3!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x3;}
    if (x3=='A')
        sum+=4.00;
    else if (x3=='B')
        sum+=3.30;
    else if (x3=='C')
        sum+=2.70;
    else if (x3=='D')
        sum+=2.20;
    else if (x3=='F')
        sum+=0.00;
    cout<<"\t1121 Statistics-1: ";
    cin>>x4;
    while (x4!='A'&&x4!='B'&&x4!='C'&&x4!='D'&&x4!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x4;}
    if (x4=='A')
        sum+=4.00;
    else if (x4=='B')
        sum+=3.30;
    else if (x4=='C')
        sum+=2.70;
    else if (x4=='D')
        sum+=2.20;
    else if (x4=='F')
        sum+=0.00;
    cout<<"\t1113 Math-2: ";
    cin>>x5;
    while (x5!='A'&&x5!='B'&&x5!='C'&&x5!='D'&&x5!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x5;}
    if (x5=='A')
        sum+=4.00;
    else if (x5=='B')
        sum+=3.30;
    else if (x5=='C')
        sum+=2.70;
    else if (x5=='D')
        sum+=2.20;
    else if (x5=='F')
        sum+=0.00;
    cout<<"\t2112 Programming-1: ";
    cin>>x6;
    while (x6!='A'&&x6!='B'&&x6!='C'&&x6!='D'&&x6!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x6;}
    if (x6=='A')
        sum+=4.00;
    else if (x6=='B')
        sum+=3.30;
    else if (x6=='C')
        sum+=2.70;
    else if (x6=='D')
        sum+=2.20;
    else if (x6=='F')
        sum+=0.00;
    y=sum/6;
    cout<<"GPA: "<< setprecision(2)<<y;}
 else if (x==3){
    cout<<"Enter your grades for all the previous years:\n\t";
    cout<<"1122 Fundamentals of Management: ";
    cin>>x1;
    while (x1!='A'&&x1!='B'&&x1!='C'&&x1!='D'&&x1!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x1;}
    if (x1=='A')
        sum+=4.00;
    else if (x1=='B')
        sum+=3.30;
    else if (x1=='C')
        sum+=2.70;
    else if (x1=='D')
        sum+=2.20;
    else if (x1=='F')
        sum+=0.00;
     cout<<"\t1111 Math-1: ";
    cin>>x2;
    while (x2!='A'&&x2!='B'&&x2!='C'&&x2!='D'&&x2!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x2;}
    if (x2=='A')
        sum+=4.00;
    else if (x2=='B')
        sum+=3.30;
    else if (x2=='C')
        sum+=2.70;
    else if (x2=='D')
        sum+=2.20;
    else if (x2=='F')
        sum+=0.00;
    cout<<"\tCS111 Fundamentals of Computer Science: ";
    cin>>x3;
    while (x3!='A'&&x3!='B'&&x3!='C'&&x3!='D'&&x3!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x3;}
    if (x3=='A')
        sum+=4.00;
    else if (x3=='B')
        sum+=3.30;
    else if (x3=='C')
        sum+=2.70;
    else if (x3=='D')
        sum+=2.20;
    else if (x3=='F')
        sum+=0.00;
    cout<<"\t1121 Statistics-1: ";
    cin>>x4;
    while (x4!='A'&&x4!='B'&&x4!='C'&&x4!='D'&&x4!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x4;}
    if (x4=='A')
        sum+=4.00;
    else if (x4=='B')
        sum+=3.30;
    else if (x4=='C')
        sum+=2.70;
    else if (x4=='D')
        sum+=2.20;
    else if (x4=='F')
        sum+=0.00;
    cout<<"\t1113 Math-2: ";
    cin>>x5;
    while (x5!='A'&&x5!='B'&&x5!='C'&&x5!='D'&&x5!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x5;}
    if (x5=='A')
        sum+=4.00;
    else if (x5=='B')
        sum+=3.30;
    else if (x5=='C')
        sum+=2.70;
    else if (x5=='D')
        sum+=2.20;
    else if (x5=='F')
        sum+=0.00;
    cout<<"\t2112 Programming-1: ";
    cin>>x6;
    while (x6!='A'&&x6!='B'&&x6!='C'&&x6!='D'&&x6!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x6;}
    if (x6=='A')
        sum+=4.00;
    else if (x6=='B')
        sum+=3.30;
    else if (x6=='C')
        sum+=2.70;
    else if (x6=='D')
        sum+=2.20;
    else if (x6=='F')
        sum+=0.00;
    if (x6!='F'){
        cout<<"\t2213 Programming-2: ";
        cin>>x7;
        while (x7!='A'&&x7!='B'&&x7!='C'&&x7!='D'&&x7!='F'){
            cout<<"this symbol is not valid please enter A,B,C,D or F: ";
            cin>>x7;}
        if (x7=='A')
            sum+=4.00;
        else if (x7=='B')
            sum+=3.30;
        else if (x7=='C')
            sum+=2.70;
        else if (x7=='D')
            sum+=2.20;
        else if (x7=='F')
            sum+=0.00;
        counter+=1;}
    else{cout<<"Programming-2 is not allowed for you.\n";}
    if (x2!='F'&&x5!='F'){
        cout<<"\t1211 Math-3: ";
        cin>>x8;
        while (x8!='A'&&x8!='B'&&x8!='C'&&x8!='D'&&x8!='F'){
            cout<<"this symbol is not valid please enter A,B,C,D or F: ";
            cin>>x8;}
        if (x8=='A')
            sum+=4.00;
        else if (x8=='B')
            sum+=3.30;
        else if (x8=='C')
            sum+=2.70;
        else if (x8=='D')
            sum+=2.20;
        else if (x8=='F')
            sum+=0.00;
        counter+=1;}
    else{cout<<"Math-3 is not allowed for you.\n";}
    if(x1!='F'&&x6!='F'){
        cout<<"\t1321 Project Management: ";
        cin>>x9;
        while (x9!='A'&&x9!='B'&&x9!='C'&&x9!='D'&&x9!='F'){
            cout<<"this symbol is not valid please enter A,B,C,D or F: ";
            cin>>x9;}
        if (x9=='A')
            sum+=4.00;
        else if (x9=='B')
            sum+=3.30;
        else if (x9=='C')
            sum+=2.70;
        else if (x9=='D')
            sum+=2.20;
        else if (x9=='F')
            sum+=0.00;
        counter+=1;}
    else{cout<<"Project management is not allowed for you.\n";}
    if(x4!='F'){
        cout<<"\t1211 Statistics-2: ";
        cin>>x10;
        while (x10!='A'&&x10!='B'&&x10!='C'&&x10!='D'&&x10!='F'){
            cout<<"this symbol is not valid please enter A,B,C,D or F: ";
            cin>>x10;}
        if (x10=='A')
            sum+=4.00;
        else if (x10=='B')
            sum+=3.30;
        else if (x10=='C')
            sum+=2.70;
        else if (x10=='D')
            sum+=2.20;
        else if (x10=='F')
            sum+=0.00;
        counter+=1;}
    else{cout<<"statistics-2 is not allowed for you.\n";}
    cout<<"\t2221 Digital Design: ";
    cin>>x11;
    while (x11!='A'&&x11!='B'&&x11!='C'&&x11!='D'&&x11!='F'){
        cout<<"this symbol is not valid please enter A,B,C,D or F: ";
        cin>>x11;}
    if (x11=='A')
        sum+=4.00;
    else if (x11=='B')
        sum+=3.30;
    else if (x11=='C')
        sum+=2.70;
    else if (x11=='D')
        sum+=2.20;
    else if (x11=='F')
        sum+=0.00;
    y=sum/(counter+7);
   cout<<"GPA : "<< setprecision(2)<<y;}
   if(y>=3.4&&x1!='F'&&x2!='F'&&x3!='F'
        &&x4!='F'&&x5!='F'&&x6!='F'
        &&x7!='F'&&x8!='F'&&x9!='F'
        &&x10!='F'&&x11!='F')
        cout<<"\nyou are legal for financial reward.\n";
   else
        cout<<"\nyou are not legal for financial reward.\n";
   cout<<"you can only register in the following courses for year "<<x<<":"<<endl;
     if (x==2){
        if(x6!='F')
            cout<<"\t2213 Programming-2\n";
        if(x2!='F'&&x5!='F')
            cout<<"\t1211 Math-3\n";
        if(x1!='F'&&x6!='F')
            cout<<"\t1321 Project management\n";
        if(x3!='F')
            cout<<"\t1221 Statistics-2\n";
        cout<<"\t2221 Digital design\n";}
     else if (x==3){
        if(x6!='F'){
        if(x6!='F'&&x7!='F')
            cout<<"\t3311 Database systems\n";}
        if(x11!='F'&&x3!='F')
            cout<<"\t2355 Computer Architecture\n";}
   return
    0;
}

