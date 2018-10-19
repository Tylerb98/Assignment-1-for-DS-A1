#include <stdio.h>
#include <stdlib.h>

int arr[25];

int returnIndex(int key){
    return key%25;
}

int checkIndex(int index ){
    if(arr[index]!=-1){
        return -1;
        printf("Index is already filled.");
    }
    else{
        return 1;
    }
}

void printTable(){
    for(int i=0;i<25;i++){
        printf("%d\n", arr[i]);
    }
}

int main (void){
    int test= 0;
    
    for(int i=0; i<25;i++){
        arr[i] = -1;
    }    

    for(int i = 0; i<15;i++){
        test = rand()%100 + 1;
        if(checkIndex(returnIndex(test))==1){
            arr[returnIndex(test)]= test;
        }
        else if(checkIndex(returnIndex(test))==-1){
            if(checkIndex(returnIndex(test)+1)==1){
                arr[returnIndex(test)+1]=test;
            }
        }
    }
    
    printTable();

    return 0;
}
