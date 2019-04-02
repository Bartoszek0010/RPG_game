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
#include "Floor.hpp"
#include "Opponent.hpp"
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
    cout<<"Great work! In this adventrue, after every level you will be able to add one point to any of these skills. I think it's everything. Welcome in Kapitol Of Death !!!"<<endl;
    hp_points += 2;
    strength_points += 2;
    stamina_points += 2;
    return game.createPlayer(name, hp_points, stamina_points, strength_points);
}
// informing player whats goin on on actual floor
void informPlayer(int opponents, bool boss, bool shop){
    cout<<"On this level you will meet: "<<endl;
    cout<<opponents<<" opponent/s"<<endl;
    if(boss){
        cout<<"Boss"<<endl;
    }
    if(shop){
        cout<<"Vendor with shop"<<endl;
    }
}

Floor startingGame(Game &game, Player &player){
    // MVP settings:
    int opponents = 1, number = 1;
    bool boss = false, shop = false;
    //////////////////
    
    Floor floor = game.createFloor(number, opponents, boss, shop);
    cout<<"You are starting this great war!! At the start you are on the first floor of Kapitol. To help you on every floor i will be inform you how many opponents you will meet on this level, is here a Boss and is here a Vendor with his shop. So let's GO!"<<endl;
    informPlayer(opponents, boss, shop);
    return floor;
}

void opponentInfo(Opponent opponent){
    cout<<"Your opponent "<<opponent.getName()<<" has "<<opponent.getHp()<<" HP, "<<opponent.getStrength()<<" points of strength and "<<opponent.getStamina()<<" points of stamina."<<endl;
}
void battleInfo(Player &player, Opponent &opponent){
    cout<<"Now you have: \n HP: "<<player.getHp()<<endl<<"Stamina: "<<player.getStamina()<<endl<<endl;
    cout<<"Your opponent has: \n HP: "<<opponent.getHp()<<endl<<"Stamina: "<<opponent.getStamina()<<endl<<endl;
}
void battle(Game &game, Player &player, Floor floor){
    cout<<"You are on the "<<floor.getNumber()<<" floor. You are meeting your opponent now!"<<endl;
    // MVP settings
    int oHp = 4, oStrength = 4, oStamina = 2;
    string oName = "op_1";
    ////////////////
    Opponent opponent = game.createOpponent(oName, oHp, oStamina, oStrength);
    opponentInfo(opponent);
    int playerDecision, opponentDecision; // 1- attack, 0 - defence
    
    do{
        cout<<"0. Defence\n1. Attack"<<endl;
        cin>>playerDecision;
        opponentDecision = game.attack(player, opponent,playerDecision);
        if(opponentDecision == 1){
            cout<<"Your opponent attacked you\n";
        } else{
            cout<<"Your opponent used defence\n";
        }
        
        battleInfo(player, opponent);
    } while(player.getHp() > 0 && opponent.getHp() > 0);
    if(opponent.getHp() == 0){
        cout<<"You won this!! Gratz, your opponent is dead."<<endl;
    } else{
        cout<<"You lost this fight :( tu, tu ,tuuuuu"<<endl;
    }
}
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    Game &game = Game::getInstance(); // creating engine of game
    Player &player = creating_player(game); // Creating your hero
    Floor floor = startingGame(game, player);
    battle(game, player, floor);
    return 0;
}
