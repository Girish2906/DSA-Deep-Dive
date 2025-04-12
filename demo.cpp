#include<bits/stdc++.h>
using namespace std ; 
class Parent{

    public:
        Parent(){
            cout<<"Parent Constructor called"<<endl ; 
        }
        Parent(int a){
            cout<<"Parent Constructor called Parameterized"<<endl ; 
        }

} ; 

class Student {
    public: 
        string name ; 
        double *cgpa  ; 
        Student(string name , double cgpa){
            this->name = name ; 
            // this->cgpa = new double ; 
            this->cgpa = new double ;  
            *(this->cgpa) = cgpa ; 
        }
        // this is shallow copy
        // Student(Student &obj){
        //     this->name = obj.name ; 
        //     this->cgpa = obj.cgpa ; 
        // }

        // this is deep copy
        Student(Student &  obj){
            this->name = obj.name ; 
            cgpa = new double ; 
            *cgpa = *obj.cgpa ; 
        }

        void getInfo(){
            cout<<"NAME: "<<name<<endl ; 
            cout<<"CGPA: "<<*cgpa<<endl ; 
        }

        ~Student(){
            cout<<"Hi, I Delete Everything"<<endl ; 
            delete cgpa ; 
        }


} ; 
int main(){
    // Parent p1(10) ; 
    // Parent p2 ;
    Student s1("Rahul Kumar" ,8.9) ; 
    Student s2(s1) ; 
    // s2.getInfo() ; 
    // cout<<s2.cgpa<<endl; 
    *(s2.cgpa) = 8.2 ; 
    cout<<"S1's data: "<<endl ; 
    s1.getInfo() ; 
    cout<<"S2's data: "<<endl ; 
    s2.getInfo() ; 
    cout<<"Hello world i am her" ; 
}