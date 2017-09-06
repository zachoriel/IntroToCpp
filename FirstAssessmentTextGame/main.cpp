// ANOTHER OVERUSED MEDIEVAL ADVENTURE

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
	cout << "" << endl;
	cout << "Press '1' for Soldier, '2' for Wizard." << endl;
	int classChoice;
	cin >> classChoice;
	if (classChoice == 1) // Less friend/enemy interaction, more big picture decisions
	{
		cout << "Greetings, " << name << "! As an honorable soldier of Gathe, the King has summoned you to the throne room to discuss rumors of a foreign army gathering nearby." << endl;
		system("pause");
		cout << "" << endl;
		cout << "As you're about to leave your house, you realize you don't have a weapon on you. Do you run down to the basement to grab one, or leave anyway?" << endl;
		cout << "" << endl;
		cout << "Press '1' to grab a weapon, or press '2' to leave without one." << endl;
		int Weapon;
		cin >> Weapon;
		if (Weapon == 1)
		{
			cout << "You quickly go to your basement, where you have a few weapons at your disposal. A longsword, a shortsword & shield, and a bow with arrows. Which weapon do you pick up?" << endl;
			cout << "" << endl;
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
			cout << "" << endl;
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
				cout << "" << endl;
				if (weaponChoice == 1)
				{
					cout << "You instinctively draw your longsword. Prepare for combat!" << endl;
					cout << "" << endl;
					cout << "Press '1' to swing your sword horizontally, '2' to swing vertically, '3' to jab, or '4' to block." << endl;
					int fightOne;
					cin >> fightOne;
					if (fightOne == 1)
					{
						cout << "The man charges at you with his weapon. You pull back to swing horizontally at him, but he reaches you before you can swing, and slices your throat. You collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You pull back to swing vertically at him, but before your sword can come down on him, he reaches you and stabs you in the heart, and you collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
						cout << "" << endl;
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
						cout << "" << endl;
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
						cout << "" << endl;
					}
					else
					{
						cout << "You freeze up. Suddenly, your years of training completely leaves you. The hooded figure marches right on up to you unchallenged, and kills you." << endl;
						cout << "Game over. Please enter a valid response." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (weaponChoice == 2)
				{
					cout << "You instinctively draw your sword and shield. Prepare for combat!" << endl;
					cout << "" << endl;
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
						cout << "" << endl;
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
						cout << "" << endl;
					}
					else if (fightOne == 3)
					{
						cout << "The man charges at you with his weapon. You dodge his attack, and raise your shield to block his next blow." << endl;
						cout << "Unfortunately, he was expecting this, and stabs you below your shield. You drop your weapons and collapse." << endl;
						cout << "Game Over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else
					{
						cout << "You freeze up. Suddenly, your years of training completely leaves you. The hooded figure marches right on up to you unchallenged, and kills you." << endl;
						cout << "Game over. Please enter a valid response." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (weaponChoice == 3)
				{
					cout << "You instinctively draw your bow. Prepare for combat!" << endl;
					cout << "" << endl;
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
						cout << "" << endl;
					}
					else if (fightOne == 2)
					{
						cout << "The man charges at you with his weapon. You knock an arrow and fire at his torso. The arrow hits him in the chest and he staggers, but then recovers and charges again." << endl;
						cout << "You have no choice but to fire again. You go to grab another arrow, but he reaches you too quickly. He stabs you through the heart, and you collapse. Soon after, he collapses beside you and dies." << endl;
						cout << "Game Over." << endl;
						system("pause");
						cout << "" << endl;
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
						cout << "" << endl;
					}
					else
					{
						cout << "You freeze up. Suddenly, your years of training completely leaves you. The hooded figure marches right on up to you unchallenged, and kills you." << endl;
						cout << "Game over. Please enter a valid response." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				cout << "You reach the throne room, and the King is waiting for you. He looks angry." << endl;
				cout << "You: 'Sorry I'm late, my liege. Trouble on the road.'" << endl;
				cout << "The King grumbles." << endl;
				cout << "King: 'Yes, well... I trust you handled it appropriately? Make sure not to keep me waiting again.'" << endl;
				cout << "You: 'Yes sir. Sorry sir.'" << endl;
				system("pause");
				cout << "" << endl;
				cout << "A few minutes later, in the King's war room..." << endl;
				system("pause");
				cout << "" << endl;
				cout << "Noble: 'But how do we even know that these rumors are credible? Surely we would've noticed a massive army marching right towards us.'" << endl;
				cout << "General: 'You dare question the credibility of my scouts?! If not in the presence of the King, I'd have your head!'" << endl;
				cout << "King: 'Enough! General, what exactly did your scouts see?'" << endl;
				cout << "General: 'A few days ago, I sent a group of scouts out past the border. We do this regularly to check for this sort of threat. Only one of them returned. He said they saw a small group of men marching into the forest, and suddenly they were being bombared with arrows. He barely escaped himself.'" << endl;
				cout << "You: 'Why would they enter the forest? It takes them away from Gathe...'" << endl;
				cout << "General: 'It takes them away from the front walls, yes. But if you know where you're going, you can end up right at the back of the castle.'" << endl;
				cout << "King: 'So that's what they're after. Trying to cut off our heads before we can marshal any kind of defense.'" << endl;
				cout << "You: 'What do you want me to do, sir?'" << endl;
				cout << "King: '" << name << ", I'm giving you 5000 men. First, confirm that this is an army and not just a group of brigandes. If it is an army, meet them in battle and make sure they don't reach us.'" << endl;
				cout << "You: 'As you wish. I'll leave at once.'" << endl;
				system("pause");
				cout << "" << endl;
				cout << "Later the next day, you're preparing to march with your defense force, when a courier approaches you..." << endl;
				cout << "Courier: 'Sir, I have a royal missive for you.'" << endl;
				cout << "You: 'Royal missive? Does the King have new information?'" << endl;
				cout << "Courier: 'It's not from the King, sir.'" << endl;
				cout << "You raise an eyebrow, and take a look at the seal..." << endl;
				cout << "The courier was right. This isn't from the King, or rather, your King, at all. It's from a neighbouring kindgom of elves who are reknowned wizards. They're offering to send you troops for the upcoming battle, and seemingly aren't asking for anything in return." << endl;
				cout << "You: 'This doesn't make any sense. We haven't had dealings with the elves in over a century. And now out of nowhere they just want to help us out? They have to want something... they're just waiting until after we're in debt to them to reveal it.'" << endl;
				cout << "Courier: 'Don't know, sir. But the one who gave this to me made it very clear: they need an answer now.'" << endl;
				system("pause");
				cout << "" << endl;
				cout << "Do you accept the elves' offer of support, or reject them? Their offer is awfuly suspicious, but their troops could be of massive help in the battle if there ends up being one." << endl;
				cout << "" << endl;
				cout << "Press '1' to accept their offer, or '2' to politely decline." << endl;
				int support;
				cin >> support;
				if (support == 1)
				{
					cout << "You: 'Tell the elves I accept, and thank them for their generous offer.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "" << endl;
					cout << "Later that day, 1000 elven wizards march into your camp. Whatever it is they're hoping to accomplish, you can't deny that their aid could certainly be the deciding factor of the battle." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Gathe for decades, since the great war. They've grown further apart from you as of late, but to invade Gathe outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "" << endl;
					cout << "Strategy will be key if you want to save Gathe. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
					int strategy;
					cin >> strategy;
					if (strategy == 1)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 40)
						{
							cout << "You and your armies wait patiently in formation. Suddenly, arrows start raining from the sky. Most of your forces are wiped out within a few barrages. You charge your army into the forest to get out of the archer fire, but at this point, you have too few soldiers to make a difference. You and your surviving forces are cut down as soon as you enter the forest. Istevad's forces move on to sack the city." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I'll have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
					}
					else if (strategy == 2)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 10)
						{
							cout << "You send a strike team of archers, wizards and swordsmen into the woods. After a while, you hear a battle break out. Soon after, Istevad's army emerges from the forest, with seemingly little losses. Your strike team is nowhere to be seen." << endl;
							cout << "Their archers immediately begin bombarding your forces. You initial losses are heavy, but you're able to recover by charging them head on." << endl;
							cout << "The battle rages on for a long time. Your forced are equally matched in skill. However, eventually sheer numbers overwhelm you. Although you did very heavy damage to their army, you were not able to defeat them all. After you fall, what's left of the Istevad army falls back to regroup, and then proceeds to sack the city." << endl;
							cout << "Game Over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers, wizards and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I'll have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "Though you do catch them offguard, they're quickly able to recover, and they use their formations against you. Your forces fight valiently against those they can actually see, but ultimately their forces overpower you. It didn't help that the wizards you accepted aid from accidentially set the forest on fire. Your forces are quickly diminished, and you're captured. Their general decides to send you to Istevad to live out your days as a prisoner of war." << endl;
							cout << "Game Over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I'll have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}

					}
					else
					{
						cout << "No. Restarting." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (support == 2)
				{
					cout << "You: 'It's tempting, but I can't trust this offer out of nowhere. Tell them thanks, but no thanks.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Gathe for decades, since the great war. They've grown further apart from you as of late, but to invade Gathe outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "" << endl;
					cout << "Strategy will be key if you want to save Gathe. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}

					}
					else
					{
						cout << "No. Restarting." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}

				}
			}
			else if (posterChoice == 2)
			{
				cout << "As you walk, a hooded man passes by you with his head down. This seems suspicious, but you carry on. You can't be late, after all!" << endl;
				cout << "You reach the throne room, and the King is waiting for you. He looks concerned, but otherwise content." << endl;
				cout << "King: 'Good to see you, " << name << ". Thank you for coming. We have much to discuss.'" << endl;
				system("pause");
				cout << "" << endl;
				cout << "As the two of you talk, a guard comes running in." << endl;
				cout << "Guard: 'Sirs, there's a body just outside the gates!" << endl;
				cout << "King: 'What?! Who is it?'" << endl;
				cout << "Guard: 'One of the bards at the inn, sire. A weapon was left next to the body, one of the swords stolen from the blacksmith earlier'" << endl;
				cout << "King: 'Damn. That's another problem we gotta fix with this city, " << name << ". Unfortunately, we have more pressing matters. Guard, deal with the body and try to track down the murderer.'" << endl;
				cout << "The guard leaves to do as he is told, and you can't help but wonder if you could've done more to help. But there's no time for regret now, the King needs to talk with you." << endl;
				system("pause");
				cout << "" << endl;
				cout << "A few minutes later, in the King's war room..." << endl;
				system("pause");
				cout << "" << endl;
				cout << "Noble: 'But how do we even know that these rumors are credible? Surely we would've noticed a massive army marching right towards us.'" << endl;
				cout << "General: 'You dare question the credibility of my scouts?! If not in the presence of the King, I'd have your head!'" << endl;
				cout << "King: 'Enough! General, what exactly did your scouts see?'" << endl;
				cout << "General: 'A few days ago, I sent a group of scouts out past the border. We do this regularly to check for this sort of threat. Only one of them returned. He said they saw a small group of men marching into the forest, and suddenly they were being bombared with arrows. He barely escaped himself.'" << endl;
				cout << "You: 'Why would they enter the forest? It takes them away from Gathe...'" << endl;
				cout << "General: 'It takes them away from the front walls, yes. But if you know where you're going, you can end up right at the back of the castle.'" << endl;
				cout << "King: 'So that's what they're after. Trying to cut off our heads before we can marshal any kind of defense.'" << endl;
				cout << "You: 'What do you want me to do, sir?'" << endl;
				cout << "King: '" << name << ", I'm giving you 5000 men. First, confirm that this is an army and not just a group of brigandes. If it is an army, meet them in battle and make sure they don't reach us.'" << endl;
				cout << "You: 'As you wish. I'll leave at once.'" << endl;
				system("pause");
				cout << "" << endl;
				cout << "Later the next day, you're preparing to march with your defense force, when a courier approaches you..." << endl;
				cout << "Courier: 'Sir, I have a royal missive for you.'" << endl;
				cout << "You: 'Royal missive? Does the King have new information?'" << endl;
				cout << "Courier: 'It's not from the King, sir.'" << endl;
				cout << "You raise an eyebrow, and take a look at the seal..." << endl;
				cout << "The courier was right. This isn't from the King, or rather, your King, at all. It's from a neighbouring kindgom of elves who are reknowned wizards. They're offering to send you troops for the upcoming battle, and seemingly aren't asking for anything in return." << endl;
				cout << "You: 'This doesn't make any sense. We haven't had dealings with the elves in over a century. And now out of nowhere they just want to help us out? They have to want something... they're just waiting until after we're in debt to them to reveal it.'" << endl;
				cout << "Courier: 'Don't know, sir. But the one who gave this to me made it very clear: they need an answer now.'" << endl;
				system("pause");
				cout << "" << endl;
				cout << "Do you accept the elves' offer of support, or reject them? Their offer is awfuly suspicious, but their troops could be of massive help in the battle if there ends up being one." << endl;
				cout << "" << endl;
				cout << "Press '1' to accept their offer, or '2' to politely decline." << endl;
				int support;
				cin >> support;
				if (support == 1)
				{
					cout << "You: 'Tell the elves I accept, and thank them for their generous offer.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "" << endl;
					cout << "Later that day, 1000 elven wizards march into your camp. Whatever it is they're hoping to accomplish, you can't deny that their aid could certainly be the deciding factor of the battle." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Gathe for decades, since the great war. They've grown further apart from you as of late, but to invade Gathe outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "" << endl;
					cout << "Strategy will be key if you want to save Gathe. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}

					}
					else
					{
						cout << "No. Restarting." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (support == 2)
				{
					cout << "You: 'It's tempting, but I can't trust this offer out of nowhere. Tell them thanks, but no thanks.'" << endl;
					cout << "Courier: 'At once, sir.'" << endl;
					cout << "The courier runs off to deliver your response. You go back to planning." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, camped just outside the forest that serves as your northern border, a scout enters your tent." << endl;
					cout << "Scout: 'Sir, if you have a moment?'" << endl;
					cout << "You: 'Of course. What is it?'" << endl;
					cout << "Scout: We've made contact with the enemy, and it is an army, but...'" << endl;
					cout << "You: 'But what?'" << endl;
					cout << "Scout: They're carrying the banner of Istevad, sir.'" << endl;
					cout << "Your eyes widen. Istevad? They've been allied with Gathe for decades, since the great war. They've grown further apart from you as of late, but to invade Gathe outright? What reason could they possibly have for doing this? Their only other enemies are..." << endl;
					cout << "Suddenly you realize. Istevad and the elves are sworn enemies. It all makes sense now." << endl;
					cout << "You: 'This is all a misunderstanding. Send a courier to their general at once, I wish to speak with him as a friend.'" << endl;
					cout << "The scout nods and leaves your tent. You shake your head. This is truly a messy situation, but you're confident it can be resolved." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A day later, a riderless horse wanders into your camp. It's carrying a satchel with something big and round inside it." << endl;
					cout << "You go over to take a look, and it's the head of the courier you sent yesterday! Whatever it is that got Istevad riled up, they clearly have no intent of backing down. It seems you'll have no choice but to fight your former allies." << endl;
					system("pause");
					cout << "" << endl;
					cout << "A few days later, it's time to start making battle plans." << endl;
					cout << "" << endl;
					cout << "Strategy will be key if you want to save Gathe. Press '1' to hold position and let them come to you, '2' to send a strike team into the forest to clear out as much of them as possible, or '3' to charge your entire army into the forest." << endl;
					int strategy;
					cin >> strategy;
					if (strategy == 1)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 80)  // PLAY AROUND WITH CHANCES FOR NO SUPPORT
						{
							cout << "You and your armies wait patiently in formation. Suddenly, arrows start raining from the sky. Most of your forces are wiped out within a few barrages. You charge your army into the forest to get out of the archer fire, but at this point, you have too few soldiers to make a difference. You and your surviving forces are cut down as soon as you enter the forest. Istevad's forces move on to sack the city." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You and your armies wait patiently in formation. Eventually Istevad's forces emerge from the forest. Turns out their army is much smaller than previously believed. They charge head on, and your spearmen make quick work of their horseriders. Your archers and swordsmen are easily able to fend off the rest of them. The survivors run back into the forest. Congratulations, you've won! Time to report back to the King." << endl;
							cout << "You return to the throne room victorious, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You send a strike team of archers and swordsmen into the woods. They're gone for a long time." << endl;
							cout << "As you start to worry that the strike team was compromised, a large group of Istevad soldiers come running out of the forest disorganized and confused. Clearly, the strike team did their job. What's left of their army is in shambles." << endl;
							cout << "Seeing an opportunity, you charge the rest of your forces head on into their confused and unsuspecting forces. They stood little chance, and you make quick work of them. Victorious, you return to the palace to meet with the King about what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture.'" << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
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
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "Growing impatient, you charge your forces into the forest. Surely you can beat them with the element of surprise on your side." << endl;
							cout << "You quickly start to second guess yourself. Was this a strategically smart move? You suspect not." << endl;
							cout << "Remarkably, it did work. Though there was much about Istevad's forces you didn't know, they were completely disorganized when you found them. They were unable to recover from the surprise attack, and your forces made quick work of them. You capture their general, and take him with you back to the palace. The King will want to know what happened." << endl;
							cout << "You return to the throne room, and the King is waiting for you. You sent a courier ahead of time to give the King the news." << endl;
							cout << "King: '" << name << ", you've saved many lives this day. It's a shame Istevad wasn't willing to communicate with us. Now I have to deal with them.'" << endl;
							cout << "King: 'But, that's none of your concern. You've done your duty, and you did it well. I'm giving you a large plot of land near the keep, so that you and your family may live in comfort as a reward for your outstanding service.'" << endl;
							cout << "You: 'Thank you, sir! We appreciate your gesture. But what to do with our prisoner here?'" << endl;
							cout << "King: 'Ah. Lock him up in the royal dungeon. He will be one of the topics I discuss with their ambassador. Thank you, " << name << "." << endl;
							cout << "" << endl;
							cout << "Congratulations! You've beat the game! But this didn't necessarily have to be the way things end for " << name << ". Press any button to go back to the beginning, if you choose. See if making different decisions change your outcome." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}

					}
					else
					{
						cout << "No. Restarting." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "I'm afraid that isn't a valid option. Please try again." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}

			}
			else
			{
				cout << "You must make a valid choice here." << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}

		}
		else if (Weapon == 2)
		{
			cout << "You leave your house without a weapon, and head to the palace." << endl;
			cout << "As you make your way to the palace, a man sneaks up behind you. You hear him coming, and turn around to face him." << endl;
			cout << "The hooded figure charges at you with his weapon. Since you didn't bother to take a weapon with you, all you have is your fists. You take a good swing at him, and you do hit him, but he gets the last laugh as he stabs you." << endl;
			cout << "Game Over." << endl;
			system("pause");
			cout << "" << endl;

		}
		else
		{
			cout << "You need to make a valid choice before moving on." << endl;
			system("pause");
			cout << "" << endl;
			goto retry;
		}
	}
	else if (classChoice == 2) // Less big picture decisions, more friend/enemy interaction
	{
		cout << "Greetings, " << name << "! As a master wizard, you're fascinated with all things magic. Recently, citizens of Gathe have been disappearing at night. Others have reported strange lights and sounds coming from the nearby forest. Some say it's a cult, and you'd very much like to find out for yourself." << endl;
		system("pause");
		cout << "" << endl;
		cout << "You've been conducting research for weeks. Something about these disappearances doesn't add up. Citizens have gotten lost in the woods and not returned before, but never at this frequency, and without all the commotion. Could it truly be a cult performing some sort of rituals? It would certainly explain the lights and sounds. Either way, you're not coming home until you find out." << endl;
		system("pause");
		cout << "" << endl;
		cout << "You wait until after dark to leave. The people of Gathe already don't trust you or your kind, best not to attract any extra attention by going to the forest in broad daylight." << endl;
		cout << "As you approach the outskirts of town, you pass by an alchemist's shop. Maybe they could sell you something useful. Do you go inside? Press '1' to go in the shop, or '2' to move on." << endl;
		int potions;
		cin >> potions;
		if (potions == 1)
		{
			cout << "You walk into the shop, and are immediately greeted by the alchemist." << endl;
			cout << "Alchemist: 'Good evening, sir. What brings you out here this late at night?'" << endl;
			cout << "" << endl;
			cout << "Press '1' to tell the truth, or '2' to lie." << endl;
			int potionAnswer;
			cin >> potionAnswer;
			if (potionAnswer == 1)
			{
				cout << "You: 'I'm headed to the woods. It's only a matter of time before these disappearances become personal, and I intend to put a stop to them.'" << endl;
				cout << "Alchemist: 'I see. So you don't think they're a coincidence?'" << endl;
				cout << "You: 'No. Trees don't glow red and chant all night long.'" << endl;
				cout << "Alchemist: 'Fair point. Well, I'd be glad to help you if there's something in here you think you could use.'" << endl;
			}
			else if (potionAnswer == 2)
			{
				cout << "You: 'I'm just doing some research, and need some potions. A wizard's gotta stay busy, you know?'" << endl;
				cout << "The alchemist stares at you for a moment. He doesn't seem to believe you. You start to say something else, when he cuts you off" << endl;
				cout << "Alchemist: 'Of course. I studied once at the mage's college myself before becoming an alchemist. Anything in here you think you could use?'" << endl;
			}
			else
			{
				cout << "You start to mutter some sort of answer, but freeze. You don't know what to see. The alchemist gets suspicious, and sends his assistant to find a guard. You're brought into the barracks and interrogated. No investigations for you tonight." << endl;
				cout << "Game over." << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}
			cout << "You see three scrolls on the shelf. A scroll of health, which will make an ordinarilly lethal blow against you less damaging, an energy potion, which will allow you to cast more spells before running out of energy, and a wildfire potion, which will enhance the power of all your abilities. These would certainly be useful, but they would cost a lot." << endl;
			cout << "" << endl;
			cout << "Press '1' to take the scrolls, or '2' to pass on them and move on." << endl;
			int potionChoice;
			cin >> potionChoice;
			if (potionChoice == 1)
			{
				cout << "You: 'I'll take those three scrolls, please.'" << endl;
				cout << "Alchemist: 'Certainly. That'll be 15 gold pieces.'" << endl;
				cout << "You hand him the gold, and he gives you the scrolls." << endl;
				cout << "You: 'Thanks. Take care.'" << endl;
				cout << "Alchemist: 'You as well.'" << endl;
				cout << "" << endl;
				cout << "You leave the shop with the scrolls in your bag, and carry on to the front gates." << endl;
				system("pause");
				cout << "" << endl;
			}
			else if (potionChoice == 2)
			{
				cout << "You leave the shop empty handed. Those scrolls certainly could've helped. Oh well. Good thing this is a video game and you can start over at any time! Yay, 4th wall breaking! :D" << endl;
				system("pause");
				cout << "" << endl;
			}
			else
			{
				cout << "Alchemist: 'I'm sorry, we don't seem to have any of that right now.'" << endl;
				cout << "You leave the shop empty handed. Those scrolls certainly could've helped. If only there had been some sort of prompt telling you how to actually pick one of them. Oh well. Good thing this is a video game and you can start over at any time! Yay, 4th wall breaking! :D" << endl;
				system("pause");
				cout << "" << endl;
			}
			// Same story as below but w/ modified %s for scrolls.
			cout << "A ways outside the gates, you pass a tavern. Being outside the city, most of the patrons are hunters." << endl;
			cout << "You can hear a lot of shouting coming from the tavern. Glancing inside, you see a man in a mask with his sword out." << endl;
			cout << "" << endl;
			cout << "Press '1' to investigate, or '2' to continue on." << endl;
			int tavernFight;
			cin >> tavernFight;
			if (tavernFight == 1)
			{
					cout << "You walk through the tavern doors, and sure enough, the man you saw is robbing the place. It seems that in the commotion, a small fire has also started in the corner of the room." << endl;
					cout << "You: 'Hey, buddy, what's going on here?'" << endl;
					cout << "The man turns around and points his dagger at you." << endl;
					cout << "Thief: 'Mind your business! Get over here and sit with the rest of these fools.'" << endl;
					cout << "You don't move, and the man gets angry. He puts down his bag, and pulls out a second dagger. He starts to charge you. Prepare to fight!" << endl;
					cout << "" << endl;
					cout << "Press '1' to attempt to shoot a fireball at him, '2' to attempt to freeze him in place, or '3' to attempt to control his mind." << endl;
					int wizardBarFight;
					cin >> wizardBarFight;
					if (wizardBarFight == 1)
					{
						srand((unsigned)time(0));
						int rNumOne = (rand() % 100) + 1;
						if (rNumOne <= 70)
						{
							cout << "You create a fireball in your hands and fire it at the man. Unfortunately, your scroll of wildfire amplifies your fireball too much. It hits the man, but it also causes and explosion that sets the whole tavern ablaze. Those that survived run for the town. You survived as well, but are quickly restrained by a pair of hunters, who drag you all the way to town where the guards arrest you." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You create a fireball in your hands and fire it at the man. Your scroll of wildfire amplifies the ability, and when the fireball hits him, he instantly disintigrates. Pretty morbid, but it worked." << endl;
							cout << "You kneel over the ashy remains of the thief, and go through his somehow unburnt belongings." << endl;
							srand((unsigned)time(0));
							int rNumLoot = (rand() % 10) + 1;
							if (rNumLoot <= 2)
							{
								cout << "The thief droped 2 gold." << endl;
								cout << "Congratulations! You've recieved 2 gold!" << endl;
							}
							else if (rNumLoot <= 4)
							{
								cout << "The thief droped 4 gold." << endl;
								cout << "Congratulations! You've recieved 4 gold!" << endl;
							}
							else if (rNumLoot <= 6)
							{
								cout << "The thief droped 6 gold." << endl;
								cout << "Congratulations! You've recieved 6 gold!" << endl;
							}
							else if (rNumLoot <= 10)
							{
								cout << "The thief droped 8 gold, and a castle-tailored Archmage's robe." << endl;
								cout << "Congratulations! You've recieved 8 gold and a castle-tailored Archmage's robe, giving you +5 intellect!" << endl;
								cout << "You put on your new robe, and leave the tavern to continue your quest." << endl;
								system("pause");
								cout << "" << endl;
							}
						}
					}
					else if (wizardBarFight == 2)
					{
						srand((unsigned)time(0));
						int rNumTwo = (rand() % 100) + 1;
						if (rNumTwo <= 30)
						{
							cout << "You focus your spell, and cast it. Unfortunately, you were distracted by the cries of one of the patrons, and your spell missed. The thief reaches you, and stabs you with both of his daggers. Your lifeless body falls to the floor." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You focus your spell, and cast it. Just before the thief reaches you, a ring of ice surrounds his legs and freezes him in his place." << endl;
							cout << "A pair of hunters at the tavern restrain him while you take his belongings and wait for a guard to arrive." << endl;
							srand((unsigned)time(0));
							int rNumLoot = (rand() % 10) + 1;
							if (rNumLoot <= 2)
							{
								cout << "The thief droped 2 gold." << endl;
								cout << "Congratulations! You've recieved 2 gold!" << endl;
							}
							else if (rNumLoot <= 4)
							{
								cout << "The thief droped 4 gold." << endl;
								cout << "Congratulations! You've recieved 4 gold!" << endl;
							}
							else if (rNumLoot <= 6)
							{
								cout << "The thief droped 6 gold." << endl;
								cout << "Congratulations! You've recieved 6 gold!" << endl;
							}
							else if (rNumLoot <= 10)
							{
								cout << "The thief droped 8 gold, and a castle-tailored Archmage's robe." << endl;
								cout << "Congratulations! You've recieved 8 gold and a castle-tailored Archmage's robe, giving you +5 intellect!" << endl;
								cout << "You put on your new robe, and leave the tavern to continue your quest." << endl;
								system("pause");
								cout << "" << endl;
							}
						}
					}
					else if (wizardBarFight == 3)
					{
						srand((unsigned)time(0));
						int rNumThree = (rand() % 100) + 1;
						if (rNumThree <= 40)
						{
							cout << "You try your best to focus, as this is a complicated spell." << endl;
							cout << "Unfortunately, you just couldn't focus enough. His mind resisted your attempt to control it, and he stabs you with both of his daggers. Your lifless body falls to the floor." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else
						{
							cout << "You try your best to focus, as this is a complicated spell." << endl;
							cout << "Thankfully, it worked! Just before he reaches you, you take over his mind. He stops in place. Doing exactly what you're making him do, he drops his weapons, puts his hands behind his back, and lays on the floor." << endl;
							cout << "A pair of hunters take this opportunity to restrain the man, so you can stop your spell." << endl;
							cout << "You go over to the man and take his belongings while everyone waits for a guard to show up." << endl;
							srand((unsigned)time(0));
							int rNumLoot = (rand() % 10) + 1;
							if (rNumLoot <= 2)
							{
								cout << "The thief droped 2 gold." << endl;
								cout << "Congratulations! You've recieved 2 gold!" << endl;
							}
							else if (rNumLoot <= 4)
							{
								cout << "The thief droped 4 gold." << endl;
								cout << "Congratulations! You've recieved 4 gold!" << endl;
							}
							else if (rNumLoot <= 6)
							{
								cout << "The thief droped 6 gold." << endl;
								cout << "Congratulations! You've recieved 6 gold!" << endl;
							}
							else if (rNumLoot <= 10)
							{
								cout << "The thief droped 8 gold, and a castle-tailored Archmage's robe." << endl;
								cout << "Congratulations! You've recieved 8 gold and a castle-tailored Archmage's robe, giving you +5 intellect!" << endl;
								cout << "You put on your new robe, and leave the tavern to continue your quest." << endl;
								system("pause");
								cout << "" << endl;
							}
						}
					}
					else
					{
						cout << "You start to cast a spell, but can't shake this thought that some all powerful being, a 'player', if you will, was cheeky and input an invalid option. The thought consumes you, and you die before the thief can even reach you." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					cout << "You leave the tavern and head deeper into the forest." << endl;
					cout << "Pretty soon, you come across a fork in the road. You can either continue going straight, or take the path leading to the right. There are no signs that indicate where each path leads, so it's anyone's guess where each one leads." << endl;
					cout << "" << endl;
					cout << "Press '1' to continue straight, or '2' to take the path leading right." << endl;
					int pathChoice;
					cin >> pathChoice;
					if (pathChoice == 1)
					{
						cout << "You continue going straight. Things are pretty uneventful for a while. So far you haven't encountered anything suspicious. If you don't find something soon, the sun will rise and you'll have to wait until tomorrow night." << endl;
						cout << "You stop and look around when you hear a loud howl." << endl;
						cout << "Out of seemingly nowhere, a rabid wolf knocks you to the ground. It gets ontop of you, but you quickly put up a magic barrier to prevent it from eating you." << endl;
						cout << "You have to act quickly, as your barrier won't last long." << endl;
						cout << "" << endl;
						cout << "Press '1' to set the wolf on fire, '2' to conjure a spectral dagger and stab the wolf with it, or '3' to turn invisible and throw it off of you." << endl;
						int wolfFight;
						cin >> wolfFight;
						if (wolfFight == 1)
						{
							cout << "You raise your hand to the wolf's chest and set it on fire. Unfortunately, it didn't run away like you thought it would. Instead it dies on top of you, and you aren't able to muster up the strength to get it off. Your barrier shatters and the flaming corpse of the wolf falls directly onto you." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
						else if (wolfFight == 2)
						{
							cout << "You conjure a spectral dagger, and stab the wolf, who dies. You push it's corpse off of you, and get up. You're all bruised up, but alive." << endl;
							cout << "You continue along the path. You must find something before the sun comes up!" << endl;
							system("pause");
							cout << "" << endl;
						}
						else if (wolfFight == 3)
						{
							cout << "You cast an invisibility spell. As you try to knock the wolf off of you, it starts biting all over the place in confusion." << endl;
							cout << "Eventually you get the wolf off you, and you're able to sneak away while it rabidly bites the air around it, thinking you might still be there." << endl;
							cout << "When you're far away from the wolf, you remove your invisibility spell. You're alive, but have a nasty bite on your left arm. It must have gotten you while you were trying to get if off of you." << endl;
							cout << "There's no time to worry about that now. You wrap the wound, and continue with your quest. You must find something before the sun comes up!" << endl;
							system("pause");
							cout << "" << endl;
						}
						else
						{
							cout << "Nice try." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
					}
					else if (pathChoice == 2)
					{
						cout << "You follow the path to the right. Things are quiet for a while." << endl;
						cout << "You stop and look around when you hear a quiet laugh." << endl;
						cout << "Out of seemingly nowhere, a forest troll leaps from the trees and lands ontop of you. Luckily, you were able to put up a magic barrier in time, which blocked his rapid axe swings." << endl;
						cout << "You'll have to act quickly if you want to survive this forest troll attack." << endl;
						cout << "" << endl;
						cout << "Press '1' to conjure a spectral bear to fight the forest troll, '2' to try and disarm him, or '3' to talk him down." << endl;
						int trollFight;
						cin >> trollFight;
						if (trollFight == 1)
						{
							cout << "You conjure a spectral bear, which charges the forest troll and gets him off of you." << endl;
							cout << "Frightened, the forest troll runs away." << endl;
							cout << "You nod at your creation approvingly, and it disappears. On with your quest. Hopefully that forest troll doesn't come back for more." << endl;
							system("pause");
							cout << "" << endl;
						}
						else if (trollFight == 2)
						{
							cout << "While still blocking his attacks with your barrier, you try to grab one of his axes." << endl;
							cout << "The forest troll, blinded by his bloodlust, doesn't notice, and you're able to take one of his axes." << endl;
							cout << "The forest troll looks at you with rage and bewilderment, but is only able to stare for a second before you strike him with the axe." << endl;
							cout << "You shove the forest troll's body off of you, get up, and continue with your quest. You don't have time for this nonsense." << endl;
							system("pause");
							cout << "" << endl;
						}
						else if (trollFight == 3)
						{
							cout << "You: 'Hey, stop! STOP! What do you want? Gold?'" << endl;
							cout << "The troll stops attacking you for a moment and stares down at you." << endl;
							cout << "Troll: 'GOLD?! Hahahahaha, stupid human. My tribe will honor me for your head!'" << endl;
							cout << "While the troll is busy laughing at you, you take down your magic barrier, raise your hand, and engulf the troll in flames. It runs away screaming for a moment before collapsing." << endl;
							cout << "You get up, brush yourself off, and sigh." << endl;
							cout << "You: 'Someone really needs to deal with all of these forest troll tribes.'" << endl;
							cout << "You'll have to petition the King about that another time. Right now, you have a job to do, and are running out of time to do it." << endl;
							system("pause");
							cout << "" << endl;
						}
						else
						{
							cout << "Unable to think of anything in time, the forest troll's rapid axe strikes shatter your barrier, and you're slain." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
					}
					else
					{
						cout << "Not having any valid decision to make, you just stand there. Forever. Eventually you die of starvation." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					cout << "About an hour later, you see an ominous red glow in the distance, and can hear faint chanting. You've finally found what you're looking for!" << endl;
					cout << "You hurry to where the glow and chanting are coming from, and find yourself at a crater. At the bottom of the crater, a bunch of people in robes appear to be performing some sort of ritual around an altar. You hide behind a rock and watch." << endl;
					cout << "Upon closer inspection, you see a man laying on the altar. No... not just any man, it's the blacksmith who went missing just two days ago! So this is where he went. These cultists must've kidnapped him. But how will you save him? You don't even know what exactly they're doing." << endl;
					cout << "" << endl;
					cout << "Press '1' to intervene and attempt to rescue the man, or press '2' to stay where you are and observe." << endl;
					int altarChoice;
					cin >> altarChoice;
					if (altarChoice == 1)
					{
						cout << "You stand up, and hurl a massive fire ball towards a group of cultists. Thanks to having the element of surprise, and that scroll of wildfire, you're spell actually takes out a large number of the cultists. Unfortunately, there are still too many of them and they quickly overwhelm you." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else if (altarChoice == 2)
					{
						cout << "You watch to try to get a better idea of what the cultists are doing. After a minute or so, the man starts to turn black and his body contorts. Horrified, you prepare to go in and save him." << endl;
						cout << "Before you can go, you're grabbed on the arm. You turn around, and a man wearing the same robes as the cultists is staring at you, with a finger over his mouth." << endl;
						cout << "Cultist: 'Shh... there's nothing you can do for him now.'" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "You get up to try and rescue the man, but second guess yourself. In your hesitation, the cultists saw you, and drained your life away with their dark magics." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					cout << "You watch in horror as the man on the altar is sacrificed. The cultists' chanting gets louder as time goes on, and eventually, the burnt and mangled body of the man morphs into some sort of... demon?" << endl;
					cout << "What you see makes you want to hurl. So this was the fate of everyone who disappeared. You start to wonder if these cultists have a whole group of demons hidden around somewhere, and what they could be wanting to use them for. Pretty quickly, you remember the cultist crouched next to you, and you raise your hand to blast him into oblivion." << endl;
					cout << "Cultist: 'Don't! There was nothing you could've done, and I'm not one of them. Well, not anymore, anyway.'" << endl;
					cout << "You: 'What do you mean? You better start explaining.'" << endl;
					cout << "Cultist: 'I was one of them, but I left as soon as I realized what we were doing to these people. I thought we were simply summoning demons, I didn't think we were turning people INTO them!'" << endl;
					cout << "You: 'You're not doing a great job of convincing me to spare you...'" << endl;
					cout << "Cultist: 'Look, you can think of it what you want, but the fact is you're going to need my help if you want to stop these guys from sacrificing more people. I know how many there are, where they are, and what they can do. Kill me, and you're on your own. Trust me, you'll never wipe them all out by yourself. And the King certainly won't believe you. He hasn't thus far, and you don't have proof.'" << endl;
					cout << "" << endl;
					cout << "Press '1' to kill the cultist, or '2' to spare him and let him help you." << endl;
					int cultFriend;
					cin >> cultFriend;
					if (cultFriend == 1)
					{
						cout << "You consider this for a moment, but ultimately, you decide that siding with evil as a means to an end is still siding with evil, and you kill the cultist." << endl;
						cout << "You get up, and fire a massive fireball towards the center of the crater. Now that you don't have the man to worry about saving, you don't hold back." << endl;
						cout << "The fireball obliterates all of the cultists, and the demon. Now you've got to find their compound." << endl;
						cout << "After searching for a while, you find a door built into the base of a mountain." << endl;
						cout << "You raise both of your hands and attempt to magically unlock the door." << endl;
						srand((unsigned)time(0));
						int rNumDoor = (rand() % 100) + 1;
						if (rNumDoor <= 20)
						{
							cout << "You're able to bypass the magical wards on the door, and you sneak your way in." << endl;
						}
						else
						{
							cout << "The magical wards protecting the door activate, and you're struck with a powerful blast of lightning. You're not dead, but you collapse and are unable to move. When you look up, several cultists are standing over you. They pick you up and take you to the sacrificial altar. The last thing you hear is their chanting right before you're turned into a demon." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
					}
					else if (cultFriend == 2)
					{
						cout << "You: 'Fine. But you stay where I can see you, and once you've helped me, you leave town. And never return. Understand?'" << endl;
						cout << "Cultist: 'Gladly. Let's go, we don't have much time before the next sacrifice.'" << endl;
						cout << "The two of you stand up, and simultaneously fire massive fireballs towards the center of the altar. Not having to worry about rescuing the man anymore, you hold nothing back." << endl;
						cout << "The fireballs obliterate the cultists and the demon. Your cultist companion then leads you to their hideout, a tunnell system carved into a mountain, blocked off by a magically protected door." << endl;
						cout << "Your companion raises his hands, and removes the magical wards protecting the door." << endl;
						cout << "Cultist: 'The way is open. And this is where I leave you.'" << endl;
						cout << "You: 'You're not coming in with me?'" << endl;
						cout << "Cultist: 'No. They'll sense me immediately because of what they do to us during the initiation ritual. I'll only get both of us killed. Good luck.'" << endl;
						cout << "The cultist turns around and starts running. You believe him when he says he'll leave town, but maybe you should take care of him just in case." << endl;
						cout << "" << endl;
						cout << "Press '1' to let him flee, or '2' to kill him." << endl;
						int cultFriendFate;
						cin >> cultFriendFate;
						if (cultFriendFate == 1)
						{
							cout << "You let him go, and then carry on with the task at hand." << endl;
							system("pause");
							cout << "" << endl;
						}
						else if (cultFriendFate == 2)
						{
							cout << "You raise your hand and blast the cultist with a lightning bolt. He's dead before he hits the floor." << endl;
							cout << "Having tied up this potential loose end, you carry on with the task at hand." << endl;
						}
					}
					else
					{
						cout << "Restart the game? Okay!" << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					cout << "One by one, you eliminate the cultists in the hideout. It's actually pretty easy, they don't suspect a thing. Most of them are sleeping." << endl;
					cout << "When you reach the back room of the hideout, you open the door, and see a massive cage filled with demons. Presumably, they're what's left of all of the Gatheans that disappeared." << endl;
					cout << "" << endl;
					cout << "Press '1' to slay all of the demons, '2' to keep them there and leave, or '3' to set them free." << endl;
					int demonChoice;
					cin >> demonChoice;
					if (demonChoice == 1)
					{
						cout << "Using a poison spell, you mercifully put down all of the former Gathe citizens. The demonic forms they had become won't become a problem for anyone. Having accomplished what you came here to do and then some, you head back to Gathe." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (demonChoice == 2)
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action is to just leave. You make your way out of the hideout and head back to Gathe." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (demonChoice == 3)
					{
						srand((unsigned)time(0));
						int rNumDemon = (rand() % 1000) + 1;
						if (rNumDemon <= 1)
						{
							cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe, right?" << endl;
							cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Does it recognize you? This must've been someone you've seen before." << endl;
							cout << "It makes a soft grunting sound at you, then turns around to face the other demons. After a moment, they all simply fade from existence. Have they gone back to their plane of existance, or wherever it is they came from?" << endl;
							cout << "Frankly, it could be anything. There's literally a 0.1% chance of you even getting this outcome. So congrats. :P" << endl;
							system("pause");
							cout << "" << endl;
						}
						else
						{
							cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe... right?" << endl;
							cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Could it actually recognize you? You start to have hope for these creatures... " << endl;
							cout << "And then it eats you. Afterwards, the demons flee the hideout and decimate Gathe. Nice job." << endl;
							cout << "Game over." << endl;
							system("pause");
							cout << "" << endl;
							goto retry;
						}
					}
					else
					{
						cout << "After watching the demons for a minute, wondering what you should do, suddenly it occurs to you..." << endl;
						cout << "What are you doing? Why are you trying to save Gathe from these things? You HATE Gathe! What have those losers ever done for you? It doesn't even have a normal name. Whoever named it probably got it from some sort of random list." << endl;
						cout << "Realizing the full potential of the power within your grasp, you use a mass mind-control spell to bend the demons to your will." << endl;
						cout << "With the demons fully obeying you, you open the cage and unleash them upon Gathe. You watch as the city burns to the ground, and as you look upon the ruins, for the first time in your entire life, that hatred brewing inside you is gone." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					cout << "As you return home, you can't help but think about everything that's transpired tonight. You're beaten up and exhausted, but you solved the mystery, and saved the town at the same time. In the end, it was worth it." << endl;
					cout << "On the table, you see a note. At the top is the seal of the royal wizard's association. They revoked your membership after an experiment went awry many years ago. You didn't think you'd ever hear from them again." << endl;
					cout << "The note reads: 'Dear " << name << ", we wanted to thank you for dealing with this demonic cultist problem. We've been following the issue since the first disappearance, but the King didn't have enough evidence to let us do anything about it. You've done a great service both for us, and all of Gathe by taking care of it yourself. By order of the King himself, we've restored your status to the association as Archwizard. Congratulations. We expect to see you in the Arcaneum first thing tomorrow morning so we can catch you up.'" << endl;
					cout << "You're stunned. They've restored your status? You've wanted this for years. You had no idea this would happen, you just wanted to do some good for the people of Gathe, and now the good karma is paying off." << endl;
					cout << "You look at the sleeping faces of your family, and know that everything worked out the way it was supposed to. You climb into bed to get at least a few hours of sleep. After all, you have an early morning ahead of you!" << endl;
					cout << "You fall asleep. Moments later, a very small part of the forest outside your house starts glowing." << endl;
					system("pause");
					cout << "" << endl;
					cout << "Congratulations! You've beaten the game! If you haven't already, feel free to start over and try making different decisions. Maybe they'll influence the outcome?" << endl;
					cout << "Or, you could try the other playable class, 'soldier'. It has a completely different story with multiple branching paths for you to experience." << endl;
					cout << "Thanks for playing!" << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
			}
			else if (tavernFight == 2)   // Don't go in the tavern
			{
				cout << "You walk past the tavern and head deeper into the forest." << endl;
				cout << "Pretty soon, you come across a fork in the road. You can either continue going straight, or take the path leading to the right. There are no signs that indicate where each path leads, so it's anyone's guess where each one leads." << endl;
				cout << "" << endl;
				cout << "Press '1' to continue straight, or '2' to take the path leading right." << endl;
				int pathChoice;
				cin >> pathChoice;
				if (pathChoice == 1)
				{
					cout << "You continue going straight. Things are pretty uneventful for a while. So far you haven't encountered anything suspicious. If you don't find something soon, the sun will rise and you'll have to wait until tomorrow night." << endl;
					cout << "You stop and look around when you hear a loud howl." << endl;
					cout << "Out of seemingly nowhere, a rabid wolf knocks you to the ground. It gets ontop of you, but you quickly put up a magic barrier to prevent it from eating you." << endl;
					cout << "You have to act quickly, as your barrier won't last long." << endl;
					cout << "" << endl;
					cout << "Press '1' to set the wolf on fire, '2' to conjure a spectral dagger and stab the wolf with it, or '3' to turn invisible and throw it off of you." << endl;
					int wolfFight;
					cin >> wolfFight;
					if (wolfFight == 1)
					{
						cout << "You raise your hand to the wolf's chest and set it on fire. Unfortunately, it didn't run away like you thought it would. Instead it dies on top of you, and you aren't able to muster up the strength to get it off. Your barrier shatters and the flaming corpse of the wolf falls directly onto you." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else if (wolfFight == 2)
					{
						cout << "You conjure a spectral dagger, and stab the wolf, who dies. You push it's corpse off of you, and get up. You're all bruised up, but alive." << endl;
						cout << "You continue along the path. You must find something before the sun comes up!" << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (wolfFight == 3)
					{
						cout << "You cast an invisibility spell. As you try to knock the wolf off of you, it starts biting all over the place in confusion." << endl;
						cout << "Eventually you get the wolf off you, and you're able to sneak away while it rabidly bites the air around it, thinking you might still be there." << endl;
						cout << "When you're far away from the wolf, you remove your invisibility spell. You're alive, but have a nasty bite on your left arm. It must have gotten you while you were trying to get if off of you." << endl;
						cout << "There's no time to worry about that now. You wrap the wound, and continue with your quest. You must find something before the sun comes up!" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "Nice try." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (pathChoice == 2)
				{
					cout << "You follow the path to the right. Things are quiet for a while." << endl;
					cout << "You stop and look around when you hear a quiet laugh." << endl;
					cout << "Out of seemingly nowhere, a forest troll leaps from the trees and lands ontop of you. Luckily, you were able to put up a magic barrier in time, which blocked his rapid axe swings." << endl;
					cout << "You'll have to act quickly if you want to survive this forest troll attack." << endl;
					cout << "" << endl;
					cout << "Press '1' to conjure a spectral bear to fight the forest troll, '2' to try and disarm him, or '3' to talk him down." << endl;
					int trollFight;
					cin >> trollFight;
					if (trollFight == 1)
					{
						cout << "You conjure a spectral bear, which charges the forest troll and gets him off of you." << endl;
						cout << "Frightened, the forest troll runs away." << endl;
						cout << "You nod at your creation approvingly, and it disappears. On with your quest. Hopefully that forest troll doesn't come back for more." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (trollFight == 2)
					{
						cout << "While still blocking his attacks with your barrier, you try to grab one of his axes." << endl;
						cout << "The forest troll, blinded by his bloodlust, doesn't notice, and you're able to take one of his axes." << endl;
						cout << "The forest troll looks at you with rage and bewilderment, but is only able to stare for a second before you strike him with the axe." << endl;
						cout << "You shove the forest troll's body off of you, get up, and continue with your quest. You don't have time for this nonsense." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (trollFight == 3)
					{
						cout << "You: 'Hey, stop! STOP! What do you want? Gold?'" << endl;
						cout << "The troll stops attacking you for a moment and stares down at you." << endl;
						cout << "Troll: 'GOLD?! Hahahahaha, stupid human. My tribe will honor me for your head!'" << endl;
						cout << "While the troll is busy laughing at you, you take down your magic barrier, raise your hand, and engulf the troll in flames. It runs away screaming for a moment before collapsing." << endl;
						cout << "You get up, brush yourself off, and sigh." << endl;
						cout << "You: 'Someone really needs to deal with all of these forest troll tribes.'" << endl;
						cout << "You'll have to petition the King about that another time. Right now, you have a job to do, and are running out of time to do it." << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "Unable to think of anything in time, the forest troll's rapid axe strikes shatter your barrier, and you're slain." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "Not having any valid decision to make, you just stand there. Forever. Eventually you die of starvation." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "About an hour later, you see an ominous red glow in the distant, and can hear faint chanting. You've finally found what you're looking for!" << endl;
				cout << "You hurry to where the glow and chanting are coming from, and find yourself at a crater. At the bottom of the crater, a bunch of people in robes appear to be performing some sort of ritual around an altar. You hide behind a rock and watch." << endl;
				cout << "Upon closer inspection, you see a man laying on the altar. No... not just any man, it's the blacksmith who went missing just two days ago! So this is where he went. These cultists must've kidnapped him. But how will you save him? You don't even know what exactly they're doing." << endl;
				cout << "" << endl;
				cout << "Press '1' to intervene and attempt to rescue the man, or press '2' to stay where you are and observe." << endl;
				int altarChoice;
				cin >> altarChoice;
				if (altarChoice == 1)
				{
					cout << "You stand up, and hurl a massive fire ball towards a group of cultists. Thanks to having the element of surprise, and that scroll of wildfire, you're spell actually takes out a large number of the cultists. Unfortunately, there are still too many of them and they quickly overwhelm you." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				else if (altarChoice == 2)
				{
					cout << "You watch to try to get a better idea of what the cultists are doing. After a minute or so, the man starts to turn black and his body contorts. Horrified, you prepare to go in and save him." << endl;
					cout << "Before you can go, you're grabbed on the arm. You turn around, and a man wearing the same robes as the cultists is staring at you, with a finger over his mouth." << endl;
					cout << "Cultist: 'Shh... there's nothing you can do for him now.'" << endl;
					system("pause");
					cout << "" << endl;
				}
				else
				{
					cout << "You get up to try and rescue the man, but second guess yourself. In your hesitation, the cultists saw you, and drained your life away with their dark magics." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "You watch in horror as the man on the altar is sacrificed. The cultists' chanting gets louder as time goes on, and eventually, the burnt and mangled body of the man morphs into some sort of... demon?" << endl;
				cout << "What you see makes you want to hurl. So this was the fate of everyone who disappeared. You start to wonder if these cultists have a whole group of demons hidden around somewhere, and what they could be wanting to use them for. Pretty quickly, you remember the cultist crouched next to you, and you raise your hand to blast him into oblivion." << endl;
				cout << "Cultist: 'Don't! There was nothing you could've done, and I'm not one of them. Well, not anymore, anyway.'" << endl;
				cout << "You: 'What do you mean? You better start explaining.'" << endl;
				cout << "Cultist: 'I was one of them, but I left as soon as I realized what we were doing to these people. I thought we were simply summoning demons, I didn't think we were turning people INTO them!'" << endl;
				cout << "You: 'You're not doing a great job of convincing me to spare you...'" << endl;
				cout << "Cultist: 'Look, you can think of it what you want, but the fact is you're going to need my help if you want to stop these guys from sacrificing more people. I know how many there are, where they are, and what they can do. Kill me, and you're on your own. Trust me, you'll never wipe them all out by yourself. And the King certainly won't believe you. He hasn't thus far, and you don't have proof.'" << endl;
				cout << "" << endl;
				cout << "Press '1' to kill the cultist, or '2' to spare him and let him help you." << endl;
				int cultFriend;
				cin >> cultFriend;
				if (cultFriend == 1)
				{
					cout << "You consider this for a moment, but ultimately, you decide that siding with evil as a means to an end is still siding with evil, and you kill the cultist." << endl;
					cout << "You get up, and fire a massive fireball towards the center of the crater. Now that you don't have the man to worry about saving, you don't hold back." << endl;
					cout << "The fireball obliterates all of the cultists, and the demon. Now you've got to find their compound." << endl;
					cout << "After searching for a while, you find a door built into the base of a mountain." << endl;
					cout << "You raise both of your hands and attempt to magically unlock the door." << endl;
					srand((unsigned)time(0));
					int rNumDoor = (rand() % 100) + 1;
					if (rNumDoor <= 20)
					{
						cout << "You're able to bypass the magical wards on the door, and you sneak your way in." << endl;
					}
					else
					{
						cout << "The magical wards protecting the door activate, and you're struck with a powerful blast of lightning. You're not dead, but you collapse and are unable to move. When you look up, several cultists are standing over you. They pick you up and take you to the sacrificial altar. The last thing you hear is their chanting right before you're turned into a demon." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (cultFriend == 2)
				{
					cout << "You: 'Fine. But you stay where I can see you, and once you've helped me, you leave town. And never return. Understand?'" << endl;
					cout << "Cultist: 'Gladly. Let's go, we don't have much time before the next sacrifice.'" << endl;
					cout << "The two of you stand up, and simultaneously fire massive fireballs towards the center of the altar. Not having to worry about rescuing the man anymore, you hold nothing back." << endl;
					cout << "The fireballs obliterate the cultists and the demon. Your cultist companion then leads you to their hideout, a tunnell system carved into a mountain, blocked off by a magically protected door." << endl;
					cout << "Your companion raises his hands, and removes the magical wards protecting the door." << endl;
					cout << "Cultist: 'The way is open. And this is where I leave you.'" << endl;
					cout << "You: 'You're not coming in with me?'" << endl;
					cout << "Cultist: 'No. They'll sense me immediately because of what they do to us during the initiation ritual. I'll only get both of us killed. Good luck.'" << endl;
					cout << "The cultist turns around and starts running. You believe him when he says he'll leave town, but maybe you should take care of him just in case." << endl;
					cout << "" << endl;
					cout << "Press '1' to let him flee, or '2' to kill him." << endl;
					int cultFriendFate;
					cin >> cultFriendFate;
					if (cultFriendFate == 1)
					{
						cout << "You let him go, and then carry on with the task at hand." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (cultFriendFate == 2)
					{
						cout << "You raise your hand and blast the cultist with a lightning bolt. He's dead before he hits the floor." << endl;
						cout << "Having tied up this potential loose end, you carry on with the task at hand." << endl;
					}
				}
				else
				{
					cout << "Restart the game? Okay!" << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "One by one, you eliminate the cultists in the hideout. It's actually pretty easy, they don't suspect a thing. Most of them are sleeping." << endl;
				cout << "When you reach the back room of the hideout, you open the door, and see a massive cage filled with demons. Presumably, they're what's left of all of the Gatheans that disappeared." << endl;
				cout << "" << endl;
				cout << "Press '1' to slay all of the demons, '2' to keep them there and leave, or '3' to set them free." << endl;
				int demonChoice;
				cin >> demonChoice;
				if (demonChoice == 1)
				{
					cout << "Using a poison spell, you mercifully put down all of the former Gathe citizens. The demonic forms they had become won't become a problem for anyone. Having accomplished what you came here to do and then some, you head back to Gathe." << endl;
					system("pause");
					cout << "" << endl;
				}
				else if (demonChoice == 2)
				{
					cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action is to just leave. You make your way out of the hideout and head back to Gathe." << endl;
					system("pause");
					cout << "" << endl;
				}
				else if (demonChoice == 3)
				{
					srand((unsigned)time(0));
					int rNumDemon = (rand() % 1000) + 1;
					if (rNumDemon <= 1)
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe, right?" << endl;
						cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Does it recognize you? This must've been someone you've seen before." << endl;
						cout << "It makes a soft grunting sound at you, then turns around to face the other demons. After a moment, they all simply fade from existence. Have they gone back to their plane of existance, or wherever it is they came from?" << endl;
						cout << "Frankly, it could be anything. There's literally a 0.1% chance of you even getting this outcome. So congrats. :P" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe... right?" << endl;
						cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Could it actually recognize you? You start to have hope for these creatures... " << endl;
						cout << "And then it eats you. Afterwards, the demons flee the hideout and decimate Gathe. Nice job." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "After watching the demons for a minute, wondering what you should do, suddenly it occurs to you..." << endl;
					cout << "What are you doing? Why are you trying to save Gathe from these things? You HATE Gathe! What have those losers ever done for you? It doesn't even have a normal name. Whoever named it probably got it from some sort of random list." << endl;
					cout << "Realizing the full potential of the power within your grasp, you use a mass mind-control spell to bend the demons to your will." << endl;
					cout << "With the demons fully obeying you, you open the cage and unleash them upon Gathe. You watch as the city burns to the ground, and as you look upon the ruins, for the first time in your entire life, that hatred brewing inside you is gone." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "As you return home, you can't help but think about everything that's transpired tonight. You're beaten up and exhausted, but you solved the mystery, and saved the town at the same time. In the end, it was worth it." << endl;
				cout << "On the table, you see a note. At the top is the seal of the royal wizard's association. They revoked your membership after an experiment went awry many years ago. You didn't think you'd ever hear from them again." << endl;
				cout << "The note reads: 'Dear " << name << ", we wanted to thank you for dealing with this demonic cultist problem. We've been following the issue since the first disappearance, but the King didn't have enough evidence to let us do anything about it. You've done a great service both for us, and all of Gathe by taking care of it yourself. By order of the King himself, we've restored your status to the association as Archwizard. Congratulations. We expect to see you in the Arcaneum first thing tomorrow morning so we can catch you up.'" << endl;
				cout << "You're stunned. They've restored your status? You've wanted this for years. You had no idea this would happen, you just wanted to do some good for the people of Gathe, and now the good karma is paying off." << endl;
				cout << "You look at the sleeping faces of your family, and know that everything worked out the way it was supposed to. You climb into bed to get at least a few hours of sleep. After all, you have an early morning ahead of you!" << endl;
				cout << "You fall asleep. Moments later, a very small part of the forest outside your house starts glowing." << endl;
				system("pause");
				cout << "" << endl;
				cout << "Congratulations! You've beaten the game! If you haven't already, feel free to start over and try making different decisions. Maybe they'll influence the outcome?" << endl;
				cout << "Or, you could try the other playable class, 'soldier'. It has a completely different story with multiple branching paths for you to experience." << endl;
				cout << "Thanks for playing!" << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}
			else
			{
				cout << "By standing still doing nothing for too long, one of the hunters inside mistakes you for a wild animals, and shoots you with his bow." << endl;
				cout << "Game over. Please input a valid option." << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}
			

		}
		else if (potions == 2)
		{
			cout << "You move past the shop without going inside. You're on a mission, and are confident you can handle things without the aid of potions." << endl;
			system("pause");
			cout << "" << endl; 
			// Same as above, with modified %s for no scrolls
			cout << "A ways outside the gates, you pass a tavern. Being outside the city, most of the patrons are hunters." << endl;
			cout << "You can hear a lot of shouting coming from the tavern. Glancing inside, you see a man in a mask with his sword out." << endl;
			cout << "" << endl;
			cout << "Press '1' to investigate, or '2' to continue on." << endl;
			int tavernFight;
			cin >> tavernFight;
			if (tavernFight == 1)
			{
				cout << "You walk through the tavern doors, and sure enough, the man you saw is robbing the place. It seems that in the commotion, a small fire has also started in the corner of the room." << endl;
				cout << "You: 'Hey, buddy, what's going on here?'" << endl;
				cout << "The man turns around and points his dagger at you." << endl;
				cout << "Thief: 'Mind your business! Get over here and sit with the rest of these fools.'" << endl;
				cout << "You don't move, and the man gets angry. He puts down his bag, and pulls out a second dagger. He starts to charge you. Prepare to fight!" << endl;
				cout << "" << endl;
				cout << "Press '1' to attempt to shoot a fireball at him, '2' to attempt to freeze him in place, or '3' to attempt to control his mind." << endl;
				int wizardBarFight;
				cin >> wizardBarFight;
				if (wizardBarFight == 1)
				{
					srand((unsigned)time(0));
					int rNumOne = (rand() % 100) + 1;
					if (rNumOne <= 30)
					{
						cout << "You create a fireball in your hands and fire it at the man. Unfortunately, your fireball hits the man, but it also sets the whole tavern ablaze. Those that survived run for the town. You survived as well, but are quickly restrained by a pair of hunters, who drag you all the way to town where the guards arrest you." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else
					{
						cout << "You create a fireball in your hands and fire it at the man. Your scroll of wildfire amplifies the ability, and when the fireball hits him, he instantly disintigrates. Pretty morbid, but it worked." << endl;
						cout << "You kneel over the ashy remains of the thief, and go through his somehow unburnt belongings." << endl;
						srand((unsigned)time(0));
						int rNumLoot = (rand() % 10) + 1;
						if (rNumLoot <= 2)
						{
							cout << "The thief droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumLoot <= 4)
						{
							cout << "The thief droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumLoot <= 6)
						{
							cout << "The thief droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumLoot <= 10)
						{
							cout << "The thief droped 8 gold, and a castle-tailored Archmage's robe." << endl;
							cout << "Congratulations! You've recieved 8 gold and a castle-tailored Archmage's robe, giving you +5 intellect!" << endl;
							cout << "You put on your new robe, and leave the tavern to continue your quest." << endl;
							system("pause");
							cout << "" << endl;
						}
					}
				}
				else if (wizardBarFight == 2)
				{
					srand((unsigned)time(0));
					int rNumTwo = (rand() % 100) + 1;
					if (rNumTwo <= 30)
					{
						cout << "You focus your spell, and cast it. Unfortunately, you were distracted by the cries of one of the patrons, and your spell missed. The thief reaches you, and stabs you with both of his daggers. Your lifeless body falls to the floor." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else
					{
						cout << "You focus your spell, and cast it. Just before the thief reaches you, a ring of ice surrounds his legs and freezes him in his place." << endl;
						cout << "A pair of hunters at the tavern restrain him while you take his belongings and wait for a guard to arrive." << endl;
						srand((unsigned)time(0));
						int rNumLoot = (rand() % 10) + 1;
						if (rNumLoot <= 2)
						{
							cout << "The thief droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumLoot <= 4)
						{
							cout << "The thief droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumLoot <= 6)
						{
							cout << "The thief droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumLoot <= 10)
						{
							cout << "The thief droped 8 gold, and a castle-tailored Archmage's robe." << endl;
							cout << "Congratulations! You've recieved 8 gold and a castle-tailored Archmage's robe, giving you +5 intellect!" << endl;
							cout << "You put on your new robe, and leave the tavern to continue your quest." << endl;
							system("pause");
							cout << "" << endl;
						}
					}
				}
				else if (wizardBarFight == 3)
				{
					srand((unsigned)time(0));
					int rNumThree = (rand() % 100) + 1;
					if (rNumThree <= 50)
					{
						cout << "You try your best to focus, as this is a complicated spell." << endl;
						cout << "Unfortunately, you just couldn't focus enough. His mind resisted your attempt to control it, and he stabs you with both of his daggers. Your lifless body falls to the floor." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else
					{
						cout << "You try your best to focus, as this is a complicated spell." << endl;
						cout << "Thankfully, it worked! Just before he reaches you, you take over his mind. He stops in place. Doing exactly what you're making him do, he drops his weapons, puts his hands behind his back, and lays on the floor." << endl;
						cout << "A pair of hunters take this opportunity to restrain the man, so you can stop your spell." << endl;
						cout << "You go over to the man and take his belongings while everyone waits for a guard to show up." << endl;
						srand((unsigned)time(0));
						int rNumLoot = (rand() % 10) + 1;
						if (rNumLoot <= 2)
						{
							cout << "The thief droped 2 gold." << endl;
							cout << "Congratulations! You've recieved 2 gold!" << endl;
						}
						else if (rNumLoot <= 4)
						{
							cout << "The thief droped 4 gold." << endl;
							cout << "Congratulations! You've recieved 4 gold!" << endl;
						}
						else if (rNumLoot <= 6)
						{
							cout << "The thief droped 6 gold." << endl;
							cout << "Congratulations! You've recieved 6 gold!" << endl;
						}
						else if (rNumLoot <= 10)
						{
							cout << "The thief droped 8 gold, and a castle-tailored Archmage's robe." << endl;
							cout << "Congratulations! You've recieved 8 gold and a castle-tailored Archmage's robe, giving you +5 intellect!" << endl;
							cout << "You put on your new robe, and leave the tavern to continue your quest." << endl;
							system("pause");
							cout << "" << endl;
						}
					}
				}
				else
				{
					cout << "You start to cast a spell, but can't shake this thought that some all powerful being, a 'player', if you will, was cheeky and input an invalid option. The thought consumes you, and you die before the thief can even reach you." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "You leave the tavern and head deeper into the forest." << endl;
				cout << "Pretty soon, you come across a fork in the road. You can either continue going straight, or take the path leading to the right. There are no signs that indicate where each path leads, so it's anyone's guess where each one leads." << endl;
				cout << "" << endl;
				cout << "Press '1' to continue straight, or '2' to take the path leading right." << endl;
				int pathChoice;
				cin >> pathChoice;
				if (pathChoice == 1)
				{
					cout << "You continue going straight. Things are pretty uneventful for a while. So far you haven't encountered anything suspicious. If you don't find something soon, the sun will rise and you'll have to wait until tomorrow night." << endl;
					cout << "You stop and look around when you hear a loud howl." << endl;
					cout << "Out of seemingly nowhere, a rabid wolf knocks you to the ground. It gets ontop of you, but you quickly put up a magic barrier to prevent it from eating you." << endl;
					cout << "You have to act quickly, as your barrier won't last long." << endl;
					cout << "" << endl;
					cout << "Press '1' to set the wolf on fire, '2' to conjure a spectral dagger and stab the wolf with it, or '3' to turn invisible and throw it off of you." << endl;
					int wolfFight;
					cin >> wolfFight;
					if (wolfFight == 1)
					{
						cout << "You raise your hand to the wolf's chest and set it on fire. Unfortunately, it didn't run away like you thought it would. Instead it dies on top of you, and you aren't able to muster up the strength to get it off. Your barrier shatters and the flaming corpse of the wolf falls directly onto you." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else if (wolfFight == 2)
					{
						cout << "You conjure a spectral dagger, and stab the wolf, who dies. You push it's corpse off of you, and get up. You're all bruised up, but alive." << endl;
						cout << "You continue along the path. You must find something before the sun comes up!" << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (wolfFight == 3)
					{
						cout << "You cast an invisibility spell. As you try to knock the wolf off of you, it starts biting all over the place in confusion." << endl;
						cout << "Eventually you get the wolf off you, and you're able to sneak away while it rabidly bites the air around it, thinking you might still be there." << endl;
						cout << "When you're far away from the wolf, you remove your invisibility spell. You're alive, but have a nasty bite on your left arm. It must have gotten you while you were trying to get if off of you." << endl;
						cout << "There's no time to worry about that now. You wrap the wound, and continue with your quest. You must find something before the sun comes up!" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "Nice try." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (pathChoice == 2)
				{
					cout << "You follow the path to the right. Things are quiet for a while." << endl;
					cout << "You stop and look around when you hear a quiet laugh." << endl;
					cout << "Out of seemingly nowhere, a forest troll leaps from the trees and lands ontop of you. Luckily, you were able to put up a magic barrier in time, which blocked his rapid axe swings." << endl;
					cout << "You'll have to act quickly if you want to survive this forest troll attack." << endl;
					cout << "" << endl;
					cout << "Press '1' to conjure a spectral bear to fight the forest troll, '2' to try and disarm him, or '3' to talk him down." << endl;
					int trollFight;
					cin >> trollFight;
					if (trollFight == 1)
					{
						cout << "You conjure a spectral bear, which charges the forest troll and gets him off of you." << endl;
						cout << "Frightened, the forest troll runs away." << endl;
						cout << "You nod at your creation approvingly, and it disappears. On with your quest. Hopefully that forest troll doesn't come back for more." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (trollFight == 2)
					{
						cout << "While still blocking his attacks with your barrier, you try to grab one of his axes." << endl;
						cout << "The forest troll, blinded by his bloodlust, doesn't notice, and you're able to take one of his axes." << endl;
						cout << "The forest troll looks at you with rage and bewilderment, but is only able to stare for a second before you strike him with the axe." << endl;
						cout << "You shove the forest troll's body off of you, get up, and continue with your quest. You don't have time for this nonsense." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (trollFight == 3)
					{
						cout << "You: 'Hey, stop! STOP! What do you want? Gold?'" << endl;
						cout << "The troll stops attacking you for a moment and stares down at you." << endl;
						cout << "Troll: 'GOLD?! Hahahahaha, stupid human. My tribe will honor me for your head!'" << endl;
						cout << "While the troll is busy laughing at you, you take down your magic barrier, raise your hand, and engulf the troll in flames. It runs away screaming for a moment before collapsing." << endl;
						cout << "You get up, brush yourself off, and sigh." << endl;
						cout << "You: 'Someone really needs to deal with all of these forest troll tribes.'" << endl;
						cout << "You'll have to petition the King about that another time. Right now, you have a job to do, and are running out of time to do it." << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "Unable to think of anything in time, the forest troll's rapid axe strikes shatter your barrier, and you're slain." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "Not having any valid decision to make, you just stand there. Forever. Eventually you die of starvation." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "About an hour later, you see an ominous red glow in the distant, and can hear faint chanting. You've finally found what you're looking for!" << endl;
				cout << "You hurry to where the glow and chanting are coming from, and find yourself at a crater. At the bottom of the crater, a bunch of people in robes appear to be performing some sort of ritual around an altar. You hide behind a rock and watch." << endl;
				cout << "Upon closer inspection, you see a man laying on the altar. No... not just any man, it's the blacksmith who went missing just two days ago! So this is where he went. These cultists must've kidnapped him. But how will you save him? You don't even know what exactly they're doing." << endl;
				cout << "" << endl;
				cout << "Press '1' to intervene and attempt to rescue the man, or press '2' to stay where you are and observe." << endl;
				int altarChoice;
				cin >> altarChoice;
				if (altarChoice == 1)
				{
					cout << "You stand up, and hurl a massive fire ball towards a group of cultists. Thanks to having the element of surprise, and that scroll of wildfire, you're spell actually takes out a large number of the cultists. Unfortunately, there are still too many of them and they quickly overwhelm you." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				else if (altarChoice == 2)
				{
					cout << "You watch to try to get a better idea of what the cultists are doing. After a minute or so, the man starts to turn black and his body contorts. Horrified, you prepare to go in and save him." << endl;
					cout << "Before you can go, you're grabbed on the arm. You turn around, and a man wearing the same robes as the cultists is staring at you, with a finger over his mouth." << endl;
					cout << "Cultist: 'Shh... there's nothing you can do for him now.'" << endl;
					system("pause");
					cout << "" << endl;
				}
				else
				{
					cout << "You get up to try and rescue the man, but second guess yourself. In your hesitation, the cultists saw you, and drained your life away with their dark magics." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "You watch in horror as the man on the altar is sacrificed. The cultists' chanting gets louder as time goes on, and eventually, the burnt and mangled body of the man morphs into some sort of... demon?" << endl;
				cout << "What you see makes you want to hurl. So this was the fate of everyone who disappeared. You start to wonder if these cultists have a whole group of demons hidden around somewhere, and what they could be wanting to use them for. Pretty quickly, you remember the cultist crouched next to you, and you raise your hand to blast him into oblivion." << endl;
				cout << "" << endl;
				cout << "Cultist: 'Don't! There was nothing you could've done, and I'm not one of them. Well, not anymore, anyway.'" << endl;
				cout << "You: 'What do you mean? You better start explaining.'" << endl;
				cout << "Cultist: 'I was one of them, but I left as soon as I realized what we were doing to these people. I thought we were simply summoning demons, I didn't think we were turning people INTO them!'" << endl;
				cout << "You: 'You're not doing a great job of convincing me to spare you...'" << endl;
				cout << "Cultist: 'Look, you can think of it what you want, but the fact is you're going to need my help if you want to stop these guys from sacrificing more people. I know how many there are, where they are, and what they can do. Kill me, and you're on your own. Trust me, you'll never wipe them all out by yourself. And the King certainly won't believe you. He hasn't thus far, and you don't have proof.'" << endl;
				cout << "" << endl;
				cout << "Press '1' to kill the cultist, or '2' to spare him and let him help you." << endl;
				int cultFriend;
				cin >> cultFriend;
				if (cultFriend == 1)
				{
					cout << "You consider this for a moment, but ultimately, you decide that siding with evil as a means to an end is still siding with evil, and you kill the cultist." << endl;
					cout << "You get up, and fire a massive fireball towards the center of the crater. Now that you don't have the man to worry about saving, you don't hold back." << endl;
					cout << "The fireball obliterates all of the cultists, and the demon. Now you've got to find their compound." << endl;
					cout << "After searching for a while, you find a door built into the base of a mountain." << endl;
					cout << "You raise both of your hands and attempt to magically unlock the door." << endl;
					srand((unsigned)time(0));
					int rNumDoor = (rand() % 100) + 1;
					if (rNumDoor <= 20)
					{
						cout << "You're able to bypass the magical wards on the door, and you sneak your way in." << endl;
					}
					else
					{
						cout << "The magical wards protecting the door activate, and you're struck with a powerful blast of lightning. You're not dead, but you collapse and are unable to move. When you look up, several cultists are standing over you. They pick you up and take you to the sacrificial altar. The last thing you hear is their chanting right before you're turned into a demon." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (cultFriend == 2)
				{
					cout << "You: 'Fine. But you stay where I can see you, and once you've helped me, you leave town. And never return. Understand?'" << endl;
					cout << "Cultist: 'Gladly. Let's go, we don't have much time before the next sacrifice.'" << endl;
					cout << "" << endl;
					cout << "The two of you stand up, and simultaneously fire massive fireballs towards the center of the altar. Not having to worry about rescuing the man anymore, you hold nothing back." << endl;
					cout << "The fireballs obliterate the cultists and the demon. Your cultist companion then leads you to their hideout, a tunnell system carved into a mountain, blocked off by a magically protected door." << endl;
					cout << "Your companion raises his hands, and removes the magical wards protecting the door." << endl;
					cout << "" << endl;
					cout << "Cultist: 'The way is open. And this is where I leave you.'" << endl;
					cout << "You: 'You're not coming in with me?'" << endl;
					cout << "Cultist: 'No. They'll sense me immediately because of what they do to us during the initiation ritual. I'll only get both of us killed. Good luck.'" << endl;
					cout << "The cultist turns around and starts running. You believe him when he says he'll leave town, but maybe you should take care of him just in case." << endl;
					cout << "" << endl;
					cout << "Press '1' to let him flee, or '2' to kill him." << endl;
					int cultFriendFate;
					cin >> cultFriendFate;
					if (cultFriendFate == 1)
					{
						cout << "You let him go, and then carry on with the task at hand." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (cultFriendFate == 2)
					{
						cout << "You raise your hand and blast the cultist with a lightning bolt. He's dead before he hits the floor." << endl;
						cout << "Having tied up this potential loose end, you carry on with the task at hand." << endl;
					}
				}
				else
				{
					cout << "Restart the game? Okay!" << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "One by one, you eliminate the cultists in the hideout. It's actually pretty easy, they don't suspect a thing. Most of them are sleeping." << endl;
				cout << "When you reach the back room of the hideout, you open the door, and see a massive cage filled with demons. Presumably, they're what's left of all of the Gatheans that disappeared." << endl;
				cout << "" << endl;
				cout << "Press '1' to slay all of the demons, '2' to keep them there and leave, or '3' to set them free." << endl;
				int demonChoice;
				cin >> demonChoice;
				if (demonChoice == 1)
				{
					cout << "Using a poison spell, you mercifully put down all of the former Gathe citizens. The demonic forms they had become won't become a problem for anyone. Having accomplished what you came here to do and then some, you head back to Gathe." << endl;
					system("pause");
					cout << "" << endl;
				}
				else if (demonChoice == 2)
				{
					cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action is to just leave. You make your way out of the hideout and head back to Gathe." << endl;
					system("pause");
					cout << "" << endl;
				}
				else if (demonChoice == 3)
				{
					srand((unsigned)time(0));
					int rNumDemon = (rand() % 1000) + 1;
					if (rNumDemon <= 1)
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe, right?" << endl;
						cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Does it recognize you? This must've been someone you've seen before." << endl;
						cout << "It makes a soft grunting sound at you, then turns around to face the other demons. After a moment, they all simply fade from existence. Have they gone back to their plane of existance, or wherever it is they came from?" << endl;
						cout << "Frankly, it could be anything. There's literally a 0.1% chance of you even getting this outcome. So congrats. :P" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe... right?" << endl;
						cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Could it actually recognize you? You start to have hope for these creatures... " << endl;
						cout << "And then it eats you. Afterwards, the demons flee the hideout and decimate Gathe. Nice job." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "After watching the demons for a minute, wondering what you should do, suddenly it occurs to you..." << endl;
					cout << "What are you doing? Why are you trying to save Gathe from these things? You HATE Gathe! What have those losers ever done for you? It doesn't even have a normal name. Whoever named it probably got it from some sort of random list." << endl;
					cout << "Realizing the full potential of the power within your grasp, you use a mass mind-control spell to bend the demons to your will." << endl;
					cout << "With the demons fully obeying you, you open the cage and unleash them upon Gathe. You watch as the city burns to the ground, and as you look upon the ruins, for the first time in your entire life, that hatred brewing inside you is gone." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "As you return home, you can't help but think about everything that's transpired tonight. You're beaten up and exhausted, but you solved the mystery, and saved the town at the same time. In the end, it was worth it." << endl;
				cout << "" << endl;
				cout << "On the table, you see a note. At the top is the seal of the royal wizard's association. They revoked your membership after an experiment went awry many years ago. You didn't think you'd ever hear from them again." << endl;
				cout << "" << endl;
				cout << "The note reads: 'Dear " << name << ", we wanted to thank you for dealing with this demonic cultist problem. We've been following the issue since the first disappearance, but the King didn't have enough evidence to let us do anything about it. You've done a great service both for us, and all of Gathe by taking care of it yourself. By order of the King himself, we've restored your status to the association as Archwizard. Congratulations. We expect to see you in the Arcaneum first thing tomorrow morning so we can catch you up.'" << endl;
				cout << "" << endl;
				cout << "You're stunned. They've restored your status? You've wanted this for years. You had no idea this would happen, you just wanted to do some good for the people of Gathe, and now the good karma is paying off." << endl;
				cout << "You look at the sleeping faces of your family, and know that everything worked out the way it was supposed to. You climb into bed to get at least a few hours of sleep. After all, you have an early morning ahead of you!" << endl;
				cout << "" << endl;
				cout << "You fall asleep. Moments later, a very small part of the forest outside your house starts glowing." << endl;
				system("pause");
				cout << "" << endl;
				cout << "Congratulations! You've beaten the game! If you haven't already, feel free to start over and try making different decisions. Maybe they'll influence the outcome?" << endl;
				cout << "Or, you could try the other playable class, 'soldier'. It has a completely different story with multiple branching paths for you to experience." << endl;
				cout << "Thanks for playing!" << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}
			else if (tavernFight == 2)   // Don't go in the tavern
			{
				cout << "You walk past the tavern and head deeper into the forest." << endl;
				cout << "Pretty soon, you come across a fork in the road. You can either continue going straight, or take the path leading to the right. There are no signs that indicate where each path leads, so it's anyone's guess where each one leads." << endl;
				cout << "" << endl;
				cout << "Press '1' to continue straight, or '2' to take the path leading right." << endl;
				int pathChoice;
				cin >> pathChoice;
				if (pathChoice == 1)
				{
					cout << "You continue going straight. Things are pretty uneventful for a while. So far you haven't encountered anything suspicious. If you don't find something soon, the sun will rise and you'll have to wait until tomorrow night." << endl;
					cout << "You stop and look around when you hear a loud howl." << endl;
					cout << "Out of seemingly nowhere, a rabid wolf knocks you to the ground. It gets ontop of you, but you quickly put up a magic barrier to prevent it from eating you." << endl;
					cout << "You have to act quickly, as your barrier won't last long." << endl;
					cout << "" << endl;
					cout << "Press '1' to set the wolf on fire, '2' to conjure a spectral dagger and stab the wolf with it, or '3' to turn invisible and throw it off of you." << endl;
					int wolfFight;
					cin >> wolfFight;
					if (wolfFight == 1)
					{
						cout << "You raise your hand to the wolf's chest and set it on fire. Unfortunately, it didn't run away like you thought it would. Instead it dies on top of you, and you aren't able to muster up the strength to get it off. Your barrier shatters and the flaming corpse of the wolf falls directly onto you." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
					else if (wolfFight == 2)
					{
						cout << "You conjure a spectral dagger, and stab the wolf, who dies. You push it's corpse off of you, and get up. You're all bruised up, but alive." << endl;
						cout << "You continue along the path. You must find something before the sun comes up!" << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (wolfFight == 3)
					{
						cout << "You cast an invisibility spell. As you try to knock the wolf off of you, it starts biting all over the place in confusion." << endl;
						cout << "Eventually you get the wolf off you, and you're able to sneak away while it rabidly bites the air around it, thinking you might still be there." << endl;
						cout << "When you're far away from the wolf, you remove your invisibility spell. You're alive, but have a nasty bite on your left arm. It must have gotten you while you were trying to get if off of you." << endl;
						cout << "There's no time to worry about that now. You wrap the wound, and continue with your quest. You must find something before the sun comes up!" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "Nice try." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (pathChoice == 2)
				{
					cout << "You follow the path to the right. Things are quiet for a while." << endl;
					cout << "You stop and look around when you hear a quiet laugh." << endl;
					cout << "Out of seemingly nowhere, a forest troll leaps from the trees and lands ontop of you. Luckily, you were able to put up a magic barrier in time, which blocked his rapid axe swings." << endl;
					cout << "You'll have to act quickly if you want to survive this forest troll attack." << endl;
					cout << "" << endl;
					cout << "Press '1' to conjure a spectral bear to fight the forest troll, '2' to try and disarm him, or '3' to talk him down." << endl;
					int trollFight;
					cin >> trollFight;
					if (trollFight == 1)
					{
						cout << "You conjure a spectral bear, which charges the forest troll and gets him off of you." << endl;
						cout << "Frightened, the forest troll runs away." << endl;
						cout << "You nod at your creation approvingly, and it disappears. On with your quest. Hopefully that forest troll doesn't come back for more." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (trollFight == 2)
					{
						cout << "While still blocking his attacks with your barrier, you try to grab one of his axes." << endl;
						cout << "The forest troll, blinded by his bloodlust, doesn't notice, and you're able to take one of his axes." << endl;
						cout << "The forest troll looks at you with rage and bewilderment, but is only able to stare for a second before you strike him with the axe." << endl;
						cout << "You shove the forest troll's body off of you, get up, and continue with your quest. You don't have time for this nonsense." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (trollFight == 3)
					{
						cout << "You: 'Hey, stop! STOP! What do you want? Gold?'" << endl;
						cout << "The troll stops attacking you for a moment and stares down at you." << endl;
						cout << "Troll: 'GOLD?! Hahahahaha, stupid human. My tribe will honor me for your head!'" << endl;
						cout << "While the troll is busy laughing at you, you take down your magic barrier, raise your hand, and engulf the troll in flames. It runs away screaming for a moment before collapsing." << endl;
						cout << "You get up, brush yourself off, and sigh." << endl;
						cout << "You: 'Someone really needs to deal with all of these forest troll tribes.'" << endl;
						cout << "You'll have to petition the King about that another time. Right now, you have a job to do, and are running out of time to do it." << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "Unable to think of anything in time, the forest troll's rapid axe strikes shatter your barrier, and you're slain." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "Not having any valid decision to make, you just stand there. Forever. Eventually you die of starvation." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "About an hour later, you see an ominous red glow in the distant, and can hear faint chanting. You've finally found what you're looking for!" << endl;
				cout << "You hurry to where the glow and chanting are coming from, and find yourself at a crater. At the bottom of the crater, a bunch of people in robes appear to be performing some sort of ritual around an altar. You hide behind a rock and watch." << endl;
				cout << "Upon closer inspection, you see a man laying on the altar. No... not just any man, it's the blacksmith who went missing just two days ago! So this is where he went. These cultists must've kidnapped him. But how will you save him? You don't even know what exactly they're doing." << endl;
				cout << "" << endl;
				cout << "Press '1' to intervene and attempt to rescue the man, or press '2' to stay where you are and observe." << endl;
				int altarChoice;
				cin >> altarChoice;
				if (altarChoice == 1)
				{
					cout << "You stand up, and hurl a massive fire ball towards a group of cultists. Thanks to having the element of surprise, and that scroll of wildfire, you're spell actually takes out a large number of the cultists. Unfortunately, there are still too many of them and they quickly overwhelm you." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				else if (altarChoice == 2)
				{
					cout << "You watch to try to get a better idea of what the cultists are doing. After a minute or so, the man starts to turn black and his body contorts. Horrified, you prepare to go in and save him." << endl;
					cout << "Before you can go, you're grabbed on the arm. You turn around, and a man wearing the same robes as the cultists is staring at you, with a finger over his mouth." << endl;
					cout << "Cultist: 'Shh... there's nothing you can do for him now.'" << endl;
					system("pause");
					cout << "" << endl;
				}
				else
				{
					cout << "You get up to try and rescue the man, but second guess yourself. In your hesitation, the cultists saw you, and drained your life away with their dark magics." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "You watch in horror as the man on the altar is sacrificed. The cultists' chanting gets louder as time goes on, and eventually, the burnt and mangled body of the man morphs into some sort of... demon?" << endl;
				cout << "What you see makes you want to hurl. So this was the fate of everyone who disappeared. You start to wonder if these cultists have a whole group of demons hidden around somewhere, and what they could be wanting to use them for. Pretty quickly, you remember the cultist crouched next to you, and you raise your hand to blast him into oblivion." << endl;
				cout << "" << endl;
				cout << "Cultist: 'Don't! There was nothing you could've done, and I'm not one of them. Well, not anymore, anyway.'" << endl;
				cout << "You: 'What do you mean? You better start explaining.'" << endl;
				cout << "Cultist: 'I was one of them, but I left as soon as I realized what we were doing to these people. I thought we were simply summoning demons, I didn't think we were turning people INTO them!'" << endl;
				cout << "You: 'You're not doing a great job of convincing me to spare you...'" << endl;
				cout << "Cultist: 'Look, you can think of it what you want, but the fact is you're going to need my help if you want to stop these guys from sacrificing more people. I know how many there are, where they are, and what they can do. Kill me, and you're on your own. Trust me, you'll never wipe them all out by yourself. And the King certainly won't believe you. He hasn't thus far, and you don't have proof.'" << endl;
				cout << "" << endl;
				cout << "Press '1' to kill the cultist, or '2' to spare him and let him help you." << endl;
				int cultFriend;
				cin >> cultFriend;
				if (cultFriend == 1)
				{
					cout << "You consider this for a moment, but ultimately, you decide that siding with evil as a means to an end is still siding with evil, and you kill the cultist." << endl;
					cout << "You get up, and fire a massive fireball towards the center of the crater. Now that you don't have the man to worry about saving, you don't hold back." << endl;
					cout << "The fireball obliterates all of the cultists, and the demon. Now you've got to find their compound." << endl;
					cout << "After searching for a while, you find a door built into the base of a mountain." << endl;
					cout << "You raise both of your hands and attempt to magically unlock the door." << endl;
					srand((unsigned)time(0));
					int rNumDoor = (rand() % 100) + 1;
					if (rNumDoor <= 20)
					{
						cout << "You're able to bypass the magical wards on the door, and you sneak your way in." << endl;
					}
					else
					{
						cout << "The magical wards protecting the door activate, and you're struck with a powerful blast of lightning. You're not dead, but you collapse and are unable to move. When you look up, several cultists are standing over you. They pick you up and take you to the sacrificial altar. The last thing you hear is their chanting right before you're turned into a demon." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else if (cultFriend == 2)
				{
					cout << "You: 'Fine. But you stay where I can see you, and once you've helped me, you leave town. And never return. Understand?'" << endl;
					cout << "Cultist: 'Gladly. Let's go, we don't have much time before the next sacrifice.'" << endl;
					cout << "The two of you stand up, and simultaneously fire massive fireballs towards the center of the altar. Not having to worry about rescuing the man anymore, you hold nothing back." << endl;
					cout << "The fireballs obliterate the cultists and the demon. Your cultist companion then leads you to their hideout, a tunnell system carved into a mountain, blocked off by a magically protected door." << endl;
					cout << "Your companion raises his hands, and removes the magical wards protecting the door." << endl;
					cout << "Cultist: 'The way is open. And this is where I leave you.'" << endl;
					cout << "You: 'You're not coming in with me?'" << endl;
					cout << "Cultist: 'No. They'll sense me immediately because of what they do to us during the initiation ritual. I'll only get both of us killed. Good luck.'" << endl;
					cout << "The cultist turns around and starts running. You believe him when he says he'll leave town, but maybe you should take care of him just in case." << endl;
					cout << "" << endl;
					cout << "Press '1' to let him flee, or '2' to kill him." << endl;
					int cultFriendFate;
					cin >> cultFriendFate;
					if (cultFriendFate == 1)
					{
						cout << "You let him go, and then carry on with the task at hand." << endl;
						system("pause");
						cout << "" << endl;
					}
					else if (cultFriendFate == 2)
					{
						cout << "You raise your hand and blast the cultist with a lightning bolt. He's dead before he hits the floor." << endl;
						cout << "Having tied up this potential loose end, you carry on with the task at hand." << endl;
					}
				}
				else
				{
					cout << "Restart the game? Okay!" << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "One by one, you eliminate the cultists in the hideout. It's actually pretty easy, they don't suspect a thing. Most of them are sleeping." << endl;
				cout << "When you reach the back room of the hideout, you open the door, and see a massive cage filled with demons. Presumably, they're what's left of all of the Gatheans that disappeared." << endl;
				cout << "" << endl;
				cout << "Press '1' to slay all of the demons, '2' to keep them there and leave, or '3' to set them free." << endl;
				int demonChoice;
				cin >> demonChoice;
				if (demonChoice == 1)
				{
					cout << "Using a poison spell, you mercifully put down all of the former Gathe citizens. The demonic forms they had become won't become a problem for anyone. Having accomplished what you came here to do and then some, you head back to Gathe." << endl;
					system("pause");
					cout << "" << endl;
				}
				else if (demonChoice == 2)
				{
					cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action is to just leave. You make your way out of the hideout and head back to Gathe." << endl;
					system("pause");
					cout << "" << endl;
				}
				else if (demonChoice == 3)
				{
					srand((unsigned)time(0));
					int rNumDemon = (rand() % 1000) + 1;
					if (rNumDemon <= 1)
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe, right?" << endl;
						cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Does it recognize you? This must've been someone you've seen before." << endl;
						cout << "It makes a soft grunting sound at you, then turns around to face the other demons. After a moment, they all simply fade from existence. Have they gone back to their plane of existance, or wherever it is they came from?" << endl;
						cout << "Frankly, it could be anything. There's literally a 0.1% chance of you even getting this outcome. So congrats. :P" << endl;
						system("pause");
						cout << "" << endl;
					}
					else
					{
						cout << "After watching the demons for a minute, wondering what you should do, you decide that the best course of action would be to set these creatures free. After all, it's not their fault. And surely deep down they remember that they were once friendly citizens of Gathe... right?" << endl;
						cout << "You unlock the cage, open the door, and wait. One of the demons slowly approaches you. It has a look on it's face... almost... familiarity? Could it actually recognize you? You start to have hope for these creatures... " << endl;
						cout << "And then it eats you. Afterwards, the demons flee the hideout and decimate Gathe. Nice job." << endl;
						cout << "Game over." << endl;
						system("pause");
						cout << "" << endl;
						goto retry;
					}
				}
				else
				{
					cout << "After watching the demons for a minute, wondering what you should do, suddenly it occurs to you..." << endl;
					cout << "What are you doing? Why are you trying to save Gathe from these things? You HATE Gathe! What have those losers ever done for you? It doesn't even have a normal name. Whoever named it probably got it from some sort of random list." << endl;
					cout << "Realizing the full potential of the power within your grasp, you use a mass mind-control spell to bend the demons to your will." << endl;
					cout << "With the demons fully obeying you, you open the cage and unleash them upon Gathe. You watch as the city burns to the ground, and as you look upon the ruins, for the first time in your entire life, that hatred brewing inside you is gone." << endl;
					cout << "Game over." << endl;
					system("pause");
					cout << "" << endl;
					goto retry;
				}
				cout << "As you return home, you can't help but think about everything that's transpired tonight. You're beaten up and exhausted, but you solved the mystery, and saved the town at the same time. In the end, it was worth it." << endl;
				cout << "" << endl;
				cout << "On the table, you see a note. At the top is the seal of the royal wizard's association. They revoked your membership after an experiment went awry many years ago. You didn't think you'd ever hear from them again." << endl;
				cout << "" << endl;
				cout << "The note reads: 'Dear " << name << ", we wanted to thank you for dealing with this demonic cultist problem. We've been following the issue since the first disappearance, but the King didn't have enough evidence to let us do anything about it. You've done a great service both for us, and all of Gathe by taking care of it yourself. By order of the King himself, we've restored your status to the association as Archwizard. Congratulations. We expect to see you in the Arcaneum first thing tomorrow morning so we can catch you up.'" << endl;
				cout << "" << endl;
				cout << "You're stunned. They've restored your status? You've wanted this for years. You had no idea this would happen, you just wanted to do some good for the people of Gathe, and now the good karma is paying off." << endl;
				cout << "You look at the sleeping faces of your family, and know that everything worked out the way it was supposed to. You climb into bed to get at least a few hours of sleep. After all, you have an early morning ahead of you!" << endl;
				cout << "" << endl;
				cout << "You fall asleep. Moments later, a very small part of the forest outside your house starts glowing." << endl;
				system("pause");
				cout << "" << endl;
				cout << "Congratulations! You've beaten the game! If you haven't already, feel free to start over and try making different decisions. Maybe they'll influence the outcome?" << endl;
				cout << "Or, you could try the other playable class, 'soldier'. It has a completely different story with multiple branching paths for you to experience." << endl;
				cout << "Thanks for playing!" << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}
			else
			{
				cout << "By standing still doing nothing for too long, one of the hunters inside mistakes you for a wild animals, and shoots you with his bow." << endl;
				cout << "Game over. Please input a valid option." << endl;
				system("pause");
				cout << "" << endl;
				goto retry;
			}
		}
		else
		{
			cout << "You waited too long to make a decision, and a guard has arrested you for lollygagging." << endl;
			cout << "Game over. Please input a valid option." << endl;
			system("pause");
			cout << "" << endl;
			goto retry;
		}
	}
	else
	{
		cout << "I'm afraid that wasn't an option. Please press either '1', or '2'. Nothing else will work." << endl;
		system("pause");
		cout << "" << endl;
		goto retry;
	}
}