##############################
# Country definition for NZL #
##############################
province = {
  id = 1868 # 奥克兰
}
province = {
  id = 1871 # 惠灵顿（新西兰）
  anti_air = 2
}
province = {
  id = 1872 # 克赖斯特彻奇
}

#####################
# Country main data #
#####################

country = {
  tag                = NZL
  capital            = 1871 # 惠灵顿（新西兰）
  extra_tc           = 5
  manpower           = 118
  research_mod           = 1.15
  peacetime_ic_mod       = 0.7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 15

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "AST" NumberOfSpies = 4 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }

  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 3951 3952 3953 }
  ownedprovinces         = { 1755 1868 1869 1870 1871 1872 1873 3951 3952 3953 3967 3968 }
  controlledprovinces    = { 1755 1868 1869 1870 1871 1872 1873 3951 3952 3953 3967 3968 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5310 5010 5020 1010 1660 2610 3490 3550 3010 3070 6010 6020 6030 6040 6050 6100 6110 6120 6320 6390 6400 6500 8010 8020 8030 8150 8160 8200 8390 8440 8530 7420 7510 1020 1030 1040 1050 1760 1770 1780 1170 1180 1190 1200 1890 1900 1910 1920 2820 2720 2800 2810 5800 5680 5690 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 55001 } # 高尔韦子爵 乔治 
  headofgovernment       = { type = 9 id = 55002 } # 迈克尔 约瑟夫 萨维奇 
  foreignminister        = { type = 9 id = 55003 } # 迈克尔 约瑟夫 萨维奇 
  armamentminister       = { type = 9 id = 55004 } # 沃尔特 纳什 
  ministerofsecurity     = { type = 9 id = 55005 } # 威廉 帕里 
  ministerofintelligence = { type = 9 id = 55006 } # 肯尼思 福尔克斯 
  chiefofstaff           = { type = 9 id = 55007 } # 威廉 辛克莱尔-伯加斯 
  chiefofarmy            = { type = 9 id = 55008 } # 威廉 辛克莱尔-伯加斯 
  chiefofnavy            = { type = 9 id = 55009 } # E R 德兰蒙德 
  chiefofair             = { type = 9 id = 55010 } # R A 科克兰 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_Democratic-Socialism"

  landunit = {
    id       = { type = 10600 id = 1 }
    name     = "新西兰远征军 "
    location = 1871
    division = {
      id             = { type = 10600 id = 2 }
      name           = "第2步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 3 }
    name     = "新西兰第I军 "
    location = 1869
    division = {
      id             = { type = 10600 id = 4 }
      name           = "第1骑兵师 "
      type           = cavalry
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 10600 id = 5 }
      name           = "第3步兵师 "
      type           = infantry
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 6 }
    name     = "新西兰第V军 "
    location = 1872
    division = {
      id             = { type = 10600 id = 7 }
      name           = "第2山地骑兵师 "
      type           = cavalry
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 10600 id = 8 }
      name           = "第1步兵师 "
      type           = infantry
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 9 }
    name     = "新西兰第VIII军 "
    location = 1873
    division = {
      id             = { type = 10600 id = 10 }
      name           = "第3骑兵师 "
      type           = cavalry
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 10600 id = 11 }
      name           = "第4步兵师 "
      type           = motorized
      extra          = engineer
      strength       = 30
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 10600 id = 12 }
    name     = "新西兰皇家海军第I舰队 "
    location = 1871
    base     = 1871
    division = {
      id             = { type = 10600 id = 15 }
      name           = "第1运输舰编队 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 20 }
      name           = "第2运输舰编队 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 21 }
      name           = "第3运输舰编队 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 22 }
      name           = "第4运输舰编队 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 23 }
      name           = "第5运输舰编队 "
      type           = transport
      model          = 0
    }
  }
}
