#include <iostream>
#include <windows.h>

int choice = 0;
int skipselection = 0;
bool MadeAChoice = false;
bool MadeAChoice2 = false;
bool HasRustyAxe = false;

void introduction();
void beginning();
void OrcsRoom();
void SecondFloor();
void Victory();

int main()
{
    std::cout << "\n";
    introduction();
}

void introduction() {
    MadeAChoice = false;
    system("cls");
    std::cout << "Whatever your reason. Whatever your past. It matters not now. For you now stand before them, the ones you have searched for for so long. Five silhouettes towering over you, the only things visible in the abyss you find yourself in.\n";
    std::cout << "\"Welcome, seeker...\" one of the silhouettes, with a trapezoid-shaped head and a single staring eye, speaks.\n";
    std::cout << "\"You have done very well to find us\" another with five eyes says.\n";
    std::cout << "How do you respond?\n";
    std::cout << "1. \"Wait... who are you?\" | 2. \"Enough prattle! Send me to my trial!\" | 3. Cry\n";
    do {
        std::cin >> choice;
        switch (choice) {
        case 1: {
            system("cls");
            std::cout << "\"Why, we're the Questioners... and you will bring us the answer\" a silhouette with a very wide head and two big, round eyes says.\n";
            std::cout << "\"Wait...\" a figure with a diamond-shaped head says as it leans closer. \"I see a distinct lack of understanding in this one's eyes. I think they might not know what is going on... or they are stupid.\"\n";
            std::cout << "\"One does not exclude the other\" a being with a very long and pointy head points out.\n";
            std::cout << "\"What's with all these travelers just stumbling in here?\" the wide-headed creature groans. \"You'd think an otherworldly void with wish-granting deities would be difficult to come across.\"\n";
            std::cout << "\"The last one was asking for directions to some monarch it called the Burger King. Is it he who sends these random mortals to our realm?\"\n";
            std::cout << "Suddenly, all five eyes of the multi-eyed being look back down at you.\n";
            std::cout << "\"Oh, you're still here. Well, let me sum it up: we grant wishes to those we deem worthy. That's the answer we mentioned earlier, about whether or not you're worthy.\"\n";
            std::cout << "\"Complete the task we give you without dying horrifically, and we will grant whatever wish you desire!\"\n";
            std::cout << "\"Fail at the task we give you and die horrifically, and we will laugh at your corpse!\"\n";
            std::cout << "\"Now go do the thing!\"\n";
            MadeAChoice = true;
            break;
        }
        case 2: {
            system("cls");
            std::cout << "\"Wow, rude.\"\n";
            std::cout << "\"We had such a grandoise speech planned. But sure, go on your quest. Whatever.\"\n";
            std::cout << "\"Jerk.\"\n";
            MadeAChoice = true;
            break;
        }
        case 3: {
            system("cls");
            std::cout << "Tears flow freely from your eyes as you bawl like a baby who just got kicked in the gonads.\n";
            std::cout << "\"Wait, w-what are they doing?\" one of the silhouettes asks in a confused tone.\n";
            std::cout << "\"There is water coming from their eyes!\"";
            std::cout << "\"And what an infernal noise!\"\n";
            std::cout << "\"Quick! Get it away!\"\n";
            MadeAChoice = true;
            break;
        }
        default: {

        }
        }
    } while (MadeAChoice == false);
    choice = 0;
    MadeAChoice = false;
    std::cout << "The void swirls around you, the silhouettes fade as you're transported somewhere else...\n";
    system("pause");
    beginning();
}

