#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]) {
    std::string reset_position;
    int frame = 0;

    while (true) {
        auto can = Canvas(1000,1000);
        
        // Ojos
        can.DrawPointCircle(40,20,20);
        can.DrawPointCircle(160,20,20);
        
        // Cabeza
        can.DrawBlockEllipseFilled(100,20,40,0);
        can.DrawBlockEllipseFilled(100,70,10 + frame ,10 + frame );
        
        // Pupilas
        can.DrawBlockCircleFilled(40,20,5);
        can.DrawBlockCircleFilled(160,20,5);
        
        // Cara
        can.DrawPointCircle(100,30,80);
        can.DrawBlockCircleFilled(100,10,5);
        can.DrawPointCircle(100,10,15);

        // Puntos de barba 
        can.DrawPoint(90,110, true);
        can.DrawPoint(95,110, true);
        can.DrawPoint(100,110, true);
        can.DrawPoint(105,110, true);
        can.DrawPoint(110,110, true);
        can.DrawPoint(92,115, true);
        can.DrawPoint(97,115, true);
        can.DrawPoint(102,115, true);
        can.DrawPoint(107,115, true);
        can.DrawPoint(95,120, true);
        can.DrawPoint(100,120, true);
        can.DrawPoint(105,120, true);
        

        if (frame > 25) frame = 0;

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::White, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.5s);
        frame++;
    }
}