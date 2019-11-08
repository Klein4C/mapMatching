#ifndef MATCH_H
#define MATCH_H

class Point3D
{
    public:
        float coord[3];
        string label = "UNKNOWN";
};

class Point2D
{
    public:
        float coord[3];
        string label = "UNKNOWN";
        Point2D *north = NULL;
        Point2D *south = NULL;
        Point2D *east = NULL;
        Point2D *west = NULL;
};

class RefGrid
{
    public:
    
};

class Grid
{
    public:
         

};


#endif