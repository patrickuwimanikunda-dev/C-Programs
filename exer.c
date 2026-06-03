#include <stdio.h>

typedef struct{
    char name[50];
    int age;
} Person;

void bubble_sort(Person arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j].age>arr[j+1].age){
                Person temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};
void print_team(Person arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d] %-10s age: %d\n", i, arr[i].name, arr[i].age);
    }
    printf("\n");
}
int main(){
    Person p[5] = {
        {"Patrick", 23},
        {"Pateq", 53},
        {"Pazzo", 43},
        {"John", 21},
        {"Doe", 75}
    };
    printf("Before sorting\n");
    print_team(p, 5);
    bubble_sort(p, 5);
    printf("after sorting\n");
    print_team(p, 5);
}