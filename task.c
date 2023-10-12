#include <stdio.h>
#include <string.h>

void main()
{
    int op;
    char f_name[10];
    char l_name[10];
    char user[20];
    char email[30];
    char pass[12];
    char username[] = "abdo";
    char password[] = "12345";
    char username_input[20];
    char pass_input[12];
    printf("Welcome Sir,\n Please Choose The Number Of The Operation You Want \n");
    printf("1- Registration \n");
    printf("2- Login \n");
    printf("The Number Of Operation : ");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("Enter You First Name : ");
        scanf("%s", &f_name);
        printf("Enter You Last Name : ");
        scanf("%s", &l_name);
        printf("Enter You Display Name : ");
        scanf("%s", &user);
        printf("Enter You Email : ");
        scanf("%s", &email);
        printf("Enter You Password : ");
        scanf("%s", &pass);
        printf("Registration Successful \n");
        printf("You First Name Is : %s \n", f_name);
        printf("You Last Name Is : %s \n", l_name);
        printf("You Username Is : %s \n", username);
        printf("You Email Is : %s \n", email);
        printf("You Password Is : %s \n", pass);
    }
    else if (op == 2)
    {
        do
        {
            printf("Enter Username : ");
            scanf("%s", &username_input);
            printf("Enter The Password : ");
            scanf("%s", &pass_input);
            if (!strcmp(username_input, username) && !strcmp(pass_input, password))
            {
                printf("Login Success! \n");
                break;
            }
            else
            {
                printf("Login Failled, Wrong Username or Password ,Try Again \n");
            }
        } while (1);
    }
    else
    {
        printf("Wrong Operation");
    }
}