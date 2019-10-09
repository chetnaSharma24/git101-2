#include<iostream.h>
int Minimum(int s[],int n)
{
int min=s[0];
for(int i=1;i<n;++i)
{
if(s[i]<=min) {min=s[i];}
}
return min;
}
void main()
{
int str[50],l;
cout<<"enter length"<<endl;
cin>>l;
cout<<"Enter the 1d array: "<<endl;
for(int i=0;i<l;++i)
{
cin>>str[i];cout<<" ";}
cout<<"the minimum value is: "<<Minimum(str,l);
}
