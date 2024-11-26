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

        printf("\n--------------------------------\n");
  printf("id : %d \n title :%s \n descreption  : %s\n Duedate : %s\n priority : %s\n",
                listTask.id ,
                listTask.title,
                listTask.descruption,
                listTask.dueDate,
                listTask.priority);
        printf("\n--------------------------------\n");
  }
}
//fonction update
void update(struct task *listTask,char nv[],int field){
  
  switch (field)
  {
  case 1:
    strcpy(listTask->descruption,nv);
    break;
  case 2:
    strcpy(listTask->dueDate,nv);
  break;
  case 3:
    strcpy(listTask->priority,nv);
  break;
  
  default:
  printf("invalide field\n");
        printf("\n--------------------------------\n");

    break;
  }
}

//fonction delete
void delete (struct task *listTask){
    listTask->id=0;
}

//fonction filter 
void filter(struct task listTask[],char fp[], int id){ //fp =filter priority
int found = 0;
  for (int i = 0; i <id; i++)
  {
    if (strcmp (listTask[i].priority,fp) == 0)
    {
      DisplayTask(listTask[i]);
      found= 1;
    }
  }
   if (!found)
    {
      printf(" Not available ");
        printf("\n--------------------------------\n");

    }
}

int main(){
  int id=0,id_modify,id_delete;
  char nv[100];
  struct task listTask[MAX];
  int numberTask=0;
  int choice,field;
  char fp[4];
  do {
        printf("\n--------------------------------\n");

        printf("----- MENU --------\n");
        printf("1: Add task to table\n");
        printf("2: Display the task table\n");
        printf("3: Modify a task\n");
        printf("4: Delete a task\n");
        printf("5: Filtred\n");
        printf("0: Exit the program\n");
        printf("Enter choice: \n");
        printf("\n--------------------------------\n");

        scanf("%d", &choice);
        switch (choice) {
          case 0:
          break;
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
case 3:

  printf("Enter the  id of variabel you want to change :");
  scanf("%d",&id_modify);

  printf("For update \n1.descruption \n2.duedate \n3.priority \n");
  scanf("%d",&field);
  printf("Enter new value : \n");
  scanf("%s",&nv);
  update(&listTask[id_modify-1],nv,field);
  //printf("invalid field");
break;

case 4:
     printf("Enter id task to delete :");
     scanf("%d",&id_delete);

     delete(&listTask[id_delete-1]);

break;

          
            case 5: 
            printf("Enter high or low ");
            scanf("%s",fp);
            filter(listTask,fp,id);
            break; // Exit
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    
    return 0;
}
