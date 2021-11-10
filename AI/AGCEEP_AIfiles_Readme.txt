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

2. War value and targets.
War values should be kept usually quite low to prevent constant wars that randomize results. Targets for combat should be of two classes: All revolters included in the AI-nation, so that she does try to reincorporate them, and nations that historically lost provinces to that AI-nation.

expansion =     1-3 is an efficient value for exploration. Higher numbers will make the AI start more colonies but could do so in the wrong places, and not even in the assigned area, if there are not enough places. Great colonizers SPA, POR can go up to 15 when they have discovered enough provinces. Big colonizers ENG HOL RUS FRA can go up to 10. Case by case testing is needed for each case.
tradingpost =   values of 5-20 for big colonizers. High values for maKing mostly TPs, but even at 100 they will be converted to provinces.

neighbour =     Should almost always be 0.  A negative value for POR will spread the colonies in Africa.
enemies =       Should always be 0.
traders =       Should be 0 for non-trading nations, 10-30 for average nations, 50 for high-trade nations and 100 for CoT owners
monopoly =      Should be -500 for every nation. Some unfriendly CoT owners can have a value of 0.
war =           Default value for small nations should be -75 and for large nations -50. Nations that need to conquer a lot can go up to 50. Over that the AI will attack convenient targets, not historic ones.
ferocity =      Always no. Can only be turned on for a limited time under very special circumstances.
sreligion = no for most countries

combat = { }    List of countries that are either revolters of the AI or need to lose provinces to the AI.
base =
front =         Should be at least 10 times bigger than base to fight efficiently

conquer = {
    enemy =     This value should be low because tax value is not the best criteria for attacKing a province
    supply =    Keep this value very low to avoid dogpiling
    distance =  Colonizers should have a high value (up to 30). The rest should have a low value to fight their neighbours and not send wild expeditions at war
    owner =     Should have a very low value so the AI doesn't abandon her sieges
    notsupply = Intermediate value. Low supply provinces have to be captured also, and at low value they are ignored
    base =      Low values for defenders. High values (up to 15) for warmongers.
}

garrison =      Not very important were they garrison the armies. They are built everywhere and moved to the front while at war

IMPORTANT
How do I know if a country needs a specific AI file?
-Did that nation successfully colonized in EU2 period? (owned colonizable provinces by 1820?) If the answer is yes, that nation needs a specific AI file.
-Did that nation gain possession of EU2 represented provinces by conquest, and hold that possession for several decades? If the answer is yes, that nation needs a specific AI file.
-If the answer is no to both questions, chances are that a specific AI file will do more harm that good to the overall performance of the mod

#-----------------------------------------------------------------------------------------------
