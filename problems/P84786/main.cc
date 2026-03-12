#include <typeinfo>
#include <iostream>
#include <string>
using namespace std;


void move(Point& p1, const Point& p2);
void scale(Circle& c, double sca);
void move(Circle& c, const Point& p);
bool is_inside(const Point& p, const Circle& c);


int main() {

  {   // vigilar el tipus Punt

        struct Punt_cntrl {
            double x, y;
        };

        Point ru;
        Punt_cntrl rc;

        // diagnostics en temps de compilacio
        ru.x = rc.x;
        ru.y = rc.y;

        // diagnostics en temps d'execucio
        if (sizeof(ru)!=sizeof(rc))     throw string("It seems that 'Point' is not well defined");
        if (typeid(ru.x)!=typeid(rc.x)) throw string("It seems that 'Point.x' is not well defined");
        if (typeid(ru.y)!=typeid(rc.y)) throw string("It seems that 'Point.y' is not well defined");
  }

  {   // vigilar el tipus Cercle

        struct Cercle_cntrl {
            Point centre;
            double radi;
        };

        Circle ru;
        Cercle_cntrl rc;

        // diagnostics en temps de compilacio
        ru.center = rc.centre;
        ru.radius = rc.radi;

        // diagnostics en temps d'execucio
        if (sizeof(ru)!=sizeof(rc))               throw string("It seems that 'Circle' is not well defined");
        if (typeid(ru.center)!=typeid(rc.centre)) throw string("It seems that 'Circle.center' is not well defined");
        if (typeid(ru.radius)!=typeid(rc.radi))     throw string("It seems that 'Circle.radius' is not well defined");
  }


  cout.setf(ios::fixed);
  cout.precision(4);

  string s;
  double x1, y1, radi, sca, x2, y2, x3, y3;
  while (cin >> s >> x1 >> y1 >> radi >> s >> s >> sca
             >> s >> x2 >> y2 >> s >> x3 >> y3) {
      Circle c;
      c.center.x = x1;
      c.center.y = y1;
      c.radius = radi;
      scale(c, sca);
      cout << c.center.x << " " << c.center.y << " " << c.radius << endl;

      c.center.x = x1;
      c.center.y = y1;
      c.radius = radi;
      Point p;
      p.x = x2;
      p.y = y2;
      move(c, p);
      cout << c.center.x << " " << c.center.y << " " << c.radius << endl;

      c.center.x = x1;
      c.center.y = y1;
      c.radius = radi;
      Point q;
      q.x = x3;
      q.y = y3;
      cout << is_inside(q, c) << endl;

      move(q, p);
      cout << q.x << " " << q.y << endl;
      cout << endl;
  }
  return 0;
}
