#include <stdlib.h>
#include <stdio.h>
void print();
int search();
int main() {
    int array[100];
    int size,toSearch,searchIndex;
    printf("How many elements will there be in the array: \n");
    scanf("%d",&size);
    printf("The elements: \n");
    print(array,size);
    printf("Which element are you looking for? \n");
    scanf("%d",&toSearch);
    searchIndex=search(array,size,toSearch);
    if(searchIndex==-1){printf("The element %d is not in the array",toSearch);}
    else{printf("The element %d is at index %d",toSearch,searchIndex+1);}
    return 0;
}
void print(int *array,int size){
    int *arrEnd;
    arrEnd=(array+size-1);
    while(array<=arrEnd){
        scanf("%d",array++);
    }
}
int search(int *array,int size,int toSearch){
    int index=0;
    int *arrEnd;
    arrEnd=(array+size-1);
    while(array<=arrEnd && *array!=toSearch){
        array++;
        index++;
    }
    if(array<=arrEnd){return index;}
    return -1;
}