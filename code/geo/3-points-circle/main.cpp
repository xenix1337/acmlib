/*
*Opis: Środek okręgu przez 3 punkty
 */
x = 0.5*((x2*x2*y3 + y2*y2*y3 - x1*x1*y3 + x1*x1*y2 - y1*y1*y3 + y1*y1*y2 + y1*x3*x3 + y1*y3*y3 - y1*x2*x2 - y1*y2*y2 - y2*x3*x3 - y2*y3*y3) / (y1*x3 - y1*x2 - y2*x3 - y3*x1 + y3*x2 + y2*x1));
y = 0.5*((-x1*x3*x3 - x1*y3*y3 + x1*x2*x2 + x1*y2*y2 + x2*x3*x3 + x2*y3*y3 - x2*x2*x3 - y2*y2*x3 + x1*x1*x3 - x1*x1*x2 + y1*y1*x3 - y1*y1*x2) / (y1*x3 - y1*x2 - y2*x3 - y3*x1 + y3*x2 + y2*x1));
