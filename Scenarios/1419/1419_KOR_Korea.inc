#Korea (Koryo)

#-----------------------------------------------------------------------------------------------

country = {
	tag = KOR
	ai = "SmallTrade2.ai"
	colonialattempts = 0
	colonialnation = no
	major = no
	colonists = 0
	cancelledloans = 0
	extendedloans = 0
	treasury = 200
	inflation = 0
	merchants = 0
	religion = { type = confucianism }
	culture = { type = korean }
	diplomacy = {
		relation = { tag = NIP value = 85 }
	}
	knownprovinces = {
		625 626 638 639 640 641 642 643 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659
		660 661 683 684 685 686 687 688 689 886 940 941 942 943 944 945 946 947 948 949 1018 1019 1020 1021 1085 1087 1088
		#Avoid isolation penalty
		596 664 668 670 672 673 678 679 682 1543 1545 1547 1548 1550 1552 1557 1601 1606
	}
	ownedprovinces = {
		641 642
	}
	controlledprovinces = {
		641 642
	}
	nationalprovinces = {
		641 642
	}
	city = {
		fortress = { level = 1 }
		population = 50000
		location = 642
		capital = yes
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 40000
		location = 641
	}
	landunit = {
		id = { type = 9423 id = 843 }
		name = "Korea Army"
		location = 642
		infantry = 30000
		cavalry = 10000
		artillery = 0
	}
	technology = {
		stability = { level = 2 value = 42 }
		infra = { level = 1 value = 0 }
		trade = { level = 0 value = 70 }
		land = { level = 0 value = 50 }
		naval = { level = 0 value = 0 }
	}
}

#-----------------------------------------------------------------------------------------------
