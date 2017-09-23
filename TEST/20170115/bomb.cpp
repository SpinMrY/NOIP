#include<iostream>
using namespace std;
struct Date{
	int y;
	int m;
	int d;
};
bool isLeap(int y){
	return y%4==0&&y%100!=0||y%400==0;
}
int daysOfMonth(int y,int m){
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(m!=2)
		return day[m-1];
	else 
		return 28+isLeap(y);
}
int daysOfDate(Date d){
	int days=d.d;
	for(int y=1;y<d.y;y++)
		days+=365+isLeap(y);
	for(int m=1;m<d.m;m++)
		days+=daysOfMonth(d.y,m);
	return days;
}
int answ=0,k=0;
int main(){
   Date db,de;
   //scanf("%d %d %d",&de.y,&de.m,&de.d);
   cin>>de.y>>de.m>>de.d>>k;
   db.y=1951+k;db.d=26;db.m=9;
   int days1=daysOfDate(db);
   int days2=daysOfDate(de);
   //cout<<days1<<endl;
   //cout<<days2<<endl;
   answ=days1-days2;
   if(answ>=0){
	   cout<<answ<<endl;
   }
   else{
	   cout<<"impossible"<<endl;
   }
   return 0;
}
