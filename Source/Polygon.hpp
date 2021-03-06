//
//  Polygon.hpp
//  Lab02_Object_Coloring
//
//  Created by Huy Nguyen Ngoc Minh on 5/2/20.
//  Copyright © 2020 Huy Nguyen Ngoc Minh. All rights reserved.
//

#ifndef Polygon_hpp
#define Polygon_hpp

#define GL_SILENCE_DEPRECATION
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

#include "Config.hpp"
#include "Object.hpp"
#include "Point.hpp"

class Polygon : public Object {
public:
    static vector<Point> currentPoints;
    vector <Point> points;
    void getParameters(Point start_point, Point end_point) override;
    void draw() override;
    static void handleInsertPoint(int button, int state, int x, int y);
};


#endif /* Polygon_hpp */
