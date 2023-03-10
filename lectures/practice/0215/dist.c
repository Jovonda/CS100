#include <stdio.h>
#include <math.h>
//4 = x1, 2 = y1, -2 = x2, 10= y2
double distance(int x1, int y1, int x2, int y2);

int main(void)
{
        int x1, y1, x2, y2;
        printf("Enter two integers for point #1: ");
        //Do not put a space after %d
        scanf("%d%d",&x1, &y1 );
        printf("Enter two integers for point #2: ");
        scanf("%d%d",&x2, &y2);

        double d = distance(2*(x1-1), 2*(y1+1), 2*(x2-1), 2*(y2+1));
        //4 = x1, 2 = y1, -2 = x2, 10= y2
        // can use %lf or %g
        printf("The distance is %g\n",d ); //10
        return 0;
}
//4 = x1, 2 = y1, -2 = x2, 10= y2
double distance(int x1, int y1, int x2, int y2)
{
        int dx = x2-x1; // 6
        int dy = y2-y1; //8
        double d = sqrt(dx * dx + dy * dy); // 10
        return d;
}
