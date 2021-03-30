##############################
# Country definition for U03 #
##############################
province = {
  id = 1337 # 西貢
  ic = { size = 3 current_size = 2 }
  infra = { size = 1 current_size = 0.8 }
  supplypool = 500
  oilpool = 500
}

#####################
# Country main data #
#####################

country = {
  tag                = U03
  regular_id         = VIE
  puppet             = FRA
  control            = FRA
  capital            = 1337 # 西貢
  dissent            = 5
  manpower           = 100
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 100
  escorts        = 10

  nationalprovinces      = { 1338 1337 1335 3711 3712 3710 1334 1333 3709 3708 3707 1328 1326 3702 3706 3705 3703 3704 3714 1306 1329 3713 3715 1332 3716 1336 3721 3720 3719 3718 1339 3717 1340 }
  ownedprovinces         = { 1337 }
  controlledprovinces    = { 1337 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1170 1180 1190 1760 1770 1780 1890 1910 1900 1920 2820 2810 2800 2720 1540 1550 1560 1270 1280 1290 1300 1310 1410 1420 1430 1440 2280 2290 2300 2310 66500 66510 66520 66530 66540 6010 6020 6040 6050 6060 6070 6080 9700 9710 9010 9020 9030 5050 5310 5010 6090 78100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 4
  }
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 13600 id = 1 }
    name     = "法國遠征軍"
    location = 1337
    division = {
      id             = { type = 13600 id = 2 }
      name           = "第3殖民地步兵師"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
    }
    division = {
      id             = { type = 13600 id = 3 }
      name           = "第9殖民地步兵師"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
    }
    division = {
      id             = { type = 13600 id = 4 }
      name           = "第2装甲師"
      type           = armor
      model          = 2
    }
    division = {
      id             = { type = 13600 id = 5 }
      name           = "遠東步兵旅"
      type           = bergsjaeger
      model          = 5
      extra          = engineer
      brigade_model  = 3
    }
    division = {
      id             = { type = 13600 id = 6 }
      name           = "北圻師"
      type           = infantry
      model          = 5
    }
    division = {
      id             = { type = 13600 id = 7 }
      name           = "交趾·支那師"
      type           = infantry
      model          = 5
    }
    division = {
      id             = { type = 13600 id = 8 }
      name           = "安南師"
      type           = infantry
      model          = 5
    }
  }

  landdivision = { dormant = yes id = { type = 13500 id = 33 } name = "東方遠征军陸戰第1旅"  type = marine model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 34 } name = "東方遠征军陸戰第2旅"  type = marine model = 4 extra = engineer brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 35 } name = "東方遠征军陸戰第3旅"  type = marine model = 4 extra = police brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 31 } name = "峴港守備队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 32 } name = "西贡守備队"  type = infantry model = 5 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 39 } name = "河內守備队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 36 } name = "法军傘兵"  type = paratrooper model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 37 } name = "法军傘兵"  type = paratrooper model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 38 } name = "法军傘兵"  type = paratrooper model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 40 } name = "法國駐寮部队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
}
