#-----------------------------------------------------------------------------------------------
#Naming of AI files

All AI files that apply to mainly one state should be called

tag_startyear_name.ai,

where "name" can be anything helping the modders remember what it is for.
Generic AI files used by many countries go just by name.
Specific revolters with limited time-span and only one Ai file need not have a year.
AI files activated by certain circumstances need not have a year.

#-----------------------------------------------------------------------------------------------

Guidelines for writing AI files for AGCEEP:

1. Exploration and colonization.
The main effect of this chapter is colonization. No area should be included that did not result in a permanent colony. Historical failed attempts at colonization should not be included, as in EU2, colonization does not fail and often results in permanent settlement. All nations that did not produce permanent colonies within EU2 period should always have expansion set at zero.

#Where the AI will attempt to colonize
area = { }
region = { }
continent = { }

#Where the AI will NOT attempt to colonize. Area/region/continent lists take priority over ignore list.
ignore = { }

2. War value and targets.
War values should be kept usually quite low to prevent constant wars that randomize results. Targets for combat should be of two classes: All revolters included in the AI-nation, so that she does try to reincorporate them, and nations that historically lost provinces to that AI-nation.

#100 = Total warmonger, 0 = absolute pacifist
war = (0.0 - 100.0)
war =           Default value for small nations should be -75 and for large nations -50. Nations that need to conquer a lot can go up to 50. Over that the AI will attack convenient targets, not historic ones.

#negative = no colonization, 0 = only in owned provinces, above 0 = expansionist (related to value) 
expansion = (0.0 - 100.0)
expansion =     1-3 is an efficient value for exploration. Higher numbers will make the AI start more colonies but could do so in the wrong places, and not even in the assigned area, if there are not enough places. Great colonizers SPA, POR can go up to 15 when they have discovered enough provinces. Big colonizers ENG HOL RUS FRA can go up to 10. Case by case testing is needed for each case.

tradingpost =   values of 5-20 for big colonizers. High values for maKing mostly TPs, but even at 100 they will be converted to provinces.

neighbour =     Should almost always be 0.  A negative value for POR will spread the colonies in Africa.
enemies =       Should always be 0.
traders =       Should be 0 for non-trading nations, 10-30 for average nations, 50 for high-trade nations and 100 for CoT owners
monopoly =      Should be -500 for every nation. Some unfriendly CoT owners can have a value of 0.

#yes = Nation fights to the death, no = Nation will try to get out of wars
ferocity = (yes or no)
ferocity =      Always no. Can only be turned on for a limited time under very special circumstances.

#if possible we WILL go in any religion available in the religious subgroup
sreligion = (yes or no)
sreligion = no for most countries

#Which countries to conquer if possible. (to guide nation historically)
combat = { } (nation tags to conquer)
combat = { }    List of countries that are either revolters of the AI or need to lose provinces to the AI.

#How important is it to be as close to target position when gathering troops.
front = (0.0 - 100.0) #recommend good sized value, like 5
front =         Should be at least 10 times bigger than base to fight efficiently

#Evaluation factors for conquer plans, to pick which provinces to attack
conquer = {
    # low values go after all provinces, high values go after only rich provinces
    enemy =     This value should be low because tax value is not the best criteria for attacKing a province #small nations should keep this value high, expansionist nations shouldn't care 
    # low  values mean numerous sieges, high values mean one huge dogpile
    supply =    Keep this value very low to avoid dogpiling
    # low values keep troops close to home, high values don't
    distance =  Colonizers should have a high value (up to 30). The rest should have a low value to fight their neighbours and not send wild expeditions at war
    # low values don't care if your provines are occupied, high values prioritize liberating your provinces 
    owner =     Should have a very low value so the AI doesn't abandon her sieges
    # low values avoid high attrition provinces, high values don't care
    notsupply = Intermediate value. Low supply provinces have to be captured also, and at low value they are ignored

#How important is it to gather troops close to base
base = (0.0 - 100.0) #recommend really low value, like 0.1
    base =      Low values for defenders. High values (up to 15) for warmongers.
 }

#Modifiers for garrison plans 
garrison = {
            # low values keep troops stationed in low or no fortress provinces, high values keep troops near the largest fortress you have     Not very important were they garrison the armies. They are built everywhere and moved to the front while at war
            fortress = (0 - 100.0)
            # low values don't acknowledge the strategic value of a province in deciding where to garrison, high values do
	     strategic = (0 - 100.0)
            # low values don't care if a province is big or small, high values do
	size = (0 - 100.0)
	# low values don't care if a province has a good supply amount, high values do
	supply = (0.0 - 100.0)
	# low values don't care if a province is occupied by you, high values do
	war = (0.0 - 100.0)
          }

#How important is naval tech. Above 1.0 = preference for naval and lower investments in land tech
naval = (0.0 - 100.0)

#yes = Prefer galleys
galleys = (yes or no)

IMPORTANT
How do I know if a country needs a specific AI file?
-Did that nation successfully colonized in EU2 period? (owned colonizable provinces by 1820?) If the answer is yes, that nation needs a specific AI file.
-Did that nation gain possession of EU2 represented provinces by conquest, and hold that possession for several decades? If the answer is yes, that nation needs a specific AI file.
-If the answer is no to both questions, chances are that a specific AI file will do more harm that good to the overall performance of the mod

#-----------------------------------------------------------------------------------------------
