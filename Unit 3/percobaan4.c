#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }
    
    return 0;
}

/*

Bisakah kamu menjelaskan bagaimana program diatas bekerja?

di define MAX_PERSONS == 3
di define MAX_NAME_LENGTH == 20

di buat array 2D sebesar 3 x 20 = 60 char
berisi

Roma
Romi
Romo

di buat array 1D sebesar 35
berisi 
25 30 35

output "Name" /tab /tab "Age" /endline
output "--------------------\n"
perulangan for dari 1 hingga 3 
output
Names[i] /tab /tab ages[i];

*/