#include <iostream>
using namespace std;



class dikdörtgen{
public:
    int en;
    int boy;
    int alan(){
        return en*boy;
    }
    int cevre(){
        return 2*(en+boy);
    }
};

int main(){
    dikdörtgen dikdörtgen1;
    dikdörtgen dikdörtgen2;
    dikdörtgen1.en = 5;
    dikdörtgen1.boy = 2;
    dikdörtgen2.en = 3;
    dikdörtgen2.boy = 8;
    
    cout<<"1. dikdörtgenin alanı: "<<dikdörtgen1.alan()<<"    cevresi: "<<dikdörtgen1.cevre();
    cout<<"\n2. dikdörtgenin alanı: "<<dikdörtgen2.alan()<<"    cevresi: "<<dikdörtgen2.cevre();
    
}
