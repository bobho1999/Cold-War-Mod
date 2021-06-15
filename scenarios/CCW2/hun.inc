##############################
# Country definition for HUN #
##############################
province = {
  id = 456 # 佩奇
  ic = { size = 6 current_size = 2 }
  infra = { size = 0.8 current_size = 0.6 }
}
province = {
  id = 457 # 布达
  ic = { size = 16 current_size = 6 }
  infra = { size = 0.8 current_size = 0.55 }
  anti_air = 6
}
province = {
  id = 491 # 米什科尔茨
  ic = { size = 6 current_size = 2 }
  infra = { size = 0.8 current_size = 0.65 }
}
province = {
  id = 497 # 德布勒森
  ic = { size = 7 current_size = 3 }
  infra = { size = 0.8 current_size = 0.65 }
  anti_air = 4
}

#####################
# Country main data #
#####################

country = {
  tag                = HUN
  puppet             = SOV
  control            = SOV
  capital            = 457 # 布达
  dissent            = 15
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 5000
  money          = 100

  diplomacy = {
    relation = { tag = ENG value = -50 }
    relation = { tag = FRA value = -70 }
    relation = { tag = ITA value = 125 }
    relation = { tag = ROM value = -50 }
    relation = { tag = YUG value = -80 }
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 8 }

  nationalprovinces      = { 3176 3177 3178 3179 3180 3181 3182 3183 3184 3185 4086 456 457 458 491 492 497 }
  ownedprovinces         = { 3176 3177 3178 3179 3180 3181 3182 3183 3184 3185 4086 456 457 458 491 492 497 }
  controlledprovinces    = { 3176 3177 3178 3179 3180 3181 3182 3183 3184 3185 4086 456 457 458 491 492 497 }

  techapps               = { 1010 1020 1030 1040 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1890 1900 1910 1760 1770 2720 2800 2810 1300 26100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 9
    freedom           = 2
    free_market       = 2
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 21016 } # 扎科斯特斯 艾派
  headofgovernment       = { type = 9 id = 21034 } # 马加什拉科西
  foreignminister        = { type = 9 id = 21096 } # 米哈里弗 奥伦纳
  armamentminister       = { type = 9 id = 21055 } # 葛洛 恩尔诺
  ministerofsecurity     = { type = 9 id = 21084 } # 纳吉·伊姆雷
  ministerofintelligence = { type = 9 id = 21216 } # 柯西 拉奇诺
  chiefofstaff           = { type = 9 id = 21126 } # 拉斯洛绍约姆
  chiefofarmy            = { type = 9 id = 21150 } # 巴塔·伊什特万
  chiefofnavy            = { type = 9 id = 21191 } # 哈卡尔曼
  chiefofair             = { type = 9 id = 21009 } # 哈利 拉斯洛
  dormant_ministers      = { 21002 21140 21022 21051 21023 21101 21024 21077 21102 21025 21103 21026 21078 21105 21129 21155 21159 21141 21083 21121 21160 21142 21010 21001 21058 21179 21070 21052 21027 21207 21156 21124 21205 21081 21175 21094 21173 21206 21030 21005 21074 21200 21082 21174 21143 21080 21091 21144 21127 21050 21092 21009 21120 21093 21202 21090 21171 21104 21208 21072 21157 21028 21145 21122 21176 21201 21204 }
  nationalidentity       = "policy_economy_Stalinism-planned"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 20500 id = 5 }
    name     = "匈牙利第1集团军 "
    location = 457
    division = {
      id             = { type = 20500 id = 6 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 7 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 8 }
      name           = "第3步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20500 id = 9 }
    name     = "匈牙利第2集团军 "
    location = 457
    division = {
      id             = { type = 20500 id = 10 }
      name           = "第4步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 11 }
      name           = "第5步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 12 }
      name           = "第6步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 20500 id = 13 }
    name     = "匈牙利第1空军联队 "
    location = 457
    base     = 457
    division = {
      id             = { type = 20500 id = 14 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 20500 id = 15 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 1
      strength       = 50
    }
  }
}
