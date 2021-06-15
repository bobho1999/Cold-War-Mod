##############################
# Country definition for CZE #
##############################
province = {
  id = 466 # 海布
  infra = { size = 1 current_size = 0.7 }
  landfort = 2
}
province = {
  id = 467 # 兹诺伊莫
  ic = { size = 1 current_size = 0 }
  infra = { size = 1 current_size = 0.75 }
  landfort = 2
}
province = {
  id = 469 # 布拉格
  ic = { size = 4 current_size = 2 }
  infra = { size = 1 current_size = 0.75 }
  anti_air = 2
}
province = {
  id = 470 # 比尔森
  ic = { size = 2 current_size = 1 }
  infra = { size = 1 current_size = 0.8 }
  anti_air = 2
}
province = {
  id = 471 # 乌斯季
  ic = { size = 2 current_size = 1 }
  infra = { size = 1 current_size = 0.7 }
  landfort = 2
}
province = {
  id = 472 # 利贝雷茨
  infra = { size = 1 current_size = 0.75 }
  landfort = 2
}
province = {
  id = 475 # 布尔诺
  ic = { size = 4 current_size = 2 }
  infra = { size = 1 current_size = 0.75 }
  anti_air = 2
}
province = {
  id = 476 # 布拉迪斯拉发
  ic = { size = 8 current_size = 3 }
  infra = { size = 1 current_size = 0.7 }
  landfort = 5
  anti_air = 2
}
province = {
  id = 490 # 科希策
  ic = { size = 5 current_size = 2 }
  infra = { size = 0.8 current_size = 0.6 }
}
province = { id = 3163 landfort = 5 } # 奥帕瓦
province = { id = 3165 landfort = 5 } # 克尼格雷茨
province = { id = 3169 landfort = 5 } # 波西米亚林山
province = { id = 3170 landfort = 5 } # 捷克克鲁姆洛夫

#####################
# Country main data #
#####################

country = {
  tag                = CZE
  puppet             = SOV
  control            = SOV
  capital            = 469 # 布拉格
  dissent            = 20
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  nationalprovinces      = { 3139 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 3174 3175 4087 466 467 468 469 470 471 472 474 475 476 477 478 490 499 }
  ownedprovinces         = { 3139 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 4087 466 467 468 469 470 471 472 474 475 476 477 478 490 499 }
  controlledprovinces    = { 3139 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 4087 466 467 468 469 470 471 472 474 475 476 477 478 490 499 }

  techapps               = { 1010 1020 1030 1040 14000 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1410 1420 1890 1900 1910 1760 1770 2720 2800 2810 26100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 6
    freedom           = 3
    free_market       = 3
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 24033 } # 爱德华 贝奈斯 
  headofgovernment       = { type = 9 id = 24147 } # 克莱门特 哥特瓦尔德 
  foreignminister        = { type = 9 id = 24065 } # 鲁道夫 斯兰斯基 
  armamentminister       = { type = 9 id = 24081 } # 鲁道夫 斯兰斯基 
  ministerofsecurity     = { type = 9 id = 24156 } # 瓦茨拉夫 诺塞克 
  ministerofintelligence = { type = 9 id = 24157 } # 普罗科普 德尔季纳 
  chiefofstaff           = { type = 9 id = 24121 } # 卢德维克 斯沃博达 
  chiefofarmy            = { type = 9 id = 24134 } # 卢德维克 斯沃博达 
  chiefofnavy            = { type = 9 id = 24139 } # 克莱门特 哥特瓦尔德 
  chiefofair             = { type = 9 id = 24145 } # 扬 普罗科普 
  dormant_ministers      = { 24036 24037 24038 24039 24040 24048 24049 24050 24060 24061 24062 24075 24076 24077 24078 24092 24093 24094 24107 24108 24119 24120 24131 24132 24133 24138 24144 24146 24150 }
  nationalidentity       = "policy_economy_Stalinism-planned"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 26000 id = 12 }
    name     = "捷克斯洛伐克第1集团军 "
    location = 469
    division = {
      id             = { type = 26000 id = 13 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 14 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 15 }
      name           = "第3步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 16 }
      name           = "第4步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 18 }
    name     = "捷克斯洛伐克第2集团军 "
    location = 476
    division = {
      id             = { type = 26000 id = 17 }
      name           = "第5步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 19 }
      name           = "第6步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 20 }
      name           = "第7步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
}
