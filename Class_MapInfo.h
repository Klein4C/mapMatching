#ifndef MAP_INFO_H
#define MAP_INFO_H

// include block
#include <string>
#include <vector>

using namespace std;

// ----v----class define block----v----
class OSMnode
{
    public:
        bool isRef = false; // if isRef then 'num' will be 'ref' o.w. 'id'
        int num = 0;
        double lat = 0.0;
        double lon = 0.0;
        // OSMtag tag; // this tag is only for storeing node name though TAG is extendable
};
// arr/vec of OSMnode should be allocated to store all nodes in region

class OSMtag
{
    public:
        string k;
        string v;
};

class OSMway
{
    public:
        int wayId = 0;
        vector<OSMnode> wayNodeList;
        string wayName:
};


// Relation is probably not used so is not implemented
class OSMrelation
{};

#endif