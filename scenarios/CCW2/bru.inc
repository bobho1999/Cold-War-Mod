##############################
# Country definition for BRU #
##############################
province = {
  id = 3741 # 斯里巴加湾
}

#####################
# Country main data #
#####################

country = {
  tag                = BRU
  puppet             = ENG
  control            = ENG
  capital            = 1646 # 诗巫（泗务）
  manpower           = 2
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 5000
  supplies       = 5000
  money          = 0

  diplomacy = {
    relation = { tag = ENG value = 200 access = yes }
  }

  nationalprovinces      = { 3741 }
  ownedprovinces         = { 3741 }
  controlledprovinces    = { 3741 }

  techapps               = { 1010 1020 1030 1040 1070 1110 1120 1150 1190 1200 1210 1220 1310 14000 14010 2010 2020 2030 2040 2050 2060 2070 2080 2150 2160 2170 2180 2220 2230 2290 2300 2310 2320 2330 2330 2340 2400 2410 2450 2460 2470 2510 2520 2530 3010 3070 3130 3250 3400 4010 4020 4030 4040 4050 4060 4120 4130 4140 4170 4190 4250 5010 5020 5050 5060 5070 5080 5090 5100 5110 5120 5190 5200 5210 5220 5310 5320 5350 5360 5470 6010 6020 6040 6050 6060 6070 8010 8020 8040 8050 9010 9020 9030 9040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 5
    freedom           = 7
    free_market       = 8
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 567001 } # 帕杜卡 艾哈迈德 穆罕默德殿下 
  headofgovernment       = { type = 9 id = 567002 } # 西尔 保罗 阿姆斯特朗 
  foreignminister        = { type = 9 id = 567014 } # 艾哈迈德 卡马鲁尔 
  armamentminister       = { type = 9 id = 567016 } # 帕杜卡 哈吉 阿里 
  ministerofsecurity     = { type = 9 id = 567018 } # 阿布达拉 拉齐克 
  ministerofintelligence = { type = 9 id = 567020 } # 纳比尔 马西胡尔 
  chiefofstaff           = { type = 9 id = 567022 } # 阿卜杜拉 拉塔克 
  chiefofarmy            = { type = 9 id = 567024 } # H.R.H.奥马尔 阿里 萨利夫 
  chiefofnavy            = { type = 9 id = 567026 } # 德瓦纳加 辛格 
  chiefofair             = { type = 9 id = 567029 } # 唐纳德 埃姆克 
}
