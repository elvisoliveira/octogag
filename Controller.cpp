#include "Controller.h"

#include "downloadfeed.h"
#include "downloadfeed.cpp"
#include "parsefeed.h"
#include "parsefeed.cpp"
#include "downloadimage.h"
#include "downloadimage.cpp"

Controller::Controller() {
    downloadfeed download = downloadfeed("http://elvisoliveira.com.br/sandbox/octopp/octopp.php");
    std::string response = download.getDocument();
    parsefeed * parse = new parsefeed(response);
    Controller::vector = parse->getvector();
}

std::vector <std::map<std::string, std::string> > Controller::getVector() {
    return Controller::vector;
}

std::string Controller::getImage(std::string url) {
    downloadimage image = downloadimage(url);
    return "ok";
}