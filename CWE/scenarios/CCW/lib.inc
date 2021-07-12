##############################
# Country definition for LIB #
##############################
province = {
  id = 992 # ����ά��
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  puppet             = USA
  control            = USA
  capital            = 992 # ����ά��
  extra_tc           = 5
  manpower           = 7
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 10
  escorts        = 1

  diplomacy = {
    relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }

  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }

  techapps               = { 1010 7430 7510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 69001 } # ������ J �Ϳ��� 
  headofgovernment       = { type = 9 id = 69002 } # ������ J �Ϳ��� 
  foreignminister        = { type = 9 id = 69003 } # ������˹ L ����ɭ 
  armamentminister       = { type = 9 id = 69004 } # ���׵���� K ���ɭ 
  ministerofsecurity     = { type = 9 id = 69005 } # ���� R ����÷˹ 
  ministerofintelligence = { type = 9 id = 69006 } # ���� M ³��ѷ 
  chiefofstaff           = { type = 9 id = 69007 } # ������ �´�ά˹ 
  chiefofarmy            = { type = 9 id = 69008 } # ���� ά���� 
  chiefofnavy            = { type = 9 id = 69009 } # �׼��ɶ��� ������ 
  chiefofair             = { type = 9 id = 69010 } # �� ���� �� 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "�������ǵ�1�� "
    location = 992
    division = {
      id             = { type = 25000 id = 2 }
      name           = "���͹�������1ʦ "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 25500 id = 3 }
      name           = "���͹�������2ʦ "
      type           = infantry
      strength       = 100
    }
  }
}