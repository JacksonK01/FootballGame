//
// Created by jkirc on 6/7/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H



class Rectangle {
public:
    Rectangle(int x, int y, int width, int height);
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;
    bool intersects(const Rectangle& other) const;
private:
    int x, y;
    int width, height;
};



#endif //RECTANGLE_H
