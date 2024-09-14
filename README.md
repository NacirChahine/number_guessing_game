# Number Guessing Game

Welcome to the **Number Guessing Game** – a simple but engaging game where you try to guess a randomly generated number within a given range. You can choose your difficulty level, and the game tracks your high score as you try to beat your own record!

## How the Game Works

1. **Choose a Difficulty**: 
   - Easy: Guess a number between 1 and 50.
   - Medium: Guess a number between 1 and 100.
   - Hard: Guess a number between 1 and 200.

2. **Make Guesses**: Enter your guesses, and the game will tell you whether your guess is too high or too low.

3. **Hints**: After every 3 wrong attempts, the game gives you a helpful hint to get closer to the right answer.

4. **High Scores**: Your best (fewest) number of attempts is saved as a high score during the session.

5. **Play Again**: Once you've guessed the number, you can choose to play again and try to beat your own high score!

## Features

- **Multiple Difficulty Levels**: Play on Easy, Medium, or Hard, depending on how challenging you want the game to be.
- **High Score Tracking**: See if you can break your own record with fewer guesses!
- **Hints**: If you're stuck, the game helps by providing hints every few turns.
- **Play Again**: Enjoy the game multiple times without needing to restart.

## Installation

To run this game, follow the steps below:

1. **Download the Game**:
   - If you already have the `number_guessing_game.exe` file, proceed to the next step.
   - If not, compile it from source using the following command (if you have a C compiler like `gcc`):
     ```bash
     gcc -O2 -o number_guessing_game.exe number_guessing_game.c
     ```

2. **Run the Game**:
   - On Windows, simply double-click `guessing_game.exe` to start playing.
   - If you're using the command line, navigate to the folder where the game is located and type:
     ```bash
     ./guessing_game.exe
     ```

## How to Play

1. Run the game.
2. Choose a difficulty level (Easy, Medium, or Hard).
3. Guess the number the game has generated.
4. Keep guessing until you find the number!
5. After winning, the game will tell you how many attempts you made and if you set a new high score.
6. Choose to play again, or exit the game.

## Requirements

- **Operating System**: Windows (should run on most versions).
- **Compiler** (Optional): Only needed if you want to compile the source code yourself (e.g., `gcc`).

## Future Improvements

- **Multiplayer**: Play with a friend and take turns guessing.
- **Time Challenge**: Add a timed mode for an extra layer of challenge.
- **Graphical Interface**: Transition to a graphical version of the game using a library like SDL or SFML.

## License

This game is free to use, modify, and distribute for educational purposes. Have fun improving it or tweaking it to your liking!

---

Thank you for playing! Good luck guessing the number, and see if you can break your high score!
