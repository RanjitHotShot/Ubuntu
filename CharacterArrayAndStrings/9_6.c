#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char a[100], key[10], nkey[10];
    char store[100]; // Increased array size for store
    int flag = 0, k = 0;
    
    printf("Enter the sentence : ");
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = 0;
    
    printf("Enter the key to be searched : ");
    scanf(" %s", key);
    
    printf("Enter the newkey to be inserted : ");
    scanf(" %s", nkey);
    
    for(int i = 0; a[i] != '\0'; i++) {
        if(a[i] == ' ' || a[i] == '\0') {
            store[k] = '\0'; // Null-terminate the store array
            if(strcmp(store, key) == 0) {
                flag = 1;
                printf("%s ", nkey); // Print the new word
            } else {
                printf("%s ", store); // Print the original word if not replaced
            }
            k = 0; // Reset k for the next word
        } else {
            store[k] = a[i];
            k++;
        }
    }

    if(flag == 0) {
        printf("The word is not present in the string.\n");
    }

    return 0;
}
