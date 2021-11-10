#Spain

#-----------------------------------------------------------------------------------------------

country = {
	tag = SPA
	ai = "SPA_1518_Cortes.ai"
	flagname = "Saltire"
	leadertable = "scenarios\1520\leaders\leaders_spa.txt"
	policy = {
		aristocracy = 9
		centralization = 4
		innovative = 1
		mercantilism = 6
		offensive = 9
		land = 6
		quality = 8
		serfdom = 7
	}
	colonialattempts = 10
	colonialnation = yes
	major = no
	colonists = 3.250000
	cancelledloans = 0
	extendedloans = 0
	treasury = 600
	inflation = 0
	loansize = 1000
	merchants = 4.083333
	religion = { type = catholic }
	culture = {
		type = iberian
		type = italian
		type = maltese
		type = basque
		type = dutch
	}
	diplomacy = {
		relation = { tag = ALD value = -200 casusbelli = { type = permanent expirydate = { year = 1820 } } }
		relation = { tag = MOR value = -150 refusetrade = no }
		relation = { tag = AZT value = -200 }
		relation = { tag = HAB value = 200 }
		relation = { tag = FRA value = -100 }
		relation = { tag = PAP value = 50 access = yes }
		relation = { tag = POR value = 50 }
		relation = { tag = ZAP value = -50 }
		relation = { tag = MAA value = -50 }
		relation = { tag = XHO value = -200 refusetrade = no }
	}
	knownprovinces = {
		1614 #Pope
		231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248
		249 250 251 252 253 254 255 256 257 258 263 264 265 266 270 273 274 275 276
		277 278 279 280 281 282 283 284 285 286 287 288 289 290 291 292 293 294 295
		296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314
		315 316 317 318 319 320 321 322 323 324 325 326 327 328 329 330 331 332 333
		334 335 336 337 338 339 340 341 342 343 344 345 346 347 348 349 350 351 352
		353 354 355 356 357 358 359 360 361 362 363 364 365 366 367 368 369 370 371
		372 373 374 375 376 377 378 379 380 381 382 383 384 385 386 387 388 389 390
		391 392 393 394 395 396 397 398 399 400 401 402 403 404 405 406 407 408 409
		410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428
		429 430 431 432 433 434 435 436 437 438 439 440 441 442 443 444 445 450 461
		462 463 464 465 466 469 470 474 475 476 477 478 479 480 481 482 483 484 485
		486 490 491 492 493 494 732 733 734 735 736 737 738 739 740 741 742 744 745
		746 800 801 802 803 804 805 806 817 819 820 821 823 836 837 838 840 867 868 869 870 871 872 873 874 875 876 877 878 879 880
		881 882 902 903 914 916 917 918 919 920 921 922 923 924 925 926 927 928 929
		930 931 932 933 934 935 936 937 938 939 964 965 966 967 968 969 970 971 972
		973 974 975 976 977 978 979 980 981 982 983 984 985 986 987 988 989 990 991
		992 993 994 995 996 997 998 999 1000 1001 1002 1003 1004 1005 1006 1007 1008
		1009 1010 1011 1012 1013 1014 1015 1016 1017 1042 1043 1044 1045 1046 1047
		1048 1049 1050 1051 1052 1053 1054 1055 1056 1057 1058 1101 1106 1127 1331 1361
		1362 1368 1375 1378 1466 1469 905 906 907 912 1039 1040 1041 1107 1108 1110 1111 1112 1113
		1114 1115 1119 1120 1121 1173 1373 1609 1610 1611 1612 1613 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152
		153 26 27 29 30 31 35 39 50 1365 1129 1128 795 818
		#Ponce de Leon
		908 49
		#Magellan's expedition
		834 835 865 866 915
	}
	ownedprovinces = {
		29 39 137 138 139 140 142 143 144 151 339 340 377 378 379 380 387 393 394 395 396 397 426
		427 428 429 430 431 432 433 435 436 437 438 439 440 443 444 445 734 740 817 819 821
	}
	controlledprovinces = {
		29 39 137 138 139 140 142 143 144 151 339 340 377 378 379 380 387 393 394 395 396 397 426
		427 428 429 430 431 432 433 435 436 437 438 439 440 443 444 445 734 740 817 819 821
	}
	nationalprovinces = {
		337 339 340 377 378 379 380 387 389 393 394 395 396 397 409 426 427 428 429 430 431 432
		433 435 436 437 438 439 440 443 444 445 817 819 821
		#Colonial cores
		39 137 138 139 142 143 144
	}
	city = {
		name = "Vera Cruz"
		fortress = { level = 2 }
		population = 1000
		location = 29
		bailiff = yes
	}
	city = {
		name = "Panamá"
		population = 200
		location = 39
	}
	city = {
		name = "La Havana"
		population = 700
		location = 137
	}
	city = {
		name = "Matanzas"
		population = 700
		location = 138
	}
	city = {
		name = "Santiago de Cuba"
		population = 700
		location = 139
	}
	city = {
		name = "Esquivel"
		population = 100
		location = 140
	}
	city = {
		name = "Isabella"
		population = 700
		location = 142
	}
	city = {
		name = "Santo Domingo"
		population = 700
		location = 143
	}
	city = {
		name = "San Juan"
		population = 700
		location = 144
	}
	city = {
		name = "Puerto de España"
		population = 100
		location = 151
	}
	city = {
		fortress = { level = 1 }
		population = 20000
		location = 340
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 20000
		location = 339
		bailiff = yes
	}
	city = {
		fortress = { level = 2 }
		population = 70000
		location = 380
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 35000
		location = 378
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 7000
		location = 377
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 25000
		location = 379
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 7500
		location = 387
		bailiff = yes
	}
	city = {
		fortress = { level = 2 }
		population = 120000
		location = 393
		bailiff = yes
	}
	city = {
		fortress = { level = 2 }
		population = 8000
		location = 394
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 30000
		location = 395
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 25000
		location = 396
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 3000
		location = 397
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 9000
		location = 426
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 7000
		location = 427
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 6000
		location = 428
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 15000
		location = 429
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 20000
		location = 430
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 32000
		location = 431
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 10000
		location = 432
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 38000
		location = 433
		bailiff = yes
		manufactory = weapons
	}
	city = {
		fortress = { level = 1 }
		population = 29000
		location = 435
		bailiff = yes
	}
	city = {
		fortress = { level = 3 }
		population = 60000
		location = 436
		bailiff = yes
		barrack = yes
		cityrights = yes
	}
	city = {
		fortress = { level = 1 }
		population = 27000
		location = 437
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 9000
		location = 438
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 70000
		location = 439
		capital = yes
		bailiff = yes
		cityrights = yes
	}
	city = {
		fortress = { level = 1 }
		population = 29000
		location = 440
		bailiff = yes
	}
	city = {
		fortress = { level = 3 }
		population = 32000
		location = 443
		bailiff = yes
		shipyard = yes
	}
	city = {
		fortress = { level = 1 }
		population = 25000
		location = 444
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 7000
		location = 445
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 5500
		location = 734
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 11500
		location = 740
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 2500
		location = 817
		bailiff = yes
		manufactory = refinery
	}
	city = {
		fortress = { level = 2 }
		population = 10100
		location = 819
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 2000
		location = 821
		bailiff = yes
	}
	landunit = {
		id = { type = 9423 id = 543 }
		name = "Ejército de Italia"
		location = 393
		infantry = 15000
		cavalry = 5000
		artillery = 10
	}
	landunit = {
		id = { type = 9423 id = 544 }
		name = "Ejército Real"
		location = 439
		infantry = 8000
		cavalry = 5000
		artillery = 0
	}
	landunit = {
		id = { type = 9423 id = 545 }
		name = "Tenochtitlan Army"
		location = 27
		infantry = 6000
		cavalry = 1000
		artillery = 10
	}
	landunit = {
		id = { type = 9423 id = 546 }
		name = "Tlaxcala Army"
		location = 29
		infantry = 10000
		cavalry = 1000
		artillery = 0
	}
	landunit = {
		id = { type = 9423 id = 547 }
		name = "Guardia di Rey"
		location = 431
		infantry = 15000
		cavalry = 4000
		artillery = 20
	}
	landunit = {
		id = { type = 9423 id = 456 }
		name = "Flandres Guard"
		location = 380
		infantry = 15000
		cavalry = 5000
		artillery = 0
	}
	navalunit = {
		id = { type = 9423 id = 589 }
		name = "Armada Real"
		location = 433
		warships = 8
		galleys = 15
		transports = 2
	}
	navalunit = {
		id = { type = 9423 id = 591 }
		name = "Magellan's Expedition"
		location = 1115
		warships = 5
		galleys = 0
		transports = 0
		historicalleader = {
			category = explorer
			id = { type = 6 id = 0127813 }
			name = "Fernando Magallanes"
			startdate = {
				year = 1518
				month = march
				day = 22
			}
			deathdate = {
				year = 1521
				month = april
				day = 27
			}
			rank = 7
			movement = 6
			fire = 3
			shock = 2
			siege = 0
			remark = "the first to circumnavigate the globe"
		}
		historicalleader = {
			category = explorer
			id = { type = 6 id = 0127812 }
			name = "J.Sebastián Elcano"
			startdate = {
				year = 1518
				month = march
				day = 22
			}
			deathdate = {
				year = 1526
				month = august
				day = 5
			}
			rank = 8
			movement = 6
			fire = 3
			shock = 2
			siege = 0
			remark = "He completed the first circumnavigation"
		}
	}
	technology = {
		stability = { level = 2 value = 42 }
		infra = { level = 2 value = 104 }
		trade = { level = 3 value = 55 }
		land = { level = 12 value = 0 }
		naval = { level = 11 value = 100 }
	}
}

#-----------------------------------------------------------------------------------------------
