##############################
# Country definition for INO #
##############################
province = {
  id = 1632 # ãôË®
}

#####################
# Country main data #
#####################

country = {
  tag                = INO
  capital            = 1631 # ÈÕÈÇ
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 1000
  money          = 20

  nationalprovinces      = { 3744 3745 1355 3749 1356 1357 3746 3747 1359 1358 3750 1354 1628 1636 3751 1629 1630 1631 1632 1633 1634 3748 1657 1639 3759 3760 1663 1660 1659 1661 1656 1655 1654 1653 1651 3758 1652 3757 1640 3753 1643 1642 3754 1645 1648 1650 1649 1641 3755 3756 1637 1638 1635 1674 1673 1664 1665 }
  ownedprovinces         = { 3744 3745 3749 1356 1357 3746 3747 1359 3750 1354 3751 1629 1630 1631 1632 1633 1634 }
  controlledprovinces    = { 3744 3745 3749 1356 1357 3746 3747 1359 3750 1354 3751 1629 1630 1631 1632 1633 1634 }

  techapps               = { 78100 1010 1020 1030 1040 5310 5010 5180 66500 66510 66520 66530 66540 1890 1050 6570 6300 14140 14150 14160 14170 2720 }

  policy = {
    democratic        = 5
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 6 id = 577011 } # °¬¹þÂõµÂ ËÕ¼ÓÅµ 
  headofgovernment       = { type = 6 id = 577014 } # ÄÂº±Ä¬µÂ ¹þËþ 

  landdivision = { dormant = yes id = { type = 40500 id = 33 } name = "ÈÕÈÇÊØ‚ä?"  type = infantry model = 4 extra = engineer brigade_model = 2 locked = yes } 
}
