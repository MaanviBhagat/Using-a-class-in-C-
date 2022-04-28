#include<iostream.h>
#include<conio.h>
void main()
{
int percentage;
clrscr();
cout<<"\n Enter the percentage: ";
cin>>percentage;
switch(percentage/10)
{
case 10:   case 9:
cout<<"\n You've got grade A+";
break;
case 8:
cout<<"\n You've got grade A";
break;
case 7:
cout<<"\n You've got grade B+";
break;
case 6:
cout<<"\n You've got grade B";
break;
case 5:
cout<<"\n You've got grade C";
break;
default:
cout<<"\n You've got grade D";
break;
}
getch();
}