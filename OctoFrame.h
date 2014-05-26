#ifndef OCTOFRAME_H
#define	OCTOFRAME_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/statline.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/listbox.h>
#include <wx/gauge.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/log.h>
#include <wx/listctrl.h>

#include "Controller.h"
#include "OctoImage.h"

class OctoFrame : public wxFrame
{
private:
    Controller * list;
protected:
    wxStatusBar * StatusBar;
    wxPanel * PanelDefault;
    wxStaticLine * line_menu;
    wxScrolledWindow * ImageScroll;
    wxStaticBitmap * Image;
    wxListCtrl * listpost;
    wxStaticBitmap * ImageTransform;
    wxBoxSizer * BoxImageScroll;
    wxListBox * m_listBox1;
    wxStaticLine * Divisor;
    wxGauge * m_gauge1;
    wxButton * ButtomPrevious;
    wxButton * ButtomNext;
    wxMenuBar * Menu;
    wxMenu * MenuFile;
    wxMenu * Help;
    void recarregar(wxCommandEvent& event);
    void showpost(wxCommandEvent& event);
public:
    OctoFrame(wxWindow * parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("OctoGAG"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(800, 450), long style = wxCAPTION | wxCLOSE_BOX | wxMINIMIZE_BOX | wxSYSTEM_MENU | wxTAB_TRAVERSAL);
    std::vector <std::map<std::string, std::string> > parsed;
    bool firstload();
    void LoadingStart();
    void LoadingStop();
};

#endif	/* OCTOFRAME_H  */