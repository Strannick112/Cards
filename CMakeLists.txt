cmake_minimum_required(VERSION 3.26)
project(untitled33 C)

set(CMAKE_C_STANDARD 23)

add_executable(untitled33 main.c
        game/Card.c
        game/Deck.c
        game/Hand.c
        game/Player.c
        game/Game.h
        game/Game.c)