void beginning() {
    system("cls");
    std::cout << "You wake up on a small patch of grass, surrounded by gravel. Before you is a tall round tower, with plentiful decorations lining its walls. Looking around you see that you are on a small island, far off from any visible coast. Scattered about are various discarded weapons and equipment, including an entire catapult. An man clad in full plate armor stands lazily in front of a wooden door leading into the tower.\n";
    std::cout << "The guard notices you, and pulls out a small piece of paper that he reads aloud from.\n";
    std::cout << "\"Hail, adventurer\" he says in a dry, monotone voice. \"You have arrived at... what's that say... whatever Tower, where you'll prove your worth and yadda yadda, get to the top of the tower and you... get something, I don't care. Oh, and I'm like here to stop you or whatever. I'm your first test or something.\"\n";
    std::cout << "How will you proceed?\n";
    if (HasRustyAxe == false) {
        std::cout << "1. \"Could you please let me in?\" | 2. Run at him while screaming. | 3. Use the catapult. | 4. Scavenge a weapon. | 5. Look for another way in. | 6. Revert to an earlier point.\n";
    }
    if (HasRustyAxe == true) {
        std::cout << "1. \"Could you please let me in?\" | 2. Run at him while screaming. | 3. Use the catapult. | 4. Attack the guard with your axe. | 5. Look for another way in. | 6. Revert to an earlier point.\n";
        std::cout << "Inventory: Rusty Axe\n";
    }
    do {
        choice = 0;
        std::cin >> choice;
        switch (choice) {
        case 1: {
            std::cout << "\"No.\"\n";
            break;
        }
        case 2: {
            system("cls");
            std::cout << "You aggressively walk a good distance away from the guard before turning around, eyes focused on the stationary man. With a mighty bowel-shaking bellow you start charging towards him, flailing your arms with a crazed look in your eyes. He reacts with nonchalance, even as you draw ever closer. Saliva flows from your mouth like a rabid dog, your hair stands up, your nails grow sharper and your teeth become fangs. Your raw rage and fericous charging is transforming you into the very image of a furious beast!\n";
            std::cout << "\"Ah hell, I ain't dealing with this crap\" the guard groans, as he calmly walks away from the door.\n";
            std::cout << "Thus you end up slamming straight into the door, knocking it off its hinges. You lay on top of the knocked down door for a little while before sitting up, your previous beastial rage replaced with a big ol boo-boo on your face. You notice a small pebble landing besides you. Followed by another. And another. As well as many cracks along the walls. It seems like knocking down the door had some rather nasty consequences for the tower's structural integrity. \"What shoddy craftsmanship\", you think as the tower collapses on top of you.\n";
            std::cout << "YOU DIED\n";
            HasRustyAxe = false;
            system("pause");
            beginning();
        }
        case 3: {
            choice = 0;
            MadeAChoice2 = false;
            std::cout << "You walk over to the catapult and spin the winch, pulling the arm down to a ready position.\n";
            std::cout << "Now what will you fire?\n";
            std::cout << "1. Yourself. | 2. A nearby rock. | 3. Cancel.\n";
            do {
                std::cin >> choice;
                switch (choice) {
                case 1: {
                    std::cout << "You climb into the catapult's bucket, curling up into a ball before giving the lever a little kick. And so you're launched through the air, a gust of wind blowing you straight into the tower wall, splattering you like a fly against a windshield.\n";
                    std::cout << "YOU DIED\n";
                    HasRustyAxe = false;
                    system("pause");
                    beginning();
                }
                case 2: {
                    std::cout << "Using all your mighty might, you carry a big rock to the catapult and load it into the bucket. You pull the lever, launching the boulder towards the tower... and missing completely, the rock making a splash as it lands in the water far away. The guard seems unimpressed. But before you can think to actually move the catapult to face the tower, a large shadow appears in the ocean. The waves part to reveal a giant sea serpent, with a very notciably boulder-sized bump on its head. Seeing you besides the catapult, it lunges forth. As you're consumed, you realize that sea serpents have a very poor dental plan.\n";
                    std::cout << "YOU DIED\n";
                    HasRustyAxe = false;
                    system("pause");
                    beginning();
                }
                case 3: {
                    beginning();
                }
                default: {
                    break;
                }
                }
            } while (MadeAChoice2 == false);
            break;
        }
        case 4: {
            if (HasRustyAxe == false) {
                std::cout << "Scrounging through the discarded piles of weapons, you eventualy decide on a battleaxe! The metal parts even have a rough, brown texture to them. Surely that makes them stronger!\n";
                HasRustyAxe = true;
                system("pause");
                beginning();
            }
            if (HasRustyAxe == true) {
                std::cout << "You quip at the guard before lunging at him, swinging your newfound axe at his head! As it hits his helmet, however, the rusty old metal pretty much instantly decays into a pile of dust. The shortsword you now find lodged between your eyes is not rusty, though. It seems the guard takes good care of his weapon.\n";
                std::cout << "YOU DIED\n";
                HasRustyAxe = false;
                system("pause");
                beginning();
            }
        }
        case 5: {
            std::cout << "Walking around the tower, you see a smaller door off to the side. Unfortunately, as you try to open it up, you discover that the door is in fact locked. If only you had some way to break it down...\n";
            if (HasRustyAxe == true) {
                std::cout << "Oh wait! Suddenly you remember that you do indeed have a battleaxe! Gleefully you try to break the door down... only to find the axeblade disintegrating into rust as soon as it hits. Only the handle knocks into the door, not even leaving a dent.\n";
                std::cout << "The knock did however make enough noise to draw the attention of whoever was inside. The door opens, hitting you in the face with the musk and stench of an angry orc glaring at you. The orc is about twice your size, making it easy for you to slip inside the tower by going below his arm holding the door open.\n";
                system("pause");
                OrcsRoom();
            }
            break;
        }
        case 6: {
            skipselection = 0;
            MadeAChoice2 = false;
            std::cout << "Where do you want to go?\n";
            std::cout << "1. Meeting the Questioners. | 2. Cancel.\n";
            do {
            std::cin >> skipselection;
            switch (skipselection) {
            case 1: {
                HasRustyAxe = false;
                introduction();
            }
            case 2: {
                beginning();
            }
            default: {
                break;
            }
            } 
            }while (MadeAChoice2 == false);
            break;
        }
        default: {
            break;
        }
        }
    } while (MadeAChoice == false);
}

