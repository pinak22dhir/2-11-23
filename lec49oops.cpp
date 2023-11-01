#include<iostream>
using namespace std;
// class fruits{
//     public: 
//     string name;
//     string color;

// };
// int main(){
//     fruits apple; //object
//     apple.name="apple";
//     apple.color="red";
//     cout<<apple.name<<" - "<<apple.color<<endl;
//     fruits *mango=new fruits();
//     mango->name="mango";
//     mango->color="yellow";
//      cout<<mango->name<<" - "<<mango->color<<endl;




// }
// class rectangle{
//     public:
//     int l;
//     int b;
//     rectangle(){
//         l=0;//defult no argument is passed
//         b=0;
//     }
//      rectangle(int x, int y){
//        l=x;//parameterised  argument is passed
//         b=y;
//     }
//     rectangle (rectangle& r){//copy constructor
// l=r.l;
// b=r.b;
//     }
// ~rectangle(){
//         cout<<"destructor is called \n";
//     }
// };
// int main(){
//     rectangle* r1=new rectangle();
//     cout<<r1->l<<" "<<r1->b<<endl;
//     // delete r1; only works in dynamic memory 
//     delete r1;
//     rectangle r2(3,4);
//     cout<<r2.l<<" "<<r2.b<<endl;
//     rectangle r3=r2;
//     cout<<r3.l <<" "<<r3.b<<endl;
// }
//enscapsulation
// class ABC
// {
//     int x;
//     public: 
//     void set(int n){
//         x=n;
//     }
//   int get (){
//         return x;
//     }
// };
// int main(){
//     ABC obj1;
//     obj1.set(3);
//     cout<<obj1.get()<<endl;
//     return 0;
// }
//single inheritance ;
// class parent {
// public: 
// parent(){
// cout<<"parent class"<<endl;
// }
// };
// class child: public parent {
// public: 
// child(){
// cout<<"child class"<<endl;
// }
// };
// int main() {
//     child c;//this is only one string no need for elements(dot or ->) 
  
//     return 0;
// }
//multilevel
// class parent {
// public: 
// parent(){
// cout<<"parent class"<<endl;
// }
// };
// class child: public parent {
// public: 
// child(){
// cout<<"child class"<<endl;
// }
// };
// class grandchild: public child {
// public: 
// grandchild(){
// cout<<"grandchild class"<<endl;
// }
// };
// int main() {
//     grandchild g; 
  
//     return 0;
// }
//multiple inheriance 
// class parent {
// public: 
// parent(){
// cout<<"parent class"<<endl;
// }
// };
// class parent1 {
// public: 
// parent1(){
// cout<<"parent1 class"<<endl;
// }
// };
// class parent2 {
// public: 
// parent2(){
// cout<<"parent2 class"<<endl;
// }
// };
// class child: public parent1, public parent2 {
// public: 
// child(){
// cout<<"child class"<<endl;
// }
// };
// class grandchild: public child {
// public: 
// grandchild(){
// cout<<"grandchild class"<<endl;
// }
// };
// int main() {
//     grandchild g; 
  
//     return 0;
// }
//diamond 
// class parent {
// public: 
// parent(){
// cout<<"parent class"<<endl;
// }
// };

// class child1: public parent {
// public: 
// child1(){
// cout<<"child1 class"<<endl;
// }
// };
// class child2: public parent {
// public: 
// child2(){
// cout<<"child2 class"<<endl;
// }
// };
// class grandchild: public child1, public child2 {
// public: 
// grandchild(){
// cout<<"grandchild class"<<endl;
// }
// };
// int main() {
//     grandchild g; 
  
//     return 0;
// }
//polymorphism ability of objects to take different forms 
//function overloading compilation error
// class sum {
//     public:
//     int add(int x, int y){
//         int sum=x+y;
//         return sum;
//     }
//    int add(int x, int y,int z){
//     int sum=x+y+z;
//       return sum;
       
//     }//only void functions
//     //in void cout in function lete hai
//   int add(float x, float y){
//       float sum=x+y;
//        return sum;
//     }
// };
// int main(){
//     sum s;
//     s.add(2,3);
//      s.add(2,3,4);
//      s.add(float(2.8),float(3.1));
// }
// //operator overloading

// class complex{
//     public: 
//     int real;
//     int img;
// complex(int x, int y){
//     real=x;
//     img=y;
// }
// complex operator+ (complex &c){//copy
// complex ans(0,0);
//  ans.real=real + c.real;
//  ans.img=img +c.img;
//  return ans;

// }
// };
// int main(){
//     complex c1(1,2);
//     complex c2(4,6);
//     complex c3=c1+c2;
//     cout<<c3.real<<" "<<"i"<<c3.img;
//     return 0;


// }
//runtime function overifdding
// class parent{
//     public: 
//    virtual void print(){
//         cout<<"parent class"<<endl;
//     }
//     void show(){
//         cout<<" parent class"<<endl;
//     }
// };
// class child: public parent{
//   public: 
//     void print(){
//         cout<<"child class"<<endl;
//     }
//   virtual  void show(){
//         cout<<" child class"<<endl;
//     }   
// };
// int main(){
//     parent p;
// // p.print();
//     child c;
//     // p= &c;
//     p.print();
// //    c.print();
   
// //    p->show();
//    c.show();
//     return 0;
// }
//friend 
class A{

int x;
public:
A(int y){
    x=y;
}
friend void print(A &obj );
 void print (A &obj){
    cout<<obj.x<<endl;
 }
};
void print (A &obj){
    return;}
// void print (A &obj){
//     cout<<obj.x<<endl;
// }
int main(){
    A obj(5);
print(obj);

}