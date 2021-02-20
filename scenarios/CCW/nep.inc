##############################
# Country definition for NEP #
##############################

country = {
  tag                = NEP
  puppet             = ENG
  control            = ENG
  capital            = 1473 # �ӵM�����Ჴ?��
  extra_tc           = 5
  manpower           = 1
  research_mod           = 1.15
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
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1473 3864 3865 }
  ownedprovinces         = { 1473 3864 3865 }
  controlledprovinces    = { 1473 3864 3865 }

  techapps               = { 1010 7430 7510 1890 2720 1020 5310 5180 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 75001 } # ���ﲼ�� 
  headofgovernment       = { type = 9 id = 75002 } # �ִ� ���� 
  foreignminister        = { type = 9 id = 75003 } # ��ɳ�� ���� 
  armamentminister       = { type = 9 id = 75004 } # Ī�� ���� 
  ministerofsecurity     = { type = 9 id = 75005 } # �ִ� ���� 
  ministerofintelligence = { type = 9 id = 75006 } # �ͱȶ� ���� 
  chiefofstaff           = { type = 9 id = 75007 } # �ִ� ���� 
  chiefofarmy            = { type = 9 id = 75008 } # ������ ���� 
  chiefofnavy            = { type = 9 id = 75009 } # ³���� ���� 
  chiefofair             = { type = 9 id = 75010 } # ���� ���� 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 31500 id = 1 }
    name     = "�Ჴ���ʼҵ�1�� "
    location = 1473
    division = {
      id             = { type = 31500 id = 2 }
      name           = "�ʼҵ�1����ʦ "
      type           = infantry
    }
    division = {
      id             = { type = 31500 id = 3 }
      name           = "�ʼҵ�2����ʦ "
      type           = infantry
    }
  }
}