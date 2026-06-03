#include <stdio.h>

typedef enum{
    ENGINEER,
    DESIGNER,
    MANAGER
} Role;

typedef struct{
    char name[50];
    int age;
    Role role;
}Employee;

void print_employee(Employee e){
    printf("Name: %s\n", e.name);
    printf("Age: %d\n", e.age);
    printf("Role: ");
    switch(e.role){
        case ENGINEER: printf("Engineer\n"); break;
        case DESIGNER: printf("Designer\n");break;
        case MANAGER: printf("Manager\n");break;
    }
    printf("\n");
}

int main(){
    Employee team[3] = {
        {"Patrick", 30, DESIGNER},
        {"Pateq", 24, ENGINEER},
        {"John", 18, MANAGER,}
    };
    for(int i = 0; i<3; i++){
        print_employee(team[i]);
    }
}