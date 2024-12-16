#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);//the size of array
    int array[size];//array declare
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);//taking array input
    }
    int value_need_to_find;
    scanf("%d",&value_need_to_find);//taking the value that i want to find in the array
    int position = 0;
    int found  = 0;//I'm assuming that the value is not present in the array(0 means false)
    for(int i=0;i<size;i++){
        if(array[i] == value_need_to_find){//if the given value matches to an element of array
            position = i+1;//setting the position that I found the value (index of the value + 1)
            //because the indexing of the array starts from 0
            found = 1;//setting the found count to true because I found it.(1 means true)
            break;//breaking the loop because I no longer need to go through the whole array
        }
    }
    if(found == 1){
        printf("The value is found at position %d",position);
    }
    else{
        printf("The value is not present in the array");
    }
    //If the question says to output the index then you don't need to add one
    //with the index you can just simply output what the index is
return 0;}

