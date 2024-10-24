//
// Created by alexa on 21/10/2024.
//

#ifndef ITEM_H
#define ITEM_H
#include <string>


class Item {
    protected:
    std::string m_name;
    public:
    Item(const std::string &name) ;
    ~Item();
    void show() const;
};



#endif //ITEM_H
