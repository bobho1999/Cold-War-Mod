##############################
# Country definition for KOR #
##############################
province = {
  id = 1199 # �h��
  ic = { size = 3 current_size = 0 }
  infra = { size = 1 current_size = 0.7 }
}

#####################
# Country main data #
#####################

country = {
  tag                = KOR
  puppet             = USA
  control            = USA
  capital            = 1199 # �h��
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 1000
  money          = 20

  nationalprovinces      = { 1194 1195 1196 1197 1198 1199 3678 3679 3680 3681 3682 3683 3684 3688 1393 1391 1376 1392 1200 1201 3670 3671 3672 3673 3674 3675 3676 3677 3686 3687 }
  ownedprovinces         = { 1199 1194 }
  controlledprovinces    = { 1199 1194 }

  techapps               = { 78100 1010 1020 1030 1040 5310 5010 5020 5180 66500 66510 66520 66530 66540 1890 1050 1060 1900 1170 1180 1190 1270 1280 6390 6400 6420 6410 6430 6440 6450 2720 2800 }

  policy = {
    democratic        = 3
    political_left    = 5
    freedom           = 5
    free_market       = 5
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 578071 } # ��?���d
  headofgovernment       = { type = 9 id = 578072 } # ��?���d
  foreignminister        = { type = 9 id = 578073 } # ��?���d
  armamentminister       = { type = 9 id = 578074 } # ��?���d
  ministerofsecurity     = { type = 9 id = 578075 } # ��?���d
  ministerofintelligence = { type = 9 id = 578076 } # ��?���d
  chiefofstaff           = { type = 9 id = 578077 } # ��?���d
  chiefofarmy            = { type = 9 id = 578078 } # ��?���d
  chiefofnavy            = { type = 9 id = 578079 } # ��?���d
  chiefofair             = { type = 9 id = 578080 } # ��?���d
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_Democratic-Socialism"

  landdivision = { dormant = yes id = { type = 56000 id = 1 } type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
}