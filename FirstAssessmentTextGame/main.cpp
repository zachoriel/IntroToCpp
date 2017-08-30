#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100];
	cout << "Please enter a name for your character." << endl;
	cin.getline(name, 100);
retry:
	cout << "What class would you like to play?" << endl;
	cout << "Press '1' for Soldier, '2' for Thief, or '3' for Wizard." << endl;
	int classChoice;
	cin >> classChoice;
	if (classChoice == 1)
	{
		cout << "Greetings, " << name << "! As an honorable soldier of Vorthust, the King has summoned you to the throne room to discuss rumors of a foreign army gathering nearby." << endl;
		system("pause");
		cout << "As you're about to leave your house, you realize you don't have a weapon on you. Do you run down to the basement to grab one, or leave anyway?" << endl;
		cout << "Press '1' to grab a weapon, or press '2' to leave without one." << endl;
		int Weapon;
		cin >> Weapon;
		if (Weapon == 1)
		{
			cout << "You quickly go to your basement, where you have a few weapons at your disposal. A longsword, a shortsword & shield, and a bow with arrows. Which weapon do you pick up?" << endl;
			cout << "Press '1' to pickup the longsword, '2' to pickup the shortsword & shield, or '3' to pickup the bow." << endl;
			int weaponChoice;
			cin >> weaponChoice;
			if (weaponChoice == 1)
			{
				cout << "You grab the longsword, sheath it on your back, and head out the door." << endl;
				system("pause");
			}
			else if (weaponChoice == 2)
			{
				cout << "You grab the shortsword and shield, and head out the door." << endl;
				system("pause");
			}
			else if (weaponChoice == 3)
			{
				cout << "You grab the bow, fill your quiver with arrows, and head out the door." << endl;
				system("pause");
			}
			else
			{
				cout << "Unfortunately, that wasn't an option. Please try again using '1', '2', or '3'." << endl;
				goto retry;
			}
			cout << "As you make your way to the royal palace, you encounter a woman hanging up posters with a man's face on them, but you can't quite make out the details. Do you speak to her and risk being late, or do you carry on?" << endl;
			cout << "Press '1' to speak to the woman, or '2' to carry on." << endl;
			int posterChoice;
			cin >> posterChoice;
			if (posterChoice == 1)
			{
				cout << "You approach the woman, who turns to greet you." << endl;
				cout << "Woman: 'Greetings, sir. What brings you to town this evening?'" << endl;
				cout << "You: 'Good evening, ma'am. I'm on my way to speak with the King. I couldn't help but notice these posters you're hanging up. Who's the man on them?'" << endl;
				cout << "Woman: 'I don't know his name, only what he looks like. He stole some weapons from the blacksmith earlier, and I'm afraid he might try to use them on somebody. Would you keep an eye out for him, sir?'" << endl;
				cout << "You: 'Of course! Thank you for letting me know. You stay safe out there.'" << endl;
				cout << "You take one of the posters, nod goodbye to the woman, and resume heading to the palace." << endl;
				cout << "You're getting close to the palace gates, when you notice a hooded figure walking by you with his head down. You stop him to get a look at his face, and it's the same man from the poster! He sees you have a copy of the poster, pushes off of you, and draws his sword!" << endl;
				if (weaponChoice == 1)
				{
					cout << "You instinctively draw your longsword. Prepare for combat!" << endl;
					cout << "Press '1' to swing your sword horizontally, '2' to swing vertically, '3' to jab, or '4' to block." << endl;
					int fightOne;
					cin >> fightOne;
					if (fightOne == 1)
					{
						cout << "The man charges at you with his weapon. You pull back to swing horizontally at him, but he reaches you before you can swing, and slices your throat. You collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You pull back to swing vertically at him, but before your sword can come down on him, he reaches you and stabs you in the heart, and you collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. Before he can reach you, you jab your sword at him like a spear, and he runs right into it. He drops his weapon and falls to the ground." << endl;
						cout << "You kneel down over the corpse of the would-be assassin. You've done your duty, but took his life in the process. Could you have fought him in a way that wouldn't kill him? Now you'll never know." << endl;
						cout << "You go and notify the nearest guard, and rush off to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 4)
					{
						cout << "The man charges at you with his weapon. You quickly raise your sword to block the blow, and it works. Being that your weapon is so much bigger than his, you're easily able to overpower him." << endl;
						cout << "Hit the man with the hilt of your sword, and then kick him to the ground while he staggers. You're able to control him while a local bystander alerts a guard." << endl;
						cout << "After the guard takes the would-be assassin away, you rush off to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
				}
				else if (weaponChoice == 2)
				{
					cout << "You instinctively draw your sword and shield. Prepare for combat!" << endl;
					cout << "Press '1' to raise your shield, '2' to bash with your shield, or '3' to dodge." << endl;
					int fightOne;
					cin >> fightOne;
					if (fightOne == 1)
					{
						cout << "The man charges at you with his weapon. You raise your shield and block his attack. He bounces off of your shield, and you take the opportunity to run him through with your blade." << endl;
						cout << "The man falls to the ground, and you kneel over his corpse. You've done your duty killing this would-be assassin, but was it worth it? Could you have done it without killing him? Now you'll never know." << endl;
						cout << "You alert the nearest guard, and then rush to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You bash his arm with your shield, and his weapon flies out of his hand. Disarmed, he quickly surrenders." << endl;
						cout << "You restrain him, and tell a local bystander to go alert a guard." << endl;
						cout << "Once the guard takes the man away, you rush to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. You dodge his attack, and raise your shield to block his next blow." << endl;
						cout << "Unfortunately, he was expecting this, and stabs you below your shield. You drop your weapons and collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
					}
				}
				else if (weaponChoice == 3)
				{
					cout << "You instinctively draw your bow. Prepare for combat!" << endl;
					cout << "Press '1' to fire at his head, '2' to fire at his torso, or '3' to fire at his leg." << endl;
					int fightOne;
					cin >> fightOne;
					if (fightOne == 1)
					{
						cout << "The man charges at you with his weapon. You knock an arrow and fire it at his head. Obviously, this kills him, and he falls to the ground." << endl;
						cout << "You kneel over his corpse. You've done your duty killing this would-be assassin, but was it worth it? Could you have done it without killing him? Now you'll never know." << endl;
						cout << "You alert the nearest guard, and then rush to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You knock an arrow and fire at his torso. The arrow hits him in the chest and he staggers, but then recovers and charges again." << endl;
						cout << "You have no choice but to fire again. You go to grab an arrow, but he reaches you too quickly. He stabs you through the heart, and you collapse. Soon after, he collapses beside you and dies." << endl;
						cout << "Game Over." << endl;
						system("pause");
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. You fire an arrow into his leg, and he falls over, grabbing at his leg." << endl;
						cout << "You run over to him and aim another arrow at him, and threaten to shoot if he moves again." << endl;
						cout << "You tell a local bystander to go alert a guard. Once the guard has taken the would-be assassin away, you rush to the palace. You're definitely late at tis point!" << endl;
						system("pause");
					}
				}
				cout << "You reach the throne room, and the King is waiting for you. He looks angry." << endl;
				cout << "You: 'Sorry I'm late, my liege. Trouble on the road.'" << endl;
				cout << "The King grumbles." << endl;
				cout << "King: 'Yes, well... I trust you handled it appropriately? Make sure not to keep me waiting again.'" << endl;
				cout << "You: 'Yes sir. Sorry sir.'" << endl;
				system("pause"); // Finished the day here
			}
			else if (posterChoice == 2)
			{
				cout << "As you walk, a hooded man passes by you with his head down. This seems suspicious, but you carry on. You can't be late, after all!" << endl;
				cout << "You reach the throne room, and the King is waiting for you. He looks concerned, but otherwise content." << endl;
				cout << "King: 'Good to see you, " << name << ". Thank you for coming. We have much to discuss.'" << endl;
				system("pause");
				cout << "As the two of you talk, a guard comes running in." << endl;
				cout << "Guard: 'Sir, my liege, there's a body just outside the gates!" << endl;
				cout << "King: 'What?! Who is it?'" << endl;
				cout << "Guard: 'One of the bards at the inn, sire. A weapon was left next to the body, one of the swords stolen from the blacksmith earlier'" << endl;
				cout << "King: 'Damn. That's another problem we gotta fix with this city, " << name << ". Unfortunately, we have more pressing matters. Guard, deal with the body and try to track down the murderer.'" << endl;
				cout << "The guard leaves to do as he is told, and you can't help but wonder if you could've done more to help. But there's no time for regret now, the King needs to talk with you." << endl;
				system("pause"); // Finished the day here
			}

		}
		else if (Weapon == 2)
		{
			cout << "You leave your house without a weapon, and head to the palace." << endl;
			cout << "As you make your way to the palace, a man sneaks up behind you. You hear him coming, and turn around to face him." << endl;
			cout << "The hooded figure charges at you with his weapon. Since you didn't bother to take a weapon with you, all you have is your fists. You take a good swing at him, and you do hit him, but he gets the last laugh as he stabs you." << endl;
			cout << "Game Over." << endl;
			system("pause");

		}
	}
	else if (classChoice == 2)
	{
		cout << "Greetings, " << name << "! As a common thief, you're constantly looking for ways to make some dishonest money. What better place than the royal palace itself? You've heard that the King and his army have been very distracted recently preparing for a possible invasion, and this presents you with a unique opportunity to do some damage." << endl;
	}
	else if (classChoice == 3)
	{
		cout << "Greetings, " << name << "! As a master wizard, you're fascinated with all things magic. Recently, citizens of Vorthust have been disappearing at night. Others have reported strange lights and sounds coming from the nearby forest. Some say it's a cult, and you'd very much like to find out for yourself." << endl;
	}
	else
	{
		cout << "I'm afraid that wasn't an option. Please press either '1', '2', or '3'. Nothing else will work." << endl;
		goto retry;
	}
}