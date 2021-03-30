##############################
# Country definition for COS #
##############################
province = { id = 540 anti_air = 1 } # ʥ��������˹����ӣ�

#####################
# Country main data #
#####################

country = {
  tag                = COS
  capital            = 540 # ʥ��������˹����ӣ�
  manpower           = 5
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 50
  escorts        = 6

  diplomacy = {
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 4021 4022 540 }
  ownedprovinces         = { 4021 4022 540 }
  controlledprovinces    = { 4021 4022 540 }

  techapps               = { 5180 1010 8010 8020 7430 7510 2280 2290 1020 1030 1040 1050 1890 2720 1170 1180 1900 2800 2810 1910 2300 5310 5010 5050 66500 66510 66520 66530 66540 78100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 5
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 47037 } # �ذ¶��� Ƥ���� �׹���˹�� 
  headofgovernment       = { type = 9 id = 47045 } # �ذ¶��� Ƥ���� �׹���˹�� 
  foreignminister        = { type = 9 id = 47061 } # ������ ����˹�� ������ 
  armamentminister       = { type = 9 id = 47004 } # ������ ����˹�� ������ 
  ministerofsecurity     = { type = 9 id = 47005 } # ά���� ���ɷ����� ������˹ 
  ministerofintelligence = { type = 9 id = 47006 } # �Ѵ���� ��ŵ�� 
  chiefofstaff           = { type = 9 id = 47007 } # �Ѵ���� ��ŵ�� 
  chiefofarmy            = { type = 9 id = 47008 } # �Ѵ���� ��ŵ�� 
  chiefofnavy            = { type = 9 id = 47009 } # �޲��� ����˹ ������ŵ 
  chiefofair             = { type = 9 id = 47010 } # �� ���ɶ��� ��Ī�� 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 25000 id = 60 }
    name     = "��˹����ӵ�1�� "
    location = 540
    division = {
      id             = { type = 25000 id = 6000 }
      name           = "��1������ "
      type           = infantry
      model          = 5
      extra          = artillery
      strength       = 100
    }
  }
}