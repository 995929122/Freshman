#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct array {
    char a[1001];
    int len;
};


int cmp(const void *a,const void *b){
    struct array *c = (struct array *)a;
    struct array *d = (struct array *)b;
    if(c->len != d->len){
        return c->len - d->len;
    }
    else{
        return strcmp(c->a,d->a);
    }
}


int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        struct array a[200];
        for(int i=0;i<n;i++){
            scanf("%s",a[i].a);
            a[i].len=strlen(a[i].a);
        }
        qsort(a,n,sizeof(a[0]),cmp);
        for(int i=0;i<n;i++){
            printf("%s\n",a[i].a);
        }
    }
    return 0;
}
