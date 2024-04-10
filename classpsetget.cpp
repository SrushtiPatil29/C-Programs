#include<iostream>
using namespace std;
class Person{
protected: string name;int age;string city;
public:
Person(){
	name="noname";age=0;city="none";
}	
Person(string n,int a,string c)
{
	name=n; age=a;city=c;
}
void setname(string a){
	name=a;
}
void setcity(string c){
	city=c;
}
void setage(int a){
	age=a;
}
string getname(){
	return name;
}
string getcity(){
	return city;
}
int getage(){
	return age;}
	void display(){
		cout<<"Name="<<name<<"Age="<<age<<"City="<<city<<endl;
	}
};
int main(){

	Person p1("Srushti",23,"Kolhapur");
	p1.display();
	p1.setage(18);
	cout<<"Age="<<p1.getage()<<endl;
	p1.setcity("Pune");
	cout<<"City="<<p1.getcity()<<endl;;
	p1.setname("Shreyasi");
	cout<<"Name="<<p1.getname()<<endl;
}
