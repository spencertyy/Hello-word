#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::White);

        // create a convex shape (love heart)
                sf::ConvexShape heart;
                heart.setPointCount(5);
                heart.setPoint(0, sf::Vector2f(400, 250));
                heart.setPoint(1, sf::Vector2f(550, 400));
                heart.setPoint(2, sf::Vector2f(700, 250));
                heart.setPoint(3, sf::Vector2f(550, 100));
                heart.setPoint(4, sf::Vector2f(400, 250));

                // set the shape color to red
                heart.setFillColor(sf::Color::Red);

                // draw the heart shape
                window.draw(heart);

	// end the current frame
        window.display();
    }

    return 0;
}
