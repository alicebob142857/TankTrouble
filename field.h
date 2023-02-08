//
// Created by zr on 23-2-8.
//

#ifndef TANK_TROUBLE_FIELD_H
#define TANK_TROUBLE_FIELD_H
#include <gtkmm/drawingarea.h>

namespace tank {
    class Field : public Gtk::DrawingArea
    {
    public:
        Field();
    private:
        //Override default signal handler:
        bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
        bool on_timeout();
    };
}

#endif //TANK_TROUBLE_FIELD_H
