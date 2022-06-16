#AGCEEP - The Grand Campaign - 1419

#-----------------------------------------------------------------------------------------------
#Global Data

globaldata = {
	startdate = { day = 0 month = january year = 1419 }
	enddate = { day = 29 month = december year = 1819 }

	discoveries = {
		discovery = { continent = "America" value = no }
		discovery = { continent = "Asia" value = no }
		discovery = { region = "India" value = no }
		discovery = { region = "Australia" value = no }
		discovery = { region = "Pacific" value = no }
		discovery = { area = "Panama" value = no }
		discovery = { area = "Alaska" value = no }
		discovery = { area = "California" value = no }
		discovery = { area = "Grand Lacs" value = no }
		discovery = { area = "Quebec" value = no }
		discovery = { area = "Amazonia" value = no }
		discovery = { area = "Manchuria" value = no }
		discovery = { area = "Kamchatka" value = no }
		discovery = { area = "HudsonBayArea" value = no }
		discovery = { area = "CapeHornArea" value = no }
		discovery = { area = "GoodHopeArea" value = no }
	}
	establishments = {
		establishment = { continent = "Africa" value = no }
		establishment = { continent = "America" value = no }
		establishment = { continent = "Oceania" value = no }
		establishment = { region = "China" value = no }
		establishment = { region = "India" value = no }
		establishment = { region = "Japan" value = no }
		establishment = { region = "Siberia" value = no }
	}

#The Hundred Years War, Post Agincourt
儿F Alternative_Wales
	war = {
		id = { type = 9430 id = 1 }
		date = { year = 1415 month = august day = 11 }
		enddate = { year = 1418 month = december day = 29 }
		defenderscore = { FRA = { } }
		attackerscore = { ENG = { FRA = 3 } }
		attackers = {
			id = { type = 9430 id = 2 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { ENG WLS }
		}
		defenders = {
			id = { type = 9430 id = 3 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { FRA }
		}
	}
九LSE
	war = {
		id = { type = 9430 id = 1 }
		date = { year = 1415 month = august day = 11 }
		enddate = { year = 1418 month = december day = 29 }
		defenderscore = { FRA = { } }
		attackerscore = { ENG = { FRA = 3 } }
		attackers = {
			id = { type = 9430 id = 2 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { ENG }
		}
		defenders = {
			id = { type = 9430 id = 3 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { FRA }
		}
	}
九NDIF

#Venetian invasion of Aquelia, seizure of Dalmatia
	war = {
		id = { type = 9430 id = 7 }
		date = { year = 1418 month = january day = 0 }
		enddate = { year = 1418 month = december day = 29 }
		attackerscore = { VEN = { HUN = 20 }}
		attackers = {
			id = { type = 9430 id = 8 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { VEN }
		}
		defenders = {
			id = { type = 9430 id = 9 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { HUN }
		}
	}

#War over the County of Holland
	war = {
		id = { type = 9430 id = 10 }
		date = { year = 1418 month = january day = 0 }
		enddate = { year = 1418 month = december day = 29 }
		attackerscore = { LUX = { HAU = 25 }}
		attackers = {
			id = { type = 9430 id = 11 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { LUX }
		}
		defenders = {
			id = { type = 9430 id = 12 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { HAU }
		}
	}

#-----------------------------------------------------------------------------------------------
#Alliances: vassalizations

	alliance = {
		id = { type = 6000 id = 1 }
		type = vassalization
		startdate = { year = 1397 month = june day = 17 }
		expirydate = { year = 1459 } 
		name = "Union of Kalmar"
		participant = { DAN SWE }
	}
	alliance = {
		id = { type = 6000 id = 2 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { BUR FRA }
	}
	alliance = {
		id = { type = 6000 id = 3 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1490 }
		participant = { LAT LIV }
	}
	alliance = {
		id = { type = 6000 id = 4 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { TIM DLH }
	}
	alliance = {
		id = { type = 6000 id = 5 }
		type = vassalization
		expirydate = { day = 25 month = december year = 1440 }
		participant = { TUR BYZ }
	}
	alliance = {
		id = { type = 6000 id = 6 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1440 }
		participant = { STE SIB }
	}
	alliance = {
		id = { type = 6000 id = 7 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1420 }
		participant = { DLH GUJ }
	}
	alliance = {
		id = { type = 6000 id = 8 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1500 }
		participant = { TYR STR }
	}
	alliance = {
		id = { type = 6000 id = 9 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1420 }
		participant = { DLH MLW }
	}
	alliance = {
		id = { type = 6000 id = 10 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1420 }
		participant = { DLH JAI }
	}
	alliance = {
		id = { type = 6000 id = 12 }
		type = vassalization
		startdate = { year = 1397 month = june day = 17 }
		expirydate = { year = 1459 } 
		name = "Union of Kalmar 2"
		participant = { DAN NOR }
	}
	alliance = {
		id = { type = 6000 id = 13 }
		type = vassalization
		expirydate = { day = 1 month = february year = 1456 }
		participant = { NVG PSK }
	}
	alliance = {
		id = { type = 6000 id = 14 }
		type = vassalization
		expirydate = { day = 2 month = january year = 1492 }
		participant = { CAS GRA }
	}
	alliance = {
		id = { type = 6000 id = 15 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { DAU BEA }
	}
	alliance = {
		id = { type = 6000 id = 16 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1520 }
		participant = { MAM DUL }
	}
	alliance = {
		id = { type = 6000 id = 17 }
		type = vassalization
		expirydate = { day = 15 month = june year = 1480 }
		participant = { MTR SWA }
	}
	alliance = {
		id = { type = 6000 id = 18 }
		type = vassalization
		expirydate = { day = 15 month = august year = 1491 }
		participant = { MYA ARK }
	}
	alliance = {
		id = { type = 6000 id = 19 }
		type = vassalization
		expirydate = { day = 15 month = august year = 1491 }
		participant = { CHI LGD }
	}
	alliance = {
		id = { type = 6000 id = 20 }
		type = vassalization
		expirydate = { day = 15 month = august year = 1491 }
		participant = { POL MIN }
	}
	alliance = {
		id = { type = 6000 id = 21 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1460 }
		participant = { LOR STR }
	}
	alliance = {
		id = { type = 6000 id = 22 }
		type = vassalization
		expirydate = { day = 15 month = june year = 1480 }
		participant = { MTR PAL }
	}
	alliance = {
		id = { type = 6000 id = 23 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1460 }
		participant = { TUR ATH }
	}
	alliance = {
		id = { type = 6000 id = 24 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { VEN MAN }
	}
	alliance = {
		id = { type = 6000 id = 25 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1500 }
		participant = { MOS TVE }
	}
	alliance = {
		id = { type = 6000 id = 26 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1500 }
		participant = { MOS RYA }
	}
	alliance = {
		id = { type = 6000 id = 27 }
		type = vassalization
		expirydate = { day = 25 month = december year = 1500 }
		participant = { ENG CON }
	}
	alliance = {
		id = { type = 6000 id = 28 }
		type = vassalization
		expirydate = { day = 25 month = december year = 1500 }
		participant = { ENG LEI }
	}
	alliance = {
		id = { type = 6000 id = 29 }
		type = vassalization
		expirydate = { day = 25 month = december year = 1500 }
		participant = { ENG ULS }
	}
	alliance = {
		id = { type = 6000 id = 30 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1441 }
		participant = { TUR WAL }
	}
	alliance = {
		id = { type = 6000 id = 31 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1500 }
		participant = { TUR ALB }
	}
	alliance = {
		id = { type = 6000 id = 32 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1500 }
		participant = { HUN SER }
	}
	alliance = {
		id = { type = 6000 id = 33 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { HAU FRI }
	}
	alliance = {
		id = { type = 6000 id = 34 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1441 }
		participant = { POL MOL }
	}
	alliance = {
		id = { type = 6000 id = 35 }
		type = vassalization
		expirydate = { year = 1425 month = january day = 1 }
		participant = { TUR BOS }
	}
	alliance = {
		id = { type = 6000 id = 36 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1500 }
		participant = { STT MEC }
	}
	alliance = { #Calicut & Cochin
		id = { type = 6000 id = 37 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1500 }
		participant = { FAT COI }
	}
	alliance = {
		id = { type = 6000 id = 38 }
		type = vassalization
		expirydate = { day = 15 month = august year = 1429 }
		participant = { QAR IRA }
	}
	alliance = {
		id = { type = 6000 id = 39 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1428 }
		participant = { STE UZB }
	}
	alliance = {
		id = { type = 6000 id = 40 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1449 }
		participant = { TIM AKK }
	}
	alliance = {
		id = { type = 6000 id = 41 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1421 }
		participant = { MAM KAR }
	}
	alliance = {
		id = { type = 6000 id = 42 }
		type = vassalization
		expirydate = { day = 1 month = january year = 1440 }
		participant = { GEO SEV }
	}
	alliance = {
		id = { type = 6000 id = 43 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { QAR BAS }
	}
	alliance = {
		id = { type = 6000 id = 44 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { IRA BAS }
	}
	alliance = {
		id = { type = 6000 id = 45 }
		type = vassalization
		expirydate = { day = 15 month = august year = 1447 }
		participant = { TIM HAA }
	}
	alliance = {
		id = { type = 6000 id = 46 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { ORM GHA }
	}
	alliance = {
		id = { type = 6000 id = 47 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { ADE HAD }
	}
	alliance = {
		id = { type = 6000 id = 48 }
		type = vassalization
		expirydate = { day = 25 month = december year = 1500 }
		participant = { FRA BRI }
	}
	alliance = {
		id = { type = 6000 id = 49 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1520 }
		participant = { MAM RAG }
	}
	alliance = {
		id = { type = 6000 id = 50 }
		type = vassalization
		expirydate = { day = 15 month = august year = 1491 }
		participant = { CHI HAM }
	}
	alliance = {
		id = { type = 6000 id = 51 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { PAP NAP }
	}
	alliance = {
		id = { type = 6000 id = 52 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { ARG COR }
	}
	alliance = {
		id = { type = 6000 id = 53 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { PAP PAM }
	}
	alliance = {
		id = { type = 6000 id = 54 }
		type = vassalization
		expirydate = { day = 29 month = december year = 1427 }
		participant = { TUR SER }
	}
	alliance = {
		id = { type = 6000 id = 56 }
		type = vassalization
		expirydate = { day = 15 month = june year = 1480 }
		participant = { MTR BEI }
	}
儿F Alternative_Wales
	alliance = {
		id = { type = 6000 id = 55 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { ENG WLS }
	}
九NDIF

#-----------------------------------------------------------------------------------------------
#Alliances: military alliances

	alliance = {
		id = { type = 9423 id = 1 }
		type = militaryalliance
		expirydate = { year = 1423 }
		participant = { DAU BRI }
	}
	alliance = {
		id = { type = 9423 id = 2 }
		type = militaryalliance
		expirydate = { year = 1429 }
		participant = { BUR KLE HAU LOR }
	}
	alliance = {
		id = { type = 9423 id = 3 }
		type = militaryalliance
		expirydate = { year = 1429 }
		participant = { XHO TUN }
	}
	alliance = {
		id = { type = 9423 id = 4 }
		type = militaryalliance
		expirydate = { year = 1431 }
		participant = { LIT POL MIN}
	}
	alliance = {
		id = { type = 9423 id = 5 }
		type = militaryalliance
		expirydate = { year = 1440 }
		participant = { DAN SWE NOR }
	}
	alliance = { #A representation of the Hansa...
		id = { type = 9423 id = 6 }
		type = militaryalliance
		expirydate = { year = 1492 }
		participant = { MEC BRE SHL }
	}
	alliance = {
		id = { type = 9423 id = 7 }
		type = militaryalliance
		expirydate = { year = 1500 }
		participant = { HUN BOH HAB }
	}
	alliance = {
		id = { type = 9423 id = 8 }
		type = militaryalliance
		expirydate = { year = 1435 }
		participant = { PAP NAP GEN PRO }
	}
	alliance = {
		id = { type = 9423 id = 9 }
		type = militaryalliance
		expirydate = { year = 1454 }
		participant = { KAR TEK }
	}
	alliance = {
		id = { type = 9423 id = 10 }
		type = militaryalliance
		expirydate = { year = 1450 }
		participant = { STE SIB }
	}
	alliance = {
		id = { type = 9423 id = 11 }
		type = militaryalliance
		expirydate = { year = 1500 }
		participant = { TYR PRM STR WUR }
	}
	alliance = {
		id = { type = 9423 id = 12 }
		type = militaryalliance
		expirydate = { year = 1500 }
		participant = { BRA SAC POM }
	}
	alliance = {
		id = { type = 9423 id = 13 }
		type = militaryalliance
		expirydate = { year = 1434 }
		participant = { ARG COR }
	}
	alliance = {
		id = { type = 9423 id = 14 }
		type = militaryalliance
		expirydate = { year = 1492 }
		participant = { LAT LIV }
	}
	alliance = {
		id = { type = 9423 id = 15 }
		type = militaryalliance
		expirydate = { day = 12 month = april year = 1500 }
		participant = { BAY PFA LUX }
	}
	alliance = {
		id = { type = 9423 id = 16 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1433 }
		participant = { MOS RYA TVE PSK }
	}
	alliance = {
		id = { type = 9423 id = 17 }
		type = militaryalliance
		expirydate = { year = 1453 }
		participant = { MLO PAM MAN }
	}
	alliance = { #Ottomans allied with Albania, Bosnia and Wallachia
		id = { type = 9423 id = 18 }
		type = militaryalliance
		expirydate = { year = 1430 }
		participant = { TUR ALB BOS WAL }
	}
	alliance = {
		id = { type = 9423 id = 19 }
		type = militaryalliance
		expirydate = { year = 1500 }
		participant = { HES MEI }
	}
	alliance = {
		id = { type = 9423 id = 20 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1500 }
		participant = { CHI TIB KOR }
	}
	alliance = {
		id = { type = 9423 id = 21 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1500 }
		participant = { CAM AMI }
	}
	alliance = {
		id = { type = 9423 id = 22 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1450 }
		participant = { KHM MYA }
	}
	alliance = {
		id = { type = 9423 id = 23 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1460 }
		participant = { AYU CHA }
	}
	alliance = {
		id = { type = 9423 id = 24 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1445 }
		participant = { PEG ARK }
	}
	alliance = {
		id = { type = 9423 id = 25 }
		type = militaryalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { BYZ SPR }
	}
	alliance = {
		id = { type = 9423 id = 26 }
		type = militaryalliance
		expirydate = { day = 29 month = december year = 1440 }
		participant = { VEN TOS SAV }
	}
	alliance = {
		id = { type = 9423 id = 27 }
		type = militaryalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { SHL OLD }
	}
	alliance = {
		id = { type = 9423 id = 28 }
		type = militaryalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { HAN BRE }
	}
	alliance = {
		id = { type = 9423 id = 29 }
		type = militaryalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { GEL MUN }
	}
	alliance = {
		id = { type = 9423 id = 30 }
		type = militaryalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { KOL MAI }
	}
	alliance = {
		id = { type = 9423 id = 31 }
		type = militaryalliance
		expirydate = { year = 1466 }
		participant = { BEN OYO }
	}
	alliance = {
		id = { type = 9423 id = 32 }
		type = militaryalliance
		expirydate = { year = 1450 }
		participant = { JAI MLW }
	}
	alliance = {
		id = { type = 9423 id = 33 }
		type = militaryalliance
		expirydate = { year = 1440 }
		participant = { HUN SER }
	}
	alliance = {
		id = { type = 9423 id = 34 }
		type = militaryalliance
		expirydate = { year = 1429 }
		participant = { MAM DUL RAG }
	}
	alliance = {
		id = { type = 9423 id = 35 }
		type = militaryalliance
		expirydate = { year = 1430 }
		participant = { BAS IRA }
	}
	alliance = {
		id = { type = 9423 id = 36 }
		type = militaryalliance
		expirydate = { year = 1429 }
		participant = { GUJ MES }
	}
	alliance = {
		id = { type = 9423 id = 37 }
		type = militaryalliance
		expirydate = { year = 1429 }
		participant = { ADE HAD }
	}
	alliance = {
		id = { type = 9423 id = 38 }
		type = militaryalliance
		expirydate = { day = 10 month = february year = 1500 }
		participant = { CHI KOR HAM TAU }
	}
	alliance = {
		id = { type = 9423 id = 39 }
		type = militaryalliance
		expirydate = { year = 1453 }
		participant = { KNI CYP }
	}
儿F Alternative_Wales
	alliance = {
		id = { type = 9423 id = 40 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { ENG CON LEI ULS WLS }
	}
九LSE
	alliance = {
		id = { type = 9423 id = 40 }
		type = militaryalliance
		expirydate = { year = 1430 }
		participant = { ENG CON LEI ULS }
	}
九NDIF

#-----------------------------------------------------------------------------------------------
#Alliances: royal marriages

	alliance = {
		id = { type = 6000 id = 100 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { TOS ATH }
	}
	alliance = {
		id = { type = 6000 id = 101 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { BAY LUX }
	}
	alliance = {
		id = { type = 6000 id = 102 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { PFA LUX }
	}
	alliance = {
		id = { type = 6000 id = 103 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { POM STT }
	}
	alliance = {
		id = { type = 6000 id = 104 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1440 }
		participant = { LUX BOH }
	}
	alliance = {
		id = { type = 6000 id = 105 }
		type = dynasticalliance
		expirydate = { year = 1425 }
		participant = { STE MOS }
	}
	alliance = {
		id = { type = 6000 id = 106 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1500 }
		participant = { CAS ARG }
	}
	alliance = {
		id = { type = 6000 id = 107 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1440 }
		participant = { CAS POR }
	}
	alliance = {
		id = { type = 6000 id = 108 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1440 }
		participant = { ARG POR }
	}
	alliance = {
		id = { type = 6000 id = 109 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1440 }
		participant = { LUX HUN }
	}
	alliance = {
		id = { type = 6000 id = 110 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1440 }
		participant = { BOH HUN }
	}
	alliance = {
		id = { type = 6000 id = 111 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1491 }
		participant = { BUR HAU }
	}
	alliance = {
		id = { type = 6000 id = 112 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1491 }
		participant = { BUR LUX }
	}
	alliance = {
		id = { type = 6000 id = 113 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1491 }
		participant = { DAN NOR }
	}
	alliance = {
		id = { type = 6000 id = 114 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1491 }
		participant = { DAN SWE }
	}
	alliance = {
		id = { type = 6000 id = 115 }
		type = dynasticalliance
		expirydate = { day = 27 month = october year = 1430 }
		participant = { MOS LIT }
	}
	alliance = {
		id = { type = 6000 id = 116 }
		type = dynasticalliance
		expirydate = { day = 27 month = july year = 1419 }
		participant = { TUR DUL }
	}
	alliance = {
		id = { type = 6000 id = 117 }
		type = dynasticalliance
		expirydate = { day = 2 month = january year = 1468 }
		participant = { UZB SIB }
	}
	alliance = {
		id = { type = 6000 id = 118 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { BAY PFA }
	}
	alliance = {
		id = { type = 6000 id = 119 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1476 }
		participant = { KLE BUR }
	}
	alliance = {
		id = { type = 6000 id = 120 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { HAB TYR }
	}
	alliance = {
		id = { type = 6000 id = 121 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { HAB PRM }
	}
	alliance = {
		id = { type = 6000 id = 122 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { PRM TYR }
	}
	alliance = {
		id = { type = 6000 id = 123 }
		type = dynasticalliance
		expirydate = { year = 1444 }
		participant = { POR ENG }
	}
	alliance = {
		id = { type = 6000 id = 125 }
		type = dynasticalliance
		expirydate = { day = 10 month = february year = 1445 }
		participant = { CHI KOR }
	}
	alliance = {
		id = { type = 6000 id = 127 }
		type = dynasticalliance
		expirydate = { day = 15 month = august year = 1434 }
		participant = { LIT MIN }
	}
	alliance = {
		id = { type = 6000 id = 128 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1460 }
		participant = { ATH SPR }
	}
	alliance = {
		id = { type = 6000 id = 129 }
		type = dynasticalliance
		expirydate = { day = 29 month = december year = 1450 }
		participant = { STE TVE }
	}
	alliance = {
		id = { type = 6000 id = 130 }
		type = dynasticalliance
		expirydate = { year = 1430 }
		participant = { STE RYA }
	}
	alliance = {
		id = { type = 6000 id = 131 }
		type = dynasticalliance
		expirydate = { year = 1439 }
		participant = { MOR XHO }
	}
	alliance = {
		id = { type = 6000 id = 132 }
		type = dynasticalliance
		expirydate = { year = 1434 }
		participant = { TIM AKK }
	}
	alliance = { #Margarete of Wittelsbach
		id = { type = 6000 id = 133 }
		type = dynasticalliance
		expirydate = { day = 25 month = january year = 1431 }
		participant = { PFA LOR }
	}
	alliance = {
		id = { type = 6000 id = 134 }
		type = dynasticalliance
		expirydate = { day = 25 month = january year = 1431 }
		participant = { MAM ADE }
	}
	alliance = {
		id = { type = 6000 id = 135 }
		type = dynasticalliance
		expirydate = { day = 25 month = january year = 1431 }
		participant = { GUJ MES }
	}
	alliance = {
		id = { type = 6000 id = 136 }
		type = dynasticalliance
		expirydate = { year = 1422 }
		participant = { THE VIJ }
	}

	alliance = {
		id = { type = 6000 id = 137 }
		type = dynasticalliance
		expirydate = { year = 1431 }
		participant = { DAN ENG }
	}

	alliance = {
		id = { type = 6000 id = 138 }
		type = dynasticalliance
		expirydate = { year = 1433 }
		participant = { FRA BRI }
	}

	emperor = HUN

	defender = { PAP = catholic }
	defender = { BYZ = orthodox }
	defender = { MAM = sunni }
	defender = { DAN = protestant }
	defender = { QAR = shiite }
	defender = { CHI = confucianism }
	defender = { VIJ = hinduism }
	}

#-----------------------------------------------------------------------------------------------
