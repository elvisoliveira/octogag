#include "thread.h"
#include <vector>

/*
 * LoadingStart
 */

void * LoadingStart::Entry()
{
    while (makeloop == true)
    {
        gui->LoadingStart();
        Sleep(40);
        // wxSafeYield();
    }
    gui->LoadingStop();
}

LoadingStart::LoadingStart(OctoFrame * gui)
{
    this->gui = gui;
    this->makeloop = true;
};

/*
 * Load
 */

Load::Load(OctoFrame * gui)
{
    this->gui = gui;
};

void * Load::Entry()
{

    LoadingStart * start = new LoadingStart(gui);

    start->Create();

    start->Run();

    if (gui->firstload() == true)
    {

        start->makeloop = false;

        start->Delete();

    }
}
