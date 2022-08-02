#include <stdio.h>
#define N 1000
int q[N],pr[N];
int front=-1,rear=-1;
void recruit(int  person,int register_no );
void discharge();
void peek();
void display();

void main()
{
    int ch,person,register_no,i;
    printf("                  VACCINATION CENTRE \n");
      printf("\n");
       printf("                      GET VACCINATED");
        printf("\n");                                                                                                   -TIME : 24 × 7 HRS");
         printf(" COVID SYMPTOMS :\n");
          printf("                •Difficulty breathing or shortness of breath\n                •loss of speech or mobility, or confusion\n                •chest pain\n");
           printf("                •fever\n                •cough\n                •tiredness\n                •loss of taste or smell");
            printf("\n");
             printf("       RULES :\n");
             printf("               •MAINTAIN DISTANCE\n");
             printf("               •WEAR A MASK \n");
             printf("               •KEEP SANTIZIER WITH YOU\n");
           printf("               •ONLY 18+ ELGIBLE FOR VACCINE \n");
          printf("               •WASH YOUR HANDS REGULARLY \n");
         printf("\n");
        printf("\n");
       printf("                   STAY HOME STAY SAFE ");
      printf("\n");
     printf("\n");
    printf("\n");
    while(1){
             printf("\n1.TO GET VACCINATION\n2.VACCINATED\n3.WHO IS GETTING VACCINE\n4.VACCINATION LIST\n5.QUIT\n");
             printf("\n\nENTER YOUR CHOICE:");
             scanf("%d",&ch);
      switch(ch){
      case 1: printf("ENTER PERSON  AND IT'S REGISTRATION NO :");
              scanf("%d%d",&person,&register_no);
              recruit(person,register_no);
              break;

      case 2:discharge();
             break;

      case 3:peek();
             break;

      case 4:display();
             break;

      case 5:exit(1);
             break;
             default:printf("invalid choice");
       }
    }
}
      void recruit(int person,int register_no){
     
                   if(front==0 && rear==N-1){
                   printf("\nREGISTRATIONS ARE  FULL ...............");
                  }
      else if(front==-1 && rear==-1 ){
                   front=rear=0;
                   q[rear]=person;
                   pr[rear]=register_no;
                   }
      else{                                             //if  there  already some elements present  in   queue
          int i;
           for( i=rear;i>=front;i--){
                  if(register_no<pr[i]){
                  q[i+1]=q[i];
                  pr[i+1]=pr[i];
                 }
      else
                  break;
            }
                 q[i+1]=person;
                 pr[i+1]=register_no;
                 rear++;
        }
      }
void discharge()
         {
          if(front==-1){

             printf("NO REGISTRATIONS ...............");

            }
          else{
                printf("VACCINATED PERSON %d REGISTRATION NO %d",q[front],pr[front]);
                int i;

                  for( i=front;i<=rear;i++){

                    q[i]=q[i+1];

                    pr[i]=pr[i+1];

                  }
                  rear--;

             }

}



void peek(){

           if(front==-1){

             printf("NO REGISTRATIONS ...............");


            }

            else{

               printf("PERSON %d IS GETTING VACCINATED AND THEIR REGISTRATION NO IS %d",q[front],pr[front]);

            }

}

void display(){
                 if(front==-1){

                  printf("NO REGISTRATIONS ...............");
                  }


                 else{

                     int  i;

                     printf("PERSONS AND THEIR REGISTRATION NO ARE :");
                     for(i=front;i<=rear;i++){

                     printf("\nPERSON NO %d\tREGISTRATION NO %d",q[i],pr[i]);

                   }
                }
             }