##############################
# Country definition for U01 #
##############################
province = {
  id = 1337 # Î÷Ø•
  supplypool = 500
  oilpool = 500
}

#####################
# Country main data #
#####################

country = {
  tag                = U03
  regular_id         = FRA
  regular_id         = VIE
  puppet             = FRA
  control            = FRA
  capital            = 1337 # 
  dissent            = 10
  manpower           = 100
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 10
  escorts        = 2

  nationalprovinces      = { 1338 1337 1335 3711 3712 3710 1334 1333 3709 3708 3707 1328 1326 3702 3706 3705 3703 3704 }
  ownedprovinces         = { 1337 }
  controlledprovinces    = { 1337 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1170 1180 1190 1760 1770 1780 1890 1910 1900 1920 2820 2810 2800 2720 1540 1550 1560 1270 1280 1290 1300 1310 1410 1420 1430 1440 2280 2290 2300 2310 66500 66510 66520 66530 66540 6010 6020 6040 6050 6060 6070 6080 6100 9700 9710 9010 9020 9030 }

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
  nationalidentity       = "policy_economy_natural"
  nationalculture        = "policy_political_dignitary"
}
