#include <SFML/Graphics.hpp>

#include "../cmake-build-debug/_deps/sfml-src/src/SFML/Window/InputImpl.hpp"

int main()
{

    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Flag Football");
    sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
    player.setFillColor(sf::Color::White);

    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                // Gets triggered when window WANTS to close
                // Could be useful for saving data before exiting the game
                window.close();
            }
        }

        window.clear();

        if (sf::priv::InputImpl::isKeyPressed(sf::Keyboard::Key::A)) {
            player.move(sf::Vector2f(-1.0f, 0));
        }

        if (sf::priv::InputImpl::isKeyPressed(sf::Keyboard::Key::D)) {
            player.move(sf::Vector2f(1.0f, 0));
        }

        if (sf::priv::InputImpl::isKeyPressed(sf::Keyboard::Key::W)) {
            player.move(sf::Vector2f(0.0f, -1.0f));
        }

        if (sf::priv::InputImpl::isKeyPressed(sf::Keyboard::Key::S)) {
            player.move(sf::Vector2f(0.0f, 1.0f));
        }

        window.draw(player);
        window.display();
    }
}
