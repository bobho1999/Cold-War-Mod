##############################
# Country definition for BUR #
##############################
province = { id = 1291 ic = 1 } # 密支那
province = { id = 1295 ic = 1 } # 腊戎
province = {
  id = 1296 # 曼德勒
  ic = 1
}
province = {
  id = 1299 # 仰光
}

#####################
# Country main data #
#####################

country = {
  tag                = BUR
  puppet             = ENG
  intrinsic_gov_type = paternal_autocrat
  capital            = 1299 # 仰光
  manpower           = 50
  research_mod           = 1
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  nationalprovinces      = { 1289 1297 1298 1299 1300 1301 1302 1346 3691 3692 3693 3694 1290 1291 1292 1295 1296 1304 1898 3695 3696 3697 3698 3699 3700 3701 2764 2762 }
  ownedprovinces         = { 1289 1297 1298 1299 1300 1301 1302 1346 3691 3692 3693 3694 1290 1291 1292 1295 1296 1304 1898 3695 3696 3697 3698 3699 3700 3701 2764 2762 }
  controlledprovinces    = { 1289 1297 1298 1299 1300 1301 1302 1346 3691 3692 3693 3694 1290 1291 1292 1295 1296 1304 1898 3695 3696 3697 3698 3699 3700 3701 2764 2762 }

  techapps               = { 7810 5310 1010 1020 1030 1040 78100 66500 66510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 8
    freedom           = 8
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 563001 } # 雷金纳德 多尔曼-史密斯 爵士 
  headofgovernment       = { type = 9 id = 563016 } # 昂山 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_self-movement"
  nationalculture        = "policy_political_nationalism"
}
