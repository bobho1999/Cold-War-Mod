##############################
# Country definition for CAN #
##############################
province = {
  id = 541 # �¸绪
  anti_air = 3
}
province = {
  id = 566 # �񼪶���
}
province = {
  id = 569 # ���Ხ
  anti_air = 1
}
province = {
  id = 579 # ��������˹
  anti_air = 1
}
province = {
  id = 581 # ʥԼ��
  anti_air = 2
}
province = {
  id = 585 # ��������
  anti_air = 2
}
province = {
  id = 586 # �����˳�
  anti_air = 4
}
province = {
  id = 588 # ��̫��
  anti_air = 3
}
province = {
  id = 589 # ���׶�
  anti_air = 1
}
province = {
  id = 797 # ��������
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = CAN
  capital            = 588 # ��̫��
  manpower           = 30
  research_mod           = 1.1
  peacetime_ic_mod       = 0.6
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 35
  escorts        = 3

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 5 }

  nationalprovinces      = { 1909 3972 3973 3974 3975 3976 3977 3978 3979 3981 3982 3983 3984 3985 3986 541 552 554 555 556 557 558 559 560 561 563 564 565 566 567 568 569 570 571 572 573 574 578 579 580 581 584 585 586 587 588 589 590 591 794 795 796 797 798 799 575 576 }
  ownedprovinces         = { 1909 3972 3973 3974 3975 3976 3977 3978 3979 3981 3982 3983 3984 3985 3986 541 552 554 555 556 557 558 559 560 561 563 564 565 566 567 568 569 570 571 572 573 574 578 579 580 581 584 585 586 587 588 589 590 591 794 795 796 797 798 799 }
  controlledprovinces    = { 1909 3972 3973 3974 3975 3976 3977 3978 3979 3981 3982 3983 3984 3985 3986 541 552 554 555 556 557 558 559 560 561 563 564 565 566 567 568 569 570 571 572 573 574 578 579 580 581 584 585 586 587 588 589 590 591 794 795 796 797 798 799 }

  techapps               = { 5050 5080 5170 5190 5110 5200 5180 5660 5670 5310 5010 1010 2280 2290 2610 2420 2540 2010 3550 3010 4120 4010 6010 6020 6040 6050 6500 9010 9020 9030 8010 8020 8030 8150 8160 8200 8390 8440 8530 7430 7510 66500 66510 66520 66530 66540 6060 6070 1020 1030 1040 1050 1170 1190 1180 1200 1410 1420 1430 1440 1540 1550 1270 1280 1290 1300 1890 1900 1910 2810 2800 2720 1760 1770 1780 5800 5680 5690 5550 5220 5410 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 8
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 45132 } # ��˹¡���� �¹�˹��˹ 
  headofgovernment       = { type = 9 id = 45002 } # ����� �� 
  foreignminister        = { type = 9 id = 45003 } # ����� �� 
  armamentminister       = { type = 9 id = 45054 } # ������˹ S ������ 
  ministerofsecurity     = { type = 9 id = 45069 } # ���� W ˹�ٷ�˹ 
  ministerofintelligence = { type = 9 id = 45087 } # ������ ����ɭ 
  chiefofstaff           = { type = 9 id = 45100 } # ���� �������� 
  chiefofarmy            = { type = 9 id = 45109 } # ���� �������� 
  chiefofnavy            = { type = 9 id = 45009 } # ���� ���˹ 
  chiefofair             = { type = 9 id = 45010 } # ���� �������� 
  nationalidentity       = "policy_economy_state-monopoly"
  socialpolicy           = "policy_social_Puritanism-liberalism"
  nationalculture        = "policy_political_republicanism"
  dormant_ministers      = { 45128 45001 45129 45130 45036 45043 45037 45045 45049 45004 45005 }

  landunit = {
    id       = { type = 20000 id = 1 }
    name     = "���ô�ʼ�½����I�� "
    location = 588
    division = {
      id             = { type = 20000 id = 2 }
      name           = "��1����ʦ "
      type           = motorized
      model          = 0
      strength       = 50
      experience     = 100
    }
  }

  navalunit = {
    id       = { type = 20000 id = 500 }
    name     = "���ô�ʼҺ������佢�� "
    location = 579
    base     = 579
    division = {
      id             = { type = 30053 id = 501 }
      name           = "�ձ�Ů�ʺ� "
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 502 }
      name           = "����Ů���� "
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 503 }
      name           = "Ӣ��Ů���� "
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 504 }
      name           = "���ô�Ů���� "
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 505 }
      name           = "����˹Ů�ʺ� "
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 506 }
      name           = "����Ů���� "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 20000 id = 7 }
    name     = "���ô�ʼҺ�����I���� "
    location = 579
    base     = 579
    division = {
      id             = { type = 20000 id = 8 }
      name           = "��1���𽢱�� "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      strength       = 100
    }
  }
}