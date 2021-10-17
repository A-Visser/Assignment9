#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct person { char name[10]; int height;};

void print_person(struct person *p){
  printf("name: %s\theight: %d cm\n", p->name, p->height);
}
struct person * make_person(char n[10], int h) {

  struct person *m = malloc(sizeof(struct person));

  strcpy(m->name, n);
  m->height = h;
  return m;
}
int main(){
  struct person *y = make_person("Tim", 100);
  print_person(y);
  free(y);
  struct person *t = make_person("Bill", (int)((double)100+((double)rand())/32767*100));
  print_person(t);
  free(t);
  return 0;
}
