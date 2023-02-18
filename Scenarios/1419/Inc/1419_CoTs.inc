#AGCEEP - The Grand Campaign - 1419

#-----------------------------------------------------------------------------------------------
#Centers of Trade

# There are 30 possible CoT's in a game. There will always be a minimum of 22 CoT's.
# If a scenario has less then new CoT's will be created by the game.
# The color a CoT is displayed on the Trade map is based on what position it is in.
# Each position uses a color defined in colorscales.csv.
# There are only 22 available colors, so colors are reused starting with the 23rd CoT
# and continues in the same order as CoT 1 - 22.

#CoT1-Green
#Tago
cot = {
	location = 441
	merchant = { TAG = POR level = 4 }
	merchant = { TAG = GEN level = 1 }
	merchant = { TAG = VEN level = 1 }
	merchant = { TAG = TOS level = 1 }
	merchant = { TAG = ARG level = 1 }
	merchant = { TAG = NAV level = 1 }
	merchant = { TAG = CAS level = 1 }
	merchant = { TAG = GRA level = 1 }
}

#CoT2-Red
#Mecklenburg
cot = {
	location = 305
	merchant = { TAG = MEC level = 3 }
	merchant = { TAG = SHL level = 2 }
	merchant = { TAG = POM level = 2 }
	merchant = { TAG = HAN level = 1 }
	merchant = { TAG = BAY level = 1 }
	merchant = { TAG = HAU level = 1 }
	merchant = { TAG = BUR level = 1 }
	merchant = { TAG = OLD level = 1 }
	merchant = { TAG = BRE level = 1 }
	merchant = { TAG = HES level = 1 }
	merchant = { TAG = LAT level = 1 }
	merchant = { TAG = DAN level = 1 }
	merchant = { TAG = NOR level = 1 }
	merchant = { TAG = SWE level = 1 }
	merchant = { TAG = STT level = 1 }
	merchant = { TAG = SAC level = 1 }
}

#CoT3-LightBlue
#Flandern
cot = {
	location = 380
	merchant = { TAG = BUR level = 3 }
	merchant = { TAG = MLO level = 2 }
	merchant = { TAG = TOS level = 2 }
	merchant = { TAG = MEC level = 2 }
	merchant = { TAG = HAU level = 1 }
	merchant = { TAG = ENG level = 1 }
	merchant = { TAG = FRA level = 1 }
	merchant = { TAG = GEN level = 1 }
	merchant = { TAG = VEN level = 1 }
	merchant = { TAG = KOL level = 1 }
	merchant = { TAG = LUX level = 1 }
	merchant = { TAG = PFA level = 1 }
}

#CoT4-LightGray
#Veneto
cot = {
	location = 370
	merchant = { TAG = VEN level = 5 }
	merchant = { TAG = MLO level = 2 }
	merchant = { TAG = NAP level = 2 }
	merchant = { TAG = BAY level = 2 }
	merchant = { TAG = PFA level = 1 }
	merchant = { TAG = PAP level = 1 }
	merchant = { TAG = MOD level = 1 }
	merchant = { TAG = BOH level = 1 }
	merchant = { TAG = LUX level = 1 }
	merchant = { TAG = HUN level = 1 }
	merchant = { TAG = SIE level = 1 }
	merchant = { TAG = TOS level = 1 }
}

#CoT 5 - LightBrown
#Liguria
cot = {
	location = 403
	merchant = { TAG = GEN level = 5 }
	merchant = { TAG = MLO level = 2 }
	merchant = { TAG = TOS level = 2 }
	merchant = { TAG = ARG level = 2 }
	merchant = { TAG = SAV level = 1 }
	merchant = { TAG = HEL level = 1 }
	merchant = { TAG = SIE level = 1 }
	merchant = { TAG = MOD level = 1 }
}

#CoT 6 - DarkYellow
#Lyonnais
cot = {
	location = 408
	merchant = { TAG = GEN level = 2 }
	merchant = { TAG = VEN level = 2 }
	merchant = { TAG = TOS level = 2 }
	merchant = { TAG = MLO level = 2 }
	merchant = { TAG = BUR level = 3 }
	merchant = { TAG = FRA level = 3 }
	merchant = { TAG = SAV level = 1 }
	merchant = { TAG = ENG level = 1 }
	merchant = { TAG = FOI level = 1 }
	merchant = { TAG = NAV level = 1 }
	merchant = { TAG = ARG level = 1 }
}

#CoT 7 - Yellow
#Livland
cot = {
	location = 282
	merchant = { TAG = MEC level = 3 }
	merchant = { TAG = LIV level = 2 }
	merchant = { TAG = LAT level = 2 }
	merchant = { TAG = SHL level = 2 }
	merchant = { TAG = POM level = 1 }
	merchant = { TAG = KOL level = 1 }
	merchant = { TAG = HAN level = 1 }
	merchant = { TAG = BAY level = 1 }
	merchant = { TAG = SWE level = 1 }
	merchant = { TAG = DAN level = 1 }
}

