#include <iostream>

using namespace std;
void bubbleSort(int* a, int size){
    
    if(a==nullptr){
        return;
    }
    else{
        for (int i=0; i<size; i++){
            for (int s=0; s<size-1; s++){
                if(*(a+s)>*(a+s+1)){
                    int temp=*(a+s);
                    *(a+s)=*(a+s+1);
                    *(a+s+1)=temp;
                }
            }
        }
    }
}
int main(){
    const int SIZE = 5;
    int a1[] = {3, 4, 8, 2, 1};
    int* p = nullptr;

    bubbleSort(a1, SIZE);
    
    for(int i = 0; i < SIZE; i++){
        cout << a1[i] << endl;
    }

    bubbleSort(nullptr, SIZE);
    return 0;
}