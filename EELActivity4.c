#include<stdio.h>
struct learner { 
    int rollno;
    char Name[20];
    float Marks;
    char Div[5];
    char Batch[3];
};
int main() {
    int i;
    struct learner s[5];
    
    for ( i=0; i<5; i++){
   printf("Enter your Roll no ::\t");
         scanf("%d",& s[i].rollno);
         printf("Enter your Name ::\t");
         scanf("%s",& s[i].Name);
         printf("Enter your Marks ::\t");
         scanf("%f",& s[i].Marks);
         printf("Enter your Div ::\t");
         scanf("%s",& s[i].Div);
         printf("Enter your Batch ::\t");
         scanf("%s",& s[i].Batch);
         printf("\n");
    }
    struct learner swap;
    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (s[j].Marks < s[j + 1].Marks) {
                swap= s[j];
                s[j] = s[j + 1];
                s[j + 1] = swap; }
                }  }
    printf("\n student name,rollno,div,batch according to their maks high to low:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f, Div: %s, Batch: %s\n",s[i].Name,s[i].rollno, s[i].Marks, s[i].Div, s[i].Batch);
    }
    
}


