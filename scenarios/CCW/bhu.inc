##############################
# Country definition for BHU #
##############################

country = {
  tag                = BHU
  puppet             = ENG
  control            = ENG
  capital            = 1455 # 廷布（不丹）
  manpower           = 1
  research_mod           = 1.1
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1455 2675 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }

  techapps               = { 1010 7430 7510 1020 1890 2720 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 74001 } # 吉格梅 旺楚克 
  headofgovernment       = { type = 9 id = 74002 } # 索南 托布盖 道尔吉 
  foreignminister        = { type = 9 id = 74003 } # 索南 托布盖 道尔吉 
  armamentminister       = { type = 9 id = 74004 } # 艾哈迈德 阿卡兹 
  ministerofsecurity     = { type = 9 id = 74005 } # 大平等王 
  ministerofintelligence = { type = 9 id = 74006 } # 雷吉纳尔德 B 史蒂文斯 
  chiefofstaff           = { type = 9 id = 74007 } # 纳姆加尔 巴哈杜尔 
  chiefofarmy            = { type = 9 id = 74008 } # 菲利普 托泽伊 
  chiefofnavy            = { type = 9 id = 74009 } # 汤米 古尔德 
  chiefofair             = { type = 9 id = 74010 } # 尼基 巴尔 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 16000 id = 1 }
    name     = "不丹皇家陆军第1军 "
    location = 1455
    division = {
      id             = { type = 16000 id = 2 }
      name           = "皇家警卫师 "
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 16000 id = 3 }
      name           = "第2近卫师 "
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}
