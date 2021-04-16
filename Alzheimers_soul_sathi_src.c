#include<string.h>
#include<stdlib.h>
#include<project.h>
/**
 * @brief author Megha M
 * 
 * @return int 
 */
int main()
{


    printf("\n\t***** Hope you are doing well :) @dad *****\n");
    printf("\n\tPress {1} : Personnel Details\n\tPress {2} : Date Of Birth\n\tPress {3} : Family Details\n\tPress {4} : Medical History\n\tPress {5} : Account Details\n\tPress {6} : Exit\n\n");

   void opt(); 
   void personnel_details();
   void dob();
   void family_details();
   void medical_conditions();
   void account_details();
   void correct_pin();
   void xit();
  
return 0;
}
/*gives the option to opt */
void opt()
{
int access;
    scanf("%d",&access);
    switch(access)
    {
        case 1:
        personnel_details();
        break;

        case 2:
        dob();
        break;

        case 3:
        family_details();
        break;

        case 4:
        medical_conditions();
        break;

        case 5:
        correct_pin();
        break;

        case 6:
        xit();
        break;

        default:
        printf("Choose valid option :) :) :)\n");
    }
    while(access!=0);


}
/* gives personnel details*/
void personnel_details()
{
//system("cls");


    int cross_num = 4;
    int home_num = 124;
    char name[10] = "Chandru";
    char home_name[10] = "Sampada";
    char street_name[10] = "Sterling";
    char area_name[10] = "Gokulam";
    char dist[10] = "Mysore";

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ******* MY PERSONEL DETAILS *******\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n Name: %s",name);
    printf("\n Address: %s, # %d, %d, %s, %s, %s",home_name,home_num,cross_num,street_name,area_name,dist);
    //system("PAUSE");
    exit(1);
}
/* gives date of birth*/
void dob()
{
    //system("cls");
    int bd = 9, bm = 1, by = 1959;

  printf("\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
  printf("\n\t\tDate of Birth : ");
  printf("%d/%d/%d\n",by,bm,bd);
  //system("PAUSE");
  exit(1);
}
/*gives family details*/
void family_details()
{
    //system("cls");
    printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 **FAMILY DETAILS** \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
    printf("\tWIFE : Vijayalaxmi\n\tContact: 9480547243\n\n\tSON : Venkat Raman\n\tContact: 9380055145\n\n\tFRIEND  :  Kiran\n\tContact:  7338657496\n\n");
    //system("PAUSE");
    exit(1);
}
/*gives medical history and current condition*/
void medical_conditions()
{
    //system("cls");
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ***MEDICAL STATUS*** \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\tUndergone HEART SURGERY : Under Treatment\n");
    printf("\tHigh BP : Taking Prescribed Tablets\n");
    printf("\tKidney Stone : Cured with Prescribed Medicines\n\n");
    //system("PAUSE");
    exit(1);
}
/*gives account details upon correct pin entry*/
void account_details()
{
   //system("cls");
   int account_number = 00001111;
   printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ****ACCOUNT DETAILS**** \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
   printf("\n\tBank name: Canara BANK");
   printf("\n\tAccount Number: 83915734123\n");
   printf("\tBranch: Gokulam Branch\n\n");
   //system("PAUSE");
   exit(1);
}
/*checks for correct pin entry*/
void correct_pin()
{
//system("cls");
int i,pin;
        printf("\tEnter secret pin to access BANK DETAILS\n");
        scanf("%d",&pin);
        if(pin == 9999)
        {
            account_details();
        }
        else
        {
        printf("\tPlease try again with correct pin\n");
        }
        //system("PAUSE");
}
/*exits from the program*/
void xit()
{
    //system("cls");
    printf("\n\t\t THANK YOU \n");
    //system("PAUSE");
    exit(1);
}
