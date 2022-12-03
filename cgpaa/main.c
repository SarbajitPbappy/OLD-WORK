#include <stdio.h>
#include <stdlib.h>

int main()
{

   double cgpa=0,sgpa=0,gpa=0,credit,s_credit=0;
   printf("\t\tCGPA CALCULATOR\n");
   printf("\t\t---------------\n\n");
   printf("\t1.Semester Wise SGPA\n\t2.All Over CGPA\nENTER YOUR CHOICE:");
   printf("\n");
   int choice;
   scanf("%d",&choice);

   while(1)
   {
    switch(choice)
    {
    case 1:

        printf("Enter your grade point & credit (0 0 for Exit):\n");
            scanf("%lf%lf", &gpa, &credit);

            if(gpa==0 && credit==0)
            {
                break;
            }

            cgpa = cgpa + (gpa*credit);
            s_credit = s_credit + credit;

            sgpa = cgpa / s_credit;
            printf("\n\tYour CGPA is: %.2lf\n\tAnd total credit: %.0lf\n", sgpa, s_credit);
            else if(choice==2 )
        {
            if(choice==2)
            {
                printf("Enter your Semister's GPA (0 for Exit):\n");
            }


            if(gpa==0)
            {
                break;
            }

            cgpa = cgpa + gpa;
            s_credit++;

            s_cgpa = cgpa / s_credit;
        }





    }

   }
}
