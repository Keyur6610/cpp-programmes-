#include <iostream>

using namespace std;

class A 
{
    public:
    
    string value;
    
    void get(string a){
        value=a;
    }
    
    A operator +(A xy){
         
        xy.value=value+xy.value;
        return xy;
    }
    
    void display (){
        
       cout<<value;
    }
};

int main(){
    
    A obj1,obj2,obj3;
    obj1.get("Hello");
    
    obj2.get("Keyur");
    obj3=obj1+obj2;
    obj3.display();
    
    return 0;
}


