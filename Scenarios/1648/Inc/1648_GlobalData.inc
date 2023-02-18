#AGCEEP - 1648 Scenario

#-----------------------------------------------------------------------------------------------
#Global Data

globaldata = {
	startdate = { day = 0 month = january year = 1648 }
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
		discovery = { area = "Grand Lacs" value = yes }
		discovery = { area = "Quebec" value = yes }
		discovery = { area = "Amazonia" value = yes }
		discovery = { area = "Manchuria" value = no }
		discovery = { area = "Kamchatka" value = no }
		discovery = { area = "HudsonBayArea" value = yes }
		discovery = { area = "CapeHornArea" value = yes }
		discovery = { area = "GoodHopeArea" value = yes }
	}
	establishments = {
		establishment = { continent = "Africa" value = yes }
		establishment = { continent = "America" value = yes }
		establishment = { continent = "Oceania" value = no }
		establishment = { region = "China" value = no }
		establishment = { region = "India" value = yes }
		establishment = { region = "Japan" value = no }
		establishment = { region = "Siberia" value = yes }
	}

	war = {
		id = { type = 9430 id = 1 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 29 }
		attackerscore = { HOL = { POR = 5 } }
		attackers = {
			id = { type = 9430 id = 2 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { HOL LNK }
		}
		defenders = {
			id = { type = 9430 id = 3 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { POR }
		}
	}
	war = {
		id = { type = 9430 id = 4 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 29 }
		defenderscore = { OMA = { POR = 25 } }
		attackers = {
			id = { type = 9430 id = 5 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { POR }
		}
		defenders = {
			id = { type = 9430 id = 6 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { OMA }
		}
	}
	war = {
		id = { type = 9430 id = 7 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 29 }
		attackers = {
			id = { type = 9430 id = 8 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { FRA POR }
		}
		defenders = {
			id = { type = 9430 id = 9 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { SPA }
		}
	}
	war = {
		id = { type = 9430 id = 13 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 29 }
		attackerscore = { ENG = { EIR = 25 } }
		attackers = {
			id = { type = 9430 id = 14 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { ENG }
		}
		defenders = {
			id = { type = 9430 id = 15 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { EIR SCO }
		}
	}
	war = {
		id = { type = 9430 id = 16 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 29 }
		attackerscore = { TUR = { VEN = 12 } }
		attackers = {
			id = { type = 9430 id = 17 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { TUR }
		}
		defenders = {
			id = { type = 9430 id = 18 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { VEN }
		}
	}
	war = {
		id = { type = 9430 id = 19 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 30 }
		attackers = {
			id = { type = 9430 id = 20 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { CHI }
		}
		defenders = {
			id = { type = 9430 id = 21 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { SMI }
		}
	}
	war = {
		id = { type = 9430 id = 22 }
		date = { year = 1635 month = august day = 11 }
		enddate = { year = 1647 month = december day = 29 }
		attackers = {
			id = { type = 9430 id = 23 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { ANN }
		}
		defenders = {
			id = { type = 9430 id = 24 }
			type = war
			expirydate = { year = 0 month = january day = 0 }
			participant = { DAI }
		}
	}

	alliance = {
		id = { type = 6000 id = 1 }
		type = vassalization
		name = "Dutch Alliance with Johor"
		expirydate = { year = 1820 }
		participant = { HOL MLC }
	}
	alliance = {
		id = { type = 6000 id = 2 }
		type = vassalization
		name = "Dutch Dominance in the Bandas"
		expirydate = { year = 1820 }
		participant = { HOL TER }
	}
	alliance = {
		id = { type = 6000 id = 3 }
		type = vassalization
		name = "The Bavarian Archbishops of Cologne"
		expirydate = { year = 1820 }
		participant = { BAY KOL }
	}
	alliance = {
		id = { type = 6000 id = 4 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { BAY BRG }
	}
	alliance = {
		id = { type = 6000 id = 5 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { DAN SHL }
	}
	alliance = {
		id = { type = 6000 id = 6 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { MOG GOL }
	}
	alliance = {
		id = { type = 6000 id = 7 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { MOG RAJ }
	}
	alliance = {
		id = { type = 6000 id = 8 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { SPA HAB }
	}
	alliance = {
		id = { type = 6000 id = 10 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { POR MLI }
	}
	alliance = {
		id = { type = 6000 id = 11 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { POR KIL }
	}
	alliance = {
		id = { type = 6000 id = 13 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { FRA STR }
	}
	alliance = {
		id = { type = 6000 id = 14 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { POL KUR }
	}
	alliance = {
		id = { type = 6000 id = 15 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { MOG BGL }
	}
	alliance = {
		id = { type = 6000 id = 16 }
		type = dynasticalliance
		expirydate = { year = 1820 }
		participant = { FRA LOR }
	}
	alliance = {
		id = { type = 6000 id = 17 }
		type = dynasticalliance
		expirydate = { day = 1 month = january year = 1657 }
		participant = { POL BRA }
	}
	alliance = {
		id = { type = 6000 id = 18 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { TUR WAL }
	}
	alliance = {
		id = { type = 6000 id = 19 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { TUR MOL }
	}
	alliance = {
		id = { type = 6000 id = 20 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { TUR CRI }
	}
	alliance = {
		id = { type = 6000 id = 21 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { TUR TRA }
	}
	alliance = {
		id = { type = 6000 id = 22 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { PER BAL }
	}
	alliance = {
		id = { type = 6000 id = 23 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { PER GEO }
	}
	alliance = {
		id = { type = 6000 id = 24 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { POL PRU }
	}
	alliance = {
		id = { type = 6000 id = 25 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { BRA PRU }
	}
	alliance = {
		id = { type = 6000 id = 26 }
		type = dynasticalliance
		expirydate = { day = 29 month = january year = 1649 }
		participant = { ENG FRA }
	}
	alliance = {
		id = { type = 6000 id = 27 }
		type = vassalization
		expirydate = { year = 1820 }
		participant = { POR ZAN }
	}
	alliance = {
		id = { type = 9423 id = 1 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { BAY KOL BRG }
	}
	alliance = {
		id = { type = 9423 id = 2 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { MOG RAJ GOL BGL }
	}
	alliance = {
		id = { type = 9423 id = 3 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { DAN SHL OLD }
	}
	alliance = {
		id = { type = 9423 id = 4 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { FRA POR STR }
	}
	alliance = {
		id = { type = 9423 id = 5 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { EIR SCO }
	}
	alliance = {
		id = { type = 9423 id = 6 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { TUR TRA }
	}
	alliance = {
		id = { type = 9423 id = 7 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { BRA PRU }
	}
	alliance = {
		id = { type = 9423 id = 8 }
		type = militaryalliance
		expirydate = { year = 1820 }
		participant = { HOL LNK }
	}

	emperor = HAB
	flags = { 0 1 2 3 }
}

#-----------------------------------------------------------------------------------------------
#Event History

history = {
	100
	101
	102
	110
	115
	1507
	3001 #Lollard Heresy
	3004 #End of Hundred Years War (England)
	3005 #The Justices of Peace
	3006 #Support Middle-class Bureaucrats
	3007 #Court of the Star Chamber
	3008 #The Enclosure Movement
	3009
	3011
	3012
	3015
	3016
	3017
	3019
	3020
	3021
	3022
	3023
	3024
	3025 #ENG: The English Civil War
	3069
	3070
	3071
	3072
	3073
	3076
	3077
	3078
	3104 #End of Hundred Years War (France)
	3106 #The State takes control of the Guilds
	3107 #League of Cambrai
	3115
	3150 #Torquemada
	3151
	3152
	3153 #The Trade Center of Sevilla
	3154 #The Fuggers
	3157
	3158
	3160 #SPA: The Purge of the Morisques
	3162
	3163
	3164
	3167
	3178
	3179
	3181
	3183
	3189
	3192
	3193
	3196 #HAB: The Edict of Restitution
	3217
	3218
	3220
	3221
	3223
	3227
	3228
	3231
	3265
	3266
	3267
	3269
	3271 #POR: Governor Martim Afonso de Sousa in Brazil
	3272
	3274
	3283
	3284
	3285
	3286
	3287
	3288
	3293
	3294
	3295
	3296
	3298
	3317
	3318
	3320
	3321
	3323
	3330
	3331
	3343
	3346
	3352
	3353
	3354
	3356
	3357
	3358
	3359 #TUR: The Sultan claims Cyprus suzerainty
	3360
	3361
	3362
	3366
	3367
	3368
	3370
	3374
	3375
	3376
	3377
	3379
	3383
	3386
	3401
	3402
	3407
	3410
	3414
	3415
	3416
	3445
	3446
	3467
	3468
	3469
	3473
	3477
	3479
	3502
	3503 #HOL: Vereenigde Oostindische Compagnie
	3505
	3506 #HOL: Veerinigte Westindische Compagnie
	3507
	3518
	3535
	3536
	3537
	3540
	3541
	3542
	3545
	3546
	3547
	3548
	3549
	3550
	3551
	3553
	3555 #Aragon Inheritance of Napoli
	3556 #Viva Espana
	3557 #Civil War in Castile
	3559
	3560
	3565
	3567 #PER: Political Turmoil
	3574
	3583
	3597
	3598
	3602
	3605
	3607
	3637
	3638
	3650
	3652
	3654
	3657
	3660 #Aragon Inheritance of Napoli
	3675
	3688
	3689
	3703
	3704
	3705
	3706
	3711
	3715
	3716 #Iberian Wedding
	3748
	3750 #Fate of the Patriarchate
	3771 #ENG: King Charles and the New Monarchy // also slept
	3775
	3776
	3801
	3802
	3803
	3804
	3805
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
	3852
	3853
	3855
	3861
	3873
	3876 #ENG: Welsh Act of Union
	3880 #NIP: Policy of Sakoku implemented
	3882
	3885
	3886
	3887
	3888
	3890
	3891
	3893
	3894
	3896
	3899
	3900
	3902
	3917
	3920
	3997
	3998
	3999
	5008
	5220
	5221
	5222
	5223
	5224
	5225
	5226
	5227
	5228
	5229
	5240
	6900
	6901
	6910
	6911
	6915
	6916 #NIP: Red seal ships trade
	6924 #NIP: Ikko-ikki
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
	8073
	10000
	10001
	10002
	10003
	10004
	10005
	10006
	10007
	10008
	10009
	10010
	10011
	10012
	10013
	10014
	10025
	10034
	10043 #CHI: The Manchu Takeover of China
	10047
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
	12024 #French Invasion of Milan
	12026 #SPA: The Question of Milan
	12027
	12028
	12032
	12033
	12034
	12035
	12036
	12037
	12053
	12054
	12057
	12059
	12060
	12061
	12062
	12065
	12143 #Anti-French Coalition
	12145 #The cessation of Roussillon
	12146 #The Treaty of Barcelona
	12148
	17000
	17001
	17002
	17004
	17005
	17006
	17007
	17008
	17009
	17010
	17011
	17015
	17016
	17017
	17018
	17020 #The League of Cambrai
	17021 #The League of Cambrai
	17023
	17024
	17025 #French withdrawal from Milan
	17027 #Holy League
	17028
	17030
	17317
	17318
	17319
	17320
	17321
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
	17367
	17374
	17376
	17377
	17378
	17379
	17381
	17382
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
	17415
	17416
	17417
	17437
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
	18013
	18015
	18016
	18018
	18019
	18020
	18026
	18027
	18028
	18031
	18032
	18033
	18034
	18036
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
	18062
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
	19008
	20004 #Victory in 100 Year War
	20049
	20135 #POL: The Act of Union-'Rzeczpospolita Polska'
	20050
	20114
	20300
	20301
	20302
	20308
	20426
	20427
	20428
	20429
	20430
	20431
	20432
	21000
	21001
	21030
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
	21650
	21651
	21652
	21655
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
	24016
	24017
	24018
	24019
	24020
	24021
	24022
	24031
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
	24052
	24060 #ETH: Rise of Gonder
	28009
	28010
	28011
	28012
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
	30343
	30344
	30345
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
	40020
	40021
	40022
	40023
	40024
	40025
	40026 #RUS: The Terror of the Oprichnina
	40027
	40028
	40029
	40030
	40043
	40044
	40045
	40050
	40051
	40052
	40053
	40054
	40056
	40057
	40058
	40059
	40061
	40062
	40063
	40067
	40068
	40069
	40070
	40071
	40073
	40074
	40079
	40080
	40081
	40082
	40083
	40084
	40085
	40086
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
	40098
	40099
	40100
	40103
	40104
	40105
	40107
	40108
	40109
	40110
	40111
	40112
	40113
	40114
	40115
	40118
	40119
	40124
	40126
	40128
	40129
	40130
	40131
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
	50008
	50009
	50010
	50011
	50012
	50013
	50014
	50015
	50016
	50017
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
	60006
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
	65009
	65010
	65011
	65012
	65013
	65014
	65015 #Settlement of Kazakhs
	65016
	65017
	65023
	65030
	65031
	65051 #Death of Yaqub
	65052 #Shia Takeover
	65108
	65112
	65113
	65114
	65115
	65117
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
	80701
	80712
	81007 #INC: the Great Plague
	82000 #AZT: The Tlaxcalan Revolt
	82001
	82021 #AZT: Plagues from the Old World
	88002
	88003
	88004
	88012
	88016
	88020
	101004 #ADE: The Portuguese Covet Aden
	106000
	106001
	106003
	106004
	115030 #Effect of Russian Occupation in Eastern Siberia (AI only)
	115031
	115032
	115033
	115034
	115035
	115036
	115037
	115038
	115039
	115040
	115041
	115042 #End of Effect of Russian Occupation in Eastern Siberia (AI only)
	115043 #Borders of Mongolia - 588 #Ob
	115044 #Borders of Mongolia - 589 #Tomsk
	120002
	120003
	120009
	120010
	120011
	120012
	123000 #BAL: Independence of Baluchistan
	125011 #BAY: Aventinus
	125013
	125015
	125016
	125017
	125018
	127001
	132018
	132081
	132082
	132101
	132203
	136011
	140002
	140004
	140005
	140006
	147010
	147011
	147012
	147013
	147014
	147015
	147142 #CHI: A new hair style
	152060 #CRI: Crimean Khanate seeks Ottoman support
	157004
	157005
	159028 #DAN: Trial of Trolle
	159038 #DAN: Fate of the Kalmar Union
	159042 #DAN: The northern lion rears its ugly head
	164098 #ENG: The Indian Scam
	164600 #ENG: An Opportunity in India
	164136 #ENG: Formation of North Carolina
	165016 #ETH: War of extermination
	170016
	170038 #FRA: Bourbon White Flag
	170114 #FRA: Josquin Desprez
	170146 #FRA: The first French real colony
	170203 #FRA: Great Lakes calling
	170269 #FRA: Witch-hunting in France
	171008 #FRI: Province Language status
	179000 #HAB: The Uskok resettlement
	179004 #HAB: Austrian purchase of Wirtemberg
	179023 #HAB: Vienna
	179026 #HAB: The Imperial Election
	179085 #HAB: The Habsburg inheritance
	179090 #HAB: The claim to Styria
	179091 #HAB: The claim to Tyrol and Vorlande
	179139 #HAB: Finally they put their trust and support into our hands
	179141 #HAB: Ostmarch and Habsburgs Hereditary Lands
	184032 #HEL: Witch-hunting in Switzerland
	186000
	186003
	186005
	186009
	186010
	186011
	186012
	186015
	186066 #HOL: Discovery of New Netherland
	186067 #HOL: Formation of New Netherland
	186072 #HOL: Profit from the East
	186074 #HOL: Fort Zeelandia
	186078 #HOL: Encourage immigration from China
	186088 #HOL: Settlement of Curaçao
	186320
	186405
	186411
	194002
	194003
	194005
	194007
	194008
	203004 #KON: Afonso I converts Kongo to Christianity
	203005 #KON: Pope Leo X consecrates Henrique Bishop of Utica
	206010 #KUR: The Mercantile Reforms of Duke Jacob Kettler
	219001 #MAM: Fall of the Mamluk Empire -I-
	220013 #MAN: The Economic Crisis
	227003 #MLC: The Portuguese covet Malacca -II-
	228030 #MLO: The allegiance to the Emperor
	230001 #MOG: Akbar's Religious Conversion
	230002 #MOG: Return to Islam
	230028 #MOG: Shahi Qila Citadel
	230033 #MOG: The Builder King
	232000
	232009
	232010 #MOR: The Wattasids
	232011 #MOR: Moriscos request aid
	232036
	232037
	232038
	234000 #End of majapahit era
	239004
	242028 #NIP: Ashikaga Yoshitane is driven from the throne
	248002 #OMA: Theft of Portuguese ships
	248004 #OMA: Covert Aid From the West
	248008
	249024 #ORI: The River of God
	251011
	251016
	251024 #PAP: Leo Africanus
	251071 #PAP: The acquisition of Ferrara
	252011 #MOD: The Sound of Music
	252013 #MOD: Duke Alfonso's Artillery
	252014 #MOD: Orlando Furioso
	252017 #MOD: The Economic Crisis
	254018 #PER: Shiite Immigrants
	254022 #PER: Attack on Hormouz
	254010 #PER: Khiva and Shiite Governors
	257008 #SIE: The Economic Crisis
	258006 #POL: Kazimierz Siemionowicz
	258007 #POL: Johannes Hevelius
	258010 #POL: Sarmatism
	258028 #POL: Vladislavian army reforms
	258029 #POL: Lithuanian leaders pledge allegiance to the Commonwealth
	258037 #POL: Piotr Tomicki the Royal Chancellor
	258234 #POL: The Fate of Prussia
	260007 #POR: Diogo Cao returns to Portugal with some Kongolese
	260021 #POR: Decline of the Portuguese military
	260024 #POR: Sugar in São Thomé
	260025 #POR: Decline of São Tomé
	260032 #POR: The Portuguese recieve Kongo as vassal
	260034 #POR: Bombardment of Calicut
	260048 #POR: Settlement of El Mina
	260049 #POR: Sultan has defied our demands
	260051 #POR: Discovery of the Straits of Malacca
	260052 #POR: Discovery of the Straits of Obock
	260055 #POR: Al-Kharam is Ours
	260060 #POR: The lands of Zanj
	260062 #POR: Sultan agrees to our demands
	260070 #POR: Portuguese Settlement at Quelimane
	260074 #POR: Fortification of Mozambique
	260077
	260078
	260079
	260080
	260081
	260083
	260084
	260086
	260090 #POR: Portugal asserts its rights over Brazil
	260099 #POR: A foothold in India -I-
	260100 #POR: A foothold in India -II-
	260105 #POR: Portuguese settlement of Angola
	260106 #POR: Portugal abandons Kilwa
	260107 #POR: The Island of Zanzibar
	260108 #POR: Attack on Zanzibar
	260114 #POR: João IV organizes the militia
	260115 #POR: Angoche has resisted our efforts to monopolize trade
	260116 #POR: Mombasa is a threat to our hegemony in East Africa
	260133 #POR: A new flag for Portugal
	260147 #POR: Enlightment of João IV
	260161 #POR: War of Acclamation -I-
	260961
	260962
	260963
	260965
	271004 #RUS: Effect of Russian Occupation in Saratow
	271005 #RUS: Effect of Russian Occupation in Bogutjar
	271011 #RUS: Russian claims on Eastern Siberia
	271014 #RUS: Annexation of Khanate of Sibir
	271030 #RUS: Russia claims the mantle of the Khans
	271031 #RUS: Khanates raids Russian lands
	271040 #RUS: Russian settlement in Ufa
	271041 #RUS: Russian settlement in Samara
	271042 #RUS: Russian settlement in Volgograd
	271044 #RUS: Russian Settlement in Vladimir
	271045 #RUS: Russian Settlement in Vladimir
	271046 #RUS: Russian Rule in Olonets
	271048 #RUS: Russian Settlement in Arkhangelsk
	271049 #RUS: Russian Settlement in Arkhangelsk
	271050 #RUS: Russian Rule in Karelia
	271052 #RUS: Russian Rule in Kexholm
	271055 #RUS: Russian Rule in Kola
	271546 #RUS: Private initiative in Russian colonization 1647-1649
	273001 #SAC: The electorate and Thuringia are given to Ernst
	275021 #SAV: The Economic Crisis
	275034 #SAV: Witch-hunting in Savoy
	276006 #SCO: The National Covenant
	276007 #SCO: The Engagement
	276011 #SCO: The Saltire
	282011 #TRA: Transylvanian Resurgence
	284019
	284020
	284021
	284022
	284023
	284024
	284025
	284026
	284027
	284028
	284029
	284030
	284031
	284036
	284037
	284038
	284041
	284042
	284043
	284044
	284045
	284046
	284047
	284048
	285002
	285011
	285012 #SPA: Royal Astronomical Commission
	285045 #SPA: The encomiendas
	285049 #SPA: The Manila galleon
	285065 #SPA: Magellan's Expedition
	285100 #SPA: The Burgundian inheritance
	285142 #SPA: Banishment to Oran
	285154 #SPA: Cortes disembarks in Cempoala and burns his ships
	285155 #SPA: Tlaxcala goes over to Spain
	285159 #SPA: Pizarro founds Lima
	285180 #SPA: Jesuits in Paraguay
	285181 #SPA: Bandeirantes
	285199 #SPA: The quina and the quinine
	285205 #SPA: The Burgundian court
	285221 #SPA: The Imperial Election
	285224 #SPA: The Union of Arms
	285249 #SPA: Santo Domingo Fortified
	285259 #SPA: The Habsburg inheritance
	285298 #SPA: End of 1640 rebellion in Catalonia
	285313 #SPA: Settlement of Puerto Rico
	285314 #SPA: Settlement of Jamaica
	285315 #SPA: Gobernación del Río de la Plata
	285317 #SPA: Settlement of Florida
	285321 #SPA: Settlement of Mosquitos
	285322 #SPA: Settlement of Costa Rica
	285323 #SPA: Settlement of Yaraguay
	285324 #SPA: Settlement of Campeche
	285325 #SPA: Settlement of Yucatan
	285326 #SPA: Settlement of Honduras
	285327 #SPA: Settlement of Cartagena
	285328 #SPA: Settlement of Tocuvo
	285329 #SPA: Settlement of Maracaibo
	285330 #SPA: Settlement of Guatemala
	285331 #SPA: Settlement of Tehuacan
	285332 #SPA: Settlement of Caribe
	285744 #SPA: Capitulaciones and private enterprises for colonization
	285961 #SPA: Maluku belongs to Portugal
	288006 #STR: The Humanism at the apogee of Strassburg
	289000 #NUB: The fall of Alodia
	289002 #NUB: Gum Arabic
	289003 #NUB: Mameluke refugees
	291016 #SWE: Uppsala University
	291038 #SWE: Migration from Karelia
	291039 #SWE: Swedish migration in Österbotten
	291043 #SWE: Swedish Conquest of Kexholm
	297001
	297017
	297024 #TOS: The Economic Crisis
	300000 #TUN: The Moriscos request aid
	300014 #TUN: The End of the Hafsid Dynasty
	301000 #TUR: Recognition of the Moriscos
	301004 #TUR: The Conquests of Selim I The Grim
	301006 #TUR: The Conquests of Selim II The Sot
	301030 #TUR: The Sultan becomes 'Khalifa'
	301035 #TUR: The geographer
	301049 #TUR: Turkish dominance on the Black Sea
	301062 #TUR: Ottoman Rule solidified
	301086 #TUR: Fall of the Mamluk Empire
	301099 #TUR: Protectorate in Al-Haasa
	301102 #TUR: Expedition to the Yemen
	301107 #TUR: Price revolution crisis
	301109 #TUR: Agricultural crisis and famine
	301128 #TUR: We have failed to retain our easternmost outposts
	301136 #TUR: Ottoman claim on Massawa
	301137 #TUR: Ottoman claim on Aden
	301138 #TUR: Ottoman claim on Yemen
	310001
	317016 #SMI: We have no choice but to rely on foreign trade
	321000
	321001
	321002
	321003
	322003 #TYR: The silver mines of Schwaz
	325000 #UZB: Formation of Khiva Khanate
	325001 #UZB: Khiva and The Western Provinces
	325002
	325003
	325005 #UZB: Uzbek peoples
	325006
	325007
	325009
	325010
	325011
	325012
	325014 #UZB: Conquest of Samarkand
	326010
	326012
	326014
	326026 #VEN: Mantua threatens the balance
	326031 #VEN: Dominican Inquisition
	326046 #VEN: Schiavona
	326047 #VEN: The Economic Crisis
	326055 #VEN: The opening of the Ridotto
	326074 #VEN: New Manpower
	326078 #VEN: Venetian Guilds
	331010
	331017
	331020
	331021
	331022
	331023
	331024
	331025
	331027
	331028
	332013 #TLE: Refugees from Granada
	333000 #KIL: Portuguese demand submission
	335003 #ZIM: Zimbabwe's Decline
	335004 #ZIM: The Mwenemutapa Empire
	337835 #CoTs: Livorno: Porto franco, Free Port
	337500 #Mines: Saltillo (25)
	337501 #
	337502 #
	337503 #
	337504 #
	337505 #Mines: Michoagan (26)
	337506 #Mines: Zacatecas (27)
	337507 #
	337508 #
	337509 #
	337510 #
	337511 #Mines: Jalisco (24)
	337512 #
	337513 #Mines: Arequipa (170)
	337514 #
	337515 #Mines: Cuzco (169)
	337516 #Mines: Valparaiso (175)
	337517 #
	337521 #Mines: Lima (168)
	337522 #
	337523 #
	337524 #Mines: Bogota (160)
	337525 #
	337526 #Mines: Cali (162)
	337527 #
	337529 #Mines: Potosi (194)
	337530 #
	337531 #
	337532 #
	337533 #
	337534 #
	337535 #
	337549 #Mines: Kansai (686)
	337552 #
	337553 #
	337558 #Mines: Lanzhou (1558)
	337559 #
	337560 #
	337561 #
	337562 #Mines: Yunnan (1553)
	337563 #
	337564 #
	337565 #
	337566 #Mines: Altar (15)
	337571 #Mines: Sachsen (331)
	337572 #
	337573 #
	337574 #
	337575 #
	337576 #Mines: Tirol (371)
	337577 #
	337578 #
	337579 #Mines: Bohemia (328)
	337580 #
	337581 #
	337582 #
	337583 #Mines: Sudeten (330)
	337584 #
	337800 #Rise of Kenya and decline of Kilwa - 766 #Rufiji
	337801 #Rise of Zanzibar and decline of Kenya - 765 #Zanzibar
	337802 #Closure of the Aden Centre of Trade - 500 #Aden
	337804 #Decline of Al Kharam - 504 #Mascate
	337805 #Consequence of the decline of Al Kharam - 505 #Al Kharam
	337806 #Decline of Liguria - 403 #Liguria
	337815 #Control of the Persian trade - 533 #Isfahan
	337817 #A new Trading Center in Indonesia - 702 #Jakarta
	338003 #Absorption of Ghazi states
	338004 #Absorption of Ghazi states
	338016 #Depopulation of the Sudan - 1493 #Mossi
	338036 #Sumbawa converts to Islam
	338075 #Hispaniola Goldmine Sequence
	338084 #Juan Diego Quauhtlatoatzin - 27 #Zacatecas
	338192 #
	338215 #
	338216 #
	338217 #
	338218 #
	338219 #Puerto Rico Goldmine Sequence
	338220 #
	338221 #
	338222 #
	338223 #Moron Goldminse Sequence
	338224 #
	338225 #
	338081 #Joanot Martorell and the Tirant lo Blanc
	338085 #Depopulation of the Sudan - 794 #Palanas
	338086 #Depopulation of the Sudan - 1498 #Begho
	338088 #Depopulation of the Sudan - 1487 #Awdaghost
	338089 #Depopulation of the Sudan - 1488 #Walata
	338090 #Depopulation of the Sudan - 1489 #Jenné
	338091 #The Gold-Salt Trade dries up - 1490 #Bambuk
	338092 #Depopulation of the Sudan - 1491 #Segu
	338093 #Depopulation of the Sudan - 1492 #Niani
	338094 #Depopulation of the Sudan - 1494 #Buré
	338100 #Rajput cultural uprising - 543 #Delhi
	338101 #Rajput resistance wanes - 543 #Delhi
	338102 #Rajput cultural uprising - 546 #Malwa
	338103 #Rajput resistance wanes - 546 #Malwa
	338104 #Rajput cultural uprising - 1521 #Panjab
	338105 #Rajput resistance wanes - 1521 #Panjab
	338106 #The Gold-Salt Trade dries up - 1496 #Gao
	338107 #Depopulation of the Sudan - 1497 #Say
	338110 #The Gold-Salt Trade dries up - 1495 #Timbuktu
	338116 #Horn of Africa depopulation - 753 #Keren
	338117 #Horn of Africa depopulation - 754 #Issas
	338118 #Horn of Africa depopulation - 755 #Afars
	338119 #Horn of Africa depopulation - 758 #Ogaden
	338120 #Horn of Africa depopulation - 1516 #Welo
	338121 #Horn of Africa depopulation - 1517 #Shewa
	338122 #Horn of Africa depopulation - 1518 #Arsi
	338123 #Horn of Africa depopulation - 1519 #Harerge
	338124 #Horn of Africa depopulation - 1588 #Gonder
	338125 #Horn of Africa depopulation - 1589 #Kefa
	338126 #Horn of Africa depopulation - 1590 #Bale
	338127 #Oromo invasion - 1589 #Kefa
	338128 #Oromo invasion - 1590 #Bale
	338129 #Oromo invasion - 1588 #Gonder
	338130 #Oromo invasion - 1517 #Shewa
	338131 #Oromo invasion - 1518 #Arsi
	338132 #Oromo invasion - 1519 #Harerge
	338133 #Oromo invasion - 758 #Ogaden
	338134 #Oromo invasion - 1516 #Welo
	338135 #Oromo invasion - 753 #Keren
	338136 #Oromo invasion - 1589 #Kefa
	338137 #Oromo invasion - 1590 #Bale
	338138 #Oromo invasion - 1588 #Gonder
	338139 #Oromo invasion - 1517 #Shewa
	338140 #Oromo invasion - 1518 #Arsi
	338141 #Oromo invasion - 1519 #Harerge
	338142 #Oromo invasion - 758 #Ogaden
	338143 #Oromo invasion - 1516 #Welo
	338144 #Oromo invasion - 753 #Keren
	338145 #Oromo invasion - 1589 #Kefa
	338146 #Oromo invasion - 1590 #Bale
	338147 #Oromo invasion - 1588 #Gonder
	338148 #Oromo invasion - 1517 #Shewa
	338149 #Oromo invasion - 1518 #Arsi
	338150 #Oromo invasion - 1519 #Harerge
	338151 #Oromo invasion - 758 #Ogaden
	338152 #Oromo invasion - 1516 #Welo
	338153 #Oromo invasion - 753 #Keren
	338154 #Oromo assimilation - 1589 #Kefa
	338155 #Oromo assimilation - 1590 #Bale
	338156 #Oromo assimilation - 1588 #Gonder
	338157 #Oromo assimilation - 1517 #Shewa
	338158 #Oromo assimilation - 1518 #Arsi
	338159 #Oromo assimilation - 1519 #Harerge
	338160 #Oromo assimilation - 758 #Ogaden
	338161 #Oromo assimilation - 1516 #Welo
	338162 #Oromo assimilation - 753 #Keren
	338195 #Recovery of Danzig - 301 #Danzig
	338197 #Rise of self-consciousness in Ukraine - 295 #Ukraine
	338210 #Rise of self-consciousness in Donetsk - 460 #Donetsk
	338211 #Rise of self-consciousness in Poltava - 461 #Poltava
	338212 #Rise of self-consciousness in Krementjug - 462 #Krementjug
	338232 #The plague in Milan - 389 #Lombardia
	338233 #The plague in Mantua - 390 #Mantua
	338234 #The plague in Venice - 370 #Veneto
	338235 #The plague in Modena - 391 #Romagna
	338236 #The plague in Parma - 402 #Emilia
	338237 #The plague in Florence - 401 #Firenze
	338238 #The plague in Siena - 400 #Siena
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
	338260 #Conversion of the Inca - 169 #Cuzco
	338261 #Idolatry in Perú - 169 #Cuzco
	338266 #The European Rule - 29 #Tlaxcala
	338267 #The European Rule - 24 #Jalisco
	338268 #The European Rule - 25 #Saltillo
	338269 #The European Rule - 26 #Michoagan
	338270 #The European Rule - 27 #Zacatecas
	338271 #The European Rule - 30 #Atlixco
	338272 #The European Rule - 31 #Tehuantepec
	338276 #The Portuguese Covet Ormuz - 504 #Al-Kharam
	338277 #The Portuguese Have Conquered Al-Kharam - 504 #Al-Kharam
	338289 #Portuguese Settlement of Mozambique - 768 #Mtawa
	338290 #Portuguese Settlement at Quelimane - 769 #Niassa
	338406 #Decline of Calais - 382 #Calais
	338437 #Portuguese fortifications - 823 #The Azores
	338438 #Portuguese fortifications - 800 #Senegal
	338439 #Portuguese fortifications - 818 #Cape Verde
	338440 #Portuguese fortifications - 816 #Fernando Po
	338441 #Portuguese fortifications - 205 #Pernambuc
	338442 #Portuguese fortifications - 210 #Itaimas
	338446 #Serbian Zeta - 362 #Ragusa
	338447 #Northern Albania - 362 #Ragusa
	338448 #Albania Veneta - 362 #Ragusa
	338451 #German dominance in Odenburg - 352 #Odenburg
	338453 #Sugar production declines in Barahona - 143 #Barahona
	338454 #Southern Ming aware of European settlement of Luzon - 690 #Luzon
	338490 #Frisian province change - 337 #Friesen
	338495 #Kalmyk Migration - 467 #Kalmuk
	338496 #Swiss expansion - 405 #Savoie
	338900 #Mongolia Depopulation Events
	338901
	338902
	338903
	338904
	338905
	338906
	338907
	338908
	338909
	338910
	338911 #End of Mongolia Depopulation Events
	355003 #COC: Appeal to Portugal
	364001 #CLC: The Treachery of Cochin
	364002 #CLC: Anti-Portuguese Feelings
	364003 #CLC: Commercial Treaty with Portugal
	390027 #PAR: The Economic Crisis
	407000
	421000
	424000
	437000 #PAK: Independence of Perak
	170298 #FRA: The End of the Hundred Years War
}

sleepevent = {
	3402
	3771 #ENG: King Charles and the New Monarchy
	3880 #NIP: Policy of Sakoku implemented
	3900
	6916 #NIP: Red seal ships trade
	6924 #NIP: Ikko-ikki
	6933
	6939
	6941
	6946
	6958
	7111
	7137
	17319
	18034
	18039
	18040
	18046
	18048
	18050
	18052
	18054
	18056
	18058
	18060
	18102
	18104
	21111
	23020
	25002
	30346
	40013
	40017
	40044
	40061
	40082
	40086
	40203
	40209
	40211
	40213
	48003
	48004
	48005
	50012
	50025
	51025
	60003
	60008
	60013
	75010
	80712
	88002
	115043
	115044
	164098
	174009
	174010
	174011
	174012
	174013
	174015
	174016
	174017
	174021
	185000
	185001
	185013
	185014
	186000
	186009
	186010
	186011
	186012
	186015
	186320
	203066
	227003 #MLC: The Portuguese covet Malacca -II-
	260093
	260100 #POR: A foothold in India -II-
	285002
	285008
	285009
	285015
	285016
	285300
	338446 #Serbian Zeta - 362 #Ragusa
	338448 #Albania Veneta - 362 #Ragusa
	338490 #Frisian province change - 337 #Friesen
	439000
}

#-----------------------------------------------------------------------------------------------
