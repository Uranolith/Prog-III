#ifndef PROG3_PUNKT_H
#define PROG3_PUNKT_H


class Punkt {
private:
    int x;
    int y;
public:
    Punkt(int x = 0, int y = 0);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    void print() const;
};


#endif //PROG3_PUNKT_H
