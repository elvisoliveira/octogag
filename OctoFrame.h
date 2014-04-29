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
#include <wx/scrolwin.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/frame.h>

class OctoFrame : public wxFrame {
private:
protected:
    wxStatusBar* m_statusBar1;
    wxPanel* m_panel2;
    wxScrolledWindow* m_scrolledWindow1;
    wxStaticBitmap* m_bitmap2;
    wxStaticLine* m_staticline1;
    wxButton* m_button2;
    wxButton* m_button3;
public:
    OctoFrame(wxWindow * parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("OctoGAG"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300), long style = wxCAPTION | wxCLOSE_BOX | wxMINIMIZE_BOX | wxSYSTEM_MENU | wxTAB_TRAVERSAL);
    ~OctoFrame();
};

#endif	/* OCTOFRAME_H */

