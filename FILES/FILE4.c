/*To store students information in the file*/
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("StudentINFO.txt", "w");
    if (fptr == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    char c[100];
    int roll;
    float cgpa;
    printf("Enter the name of the student: ");
    fgets(c, 100, stdin);
    fprintf(fptr, "%s\n", c);
    printf("Enter the roll number: ");
    scanf("%d", &roll);
    fprintf(fptr, "%d\n", roll);
    printf("Enter the CGPA: ");
    scanf("%f", &cgpa);
    fprintf(fptr, "%.2f\n", cgpa);
    fclose(fptr);
    
    return 0;
}
