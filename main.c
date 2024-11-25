#include<stdio.h>
#include<string.h>
struct task //declaration variabl
{
    char title[110];
    char descruption[200];
    struct date dueDate;
    char priority[10];
    
};
struct date
{
int day ;
int month ;
int year;
};
//tabel 
struct task listTask[100];
int numberTask=0;
//add function 
void addTask(){
printf("Enter your title : ");
scanf("%[^\n]",listTask[numberTask].title);

printf("Enter your desruption  : ");
scanf("%[^\n]",listTask[numberTask].descruption);

printf("Enter your priority (High/Low) : ");
scanf("%s",listTask[numberTask].priority);




printf("Enter date DD/MM/YYYY");
scanf("%s",listTask[numberTask].dueDate);
};

int main(){

}