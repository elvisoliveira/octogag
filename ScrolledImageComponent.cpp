#include "ScrolledImageComponent.h"

ScrolledImageComponent::ScrolledImageComponent(wxWindow * parent, wxWindowID id, wxString imagepath) : wxScrolledWindow(parent, id, wxPoint(0, 0), wxSize(400,180))
{
    // define image path as an object
    wxImage image(imagepath);
    // verify the image status
    if (!image.IsOk())
    {
        // if is not ok, submit the error message
        wxMessageBox(wxT("there was an error loading the image"));
    }
    else
    {
        // get file dimentions
        w = image.GetWidth();
        h = image.GetHeight();
        // init scrolled area size, scrolling speed,
        SetScrollbars(1, 1, w, h, 0, 0);
        // define the loaded image as a bitmap
        bitmap = new wxBitmap(image);
    }
}

void ScrolledImageComponent::OnDraw(wxDC& dc)
{
    dc.DrawBitmap(*bitmap, 0, 0, false);
}