void OrcsRoom() {
    HasRustyAxe = false;
    MadeAChoice = false;
    system("cls");
    std::cout << "You have succesfully infiltrated the tower! Unfortunately, you did so by slipping by a now very angry orc standing right behind you. The interior of the room is very messy, with clothes, books with half-naked orc women on the cover, and various other assorted things strewn all over the floor. Judging by the bed and what looks like a kitchen filled with dirty dishes, this is where the orc lives. Speaking of the orc, he is still standing right behind you, giving you one heck of a death glare. And judging by the snarling, he isn't interested in a reasoned discussion. Besides the one you just came in, you can only see one door leading out of the room.\n";
    std::cout << "How will you proceed?\n";
    std::cout << "1. Run to the other door. | 2. Give him a hug. | 3. Fight him. | 4. Revert to an earlier point.\n";
    do {
        choice = 0;
        std::cin >> choice;
        switch (choice) {
        case 1: {
            std::cout << "Without warning, you run straight towards th door leading out of the orc's room. You grab the handle, pull it down... and discover it locked. Fortunately, you find a discarded lockpick on the floor! Unfortunately, the orc is still around and does a running body splash that flattens you against the door.\n";
            std::cout << "YOU DIED\n";
            system("pause");
            OrcsRoom();
        }
        case 2: {
            std::cout << "You prance on over to the big, muscular, hairy orc and give him a friendly hug. He responds in kind by uppercutting you. The punch hits with such force that you're launched into the air, crashing through the roof and ending up at the second floor. Nifty.\n";
            system("pause");
            SecondFloor();
        }
        case 3: {
            std::cout << "Dude's twice your size and looks like he flosses with barbed wire. What made you think that was a good idea?\n";
            std::cout << "YOU DIED\n";
            system("pause");
            OrcsRoom();
        }
        case 4: {
            skipselection = 0;
            MadeAChoice2 = false;
            std::cout << "Where do you want to go?\n";
            std::cout << "1. Meeting the Questioners. | 2. Outside the tower | 3. Cancel.\n";
            do {
                std::cin >> skipselection;
                switch (skipselection) {
                case 1: {
                    HasRustyAxe = false;
                    introduction();
                }
                case 2: {
                    beginning();
                }
                case 3: {
                    OrcsRoom();
                }
                default: {
                    break;
                }
                }
            } while (MadeAChoice2 == false);
            break;
        }
        default: {
            break;
        }
        }
    } while (MadeAChoice == false);
}

