//
// Created by Allen Lam on 4/28/22.
//

#ifndef SFML_TEST_SLIDER_H
#define SFML_TEST_SLIDER_H
#include "GUIComponents.h"

class Slider : public GUIComponents {
private:
    sf::Font font;
    sf::Text label;
    sf::RectangleShape line;
    sf::CircleShape circle;
    sf::Text number;
    int value =0;
public:
    Slider();
    Slider(std::string text, int length,sf::Vector2f pos);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    //from EventHandler
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void backwardEventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
    virtual void adjustSlider(int num);
    int getValue();
    //frorm SnapshotInterface
    virtual Snapshot getSnapshot();
    void applySnapshot(const Snapshot& snapshot) override;
    States states;
};


#endif //SFML_TEST_SLIDER_H
