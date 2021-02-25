##############################
# Country definition for U99 #
##############################
province = {
  id = 3200 # 的里雅斯特
}

#####################
# Country main data #
#####################

country = {
  tag                = U99
  intrinsic_gov_type = leninist
  capital            = 4136 # 毛里求斯影子
  manpower           = 0
  # Resource Reserves
  energy         = 0
  metal          = 0
  rare_materials = 0
  oil            = 0
  supplies       = 0
  money          = 0

  diplomacy = {

  }

  nationalprovinces      = { 4135 4136 6595 6596 6597 6598 6599 6600 6601 6602 6603 6604 6605 }
  ownedprovinces         = { 4135 4136 6595 3200 }
  controlledprovinces    = { 4135 4136 6595 3200 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1170 1180 1190 1200 1210 2280 2290 2300 2310 2320 2330 26100 26200 26300 26400 26500 2560 2540 2550 2570 2580 2360 2370 2390 2380 2160 2170 1760 1770 1780 1790 1660 1270 1280 1290 1300 1310 1410 1420 1430 1440 1450 1540 1890 1900 1910 3070 3080 3090 3110 3100 3120 3190 3200 3210 3220 5050 5080 5170 5190 5800 5110 5180 5660 5310 5010 5020 5030 5670 5680 4120 4130 4140 4150 4010 4020 4030 4060 4090 4220 4170 4190 4250 4050 4040 4070 4100 66500 66510 66520 66530 66540 6010 6020 6050 6040 6060 6070 6080 6100 6900 8010 8020 8030 8040 8050 9700 9710 9010 9020 9030 }

  landdivision = { dormant = yes id = { type = 9 id = 1 } name = "斯利那加守備队"  type = infantry model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 9 id = 2 } name = "巴特寮根據地"  type = garrison model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 56000 id = 1 } name = "釜山防禦圈" type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
}
