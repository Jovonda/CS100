#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Always add ; at the end of struct
//This is like an object
//underscore '_' is to avoid dubplicate and conflict
typedef
        struct _point
{
        int x;
        int y;
}Point; // varible name is in lower case, datatype is in upper case
// p1 is the same as int x and int y
// p2 is the same as int x and int y
//double distance(int x1, int y1, int x2, int y2);
// p1 is the same as int x and int y
// p2 is the same as int x and int y
//The typedef lets you get rid of struct point and use just Point
//double distance(struct point p1, struct point p2);
double distance(Point *p1, Point *p2);
Point *getPoint(char prompt[]);
int main(void)
{
        //int x1, y1, x2, y2;
        //printf("Enter two integers for point #1: ");
        //Do not put a space after %d
        //scanf("%d%d",&x1, &y1 );
        //printf("Enter two integers for point #2: ");
        //scanf("%d%d",&x2, &y2);

        //double d = distance(x1, y1, x2, y2);
        Point *p1 =getPoint("Enter two integers for point #1: ");
        Point *p2 =getPoint("Enter two integers for point #2: ");

        double d = distance(p1,p2);

        // can use %lf or %g
        printf("The distance is %g\n",d );
        free(p1);
        free(p2);
        return 0;
}
Point *getPoint(char prompt[])
{
        Point *p = malloc(sizeof(Point));
        printf("%s",prompt);
        scanf("%d%d", &p->x, &p->y);
        return p;
}
double distance(Point *p1, Point *p2)
{
        // int dx = x2-x1;
        // int dy = y2-y1;
        int dx = p2->x-p1->x;
        int dy = p2->y-p1->y;
        double d = sqrt(dx * dx + dy * dy);
        return d;
}
