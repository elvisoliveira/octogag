#include "wx/thread.h"
#include "wx/log.h"

#include "OctoFrame.h"

class LoadingStart : public wxThread {
public:
    LoadingStart(OctoFrame * gui);
    virtual void * Entry();
    bool makeloop;
private:
    OctoFrame * gui;

};

class Load : public wxThread {
public:
    Load(OctoFrame * gui);
    virtual void * Entry();
private:
    OctoFrame * gui;
};



