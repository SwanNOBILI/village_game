#ifndef BUILDING_H
#define BUILDING_H
#include <string>

using namespace std;

class Building{
private :
    string m_name;
public:
    Building();
    ~Building();
    void presentBuilding();
};

#endif // BUILDING_H
