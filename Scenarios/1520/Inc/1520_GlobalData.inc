#AGCEEP - 1520 Scenario

#-----------------------------------------------------------------------------------------------
#Global Data

globaldata = {
	startdate = { day = 0 month = january year = 1520 }
	enddate = { day = 29 month = december year = 1819 }

	discoveries = {
		discovery = { continent = "America" value = yes }
		discovery = { continent = "Asia" value = yes }
		discovery = { region = "India" value = yes }
		discovery = { region = "Australia" value = no }
		discovery = { region = "Pacific" value = yes }
		discovery = { area = "Panama" value = yes }
		discovery = { area = "Alaska" value = no }
		discovery = { area = "California" value = no }
		discovery = { area = "Grand Lacs" value = no }
		discovery = { area = "Quebec" value = no }
		discovery = { area = "Amazonia" value = no }
		discovery = { area = "Manchuria" value = no }
		discovery = { area = "Kamchatka" value = no }
		discovery = { area = "HudsonBayArea" value = no }
		discovery = { area = "CapeHornArea" value = no }
		discovery = { area = "GoodHopeArea" value = yes }
	}
	establishments = {
		establishment = { continent = "Africa" value = yes }
		establishment = { continent = "America" value = yes }
		establishment = { continent = "Oceania" value = no }
		establishment = { region = "China" value = no }
		establishment = { region = "India" value = yes }
		establishment = { region = "Japan" value = no }
		establishment = { region = "Siberia" value = no }
	}

	alliance = {
		id = { type = 6000 id = 1 }
		type = vassalization
		name = "Union of Kalmar"
		expirydate = { year = 1820 } #Broken by events
		participant = { DAN SWE }
	}
	alliance = {
		id = { type = 6000 id = 2 }
		type = vassalization
		name = ""
		expirydate = { year = 1597 month = may day = 24 }
		participant = { TUR WAL }
	}
	alliance = {
		id = { type = 6000 id = 3 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1600 month = june day = 0 }
		participant = { RUS RYA }
	}
	alliance = {
		id = { type = 6000 id = 4 }
		type = vassalization
		name = ""
		expirydate = { year = 1800 month = december day = 29 }
		participant = { TUR CRI }
	}
	alliance = {
		id = { type = 6000 id = 5 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { DAN SHL }
	}
	alliance = {
		id = { type = 6000 id = 6 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1520 month = december day = 29 }
		participant = { FRA SAV }
	}
	alliance = {
		id = { type = 6000 id = 7 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1530 month = december day = 29 }
		participant = { HAB HUN }
	}
	alliance = {
		id = { type = 6000 id = 8 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1699 month = june day = 0 }
		participant = { TOS GEN KNI }
	}
	alliance = {
		id = { type = 6000 id = 9 }
		type = dynasticalliance
		name = "Catherine of Aragon's Marriage"
		expirydate = { year = 1531 month = july day = 14 }
		participant = { ENG SPA }
	}
	alliance = {
		id = { type = 6000 id = 10 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1530 month = january day = 1 }
		participant = { HUN BOH }
	}
	alliance = {
		id = { type = 6000 id = 12 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1550 month = june day = 24 }
		participant = { RUS RYA }
	}
	alliance = {
		id = { type = 6000 id = 13 }
		type = dynasticalliance
		expirydate = { year = 1565 month = january day = 1 }
		participant = { SPA HAB }
	}
	alliance = {
		id = { type = 6000 id = 14 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1820 }
		participant = { HAN BRE }
	}
	alliance = {
		id = { type = 6000 id = 15 }
		type = militaryalliance
		name = "Hansebund"
		expirydate = { year = 1542 month = june day = 0 }
		participant = { MEC POM BRE }
	}
	alliance = {
		id = { type = 6000 id = 16 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1820 month = june day = 0 }
		participant = { BOH HUN }
	}
	alliance = {
		id = { type = 6000 id = 17 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1530 month = june day = 0 }
		participant = { HAB BOH }
	}
	alliance = {
		id = { type = 6000 id = 18 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1560 month = january day = 0 }
		participant = { SPA HAB }
	}
	alliance = {
		id = { type = 6000 id = 19 }
		type = vassalization
		name = ""
		expirydate = { year = 1521 month = january day = 0 }
		participant = { RUS KAZ }
	}
	alliance = {
		id = { type = 6000 id = 20 }
		type = vassalization
		name = ""
		expirydate = { year = 1526 month = january day = 0 }
		participant = { DLH GUJ }
	}
	alliance = {
		id = { type = 6000 id = 21 }
		type = vassalization
		name = ""
		expirydate = { year = 1526 month = january day = 0 }
		participant = { DLH MLW }
	}
	alliance = {
		id = { type = 6000 id = 22 }
		type = vassalization
		name = ""
		expirydate = { year = 1526 month = january day = 0 }
		participant = { DLH JAI }
	}
	alliance = {
		id = { type = 6000 id = 23 }
		type = vassalization
		name = "Polish-Lithuanian Commonwealth"
		expirydate = { year = 1821 month = january day = 0 }
		participant = { POL LIT }
	}
	alliance = {
		id = { type = 6000 id = 24 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1590 month = january day = 0 }
		participant = { POL LIT }
	}
	alliance = {
		id = { type = 6000 id = 25 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1590 month = january day = 0 }
		participant = { POL LIT }
	}
	alliance = {
		id = { type = 6000 id = 26 }
		type = dynasticalliance
		expirydate = { year = 1522 month = january day = 1 }
		participant = { DAN SWE }
	}
	alliance = {
		id = { type = 6000 id = 27 }
		type = vassalization
		name = ""
		expirydate = { year = 1821 month = january day = 0 }
		participant = { AZT ZAP }
	}
	alliance = {
		id = { type = 6000 id = 28 }
		type = vassalization
		name = ""
		expirydate = { year = 1597 month = may day = 24 }
		participant = { TUR MOL }
	}
	alliance = {
		id = { type = 6000 id = 29 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1600 month = june day = 0 }
		participant = { TUR CRI MOL WAL }
	}
	alliance = {
		id = { type = 6000 id = 30 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1600 month = june day = 0 }
		participant = { LAT LIV }
	}
	alliance = {
		id = { type = 6000 id = 31 }
		type = vassalization
		name = ""
		startdate = { year = 1511 month = january day = 0 }
		expirydate = { year = 1821 month = january day = 0 }
		participant = { RUS RYA }
	}
	alliance = {
		id = { type = 6000 id = 32 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1600 month = june day = 0 }
		participant = { DAN SHL OLD SWE }
	}
	alliance = {
		id = { type = 6000 id = 33 }
		type = vassalization
		name = ""
		expirydate = { year = 1595 month = january day = 0 }
		participant = { POR TER }
	}
	alliance = {
		id = { type = 6000 id = 34 }
		type = vassalization
		name = ""
		expirydate = { year = 1528 month = january day = 0 }
		participant = { PAP PAM }
	}
	alliance = {
		id = { type = 6000 id = 35 }
		type = vassalization
		name = ""
		expirydate = { year = 1528 month = january day = 0 }
		participant = { FRA GEN }
	}
	alliance = {
		id = { type = 6000 id = 36 }
		type = dynasticalliance
		name = ""
		expirydate = { year = 1820 }
		participant = { FRA BRI }
	}
	alliance = {
		id = { type = 6000 id = 37 }
		type = dynasticalliance
		expirydate = { year = 1555 month = january day = 1 }
		participant = { SPA POR }
	}
	alliance = {
		id = { type = 6000 id = 38 }
		type = militaryalliance
		expirydate = { year = 1555 month = january day = 1 }
		participant = { BRA MAI }
	}
	alliance = {
		id = { type = 6000 id = 39 }
		type = militaryalliance
		expirydate = { year = 1542 month = june day = 0 }
		participant = { HAN BRE }
	}
	alliance = {
		id = { type = 6000 id = 40 }
		type = vassalization
		name = ""
		expirydate = { year = 1700 month = january day = 0 }
		participant = { HAN BRE }
	}
	alliance = {
		id = { type = 6000 id = 41 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { DAN OLD }
	}
	alliance = {
		id = { type = 6000 id = 42 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { PER CAL }
	}
	alliance = {
		id = { type = 6000 id = 43 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { PAP TOS }
	}
	alliance = {
		id = { type = 6000 id = 44 }
		type = militaryalliance
		name = ""
		expirydate = { year = 1600 month = june day = 0 }
		participant = { FRA SCO BRI }
	}
	alliance = {
		id = { type = 6000 id = 45 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { HAB STR }
	}
	alliance = {
		id = { type = 6000 id = 46 }
		type = vassalization
		name = "Songhai Empire"
		expirydate = { year = 1586 month = december day = 29 }
		participant = { SON MAL }
	}
	alliance = {
		id = { type = 6000 id = 47 }
		type = vassalization
		name = "Songhai Empire"
		expirydate = { year = 1586 month = december day = 29 }
		participant = { SON HAS }
	}
	alliance = {
		id = { type = 6000 id = 48 }
		type = dynasticalliance
		expirydate = { year = 1555 month = january day = 1 }
		participant = { ORI VIJ }
	}
	alliance = {
		id = { type = 6000 id = 49 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { POR ZUL }
	}
	alliance = {
		id = { type = 6000 id = 50 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { POR KON }
	}
	alliance = {
		id = { type = 6000 id = 51 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { FRA BRI }
	}
	alliance = {
		id = { type = 6000 id = 52 }
		type = vassalization
		name = ""
		expirydate = { year = 1820 }
		participant = { FRA BEA }
	}

	war = {
		id = { type = 6000 id = 100 }
		date = { year = 1519 month = january day = 1 }
		enddate = { year = 1519 month = december day = 29 }
		attackers = {
			id = { type = 6000 id = 101 }
			type = war
			name = ""
			participant = { SPA }
		}
		defenders = {
			id = { type = 6000 id = 102 }
			type = war
			name = ""
			participant = { AZT }
		}
	}
	war = {
		id = { type = 6000 id = 109 }
		date = { year = 1515 month = january day = 1 }
		enddate = { year = 1519 month = december day = 29 }
		attackers = {
			id = { type = 6000 id = 110 }
			type = war
			name = ""
			participant = { GEL }
		}
		defenders = {
			id = { type = 6000 id = 111 }
			type = war
			name = ""
			participant = { SPA }
		}
	}
	war = {
		id = { type = 6000 id = 103 }
		date = { year = 1519 month = january day = 1 }
		enddate = { year = 1521 month = december day = 29 }
		attackers = {
			id = { type = 6000 id = 104 }
			type = war
			name = ""
			participant = { LAT LIV }
		}
		defenders = {
			id = { type = 6000 id = 105 }
			type = war
			name = ""
			participant = { POL LIT }
		}
	}
	war = {
		id = { type = 6000 id = 106 }
		date = { year = 1512 month = january day = 1 }
		enddate = { year = 1521 month = december day = 29 }
		attackers = {
			id = { type = 6000 id = 107 }
			type = war
			name = ""
			participant = { RUS }
		}
		defenders = {
			id = { type = 6000 id = 108 }
			type = war
			name = ""
			participant = { POL LIT }
		}
	}

	emperor = SPA
	flags = { 0 1 }
}

#-----------------------------------------------------------------------------------------------
#Event History

history = {
	100
	110
	3001 #Lollard Heresy
	3004 #End of Hundred Years War (England)
	3005 #The Justices of Peace
	3006 #Support Middle-class Bureaucrats
	3007 #Court of the Star Chamber
	3008 #The Enclosure Movement
	3011 #ENG: The Admiralty
	3069
	3070
	3071
	3072
	3104 #End of Hundred Years War (France)
	3106 #The State takes control of the Guilds
	3107 #League of Cambrai
	3150 #SPA: Revolt of the Mudejars
	3151
	3152
	3153 #The Trade Center of Sevilla
	3154 #The Fuggers
	3179
	3183
	3217
	3218
	3265
	3266
	3267
	3283
	3284
	3285
	3286
	3287
	3288
	3317
	3318
	3320
	3321
	3323
	3330
	3352
	3353
	3354
	3356
	3357
	3358
	3359 #TUR: The Sultan claims Cyprus suzerainty
	3360
	3367
	3368
	3370
	3401
	3402
	3445
	3446
	3467
	3468
	3469
	3535
	3536
	3545
	3546
	3555 #Aragon Inheritance of Napoli
	3556 #Viva Espana
	3557 #Civil War in Castile
	3559
	3560
	3583
	3597
	3598
	3602
	3605
	3607
	3637
	3652
	3654
	3657
	3660 #Aragon Inheritance of Napoli
	3688
	3689
	3703
	3706
	3715
	3716 #Iberian Wedding
	3750 #Fate of the Patriarchate
	3775
	3776
	3801
	3802
	3803
	3804
	3832
	3833
	3834
	3835
	3836
	3837
	3838
	3839
	3840
	3841
	3842
	3843
	3844
	3845
	3850 #Aragon inherited by Castille
	3851
	3861
	3873
	3885
	3886
	3887
	3888
	3890
	3893
	3894
	3917
	3920
	3997
	3998
	3999
	5220
	5221
	5222
	5223
	5240
	6910
	6915
	6930
	6931
	6932
	6933
	6935
	6936
	6937
	6938
	6939
	6940
	6941
	6942
	6943
	6944
	6945
	6946
	6958
	7101 #The coup of Enrique of Aragon
	7102 #The King's Constable
	7103 #The fall of Alvaro de Luna
	7104 #The divorce of prince Enrique
	7105 #The troubles of Enrique (1462-67)
	7106 #Anarchy in Castile
	7107 #The pact of Guisando
	7108 #Princess Isabel marries
	7109 #The Pact of Guisando cancelled by Enrique
	7110 #Reconciliation of Isabel and Enrique
	7111 #Reconciliation of Isabel and Enrique
	7112 #Death of Benedicto XIII
	7113 #Aragon Inheritance of Navarra
	7114 #The Will of King Alfons
	7115 #The Will of King Alfons
	7118 #The Will of King Alfons
	7119 #Civil War in Navarra
	7121
	7122
	7123
	7124
	7125
	7126 #Iberian Wedding
	7129 #Expulsion of Italian Merchants
	7130 #Revolta dels Forans
	7131 #La Busca i la Biga
	7132 #The Interlocutory Sentence
	7133 #Carles de Viana
	7134 #Juana Enríquez
	7135 #Kings, kings and still more kings
	7136 #The Treaty of Barcelona
	7137 #The Treaty of Barcelona
	7148 #Ausiàs March and the new poetry
	7153
	7157
	7159
	10000
	10001
	10002
	10003
	10004
	10034 #Further Repairs for the Great Wall
	12001
	12002
	12003
	12004
	12005
	12006
	12007
	12008
	12009
	12010
	12017
	12018
	12019
	12020
	12021
	12022
	12024 #FRA: The Orléanais inheritance of Milan
	12026 #SPA: The Question of Milan
	12031 #FRA: Concordat of Bologna
	12143 #Anti-French Coalition
	12145 #The cessation of Roussillon
	12146 #The Treaty of Barcelona
	17000
	17001
	17002
	17004
	17005
	17015
	17016
	17017
	17018
	17020 #The League of Cambrai
	17021 #The League of Cambrai
	17024
	17025 #French withdrawal from Milan
	17027 #Holy League
	17028
	17030
	17317
	17318
	17319
	17320
	17341 #The First Marquis of Mantua
	17345
	17346
	17347
	17348
	17349
	17360
	17361
	17362
	17363
	17364
	17365
	17366
	17377
	17378
	17379
	17385
	17386
	17387
	17388
	17389
	17400
	17401
	17402
	17403
	17404
	17405
	17409
	17410
	17411
	18000
	18001
	18002
	18003
	18004
	18005
	18006
	18008
	18009
	18012 #POR: Commercial Conflict in the Indian Ocean
	18026
	18027
	18028
	18031
	18032
	18033
	18034
	18037 #POR: Portuguese Settlement of Mozambique
	18038
	18039
	18040
	18041
	18043
	18044
	18045
	18046
	18048
	18050
	18052
	18054
	18056
	18058
	18060
	18100
	18101
	18103
	18104
	18105
	18106
	19000
	19001
	19002
	19004
	19005
	19006
	20049
	20050
	20300
	20301
	20302
	20307 #13 Cantons
	21103
	21104
	21105
	21106
	21107
	21108
	21109
	21110
	21111
	21112
	21113
	21817 #The Safavid Capital
	23000
	23001
	23002
	23004
	23005
	23006
	23007
	23009
	23012
	23013
	23014
	23015
	23016
	23017
	23020
	24005 #Columbus
	24006 #Columbus
	24007 #Vespucci
	24032
	24033
	24034
	24035
	24036
	24037
	24038
	24039
	24040
	24041
	24042
	24043
	24044
	24045
	24046
	24047
	24048
	24049
	24050
	24051
	28009
	28010
	28011
	28012
	29002 #PFA: Fortification of Heidelberg
	30103
	30316
	30317
	30318
	30319
	30320
	30321
	30322
	30323
	30326
	30331
	30332
	30333
	30334
	30335
	30337
	30341 #Krishna Deva Raya policies
	30343
	30346
	30347
	30348
	30349
	40000
	40001
	40003
	40004
	40005
	40006
	40007
	40008
	40010
	40011
	40012
	40013
	40014
	40015
	40017
	40018
	40019
	40026 #RUS: The Terror of the Oprichnina
	40043
	40044
	40045
	40056
	40057
	40058
	40059
	40061
	40062
	40063
	40068
	40069
	40070
	40071
	40079
	40080
	40081
	40082
	40083
	40084
	40085
	40087
	40088
	40089
	40091
	40092
	40093
	40094
	40095
	40096
	40097
	40200
	40201
	40202
	40203
	40204
	40205
	40206
	40207
	40208
	40209
	40211
	40213
	40216
	40217
	50000
	50004
	50009
	50010
	50011
	50012
	50013
	50014
	50015
	50016
	50018
	50024
	50025
	51023
	51025
	51026
	51027
	51028
	60000
	60001
	60002
	60003 #MLC: The Portuguese covet Malacca -I-
	60007
	60008
	60009
	60010
	60011
	60012
	60013
	62000
	62001
	62004
	62005
	62006
	62009
	65003
	65004
	65005
	65006
	65007
	65008
	65015 #Settlement of Kazakhs
	65023 #Bukhara-Khivan tensions
	65030
	65031
	65051 #Death of Yaqub
	65052 #Shia Takeover
	65113
	65114
	65118
	65124
	65125
	65126
	65127
	65128
	65136
	65140
	65141
	65146
	65151
	65152
	71010
	71011
	71012
	71013
	75000
	75002
	75003
	75004
	75010
	82009 #AZT: Plague in the Aztec Empire
	82010 #ZAP: Plague among the Zapotecs
	80701 #Conversion of Palembang
	80702 #Banjar converts to Islam
	80710 #Founding of The Sultanate
	81007 #INC: the Great Plague
	82000 #AZT: The Tlaxcalan Revolt
	82001
	82021 #AZT: Plagues from the Old World
	88002
	88003
	88004
	88012
	88020
	101004 #ADE: The Portuguese Covet Aden
	113000 #ARM: Dominance of Portugal
	123000 #BAL: Independence of Baluchistan
	125011 #BAY: Aventinus
	127001 #2nd Portuguese offer of Christianity
	133002 #BRE: The Brunswick-Lüneburg archbishops
	137016 #BUR: Charles' residence and insignia
	140002 #The Revival of the Khmer Empire
	140004 #Khmer Internal Development and Consolidation
	140005 #The Splendor of Angkor
	140006 #Foreign Envoys Visit Angkor
	142013 #CAS: Isabel and Fernando Kings of Aragon
	147004 #CHI: Failure to pacify An Nam
	152060 #CRI: Crimean Khanate seeks Ottoman support
	159028 #Trial of Trolle
	160000 #DEL: Attack on the Harbor
	166003 #The Moriscos Request Aid
	170114 #FRA: Josquin Desprez
	170201 #FRA: The Treaty of Le Verger
	170210 #FRA: The Marriage of Anne and Louis XII
	170268 #FRA: Witch-hunting in France
	171007 #FRI: Change of Language
	173006 #GEL: Recognizing Douwama
	179004 #Austrian purchase of Wirtemberg
	179026 #HAB: The Imperial Election
	179085 #HAB: The Habsburg inheritance
	179090 #HAB: The claim to Styria
	179091 #HAB: The claim to Tyrol and Vorlande
	179141 #HAB: Ostmarch and Habsburgs Hereditary Lands
	184031 #HEL: Witch-hunting in Switzerland
	203000 #KON: Diogo Cao arrives in Kongo
	203002 #KON: Missionaries and craftsmen from Portugal
	203003 #KON: Missionaries and craftsmen from Portugal
	203004 #KON: Afonso I converts Kongo to Christianity
	203005 #KON: Pope Leo X consecrates Henrique Bishop of Utica
	210021 #LIT: Lost claims on Jedisan
	210022 #LIT: Lost claims on Donetsk
	219001 #MAM: Fall of the Mamluk Empire -I-
	227003 #MLC: The Portuguese covet Malacca -II-
	228030 #MLO: The allegiance to the Emperor
	232010 #MOR: The Wattasids
	232011 #MOR: Moriscos request aid
	232042 #MOR: Disturbing reports from the south
	234000 #End of majapahit era
	234228 #Demak attacks Portuguese in Malacca
	242028 #NIP: Ashikaga Yoshitane is driven from the throne
	249024 #ORI: The River of God
	251024 #PAP: Leo Africanus
	252011 #PAM: The Sound of Music
	252013 #PAM: Duke Alfonso's Artillery
	252014 #PAM: Orlando Furioso
	254010 #PER: Khiva and Shiite Governors
	254018 #PER: Shiite Immigrants
	254025 #PER: Annexation of Khorasan
	258037 #POL: Piotr Tomicki the Royal Chancellor
	260007 #POR: Diogo Cao returns to Portugal with some Kongolese
	260024 #POR: Sugar in São Thomé
	260032 #POR: The Portuguese recieve Kongo as vassal
	260046 #POR: Sultan has defied our demands
	260047 #POR: Sultan has bowed to our demands
	260048 #POR: Settlement of El Mina
	260049 #POR: Sultan has defied our demands
	260051 #POR: Discovery of the Straits of Malacca
	260052 #POR: Discovery of the Straits of Obock
	260055 #POR: Al-Kharam is Ours
	260060 #POR: The lands of Zanj
	260062 #POR: Sultan agrees to our demands
	260034 #POR: Bombardment of Calicut
	260065 #POR: Hostile Reception in Mombasa
	260066 #POR: Discovery of Malindi
	260067 #POR: Vassalization of Malindi
	260068 #POR: Discovery of Mogadishu
	260106 #POR: Portugal abandons Kilwa
	260107 #POR: The Island of Zanzibar
	260108 #POR: Attack on Zanzibar
	260115 #POR: Angoche has resisted our efforts to monopolize trade
	260116 #POR: Mombasa is a threat to our hegemony in East Africa
	260133 #POR: A new flag for Portugal
	260164 #POR: Assistance for Kongo
	260165 #POR: Generous assistance for Kongo
	260166 #POR: Kongo and Christianity
	271031 #RUS: Khanates raids Russian lands
	271044 #RUS: Russian Settlement in Vladimir
	273001 #SAC: The Electorate and Thuringia are given to Ernst
	275033 #SAV: Witch-hunting in Savoy
	284016 #SON: The Mossi are Dispersed
	284020 #SON: The Askia Dynasty
	284021 #SON: The Hajj
	284022 #SON: Caliph of the Sahara
	284023 #SON: The Western Territories
	284024 #SON: The Royal Tomb
	284025 #SON: Jihad
	284026 #SON: The Fall of Kano
	284027 #SON: The Greatest Empire in the Sahel
	284028 #SON: Timbuktu's Cultural Revival
	284029 #SON: Askia Mohammad's Reforms
	284030 #SON: The Obligations of Princes
	285012 #SPA: Royal Astronomical Commission
	285045 #SPA: The encomiendas
	285065 #SPA: Magellan's Expedition
	285078 #SPA: Colonization of Barahona
	285079 #SPA: Colonization of Havana
	285105 #SPA: The Trastamara inheritance of Naples
	285080 #SPA: A difficult life in the Isthmus
	285100 #SPA: The Burgundian inheritance
	285126 #SPA: The Columbian exchange
	285154 #SPA: Cortes disembarks in Cempoala and burns his ships
	285155 #SPA: Tlaxcala goes over to Spain
	285205 #SPA: The Burgundian court
	285219 #SPA: Forced conversion of the Mudejars
	285221 #SPA: The Imperial Election
	285259 #SPA: The Habsburg inheritance
	285288 #SPA: Colonization of Tortuga
	285289 #SPA: Colonization of Moron
	285290 #SPA: Colonization of Guantanamo
	285313 #SPA: Settlement of Puerto Rico
	288006 #STR: The Humanism at the apogee of Strasburg
	289000 #NUB: The fall of Alodia
	289003 #NUB: Mameluke refugees
	291016 #SWE: Uppsala University
	291038 #SWE: Migration from Karelia
	300000 #TUN: The Moriscos request aid
	301000 #TUR: Recognition of the Moriscos
	301004 #TUR: The Conquests of Selim I The Grim
	301006 #TUR: The Conquests of Selim II The Sot
	301030 #TUR: The Sultan becomes 'Khalifa'
	301049 #TUR: Turkish dominance on the Black Sea
	301062 #TUR: Ottoman Rule solidified
	301086 #TUR: Fall of the Mamluk Empire
	322003 #TYR: The silver mines of Schwaz
	325000 #UZB: Formation of Khiva Khanate
	325001 #UZB: Khiva and The Western Provinces
	325005 #UZB: Uzbek peoples
	325014 #UZB: Conquest of Samarkand
	325020 #UZB: Annexation of Khorasan
	326026 #VEN: Mantua threatens the balance
	326031 #VEN: Dominican Inquisition
	326058 #VEN: The Water Supervisors
	329022 #WAL: Neagoe Basarab's works
	332013 #XHO: Refugees from Granada
	333000 #KIE: Portuguese demand submission
	334000 #ZAP: Smallpox
	335003 #ZIM: Zimbabwe's Decline
	335004 #ZIM: The Mwenemutapa Empire
	336000 #ZUL: Portuguese Explorers in East Africa
	337558 #Mines: Lanzhou (1558)
	337559 #
	337560 #
	337561 #
	337562 #Mines: Yunnan (1553)
	337563 #
	337564 #
	337565 #
	337571 #Mines: Sachsen (331)
	337572 #
	337573 #
	337576 #Mines: Tirol (371)
	337577 #
	337579 #Mines: Bohemia (328)
	337580 #
	337581 #
	337583 #Mines: Sudeten (330)
	337800 #Rise of Kenya and decline of Kilwa - 766 #Rufiji
	338003 #Absorption of Ghazi states
	338004 #Absorption of Ghazi states
	338081 #Joanot Martorell and the Tirant lo Blanc
	338075 #Hispaniola Goldmine Sequence
	338192 #
	338215 #
	338216 #
	338100 #Rajput cultural uprising - 543 #Delhi
	338102 #Rajput cultural uprising - 546 #Malwa
	338104 #Rajput cultural uprising - 1521 #Panjab
	338195 #Recovery of Danzig - 301 #Danzig
	338219 #Puerto Rico Goldmine Sequence
	338220 #
	338223 #Moron Goldminse Sequence
	338246 #Shiite Emigration - 472 #Armenia
	338247 #Shiite Emigration - 471 #Daghestan
	338248 #Shiite Emigration - 533 #Isfahan
	338249 #Shiite Emigration - 489 #Iraq
	338250 #Shiite Emigration - 485 #Aleppo
	338251 #Shiite Emigration - 490 #Syria
	338252 #Shiite Emigration - 508 #Basrah
	338253 #Shiite Emigration - 475 #Trabzon
	338254 #Shiite Emigration - 483 #Adana
	338255 #Shiite Emigration - 474 #Sivas
	338266 #The European Rule - 29 #Tlaxcala
	338277 #The Portuguese Have Conquered Al-Kharam - 504 #Al-Kharam
	338289 #Portuguese Settlement of Mozambique - 768 #Mtawa
	338437 #Portuguese fortifications - 823 #The Azores
	338438 #Portuguese fortifications - 800 #Senegal
	338439 #Portuguese fortifications - 818 #Cape Verde
	338440 #Portuguese fortifications - 816 #Fernando Po
	338446 #Serbian Zeta - 362 #Ragusa
	338447 #Northern Albania - 362 #Ragusa
	338448 #Albania Veneta - 362 #Ragusa
	338451 #German dominance in Odenburg - 352 #Odenburg
	338496 #Swiss expansion - 405 #Savoie
	355003 #COI: Appeal to Portugal
	364001 #FAT: The Treachery of Cochin
	364002 #FAT: Anti-Portuguese Feelings
	364003 #FAT: Commercial Treaty with Portugal
	437000 #PAK: Independence of Perak
	600262 #AI change: UZB_1496_Samarkand.ai
	170298 #FRA: The End of the Hundred Years War
}

sleepevent = {
	137016 #BUR: Charles' residence and insignia
	147001 #CHI: "Le Loi" Sequence
	147002
	147003
	147009
	147010
	147011
	147012
	147013
	147014
	147015
	147016
	147017
	147018
	147019
	147020
	227003 #MLC: The Portuguese covet Malacca -II-
	260047 #POR: Sultan has bowed to our demands
	260165 #POR: Generous assistance for Kongo
	338446 #Serbian Zeta - 362 #Ragusa
	338448 #Albania Veneta - 362 #Ragusa
	600262 #AI change: UZB_1496_Samarkand.ai
}

#-----------------------------------------------------------------------------------------------
