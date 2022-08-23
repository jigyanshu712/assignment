#include<stdio.h>
#include<conio.h>
int main(){
    char words[4][20]={"my","name","is","jigyanshu"};
    char word1[]="my";
    char word2[]="jigyanshu";
    int i,w1=-1,w2=-1,min=10000;
    for(i=0;i<4;i++){
        if(strcmp(words[i],word1)==0)
            w1=i;
        if(strcmp(words[i],word2)==0)
            w2=i;
    }
    if(w1!=-1 && w2!=-1){
        min=abs(w1-w2)-1;
    printf("minimum distance between the string  is\ %d\n",min);}
    else
        printf("the given string is not presernt");


return 0;
}
