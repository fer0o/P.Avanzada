#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);
    int X = X0;
    int Y = Y0;
    char *direction;
    int left= 0, right= W + 1, down= H + 1, up= 0;

    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);
        
        direction = bombDir;
        while(*direction != '\0'){
            
            if(*direction == 'D'){
                up = Y + 1;
                Y += (down - Y) / 2;
                
                }
            else if(*direction == 'U')
            {
                down = Y;
                Y -= (Y - up) / 2 + 1;
                }
            else if(*direction == 'R')
            {
                left = X + 1;
                X +=(right - X) / 2;
                
                }
            else if(*direction == 'L')
            {
                right = X;
                X -= (X - left) / 2 + 1;
                
                
                }
                direction++;
            
            }

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");


        // the location of the next window Batman should jump to.
        printf("%d %d\n", X, Y);
    }

    return 0;