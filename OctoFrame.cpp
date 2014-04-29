#include "OctoFrame.h"

OctoFrame::OctoFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style) {
    
    this->SetSizeHints(wxSize(500, 300), wxSize(500, 300));

    m_statusBar1 = this->CreateStatusBar(1, wxST_SIZEGRIP, wxID_ANY);
    wxBoxSizer* bSizer4;
    bSizer4 = new wxBoxSizer(wxVERTICAL);

    m_panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer* bSizer5;
    bSizer5 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer7;
    bSizer7 = new wxBoxSizer(wxVERTICAL);

    m_scrolledWindow1 = new wxScrolledWindow(m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
    m_scrolledWindow1->SetScrollRate(5, 5);
    bSizer7->Add(m_scrolledWindow1, 1, wxEXPAND | wxALL, 5);

    m_bitmap1 = new wxStaticBitmap(m_panel2, wxID_ANY, wxBitmap(wxT("tech.jpg"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
    bSizer7->Add(m_bitmap1, 0, wxALL, 5);


    bSizer5->Add(bSizer7, 1, wxEXPAND, 5);

    m_staticline1 = new wxStaticLine(m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    bSizer5->Add(m_staticline1, 0, wxEXPAND | wxRIGHT | wxLEFT, 5);

    wxBoxSizer* bSizer6;
    bSizer6 = new wxBoxSizer(wxHORIZONTAL);

    m_button2 = new wxButton(m_panel2, wxID_ANY, wxT("Previous"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer6->Add(m_button2, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

    m_button3 = new wxButton(m_panel2, wxID_ANY, wxT("Next"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer6->Add(m_button3, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

    bSizer5->Add(bSizer6, 0, wxALIGN_RIGHT, 5);

    m_panel2->SetSizer(bSizer5);
    m_panel2->Layout();
    bSizer5->Fit(m_panel2);
    bSizer4->Add(m_panel2, 1, wxEXPAND | wxALL, 5);


    this->SetSizer(bSizer4);
    this->Layout();

    this->Centre(wxBOTH);
}

OctoFrame::~OctoFrame() {
}