#include <stdio.h>    /* stdin, printf, and fgets */

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "a+"); //only write mode
    fprintf(fp, "This is testing for fprintf...\n"); 
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    fp = fopen("test.txt", "r");
    char ch;
    while((ch=getc(fp))!=EOF)
    putchar(ch);
    rewind(fp); //rewind () function moves file pointer position to the beginning of the file.
    fprintf(fp, "This is testing for fprintf again......\n");
    fclose(fp);
}  
