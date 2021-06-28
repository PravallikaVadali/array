#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int *p,arr[4];
cout<<"Enter elements: ";
for(int i=0;i<5;i++)
{
cin>>arr[i];
}
cout<<"You entered: ";
p=arr;
for(i=0;i<5;i++)
{
cout<<*p<<endl;
p++;
}
getch();
return 0;
}