/////////////////////////////////////////////////
//    ____       _         _____               //
//   / __ \     | |       / ____|              //
//  | |  | | ___| |_ ___ | |  __  __ _  __ _   //
//  | |  | |/ __| __/ _ \| | |_ |/ _` |/ _` |  //
//  | |__| | (__| || (_) | |__| | (_| | (_| |  //
//   \____/ \___|\__\___/ \_____|\__,_|\__, |  //
//                                      __/ |  //
//                                     |___/   //
/////////////////////////////////////////////////

#include "wx/wx.h"

#include "OctoFrame.h"

#include <string.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

class MyApp : public wxApp {
public:

    bool OnInit() {
        // initialize the default frame
        OctoFrame * dialog = new OctoFrame((wxWindow *) NULL);
        // show the default dialog
        dialog->Show();
        // set the dialog as top window
        this->SetTopWindow(dialog);
        //
        return true;
    }
};

IMPLEMENT_APP(MyApp)