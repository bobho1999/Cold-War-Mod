##############################
# Country definition for U72 #
##############################
province = {
  id = 1326 # 海防
}
province = {
  id = 1328 # 河內
  infra = { size = 0.9 current_size = 0.8 }
}
province = {
  id = 1333 # 岘港
}

#####################
# Country main data #
#####################

country = {
  tag                = U72
  ai                 = "u72_1950.ai"
  intrinsic_gov_type = paternal_autocrat
  capital            = 1328 # 河內
  manpower           = 50
  research_mod           = 1
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  nationalprovinces      = { 1326 1328 3702 3703 3704 3705 3706 3707 3708 3709 3710 1333 1334 3711 1335 3712 1337 1338 }
  ownedprovinces         = { 1326 1328 3702 3703 3704 3705 3706 3707 3708 3709 1333 3710 1334 3711 1335 3712 1338 }
  controlledprovinces    = { 1326 1328 3702 3703 3704 3705 3706 3707 3708 1338 3712 3711 1335 1334 3710 1333 3709 }

  techapps               = { 7800 5310 5010 6570 6300 14140 14150 14160 1010 1270 14170 78100 1020 1030 1280 66500 66510 66520 66530 66540 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 8
    freedom           = 3
    free_market       = 4
    professional_army = 8
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 8500 } # 胡志明 
  headofgovernment       = { type = 9 id = 8549 } # 胡志明 
  chiefofstaff           = { type = 9 id = 8508 } # 武元甲 
  chiefofarmy            = { type = 9 id = 8509 } # 武元甲 
  nationalidentity       = "policy_ECONOMY_revolutionary"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 60100 id = 1 }
    name     = "越北根據地"
    location = 3704
    division = {
      id             = { type = 60100 id = 2 }
      name           = "越北根據地"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 60100 id = 3 }
    name     = "越共第一軍"
    location = 1328
    division = {
      id             = { type = 60100 id = 4 }
      name           = "越共游擊隊"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 60100 id = 5 }
      name           = "越共游擊隊"
      type           = militia
      model          = 3
    }
  }

  landdivision = { dormant = yes id = { type = 60100 id = 6 } name = "越共南方局"  type = garrison model = 1 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 60100 id = 7 } name = "印支共南部委員會"  type = garrison model = 1 extra = engineer brigade_model = 2 locked = yes } 
}
