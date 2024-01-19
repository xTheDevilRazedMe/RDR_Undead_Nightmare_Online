Things you need to be aware of before installing.
-
The term "variation swap" 
in the rpfs you have 2 types of the same script, the normal version & the undead version the undead version has the same name just with a _z at the end.
I created this mod just by removing the _z from the filenames & replacing the original scripts with the ones I just renamed making this mod considered a variation swap. 

This is recommended to be used with the latest version of demonic rev because you can give your self undead weapons, loading the undead interiors loads in what the scripts do not.

There is a section at the bottom for developers who are interested in developing a function that can be used in normal sp. 

What does this mod do? 
-
This mod essentially brings the undead nightmare experience to your Free Roam lobbies that you can enjoy with other players.

Specifically
Turns all townfolk peds into zombies that attack you & anything else in there way. Including other players.

Syncs perfectly with other people using the mod & is extremely fun. 

When loaded by its self (not recommended) it loads all fires for towns & changes the weather (fog/must used in undead)

Loads in the undead sp challenges (useless in mp) gives you points for killing zombies kinda.

Loads in fx for the 4 horses of the apocalypse.

Mod background
-
I found this all the way back in 2018 & never released it due to it's freeze method when combined with other mods. 
Matrix made a video of it but lost it when having his original channel unbanned.

Fun fact
When I was originally developing demonic rev, the freeze player function was inspired by this mod.



Bugs
-
Zombies & undead horses are missing their applied skin/texture from undead sp. 

Without demonic rev the interior for the catacombs will not load. Fix load undead interiors in the misc menu.

Normal sp break. This breaks normal sp & makes it unplayable. unfortunately since this is a variation swap between scripts there is no toggle button. 

For other developers
-
Since I discovered this I have been wanting to develop a safer toggleable function simulating the effect this mod has that can be used in sp without breaking it or used online without crashing others.

-Weather (loop)
Weather needs to be forced to Thieves Landing weather while function is on to simulate the undead fog.

-load undead interiors & fire on button press
(standard function call/can't be looped)

-iterators //iterate in layouts or spheres
Needs to be used to grab all ped actors, run checks preventing players/vehicles/animals from getting returned.

//Below marked with -- is to be placed inside zombify function.

-Create a function for setting up the zombie. Like this 
//Note when creating the zombie, for mp use in order for this to sync with other people using it, the ZombieID must be the same.
In order for the sync to start the mod will need to be turned on. 
Think about that before releasing your own version of this.

There's a few ways in mind of doing this. Returning the enum of the grabbed actors & adding those to custom actor sets.
This might be a challenge, I very much would like to see what other developers can do.

void ZOMBIFY_ACTOR(Actor actor, ZombieID) //use the return from the iterator as the actor
{
--TURN_ACTOR_INTO_ZOMBIE(actor, ZombieID)
The above native is what makes them zombies.

--ADD_ZOMBIE_TO_ACTOR(actor, ZombieID, idMaybeBool?)
This gives them sort of a zombie texture, not sure what else it does because I haven't messed with it, caboose found this one.

--AI_SET_TR_PROGRAM_FOR_ACTOR(actor, "zombie");
Not sure what effect this has or if it even helps.

--SET_ALLOW_RIDE_BY_PLAYER(actor, false)
The game considers zombies as animals & this is to prevent any version of rideable animals allowing the annoying mount button. Rideable zombies is annoying for sp & unsafe for mp.

--_DELETE_ALL_WEAPONS(actor)
This is useful for making sure the zombies resort to melee

--DECOR_SET_BOOL(actor, "zombie",  true)
This can be useful in many ways, allowing more effects & even acting on them easier. Also when shot with the blunderbuss the bloody mess explosion gets called. 

//The challenge is writing their combat system.

--AI_SET_ALLOW_HOSTILE_ATTACK_AI(actor)
Haven't tested but attempting to throw something up that might work without writing an entire AI for zombies

--AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(actor)
Haven't tested.
}//EndZombify

Caboose has the script for loading in the undead weapons on his GitHub & it's open source. 

If your like me & you rather have it all in one function I would write a check to see if they have been loaded in & if not load it. It's very important that their structs are only loaded once, if not it will crash you. 
Once structs are loaded give yourself only the undead weapons & their ammo.
If done correctly you will be given all the undead weapons once toggled. 

Getting them to load in mp you need to be bypassed.
Caboose created a plugin for auto bypass but I'm not releasing it without the say so from him.


If you make your own, continue on the name & version & give credit where due.

Enjoy the UndeadFreeRoam while it lasts.
Your Welcome.
xTheDevilRazedMe signing off.


