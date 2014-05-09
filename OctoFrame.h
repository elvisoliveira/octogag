#ifndef OCTOFRAME_H
#define	OCTOFRAME_H

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

class OctoFrame : public wxFrame {
private:

protected:
    wxStatusBar* StatusBar;
    wxPanel* PanelDefault;
    wxStaticLine* m_staticline4;
    wxScrolledWindow* ImageScroll;
    wxStaticBitmap* Image;
    wxListBox* m_listBox1;
    wxStaticLine* Divisor;
    wxGauge* m_gauge1;
    wxButton* ButtomPrevious;
    wxButton* ButtomNext;
    wxMenuBar* Menu;
    wxMenu* MenuFile;
    wxMenu* Help;

    void recarregar(wxCommandEvent& event);


public:

    OctoFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("OctoGAGssssss"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 500), long style = wxCAPTION | wxCLOSE_BOX | wxMINIMIZE_BOX | wxSYSTEM_MENU | wxTAB_TRAVERSAL);

};

#endif	/* OCTOFRAME_H */

