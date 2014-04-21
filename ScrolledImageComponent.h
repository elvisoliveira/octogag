#include <iostream>
#include "wx/wx.h"

class ScrolledImageComponent : public wxScrolledWindow {
private:
    wxBitmap* bitmap;
    int w, h;
public:
    ScrolledImageComponent(wxWindow* parent, wxWindowID id, wxString image_path);
    void OnDraw(wxDC& dc);
};