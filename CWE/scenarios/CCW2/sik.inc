##############################
# Country definition for SIK #
##############################

country = {
  tag                = SIK
  capital            = 1432 # ���磨������
  dissent            = 20
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  SpyInfo                = { country = "SIK" NumberOfSpies = 10 }

  nationalprovinces      = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 2965 2962 2957 }
  ownedprovinces         = { 2983 3478 3480 1432 3464 2984 1421 }
  controlledprovinces    = { 2983 3478 3480 1432 3464 2984 1421 }

  techapps               = { 1010 7810 78100 1020 66500 66510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 72001 } # �������Ὥ 
  headofgovernment       = { type = 9 id = 72002 } # �������� 
  foreignminister        = { type = 9 id = 72003 } # �������Ὥ 
  armamentminister       = { type = 9 id = 72004 } # ���ȶ��� ����ŵ�� 
  ministerofsecurity     = { type = 9 id = 72005 } # ��ϣ�� 
  ministerofintelligence = { type = 9 id = 72006 } # ά���� ����ŵ�� 
  chiefofstaff           = { type = 9 id = 72007 } # �������Ὥ 
  chiefofarmy            = { type = 9 id = 72008 } # �������Ὥ 
  chiefofnavy            = { type = 9 id = 72009 } # ����� 
  chiefofair             = { type = 9 id = 72010 } # �˵� �¶���� 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 30951 id = 1 }
    name     = "��ͻ��1�� "
    location = 1432
    division = {
      id             = { type = 30954 id = 1 }
      name           = "��ͻ��һʦ "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 30954 id = 2 }
      name           = "��ͻ�ڶ�ʦ "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 30954 id = 3 }
      name           = "��ͻ����ʦ "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 30954 id = 4 }
      name           = "��е��1ʦ "
      type           = infantry
      model          = 22
      extra          = artillery
      brigade_model  = 6
    }
    division = {
      id             = { type = 30954 id = 5 }
      name           = "��е��2ʦ "
      type           = infantry
      model          = 22
      extra          = artillery
      brigade_model  = 6
    }
  }
}