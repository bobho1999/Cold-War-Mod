##############################
# Country definition for ALB #
##############################
province = {
  id = 390 # 地拉那
  ic = { size = 4 current_size = 3 }
  infra = { size = 0.6 current_size = 0.55 }
  anti_air = 1
  supplypool = 500
  oilpool = 100
}

#####################
# Country main data #
#####################

country = {
  tag                = ALB
  puppet             = SOV
  control            = SOV
  capital            = 390 # 地拉那
  dissent            = 10
  manpower           = 20
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  nationalprovinces      = { 3224 3237 390 391 392 413 415 }
  ownedprovinces         = { 3224 3237 390 391 }
  controlledprovinces    = { 3224 3237 390 391 }

  techapps               = { 1010 1020 1030 1040 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1890 1900 2800 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 9
    freedom           = 5
    free_market       = 4
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 32050 } # 塞富拉 马勒斯霍瓦 
  headofgovernment       = { type = 9 id = 32062 } # 恩维尔 霍查 
  foreignminister        = { type = 9 id = 32078 } # 埃萨德 帕夏 
  armamentminister       = { type = 9 id = 32099 } # 塞富拉 马勒斯霍瓦 
  ministerofsecurity     = { type = 9 id = 32123 } # 哈伊雷 费塔胡 
  ministerofintelligence = { type = 9 id = 32142 } # 内诺 扎纳 
  chiefofstaff           = { type = 9 id = 32156 } # 普伦克 佩尔维兹 
  chiefofarmy            = { type = 9 id = 32172 } # 阿齐兹 苏莱曼尼 
  chiefofnavy            = { type = 9 id = 32185 } # 哈利勒 内古蒂 
  chiefofair             = { type = 9 id = 32201 } # 祖赫迪 沙巴尼 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 30658 id = 1 }
    name     = "阿尔巴尼亚军团 "
    location = 390
    division = {
      id             = { type = 30659 id = 1 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30659 id = 2 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 3
      strength       = 50
      max_strength   = 50
    }
  }
}
