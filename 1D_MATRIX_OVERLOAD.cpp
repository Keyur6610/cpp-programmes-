
#include <iostream>

using namespace std;

class A 
{
    public:
    int i,j,a[1][2],sum[1][2];
    
    void get(){
        
        for(i=0;i<1;i++){
            
            for(j=0;j<2;j++){
                cout<<"Enter Element: ";
                cin>>a[i][j];
            }
        }
        
        cout<<endl;
    }
    
        A operator +(A xy){
        
        for(i=0;i<1;i++){
        
            for(j=0;j<2;j++)
            {
                sum[i][j]=xy.a[i][j]+a[i][j];
            cout<<sum[i][j];
            cout<<" ";
            
            }  
            cout<<endl;
            
        } 
        
        return xy;
    }
    
    
    
};

int main(){
    
    A obj1,obj2,obj3;
    
    obj1.get();
    obj2.get();
    
    obj3=obj1+obj2;
    
    
    return 0;
}





