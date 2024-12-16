#include<stdio.h>

int binary_search(int array[],int size,int value_need_to_find){
int start = 0;//starting index is 0 that means the first element
int end = size - 1;//end is the last element's index that is (size_of_the_array - 1)
int position = -1;//position initially set to value that is not possible .
// In this case the -1 because array index starts at 0.
while(start<=end){//using loop till my start is more or equal to the end.
    int mid = (start + end) /2;//finding a mid value to compare if I'm close to the value.
    if(array[mid] == value_need_to_find){//if my mid element matches with the value then.
       position = mid + 1;//position is set to the index and + 1.
       break;//braking the loop because i no longer need to search the array.
    }
    else if(array[mid] < value_need_to_find){//If the mid element is less then the value i need to find.
        start = mid + 1;//my starting position is now one more then mid element.
    }
    else if(array[mid] > value_need_to_find){//If the mid element is greater then the value i need to find.
        end = mid - 1;//my ending position is now one less then the mid element.
    }
    //this loop will find the mid again and again till it finds the value or the array ends.
}
return position;// returning the position that i found the value.
}

int main(){
    int size;
    scanf("%d",&size);//the size of array
    int array[size];//array declare
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);//taking array input
    }
    int value_need_to_find;
    scanf("%d",&value_need_to_find);//taking the value that i want to find in the array
    // I use another function to find the binary search
    int bs = binary_search(array,size,value_need_to_find);//saving the value of position in a variable
    if(bs != -1){//if position is not equal to -1 then it should have a value.
        printf("The value is found in the position %d",bs);
    }
    else{
        printf("The value is not found in the array");
    }
return 0;}
