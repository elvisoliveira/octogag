#include "OctoFrame.h"

OctoFrame::OctoFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style) {

    // required to manipulate multiple image formats
    wxInitAllImageHandlers();

    this->SetSizeHints(wxSize(500, 500), wxSize(500, 500));

    StatusBar = this->CreateStatusBar(1, wxST_SIZEGRIP, wxID_ANY);
    wxBoxSizer* BoxDefault;
    BoxDefault = new wxBoxSizer(wxVERTICAL);

    PanelDefault = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer* BoxMain;
    BoxMain = new wxBoxSizer(wxVERTICAL);

    m_staticline4 = new wxStaticLine(PanelDefault, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    BoxMain->Add(m_staticline4, 0, wxEXPAND, 5);

    wxBoxSizer* BoxImage;
    BoxImage = new wxBoxSizer(wxHORIZONTAL);

    ImageScroll = new wxScrolledWindow(PanelDefault, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
    ImageScroll->SetScrollRate(5, 5);
    wxBoxSizer* BoxImageScroll;
    BoxImageScroll = new wxBoxSizer(wxVERTICAL);

    Image = new wxStaticBitmap(ImageScroll, wxID_ANY, wxBitmap(wxT("tech.jpg"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
    BoxImageScroll->Add(Image, 1, wxALIGN_CENTER_HORIZONTAL | wxEXPAND, 5);


    ImageScroll->SetSizer(BoxImageScroll);
    ImageScroll->Layout();
    BoxImageScroll->Fit(ImageScroll);
    BoxImage->Add(ImageScroll, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer11;
    bSizer11 = new wxBoxSizer(wxVERTICAL);

    m_listBox1 = new wxListBox(PanelDefault, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
    bSizer11->Add(m_listBox1, 1, wxALL | wxEXPAND, 5);


    BoxImage->Add(bSizer11, 1, wxEXPAND, 5);


    BoxMain->Add(BoxImage, 1, wxEXPAND | wxALL, 5);

    Divisor = new wxStaticLine(PanelDefault, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    BoxMain->Add(Divisor, 0, wxEXPAND | wxRIGHT | wxLEFT, 5);

    wxBoxSizer* BoxOptions;
    BoxOptions = new wxBoxSizer(wxHORIZONTAL);

    wxBoxSizer* bSizer6;
    bSizer6 = new wxBoxSizer(wxVERTICAL);

    m_gauge1 = new wxGauge(PanelDefault, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL);
    m_gauge1->SetValue(0);
    bSizer6->Add(m_gauge1, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);


    BoxOptions->Add(bSizer6, 1, wxALIGN_CENTER_VERTICAL, 5);

    wxBoxSizer* bSizer7;
    bSizer7 = new wxBoxSizer(wxHORIZONTAL);

    ButtomPrevious = new wxButton(PanelDefault, wxID_ANY, wxT("Previous"), wxDefaultPosition, wxDefaultSize, 0);
    ButtomPrevious->Enable(false);

    bSizer7->Add(ButtomPrevious, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

    ButtomNext = new wxButton(PanelDefault, wxID_ANY, wxT("Next"), wxDefaultPosition, wxDefaultSize, 0);
    ButtomNext->Enable(false);

    bSizer7->Add(ButtomNext, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);


    BoxOptions->Add(bSizer7, 0, 0, 5);


    BoxMain->Add(BoxOptions, 0, wxALIGN_RIGHT | wxEXPAND, 5);


    PanelDefault->SetSizer(BoxMain);
    PanelDefault->Layout();
    BoxMain->Fit(PanelDefault);
    BoxDefault->Add(PanelDefault, 1, wxEXPAND, 5);


    this->SetSizer(BoxDefault);
    this->Layout();
    Menu = new wxMenuBar(0);
    MenuFile = new wxMenu();
    wxMenuItem* Save;
    Save = new wxMenuItem(MenuFile, wxID_ANY, wxString(wxT("Save Image")), wxEmptyString, wxITEM_NORMAL);
    MenuFile->Append(Save);

    wxMenuItem* Reload;
    Reload = new wxMenuItem(MenuFile, wxID_ANY, wxString(wxT("Reload")), wxEmptyString, wxITEM_NORMAL);
    MenuFile->Append(Reload);

    MenuFile->AppendSeparator();

    wxMenuItem* Exit;
    Exit = new wxMenuItem(MenuFile, wxID_ANY, wxString(wxT("Exit")), wxEmptyString, wxITEM_NORMAL);
    MenuFile->Append(Exit);

    Menu->Append(MenuFile, wxT("File"));

    Help = new wxMenu();
    wxMenuItem* About;
    About = new wxMenuItem(Help, wxID_ANY, wxString(wxT("About")), wxEmptyString, wxITEM_NORMAL);
    Help->Append(About);

    Menu->Append(Help, wxT("Help"));

    this->SetMenuBar(Menu);


    this->Centre(wxBOTH);

    // Connect Events
    this->Connect(Reload->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(OctoFrame::recarregar));
}

void OctoFrame::recarregar(wxCommandEvent& event) {
    
    
    
    m_listBox1->Append("item");
}
