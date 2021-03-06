##############################
# Country definition for JAP #
##############################
province = {
  id = 1178 # 函館
  ic = { size = 2 current_size = 0 }
  infra = { size = 0.8 current_size = 0.3 }
}
province = {
  id = 1179 # 札幌
  ic = { size = 3 current_size = 0 }
  infra = { size = 0.8 current_size = 0.3 }
}
province = {
  id = 1180 # 仙台
  ic = { size = 3 current_size = 1 }
  infra = { size = 1 current_size = 0.3 }
}
province = {
  id = 1181 # 秋田
  ic = { size = 3 current_size = 1 }
  infra = { size = 0.8 current_size = 0.2 }
}
province = {
  id = 1182 # 福島
  ic = { size = 3 current_size = 0 }
  infra = { size = 1 current_size = 0.3 }
}
province = {
  id = 1183 # 新瀉
  ic = { size = 7 current_size = 1 }
  infra = { size = 1.2 current_size = 0.3 }
}
province = {
  id = 1184 # 東京都
  ic = { size = 15 current_size = 1 }
  infra = { size = 1.5 current_size = 0.2 }
}
province = {
  id = 1185 # 名古屋
  ic = { size = 10 current_size = 0 }
  infra = { size = 1.2 current_size = 0.1 }
}
province = {
  id = 1186 # 京都府◆舞鶴港
  ic = { size = 8 current_size = 1 }
  infra = { size = 1.2 current_size = 0.3 }
}
province = {
  id = 1187 # 大阪
  ic = { size = 10 current_size = 0 }
  infra = { size = 1.2 current_size = 0 }
}
province = {
  id = 1188 # 广岛◆吴港
  ic = { size = 0 current_size = 0 }
  infra = { size = 0 current_size = 0 }
}
province = {
  id = 1189 # 高知
  ic = { size = 5 current_size = 0 }
  infra = { size = 1.2 current_size = 0.3 }
}
province = {
  id = 1190 # 福岡
  ic = { size = 5 current_size = 0 }
  infra = { size = 1 current_size = 0.2 }
}
province = {
  id = 1191 # 鹿兒島
  ic = { size = 10 current_size = 0 }
  infra = { size = 1.2 current_size = 0 }
}
province = {
  id = 3651 # 青森
  infra = { size = 1 current_size = 0.4 }
}
province = {
  id = 3658 # 福井
  infra = { size = 0.8 current_size = 0.4 }
}
province = {
  id = 3659 # 伊勢
  ic = { size = 2 current_size = 0 }
  infra = { size = 1 current_size = 0.3 }
}
province = {
  id = 3660 # 神戶
  ic = { size = 5 current_size = 0 }
  infra = { size = 1 current_size = 0.1 }
}
province = {
  id = 3662 # 岡山
  infra = { size = 1 current_size = 0.4 }
}
province = {
  id = 3663 # 山口
  infra = { size = 1 current_size = 0.4 }
}
province = {
  id = 3666 # 长崎◆佐世保港
  ic = { size = 0 current_size = 0 }
  infra = { size = 0 current_size = 0 }
}
province = {
  id = 3667 # 熊本
  infra = { size = 1 current_size = 0.4 }
}
province = {
  id = 3689 # 水戶
  infra = { size = 1 current_size = 0.3 }
}
province = {
  id = 3690 # 靜岡
  ic = { size = 1 current_size = 0 }
  infra = { size = 1 current_size = 0.3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  puppet             = USA
  control            = USA
  capital            = 1184 # 東京都
  dissent            = 25
  manpower           = 50
  repair_mod             = 1.1
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 120
  metal          = 100
  rare_materials = 19
  oil            = 299
  supplies       = 120
  money          = 17
  transports     = 110
  escorts        = 20

  diplomacy = {
    relation = { tag = CHI value = 50 }
    relation = { tag = CGX value = 50 }
    relation = { tag = CHC value = 50 }
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 10 }

  nationalprovinces      = { 1178 1179 1180 1181 1182 3651 1186 1187 1188 3659 3660 3661 3662 3663 1189 1190 1191 3664 3665 3666 3667 3668 3685 1174 1177 1183 1184 1185 3652 3653 3654 3655 3656 3657 3658 3689 3690 }
  ownedprovinces         = { 1178 1179 1180 1181 1182 3651 1186 1187 1188 3659 3660 3661 3662 3663 1189 1190 1191 3664 3665 3666 3667 3668 3685 1183 1184 1185 3652 3653 3654 3655 3657 3658 3689 3690 }
  controlledprovinces    = { 1178 1179 1180 1181 1182 3651 1186 1187 1188 3659 3660 3661 3662 3663 1189 1190 1191 3664 3665 3666 3667 3668 3685 1183 1184 1185 3652 3653 3654 3655 3657 3658 3689 3690 }

  techapps               = { 1010 1020 1030 1040 1050 1060 5410 2610 2620 2010 2450 2440 2430 2280 2320 2300 5010 5050 8000 8100 8200 8300 8400 8410 8320 8210 8760 8070 8010 8020 8080 8040 8050 8030 8060 5100 5110 5310 5800 5190 5170 5080 5020 1190 1180 1170 1410 1420 1430 1440 1270 1280 1290 1890 1900 1910 1760 1770 1780 6390 6400 6420 6410 6430 6440 9700 9710 9010 9020 9030 74800 1540 1450 1300 1200 2290 2310 2540 2550 2420 2020 2030 2040 2060 2360 2370 26100 26200 2560 3070 3080 3090 3100 3110 3120 3010 3020 3030 3040 3050 3060 3250 3260 3270 3280 3290 3300 3190 3200 3210 3220 3230 3130 3140 3150 3160 3170 3320 3330 3340 3350 3360 3400 3410 3420 12100 12110 12120 4120 4130 4140 4010 4020 4030 4060 4190 4200 4210 4250 4170 4280 4180 4220 4230 4040 4070 4100 66500 66510 66520 66530 66540 8120 8130 8310 2720 2800 2810 5180 5670 5660 5680 }

  policy = {
    democratic        = 6
    political_left    = 3
    freedom           = 2
    free_market       = 4
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 5239 } # 道格拉斯 麦克阿瑟 
  headofgovernment       = { type = 9 id = 5030 } # 幣原 喜重郎 
  foreignminister        = { type = 9 id = 5052 } # 吉田 茂 
  armamentminister       = { type = 9 id = 5220 } # 池田勇人 
  ministerofsecurity     = { type = 9 id = 5102 } # 堀切 善次郎 
  ministerofintelligence = { type = 9 id = 5129 } # 片山 哲 
  chiefofstaff           = { type = 9 id = 5148 } # 大泽梶原 
  chiefofarmy            = { type = 9 id = 524389 } # 下村 定
  chiefofair             = { type = 9 id = 5180 } # 井上成美 
  nationalidentity       = "policy_economy_military-state"
  socialpolicy           = "policy_social_bushido"
  nationalculture        = "policy_political_militarism"
}
