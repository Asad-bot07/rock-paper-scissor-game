# Rock-Paper-Scissors Game in C++

## Overview
This is a simple **Rock-Paper-Scissors** game built using **C++**. It allows a player to play against a bot for 5 rounds, with scores tracked and a winner announced at the end.

## Features
- User inputs their choice (Rock, Paper, or Scissors).
- The bot randomly generates its move.
- The game runs for 5 rounds, with scores updated after each round.
- At the end of the 5 rounds, the final winner or draw is announced.

## Code Structure

### 1. Class `Game`
- Stores the player's name.
- Keeps track of the scores for both the player and the bot in two arrays (`arr[]` and `arr1[]`).

### 2. `score()` function
- Saves the points after each round.
- Prints the updated scoreboard after each move.

### 3. `win()` function
- After 5 rounds, adds up the total points and announces the winner, loser, or a draw.

### 4. Inside `main()`
- Takes the user’s name.
- Runs a loop for 5 rounds where:
  - The player chooses Rock (R/r), Paper (P/p), or Scissors (S/s).
  - The bot's move is randomly generated.
  - The winner of the round is determined, and the scores are updated.
- After 5 rounds, the `win()` function declares the final result.

## How to Play
1. Clone the repository:
   ```bash
   git clone https://github.com/Asad-bot07/Rock-Paper-Scissors-Cpp.git
2. Navigate to the project directory.
3. Compile the C++ file:
   g++ -o game rock_paper_scissors.cpp
4. Run the game :
   ./game
