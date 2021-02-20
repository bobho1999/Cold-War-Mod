##############################
# Country definition for CMB #
##############################

country = {
  tag                = CMB
  puppet             = FRA
  intrinsic_gov_type = paternal_autocrat
  capital            = 1340 # 金?
  manpower           = 50
  research_mod           = 1
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  nationalprovinces      = { 1339 1340 3717 3718 3719 3720 3721 }
  ownedprovinces         = { 1339 1340 3717 3718 3719 3720 3721 }
  controlledprovinces    = { 1339 1340 3717 3718 3719 3720 3721 }

  techapps               = { 7810 5310 78100 1010 1020 1030 1040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 8
    free_market       = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 590011 }
  headofgovernment       = { type = 9 id = 590017 }
  foreignminister        = { type = 9 id = 590067 }
  armamentminister       = { type = 9 id = 590029 }
  ministerofsecurity     = { type = 9 id = 590035 }
  ministerofintelligence = { type = 9 id = 590040 }
  chiefofstaff           = { type = 9 id = 590044 }
  chiefofarmy            = { type = 9 id = 590048 }
  chiefofnavy            = { type = 9 id = 590052 }
  chiefofair             = { type = 9 id = 590056 }
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_self-movement"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 8 id = 1 }
    name     = "??第一?"
    location = 1340
    division = {
      id             = { type = 8 id = 2 }
      name           = "??第一?"
      type           = infantry
      model          = 3
    }
  }
}
