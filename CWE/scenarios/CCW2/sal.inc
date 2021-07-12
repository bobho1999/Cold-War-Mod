##############################
# Country definition for SAL #
##############################

country = {
  tag                = SAL
  capital            = 759 # ʥ�����߶ࣨ�����߶ࣩ
  extra_tc           = 5
  manpower           = 65
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 5
  escorts        = 1

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 2360 2280 2290 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 77001 } # ������������ŵ ������˹ ������˹ 
  headofgovernment       = { type = 9 id = 77002 } # ������������ŵ ������˹ ������˹ 
  foreignminister        = { type = 9 id = 77003 } # �׸�� ���ܶ� ����Լ 
  armamentminister       = { type = 9 id = 77004 } # �������� ��÷ ������ 
  ministerofsecurity     = { type = 9 id = 77005 } # �Ƶ¶� ����˹��ŵ ������ 
  ministerofintelligence = { type = 9 id = 77006 } # ��˹�� A �������˹ 
  chiefofstaff           = { type = 9 id = 77007 } # ������ A Ī���� 
  chiefofarmy            = { type = 9 id = 77008 } # ������������ŵ ������˹ ������˹ 
  chiefofnavy            = { type = 9 id = 77009 } # �Ͷ� �޶���� ɣ��˹ 
  chiefofair             = { type = 9 id = 77010 } # �ಮ�� ������ 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 21600 id = 70 }
    name     = "�����߶��1�� "
    location = 759
    division = {
      id             = { type = 21600 id = 7000 }
      name           = "��1����ʦ "
      type           = infantry
      extra          = artillery
      strength       = 40
    }
  }
}