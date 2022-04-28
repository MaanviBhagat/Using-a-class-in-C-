/* Constructor - Destructor functions : number operations */
/* Maanvi Bhagat */
#include<iostream.h>
#include<conio.h>
#include<string.h>
class product                            //declaring a class
{
private:
int prod_id;
char prod_name[20];
float prod_price;
public:
product()                               //default constuctor
{
cout<<"\n Enter id,name,price : ";
cin>>prod_id>>prod_name>>prod_price;
}
product(int i,char p[20],float q)      //parameterized constructor
{
prod_id = i;
strcpy(prod_name,p);
prod_price=q;
}
void dispdata()                        //member function
{
cout<<"\n "<<prod_id<<"\t "<<prod_name<<" = "<<prod_price;
}
};
void main()
{
clrscr();
product x;
product y(50,"Earphones",120);
product z(90,"Toys",500);
cout<<"\n ID \t Name \t Price";
x.dispdata();
y.dispdata();
z.dispdata();
getch();
}

