#Japan (Nippon)

#-----------------------------------------------------------------------------------------------

country = {
	tag = NIP
	ai = "SmallTrade3.txt"
	colonialattempts = 0
	colonialnation = no
	major = no
	colonists = 0
	cancelledloans = 0
	extendedloans = 0
	treasury = 300
	inflation = 0
	merchants = 0.983333
	religion = { type = shinto }
	culture = { type = japanese }
	diplomacy = { }
	knownprovinces = {
		625 626 638 639 640 641 642 643 645 646 647 648 649 650 651 652 653 654 655 656 657 658
		659 660 661 683 684 685 686 687 688 689 886 940 941 942 943 944 945 946 947 948 949 1018
		1019 1020 1021 1082 1085 1087 1088 1089
		#Avoid isolation penalty
		596 664 668 670 672 673 678 679 682 1543 1545 1547 1548 1550 1552 1557 1601 1606
	}
	ownedprovinces = {
		683 684 685 686 687 688
	}
	controlledprovinces = {
		683 684 685 686 687 688
	}
	nationalprovinces = {
		684 685 686 687 688
	}
	claimedprovinces = {
		683 #Ezochi only fully controlled after 1457
	}
	city = {
		fortress = { level = 2 }
		population = 70000
		location = 685
	}
	city = {
		population = 1000
		location = 683
	}
	city = {
		fortress = { level = 1 }
		population = 35000
		location = 684
	}
	city = {
		fortress = { level = 1 }
		population = 60000
		location = 686
		capital = yes
	}
	city = {
		fortress = { level = 1 }
		population = 35000
		location = 687
	}
	city = {
		fortress = { level = 1 }
		population = 65000
		location = 688
	}
	landunit = {
		id = { type = 9423 id = 1000 }
		name = "Imperial Army"
		location = 685
		infantry = 30000
		cavalry = 10000
		artillery = 0
	}
	navalunit = {
		id = { type = 9423 id = 845 }
		name = "Imperial Fleet"
		location = 685
		warships = 0
		galleys = 15
		transports = 6
	}
	technology = {
		stability = { level = 2 value = 42 }
		infra = { level = 1 value = 0 }
		trade = { level = 1 value = 0 }
		land = { level = 1 value = 100 }
		naval = { level = 1 value = 100 }
	}
}

#-----------------------------------------------------------------------------------------------
