#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],size,i,low,mid,high,num;
clrscr();
printf("enter the size of array : ");
scanf("%d",&size);
printf("emter the array element : ");
for(i=0;i<=size-1;i++){
scanf("%d",&a[i]);
}
printf("enter the element for searching : ");
scanf("%d",&num);
low=0;
high=size-1;
mid=(low+high)/2;
while((a[mid]!=num)&&(low<=high)){
if(a[mid]>num){
high=mid-1;
}
else{
low=mid+1;
}
mid=(low+high)/2;
}
if(a[mid]==num){
printf("number is found on position = %d",mid+1);
}
else{
printf("number is not found on this array ");
}
getch();
}