#CoT 8 - DarkGray
#Kerch
cot = {
	location = 465
	merchant = { TAG = GEN level = 4 }
	merchant = { TAG = VEN level = 3 }
	merchant = { TAG = BYZ level = 2 }
	merchant = { TAG = MOL level = 1 }
}

#CoT 9 - LightYellow
#Novgorod
cot = {
	location = 274
	merchant = { TAG = MEC level = 3 }
	merchant = { TAG = SHL level = 2 }
	merchant = { TAG = POM level = 2 }
	merchant = { TAG = NVG level = 3 }
	merchant = { TAG = NOR level = 1 }
	merchant = { TAG = SWE level = 1 }
	merchant = { TAG = MOS level = 1 }
	merchant = { TAG = PSK level = 1 }
	merchant = { TAG = LIT level = 1 }
}

#CoT 10 - Gray
#Alexandria
cot = {
	location = 744
	merchant = { TAG = VEN level = 4 }
	merchant = { TAG = GEN level = 3 }
	merchant = { TAG = TOS level = 2 }
	merchant = { TAG = NUB level = 1 }
	merchant = { TAG = TUN level = 1 }
	merchant = { TAG = ATH level = 1 }
	merchant = { TAG = MRE level = 1 }
	merchant = { TAG = BYZ level = 1 }
	merchant = { TAG = CYP level = 1 }
}

#CoT 11 - DarkGreen
#Aden
cot = {
	location = 500
	merchant = { TAG = ADE level = 3 }
}

#CoT 12 - Blue
#Al Kharam
cot = {
	location = 505
	merchant = { TAG = ADE level = 4 }
	merchant = { TAG = GUJ level = 4 }
}

#CoT 13 - LightRed
#Kerala
cot = {
	location = 569
	merchant = { TAG = GUJ level = 2 }
	merchant = { TAG = VIJ level = 1 }
	merchant = { TAG = CLC level = 1 }
}

#CoT 14 - White
#Kyushu
cot = {
	location = 688
	merchant = { TAG = NIP level = 4 }
	merchant = { TAG = KOR level = 1 }
}

#CoT 15 - DarkBrown
#Malacca
cot = {
	location = 677
	merchant = { TAG = BGL level = 4 }
	merchant = { TAG = MLC level = 4 }
	merchant = { TAG = ATJ level = 2 }
}

#CoT 16 -Red
#Santal
cot = {
	location = 556
	merchant = { TAG = BGL level = 4 }
	merchant = { TAG = ORI level = 2 }
	merchant = { TAG = DLH level = 2 }
	merchant = { TAG = BMD level = 2 }
	merchant = { TAG = VIJ level = 1 }
	merchant = { TAG = MUB level = 1 }
}

#CoT 17 - LightGreen
#Gujarat
cot = {
	location = 547
	merchant = { TAG = GUJ level = 4 }
	merchant = { TAG = RAJ level = 2 }
	merchant = { TAG = BMD level = 2 }
	merchant = { TAG = DLH level = 2 }
	merchant = { TAG = TIM level = 1 }
	merchant = { TAG = SIN level = 1 }
	merchant = { TAG = VIJ level = 1 }
}

#CoT 18 - Light Orange
#Zacatecas
cot = {
	location = 27
	merchant = { TAG = AZT level = 4 }
	merchant = { TAG = ZAP level = 3 }
}

#CoT 19 - Brown
#Cuzco
cot = {
	location = 169
	merchant = { TAG = INC level = 4 }
	merchant = { TAG = CHM level = 3 }
}

#CoT 20 - DarkBlue
#Timbuktu
cot = {
	location = 1495
}

#CoT 21 - DarkRed
#Shanghai
cot = {
	location = 653
	merchant = { TAG = CHI level = 5 }
	merchant = { TAG = NIP level = 3 }
	merchant = { TAG = KOR level = 2 }
}

#CoT 22 - DarkOrange
#Guangdong
cot = {
	location = 659
	merchant = { TAG = CHI level = 5 }
	merchant = { TAG = NIP level = 2 }
	merchant = { TAG = KOR level = 1 }
}

#CoT 23 - Green
#Azerbaijan
cot = {
	location = 487
	merchant = { TAG = VEN level = 3 }
	merchant = { TAG = GEN level = 2 }
	merchant = { TAG = TIM level = 1 }
	merchant = { TAG = BYZ level = 1 }
	merchant = { TAG = CYP level = 1 }
}

#CoT 24 - Red
#Samarkand
cot = {
	location = 1592
	merchant = { TAG = TIM level = 4 }
}

#CoT 24 - Green
#Rufiji
cot = {
	location = 766
	merchant = { TAG = KIL level = 4 }
}

#-----------------------------------------------------------------------------------------------
