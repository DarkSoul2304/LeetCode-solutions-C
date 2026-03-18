///////Write a function to find the longest common prefix string amongst an array of strings.
/////If there is no common prefix, return an empty string "".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    
    if(strsSize == 0){
        char *empty = malloc(sizeof(char));
        empty[0]='\0';
        return empty;
    }

    for(int i=0; strs[0][i]!='\0'; i++){
        char currentChar = strs[0][i];
        for(int j=1; j<strsSize; j++){
            if (strs[j][i] == '\0' || strs[j][i] != currentChar){
                char *result = malloc((i+1)*sizeof(char));
                strncpy(result, strs[0], i);
                result[i] = '\0';
                return result;

            }
        }
    }
    char *result = malloc((strlen(strs[0]) + 1) * sizeof(char)); ///przypadekk gdy wszystkie dlowa identyczne
    strcpy(result, strs[0]);
    return result;
}
