#Sultanate of Delhi

#-----------------------------------------------------------------------------------------------

country = {
	tag = DLH
	ai = "DLH_1419.txt"
	colonialattempts = 0
	colonialnation = no
	major = no
	colonists = 0
	cancelledloans = 0
	extendedloans = 0
	treasury = 150
	inflation = 0
	merchants = 0.083333
	religion = { type = eastern_sunni }
	culture = { type = afghani }
	diplomacy = {
		relation = { tag = MLW value = -50 }
		relation = { tag = GUJ value = 25 }
		relation = { tag = SIN value = 25 }
		relation = { tag = RAJ value = 25 }
		relation = { tag = GON value = 25 }
		relation = { tag = HYA value = 25 }
		relation = { tag = TIM value = -75 refusetrade = no }
		relation = { tag = JAI value = -50 }
	}
	knownprovinces = {
		#Indian Mainland
		539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562
		563 564 565 566 567 568 569 570 571 572 573 574 575 576 671 672 1520 1521 1522 1523 1545 1546
		#Afghanistan
		1524 1525 1526 1527 1528 1531 1591 1592
		#Tibet
		1539 1540 1541 1542 1543
		#Indian Sea Zones
		1138 1140 1066 1069 1070 1071 1072 1073 1074 1078
		#Persian Gulf
		505 533 534 535 536 537 538 1063 1065 1363
	}
	ownedprovinces = {
		543 545 553 1520 1521 1523
	}
	controlledprovinces = {
		543 545 553 1520 1521 1523
	}
	nationalprovinces = {
		543 544 545 553 554 1520 1521
	}
	city = {
		fortress = { level = 1 }
		population = 60000
		location = 543
		capital = yes
	}
	city = {     fortress = { level = 1 }
		population = 29000
		location = 545
	}
	city = {
		fortress = { level = 1 }
		population = 20000
		location = 1520
	}
	city = {
		fortress = { level = 1 }
		population = 16000
		location = 1521
	}
	city = {
		fortress = { level = 1 }
		population = 3000
		location = 1523
	}
	city = {
		fortress = { level = 1 }
		population = 15000
		location = 553
	}
	landunit = {
		id = { type = 9423 id = 1005 }
		name = "Delhi Army"
		location = 543
		infantry = 10000
		cavalry = 10000
		artillery = 0
	}
	technology = {
		stability = { level = -3 value = 42 }
		infra = { level = 0 value = 80 }
		trade = { level = 1 value = 70 }
		land = { level = 0 value = 100 }
		naval = { level = 0 value = 0 }
	}
}

#-----------------------------------------------------------------------------------------------
