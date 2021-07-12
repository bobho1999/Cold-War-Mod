##############################
# Country definition for SPA #
##############################
province = { id = 331 ic = 2 } # 毕尔巴鄂
province = { id = 332 ic = 2 anti_air = 2 } # 奥维耶多
province = { id = 333 ic = 2 } # 布尔戈斯
province = {
  id = 334 # 拉科鲁尼亚
  anti_air = 2
}
province = {
  id = 341 # 马德里
  anti_air = 3
}
province = { id = 346 anti_air = 2 } # 韦尔瓦
province = {
  id = 347 # 塞维利亚
}
province = {
  id = 354 # 瓦伦西亚
  anti_air = 2
}
province = { id = 355 ic = 2 } # 卡斯特利翁
province = { id = 356 ic = 2 anti_air = 2 } # 塔拉戈纳
province = {
  id = 357 # 巴塞罗那
}
province = {
  id = 535 # 马洛卡岛
}
province = {
  id = 957 # 休达
  anti_air = 1
}
province = {
  id = 963 # 拉斯帕尔马斯
}
province = {
  id = 3264 # 加迪斯
}

#####################
# Country main data #
#####################

country = {
  tag                = SPA
  intrinsic_gov_type = fascist
  capital            = 341 # 马德里
  dissent            = 5
  manpower           = 250
  # Resource Reserves
  energy         = 3500
  metal          = 3500
  rare_materials = 2500
  oil            = 3500
  supplies       = 3500
  money          = 0
  transports     = 83
  escorts        = 16

  diplomacy = {
    relation = { tag = SOV value = 150 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 2 }

  nationalprovinces      = { 356 357 535 536 537 3577 3578 352 353 354 355 3263 346 347 348 349 350 351 3264 3265 343 3270 3271 341 342 3266 3267 3268 3269 329 330 3262 333 338 339 340 3272 3273 3274 331 332 334 3275 3276 954 955 957 3318 963 964 971 972 1091 3375 }
  ownedprovinces         = { 1091 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329 330 331 3318 332 333 334 3375 338 339 340 341 342 343 346 347 349 350 351 352 353 354 355 356 357 3577 3578 535 536 537 954 955 957 963 964 971 972 }
  controlledprovinces    = { 1091 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329 330 331 3318 332 333 334 3375 338 339 340 341 342 343 346 347 349 350 351 352 353 354 355 356 357 3577 3578 535 536 537 954 955 957 963 964 971 972 }

  techapps               = { 1010 1020 1030 1040 1190 1200 14010 14020 2010 2020 2030 2040 2050 2060 2070 2080 2150 2160 2170 2180 2220 2230 2290 2300 2310 2320 2330 2330 2340 2400 2410 2450 2460 2470 2510 2520 2530 3010 3020 3030 3070 3080 3130 3140 3150 3250 3400 3410 4010 4020 4030 4040 4050 4060 4120 4130 4140 4170 4190 4220 4250 5010 5020 5050 5080 5100 5190 5200 5220 5310 5350 5360 6010 6020 6040 6050 6060 6070 6080 8010 8020 8040 8050 9010 9020 9030 9040 1050 1170 1180 1270 1280 1290 1300 1890 1900 1910 2810 2800 2720 5170 5110 5800 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 10032 } # 弗朗西斯科 弗朗哥 巴哈蒙德 
  headofgovernment       = { type = 9 id = 10046 } # 弗朗西斯科 弗朗哥 巴哈蒙德 
  foreignminister        = { type = 9 id = 10061 } # 阿尔贝托 M 阿泰尤-阿尔瓦雷兹 
  armamentminister       = { type = 9 id = 10090 } # 菲德尔 戴维拉 阿隆多 
  ministerofsecurity     = { type = 9 id = 10130 } # 布拉斯 佩雷斯 冈萨雷斯 
  ministerofintelligence = { type = 9 id = 10162 } # 若泽 温格里亚 日默内 
  chiefofstaff           = { type = 9 id = 10187 } # 卡洛斯 阿森西奥 卡瓦尼利亚斯 
  chiefofarmy            = { type = 9 id = 10206 } # 菲德尔 戴维拉 阿隆多 
  chiefofnavy            = { type = 9 id = 10233 } # 弗朗西斯科 雷格拉多 罗德里格斯 
  chiefofair             = { type = 9 id = 10250 } # 爱德华多 冈萨雷斯 加利亚萨 
  dormant_leaders        = { 3413 3416 3427 3455 3466 3492 3493 3494 }
  dormant_ministers      = { 10001 10045 10054 10003 10089 10047 10154 10275 10204 10188 10189 10008 10227 10211 10009 10229 10010 10247 10039 10002 10048 10005 10006 10007 10049 }

  landunit = {
    id       = { type = 25001 id = 901 }
    name     = "瓜达拉马军团 "
    location = 341
    division = {
      id             = { type = 25001 id = 1 }
      name           = "国民军第11步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 2 }
      name           = "国民军第12步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 3 }
      name           = "国民军第13步兵师 "
      type           = infantry
      model          = 3
    }
  }
  landunit = {
    id       = { type = 25001 id = 902 }
    name     = "安达卢西亚军团 "
    location = 347
    division = {
      id             = { type = 25001 id = 4 }
      name           = "国民军第21步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 5 }
      name           = "国民军第22步兵师 "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 6 }
      name           = "国民军第23步兵师 "
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 3
    }
  }
  landunit = {
    id       = { type = 25001 id = 903 }
    name     = "图里亚军团 "
    location = 354
    division = {
      id             = { type = 25001 id = 7 }
      name           = "国民军第31步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 8 }
      name           = "国民军第32步兵师 "
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 3
    }
  }
  landunit = {
    id       = { type = 25001 id = 904 }
    name     = "乌盖尔军团 "
    location = 356
    division = {
      id             = { type = 25001 id = 9 }
      name           = "国民军第41步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 10 }
      name           = "国民军第42步兵师 "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 11 }
      name           = "国民军第43步兵师 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 905 }
    name     = "阿拉贡军团 "
    location = 329
    division = {
      id             = { type = 25001 id = 12 }
      name           = "国民军第51步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 13 }
      name           = "国民军第52步兵师 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 906 }
    name     = "纳瓦拉军团 "
    location = 331
    division = {
      id             = { type = 25001 id = 14 }
      name           = "国民军第61步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 15 }
      name           = "国民军第62步兵师 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 907 }
    name     = "卡斯蒂里亚军团 "
    location = 339
    division = {
      id             = { type = 25001 id = 16 }
      name           = "国民军第71步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 17 }
      name           = "国民军第72步兵师 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 908 }
    name     = "加利西亚军团 "
    location = 334
    division = {
      id             = { type = 25001 id = 18 }
      name           = "国民军第81步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 19 }
      name           = "国民军第82步兵师 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 909 }
    name     = "摩洛哥军团 "
    location = 957
    division = {
      id             = { type = 25001 id = 20 }
      name           = "国民军第91步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 21 }
      name           = "国民军第92步兵师 "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 22 }
      name           = "国民军第93步兵师 "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 23 }
      name           = "泰尔乔团 "
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 3
    }
    division = {
      id             = { type = 25001 id = 24 }
      name           = "土著军 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 910 }
    name     = "马埃斯特雷军区 "
    location = 340
    division = {
      id             = { type = 25001 id = 25 }
      name           = "国民军第101步兵师 "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 26 }
      name           = "国民军第102步兵师 "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 911 }
    name     = "巴利阿里司令部 "
    location = 535
    division = {
      id             = { type = 25001 id = 27 }
      name           = "巴利阿里司令部 "
      type           = infantry
      model          = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 25001 id = 912 }
    name     = "加那利司令部 "
    location = 963
    division = {
      id             = { type = 25001 id = 927 }
      name           = "加那利司令部 "
      type           = infantry
      model          = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 25001 id = 913 }
    name     = "骑兵军团 "
    location = 341
    division = {
      id             = { type = 25001 id = 28 }
      name           = "第1骑兵师 "
      type           = cavalry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 29 }
      name           = "第1'布鲁内特'坦克师 "
      type           = armor
      model          = 2
    }
  }

  navalunit = {
    id       = { type = 25001 id = 500 }
    name     = "作战舰队 "
    location = 334
    base     = 334
    division = {
      id             = { type = 25001 id = 501 }
      name           = "加那利号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 2
    }
    division = {
      id             = { type = 25001 id = 502 }
      name           = "加利西亚号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 503 }
      name           = "米格尔·塞万提斯号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 504 }
      name           = "塞韦拉海军上将号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 505 }
      name           = "第1驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 25001 id = 506 }
      name           = "第2驱逐舰支队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 25001 id = 507 }
    name     = "巴塞罗纳海军基地 "
    location = 357
    base     = 357
    division = {
      id             = { type = 25001 id = 508 }
      name           = "门德斯·努涅斯号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 509 }
      name           = "纳瓦拉号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 510 }
      name           = "第3驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 25001 id = 511 }
      name           = "第4驱逐舰支队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 25001 id = 517 }
      name           = "第5驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 25001 id = 515 }
      name           = "比利亚潘多号运输舰 "
      type           = transport
    }
    division = {
      id             = { type = 25001 id = 516 }
      name           = "贝纳文特号运输舰 "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 25001 id = 512 }
    name     = "B舰队 "
    location = 346
    base     = 346
    division = {
      id             = { type = 25001 id = 513 }
      name           = "第1潜艇支队 "
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 25001 id = 201 }
    name     = "比利牛斯空军联队 "
    location = 357
    base     = 357
    division = {
      id             = { type = 25001 id = 202 }
      name           = "第1-G-20轰炸机大队 "
      type           = tactical_bomber
      strength       = 100
    }
    division = {
      id             = { type = 25001 id = 203 }
      name           = "第1-G-5截击机大队 "
      type           = interceptor
      model          = 2
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25001 id = 204 }
    name     = "海峡空军联队 "
    location = 346
    base     = 346
    division = {
      id             = { type = 25001 id = 205 }
      name           = "第2-G-20轰炸机大队 "
      type           = tactical_bomber
      strength       = 50
    }
    division = {
      id             = { type = 25001 id = 206 }
      name           = "第2-G-5截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 25001 id = 207 }
    name     = "东部空军联队 "
    location = 346
    base     = 346
    division = {
      id             = { type = 25001 id = 208 }
      name           = "第3-G-20轰炸机大队 "
      type           = tactical_bomber
      strength       = 50
    }
    division = {
      id             = { type = 25001 id = 209 }
      name           = "第3-G-5截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 75
    }
  }
  airunit = { 
    id       = { type = 25001 id = 210 }
    name     = "非洲空军联队 "
    location = 957
    base     = 957
    division = {
      id             = { type = 25001 id = 211 }
      name           = "第1-G-10支援机大队 "
      type           = cas
      strength       = 30
    }
    division = {
      id             = { type = 25001 id = 212 }
      name           = "第4-G-5截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25001 id = 213 }
    name     = "中央空军联队 "
    location = 341
    base     = 341
    division = {
      id             = { type = 25001 id = 214 }
      name           = "第1-G-40轰炸机大队 "
      type           = strategic_bomber
      strength       = 50
    }
    division = {
      id             = { type = 25001 id = 215 }
      name           = "第5-G-5截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 25001 id = 216 }
    name     = "巴利阿里空军指挥部 "
    location = 357
    base     = 357
    division = {
      id             = { type = 25001 id = 217 }
      name           = "第6-G-5截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25001 id = 218 }
    name     = "大西洋空军联队 "
    location = 334
    base     = 334
    division = {
      id             = { type = 25001 id = 219 }
      name           = "第2-G-40轰炸机大队 "
      type           = strategic_bomber
      strength       = 30
    }
    division = {
      id             = { type = 25001 id = 220 }
      name           = "第7-G-5截击机大队 "
      type           = interceptor
      model          = 2
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 25001 id = 807 }
    name     = "运输机队 "
    location = 341
    base     = 341
    division = {
      id             = { type = 25001 id = 808 }
      name           = "运输机大队 "
      type           = transport_plane
      strength       = 100
    }
  }
}
