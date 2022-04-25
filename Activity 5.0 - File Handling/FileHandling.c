#include <stdio.h>
#include <stdlib.h>
int main(){
    char fileLoc[100];
    char *words[10][10];
    FILE *file;
    int lines;
    printf("Input the file location: ");
    scanf("%[^\n]s",fileLoc);
    printf("Input How many lines to be appended: ");
    scanf("%d",&lines);
    file = fopen(fileLoc,"a+");
    for(int i = 0; i<lines; i++){
        char temp[100];
        scanf("%s",temp);
        words[i][0] = temp;
        fprintf(file,"%s\n",words[i][0]);
    }
    fclose(file);
    return 0;
}