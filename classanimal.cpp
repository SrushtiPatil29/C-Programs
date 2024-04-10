#include<iostream>
#include<string>
using namespace std;
class Animal{
 protected: string name; string habitat;
 public:
 	Animal(string n,string hab){
 		name=n; habitat=hab;
	 }
	 Animal(){
 		name="noname"; habitat="nohabitat";
	 }
	 virtual void move(){
	 	cout<<"Animal is moving"<<endl;
	 } 
	 virtual void eat(){
	 	cout<<"Animal is eating"<<endl;
	 } 
};
class Mammal:public Animal{
	protected: string furcolor;
	public:
		Mammal(string name,string habitat,string fur):Animal(name,habitat){
			furcolor=fur;
		}
	 virtual void move(){
	 	cout<<"Mammal is moving"<<endl;
	 } 
	 virtual void eat(){
	 	cout<<"Mammmal is eating"<<endl;
	 } 
	 void givebirth(){
	cout<<"Mammal is giving birth"<<endl;
     }
	 };
class Bird:public Animal{
	protected:double wingspan;
	public: 
	Bird(string name,string habitat,double wings):Animal(name,habitat){
   wingspan=wings;
	}
	virtual void move(){
	 	cout<<"Bird is flying"<<endl;
	 } 
	virtual void eat(){
	 	cout<<"Bird is eating"<<endl;
	 } 
	void chirp(){
		cout<<"Bird is chirping"<<endl;
	}	
};
class Fish:public Animal{
	protected: string scalecolor;
	public: 
	Fish(string name,string habitat,string scalec):Animal(name,habitat){
	scalecolor=scalec;
	}
    void sound(){
	 	cout<<"sound of fish"<<endl;
	 } 
	void eat(){
	 	cout<<"Fish is eating"<<endl;
	 } 
	void move(){
		cout<<"Fish is Swiming"<<endl;
	}
};
int main(){
	Animal a1;
	a1.eat();
	a1.move();
	Mammal m1("Lion","Land","Brown");
	m1.move();
	m1.eat();
	m1.givebirth();
	Bird b1("Kingfisher","Sky",1);
	b1.move();
	b1.eat();
	Fish f1("Dolphin","Water","Blue");
	f1.eat();
	f1.move();
	f1.sound();
}
     
