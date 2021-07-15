#include <gdiplusgraphics.h>
main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "");
    setcolor(5);
    circle(200, 100, 50);
    setcolor(15);
    rectangle(300, 50, 400, 100);
    setcolor(55);
    line(450, 34, 577, 78);
    setcolor(9);
    ellipse(350, 110, 20, 764697135, 45, 80);
    getch();
    closegraph();
}
