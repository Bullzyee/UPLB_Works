// Structures, Files, Singly-Linked, and Doubly-Linked Lists
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//FILES AND STRUCTURES
//Structures - Creating your own data type

//Defining a Structure: 3 ways
//Using Structure tags
struct <structure_tag> {
  //members
};

//Using type-definition
typedef struct {
  //members
} <synonym>

//Using both
typedef struct <tag>{
  //members
} <synonym>;

//e.g.

struct student{
  char firstname[50];
  char lastname[30];
  int age;
  float grades[42];
  float GWA;
};

typedef struct {
  char firstname[50];
  char lastname[30];
  int age;
  float grades[42];
  float GWA;
} student;

typedef struct student{
  char firstname[50];
  char lastname[30];
  int age;
  float grades[42];
  float GWA;
} pupil;


// Declaring Structure Variables







