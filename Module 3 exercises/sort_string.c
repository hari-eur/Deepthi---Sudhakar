//input
// Enter a string: 123434acibdf295869asdsd37695dfgasd
// output
// Sorted string: 123344abcdfi256899addss35679addfgs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char* sort_string(char* str){
    int len = strlen(str);
    char** substrs = malloc(len * sizeof(char*));
    int n_subsets = 0;
    for (int i = 0; i < len; ){
        int j = i;
        while (j < len && isdigit(str[j]) == isdigit(str[i])){
            j++;
        }
        substrs[n_subsets] = malloc((j - i + 1) * sizeof(char));
        strncpy(substrs[n_subsets], &str[i], j - i);
        substrs[n_subsets][j - i] = '\0';
        i = j;
        n_subsets++;
    }

    for (int i = 0; i < n_subsets; i++){
        int len = strlen(substrs[i]);
        for (int j = 0; j < len; j++){
            for (int k = j + 1; k < len; k++){
                if (substrs[i][j] > substrs[i][k]){
                    char temp = substrs[i][j];
                    substrs[i][j] = substrs[i][k];
                    substrs[i][k] = temp;
                }
            }
        }
    }

    char* sorted_str = malloc((len + 1) * sizeof(char));
    int index = 0;
    for (int i = 0; i < n_subsets; i++){
        int len = strlen(substrs[i]);
        strncpy(&sorted_str[index], substrs[i], len);
        index += len;
        free(substrs[i]);
    }
    sorted_str[len] = '\0';
    free(substrs);
    return sorted_str;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char* sorted_str = sort_string(str);
    printf("Sorted string: %s\n", sorted_str);;
    return 0;
}

