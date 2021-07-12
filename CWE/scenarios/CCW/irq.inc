##############################
# Country definition for IRQ #
##############################
province = {
  id = 1823 # 巴士拉
  anti_air = 2
}
province = { id = 1864 anti_air = 1 } # 摩苏尔
province = { id = 1866 anti_air = 2 } # 巴格达

#####################
# Country main data #
#####################

country = {
  tag                = IRQ
  puppet             = ENG
  control            = ENG
  capital            = 1866 # 巴格达
  extra_tc           = 5
  manpower           = 15
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 1000
  supplies       = 500
  money          = 10
  transports     = 16
  escorts        = 3

  diplomacy = {
    relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }

  nationalprovinces      = { 1790 1791 1806 1823 1824 1825 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  ownedprovinces         = { 1790 1791 1806 1823 1824 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  controlledprovinces    = { 1790 1791 1806 1823 1824 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }

  techapps               = { 5050 1010 7410 7510 66500 66510 66520 1020 1030 1040 1050 1170 1180 1890 1900 2800 2720 1910 2810 5310 5180 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 91001 } # 加齐一世 伊本 费萨尔 
  headofgovernment       = { type = 9 id = 91002 } # 亚辛 帕夏 阿尔 哈希米 
  foreignminister        = { type = 9 id = 91003 } # 努里 阿斯 赛义德 
  armamentminister       = { type = 9 id = 91004 } # 加齐一世 伊本 费萨尔 
  ministerofsecurity     = { type = 9 id = 91005 } # 阿里 阿布恩 侯赛因 
  ministerofintelligence = { type = 9 id = 91006 } # 亚辛 帕夏 阿尔 哈希米 
  chiefofstaff           = { type = 9 id = 91007 } # 贝克尔 西德奇 
  chiefofarmy            = { type = 9 id = 91008 } # 弗雷德里克 G 皮克 
  chiefofnavy            = { type = 9 id = 91009 } # A R H 奈 
  chiefofair             = { type = 9 id = 91010 } # 阿里 本 贾瓦德 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 22500 id = 3 }
    name     = "伊拉克皇家近卫军 "
    location = 1866
    division = {
      id             = { type = 22500 id = 4 }
      name           = "第1步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 5 }
      name           = "第2步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 6 }
      name           = "第3步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 7 }
      name           = "第4步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 8 }
      name           = "第1摩步师 "
      type           = motorized
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 22500 id = 1 }
    name     = "伊拉克皇家空军第1联队 "
    location = 1866
    base     = 1866
    division = {
      id             = { type = 22500 id = 2 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 0
      strength       = 30
    }
  }
}
