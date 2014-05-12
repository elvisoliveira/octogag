#include "wx/wx.h"

#include "OctoFrame.h"
#include "thread.h"

#include <string.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

class MyApp : public wxApp
{
public:

    bool OnInit()
    {
        // initialize the default frame
        OctoFrame * dialog = new OctoFrame((wxWindow *) NULL);
        // show the default dialog
        dialog->Show();
        // set the dialog as top window
        this->SetTopWindow(dialog);

        Load * work = new Load(dialog);

        work->Create();

        work->Run();

        return true;
    }
};

IMPLEMENT_APP(MyApp);