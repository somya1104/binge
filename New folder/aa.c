#include <stdio.h>
#include <stdlib.h>

struct mar
{
   int tsize;
   int usize;
   int *ptr;
};

void ca(struct mar *a,int t, int u)
{
   a->tsize=t;
   a->usize= u;
   
   a->ptr=(int *)malloc(t*sizeof(int));
    if (a->ptr == NULL) {
      printf("Memory allocation failed\n");
      exit(1);
   }

}
void show(struct mar *a)
{
   for(int i=0;i<a->usize;i++)
   printf("%d\n",(a->ptr)[i]);
}
void setval(struct mar *a)
{
   int n;
   for(int i=0;i<a->usize;i++)
   {
       printf("enter :");
      scanf("%d",&n);
      (a->ptr)[i]=n;
   }
}


int main()
 {
    struct mar marks;
    ca(&marks,10,2);
    printf("calling set\n");
    setval(&marks);
    printf("calling ss");
    show(&marks); free(marks.ptr); // Free allocated memory 
    return 0;
 }
