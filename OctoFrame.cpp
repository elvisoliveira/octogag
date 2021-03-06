#include <wx/tbarbase.h>

#include "OctoFrame.h"
#include "Utils.h"

OctoFrame::OctoFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{

    // required to manipulate multiple image formats
    wxInitAllImageHandlers();

    this->SetSizeHints(wxSize(-1, -1), wxSize(-1, -1));

    StatusBar = this->CreateStatusBar(1, wxST_SIZEGRIP, wxID_ANY);
    wxBoxSizer * BoxDefault;
    BoxDefault = new wxBoxSizer(wxVERTICAL);

    /* wxPanel
     * primary panel
     */
    PanelDefault = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);

    /* wxBoxSizer
     * put all together (article image and articles list)
     */
    wxBoxSizer * BoxMain;
    BoxMain = new wxBoxSizer(wxVERTICAL);

    /* wxStaticLine
     * line that split the menu from the content
     */
    line_menu = new wxStaticLine(PanelDefault, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    BoxMain->Add(line_menu, 0, wxEXPAND, 5);

    /* wxBoxSizer
     * image container
     */
    wxBoxSizer * BoxImage;
    BoxImage = new wxBoxSizer(wxHORIZONTAL);

    /**********   Image Section  **********/

    /* wxScrolledWindow
     * scroll widget that contain some data inside it
     */
    ImageScroll = new wxScrolledWindow(PanelDefault, wxID_ANY, wxDefaultPosition, wxSize(500, -1), wxHSCROLL | wxVSCROLL);

    /* wxStaticBitmap
     * image file
     */
    Image = new wxStaticBitmap(ImageScroll, wxID_ANY, wxBitmap(wxT("tech.jpg"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxSize(-1, -1), 0);

    /* wxBoxSizer
     * container the the scroll widget (wxScrolledWindow)
     */
    wxBoxSizer * BoxImageScroll;
    BoxImageScroll = new wxBoxSizer(wxVERTICAL);
    BoxImageScroll->Add(Image, 1, wxALIGN_CENTER_HORIZONTAL | wxEXPAND, 5);

    /* set the sizer
     */
    ImageScroll->SetSizer(BoxImageScroll);

    /* make the layout
     */
    ImageScroll->Layout();

    /* fir the scroll widget with it's container
     */
    BoxImageScroll->Fit(ImageScroll);

    /**********   Image Section  **********/

    BoxImage->Add(ImageScroll, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer11;
    bSizer11 = new wxBoxSizer(wxVERTICAL);

    bSizer11->SetMinSize(wxSize(200, -1));

    /* Panel for listing articles - already working */

    //    m_listBox1 = new wxListBox(PanelDefault, wxID_ANY, wxDefaultPosition, wxSize(150, -1), 0, NULL, wxLB_HSCROLL);

    //    m_listBox1->SetMinSize(wxSize(150, -1));

    //    bSizer11->Add(m_listBox1, 1, wxEXPAND, 5);

    /* new panel for grid articles */

    listpost = new wxListCtrl(PanelDefault, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES | wxLC_REPORT | wxLC_VRULES);

    listpost->InsertColumn(0, _("Type"));
    listpost->InsertColumn(1, _("Title"));

    bSizer11->Add(listpost, 1, wxEXPAND, 5);

    /* end of the panel for listing articles */

    BoxImage->Add(bSizer11, 1, wxEXPAND | wxLEFT, 5);

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

    listpost->Connect(wxEVT_LIST_ITEM_ACTIVATED, wxListEventHandler(OctoFrame::showpost), NULL, this);




}

void OctoFrame::showpost(wxListEvent& event)
{

    int selection = event.GetIndex();


    std::string url = OctoFrame::parsed.at(selection)["content"];

    std::map<std::string, std::string> image = list->getImage(url);

    std::cout << "[points]" << OctoFrame::parsed.at(selection)["points"] << std::endl;
    std::cout << "[comments]" << OctoFrame::parsed.at(selection)["comments"] << std::endl;
    std::cout << "[id]" << OctoFrame::parsed.at(selection)["id"] << std::endl;
    std::cout << "[next]" << OctoFrame::parsed.at(selection)["next"] << std::endl;
    std::cout << "[content]" << OctoFrame::parsed.at(selection)["content"] << std::endl;
    std::cout << "[title]" << OctoFrame::parsed.at(selection)["title"] << std::endl;

    std::cout << "[filename]" << image["name"] << std::endl;
    std::cout << "[fileformat]" << image["format"] << std::endl;
    std::cout << "[filelocation]" << image["location"] << std::endl;

    wxBitmap gagimage = wxBitmap(image["location"], wxBITMAP_TYPE_ANY);

    int w = gagimage.GetWidth();
    int h = gagimage.GetHeight();
    int p = 483;

    OctoImage * proportion = new OctoImage();

    std::vector<float> proportions = proportion->CalcProportions((double) w, (double) h, (double) p);

    int nw = (int) proportions.at(0);
    int nh = (int) proportions.at(1);

    std::cout << "[w]" << w << std::endl;
    std::cout << "[h]" << h << std::endl;
    std::cout << "[nw]" << nw << std::endl;
    std::cout << "[nh]" << nh << std::endl;

    wxImage imgtransform = gagimage.ConvertToImage();

    wxBitmap resized = wxBitmap(imgtransform.Scale(nw, nh, wxIMAGE_QUALITY_HIGH));

    Image->SetBitmap(resized);

    ImageScroll->SetScrollRate(1, 1);
    ImageScroll->SetVirtualSize(nw, nh);

    event.Skip();
}

bool OctoFrame::firstload()
{

    list = new Controller();

    OctoFrame::parsed = list->getVector();

    for (int i = 0; i < OctoFrame::parsed.size(); i++)
    {

        std::string title = OctoFrame::parsed.at(i)["title"];

        std::string content = OctoFrame::parsed.at(i)["content"];

        std::string urlsplitter = ".";

        Utils * utils = new Utils();

        std::vector<std::string> urlelements = utils->explode(content, urlsplitter);

        std::string extension = urlelements.back();

        // wxString wxTitle(title.c_str(), wxConvUTF8);

        long index = listpost->InsertItem(0, extension.c_str());

        listpost->SetItem(index, 1, title.c_str());

        // m_listBox1->Append(wxTitle);

    }

    listpost->SetColumnWidth(0, wxLIST_AUTOSIZE);
    listpost->SetColumnWidth(1, wxLIST_AUTOSIZE);

    return true;
}

void OctoFrame::LoadingStart()
{
    m_gauge1->Pulse();
}

void OctoFrame::LoadingStop()
{
    m_gauge1->SetValue(0);
}