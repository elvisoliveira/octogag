#include "wx/wx.h"
#include "OctoFrame.h"

class MyApp : public wxApp {
public:

    bool OnInit() {
        // initialize the default frame
        OctoFrame * dialog = new OctoFrame((wxWindow *) NULL);
        // show the default dialog
        dialog->Show();
        // set the dialog as top window
        this->SetTopWindow(dialog);

        
        
        
        return true;
    }
};

IMPLEMENT_APP(MyApp)