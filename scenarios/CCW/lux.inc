##############################
# Country definition for LUX #
##############################

country = {
  tag                = LUX
  capital            = 71 # ¬ɭ��
  extra_tc           = 5
  manpower           = 30
  research_mod           = 1.2
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }

  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5010 5020 1010 7510 66500 66510 66540 66520 66530 6560 6030 6110 6120 6130 6140 4120 4010 1020 1030 1040 1050 1170 1190 1180 1890 1900 1910 2810 2800 2720 2280 2290 2300 2540 2420 2360 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 66001 } # ������ 
  headofgovernment       = { type = 9 id = 66002 } # Լɪ�� ���� 
  foreignminister        = { type = 9 id = 66003 } # Լɪ�� ���� 
  armamentminister       = { type = 9 id = 66004 } # Ƥ���� ���� 
  ministerofsecurity     = { type = 9 id = 66005 } # ŵ���� ���� 
  ministerofintelligence = { type = 9 id = 66006 } # �����˹ ���� 
  chiefofstaff           = { type = 9 id = 66007 } # Ƥ���� ���� 
  chiefofarmy            = { type = 9 id = 66008 } # ���׶� ˹���� 
  chiefofnavy            = { type = 9 id = 66009 } # ���׶� ˹���� 
  chiefofair             = { type = 9 id = 66010 } # �����˹ �ϵ���ϣ 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 27500 id = 1 }
    name     = "¬ɭ��½����I�� "
    location = 71
    division = {
      id             = { type = 27500 id = 2 }
      name           = "��1����ʦ "
      type           = motorized
      strength       = 30
    }
  }
}
