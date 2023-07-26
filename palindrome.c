#include<stdio.h>
#include <string.h>
void main(){
    char arr[20];
    int i=0,size,flag=0,b=0,j=0;
    printf("Enter your word : ");
    scanf("%s",&arr);
    size = strlen(arr) ;
    /*
    for (i=size-1;i>=0;i--){
        for (j;j<i;){
            if (arr[i]==arr[j]){
                flag=0;
                j++;
                break;
            }
            else{
                flag+=1;
                j++;
                break;
            }
        }
    }
    
    if(flag==0){
        printf("IT IS A PALINDROME !");
    }
    else{
        printf("IT IS NOT A PALINDROME !");
    }
    */
    for(i; i < size; i++){
        if(size > 0){
            if(arr[i] == arr[size-1]){
                size--;
            } 
            else {
                flag++;
            }
        }
    }
    if(flag == 0){
        printf("PALINDROME");
    } 
    else{
        printf("NOT PALINDROME");
    } 
}
