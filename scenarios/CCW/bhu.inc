##############################
# Country definition for BHU #
##############################

country = {
  tag                = BHU
  puppet             = ENG
  control            = ENG
  capital            = 1455 # ͢����������
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
  headofstate            = { type = 9 id = 74001 } # ����÷ ������ 
  headofgovernment       = { type = 9 id = 74002 } # ���� �в��� ������ 
  foreignminister        = { type = 9 id = 74003 } # ���� �в��� ������ 
  armamentminister       = { type = 9 id = 74004 } # �������� ������ 
  ministerofsecurity     = { type = 9 id = 74005 } # ��ƽ���� 
  ministerofintelligence = { type = 9 id = 74006 } # �׼��ɶ��� B ʷ����˹ 
  chiefofstaff           = { type = 9 id = 74007 } # ��ķ�Ӷ� �͹��Ŷ� 
  chiefofarmy            = { type = 9 id = 74008 } # ������ ������ 
  chiefofnavy            = { type = 9 id = 74009 } # ���� �Ŷ��� 
  chiefofair             = { type = 9 id = 74010 } # ��� �Ͷ� 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 16000 id = 1 }
    name     = "�����ʼ�½����1�� "
    location = 1455
    division = {
      id             = { type = 16000 id = 2 }
      name           = "�ʼҾ���ʦ "
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 16000 id = 3 }
      name           = "��2����ʦ "
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}
