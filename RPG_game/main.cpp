//
//  main.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include <iostream>
#include "Game.hpp"
#include "Player.hpp"

using namespace std;
Player& creating_player(Game &game){
    // here will be creating your own character ( setting 10 points of skills (stamina, hp and strength) and choosing start weapon (sword or bow))
    cout<<"Hello Hero!, I don't know what's your name so tell me please! "<<endl<<"Input Your name: ";
    string name;
    int hp_points;
    int strength_points;
    int stamina_points;
    cin>>name;
    bool correct = true;
    cout<<"Okay "<<name<<", it will be a great adventure for you. Before you're gonna start, you have to set your stats. Here are 10 points of skill. At the start you have 2 points of HP, 2 points of strength and 2 points of stamina, so you can give rest of points - 4 to these skills. Think twice before you will do it!"<<endl;
    cout<<"HP : steeling alive longer during a battle, ofcourse you can use health potion to regenerate your points."<<endl<<"Strength : Your attack will be taking more damage, during a battle you will be able to use a potion to get more strength."<<endl<<"Stamina: more points of stamina = more chance for succesful defence, in shops you will see a stamina potions too."<<endl;
    do{
        if(!correct){
            cout<<"Ooops, you don't have as many points as you gave, do it again. Remember, you have only 4 points"<<endl;
            correct = true;
        }
        int points = 4;
        cout<<"Points of HP: ";
        cin>> hp_points;
        points -= hp_points;
        if (points < 0){
            correct = false;
            continue;
        }
        cout<<"Points of strength: ";
        cin>>strength_points;
        points -=strength_points;
        if (points < 0){
            correct = false;
            continue;
        }
        cout<<"Points of stamina: ";
        cin>>stamina_points;
        points -=stamina_points;
        if (points < 0){
            correct = false;
            continue;
        }
    }while(!correct);
    cout<<"Great work! In this adventrue, after every level you will be able to add one point to any of these skills. I think it's everything. Welcome in Skyscraper Of Death !!!"<<endl;
    hp_points += 2;
    strength_points += 2;
    stamina_points += 2;
    return game.createPlayer(name, hp_points, stamina_points, strength_points);
}
int main(int argc, const char * argv[]) {
    Game &game = Game::getInstance(); // creating engine of game
    Player &player = creating_player(game); // Creating your hero
    // check player's stats:
//    cout<<player.getHp()<<endl;
//    cout<<player.getName()<<endl;
//    cout<<player.getStrength()<<endl;
//    cout<<player.getStamina()<<endl;
    /////////
    return 0;
}
