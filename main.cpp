#include <iostream>

#include "wx/wx.h"
#include "wx/sizer.h"
#include "wx/stattext.h"
#include "wx/statline.h"
#include "wx/button.h"
#include "wx/dialog.h"

#include "ScrolledImageComponent.h"

class MyApp : public wxApp
{
private:
    static const long ID_STATICTEXT1;
    static const long ID_BUTTON1;
    static const long ID_STATICLINE1;
    static const long ID_BUTTON2;

    wxPoint point;
    wxSize size;
    wxFrame * frame;
    wxBoxSizer * sizer;
    ScrolledImageComponent * my_image;

    wxButton * Button1;
    wxStaticText * StaticText1;
    wxBoxSizer * BoxSizer2;
    wxButton * Button2;
    wxStaticLine * StaticLine1;
    wxBoxSizer * BoxSizer1;
public:

    bool OnInit()
    {
        // init headlers
        wxInitAllImageHandlers();
        
        // define boxsizer
        sizer = new wxBoxSizer(wxVERTICAL);
        
        // init frame
        frame = new wxFrame(NULL, -1, wxT("Scrolling an Image"), wxPoint(460, 300), wxSize(600,200), wxDEFAULT_DIALOG_STYLE);

        // add image to scrolled component
        my_image = new ScrolledImageComponent(frame, wxID_ANY, wxT("tech.jpg"));

        // add component to sizer method
        sizer->Add(my_image, 1, wxALL | wxEXPAND, 10);
        
        
        
        BoxSizer2 = new wxBoxSizer(wxVERTICAL);
        
        Button1 = new wxButton(frame, -1, _("About"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
        BoxSizer2->Add(Button1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 4);
        
        StaticLine1 = new wxStaticLine(frame, -1, wxDefaultPosition, wxSize(10, -1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
        BoxSizer2->Add(StaticLine1, 0, wxALL | wxEXPAND | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 4);
        
        Button2 = new wxButton(frame, -1, _("Quit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
        BoxSizer2->Add(Button2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 4);
        
        
        BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
        
        BoxSizer1->Add(BoxSizer2, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 4);
        
        BoxSizer1->Add(sizer, 400, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 4);

        frame->SetSizer(BoxSizer1);

        frame->Show();

        return true;
    }
};

IMPLEMENT_APP(MyApp)