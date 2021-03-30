##############################
# Country definition for U19 #
##############################

country = {
  tag                = U19
  intrinsic_gov_type = paternal_autocrat
  capital            = 4136 # 毛里求斯影子
  manpower           = 0
  research_mod           = 1
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  nationalprovinces      = { 4136 }
  ownedprovinces         = { 4136 }
  controlledprovinces    = { 4136 }

  techapps               = { 66500 66510 5310 78100 1010 1020 1030 1040 1050 1060 1890 1900 1910 2810 2800 2720 1920 2820 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
}
