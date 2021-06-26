##############################
# Country definition for LEB #
##############################
province = {
  id = 1794 # 贝鲁特
}

#####################
# Country main data #
#####################

country = {
  tag                = LEB
  capital            = 1794 # 贝鲁特
  manpower           = 110
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 3000
  supplies       = 5000
  money          = 0
  transports     = 115
  escorts        = 36

  diplomacy = {
    relation = { tag = FRA value = 0 access = yes }
  }

  nationalprovinces      = { 1793 1794 3929 3928 }
  ownedprovinces         = { 1793 1794 3928 3929 }
  controlledprovinces    = { 1793 1794 3928 3929 }

  techapps               = { 1010 1020 1030 1040 1040 1050 1170 1180 1270 1280 14010 2290 4010 4120 5010 5020 5030 5050 5060 5070 5080 5090 5100 5110 5120 5130 5140 5160 5180 5190 5200 5210 5220 5230 5310 5320 5330 5340 5350 5360 5370 5380 5390 5400 5410 5420 5430 5440 5470 5480 5490 5500 5510 5550 5560 6030 6110 6120 6130 6140 8010 8020 8030 8040 8050 8070 8090 8100 8110 8120 8130 8140 8160 8190 8200 8250 8310 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 6560 6150 66500 66510 66520 66530 66540 1890 1900 2800 2720 2810 1910 2280 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 10
    free_market       = 8
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 529013 } # 巴哈拉 阿尔-库利 
  headofgovernment       = { type = 9 id = 529025 } # 萨米 阿斯-苏勒赫 
  foreignminister        = { type = 9 id = 529033 } # 马吉德 阿尔斯兰 
  armamentminister       = { type = 9 id = 529039 } # 纳齐姆 马吉达拉尼 
  ministerofsecurity     = { type = 9 id = 529045 } # 苏莱曼 纳乌法伊 
  ministerofintelligence = { type = 9 id = 529050 } # 苏莱曼 纳乌法伊 
  chiefofstaff           = { type = 9 id = 529053 } # 伊斯坎德尔 加尼姆 
  chiefofarmy            = { type = 9 id = 529056 } # 福阿德 谢哈卜 
  chiefofnavy            = { type = 9 id = 529059 } # 纳比尔 亚德 
  chiefofair             = { type = 9 id = 529062 } # 埃米尔 布斯塔尼 
}
