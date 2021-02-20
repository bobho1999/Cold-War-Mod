##############################
# Country definition for IRE #
##############################
province = {
  id = 30 # ������
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = IRE
  capital            = 30 # ������
  extra_tc           = 5
  manpower           = 110
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 30
  escorts        = 5

  diplomacy = {
    relation = { tag = ARG value = 20 }
    relation = { tag = AST value = 75 }
    relation = { tag = AUS value = 10 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BRA value = 20 }
    relation = { tag = CAN value = 75 }
    relation = { tag = ENG value = 25 }
    relation = { tag = ETH value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 15 }
    relation = { tag = HOL value = 75 }
    relation = { tag = HUN value = 25 }
    relation = { tag = ITA value = 20 }
    relation = { tag = LUX value = 75 }
    relation = { tag = MEX value = 30 }
    relation = { tag = NZL value = 75 }
    relation = { tag = POR value = 25 }
    relation = { tag = SAF value = 80 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }

  nationalprovinces      = { 24 25 26 27 28 29 30 3017 3018 }
  ownedprovinces         = { 24 25 26 27 30 3017 3018 }
  controlledprovinces    = { 24 25 26 27 30 3017 3018 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5670 1010 2280 2290 2420 2540 6010 6020 6030 6040 6050 6100 8010 8020 8150 8390 8530 7420 7510 1020 1030 1040 1050 1170 1180 1270 1280 1890 1900 1910 2810 2800 2720 5310 5010 5800 5110 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 25001 } # ���ɶ� �Ϳ��� 
  headofgovernment       = { type = 9 id = 25002 } # ���ɵ� ������ 
  foreignminister        = { type = 9 id = 25003 } # ���ɵ� ������ 
  armamentminister       = { type = 9 id = 25004 } # Ф�� ��ϵ� 
  ministerofsecurity     = { type = 9 id = 25005 } # ������� J �������� 
  ministerofintelligence = { type = 9 id = 25006 } # �������� ���� 
  chiefofstaff           = { type = 9 id = 25007 } # M J ��˹���� 
  chiefofarmy            = { type = 9 id = 25008 } # ���ɶ� �Ϳ��� 
  chiefofnavy            = { type = 9 id = 25009 } # H T ���� 
  chiefofair             = { type = 9 id = 25010 } # P A �¶���ϣ 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 21500 id = 1 }
    name     = "����������ǹ�� "
    location = 30
    division = {
      id             = { type = 21500 id = 2 }
      name           = "��1/2/3/4/5����ǹ�� "
      type           = infantry
      strength       = 50
      max_strength   = 50
    }
  }

  navalunit = {
    id       = { type = 21500 id = 5 }
    name     = "���������͹�������I���� "
    location = 30
    base     = 30
    division = {
      id             = { type = 21500 id = 7 }
      name           = "��1���佢��� "
      type           = transport
      model          = 0
    }
  }
}