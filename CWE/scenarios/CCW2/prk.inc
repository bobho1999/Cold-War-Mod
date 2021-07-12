##############################
# Country definition for PRK #
##############################
province = {
  id = 1201 # 平壤
  infra = { size = 1 current_size = 0.8 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PRK
  puppet             = SOV
  control            = SOV
  capital            = 1201 # 平壤
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 1000
  money          = 20

  nationalprovinces      = { 1194 1195 1196 1197 1198 1199 3678 3679 3680 3681 3682 3683 3684 3688 1393 1391 1376 1392 1200 1201 3670 3671 3672 3673 3674 3675 3676 3677 3686 3687 }
  ownedprovinces         = { 1201 }
  controlledprovinces    = { 1201 }

  techapps               = { 78100 1010 1020 1030 1040 5310 5010 5020 5180 66500 66510 66520 66530 66540 1890 1050 1060 1900 1170 1180 1190 1270 2280 2290 2300 2010 5050 6570 6300 6310 6330 6320 6340 6350 1760 1770 1780 2720 2800 }

  policy = {
    democratic        = 3
    political_left    = 8
    freedom           = 5
    free_market       = 3
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 579001 } # 金日成 
  headofgovernment       = { type = 9 id = 579002 } # 金日成 
  foreignminister        = { type = 9 id = 579003 } # 南日 
  armamentminister       = { type = 9 id = 579004 } # 曹晚植 
  ministerofsecurity     = { type = 9 id = 579005 } # 金日成 
  ministerofintelligence = { type = 9 id = 579006 } # 肖劲光 
  chiefofstaff           = { type = 9 id = 579007 } # 宋时轮 
  chiefofarmy            = { type = 9 id = 579008 } # 金日成 
  chiefofnavy            = { type = 9 id = 579009 } # 刘西元 
  chiefofair             = { type = 9 id = 579010 } # 李克农 
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"
}
