#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void addition();
void subtraction();
void multiply();
void division();
void square();
void squareroot();
void cube();
void reminder();
void factorial();
void matrix();
void power();
void quadratic_equation();
void trigonometry_radian_value();
void trigonometry_degree_value();
void ten_base();

int main()
{
    printf("\t\tWelcome To Calculator\n\n");
    int choice;
    printf("\n**********PRESS 0 TO EXIT***********\n");
    printf("PRESS 1 FOR ADDITION\n");
    printf("PRESS 2 FOR SUBTRACTION\n");
    printf("PRESS 3 FOR MULTIPLICATION\n");
    printf("PRESS 4 FOR DIVISION\n");
    printf("PRESS 5 FOR SQUARE\n");
    printf("PRESS 6 FOR SQUAREROOT\n");
    printf("PRESS 7 FOR CUBE\n");
    printf("PRESS 8 FOR REMINDER\n");
    printf("PRESS 9 FOR FACTORIAL\n");
    printf("PRESS 10 FOR MATRIX\n");
    printf("PRESS 11 FOR POWER\n");
    printf("PRESS 12 FOR Quadratic Equation\n");
    printf("PRESS 13 FOR TRIGONOMETRY RADIAN VALUE\n");
    printf("PRESS 14 FOR TRIGONOMETRY DEGREE VALUE\n");
    printf("PRESS 15 FOR TEN BASE VALUE\n");
    while(1)
    {
        printf("\n\n ENTER THE OPERATION YOU WANT TO DO:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addition();
            break;
            case 2:
            subtraction();
            break;
            case 3:
            multiply();
            break;
            case 4:
            division();
            break;
            case 5:
            square();
            break;
            case 6:
            squareroot();
            break;
            case 7:
            cube();
            break;
            case 8:
            reminder();
            break;
            case 9:
            factorial();
            break;
            case 10:
            matrix();
            break;
            case 11:
            power();
            break;
            case 12:
            quadratic_equation();
            break;
            case 13:
            trigonometry_radian_value();
            break;
            case 14:
            trigonometry_degree_value();
            break;
            case 15:
            ten_base();
            case 0:
            exit(0);

        }
    }
return 0;
    }
    void addition()
    {
        int n,i,a[10000],sum=0;
                printf("How Many Number You Want To Sum Up=\n");
                scanf("%d",&n);
                printf("Enter The Numbers:");
                for(i=0; i<n; i++)
                {
                    scanf("%d",&a[i]);
                }
                for(i=0; i<n; i++)
                {
                    sum+=a[i];
                }
                printf("The Sum Is=%d\n",sum);

    }
    void subtraction()
    {
        int a,b;
        printf("Enter The Two Numbers:");
        scanf("%d %d", &a,&b);
        printf("The SUBTRACTION Is:%d",a-b);
    }
    void multiply()
    {
        int n,i,a[10000],mul=1;
                printf("How Many Number You Want To Sum Up=\n");
                scanf("%d",&n);
                printf("Enter The Numbers:");
                for(i=0; i<n; i++)
                {
                    scanf("%d",&a[i]);
                }
                for(i=0; i<n; i++)
                {
                    mul*=a[i];
                }
                printf("The MULTIPLICATION Is=%d\n",mul);
    }
    void division()
    {
        double a,b;
        printf("Enter The Two Numbers:");
        scanf("%lf %lf",&a,&b);
        if(b!=0)
        printf("The DIVISION Is:%.2lf",(float)a/(float)b);
        else
        printf("YOU ARE FOOL");
    }
    void square()
    {
        double p,b;
        printf("Enter The Number :");
        scanf("%lf",&b);
        printf("The Value is:%.2lf",p=pow((float)b,2));
    }
    void squareroot()
    {
         double s,b;
        printf("Enter The Number :");
        scanf("%lf",&b);
        printf("The Value is:%.2lf",s=sqrt(b));
    }
    void cube()
    {
         double p,b;
        printf("Enter The Number :");
        scanf("%lf",&b);
        printf("The Value is:%.2lf",p=pow((float)b,3));
    }
    void power()
    {
        double p,b,c;
        printf("Enter The Number :");
        scanf("%lf %lf",&b,&c);
        printf("The Value is:%.2lf",p=pow((float)b,c));
    }
    void factorial()
    {
         int i,fact=1;
        int n;
        printf("Enter The Number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            fact=fact*i;

        }
        printf("The FACTORIAL Is:%d",fact);
    }
    void reminder()
    {
        int a,b;
        printf("Enter The Two Numbers:");
        scanf("%d %d ",&a,&b);
        printf("The REMINDER Value Is:%d",a%b);
    }
    void matrix()
    {
        {
    int a[100][100],b[100][100],mul[100][100],r,c,i,j,k;
system("cls");
printf("Enter the number of row=");
scanf("%d",&r);
printf("Enter the number of column=");
scanf("%d",&c);
printf("Enter the first matrix element=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the second matrix element=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}

printf("Multiply of the matrix=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}

    }
    void quadratic_equation()
    {
        float x1,x2,discriminant;
    int a,b,c;
    printf("Enter The Value Of a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    printf("%dx^2+%dx+%d=0\n",a,b,c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
    x1=(-b+sqrt(discriminant))/(2*a);
    x2=(-b-sqrt(discriminant))/(2*a);

    printf("The Value Of X1=%.2f\n",x1);

    printf("The Value Of X2=%.2f",x2);
    }
    else if(discriminant==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("Roots Are Equal=%.2f %.2f",x1,x2);
    }
    else
    printf("Roots Are Imaginary");
    }
    void trigonometry_radian_value()
    {
        double a;
    printf("Enter The Radian Value:");
    scanf("%lf",&a);
    double result1=sin(a);
    double result2=cos(a);
    double result3=tan(a);
    double result4=1/sin(a);
    double result5=1/cos(a);
    double result6=1/tan(a);
    printf("The Value Of Sin=%lf\n",result1);
    printf("The Value Of Cos=%lf\n",result2);
    printf("The Value Of Tan=%lf\n",result3);
    printf("The Value Of Cosec=%lf\n",result4);
    printf("The Value Of Sec=%lf\n",result5);
    printf("The Value Of Cot=%lf",result6);
    }
    void trigonometry_degree_value()
    {
double degree,radian;
    const double PI=3.141592653589793238;
    printf("Enter The Angel In Degree:");
    scanf("%lf",&degree);
    radian=degree*(PI/180);
    printf("The Value Of Sin(%lf)=%lf\n",degree,sin(radian));
    printf("The Value Of Cos(%lf)=%lf\n",degree,cos(radian));
    printf("The Value Of Tan(%lf)=%lf\n",degree,tan(radian));
    printf("The Value Of Cosec(%lf)=%lf\n",degree,1/sin(radian));
    printf("The Value Of Sec(%lf)=%lf\n",degree,1/cos(radian));
    printf("The Value Of Cot(%lf)=%lf\n",degree,1/tan(radian));
    }
    void ten_base()
    {

    double a,result;
    printf("Enter The Value:");
    scanf("%lf",&a);
    result=log10(a);

    printf("The Value Of Log=%lf",result);


    }
