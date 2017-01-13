#include<stdio.h>
#include<string.h>
void integer();
void phone();
void name();
void dob();
void standard();

main()
{
    printf("        CP MINI PROJECT\n\n\n");
    printf("        SCHOOL IDENTITY CARD\n\n\n\n");
    integer();
    name();
    phone();
    dob();
    standard();
    return(0);
}

void integer() //ROLL NO
{
     char check[9999];
     int length;
    printf("ENTER ROLL NO (eg-123456)\n");//giving formatt
    gets(check);
    length=strlen(check);
    if(!(length==6))//checking conditon for length
    {
        printf("Entered roll no is invalid\n");
        integer();
    }
    else
    {
    int i,z=0;
    for(i=0;check[i]!='\0';i++)//checking validity of data
    {
        if(!(( check[i]>=48 ) && (check[i]<=57))) //compairing ascii values
        {
            z=1;
        }
    }
    if (z==1) //applying condition
    {
        printf("Entered roll no is invalid\n");
        integer();
        return;
    }

    if (z==0) //applying condition
    {
        printf("ROLL NO-- %s\n",check);
        return;
    }

}
}
  void phone() //MOBILE NO
   {
      char mobile[9999];
      int length;
      printf("ENTER MOBILE NO\n");
      gets(mobile);
      length=strlen(mobile);
            if(length!=10) //checking length
            {

                 printf("INVALID NO\n");
                 phone();
            }
            else
            {
                       int i,z=0;
                         for(i=0;mobile[i]!='\0';i++) //checking validity of data
                      {
                       if(!(( mobile[i]==48 )|| (mobile[i]==49) || (mobile[i]==50) || (mobile[i]==51) || (mobile[i]==52) || (mobile[i]==53) || (mobile[i]==54) || (mobile[i]==55)|| (mobile[i]==56) || (mobile[i]==57))) //compairing ascii values
                      {
                          z=1;
                      }
                      }
                        if (z==1) //applying condition
                       {
                        printf("Entered mobile no -is invalid\n");
                          phone();
                            return;
                         }

                       if (z==0) //applying condition
                                  {
                                       printf("MOBILE NO -- %s \n",mobile);
                                      return;
                                   }

                   }
   }
   void name() //NAME
   {
       char check[100];
       int flag=0;
      printf("ENTER YOUR NAME\n");
    gets(check);//taking input from user
    int i,z=0;
    for(i=0;check[i]!='\0';i++) //checking validity of data
    {
        if(((( check[i]>='a' ) && (check[i]<='z')) || (check[i]==' '))|| (( check[i]>='A' ) && (check[i]<='Z'))) //compairing ascii values
        {
            if(check[i]==' ') //condition for if only space is given
                flag =1;
            else
                flag=0;
            z++;
        }
    }
    if (z==i && !flag) //checking condition
    {
        printf("NAME == %s\n",check); //valid
        return;
    }

    else
    {
        printf("INVALID\n");//invalid
        name();//calling again
        return;
    }

}
void dob()//DATE OF BIRTH
{
char d[100];
int i,length,date,month,year;
printf("ENTER DATE OF BIRTH IN (dd/mm/yyyy) FORMATT\n");//giving formatt
gets(d);
length=strlen(d);
    if(!(length==10)) //checking length
    {
       printf("INVALID DATE OF BIRTH\n");
       dob();
    }
    else
    {
       if(!((d[2]=='/') && (d[5]=='/'))) //checking for "/"
       {
          printf("INVALID DATE OF BIRTH\n"); //invalid
          dob();
       }
       else
       {
          date = ( (d[0]-48)*10 + (d[1]-48) ); //converting character into integer by substracting from ascii value of zero
          month = ( (d[3]-48)*10 + (d[4]-48) );//converting character into integer by substracting from ascii value of zero
          year = ( ((d[6]-48)*1000 )+ ((d[7]-48)*100) + ((d[8]-48)*10) + (d[9]-48) );//converting character into integer by substracting from ascii value of zero
             if(!((month>=1) && (month<=12))) //checking range of month
             {
                printf("INVALID DATE OF BIRTH\n");
                dob();
             }
             else
             {
                if((month%2)!=0 ) //checking for odd months
                   {
                     if(date>31)
                     {
                       printf("INVALID DATE OF BIRTH\n");
                       dob();
                     }
                   }
                 else// otherwise for even months
                 {
                    if(date>30)
                    {
                      printf("INVALID DATE OF BIRTH\n");
                      dob();
                    }
                  }

                if((year%4)==0) //for leap year
                {
                  if(month==02) //for febraury
                  {
                    if(date>29)
                    {
                       printf("INVALID DATE OF BIRTH\n");
                       dob();
                    }
                    else
                    {
                       printf("DATE OF BIRTH=%s\n",d);
                    }
                  }
                  else //for other months
                  {
                       printf("DATE OF BIRTH=%s\n",d);
                  }
                 }
                 else //other than leap year
                 {
                     if(month==02) //feb
                     {
                       if(date>28)
                       {
                           printf("INVALID DATE OF BIRTH\n");
                           dob();
                       }
                       else
                       {
                           printf("DATE OF BIRTH=%s\n",d);
                       }
                     }
                     else
                        printf("DATE OF BIRTH=%s\n",d);
                 }
                 }

             }

}
}
void standard()
{
    char c[100];
  printf("ENTER YOUR CLASS (eg--12)\n");
  gets(c);
  int i,z=0,class;
     class=(((c[0]-48)*10) + (c[1]-48) );

    for(i=0;c[i]!='\0';i++)//checking validity of data
    {
        if(!(( (c[i]>=48 ) && (c[i]<=57) ))) //compairing ascii values
        {
            z=1;
        }
    }
    if (z==1) //applying condition
    {
        printf("Entered class is invalid\n");
        standard();
        return;
    }
     if(!((class>=1)&&(class<=12)))  //checking range
     {
         printf("Entered class is invalid\n");
         standard();
     }
     else
     {
          printf("CLASS-- %s\n",c);
        return;
     }


}




