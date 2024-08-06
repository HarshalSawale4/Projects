/* #include<stdio.h>

void add(){
    int a,b,sum;
    printf("Enter num1 =");
    scanf("%d",&a);
    printf("Enter num2 =");
    scanf("%d",&b);
    sum= a+b;
    printf("Your addition is %d\n",sum);
}

void sub(){
     int a,b,sum;
    printf("Enter num1 =");
    scanf("%d",&a);
    printf("Enter num2 =");
    scanf("%d",&b);
    sum= a-b;
    printf("Your substraction is = %d\n",sum);
} 

void mul(){
    int a,b,sum;
    printf("Enter num1 =");
    scanf("%d",&a);
    printf("Enter num2 =");
    scanf("%d",&b);
    sum= a*b;
    printf("Your multiplication is = %d\n",sum);
}

void division(){
    int a,b,sum;
    printf("Enter num1 =");
    scanf("%d",&a);
    printf("Enter num2 =");
    scanf("%d",&b);
    sum= a/b;
    printf("Your divisionision is = %d\n",sum);
}

int main(){
    int choice;
    do
    {
        printf("Welcome to Calculator Made By Harshal Vasant Sawale \n");
        printf("1 for addition \n");
        printf("2 for substraction \n");
        printf("3 for multiplication \n");
        printf("4 for divisionision \n");
        printf("5 for exit \n");
        printf("Enter your choice");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: add(); break;
        case 2: sub(); break;
        case 3: mul(); break;
        case 4: division(); break;
        case 5: printf("Exitingggg \n"); 
        default:printf("Enter valid statement"); break;
        }

    } while (choice != 5);

    
}
*/
#include <stdio.h>

int main() {
    // URL of the imageh
    const char *image= "";
    
    // Display the URL
    printf("Image URL: %s\n", image_url);
    
    return 0;
}
