##############################
# Country definition for TAN #
##############################

country = {
  tag                = TAN
  puppet             = SOV
  capital            = 1418 # 肯木畢其爾
  manpower           = 1
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = SOV value = 200 }
  }

  nationalprovinces      = { 1418 2952 2953 }
  ownedprovinces         = { 1418 2952 2953 }
  controlledprovinces    = { 1418 2952 2953 }

  techapps               = { 3410 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  chiefofnavy            = { type = 9 id = 16119 } # 少數民族 
  chiefofair             = { type = 9 id = 16078 } # 少數民族
}
