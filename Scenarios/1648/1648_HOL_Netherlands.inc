#The United Provinces of the Free Netherlands

#-----------------------------------------------------------------------------------------------

country = {
	tag = HOL
	ai = {
		flags = {
			[Princevlag] = yes
			[VOC] = yes
			[WIC] = yes
		}
	}
	ai = "HOL_1590.txt"
	flagname = "Princevlag"
	policy = {
		aristocracy = 3
		centralization = 5
		innovative = 7
		mercantilism = 2
		offensive = 2
		land = 1
		quality = 10
		serfdom = 1
	}
	colonialattempts = 20
	colonialnation = yes
	major = no
	colonists = 3
	diplomats = 3
	cancelledloans = 0
	extendedloans = 0
	treasury = 1800
	inflation = 0
	merchants = 0
	religion = { type = reformed }
	culture = { type = dutch }
	diplomacy = {
		relation = { tag = BTN value = -100 }
		relation = { tag = OMA value = 150 }
		relation = { tag = MLC value = 120 }
		relation = { tag = SPA value = -200 }
		relation = { tag = POR value = -200 }
		relation = { tag = MOG value = 80 }
		relation = { tag = FRA value = 110 }
		relation = { tag = MKS value = -100 }
		relation = { tag = NIP value = 150 }
	}
	knownprovinces = {
		1614 #Pope
		#European land including western Persia and Iraq
		231 232 233 234 235 236 237 238 239 240 241 242 243 244
		245 246 247 248 249 250 251 252 253 254 255 256 257 258
		259 260 261 262 263 264 265 266 267 268 270 271 272 273
		274 275 276 277 278 279 280 281 282 283 284 285 286 287
		288 289 290 291 292 293 294 295 296 297 298 299 300 301
		302 303 304 305 306 307 308 309 310 311 312 313 314 315
		316 317 318 319 320 321 322 323 324 325 326 327 328 329
		330 331 332 333 334 335 336 337 338 339 340 341 342 343
		344 345 346 347 348 349 350 351 352 353 354 355 356 357
		358 359 360 361 362 363 364 365 366 367 368 369 370 371
		372 373 374 375 376 377 378 379 380 381 382 383 384 385
		386 387 388 389 390 391 392 393 394 395 396 397 398 399
		400 401 402 403 404 405 406 407 408 409 410 411 412 413
		414 415 416 417 418 419 420 421 422 423 424 425 426 427
		428 429 430 431 432 433 434 435 436 437 438 439 440 441
		442 443 444 445 447 448 449 450 451 452 457 458 459 460
		461 462 463 464 465 466 467 468 469 470 471 472 473 474
		475 476 477 478 479 480 481 482 483 484 485 486 487 488
		489 490 491 492 493 494 530 531 532 533 535 732 733
		734 735 736 737 738 739 740 741 742 743 744 745 746 747
		819 820 821 823 1469 1470 1466 1361 1609 1610 1611 1612
		#European Sea Areas
		836 837 838 839 840 841 842 843 867 868 869 870 871 872
		873 874 875 876 877 878 879 880 881 882 915 916 917 918
		919 920 921 922 923 924 925 926 927 928 929 930 931 932
		933 934 935 936 937 938 939 976 977 978 979 980 981 982
		983 984 985 986 987 988 989 990 991 992 993 994 995 996
		997 998 999 1000 1001 1002 1003 1004 1005 1006 1007 1008 1009 1010
		1011 1012 1013 1014 1015 1016 1017 1328 1331 1362 1613
		#American Land Provinces known to the Dutch in 1648
		27 29 30 39 68 64 69 85 86 87 88 102 103 116 137 138 139 140 141 142 143 144 145 146
		147 148 149 150 151 152 153 178 179 181 182 200 202 203 205 207 209 210 213 223
		#Indian and Far Eastern Provinces known to the Dutch in 1648
		541 543 546 547 548 549 556 558 565 568 569 573 574 676 677 678 679 680 681 682 685 686 687 688 689 504 505 499 500 501 502 503 756
		697 698 699 701 702 703 704 705 706 707 708 709 710 711 712 713 714 715 670 672 673 576 577
		#African Land Provinces known to the Dutch in 1648
		794 795 796 806 809 810 816 817 818 778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 797 798 799 800
		760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777
		#Land and Sea Zones Elsewhere known to the Dutch in 1648
		824 832 834 835 862 863 864 865 866 902 903 904 905 906 907 908 909
		910 911 912 913 914 941 942 944 964 965 966 967 968 969 970 971 972 973 974 975 1018 1019 1020 1021 1022 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1069 1070 1071 1072 1073 1074 1075 1076 1077 1078 1079 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1094 1095 1096 1097 1098 1099 1103 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 1120 1121 1122 1123 1124 1125 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1161 1168 1169 1170 1171 1172 1173 1174 1175 1176 1177 1178 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1210 1211 1213 1214 1215 1218 1221 1222 1224 1226 1230 1239 1240 1241 1244 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1292 1293 1294 1295 1296 1297 1298 1299 1323 1324 1325 1329 1330 1332 1335 1336 1339 1345 1346 1347 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1363 1364 1365 1366 1368 1373 1374 1375 1376 1377 1378
	}
	ownedprovinces = {
		337 338 339 340 677 702 714 715 689 824 179 181 153 795 794 87 706 88 810 802 800
	}
	controlledprovinces = {
		337 338 339 340 677 702 714 715 689 824 179 181 153 795 794 87 88 706 203 783 810 802 800
	}
	nationalprovinces = {
		337 338 339 340 378 380
		#Colonial cores
		86 87 88 102 153 205 576 677 701 702 716 795
	}
	city = {
		fortress = { level = 3 }
		population = 80000
		location = 339
		capital = yes
		shipyard = yes
		bailiff = yes
		courthouse = yes
		cityrights = yes
		barrack = yes
		manufactory = luxury
	}
	city = {
		fortress = { level = 3 }
		population = 20000
		location = 337
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		fortress = { level = 3 }
		barrack = yes
		population = 40000
		location = 338
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		fortress = { level = 3 }
		population = 55000
		location = 340
		bailiff = yes
		courthouse = yes
		cityrights = yes
		manufactory = goods
	}
	city = {
		fortress = { level = 2 }
		population = 18000
		location = 677
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Batavia"
		fortress = { level = 2 }
		population = 22500
		location = 702
		bailiff = yes
		courthouse = yes
		cityrights = yes
		manufactory = refinery
	}
	city = {
		name = "Amboína"
		fortress = { level = 1 }
		population = 5000
		location = 714
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		fortress = { level = 1 }
		population = 5000
		location = 715
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Zipangu"
		fortress = { level = 1 }
		population = 7000
		location = 689
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Fort van Wick"
		population = 500
		location = 824
	}
	city = {
		name = "Essequibo"
		fortress = { level = 1 }
		population = 4000
		location = 179
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Paramaribo"
		fortress = { level = 1 }
		population = 5000
		location = 181
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Willemstad"
		fortress = { level = 1 }
		population = 4500
		location = 153
		bailiff = yes
		cityrights = yes
		manufactory = refinery
	}
	city = {
		name = "Axim"
		fortress = { level = 2 }
		population = 6000
		location = 795
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "El Mina"
		fortress = { level = 1 }
		population = 2000
		location = 794
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Nieuw Amsterdam"
		fortress = { level = 1 }
		population = 2000
		location = 87
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Fort Nassau"
		fortress = { level = 1 }
		population = 2000
		location = 800
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		name = "Arguim"
		fortress = { level = 1 }
		population = 2000
		location = 802
		bailiff = yes
		courthouse = yes
		cityrights = yes
	}
	city = {
		population = 100
		location = 706
	}
	city = {
		name = "Fort Oranje"
		population = 550
		location = 88
	}
	tradingpost = {
		level = 3
		location = 810
	}
	landunit = {
		id = { type = 9423 id = 1007 }
		name = "Stadtholder's Army"
		location = 340
		infantry = 15000
		cavalry = 5000
		artillery = 30
	}
	landunit = {
		id = { type = 9423 id = 1008 }
		name = "VOC Army"
		location = 702
		infantry = 9000
		cavalry = 0
		artillery = 30
	}
	landunit = {
		id = { type = 9423 id = 1009 }
		name = "Pernambuco Counter-insurgents"
		location = 181
		infantry = 5000
		cavalry = 1000
		artillery = 0
	}
	landunit = {
		id = { type = 9423 id = 1010 }
		name = "India Force"
		location = 576
		infantry = 7000
		cavalry = 1000
		artillery = 20
	}
	navalunit = {
		id = { type = 9423 id = 1003 }
		name = "Home Fleet"
		location = 339
		warships = 70
		galleys = 0
		transports = 10
	}
	navalunit = {
		id = { type = 9423 id = 1004 }
		name = "Cora-Coras"
		location = 714
		warships = 8
		galleys = 0
		transports = 2
	}
	navalunit = {
		id = { type = 9423 id = 1005 }
		name = "WIC Fleet"
		location = 153
		warships = 5
		galleys = 0
		transports = 3
	}
	navalunit = {
		id = { type = 9423 id = 1006 }
		name = "India Fleet"
		location = 576
		warships = 10
		galleys = 0
		transports = 5
	}
	technology = {
		stability = { level = 2 value = 42 }
		infra = { level = 7 value = 0 }
		trade = { level = 7 value = 0 }
		land = { level = 28 value = 0 }
		naval = { level = 30 value = 0 }
	}
}

#-----------------------------------------------------------------------------------------------
