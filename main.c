<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <string.h>

struct task {
    char title[150];
    char description[200];
    char date[10]; // Format: YYYY-MM-DD
    char priority[10]; // High or Low
};
 //global declaration
 struct task listTask[120];//table to store tasks 
 int numbertask = 0;

 //function add task
 void addtask(){
if (numbertask >= 120){
    printf("liste of tasks is full ,\n");
    return;
}
 printf("Enter title of task : ");
 scanf(" %[^\n]",listTask[numbertask].title);


 printf("Enter description of task : ");
 scanf(" %[^\n]",listTask[numbertask].description);

 printf("Enter date of task : ");
 scanf(" %s",listTask[numbertask].date);
 
 printf("Enter priority of task : ");
 scanf(" %s",listTask[numbertask].priority);
 
 
}



 int main(){
    addtask();
 }



 
 
  
>>>>>>> 3f80e35b82e6a7069812597bb1de08edcf90b2d9
