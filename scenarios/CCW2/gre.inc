##############################
# Country definition for GRE #
##############################
province = {
  id = 396 # 伊拉克利翁
  anti_air = 1
}
province = {
  id = 401 # 雅典
  anti_air = 1
}
province = {
  id = 411 # 萨洛尼卡
  landfort = 4
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = GRE
  regular_id         = U02
  capital            = 401 # 雅典
  extra_tc           = 5
  manpower           = 70
  tc_mod                 = 1.1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 60
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
  }

  nationalprovinces      = { 3225 3227 3229 3231 3232 3233 3234 393 394 3948 395 396 400 401 402 403 405 410 411 399 398 392 412 }
  ownedprovinces         = { 3225 3227 3229 3231 3232 3233 3234 393 394 3948 395 396 400 401 402 403 405 410 411 399 398 }
  controlledprovinces    = { 3225 3227 3229 3231 3232 3233 3234 393 394 3948 395 396 400 401 402 403 405 410 411 399 398 }

  techapps               = { 5050 5180 5010 1010 6010 6020 6040 8010 8020 8390 8530 7510 66500 66510 66520 66530 66540 6050 6060 5310 4010 4040 1030 1020 1040 1050 1060 1890 1900 1170 1180 1190 9700 9710 9010 78100 8030 8040 8050 2800 2720 2810 1910 2280 2290 2300 2360 2540 2420 5670 5660 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 18039 } # 达马斯基诺斯 大主教 
  headofgovernment       = { type = 9 id = 18046 } # 塞米斯托克利斯 索富利斯 
  foreignminister        = { type = 9 id = 18080 } # 约安尼斯 苏格拉底 波利蒂斯 
  armamentminister       = { type = 9 id = 18004 } # 乔治斯 曼察维诺斯 
  ministerofsecurity     = { type = 9 id = 18005 } # 乔治斯 洛戈塞蒂斯 
  ministerofintelligence = { type = 9 id = 18006 } # 乔治斯 洛戈塞蒂斯 
  chiefofstaff           = { type = 9 id = 18007 } # 特奥多尔 潘加洛斯 
  chiefofarmy            = { type = 9 id = 18008 } # 亚历山德罗斯 帕帕戈斯 
  chiefofnavy            = { type = 9 id = 18009 } # 阿纳斯塔西奥 萨克拉里乌 
  chiefofair             = { type = 9 id = 18010 } # 埃莱夫塞里奥斯 韦尼泽洛斯 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_fascist"
  dormant_ministers      = { 18001 18002 18003 18004 18091 18005 18006 18007 18010 18037 18040 18041 18042 18056 18057 18058 18076 18077 18078 18103 18104 18105 18123 18124 18125 18139 18140 18141 18142 18155 18157 18169 18170 18179 }

#########################################################################
# Greek OOB
# https://en.wikipedia.org/wiki/3rd_Infantry_Division_(Greece)
#########################################################################
  landunit = {
    id       = { type = 15500 id = 1 }
    name     = "希腊第1军团 "
    location = 401
    division = {
      id             = { type = 15500 id = 2 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 3 }
      name           = "第3步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 5 }
    name     = "希腊第2军团 "
    location = 403
    division = {
      id             = { type = 15500 id = 17 }
      name           = "第8步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 7 }
      name           = "第9步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 11 }
      name           = "第15步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 9 }
    name     = "希腊第3军团 "
    location = 410
    division = {
      id             = { type = 15500 id = 13 }
      name           = "第6步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 14 }
      name           = "第7步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 8 }
    name     = "希腊第3军团 "
    location = 411
    division = {
      id             = { type = 15500 id = 10 }
      name           = "第10步兵师 "
      type           = bergsjaeger
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 12 }
      name           = "第11步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 15 }
    name     = "希腊第1步兵师 "
    location = 3232
    division = {
      id             = { type = 15500 id = 16 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 18 }
    name     = "希腊第5步兵师 "
    location = 396
    division = {
      id             = { type = 15500 id = 19 }
      name           = "第5步兵师 "
      type           = infantry
      model          = 4
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 15500 id = 23 }
    name     = "希腊巴斯克尔巡洋舰队 "
    location = 401
    base     = 401
    division = {
      id             = { type = 15500 id = 30 }
      name           = "阿尔芙号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 15500 id = 31 }
      name           = "赫拉号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 15500 id = 28 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 32 }
      name           = "第2驱逐舰编队 "
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 29 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 33 }
      name           = "第2潜艇编队 "
      type           = submarine
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 24 }
      name           = "第1运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 15500 id = 25 }
      name           = "第2运输舰编队 "
      type           = transport
    }
  }

  division_development = {
    id             = { type = 15454 id = 1 }
    name           = "第13摩托化步兵师 "
    type           = motorized
    model          = 0
    cost           = 3.0
    date           = { year = 1945 month = october day = 9 }
    close_when_finished = no
    waitingforclosure = no
    days           = 100
    extra          = artillery
    brigade_model  = 5
  }
  division_development = {
    id             = { type = 15454 id = 2 }
    name           = "第14步兵师 "
    type           = infantry
    model          = 4
    cost           = 2.0
    date           = { year = 1945 month = october day = 16 }
    close_when_finished = no
    waitingforclosure = no
    days           = 95
    extra          = artillery
    brigade_model  = 5
  }
  division_development = {
    id             = { type = 15454 id = 3 }
    name           = "第15步兵师 "
    type           = infantry
    model          = 4
    cost           = 2.0
    date           = { year = 1946 month = october day = 23 }
    close_when_finished = no
    waitingforclosure = no
    days           = 95
    extra          = anti_tank
    brigade_model  = 2
  }
}
