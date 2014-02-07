#include <stdio.h>
#include <string.h>

    struct datum {
      int   dag, maand, jaar;
      char   dag_naam[4];   // maa, din, woe, don, vrij, zat, zon
      char   maand_naam[4]; // jan, feb, mrt, apr, mei, jun, ..
      };
      
    void changeDate(struct datum * date);
    void printDate(struct datum * date);

      int main()
      {
        //printf("%5d%5.1 f%5d\n", a, b, c);
        struct datum  vandaag; 
        struct datum  *ptr_dag;  
        vandaag.dag = 9;
        vandaag.maand = 11;
        vandaag.jaar = 2009;
        strcpy(vandaag.dag_naam, "maa");   
        strcpy(vandaag.maand_naam, "nov");
        ptr_dag = &vandaag; 
        printDate(ptr_dag);
        changeDate(ptr_dag);
        printDate(ptr_dag);
        return 0;
      }

      void printDate(struct datum * date)
      {
        printf("Dag: %s %d\n", date->dag_naam,date->dag);
        printf("Maand: %s %d\n", date->maand_naam,date->maand);
        printf("%d\n", date->jaar);
      }


      void changeDate(struct datum * date)
      {
          struct datum * dag = date;
          dag->dag = 1;
          dag->maand = 2;
          dag->jaar = 2014;
          strcpy(dag->dag_naam, "zat");
          strcpy(dag->maand_naam, "feb");
          date = dag;      
        }