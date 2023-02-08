#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area_cal(int a, int b, int c){
    double p = (a+b+c)/2.0;
    return (sqrt(p*(p-a)*(p-b)*(p-c)));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double *area = malloc(sizeof(double) * n);
    for(int i=0; i<n; i++){
        struct triangle t = tr[i];
        area[i] = area_cal(t.a, t.b, t.c);
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(area[j]>area[j+1]){
                double tmp = area[j];
                area[j] = area[j+1];
                area[j+1] = tmp;
                
                struct triangle t = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = t;
            }
        }
    }
    free(area);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}