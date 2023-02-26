#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

const char* PERSON_FORMAT_IN = "{\"name\": \"%[^,]\", \"age\": %d, \"gender\": \"%c\"} \n";
const char* PERSON_FORMAT_OUT = "{\"name\": \"%s\", \"age\": %d, \"gender\": \"%c\"} \n";

typedef struct {
    char name[20];
    int age;
    char gender;
} Person;

int main(int argc, char* argv[]) {
    Person p1 = {
        .name = "Andrew",
        .age = 22,
        .gender = 'M'
    };
    Person p2 = {
        .name = "Imp",
        .age = 5,
        .gender = 'C'
    };
    
    FILE* file = fopen("card.json", "w+");
    if (file == NULL) {
        return 1;
    }



















    
    fprintf(file, PERSON_FORMAT_OUT, p1.name, p1.age, p1.gender);
    fseek(file, 0, SEEK_SET);
    fscanf(file, PERSON_FORMAT_IN, p1.name, &p1.age, &p1.gender);


    
    fprintf(file, PERSON_FORMAT_OUT, p2.name, p2.age, p2.gender);
    fseek(file, 0, SEEK_SET);
    fscanf(file, PERSON_FORMAT_IN, p2.name, &p2.age, &p2.gender);
    
    return 0;
}