##############################
# Country definition for LAO #
##############################

country = {
  tag                = LAO
  intrinsic_gov_type = paternal_autocrat
  capital            = 1329 # �f��
  manpower           = 50
  research_mod           = 1
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  nationalprovinces      = { 1329 1332 1336 1306 3713 3714 3715 3716 }
  ownedprovinces         = { 1329 1332 1336 1306 3713 3714 3715 3716 }
  controlledprovinces    = { 1329 1332 1336 1306 3713 3714 3715 3716 }

  techapps               = { 7810 5310 5010 78100 1010 1020 66500 66510 66520 66530 66540 14140 14150 6570 6300 1030 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 7
    freedom           = 8
    free_market       = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 540047 } # ���ſ�ð 
  headofgovernment       = { type = 9 id = 540018 } # ����� ���������� 
  foreignminister        = { type = 9 id = 540048 } # �շ�Ŭ�� 
  armamentminister       = { type = 9 id = 540051 } # �������_������
  chiefofstaff           = { type = 9 id = 540049 } # �շ�Ŭ�� 
  chiefofarmy            = { type = 9 id = 540050 } # �շ�Ŭ�� 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_self-movement"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 61100 id = 3 }
    name     = "弇���һ��"
    location = 1329
    division = {
      id             = { type = 61100 id = 4 }
      name           = "弇��Γ��"
      type           = militia
      model          = 4
    }
  }
}
