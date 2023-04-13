#include "LogoMaker.h"
#include <ctime>
#include "HSVColorSelect.h"
int main() {
    srand(time(nullptr));
    LogoMaker final;
    sf::RenderWindow window(sf::VideoMode(1800, 1200), "CS 08 Final");
    window.setFramerateLimit(30);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            final.addEventHandler(window,event);
        }
        final.update();
        final.applyUpdates();
        window.clear();
        window.draw(final);
        window.display();
    }
    return 0;
}

