#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)

{
   FILE *pFile;

  
   char xxx[50];


	printf("讀取內容為：\n"); 

   pFile=fopen("ray.txt", "r");

   if (pFile==NULL)

   {  

      printf("檔案開啟失敗!\n");

      exit(1); 

   }

    rewind(pFile);

    while ((fgets(xxx, 50, pFile)) != NULL)

       printf("%s", xxx);

       printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}

