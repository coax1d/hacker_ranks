// This is an old roughed up solution this code is not a great example
// but solves the problem in C WARNING!@##!@ Bad code!!!!
#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[3][3]){
    //logic here
    // find the corner she is in
    char *princess_pos;
    char *top_left = &grid[0][0];
    char *top_right = &grid[0][n];
    char *bottom_left = &grid[n][0];
    char *bottom_right = &grid[n][n];
    char *center = &grid[n/2][n/2];
    char *up = "UP";
    char *down = "DOWN";
    char *left = "LEFT";
    char *right = "RIGHT";
    if (strcmp(top_left, "p")==0)
    {
        princess_pos = top_left;
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", up);   
        }
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", left);
        }
    }
    else if (strcmp(top_right, "p")==0)
    {
        princess_pos = top_right;
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", up);   
        }
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", right);
        }
    }
    else if (strcmp(bottom_left, "p")==0)
    {
        princess_pos = bottom_left;
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", down);   
        }
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", left);
        }
    }
    else
    {
        princess_pos = bottom_right;
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", down);   
        }
        for (int i = 0; i < n/2; i++)
        {
            printf("%s\n", right);
        }
    }
}
int main(void) {
    char grid[3][3];
    grid[0][0] = 'p';
    grid[0][3] = 'z';
    grid[3][0] = 'z';
    grid[3][3] = 'z';
    displayPathtoPrincess(3, grid);
    return 0;
}
