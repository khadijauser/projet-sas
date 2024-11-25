#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct task //declaration variabl
{    int id ;
    char title[110];
    char descruption[200];
    char dueDate[10];
    char priority[10];
    
};
//struct task listTask[100];
int numberTask=0;

//fonction add task
void addTask(struct task *listTask ,int id){
int day ;
int month ;
int year;
listTask->id=id;
printf("Enter your title : ");
scanf(" %[^\n]",listTask[numberTask].title);

printf("Enter your desruption  : ");
scanf(" %[^\n]",listTask[numberTask].descruption);
while (1)
{
    printf("Enter date DD/MM/YYYY : ");
    scanf("%10s",listTask[numberTask].dueDate);
if (sscanf(listTask->dueDate,"%2d/%2d/%4d",&day,&month,&year) != 3 ||day<1|| day>31 || 
month< 1 || month >12 || 
year>2050 ||year < 2024)
{
     printf("Format invalid\n");
}else break; 
 
}

while (1)
{
printf("Enter your priority (High/Low) : ");
scanf("%s",listTask[numberTask].priority);
if (strcmp(listTask->priority ,"high")==0|| strcmp(listTask->priority,"low")==0)
{
break;
}else printf("\nInvalid\n");

    
}

};
//fonction display task
void DisplayTask(struct task listTask){
  if (listTask.id!=0){

  
  printf("id : %d \n title :%s \n descreption  : %s\n Duedate : %s\n priority : %s\n",
                listTask.id ,
                listTask.title,
                listTask.descruption,
                listTask.dueDate,
                listTask.priority);
  
  }
  
}

int main(){
    int id=0;

  struct task listTask[MAX];
  int numberTask=0;
  int choice;
  do {
        printf("----- MENU --------\n");
        printf("1: Add task to table\n");
        printf("2: Display the task table\n");
        printf("3: Modify a task\n");
        printf("4: Delete a task\n");
        printf("5: Exit the program\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
          
            
                addTask(&listTask[id],id+1);
              id++;

            
            break;
            case 2: 
            for (int i = 0; i < id; i++)
            {
                  DisplayTask(listTask[i]);

            }
            
             break;

            






           // case 3: updateTask(); break;
            case 4:
                printf("Enter task ID to delete: ");
                scanf("%d", &id);
               // deleteTask(id - 1); // Adjust for zero-based index
                break;
            case 5: printf ("Have a good day");
            break; // Exit
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    
    return 0;
}

  




