#ifndef CPP_HORIZONTALLAYOUT_H
#define CPP_HORIZONTALLAYOUT_H

#include "Layout.h"

class HorizontalLayout : public Layout {
public:
    HorizontalLayout(const commander_list &children, const string &className = "HorizontalLayout") : Layout(children,
                                                                                                            className) {
    }
};

#endif
