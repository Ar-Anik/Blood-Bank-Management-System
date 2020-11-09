#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct rob
{
    char nm[50];
    char age[10];
    char lt[20];
    char cn[20];
};
int main()
{
    printf("\t\t<<<<<<<<<");
    printf("Blood Bank Management System");
    printf(">>>>>>>>>\n\n\n");
    char an[20] = "abcdef";
    char pw[15] = "12345";
    char un[20];
    char pas[15];


    printf("Enter User ID : ");
    scanf("%s", un);
    printf("Enter Password : ");
    scanf("%s", pas);

    if(strcmp(un, an) == 0 && strcmp(pas, pw) == 0)
    {
        system("CLS");
        printf("Successfully Login..\n\n");
        while(1)
        {
            int a;
            printf("\n\n1.Enter Number 1 For Save Information\n");
            printf("2.Enter Number 2 For Search Information\n");
            printf("3.Enter Number 3 For Update Information\n");
            printf("4.Enter Number 4 For End This System..........:");
            scanf("%d", &a);
            system("CLS");
            if(a == 4)
            {
                printf("Goodbye....\n");
                break;
                exit(1);
            }

            else if(a == 1)
            {
                char ch[10];
                printf("\nEnter Blood Group : ");
                scanf("%s", ch);

                if(strcmp(ch, "A+") == 0)
                {
                    FILE *anik;
                    struct rob a;
                    anik = fopen("ap.txt", "a");
                    system("CLS");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", a.nm);
                        printf("Enter Age : ");
                        scanf("%s", a.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", a.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", a.cn);

                        fwrite(&a, sizeof(a), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "A-") == 0)
                {
                    FILE *anik;
                    struct rob am;
                    system("CLS");
                    anik = fopen("am.txt", "a");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", am.nm);
                        printf("Enter Age : ");
                        scanf("%s", am.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", am.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", am.cn);

                        fwrite(&am, sizeof(am), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "B+") == 0)
                {
                    FILE *anik;
                    struct rob bp;
                    system("CLS");
                    anik = fopen("bp.txt", "a");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", bp.nm);
                        printf("Enter Age : ");
                        scanf("%s", bp.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", bp.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", bp.cn);

                        fwrite(&bp, sizeof(bp), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "B-") == 0)
                {
                    FILE *anik;
                    struct rob bm;
                    system("CLS");
                    anik = fopen("bm.txt", "a");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", bm.nm);
                        printf("Enter Age : ");
                        scanf("%s", bm.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", bm.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", bm.cn);

                        fwrite(&bm, sizeof(bm), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "AB+") == 0)
                {
                    FILE *anik;
                    struct rob abp;
                    system("CLS");
                    anik = fopen("abp.txt", "a");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", abp.nm);
                        printf("Enter Age : ");
                        scanf("%s", abp.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", abp.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", abp.cn);

                        fwrite(&abp, sizeof(abp), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "AB-") == 0)
                {
                    FILE *anik;
                    struct rob abm;
                    anik = fopen("abm.txt", "a");
                    system("CLS");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", abm.nm);
                        printf("Enter Age : ");
                        scanf("%s", abm.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", abm.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", abm.cn);

                        fwrite(&abm, sizeof(abm), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "O+") == 0)
                {
                    FILE *anik;
                    struct rob op;
                    system("CLS");
                    anik = fopen("op.txt", "a");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", op.nm);
                        printf("Enter Age : ");
                        scanf("%s", op.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", op.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", op.cn);

                        fwrite(&op, sizeof(op), 1, anik);
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "O-") == 0)
                {
                    FILE *anik;
                    struct rob om;
                    system("CLS");
                    anik = fopen("om.txt", "a");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        printf("Enter Name : ");
                        scanf("%s", om.nm);
                        printf("Enter Age : ");
                        scanf("%s", om.age);
                        printf("Enter Last Date Of Blood Donation : ");
                        scanf("%s", om.lt);
                        printf("Enter Contact Number : ");
                        scanf("%s", om.cn);

                        fwrite(&om, sizeof(om), 1, anik);
                        fclose(anik);
                    }
                }
                else
                {
                    printf("Blood Group Not Found......\n\n");
                }
            }


            else if(a == 2)
            {
                char ch[10];
                printf("\nEnter Blood Group : ");
                scanf("%s", ch);

                if(strcmp(ch, "A+") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== A+ ==========\n\n\n");
                    FILE *anik;
                    struct rob a;
                    anik = fopen("ap.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&a, sizeof(a), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", a.nm, a.age, a.lt, a.cn);
                        }
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "A-") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== A- ==========\n\n\n");
                    FILE *anik;
                    struct rob am;
                    anik = fopen("am.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&am, sizeof(am), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", am.nm, am.age, am.lt, am.cn);
                        }

                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "B+") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== B+ ==========\n\n\n");
                    FILE *anik;
                    struct rob bp;
                    anik = fopen("bp.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&bp, sizeof(bp), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", bp.nm, bp.age, bp.lt, bp.cn);
                        }
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "B-") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== B- ==========\n\n\n");
                    FILE *anik;
                    struct rob bm;
                    anik = fopen("bm.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&bm, sizeof(bm), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", bm.nm, bm.age, bm.lt, bm.cn);
                        }
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "AB+") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== AB+ ==========\n\n\n");
                    FILE *anik;
                    struct rob abp;
                    anik = fopen("abp.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&abp, sizeof(abp), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", abp.nm, abp.age, abp.lt, abp.cn);
                        }
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "AB-") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== AB- ==========\n\n\n");
                    FILE *anik;
                    struct rob abm;
                    anik = fopen("abm.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&abm, sizeof(abm), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", abm.nm, abm.age, abm.lt, abm.cn);
                        }

                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "O+") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== O+ ==========\n\n\n");
                    FILE *anik;
                    struct rob op;
                    anik = fopen("op.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&op, sizeof(op), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", op.nm, op.age, op.lt, op.cn);
                        }
                        fclose(anik);
                    }
                }

                else if(strcmp(ch, "O-") == 0)
                {
                    system("CLS");
                    printf("\t\t\t========== O- ==========\n\n\n");
                    FILE *anik;
                    struct rob om;
                    anik = fopen("om.txt", "r");
                    if(anik == NULL)
                    {
                        printf("File does not exist\n");
                    }
                    else
                    {
                        while(fread(&om, sizeof(om), 1, anik)>0)
                        {
                            printf("\nName : %s\nAge : %s\nLast Date Of Blood Donation : %s\nContact Number : %s\n\n", om.nm, om.age, om.lt, om.cn);
                        }
                        fclose(anik);
                    }
                }

                else
                {
                    printf("Blood Group Not Found......\n\n");
                }

            }
            else if(a == 3)
            {
                char b[10];
                char n[100];
                char m[100];
                struct rob p;
                FILE *rd;
                FILE *tf;
                printf("\n\nEnter Blood Group : ");
                scanf("%s", b);
                printf("\nEnter Name : ");
                scanf("%s", n);
                if(strcmp(b, "A+")==0 || strcmp(b, "A-")==0 || strcmp(b, "B+")==0 || strcmp(b, "B-")==0 || strcmp(b, "AB+")==0 || strcmp(b, "AB-")==0 || strcmp(b, "O+")==0 || strcmp(b, "O-")==0)
                {
                    if(strcmp(b,"A+") == 0)
                    {
                        rd = fopen("ap.txt", "r");
                    }
                    else if(strcmp(b, "A-") == 0)
                    {
                        rd = fopen("am.txt", "r");
                    }
                    else if(strcmp(b, "B+") == 0)
                    {
                        rd = fopen("bp.txt", "r");
                    }
                    else if(strcmp(b, "B-") == 0)
                    {
                        rd = fopen("bm.txt", "r");
                    }
                    else if(strcmp(b, "AB+") == 0)
                    {
                        rd = fopen("abp.txt", "r");
                    }
                    else if(strcmp(b, "AB-") == 0)
                    {
                        rd = fopen("abm.txt", "r");
                    }
                    else if(strcmp(b, "O+") == 0)
                    {
                        rd = fopen("op.txt", "r");
                    }
                    else
                    {
                        rd = fopen("om.txt", "r");
                    }
                    tf = fopen("ft.txt", "w");
                    while(fread(&p, sizeof(p), 1, rd))
                    {
                        strcpy(m,p.nm);
                        if(strcmp(n,m) != 0)
                        {
                            fwrite(&p, sizeof(p), 1, tf);
                        }
                        else
                        {
                            int x;
                            printf("\n1.Update Last Date Of Blood Donation\n");
                            printf("2.Update Contact Number\n");
                            printf("3.Update Both\n");
                            printf("\nEnter Choice : ");
                            scanf("%d", &x);
                            if(x == 1)
                            {
                                printf("\nEnter Last Date Of Blood Donation : ");
                                scanf("%s", p.lt);
                            }
                            else if(x == 2)
                            {
                                printf("\nEnter Contact Number : ");
                                scanf("%s", p.cn);
                            }
                            else if(x == 3)
                            {
                                printf("\nEnter Last Date Of Blood Donation : ");
                                scanf("%s", p.lt);
                                printf("Enter Contact Number : ");
                                scanf("%s", p.cn);
                            }
                            else
                            {
                                printf("Invalid Selection\n");
                            }
                            fwrite(&p, sizeof(p), 1, tf);
                        }
                    }
                    fclose(rd);
                    fclose(tf);

                    if(strcmp(b,"A+") == 0)
                    {
                        rd = fopen("ap.txt", "w");
                    }
                    else if(strcmp(b, "A-") == 0)
                    {
                        rd = fopen("am.txt", "w");
                    }
                    else if(strcmp(b, "B+") == 0)
                    {
                        rd = fopen("bp.txt", "w");
                    }
                    else if(strcmp(b, "B-") == 0)
                    {
                        rd = fopen("bm.txt", "w");
                    }
                    else if(strcmp(b, "AB+") == 0)
                    {
                        rd = fopen("abp.txt", "w");
                    }
                    else if(strcmp(b, "AB-") == 0)
                    {
                        rd = fopen("abm.txt", "w");
                    }
                    else if(strcmp(b, "O+") == 0)
                    {
                        rd = fopen("op.txt", "w");
                    }
                    else
                    {
                        rd = fopen("om.txt", "w");
                    }
                    tf = fopen("ft.txt", "r");
                    while(fread(&p, sizeof(p), 1, tf))
                    {
                        fwrite(&p, sizeof(p), 1, rd);
                    }
                    fclose(rd);
                    fclose(tf);
                    system("CLS");
                    printf("\nSuccessfully Update............\n");
                }

                else
                {
                    printf("Blood is not Available\n");
                }

            }
            else
            {
                printf("\nYou Enter Wrong Keyword......\n\n");
            }
        }
    }
    else
    {
        system("CLS");
        printf("Your UserID or Password Is incorrect!!!\n\n\n");
        int n;
        printf("Enter 1 For Continue or Enter 2 For End This System : ");
        scanf("%d", &n);

        if(n == 1)
        {
            system("CLS");
            return main();
        }
        else
        {
            system("CLS");
            printf("Goodbye...\n\n");
            return 0;
        }
    }
}

