#include <stdio.h>
int main(int argc, char **argv){
    char *fileName ="myfile.txt";
    char *search ="asd";
    char *replace ="holaaaaaa";
    int character;
    char isReplaced =0;
    long streamPos = 0;
    int i =0;
    FILE *myFile = fopen (fileName, "r");
    while (1){
        character = fgetc(myFile);
        streamPos = ftell(myFile);
        if(feof(myFile)){
            break;
        }

        if (character == search [0]){
            i=0;
            while (!feof(myFile) && search[i] == character){
                character =fgetc(myFile);
                i++;
            }
            if(feof(myFile)){
                break;
            }
            if(i == strlen(search)){
                //printf("MATCH \n");
                fputc(replace,stdout);
                isReplaced =1;
                fseek(myFile, -1, SEEK_CUR);
            }else{
                //rewind
                fseek(myFile,streamPos, SEEK_SET);
            }
        }
        //fputc(character, stdout);
        if(!isReplaced) {
            fputc(character, stdout);
        }
        isReplaced=0;

    }
    fclose(myFile);
return 0;




}