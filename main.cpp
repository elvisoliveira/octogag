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
    wxBoxSizer * boxSizer;
    ScrolledImageComponent * image;

    wxButton * btnAbout;
    wxBoxSizer * boxMenu;
    wxButton * btnQuit;
    wxBoxSizer * boxMain;
public:

    bool OnInit()
    {
        // init image headlers
        wxInitAllImageHandlers();

        // init frame
        frame = new wxFrame(NULL, wxID_ANY, wxT("OctoGAG"), wxDefaultPosition, wxSize(625, 305), wxDEFAULT_DIALOG_STYLE);

        // add image to scrolled component
        image = new ScrolledImageComponent(frame, wxID_ANY, wxT("tech.jpg"));

        // define boxsizer
        boxSizer = new wxBoxSizer(wxVERTICAL);
        
        // add component to sizer method
        boxSizer->Add(image, 1, wxALL, 5);

        boxMenu = new wxBoxSizer(wxVERTICAL);
        
        // About
        btnAbout = new wxButton(frame, 0, wxT("About"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("about"));
        boxMenu->Add(btnAbout, 1, wxALL, 5);
        
        // Separator
        boxMenu->Add(new wxStaticLine(frame, 0, wxDefaultPosition, wxSize(0, 25)), 0, wxEXPAND | wxALL, 4);
        
        // Quit
        btnQuit = new wxButton(frame, 0, wxT("Quit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("quit"));
        boxMenu->Add(btnQuit, 1, wxALL, 5);
        
        
        boxMain = new wxBoxSizer(wxHORIZONTAL);
        
        boxMain->Add(boxMenu, 0, wxALL, 5);
        
        boxMain->Add(boxSizer, 0, wxALL, 5);

        frame->SetSizer(boxMain);

        frame->Show();

        return true;
    }
};

IMPLEMENT_APP(MyApp)