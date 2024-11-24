#include<iostream>
using namespace std;
class super{
private:
int a=10;
int b=20;
friend class sub;
friend void access();
};
void access(){
    super obj;
    cout<<obj.a<<obj.b;
}
class sub{
    public:
void display(){
    super obj;
cout<<obj.b<<" "<<obj.a;
}
};
int main(){
    access();
sub obj;
obj.display();

}