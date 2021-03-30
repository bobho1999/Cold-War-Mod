##############################
# Country definition for AFG #
##############################

country = {
  tag                = AFG
  capital            = 1486 # 喀布尔
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }

  nationalprovinces      = { 1484 1486 1492 1493 3866 3867 3868 3870 3871 3872 3873 3874 3875 3876 3877 3878 3879 3880 }
  ownedprovinces         = { 1484 1486 1492 1493 2989 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 3876 3877 3878 3879 3880 }
  controlledprovinces    = { 1484 1486 1492 1493 2989 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 3876 3877 3878 3879 3880 }

  techapps               = { 1010 1020 66500 66510 78100 1170 1270 1890 2720 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 54001 } # 穆罕默德 查希尔 
  headofgovernment       = { type = 9 id = 54002 } # 穆罕默德 哈希姆 
  foreignminister        = { type = 9 id = 54003 } # 哈吉 法伊兹 穆罕默德 齐克里亚 
  armamentminister       = { type = 9 id = 54004 } # 阿卜杜勒 马吉德 扎布利 
  ministerofsecurity     = { type = 9 id = 54005 } # 穆罕默德 哈希姆 
  ministerofintelligence = { type = 9 id = 54006 } # 沙阿 马哈茂德 加齐 
  chiefofstaff           = { type = 9 id = 54007 } # 穆罕默德 达乌德 
  chiefofarmy            = { type = 9 id = 54008 } # 穆罕默德 达乌德 
  chiefofnavy            = { type = 9 id = 54009 } # 穆罕默德 查希尔 
  chiefofair             = { type = 9 id = 54010 } # 穆罕默德 达乌德 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 10000 id = 1 }
    name     = "阿富汗近卫军 "
    location = 1486
    division = {
      id             = { type = 10000 id = 11 }
      name           = "皇家警备队 "
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 2 }
      name           = "费拉曼民兵 "
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 10000 id = 3 }
      name           = "剀斯米民兵师 "
      type           = militia
      model          = 1
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10000 id = 4 }
    name     = "阿富汗第2军 "
    location = 1486
    division = {
      id             = { type = 10000 id = 5 }
      name           = "先知民兵师 "
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 6 }
      name           = "海尔特民兵师 "
      type           = cavalry
      model          = 1
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10000 id = 7 }
    name     = "阿富汗第3军 "
    location = 1493
    division = {
      id             = { type = 10000 id = 8 }
      name           = "贾拉拉巴德民兵师 "
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "坎大哈民兵师 "
      type           = militia
      model          = 1
      strength       = 100
    }
  }
}
