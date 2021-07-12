##############################
# Country definition for U50 #
##############################
province = {
  id = 1306 # 
}

#####################
# Country main data #
#####################

country = {
  tag                = U50
  intrinsic_gov_type = paternal_autocrat
  capital            = 1329 # �f��
  manpower           = 50
  research_mod           = 1
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  nationalprovinces      = { 1329 1332 1336 1306 3713 3714 3715 3716 }
  ownedprovinces         = { 1329 1332 1336 1306 3713 3714 3715 3716 }
  controlledprovinces    = { 1329 1332 1336 1306 3713 3714 3715 3716 }

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
#  headofstate            = { type = 9 id = 8500 } # ��־�� 
#  headofgovernment       = { type = 9 id = 8549 } # ��־�� 
#  chiefofstaff           = { type = 9 id = 8508 } # ��Ԫ�� 
#  chiefofarmy            = { type = 9 id = 8509 } # ��Ԫ�� 
  nationalidentity       = "policy_ECONOMY_revolutionary"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_stalinist"

  
}