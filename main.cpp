#include "wx/wx.h"
#include "gif_lib.h"

#include "OctoFrame.h"
#include "thread.h"

#include <string.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

//class MyApp : public wxApp
//{
//public:
//
//    bool OnInit()
//    {
//        // initialize the default frame
//        OctoFrame * dialog = new OctoFrame((wxWindow *) NULL);
//        // show the default dialog
//        dialog->Show();
//        // set the dialog as top window
//        this->SetTopWindow(dialog);
//
//        Load * work = new Load(dialog);
//
//        work->Create();
//
//        work->Run();
//
//        return true;
//    }
//};
//
//IMPLEMENT_APP(MyApp);

int main(int argc, char **argv)
{

    int * err;

    GifFileType * f = DGifOpenFileName("C:\\Users\\elvis.nunes\\AppData\\Local\\Temp\\octonine_156", NULL);

    assert(f != NULL);

    int ret = DGifSlurp(f);

    assert(ret == GIF_OK);

    int width = f->SWidth;
    int height = f->SHeight;

    std::cout << f->ImageCount << std::endl;
    std::cout << width << " : " << height << std::endl;
    std::cout << f->SColorResolution << std::endl;


    // SavedImage *image = &f->SavedImages[0]; Does actually works
    SavedImage * image = &f->SavedImages[1]; // that compile but the result is a scratched img

    GifImageDesc imgdes = image->ImageDesc;

    std::cout << imgdes-> << std::endl;



    DGifCloseFile(f);
    return 0;
}