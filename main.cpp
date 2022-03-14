#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;


void ColorAreas(int r);

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Circles");
    sf::CircleShape circle;

    int xpos = 0;
    int ypos = 0;
    int size = 50;
    int xpos2 = 25;
    int ypos2 = 25;
    int size2 = 25;
    ColorAreas(xpos);

    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        //modify these arguments so each is a different slot of the vectors above
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                circle.setRadius(size);
                circle.setFillColor((sf::Color(100, 0, 200, 75)));
                circle.setPosition(xpos + i * 100, ypos + j * 100);
                window.draw(circle);

            }
        }
        for (int k = 0; k < 8; k++) {
            for (int y = 0; y < 8; y++) {
                circle.setRadius(size2);
                circle.setFillColor((sf::Color(255, 255, 0, 100)));
                circle.setPosition(xpos2 + k * 100, ypos2 + y * 100);
                window.draw(circle);

            }
        }
        window.display();

    }//end game loop-------------------------------------------------
    
    return 0;
} //end main


void ColorAreas(int r) {
    cout << "The black area is " <<  800 * 800 - 3.14 * r * r*64 << endl;
    cout << "the yellow area is " << 3.14 * 25 * 25 * 64 << endl; 
    cout << "the purple area is "<< 3.14 * 425 * 64 - 3.14 * r * r * 64 <<endl;
}
