#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int grade;
    int number;
    int num;

    printf("\n\n\n\t\t********WELCOME TO ZETECH UNIVERSITY ADMISSION CRITERIA********\n\n\n");

    printf("Enter your names please: ");
    scanf("%s", name);  

    printf("\t\t\t1: continue\n");
    printf("\t\t\t2: exit\n");
    printf("\t\t\tEnter your choice: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("1: C+, B-, B+, A-, A\n");
            printf("2: C\n");
            printf("3: C-\n");
            printf("4: E, D-, D+\n");
            printf("5: try alternative option\n");
            printf("6: exit\n");
            printf("\t\tChoose your grade or press 5 to try an alternative option: ");
            scanf("%d", &grade);  

            switch (grade) {
                case 1:
                    printf("\t\t%s, you have been successfully admitted into a degree course in Zetech university\n\n", name);
                    break;

                case 2:
                    printf("\t\t%s, you have been successfully admitted into a diploma course in Zetech university\n\n", name);
                    break;

                case 3:
                    printf("\t\t%s, you have been successfully admitted into a certificate course in Zetech university\n\n", name);
                    break;
                    
                case 4:
                    printf("\t\t%s, you have been successfully admitted into an artisan course in Zetech university\n\n", name);
                    break;
                    
                case 5:
                    printf("\t\t*****Enter your alternative qualifications*****\n\n");
                    printf("\t\t\t1: diploma certificate\n");
                    printf("\t\t\t2: pass in certificate\n");
                    printf("\t\t\t3: pass in artisan\n");
                    printf("\t\t\t4: secondary certificate\n");
                    printf("\t\t\tEnter your choice: ");
                    scanf("%d", &num);  

                    switch (num) {
                        case 1:
                            printf("\t\t\t%s, you have been successfully admitted into a degree course in Zetech university\n\n", name);
                            break;

                        case 2:
                            printf("\t\t\t%s, you have been successfully admitted into a diploma course in Zetech university\n\n", name);
                            break;

                        case 3:
                            printf("\t\t\t%s, you have been successfully admitted into a certificate course in Zetech university\n\n", name);
                            break;

                        case 4:
                            printf("\t\t\t%s, you have been successfully admitted into an artisan course in Zetech university\n\n", name);
                            break;

                        default:
                            printf("Invalid number");
                    }
                    break;

                default:
                    printf("Invalid number");
            }
            break;

        default:
            printf("Invalid number");
    }

    return 0;
}
