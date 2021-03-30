##############################
# Country definition for U33 #
##############################
province = { id = 392 landfort = 4 } # 约阿尼纳

#####################
# Country main data #
#####################

country = {
  tag                = U33
  regular_id         = GRE
  capital            = 392 # 约阿尼纳
  extra_tc           = 5
  manpower           = 70
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 60
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = 50 access = yes }
    relation = { tag = ENG value = -50 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = SOV value = 15 }
    relation = {
      tag        = YUG
      value      = 100
      access     = yes
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = ALB value = 50 access = yes }
  }

  nationalprovinces      = { 3225 3227 3229 3231 3232 3233 3234 393 394 3948 395 396 400 401 402 403 405 410 411 399 398 392 412 }
  ownedprovinces         = { 392 412 }
  controlledprovinces    = { 392 412 }

  techapps               = { 5050 5180 5010 1010 8390 8530 7510 1020 1030 1040 1050 1060 1170 1180 1890 66500 66510 66520 66530 66540 6570 6300 78100 5310 1190 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 8
    freedom           = 4
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 6 id = 980001 } # Giorgis Siantos
  headofgovernment       = { type = 6 id = 980006 } # Markos Vaphiadis
  foreignminister        = { type = 6 id = 980007 } # Nikos Zahariadis
  armamentminister       = { type = 6 id = 980010 } # Giorgis Siantos
  ministerofsecurity     = { type = 6 id = 980012 } # Markos Vaphiadis
  ministerofintelligence = { type = 6 id = 980014 } # Giannes Ioannides
  chiefofstaff           = { type = 6 id = 980016 } # Stephanos Sarafis

  landunit = {
    id       = { type = 15600 id = 1 }
    name     = "希臘民主军"
    location = 392
    division = {
      id             = { type = 15600 id = 2 }
      name           = "第1师"
      type           = infantry
      model          = 5
    }
    division = {
      id             = { type = 15600 id = 3 }
      name           = "第2师"
      type           = infantry
      model          = 5
    }
  }
  landunit = {
    id       = { type = 15600 id = 4 }
    name     = "根據地"
    location = 392
    division = {
      id             = { type = 15600 id = 5 }
      name           = "根據地"
      type           = garrison
      model          = 0
      extra          = engineer
      brigade_model  = 4
      locked         = yes
    }
  }
}
