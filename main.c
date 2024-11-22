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



 
 
  
