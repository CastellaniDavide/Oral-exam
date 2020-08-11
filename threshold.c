#include <stdio.h>
#include <assert.h>

/**
WARNING!
Please check carefully this template!
To achieve full score in this problem, this template ***needs to be adjusted***. 
**/

#define MAXN 10000

int G[MAXN];

int main() {
    FILE *fr, *fw;
    int N, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &G[i]));

    // insert your code here
    for (i=0; i<=100; i++)
        fprintf(fw, "%d ", 42);

    fclose(fr);
    fclose(fw);
    return 0;
}