void SecondFloor() {
    MadeAChoice = false;
    system("cls");
    std::cout << "After recovering from the uppercut, you get back up on your feet to look around your current surroundings. You are in a round room with stone walls, a wodden floor and no doors or windows. Besides you is a hole in the floor leading back down to the angry orc. The room is illuminated by a strange glowing orb floating in the middle of the room. Besides the orb you can see an unopened chest and a ladder leading straight into the roof.\n";
    std::cout << "How will you proceed?\n";
    std::cout << "1. Touch the orb. | 2. Open the chest. | 3. Climb the ladder. | 4. Jump back down the hole. | 5. Revert to an earlier point.\n";
    do {
        choice = 0;
        std::cin >> choice;
        switch (choice) {
        case 1: {
            std::cout << "As you poke the mysterious orb you feel a strange energy wash over you, coating you in magic that makes your skin tingle. You feel yourself being transported upwards, before disappearing in a blink. You then reappear above the tower. A bit too far above the tower, in fact. As in, above the atmosphere. Remember, it's not the fall that kills you; it's the landing.\n";
            std::cout << "YOU DIED\n";
            system("pause");
            SecondFloor();
        }
        case 2: {
            std::cout << "You kneel down in front of the chest and try to pry it open, when suddenly it swings open to reveal several rows of sharp teeth! The mimic is about to lunge forth to devour you, when...\n";
            std::cout << "\"You know... I'm just not in the mood for flesh\" it sighs. \"It's always the same thing, wait in some random room until a loot-hungry douchebag comes by and eat 'em, repeat ad nauseum. Honestly think I'm gonna vomit if I take one more bite. You know, I'm gonna go get a salad. I'll give ya whatever weapon you want.\"\n";
            MadeAChoice2 = false;
            std::cout << "1. Sword. | 2. Shield. | 3. Gold.\n";
            do {
                choice = 0;
                std::cin >> choice;
                switch (choice) {
                case 1: {
                    std::cout << "\"A sword? Ok, here ya go.\"\n";
                    std::cout << "The mimic spits out a sword with such tremendous force that it embeds itself in your forehead.\n";
                    std::cout << "\"...oops.\"\n";
                    std::cout << "YOU DIED\n";
                    system("pause");
                    SecondFloor();
                }
                case 2: {
                    std::cout << "\"One shield coming right up!\"\n";
                    std::cout << "The mimic coughs up a big shield, which you try to catch. Unfortunately you fumble with it, staggering backwards as you try to get it under control. And as you walk backwards you fall down the hole leading back down to the orc.\n";
                    std::cout << "YOU DIED\n";
                    system("pause");
                    SecondFloor();
                }
                case 3: {
                    std::cout << "\"Have some gold then.\"\n";
                    std::cout << "A flood of gold bursts from the mimic's mouth, filling your pockets with valuables! And filling the room. And the room below. Oh god there is so much gold. You're drowining in it! Help!\n";
                    std::cout << "YOU DIED\n";
                    system("pause");
                    SecondFloor();
                }
                default: {
                    break;
                }
                }
            } while (MadeAChoice2 == false);
        }
        case 3: {
            std::cout << "You start climbing up the ladder, expecting to bonk your head against the roof. But instead you climb straight through it, and continue climbing past the third floor as well. You keep going upwards, passing through each floor by phasing through them. All the traps, all the guards are easily bypassed. Eventually, you reach the top floor. And as soon as you do, you find the world swirling around you once more...\n";
            system("pause");
            Victory();
        }
        case 4: {
            std::cout << "You jump back down to the orc... and are immediately torn to shreds. Brillitant tactical maneuver.\n";
            std::cout << "YOU DIED\n";
            system("pause");
            SecondFloor();
        }
        case 5: {
            skipselection = 0;
            MadeAChoice2 = false;
            std::cout << "Where do you want to go?\n";
            std::cout << "1. Meeting the Questioners. | 2. Outside the tower. | 3. The Orc's room. | 4. Cancel.\n";
            do {
                std::cin >> skipselection;
                switch (skipselection) {
                case 1: {
                    introduction();
                }
                case 2: {
                    beginning();
                }
                case 3: {
                    OrcsRoom();
                }
                case 4: {
                    SecondFloor();
                }
                default: {
                    break;
                }
                }
            } while (MadeAChoice2 == false);
        default: {
            break;
        }
        }
        }
    } while (MadeAChoice == false);
}

void Victory() {
    system("cls");
    std::cout << "Once more you appear in the void before the five silhouettes.\n";
    std::cout << "\"Ah, you made it!\"\n";
    std::cout << "\"Surprising.\"\n";
    std::cout << "\"Well well, a promise is a promise. We shall grant you anything you desire.\"\n";
    std::cout << "\"Provided, of course, your request can pass through the deadliest trial of all.\"\n";
    std::cout << "Suddenly, all the silhouettes pull various forms.\n";
    std::cout << "\"BUREAUCRACY\" they all yell in chorus.\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Yeah, I didn't know how to end this. Sorry.\n";

}