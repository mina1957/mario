#include<stdio.h>

#include<cs50.h>

#include<stdlib.h>



int main(void)

{

    while(true)

    {

   int Height = get_int("Height :");

   

   

     if (Height == 1) 

    {

        printf("#  #\n");

         exit(0);

       

    }      

    

    

  else if(Height == 2)

  {

      printf(" #  #\n##  ##\n"); exit(0);

  }

  else if (Height == 3)

  {

       printf("  #  #\n ##  ##\n###  ###\n"); exit(0);

  }

   else if (Height == 4)

   { 

       printf("   #  #\n  ##  ##\n ###  ###\n####  ####\n");exit(0);

   }

   else if (Height == 5)

   {

       printf("    #  #\n   ##  ##\n  ####  ####\n ####  ####\n#####  #####\n"); exit(0);  

   }

    else if (Height == 6)

    {

        printf("     #  #\n    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######\n"); exit(0);

    }

   else if (Height == 7) 

   {

       printf("      #  #\n     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######\n");exit(0);

   }

   else if (Height == 8) 

   {

       printf("       #  #\n      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########\n");exit(0);

   }

    else if (Height!=1 && Height!=2 && Height!=3 && Height!=4 && Height!=5 && Height!=6 && Height!=7 && Height!=8)

    {

        get_int("Height :");

    }

    }

    }
