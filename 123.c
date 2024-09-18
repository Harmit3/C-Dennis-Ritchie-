// The primary goal of this code is to demonstrate the implementation of
// a basic student management system using linked lists, focusing on functionality,
// memory management, and maintaining sorted order of student records.
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct snode {
    int id;
    char *name;
    struct snode *next;
};

struct slist {
    struct snode *front;
};

// Function prototypes
bool is_sorted(struct slist *lst);
struct slist *create_list();
bool insert_student(int id, char name[], struct slist *lst);
bool remove_student(int id, struct slist *lst);
char *find_student(int id, struct slist *lst);
void free_list(struct slist *lst);

struct slist *create_list() {
    struct slist *lst = (struct slist *)malloc(sizeof(struct slist));
    lst->front = NULL;
    return lst;
}

bool is_sorted(struct slist *lst) {
    if (lst == NULL || lst->front == NULL)
        return true;

    struct snode *current = lst->front;
    while (current->next != NULL) {
        if (current->id > current->next->id)
            return false;
        current = current->next;
    }
    return true;
}

bool insert_student(int id, char name[], struct slist *lst) {
    if (find_student(id, lst) != NULL)
        return false;

    struct snode *new_node = (struct snode *)malloc(sizeof(struct snode));
    new_node->id = id;
    new_node->name = strdup(name);
    new_node->next = NULL;

    if (lst->front == NULL || lst->front->id > id) {
        new_node->next = lst->front;
        lst->front = new_node;
        assert(is_sorted(lst));
        return true;
    }

    struct snode *current = lst->front;
    while (current->next != NULL && current->next->id < id)
        current = current->next;

    new_node->next = current->next;
    current->next = new_node;
    assert(is_sorted(lst));
    return true;
}

bool remove_student(int id, struct slist *lst) {
    struct snode *current = lst->front;
    struct snode *prev = NULL;

    while (current != NULL && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return false;

    if (prev == NULL)
        lst->front = current->next;
    else
        prev->next = current->next;

    free(current->name);
    free(current);
    assert(is_sorted(lst));
    return true;
}

char *find_student(int id, struct slist *lst) {
    struct snode *current = lst->front;
    while (current != NULL) {
        if (current->id == id)
            return strdup(current->name);
        current = current->next;
    }
    return NULL;
}

void free_list(struct slist *lst) {
    struct snode *current = lst->front;
    while (current != NULL) {
        struct snode *temp = current;
        current = current->next;
        free(temp->name);
        free(temp);
    }
    free(lst);
}

int main() {
    struct slist *lst = create_list();
    char command[10];
    int id;
    char name[31];

    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "insert") == 0) {
            scanf("%d %s", &id, name);
            if (insert_student(id, name, lst))
                printf("success\n");
            else
                printf("failure\n");
        } else if (strcmp(command, "remove") == 0) {
            scanf("%d", &id);
            if (remove_student(id, lst))
                printf("success\n");
            else
                printf("failure\n");
        } else if (strcmp(command, "find") == 0) {
            scanf("%d", &id);
            char *found = find_student(id, lst);
            if (found != NULL) {
                printf("%s\n", found);
                free(found);
            } else {
                printf("failure\n");
            }
        } else if (strcmp(command, "free") == 0) {
            free_list(lst);
            break;
        }
        assert(is_sorted(lst));
    }

    return 0;
}
