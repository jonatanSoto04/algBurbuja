// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int numeros[] ={4,1,5,6,44,2,3,9,7,8,35,32,23,14,17,22,31,21,12,50};
    int cam = 0;
    int res[]={};
    for(int i =0; i<20; i++){
        for(int j=0; j<20; j++){
            if(numeros[j]>numeros[j+1]){
                cam = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = cam;
            }
        }
    }
    for(int i =0; i<20; i++){
        cout<<numeros[i]<<endl;
    }
    return 0;
}
