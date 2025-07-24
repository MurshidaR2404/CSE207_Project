#ifndef FACULTY_H
#define FACULTY_H

enum designation{
    LECTURER = 0,
    SENIOR_LECTURER,
    ASSISTANT_PROFESSOR,
    PROFESSOR,
};

typedef struct faculty{
    char *name;
    char *id;
    int designtaion;
}faculty;

void addfaculty();

#endif