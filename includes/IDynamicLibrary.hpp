#ifndef IDYNAMICLIBRARY_HPP
# define IDYNAMICLIBRARY_HPP

class Snake;
class Food;
class Score_Time;

enum Direction
{
    right,
    left,
    up,
    down
};

class IDynamicLibrary
{
public:
    virtual void draw(Snake &snake, Direction direction, int size, bool &endGame, Food &food, Score_Time &score_time) = 0;
    virtual Direction checkButton(Direction direction, bool &endGame) = 0;

    virtual void drowMap(Snake &snake, int size) = 0;
    virtual void drowFood(Snake &snake, Food &food, int size) = 0;
    virtual void drowScore(Score_Time &score_time) = 0;
    virtual void drawSnake(Snake &snake) = 0;
    // virtual void DrowMap(int size) const = 0;
    // virtual void DrawSnake(Snake &snake)  = 0;
};

#endif