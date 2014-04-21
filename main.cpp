#include <iostream>
#include "wx/wx.h"
#include "ScrolledImageComponent.h"

class MyApp : public wxApp {
private:
    wxPoint point;
    wxSize size;
    wxFrame * frame;
    wxBoxSizer * sizer;
public:

    bool OnInit() {
        // init headlers
        wxInitAllImageHandlers();
        
        // define point
        point = wxPoint(50, 50);
        // define size
        size = wxSize(650, 650);
        // define boxsizer
        sizer = new wxBoxSizer(wxHORIZONTAL);
        // init frame
        frame = new wxFrame((wxFrame *) NULL, -1, wxT("Scrolling an Image"), point, size);

        ScrolledImageComponent * my_image = new ScrolledImageComponent(frame, wxID_ANY, wxT("tech.jpg"));
        sizer->Add(my_image, 1, wxALL | wxEXPAND, 120);
        frame->SetSizer(sizer);

        frame->Show();
        
        
        return true;
    }
};

IMPLEMENT_APP(MyApp)