#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
	char name[100];
	cout << "Please enter a name for your character." << endl;
	cin.getline(name, 100);
retry:
	cout << "What class would you like to play?" << endl;
	cout << "Press '1' for Soldier, '2' for Wizard." << endl;
	int classChoice;
	cin >> classChoice;
	if (classChoice == 1) // Less friend/enemy interaction, more big picture decisions
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
						goto retry;
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You pull back to swing vertically at him, but before your sword can come down on him, he reaches you and stabs you in the heart, and you collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
						goto retry;
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. Before he can reach you, you jab your sword at him like a spear, and he runs right into it. He drops his weapon and falls to the ground." << endl;
						cout << "You kneel down over the corpse of the would-be assassin. You've done your duty, but took his life in the process. Could you have fought him in a way that wouldn't kill him? Now you'll never know." << endl;
						srand((unsigned)time(0));
						int rNumOne = (rand() % 10) + 1;
						if (rNumOne <= 2)
						{
							cout << "The hooded figure droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumOne <= 4)
						{
							cout << "The hooded figure droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumOne <= 6)
						{
							cout << "The hooded figure droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumOne <= 10)
						{
							cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
							cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
						}
						cout << "You go and notify the nearest guard of the incident, and rush off to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 4)
					{
						cout << "The man charges at you with his weapon. You quickly raise your sword to block the blow, and it works. Being that your weapon is so much bigger than his, you're easily able to overpower him." << endl;
						cout << "You hit the man with the hilt of your sword, and then kick him to the ground while he staggers. You're able to control him while a local bystander alerts a guard." << endl;
						srand((unsigned)time(0));
						int rNumOne = (rand() % 10) + 1;
						if (rNumOne <= 2)
						{
							cout << "The hooded figure droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumOne <= 4)
						{
							cout << "The hooded figure droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumOne <= 6)
						{
							cout << "The hooded figure droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumOne <= 10)
						{
							cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
							cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
						}
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
						srand((unsigned)time(0));
						int rNumOne = (rand() % 10) + 1;
						if (rNumOne <= 2)
						{
							cout << "The hooded figure droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumOne <= 4)
						{
							cout << "The hooded figure droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumOne <= 6)
						{
							cout << "The hooded figure droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumOne <= 10)
						{
							cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
							cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
						}
						cout << "You alert the nearest guard, and then rush to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You bash his arm with your shield, and his weapon flies out of his hand. Disarmed, he quickly surrenders." << endl;
						cout << "You restrain him, and tell a local bystander to go alert a guard." << endl;
						srand((unsigned)time(0));
						int rNumOne = (rand() % 10) + 1;
						if (rNumOne <= 2)
						{
							cout << "The hooded figure droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumOne <= 4)
						{
							cout << "The hooded figure droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumOne <= 6)
						{
							cout << "The hooded figure droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumOne <= 10)
						{
							cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
							cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
						}
						cout << "Once the guard takes the man away, you rush to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. You dodge his attack, and raise your shield to block his next blow." << endl;
						cout << "Unfortunately, he was expecting this, and stabs you below your shield. You drop your weapons and collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
						goto retry;
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
						srand((unsigned)time(0));
						int rNumOne = (rand() % 10) + 1;
						if (rNumOne <= 2)
						{
							cout << "The hooded figure droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumOne <= 4)
						{
							cout << "The hooded figure droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumOne <= 6)
						{
							cout << "The hooded figure droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumOne <= 10)
						{
							cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
							cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
						}
						cout << "You alert the nearest guard, and then rush to the palace. You're definitely late at this point!" << endl;
						system("pause");
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You knock an arrow and fire at his torso. The arrow hits him in the chest and he staggers, but then recovers and charges again." << endl;
						cout << "You have no choice but to fire again. You go to grab another arrow, but he reaches you too quickly. He stabs you through the heart, and you collapse. Soon after, he collapses beside you and dies." << endl;
						cout << "Game Over." << endl;
						system("pause");
						goto retry;
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. You fire an arrow into his leg, and he falls over, grabbing at his leg." << endl;
						cout << "You run over to him and aim another arrow at him, and threaten to shoot if he moves again." << endl;
						srand((unsigned)time(0));
						int rNumOne = (rand() % 10) + 1;
						if (rNumOne <= 2)
						{
							cout << "The hooded figure droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumOne <= 4)
						{
							cout << "The hooded figure droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumOne <= 6)
						{
							cout << "The hooded figure droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumOne <= 10)
						{
							cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
							cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
						}
						cout << "You tell a local bystander to go alert a guard. Once the guard has taken the would-be assassin away, you rush to the palace. You're definitely late at tis point!" << endl;
						system("pause");
					}
				}
				cout << "You reach the throne room, and the King is waiting for you. He looks angry." << endl;
				cout << "You: 'Sorry I'm late, my liege. Trouble on the road.'" << endl;
				cout << "The King grumbles." << endl;
				cout << "King: 'Yes, well... I trust you handled it appropriately? Make sure not to keep me waiting again.'" << endl;
				cout << "You: 'Yes sir. Sorry sir.'" << endl;
				system("pause");
				cout << "A few minutes later, in the King's war room..." << endl;
				system("pause");
				cout << "Noble: 'But how do we even know that these rumors are credible, your grace? Surely we would've noticed a massive army marching right towards us.'" << endl;
				cout << "General: 'You dare question the credibility of my scouts, worm? If not in the presence of the King, I'd have your head!'" << endl;
				cout << "King: 'Enough! General, what exactly did your scouts see?'" << endl;
				cout << "General: 'A few days ago, I sent a group of scouts out past the border. We do this regularly to check for this sort of threat. Only one of them returned. He said they saw a small group of men marching into the forest, and suddenly they were being bombared with arrows. He barely escaped himself.'" << endl;
				cout << "You: 'Why would they enter the forest? It takes them away from Vorthust...'" << endl;
				cout << "General: 'It takes them away from the front walls, yes. But if you know where you're going, you can end up right at the back of the castle.'" << endl;
				cout << "King: 'So that's what they're after. Trying to cut off our heads before we can marshal any kind of defense.'" << endl; 
				cout << "You: 'What do you want me to do, your grace?'" << endl;
				cout << "King: '" << name << ", I'm giving you 5000 men. First, confirm that this is an army and not just a group of brigandes. If it is an army, meet them in battle and make sure they don't reach us.'" << endl;
				cout << "You: 'As you wish, your grace. I'll leave at once.'" << endl;
				system("pause");
				cout << "Later the next day, you're preparing to march with your defense force, when a courier approaches you..." << endl;
				cout << "Courier: 'Sir, I have a royal missive for you.'" << endl;
				cout << "You: 'Royal missive? Does the King have new information?'" << endl;
				cout << "Courier: 'It's not from the King, sir.'" << endl;
				cout << "You raise an eyebrow, and take a look at the seal..." << endl;
				cout << "The courier was right. This isn't from the King, or rather, your King, at all. It's from a neighbouring kindgom of elves who are reknowned wizards. They're offering to send you troops for the upcoming battle, and seemingly aren't asking for anything in return." << endl;
				cout << "You: 'This doesn't make any sense. We haven't had dealings with the elves in over a century. And now out of nowhere they just want to help us out? They have to want something... they're just waiting until after we're in debt to them to reveal it.'" << endl;
				cout << "Courier: 'Don't know, sir. But the one who gave this to me made it very clear: they need an answer now.'" << endl;
				system("pause");
				cout << "Do you accept the elves' offer of support, or reject them? Their offer is awfuly suspicious, but their troops could be of massive help in the battle if there ends up being one." << endl;
				cout << "Press '1' to accept their offer, or '2' to politely decline." << endl;
				int support;
				cin >> support;
				if (support == 1)
				{
					cout << "You: 'Tell the elves I accept, and thank them for their generous offer.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "Later that day, 1000 elven wizards march into your camp. Whatever it is they're hoping to accomplish, you can't deny that their aid could certainly be the deciding factor of the battle." << endl;
					system("pause");
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Vorthust for decades, since the great war. They've grown further apart from you as of late, but to invade Vorthust outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "Strategy will be key if you want to save Vorthust. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
					int strategy;
					cin >> strategy;
					if (strategy == 1)  // ALTER CHANCES FOR ALL STRATS (SUPPORT)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 80)
						{
							cout << "You and your armies wait patiently in formation. Suddenly, arrows start raining from the sky. Most of your forces are wiped out within a few barrages. You charge your army into the forest to get out of the archer fire, but at this point, you have too few soldiers to make a difference. You and your surviving forces are cut down as soon as you enter the forest. Istevad's forces move on to sack the city." << endl;
							cout << "Game over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 2)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 20)
						{
							cout << "You send a strike team of archers and swordsmen into the woods. After a while, you hear a battle break out. Soon after, Istevad's army emerges from the forest, with seemingly little losses. Your strike team is nowhere to be seen." << endl;
							cout << "Their archers immediately begin bombarding your forces. You initial losses are heavy, but you're able to recover by charging them head on." << endl;
							cout << "The battle rages on for a long time. Your forced are equally matched in skill. However, eventually sheer numbers overwhelm you. Although you did very heavy damage to their army, you were not able to defeat them all. After you fall, what's left of the Istevad army falls back to regroup, and then proceeds to sack the city." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 3)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 60)
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "Unfortunately, you don't actually know where in the forest the enemy forces are, nor what kind of formations they're using." << endl;
							cout << "Though you do catch them offguard, they're quickly able to recover, and they use their formations against you. Your forces fight valiently against those they can actually see, but ultimately their forces overpower you. Your forces are quickly diminished, and you're captured. Their general decides to send you to Istevad to live out your days as a prisoner of war." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}

					}
				}
				else if (support == 2)
				{
					cout << "You: 'It's tempting, but I can't trust this offer out of nowhere. Tell them thanks, but no thanks.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Vorthust for decades, since the great war. They've grown further apart from you as of late, but to invade Vorthust outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "Strategy will be key if you want to save Vorthust. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
					int strategy;
					cin >> strategy;
					if (strategy == 1)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 80)
						{
							cout << "You and your armies wait patiently in formation. Suddenly, arrows start raining from the sky. Most of your forces are wiped out within a few barrages. You charge your army into the forest to get out of the archer fire, but at this point, you have too few soldiers to make a difference. You and your surviving forces are cut down as soon as you enter the forest. Istevad's forces move on to sack the city." << endl;
							cout << "Game over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 2)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 20)
						{
							cout << "You send a strike team of archers and swordsmen into the woods. After a while, you hear a battle break out. Soon after, Istevad's army emerges from the forest, with seemingly little losses. Your strike team is nowhere to be seen." << endl;
							cout << "Their archers immediately begin bombarding your forces. You initial losses are heavy, but you're able to recover by charging them head on." << endl;
							cout << "The battle rages on for a long time. Your forced are equally matched in skill. However, eventually sheer numbers overwhelm you. Although you did very heavy damage to their army, you were not able to defeat them all. After you fall, what's left of the Istevad army falls back to regroup, and then proceeds to sack the city." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 3)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 60)
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "Unfortunately, you don't actually know where in the forest the enemy forces are, nor what kind of formations they're using." << endl;
							cout << "Though you do catch them offguard, they're quickly able to recover, and they use their formations against you. Your forces fight valiently against those they can actually see, but ultimately their forces overpower you. Your forces are quickly diminished, and you're captured. Their general decides to send you to Istevad to live out your days as a prisoner of war." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}

					}

				}
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
				system("pause");
				cout << "A few minutes later, in the King's war room..." << endl;
				system("pause");
				cout << "Noble: 'But how do we even know that these rumors are credible, your grace? Surely we would've noticed a massive army marching right towards us.'" << endl;
				cout << "General: 'You dare question the credibility of my scouts, worm? If not in the presence of the King, I'd have your head!'" << endl;
				cout << "King: 'Enough! General, what exactly did your scouts see?'" << endl;
				cout << "General: 'A few days ago, I sent a group of scouts out past the border. We do this regularly to check for this sort of threat. Only one of them returned. He said they saw a small group of men marching into the forest, and suddenly they were being bombared with arrows. He barely escaped himself.'" << endl;
				cout << "You: 'Why would they enter the forest? It takes them away from Vorthust...'" << endl;
				cout << "General: 'It takes them away from the front walls, yes. But if you know where you're going, you can end up right at the back of the castle.'" << endl;
				cout << "King: 'So that's what they're after. Trying to cut off our heads before we can marshal any kind of defense.'" << endl;
				cout << "You: 'What do you want me to do, your grace?'" << endl;
				cout << "King: '" << name << ", I'm giving you 5000 men. First, confirm that this is an army and not just a group of brigandes. If it is an army, meet them in battle and make sure they don't reach us.'" << endl;
				cout << "You: 'As you wish, your grace. I'll leave at once.'" << endl;
				system("pause");
				cout << "Later the next day, you're preparing to march with your defense force, when a courier approaches you..." << endl;
				cout << "Courier: 'Sir, I have a royal missive for you.'" << endl;
				cout << "You: 'Royal missive? Does the King have new information?'" << endl;
				cout << "Courier: 'It's not from the King, sir.'" << endl;
				cout << "You raise an eyebrow, and take a look at the seal..." << endl;
				cout << "The courier was right. This isn't from the King, or rather, your King, at all. It's from a neighbouring kindgom of elves who are reknowned wizards. They're offering to send you troops for the upcoming battle, and seemingly aren't asking for anything in return." << endl;
				cout << "You: 'This doesn't make any sense. We haven't had dealings with the elves in over a century. And now out of nowhere they just want to help us out? They have to want something... they're just waiting until after we're in debt to them to reveal it.'" << endl;
				cout << "Courier: 'Don't know, sir. But the one who gave this to me made it very clear: they need an answer now.'" << endl;
				system("pause");
				cout << "Do you accept the elves' offer of support, or reject them? Their offer is awfuly suspicious, but their troops could be of massive help in the battle if there ends up being one." << endl;
				cout << "Press '1' to accept their offer, or '2' to politely decline." << endl;
				int support;
				cin >> support;
				if (support == 1)
				{
					cout << "You: 'Tell the elves I accept, and thank them for their generous offer.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "Later that day, 1000 elven wizards march into your camp. Whatever it is they're hoping to accomplish, you can't deny that their aid could certainly be the deciding factor of the battle." << endl;
					system("pause");
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Vorthust for decades, since the great war. They've grown further apart from you as of late, but to invade Vorthust outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "Strategy will be key if you want to save Vorthust. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
					int strategy;
					cin >> strategy;
					if (strategy == 1)   // ALTER CHANCES FOR ALL STRATS (SUPPORT)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 80)
						{
							cout << "You and your armies wait patiently in formation. Suddenly, arrows start raining from the sky. Most of your forces are wiped out within a few barrages. You charge your army into the forest to get out of the archer fire, but at this point, you have too few soldiers to make a difference. You and your surviving forces are cut down as soon as you enter the forest. Istevad's forces move on to sack the city." << endl;
							cout << "Game over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 2)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 20)
						{
							cout << "You send a strike team of archers and swordsmen into the woods. After a while, you hear a battle break out. Soon after, Istevad's army emerges from the forest, with seemingly little losses. Your strike team is nowhere to be seen." << endl;
							cout << "Their archers immediately begin bombarding your forces. You initial losses are heavy, but you're able to recover by charging them head on." << endl;
							cout << "The battle rages on for a long time. Your forced are equally matched in skill. However, eventually sheer numbers overwhelm you. Although you did very heavy damage to their army, you were not able to defeat them all. After you fall, what's left of the Istevad army falls back to regroup, and then proceeds to sack the city." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 3)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 60)
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "Unfortunately, you don't actually know where in the forest the enemy forces are, nor what kind of formations they're using." << endl;
							cout << "Though you do catch them offguard, they're quickly able to recover, and they use their formations against you. Your forces fight valiently against those they can actually see, but ultimately their forces overpower you. Your forces are quickly diminished, and you're captured. Their general decides to send you to Istevad to live out your days as a prisoner of war." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}

					}
				}
				else if (support == 2)
				{
					cout << "You: 'It's tempting, but I can't trust this offer out of nowhere. Tell them thanks, but no thanks.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Vorthust for decades, since the great war. They've grown further apart from you as of late, but to invade Vorthust outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "Strategy will be key if you want to save Vorthust. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
					int strategy;
					cin >> strategy;
					if (strategy == 1)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 80)
						{
							cout << "You and your armies wait patiently in formation. Suddenly, arrows start raining from the sky. Most of your forces are wiped out within a few barrages. You charge your army into the forest to get out of the archer fire, but at this point, you have too few soldiers to make a difference. You and your surviving forces are cut down as soon as you enter the forest. Istevad's forces move on to sack the city." << endl;
							cout << "Game over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 2)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 20)
						{
							cout << "You send a strike team of archers and swordsmen into the woods. After a while, you hear a battle break out. Soon after, Istevad's army emerges from the forest, with seemingly little losses. Your strike team is nowhere to be seen." << endl;
							cout << "Their archers immediately begin bombarding your forces. You initial losses are heavy, but you're able to recover by charging them head on." << endl;
							cout << "The battle rages on for a long time. Your forced are equally matched in skill. However, eventually sheer numbers overwhelm you. Although you did very heavy damage to their army, you were not able to defeat them all. After you fall, what's left of the Istevad army falls back to regroup, and then proceeds to sack the city." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture.'" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}
					}
					else if (strategy == 3)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 60)
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "Unfortunately, you don't actually know where in the forest the enemy forces are, nor what kind of formations they're using." << endl;
							cout << "Though you do catch them offguard, they're quickly able to recover, and they use their formations against you. Your forces fight valiently against those they can actually see, but ultimately their forces overpower you. Your forces are quickly diminished, and you're captured. Their general decides to send you to Istevad to live out your days as a prisoner of war." << endl;
							cout << "Game Over." << endl;
							system("pause");
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", my boy, you've saved the city. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with their ambassador.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sire! My family and I appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							goto retry;
						}

					}
				}

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
	else if (classChoice == 2) // Less big picture decisions, more friend/enemy interactions
	{
		cout << "Greetings, " << name << "! As a master wizard, you're fascinated with all things magic. Recently, citizens of Vorthust have been disappearing at night. Others have reported strange lights and sounds coming from the nearby forest. Some say it's a cult, and you'd very much like to find out for yourself." << endl;
	}
	else
	{
		cout << "I'm afraid that wasn't an option. Please press either '1', or '2'. Nothing else will work." << endl;
		goto retry;
	}
}





















// Random number generator & loot system for easy copy/paste

/* srand((unsigned)time(0));
int rNumOne = (rand() % 10) + 1;
if (rNumOne <= 2)
{
	cout << "The hooded figure droped 2 gold." << endl;
	cout << "Congratulations! You've recieved 2 gold!" << endl;
}
else if (rNumOne <= 4)
{
	cout << "The hooded figure droped 4 gold." << endl;
	cout << "Congratulations! You've recieved 4 gold!" << endl;
}
else if (rNumOne <= 6)
{
	cout << "The hooded figure droped 6 gold." << endl;
	cout << "Congratulations! You've recieved 6 gold!" << endl;
}
else if (rNumOne <= 10)
{
	cout << "The hooded figure droped 8 gold, and a reinforced steel breastplate!." << endl;
	cout << "Congratulations! You've recieved 8 gold and a reinforced steel breastplate, giving you +5 armor!" << endl;
} */ 