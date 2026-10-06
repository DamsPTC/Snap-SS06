/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108418d2c; end: 108418e0f; +[SCR2TrendingTopicList descriptor] */

void FUN_108418d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c458,
                        &PTR____CFConstantStringClassReference_110ed73d8,&PTR_DAT_11325aad0,
                        &PTR_DAT_11325ab28,2,0x18,0x1c);
    puRam000000011372b810 = puVar1;
  }
  return;
}



/* Entry: 108418e10; end: 108418e1b;  */

bool FUN_108418e10(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 108418e1c; end: 108418e97;  */

undefined * FUN_108418e1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b820 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed7418,
                        &UNK_10df2f554,&UNK_10df2f598,8,FUN_108418e98,0);
    do {
      if (puRam000000011372b820 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b820;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b820,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b820 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b820;
}



/* Entry: 108418e98; end: 108418ea3;  */

bool FUN_108418e98(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 108418ea4; end: 108418f0b; +[SCR2GeoPoint descriptor] */

void FUN_108418ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c570,
                        &PTR____CFConstantStringClassReference_110dd68b8,&PTR_DAT_11325acd0,
                        &PTR_s_latitude_11325ad08,2,0x18,0x1c);
    puRam000000011372b828 = puVar1;
  }
  return;
}



/* Entry: 108418f0c; end: 108418f73; +[SCR2GeoLocation descriptor] */

void FUN_108418f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c5c0,
                        &PTR____CFConstantStringClassReference_110e04498,&PTR_DAT_11325acd0,
                        &PTR_s_latitude_11325af48,5,0x30,0x1c);
    puRam000000011372b830 = puVar1;
  }
  return;
}



/* Entry: 108418f74; end: 108418fdb; +[SCR2GeoPolygon descriptor] */

void FUN_108418f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c610,
                        &PTR____CFConstantStringClassReference_110dd6938,&PTR_DAT_11325acd0,
                        &PTR_s_id_p_11325ad48,2,0x18,0x1c);
    puRam000000011372b838 = puVar1;
  }
  return;
}



/* Entry: 108418fdc; end: 108419043; +[SCR2GeoCircle descriptor] */

void FUN_108418fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c660,
                        &PTR____CFConstantStringClassReference_110dd68f8,&PTR_DAT_11325acd0,
                        &PTR_DAT_11325ad88,2,0x18,0x1c);
    puRam000000011372b840 = puVar1;
  }
  return;
}



/* Entry: 108419044; end: 1084190cf; +[SCR2GeoFence descriptor] */

undefined * FUN_108419044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c6b0,
                        &PTR____CFConstantStringClassReference_110ed7438,&PTR_DAT_11325acd0,
                        &PTR_s_geoPolygon_11325adc8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372b848 = puVar1;
  }
  return puRam000000011372b848;
}



/* Entry: 1084190d0; end: 108419137; +[SCR2GeoAddress descriptor] */

void FUN_1084190d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c700,
                        &PTR____CFConstantStringClassReference_110ed7458,&PTR_DAT_11325acd0,
                        &PTR_s_country_11325afe8,0xc,0x68,0x1c);
    puRam000000011372b850 = puVar1;
  }
  return;
}



/* Entry: 108419138; end: 10841919f; +[SCR2GeoBoundingBox descriptor] */

void FUN_108419138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c750,
                        &PTR____CFConstantStringClassReference_110ed7478,&PTR_DAT_11325acd0,
                        &PTR_DAT_11325ae08,2,0x18,0x1c);
    puRam000000011372b858 = puVar1;
  }
  return;
}



/* Entry: 1084191a0; end: 108419207; +[SCR2OpeningHours descriptor] */

void FUN_1084191a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c8b8,
                        &PTR____CFConstantStringClassReference_110ed7498,&PTR_DAT_11325acd0,
                        &PTR_DAT_11325ace8,1,0x10,0x1c);
    puRam000000011372b860 = puVar1;
  }
  return;
}



/* Entry: 108419208; end: 10841928b; +[SCR2OpeningHours_HourMinute descriptor] */

undefined * FUN_108419208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c8e0,
                        &PTR____CFConstantStringClassReference_110ed74b8,&PTR_DAT_11325acd0,
                        &PTR_s_hour_11325ae48,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372b868 = puVar1;
  }
  return puRam000000011372b868;
}



/* Entry: 10841928c; end: 10841930f; +[SCR2OpeningHours_TimeRange descriptor] */

undefined * FUN_10841928c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c908,
                        &PTR____CFConstantStringClassReference_110ed74d8,&PTR_DAT_11325acd0,
                        &PTR_s_start_11325ae88,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372b870 = puVar1;
  }
  return puRam000000011372b870;
}



/* Entry: 108419310; end: 108419393; +[SCR2OpeningHours_DayHours descriptor] */

undefined * FUN_108419310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c930,
                        &PTR____CFConstantStringClassReference_110ed74f8,&PTR_DAT_11325acd0,
                        &PTR_s_day_11325aec8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372b878 = puVar1;
  }
  return puRam000000011372b878;
}



/* Entry: 108419394; end: 10841940f; +[SCR2PlaceInfo descriptor] */

undefined * FUN_108419394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c840,
                        &PTR____CFConstantStringClassReference_110ea5838,&PTR_DAT_11325acd0,
                        &PTR_DAT_11325b168,0x1b,0xc0,0x1c);
    func_0x00010c2289e0();
    puRam000000011372b880 = puVar1;
  }
  return puRam000000011372b880;
}



/* Entry: 108419410; end: 108419477; +[SCR2GeoRegion descriptor] */

void FUN_108419410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c890,
                        &PTR____CFConstantStringClassReference_110ed7518,&PTR_DAT_11325acd0,
                        &PTR_DAT_11325af08,2,0x18,0x1c);
    puRam000000011372b888 = puVar1;
  }
  return;
}



/* Entry: 108419478; end: 1084194df; +[SCR2PlaceNames descriptor] */

void FUN_108419478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9c9d0,
                        &PTR____CFConstantStringClassReference_110ed7538,&PTR_DAT_11325b4c8,
                        &PTR_DAT_11325b560,5,0x30,0x1c);
    puRam000000011372b890 = puVar1;
  }
  return;
}



/* Entry: 1084194e0; end: 108419547; +[SCR2PlaceFlags descriptor] */

void FUN_1084194e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ca20,
                        &PTR____CFConstantStringClassReference_110ed7558,&PTR_DAT_11325b4c8,
                        &PTR_DAT_11325b600,6,4,0x1c);
    puRam000000011372b898 = puVar1;
  }
  return;
}



/* Entry: 108419548; end: 1084195af; +[SCR2PlaceStats descriptor] */

void FUN_108419548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b8a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ca70,
                        &PTR____CFConstantStringClassReference_110ed7578,&PTR_DAT_11325b4c8,
                        &PTR_DAT_11325b4e0,2,0xc,0x1c);
    puRam000000011372b8a0 = puVar1;
  }
  return;
}



/* Entry: 1084195b0; end: 108419617; +[SCR2FoursquareVenueTips descriptor] */

void FUN_1084195b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b8a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9cac0,
                        &PTR____CFConstantStringClassReference_110ed7598,&PTR_DAT_11325b4c8,
                        &PTR_DAT_11325b7a0,9,0x48,0x1c);
    puRam000000011372b8a8 = puVar1;
  }
  return;
}



/* Entry: 108419618; end: 10841967f; +[SCR2SalientTerm descriptor] */

void FUN_108419618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b8b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9cb38,
                        &PTR____CFConstantStringClassReference_110ed75b8,&PTR_DAT_11325b4c8,
                        &PTR_DAT_11325b6c0,7,0x38,0x1c);
    puRam000000011372b8b0 = puVar1;
  }
  return;
}



/* Entry: 108419680; end: 108419703; +[SCR2SalientTerm_TermCountPair descriptor] */

undefined * FUN_108419680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b8b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9cb60,
                        &PTR____CFConstantStringClassReference_110ed75d8,&PTR_DAT_11325b4c8,
                        &PTR_DAT_11325b520,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372b8b8 = puVar1;
  }
  return puRam000000011372b8b8;
}



/* Entry: 108419704; end: 10841985b; -[SCSearchScrollViewDismissalGestureController handleGesture:] */

void FUN_108419704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  uVar3 = param_1;
  uVar4 = param_2;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107c318f8();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c252440();
    if (lVar2 - 3U < 2) {
      lVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5);
      _objc_release(lVar2);
      func_0x00010be935e0(param_1,param_2,uVar3,uVar4,param_3);
    }
    else if (lVar2 == 2) {
      func_0x00010bf08ae0(param_1,param_2,lVar1);
    }
    else if (lVar2 == 1) {
      func_0x00010c1f7b20(lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10841985c; end: 1084199b3; -[SCSearchScrollViewDismissalGestureController gestureRecognizerShouldBegin:] */

undefined8
FUN_10841985c(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_5);
    uVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5);
    dVar5 = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c318f8();
    _objc_release(uVar2);
    uVar4 = 0;
    if ((uVar2 != 0) && ((int)uVar3 != 0)) {
      uVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
      if ((ABS(param_1) < ABS(param_2)) && (0.0 < param_2)) {
        func_0x00010bf4cdc0(uVar2);
        uVar4 = 0x10000000000000;
        if (2.2250738585072014e-308 <= dVar5) {
          uVar4 = 0;
        }
        else {
          func_0x00010c26a020(uVar2);
          *(undefined8 *)(param_3 + 8) = uVar4;
          uVar4 = 1;
        }
      }
      _objc_release(uVar2);
    }
    _objc_release(param_5);
  }
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 1084199b4; end: 1084199bb; -[SCSearchScrollViewDismissalGestureController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1084199b4(void)

{
  return 1;
}



/* Entry: 1084199bc; end: 108419b93; -[SCSearchScrollViewDismissalGestureController _resetOrDismissWithView:translation:velocity:] */

void FUN_1084199bc(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_7);
  if ((0.30000001192092896 < param_2 / *(double *)(param_5 + 8)) || (500.0 < param_4)) {
    param_5 = param_5 + 0x10;
    _objc_loadWeakRetained(param_5);
    func_0x00010bfc18e0();
    _objc_release(param_5);
  }
  else {
    _objc_initWeak(auStack_48,param_5);
    _objc_initWeak(auStack_50,param_7);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108419b94;
    puStack_78 = &UNK_110a481f0;
    _objc_copyWeak(auStack_70,auStack_48);
    _objc_copyWeak(auStack_68,auStack_50);
    uStack_58 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uStack_60 = *(undefined8 *)PTR__CGPointZero_110347540;
    _objc_copyWeak(auStack_a8,auStack_48);
    _objc_copyWeak(auStack_a0,auStack_50);
    uStack_98 = 0;
    func_0x00010c27ac60(0x3fb99999a0000000,puVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 108419b94; end: 108419c43;  */

void FUN_108419b94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdceda0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                      lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108419c44; end: 108419c4b; -[SCSearchScrollViewDismissalGestureController _applyTranslationForView:translation:] */

void FUN_108419c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_applyTranslation__11259fc60);
  return;
}



/* Entry: 108419c4c; end: 108419cb3; -[SCSearchScrollViewDismissalGestureController _finishAnimation:didDismiss:] */

void FUN_108419c4c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  func_0x00010c1f7b20(param_3,param_2,1);
  if (param_4 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfc18c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108419cb4; end: 108419ccb; -[SCSearchScrollViewDismissalGestureController delegate] */

void FUN_108419cb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108419ccc; end: 108419cd7; -[SCSearchScrollViewDismissalGestureController setDelegate:] */

void FUN_108419ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108419cd8; end: 108419cdf; -[SCSearchScrollViewDismissalGestureController .cxx_destruct] */

void FUN_108419cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 108419ce0; end: 108419d0f; -[SCSearchNoResultCollectionViewSection setNoResultViewModel:] */

void FUN_108419ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108419d10; end: 108419d8f; -[SCSearchNoResultCollectionViewSection reuseCellClassesByIdentifiers] */

undefined * FUN_108419d10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ed7698;
  puVar1 = PTR_PTR_1126d9510;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 108419d90; end: 108419d97; -[SCSearchNoResultCollectionViewSection numberOfCellsInSection] */

undefined8 FUN_108419d90(void)

{
  return 1;
}



/* Entry: 108419d98; end: 108419eaf; -[SCSearchNoResultCollectionViewSection cellForItemAtIndexInSection:] */

void FUN_108419d98(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d9510;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c0d1320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d9518;
  _objc_opt_class(PTR_PTR_1126d9518);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    puVar3 = PTR_PTR_1126d9518;
    _objc_opt_new(PTR_PTR_1126d9518);
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c2226c0(puVar3);
    }
    func_0x00010c1c9200(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108419eb0; end: 108419ebb; -[SCSearchNoResultCollectionViewSection sizeForItemAtIndexInSection:withWidth:] */

void FUN_108419eb0(void)

{
  return;
}



/* Entry: 108419ebc; end: 108419ec3; -[SCSearchNoResultCollectionViewSection sectionUpdateModel] */

undefined8 FUN_108419ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108419ec4; end: 108419ecb; -[SCSearchNoResultCollectionViewSection setSectionUpdateModel:] */

void FUN_108419ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108419ecc; end: 108419ee3; -[SCSearchNoResultCollectionViewSection delegate] */

void FUN_108419ecc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108419ee4; end: 108419eef; -[SCSearchNoResultCollectionViewSection setDelegate:] */

void FUN_108419ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108419ef0; end: 108419ef7; -[SCSearchNoResultCollectionViewSection dataLoadingStatus] */

undefined8 FUN_108419ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108419ef8; end: 108419eff; -[SCSearchNoResultCollectionViewSection setDataLoadingStatus:] */

void FUN_108419ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108419f00; end: 108419f07; -[SCSearchNoResultCollectionViewSection noResultViewModel] */

undefined8 FUN_108419f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108419f08; end: 108419f3f; -[SCSearchNoResultCollectionViewSection .cxx_destruct] */

void FUN_108419f08(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108419f40; end: 10841a063; -[SCSearchNoResultView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108419f40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11277495c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ea8fd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea8fd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(ppuVar3);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10841a064; end: 10841a107; -[SCSearchNoResultView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10841a064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fc750;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11277495c;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  func_0x00010b81635c();
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 10841a108; end: 10841a223; -[SCSearchNoResultView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10841a108(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112774960;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10841a20c;
    }
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277495c));
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_10841a20c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841a224; end: 10841a233; -[SCSearchNoResultView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10841a224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774960);
}



/* Entry: 10841a234; end: 10841a273; -[SCSearchNoResultView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10841a234(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112774960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277495c,0);
  return;
}



/* Entry: 10841a274; end: 10841a57b; -[EphemeralMedia setMentionedUserIds:usernames:sources:textRanges:] */

void FUN_10841a274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar4 = &PTR___NSConcreteGlobalBlock_110a48348;
  func_0x000100504554(param_3);
  puVar5 = PTR_PTR_1126ae740;
  func_0x00010bf09f00(PTR_PTR_1126ae740);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010c067ec0(*(undefined8 *)(lStack_128 + lVar7 * 8));
        func_0x00010befc800(puVar5);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1);
  }
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c0d3c80(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a60();
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0d3c80(param_4);
  lVar1 = param_1;
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a80();
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6960();
  _objc_release(lVar6);
  _objc_release(lVar1);
  uVar3 = param_6;
  func_0x00010c0d3c80(param_6);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c69a0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10841a57c;
  lStack_150 = param_5;
  uStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c3094c(ppuVar4,auStack_158,auStack_160);
  if ((int)ppuVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10841a57c; end: 10841a583;  */

void FUN_10841a57c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3094c(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10841a584; end: 10841a6bf; -[EphemeralMedia setGenAIFeaturedStoryInfo:] */

void FUN_10841a584(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfbea40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d2bb8;
    _objc_opt_new(PTR_PTR_1126d2bb8);
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1a2580(puVar4,param_2,param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2560();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10841a6c0; end: 10841a6c7; -[EphemeralMedia setTopics:] */

void FUN_10841a6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c217930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTopicStickers_storyTopics__112663870,param_3,0);
  return;
}



/* Entry: 10841a6c8; end: 10841a7ff; -[EphemeralMedia setTopicStickers:storyTopics:] */

void FUN_10841a6c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    func_0x00010bea8a20(param_1,param_2,param_3);
  }
  lVar4 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010bf0cb20();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x00010bf0cb00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108e227f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (((lVar2 != 0) || (lVar2 = lVar4, func_0x00010bf529e0(), lVar2 != 0)) ||
     (lVar2 = lVar3, func_0x00010bf529e0(), lVar2 != 0)) {
    func_0x00010becf4e0(param_1,param_2,param_4,lVar4,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841a800; end: 10841aaab; -[EphemeralMedia _setTopicStickers:] */

void FUN_10841a800(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar6 = auStack_f0;
  uVar7 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar6,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar3 = PTR_PTR_1126d2b88;
        _objc_opt_new();
        puVar4 = PTR_PTR_1126d2b90;
        _objc_opt_new(PTR_PTR_1126d2b90);
        func_0x00010c217900(puVar3,param_2,puVar4);
        _objc_release(puVar4);
        uVar7 = uVar9;
        func_0x00010c275280(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c275640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2177e0();
        _objc_release(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar7);
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c275640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20ba20();
        _objc_release(puVar4);
        _objc_release(uVar9);
        func_0x00010befa120(puVar2,param_2,puVar3);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar6 = auStack_f0;
      uVar7 = 0x10;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar6,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c16afc0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  lVar1 = param_3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_3,param_2,lVar1);
  }
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d2b78;
  _objc_opt_new(PTR_PTR_1126d2b78);
  func_0x00010c1d0440();
  _objc_release(puVar3);
  func_0x00010c1e52c0(puVar2,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c16b3a0(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010bf4e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204aa0();
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10841aaac; end: 10841abd7; -[EphemeralMedia setSnapKitOAuthClientId:providedAppName:attachmentUrl:] */

void FUN_10841aaac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d2b78;
  _objc_opt_new(PTR_PTR_1126d2b78);
  func_0x00010c1d0440();
  _objc_release(param_3);
  func_0x00010c1e52c0(puVar2,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c16b3a0(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204aa0();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10841abd8; end: 10841b00b; -[EphemeralMedia setTappableElementsFromEditState:mediaAspectRatio:fullMediaContentBounds:lensTappableElements:stickerInjector:] */

void FUN_10841abd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_alloc_init();
  uVar2 = param_8;
  func_0x00010c2553e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76180(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_10);
  _objc_release(uVar2);
  uVar2 = param_8;
  func_0x00010bf308c0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76120(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(uVar2);
  uVar2 = param_8;
  func_0x00010bfaee40(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010be76140(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(uVar2);
  func_0x00010be76160(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_9);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_6;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) goto LAB_10841afe4;
    puVar6 = param_6;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf3d0e0();
    _objc_release(puVar6);
    _objc_release(puVar3);
    if ((int)puVar7 != 0xc) goto LAB_10841afe4;
    func_0x00010bf4e840(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_6;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212080();
  }
  else {
    puVar7 = PTR_PTR_1126cae88;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193ec0();
    puVar3 = puVar7;
    func_0x00010c247680(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6960();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar6 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar4);
    puVar3 = puVar6;
    func_0x00010bf44740(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf97e80(puVar3);
    puVar6 = puVar7;
    func_0x00010c247680(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf066e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19dc80();
    _objc_release(puVar4);
    _objc_release(puVar6);
    func_0x00010bea1fc0(param_6);
    puVar6 = param_6;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b2378;
      _objc_alloc_init(PTR_PTR_1126b2378);
      func_0x00010c183080(param_6);
      _objc_release(puVar4);
    }
    else {
      func_0x00010c183080(param_6);
    }
    _objc_release(puVar6);
    func_0x00010bf4e840(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_6;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212080();
    _objc_release(puVar6);
    _objc_release(param_6);
    param_6 = puVar7;
  }
  _objc_release(puVar3);
  _objc_release(param_6);
LAB_10841afe4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841b00c; end: 10841b18f;  */

void FUN_10841b00c(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c067ec0(param_2);
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c247680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf066e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c298ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1ac0();
    }
    else {
      if (param_3 != 1) {
LAB_10841b0d8:
        *param_4 = 1;
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c247680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf066e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c298ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c84a0();
    }
  }
  else if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c247680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf066e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c298ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d97e0();
  }
  else {
    if (param_3 != 3) goto LAB_10841b0d8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c247680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf066e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c298ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174220();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10841b190; end: 10841b203; -[EphemeralMedia _setAttachmentUrlWithTappableElements:] */

void FUN_10841b190(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be0da20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf0d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  else {
    func_0x00010c16b3c0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10841b204; end: 10841b3cb; -[EphemeralMedia _extractAttachmentUrlFromTappableElements:] */

void FUN_10841b204(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,
                  undefined8 param_10,undefined *param_11)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double unaff_d8;
  double dVar22;
  double unaff_d9;
  double unaff_d10;
  double dVar23;
  double unaff_d11;
  double dVar24;
  double unaff_d12;
  double unaff_d13;
  double dVar25;
  double unaff_d14;
  double dVar26;
  double unaff_d15;
  double dStack_510;
  double dStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  double dStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined1 *puStack_430;
  long lStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  undefined1 *puStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  long lStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  undefined *puStack_268;
  undefined1 auStack_260 [128];
  long lStack_1e0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar12 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  dVar25 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar15 = auStack_f0;
  lVar13 = 0x10;
  puVar3 = param_11;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    unaff_x27 = (undefined *)*puStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      puVar9 = puVar14;
      do {
        if ((undefined *)*puStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_11);
        }
        puVar18 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        puVar4 = puVar18;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf31ca0();
        puVar16 = PTR__OBJC_CLASS___NSURL_1126ae598;
        puVar14 = puVar9;
        if ((int)puVar5 == 1) {
          puVar5 = puVar18;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar16,param_10,puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar18;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            puVar4 = puVar18;
            goto LAB_10841b34c;
          }
        }
        else {
LAB_10841b34c:
          _objc_release(puVar4);
        }
        unaff_x28 = unaff_x28 + 1;
        puVar9 = puVar14;
      } while (puVar3 != unaff_x28);
      puVar15 = auStack_f0;
      lVar13 = 0x10;
      puVar3 = param_11;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10841b3cc;
    lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3b0 = (undefined1 *)puVar12;
    dStack_3a0 = dVar25;
    dStack_398 = param_2;
    dStack_390 = param_3;
    dStack_388 = param_4;
    dStack_380 = param_5;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar12);
    _objc_retain(puVar15);
    lStack_3a8 = lVar13;
    _objc_retain(lVar13);
    dVar25 = 0.0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    puVar7 = puVar15;
    puStack_3c0 = puVar15;
    func_0x00010bf52a60(puVar15,param_10,&uStack_330,auStack_260,0x10);
    if (puVar7 != (undefined1 *)0x0) {
      puVar15 = (undefined1 *)*plStack_320;
      puStack_3d0 = puVar15;
      do {
        puVar17 = (undefined1 *)0x0;
        puStack_3c8 = puVar7;
        do {
          if ((undefined1 *)*plStack_320 != puVar15) {
            _objc_enumerationMutation(puStack_3c0);
          }
          puVar14 = *(undefined **)(lStack_328 + (long)puVar17 * 8);
          puVar3 = puVar14;
          func_0x00010c081660();
          if (((ulong)puVar3 & 1) == 0) {
            lVar13 = lStack_3a8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar14;
            func_0x00010c0846e0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar13;
            func_0x00010c269860(lVar13,param_10,puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(lVar13);
            if (lVar8 != 0) {
              puVar3 = puVar14;
              puStack_3b8 = puVar17;
              func_0x00010c269880();
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 == (undefined *)0x0) {
                unaff_x27 = PTR_PTR_1126d91a8;
                _objc_alloc();
                func_0x00010c005f20(0);
                puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_268 = unaff_x27;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_10,&puStack_268,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
              }
              else {
                _objc_retain(puVar3);
                puVar9 = puVar3;
              }
              _objc_release(puVar3);
              dVar25 = 0.0;
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              lStack_368 = 0;
              uStack_370 = 0;
              uStack_358 = 0;
              plStack_360 = (long *)0x0;
              _objc_retain(puVar9);
              puVar3 = puVar9;
              func_0x00010bf52a60(puVar9,param_10,&uStack_370,auStack_2e8,0x10);
              if (puVar3 != (undefined *)0x0) {
                lVar13 = *plStack_360;
                do {
                  puVar16 = (undefined *)0x0;
                  do {
                    unaff_d15 = dVar25;
                    unaff_d14 = param_2;
                    if (*plStack_360 != lVar13) {
                      _objc_enumerationMutation(puVar9);
                      unaff_d15 = dVar25;
                      unaff_d14 = param_2;
                    }
                    uVar19 = *(undefined8 *)(lStack_368 + (long)puVar16 * 8);
                    func_0x00010c1281e0(puVar14);
                    unaff_d8 = unaff_d14;
                    dStack_378 = unaff_d15;
                    func_0x00010bf345e0(puVar14);
                    unaff_d9 = unaff_d15;
                    unaff_d10 = unaff_d8;
                    func_0x00010c23d0a0(uVar19);
                    unaff_d11 = unaff_d9;
                    unaff_d12 = unaff_d10;
                    func_0x00010bf345e0(uVar19);
                    unaff_d13 = unaff_d11;
                    func_0x00010c14e120(puVar14);
                    unaff_x27 = puVar14;
                    dVar25 = unaff_d13;
                    func_0x00010c141a80();
                    dStack_3e8 = dStack_388;
                    dStack_3e0 = dStack_380;
                    dStack_3f8 = dStack_398;
                    dStack_3f0 = dStack_390;
                    dStack_400 = dStack_3a0;
                    dVar21 = dStack_378;
                    param_2 = unaff_d14;
                    param_3 = unaff_d15;
                    param_4 = unaff_d8;
                    param_5 = unaff_d9;
                    param_6 = unaff_d10;
                    param_7 = unaff_d11;
                    param_8 = unaff_d12;
                    dStack_410 = unaff_d13;
                    dStack_408 = dVar25;
                    FUN_10841b844();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf52620(uVar19);
                    func_0x00010c1842e0(unaff_x27);
                    unaff_x28 = unaff_x27;
                    func_0x00010c23d0a0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2a5040();
                    dVar25 = dVar21;
                    if (dVar21 <= 0.0) {
LAB_10841b760:
                      _objc_release(unaff_x28);
                    }
                    else {
                      puVar4 = unaff_x27;
                      func_0x00010c23d0a0(unaff_x27);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bfe0640();
                      dVar25 = dVar21;
                      _objc_release(puVar4);
                      _objc_release(unaff_x28);
                      unaff_d8 = dVar21;
                      if (0.0 < dVar21) {
                        unaff_x28 = PTR_PTR_1126d2bc8;
                        func_0x00010c0cb140();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1695c0();
                        func_0x00010c161620(unaff_x28,param_10,lVar8);
                        lVar10 = lStack_3a8;
                        func_0x00010c269d40(lStack_3a8);
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = puVar14;
                        func_0x00010c0846e0(puVar14);
                        _objc_retainAutoreleasedReturnValue();
                        lVar11 = lVar10;
                        func_0x00010c269900(lVar10,param_10,puVar4);
                        func_0x00010c21acc0(unaff_x28,param_10,lVar11);
                        _objc_release(puVar4);
                        _objc_release(lVar10);
                        func_0x00010befa120(puStack_3b0,param_10,unaff_x28);
                        goto LAB_10841b760;
                      }
                    }
                    _objc_release(unaff_x27);
                    puVar16 = puVar16 + 1;
                  } while (puVar3 != puVar16);
                  puVar3 = puVar9;
                  func_0x00010bf52a60(puVar9,param_10,&uStack_370,auStack_2e8,0x10);
                } while (puVar3 != (undefined *)0x0);
              }
              _objc_release(puVar9);
              _objc_release(puVar9);
              puVar7 = puStack_3c8;
              puVar15 = puStack_3d0;
              puVar17 = puStack_3b8;
            }
            _objc_release(lVar8);
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar7);
        puVar7 = puStack_3c0;
        func_0x00010bf52a60(puStack_3c0,param_10,&uStack_330,auStack_260,0x10);
        lVar13 = 0;
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release(lStack_3a8);
    _objc_release(puStack_3c0);
    puVar7 = puStack_3b0;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
      return;
    }
    ___stack_chk_fail();
    dVar22 = dStack_3e0;
    dVar20 = dStack_3e8;
    dVar2 = dStack_400;
    dVar1 = dStack_408;
    dVar21 = dStack_410;
    pcStack_418 = FUN_10841b844;
    dStack_480 = unaff_d15;
    dStack_478 = unaff_d14;
    dStack_470 = unaff_d13;
    dStack_468 = unaff_d12;
    dStack_460 = unaff_d11;
    dStack_458 = unaff_d10;
    dStack_450 = unaff_d9;
    dStack_448 = unaff_d8;
    puStack_440 = unaff_x28;
    puStack_438 = unaff_x27;
    puStack_430 = puVar15;
    lStack_428 = lVar13;
    ppuStack_420 = &puStack_140;
    _CGRectIsEmpty(dStack_3f8,dStack_3f0,dStack_3e8,dStack_3e0);
    if ((((ulong)puVar7 & 1) == 0) && (dVar20 = dVar20 / dVar22, dVar20 != dVar2)) {
      param_2 = dVar2 * (param_2 / dVar20);
      param_4 = ((1.0 / dVar20 - 1.0 / dVar2) * -0.5 + (1.0 / dVar20) * param_4) / (1.0 / dVar2);
    }
    _CGAffineTransformMakeScale(&dStack_4b0,dVar21,dVar21);
    dVar20 = param_2 * dStack_4a0 + dVar25 * dStack_4b0;
    dVar24 = param_2 * dStack_498 + dVar25 * dStack_4a8;
    _CGAffineTransformMakeScale(&dStack_4b0,dVar20,dVar24);
    dVar23 = param_6 * dStack_4a0 + param_5 * dStack_4b0;
    dVar21 = param_6 * dStack_498 + param_5 * dStack_4a8;
    _CGAffineTransformMakeScale(&dStack_4b0,dVar20,dVar24);
    dVar25 = dStack_490 + param_8 * dStack_4a0 + param_7 * dStack_4b0;
    dVar26 = dStack_488 + param_8 * dStack_498 + param_7 * dStack_4a8;
    dStack_4d8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    dStack_4e0 = *(double *)PTR__CGAffineTransformIdentity_110347008;
    dStack_4c8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    dStack_4d0 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    dStack_4b8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    dStack_4c0 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    dStack_4b0 = dStack_4e0;
    dStack_4a8 = dStack_4d8;
    dStack_4a0 = dStack_4d0;
    dStack_498 = dStack_4c8;
    dStack_490 = dStack_4c0;
    dStack_488 = dStack_4b8;
    _CGAffineTransformTranslate(&dStack_4b0,param_3 * dVar2,param_4,&dStack_4e0);
    dStack_508 = dStack_4a8;
    dStack_510 = dStack_4b0;
    dStack_4f8 = dStack_498;
    dStack_500 = dStack_4a0;
    dStack_4e8 = dStack_488;
    dStack_4f0 = dStack_490;
    _CGAffineTransformRotate(&dStack_4e0,dVar1,&dStack_510);
    dStack_498 = dStack_4c8;
    dStack_4a0 = dStack_4d0;
    dStack_488 = dStack_4b8;
    dStack_490 = dStack_4c0;
    dStack_4a8 = dStack_4d8;
    dStack_4b0 = dStack_4e0;
    dVar22 = dVar2 * dVar20;
    dStack_508 = dStack_4d8;
    dStack_510 = dStack_4e0;
    dStack_4f8 = dStack_4c8;
    dStack_500 = dStack_4d0;
    dStack_4e8 = dStack_4b8;
    dStack_4f0 = dStack_4c0;
    _CGAffineTransformTranslate(&dStack_4e0,dVar22 * -0.5,dVar24 * -0.5,&dStack_510);
    dStack_498 = dStack_4c8;
    dStack_4a0 = dStack_4d0;
    dStack_488 = dStack_4b8;
    dStack_490 = dStack_4c0;
    dStack_4a8 = dStack_4d8;
    dStack_4b0 = dStack_4e0;
    dStack_508 = dStack_4d8;
    dStack_510 = dStack_4e0;
    dStack_4f8 = dStack_4c8;
    dStack_500 = dStack_4d0;
    dStack_4e8 = dStack_4b8;
    dStack_4f0 = dStack_4c0;
    _CGAffineTransformTranslate
              (&dStack_4e0,dVar2 * (dVar25 + dVar23 * -0.5),dVar26 + dVar21 * -0.5,&dStack_510);
    dStack_498 = dStack_4c8;
    dStack_4a0 = dStack_4d0;
    dStack_488 = dStack_4b8;
    dStack_490 = dStack_4c0;
    dStack_4a8 = dStack_4d8;
    dStack_4b0 = dStack_4e0;
    dStack_508 = dStack_4d8;
    dStack_510 = dStack_4e0;
    dStack_4f8 = dStack_4c8;
    dStack_500 = dStack_4d0;
    dStack_4e8 = dStack_4b8;
    dStack_4f0 = dStack_4c0;
    _CGAffineTransformScale(&dStack_4e0,dVar23 / dVar20,dVar21 / dVar24,&dStack_510);
    dStack_498 = dStack_4c8;
    dStack_4a0 = dStack_4d0;
    dStack_488 = dStack_4b8;
    dStack_490 = dStack_4c0;
    dStack_4a8 = dStack_4d8;
    dStack_4b0 = dStack_4e0;
    dVar20 = 0.0;
    uVar19 = 0;
    _CGRectApplyAffineTransform(0,0,dVar22,dVar24,&dStack_4e0);
    puVar14 = PTR_PTR_1126d2bd0;
    func_0x00010c0cb140(PTR_PTR_1126d2bd0);
    _objc_retainAutoreleasedReturnValue();
    dVar25 = dVar20;
    _CGRectGetMidX(dVar20,uVar19,dVar22,dVar24);
    puVar3 = puVar14;
    func_0x00010bf345e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227500(dVar25 / dVar2);
    _objc_release(puVar3);
    _CGRectGetMidY(dVar20,uVar19,dVar22,dVar24);
    puVar3 = puVar14;
    func_0x00010bf345e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2276e0(dVar20);
    _objc_release(puVar3);
    puVar3 = puVar14;
    func_0x00010c23d0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0(dVar23);
    _objc_release(puVar3);
    puVar3 = puVar14;
    func_0x00010c23d0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00(dVar21);
    _objc_release(puVar3);
    func_0x00010c1ee7a0(dVar1,puVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10841b3cc; end: 10841b843; -[EphemeralMedia _populateTappableElements:fromStickersState:mediaAspectRatio:fullMediaContentBounds:stickerInjector:] */

void FUN_10841b3cc(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,
                  undefined8 param_10,ulong param_11,long param_12,long param_13)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double unaff_d8;
  double dVar16;
  double unaff_d9;
  double unaff_d10;
  double dVar17;
  double unaff_d11;
  double dVar18;
  double unaff_d12;
  double unaff_d13;
  double dVar19;
  double unaff_d14;
  double dVar20;
  double unaff_d15;
  double dStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  double dStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  ulong uStack_280;
  long lStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [128];
  undefined *puStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_280 = param_11;
  dStack_270 = param_1;
  dStack_268 = param_2;
  dStack_260 = param_3;
  dStack_258 = param_4;
  dStack_250 = param_5;
  _objc_retain(param_11);
  _objc_retain(param_12);
  lStack_278 = param_13;
  _objc_retain(param_13);
  dVar19 = 0.0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lVar9 = param_12;
  lStack_290 = param_12;
  func_0x00010bf52a60(param_12,param_10,&uStack_200,auStack_130,0x10);
  if (lVar9 != 0) {
    param_12 = *plStack_1f0;
    lStack_2a0 = param_12;
    do {
      lVar11 = 0;
      lStack_298 = lVar9;
      do {
        if (*plStack_1f0 != param_12) {
          _objc_enumerationMutation(lStack_290);
        }
        puVar12 = *(undefined **)(lStack_1f8 + lVar11 * 8);
        puVar3 = puVar12;
        func_0x00010c081660();
        if (((ulong)puVar3 & 1) == 0) {
          lVar4 = lStack_278;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar12;
          func_0x00010c0846e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c269860(lVar4,param_10,puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(lVar4);
          if (lVar5 != 0) {
            puVar3 = puVar12;
            lStack_288 = lVar11;
            func_0x00010c269880();
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 == (undefined *)0x0) {
              unaff_x27 = PTR_PTR_1126d91a8;
              _objc_alloc();
              func_0x00010c005f20(0);
              puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_138 = unaff_x27;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_10,&puStack_138,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
            }
            else {
              _objc_retain(puVar3);
              puVar6 = puVar3;
            }
            _objc_release(puVar3);
            dVar19 = 0.0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            lStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            plStack_230 = (long *)0x0;
            _objc_retain(puVar6);
            puVar3 = puVar6;
            func_0x00010bf52a60(puVar6,param_10,&uStack_240,auStack_1b8,0x10);
            if (puVar3 != (undefined *)0x0) {
              lVar9 = *plStack_230;
              do {
                puVar10 = (undefined *)0x0;
                do {
                  unaff_d15 = dVar19;
                  unaff_d14 = param_2;
                  if (*plStack_230 != lVar9) {
                    _objc_enumerationMutation(puVar6);
                    unaff_d15 = dVar19;
                    unaff_d14 = param_2;
                  }
                  uVar13 = *(undefined8 *)(lStack_238 + (long)puVar10 * 8);
                  func_0x00010c1281e0(puVar12);
                  unaff_d8 = unaff_d14;
                  dStack_248 = unaff_d15;
                  func_0x00010bf345e0(puVar12);
                  unaff_d9 = unaff_d15;
                  unaff_d10 = unaff_d8;
                  func_0x00010c23d0a0(uVar13);
                  unaff_d11 = unaff_d9;
                  unaff_d12 = unaff_d10;
                  func_0x00010bf345e0(uVar13);
                  unaff_d13 = unaff_d11;
                  func_0x00010c14e120(puVar12);
                  unaff_x27 = puVar12;
                  dVar19 = unaff_d13;
                  func_0x00010c141a80();
                  dStack_2b8 = dStack_258;
                  dStack_2b0 = dStack_250;
                  dStack_2c8 = dStack_268;
                  dStack_2c0 = dStack_260;
                  dStack_2d0 = dStack_270;
                  dVar15 = dStack_248;
                  param_2 = unaff_d14;
                  param_3 = unaff_d15;
                  param_4 = unaff_d8;
                  param_5 = unaff_d9;
                  param_6 = unaff_d10;
                  param_7 = unaff_d11;
                  param_8 = unaff_d12;
                  dStack_2e0 = unaff_d13;
                  dStack_2d8 = dVar19;
                  FUN_10841b844();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf52620(uVar13);
                  func_0x00010c1842e0(unaff_x27);
                  unaff_x28 = unaff_x27;
                  func_0x00010c23d0a0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2a5040();
                  dVar19 = dVar15;
                  if (dVar15 <= 0.0) {
LAB_10841b760:
                    _objc_release(unaff_x28);
                  }
                  else {
                    puVar7 = unaff_x27;
                    func_0x00010c23d0a0(unaff_x27);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfe0640();
                    dVar19 = dVar15;
                    _objc_release(puVar7);
                    _objc_release(unaff_x28);
                    unaff_d8 = dVar15;
                    if (0.0 < dVar15) {
                      unaff_x28 = PTR_PTR_1126d2bc8;
                      func_0x00010c0cb140();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1695c0();
                      func_0x00010c161620(unaff_x28,param_10,lVar5);
                      lVar11 = lStack_278;
                      func_0x00010c269d40(lStack_278);
                      _objc_retainAutoreleasedReturnValue();
                      puVar7 = puVar12;
                      func_0x00010c0846e0(puVar12);
                      _objc_retainAutoreleasedReturnValue();
                      lVar4 = lVar11;
                      func_0x00010c269900(lVar11,param_10,puVar7);
                      func_0x00010c21acc0(unaff_x28,param_10,lVar4);
                      _objc_release(puVar7);
                      _objc_release(lVar11);
                      func_0x00010befa120(uStack_280,param_10,unaff_x28);
                      goto LAB_10841b760;
                    }
                  }
                  _objc_release(unaff_x27);
                  puVar10 = puVar10 + 1;
                } while (puVar3 != puVar10);
                puVar3 = puVar6;
                func_0x00010bf52a60(puVar6,param_10,&uStack_240,auStack_1b8,0x10);
              } while (puVar3 != (undefined *)0x0);
            }
            _objc_release(puVar6);
            _objc_release(puVar6);
            lVar9 = lStack_298;
            param_12 = lStack_2a0;
            lVar11 = lStack_288;
          }
          _objc_release(lVar5);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar9);
      lVar9 = lStack_290;
      func_0x00010bf52a60(lStack_290,param_10,&uStack_200,auStack_130,0x10);
      param_13 = 0;
    } while (lVar9 != 0);
  }
  _objc_release(lStack_278);
  _objc_release(lStack_290);
  uVar8 = uStack_280;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  dVar16 = dStack_2b0;
  dVar14 = dStack_2b8;
  dVar2 = dStack_2d0;
  dVar1 = dStack_2d8;
  dVar15 = dStack_2e0;
  pcStack_2e8 = FUN_10841b844;
  dStack_350 = unaff_d15;
  dStack_348 = unaff_d14;
  dStack_340 = unaff_d13;
  dStack_338 = unaff_d12;
  dStack_330 = unaff_d11;
  dStack_328 = unaff_d10;
  dStack_320 = unaff_d9;
  dStack_318 = unaff_d8;
  puStack_310 = unaff_x28;
  puStack_308 = unaff_x27;
  lStack_300 = param_12;
  lStack_2f8 = param_13;
  puStack_2f0 = &stack0xfffffffffffffff0;
  _CGRectIsEmpty(dStack_2c8,dStack_2c0,dStack_2b8,dStack_2b0);
  if (((uVar8 & 1) == 0) && (dVar14 = dVar14 / dVar16, dVar14 != dVar2)) {
    param_2 = dVar2 * (param_2 / dVar14);
    param_4 = ((1.0 / dVar14 - 1.0 / dVar2) * -0.5 + (1.0 / dVar14) * param_4) / (1.0 / dVar2);
  }
  _CGAffineTransformMakeScale(&dStack_380,dVar15,dVar15);
  dVar14 = param_2 * dStack_370 + dVar19 * dStack_380;
  dVar18 = param_2 * dStack_368 + dVar19 * dStack_378;
  _CGAffineTransformMakeScale(&dStack_380,dVar14,dVar18);
  dVar17 = param_6 * dStack_370 + param_5 * dStack_380;
  dVar15 = param_6 * dStack_368 + param_5 * dStack_378;
  _CGAffineTransformMakeScale(&dStack_380,dVar14,dVar18);
  dVar19 = dStack_360 + param_8 * dStack_370 + param_7 * dStack_380;
  dVar20 = dStack_358 + param_8 * dStack_368 + param_7 * dStack_378;
  uStack_3a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dStack_3b0 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  uStack_398 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_3a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_388 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_390 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_380 = dStack_3b0;
  dStack_378 = (double)uStack_3a8;
  dStack_370 = (double)uStack_3a0;
  dStack_368 = (double)uStack_398;
  dStack_360 = (double)uStack_390;
  dStack_358 = (double)uStack_388;
  _CGAffineTransformTranslate(&dStack_380,param_3 * dVar2,param_4,&dStack_3b0);
  uStack_3d8 = dStack_378;
  dStack_3e0 = dStack_380;
  uStack_3c8 = dStack_368;
  uStack_3d0 = dStack_370;
  uStack_3b8 = dStack_358;
  uStack_3c0 = dStack_360;
  _CGAffineTransformRotate(&dStack_3b0,dVar1,&dStack_3e0);
  dStack_368 = (double)uStack_398;
  dStack_370 = (double)uStack_3a0;
  dStack_358 = (double)uStack_388;
  dStack_360 = (double)uStack_390;
  dStack_378 = (double)uStack_3a8;
  dStack_380 = dStack_3b0;
  dVar16 = dVar2 * dVar14;
  uStack_3d8 = uStack_3a8;
  dStack_3e0 = dStack_3b0;
  uStack_3c8 = uStack_398;
  uStack_3d0 = uStack_3a0;
  uStack_3b8 = uStack_388;
  uStack_3c0 = uStack_390;
  _CGAffineTransformTranslate(&dStack_3b0,dVar16 * -0.5,dVar18 * -0.5,&dStack_3e0);
  dStack_368 = (double)uStack_398;
  dStack_370 = (double)uStack_3a0;
  dStack_358 = (double)uStack_388;
  dStack_360 = (double)uStack_390;
  dStack_378 = (double)uStack_3a8;
  dStack_380 = dStack_3b0;
  uStack_3d8 = uStack_3a8;
  dStack_3e0 = dStack_3b0;
  uStack_3c8 = uStack_398;
  uStack_3d0 = uStack_3a0;
  uStack_3b8 = uStack_388;
  uStack_3c0 = uStack_390;
  _CGAffineTransformTranslate
            (&dStack_3b0,dVar2 * (dVar19 + dVar17 * -0.5),dVar20 + dVar15 * -0.5,&dStack_3e0);
  dStack_368 = (double)uStack_398;
  dStack_370 = (double)uStack_3a0;
  dStack_358 = (double)uStack_388;
  dStack_360 = (double)uStack_390;
  dStack_378 = (double)uStack_3a8;
  dStack_380 = dStack_3b0;
  uStack_3d8 = uStack_3a8;
  dStack_3e0 = dStack_3b0;
  uStack_3c8 = uStack_398;
  uStack_3d0 = uStack_3a0;
  uStack_3b8 = uStack_388;
  uStack_3c0 = uStack_390;
  _CGAffineTransformScale(&dStack_3b0,dVar17 / dVar14,dVar15 / dVar18,&dStack_3e0);
  dStack_368 = (double)uStack_398;
  dStack_370 = (double)uStack_3a0;
  dStack_358 = (double)uStack_388;
  dStack_360 = (double)uStack_390;
  dStack_378 = (double)uStack_3a8;
  dStack_380 = dStack_3b0;
  dVar14 = 0.0;
  uVar13 = 0;
  _CGRectApplyAffineTransform(0,0,dVar16,dVar18,&dStack_3b0);
  puVar3 = PTR_PTR_1126d2bd0;
  func_0x00010c0cb140(PTR_PTR_1126d2bd0);
  _objc_retainAutoreleasedReturnValue();
  dVar19 = dVar14;
  _CGRectGetMidX(dVar14,uVar13,dVar16,dVar18);
  puVar12 = puVar3;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227500(dVar19 / dVar2);
  _objc_release(puVar12);
  _CGRectGetMidY(dVar14,uVar13,dVar16,dVar18);
  puVar12 = puVar3;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2276e0(dVar14);
  _objc_release(puVar12);
  puVar12 = puVar3;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0(dVar17);
  _objc_release(puVar12);
  puVar12 = puVar3;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00(dVar15);
  _objc_release(puVar12);
  func_0x00010c1ee7a0(dVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10841b844; end: 10841bbb3;  */

void FUN_10841b844(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,ulong param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _CGRectIsEmpty(in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030);
  if (((param_9 & 1) == 0) &&
     (in_stack_00000028 = in_stack_00000028 / in_stack_00000030,
     in_stack_00000028 != in_stack_00000010)) {
    param_2 = in_stack_00000010 * (param_2 / in_stack_00000028);
    param_4 = ((1.0 / in_stack_00000028 - 1.0 / in_stack_00000010) * -0.5 +
              (1.0 / in_stack_00000028) * param_4) / (1.0 / in_stack_00000010);
  }
  _CGAffineTransformMakeScale(&dStack_a0,in_stack_00000000,in_stack_00000000);
  dVar8 = param_2 * dStack_90 + param_1 * dStack_a0;
  dVar7 = param_2 * dStack_88 + param_1 * dStack_98;
  _CGAffineTransformMakeScale(&dStack_a0,dVar8,dVar7);
  dVar6 = param_6 * dStack_90 + param_5 * dStack_a0;
  dVar3 = param_6 * dStack_88 + param_5 * dStack_98;
  _CGAffineTransformMakeScale(&dStack_a0,dVar8,dVar7);
  dVar9 = dStack_80 + param_8 * dStack_90 + param_7 * dStack_a0;
  dVar10 = dStack_78 + param_8 * dStack_88 + param_7 * dStack_98;
  uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dStack_d0 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_a0 = dStack_d0;
  dStack_98 = (double)uStack_c8;
  dStack_90 = (double)uStack_c0;
  dStack_88 = (double)uStack_b8;
  dStack_80 = (double)uStack_b0;
  dStack_78 = (double)uStack_a8;
  _CGAffineTransformTranslate(&dStack_a0,param_3 * in_stack_00000010,param_4,&dStack_d0);
  uStack_f8 = dStack_98;
  dStack_100 = dStack_a0;
  uStack_e8 = dStack_88;
  uStack_f0 = dStack_90;
  uStack_d8 = dStack_78;
  uStack_e0 = dStack_80;
  _CGAffineTransformRotate(&dStack_d0,in_stack_00000008,&dStack_100);
  dStack_88 = (double)uStack_b8;
  dStack_90 = (double)uStack_c0;
  dStack_78 = (double)uStack_a8;
  dStack_80 = (double)uStack_b0;
  dStack_98 = (double)uStack_c8;
  dStack_a0 = dStack_d0;
  dVar5 = in_stack_00000010 * dVar8;
  uStack_f8 = uStack_c8;
  dStack_100 = dStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  _CGAffineTransformTranslate(&dStack_d0,dVar5 * -0.5,dVar7 * -0.5,&dStack_100);
  dStack_88 = (double)uStack_b8;
  dStack_90 = (double)uStack_c0;
  dStack_78 = (double)uStack_a8;
  dStack_80 = (double)uStack_b0;
  dStack_98 = (double)uStack_c8;
  dStack_a0 = dStack_d0;
  uStack_f8 = uStack_c8;
  dStack_100 = dStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  _CGAffineTransformTranslate
            (&dStack_d0,in_stack_00000010 * (dVar9 + dVar6 * -0.5),dVar10 + dVar3 * -0.5,&dStack_100
            );
  dStack_88 = (double)uStack_b8;
  dStack_90 = (double)uStack_c0;
  dStack_78 = (double)uStack_a8;
  dStack_80 = (double)uStack_b0;
  dStack_98 = (double)uStack_c8;
  dStack_a0 = dStack_d0;
  uStack_f8 = uStack_c8;
  dStack_100 = dStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  _CGAffineTransformScale(&dStack_d0,dVar6 / dVar8,dVar3 / dVar7,&dStack_100);
  dStack_88 = (double)uStack_b8;
  dStack_90 = (double)uStack_c0;
  dStack_78 = (double)uStack_a8;
  dStack_80 = (double)uStack_b0;
  dStack_98 = (double)uStack_c8;
  dStack_a0 = dStack_d0;
  dVar9 = 0.0;
  uVar4 = 0;
  _CGRectApplyAffineTransform(0,0,dVar5,dVar7,&dStack_d0);
  puVar1 = PTR_PTR_1126d2bd0;
  func_0x00010c0cb140(PTR_PTR_1126d2bd0);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = dVar9;
  _CGRectGetMidX(dVar9,uVar4,dVar5,dVar7);
  puVar2 = puVar1;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227500(dVar8 / in_stack_00000010);
  _objc_release(puVar2);
  _CGRectGetMidY(dVar9,uVar4,dVar5,dVar7);
  puVar2 = puVar1;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2276e0(dVar9);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0(dVar6);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00(dVar3);
  _objc_release(puVar2);
  func_0x00010c1ee7a0(in_stack_00000008,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10841bbb4; end: 10841be2b; -[EphemeralMedia _populateTappableElements:fromLensTappableElements:mediaAspectRatio:fullMediaContentBounds:] */

void FUN_10841bbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 *param_9)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 *puVar15;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar16;
  undefined *unaff_x25;
  code *unaff_x26;
  undefined *unaff_x27;
  undefined1 *unaff_x28;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [128];
  long lStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 *puStack_3d0;
  undefined *puStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined1 *puStack_390;
  undefined8 *puStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [128];
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  undefined *puStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_8;
  puVar10 = param_9;
  uVar16 = param_1;
  uVar21 = param_2;
  uVar22 = param_3;
  uVar23 = param_4;
  uStack_178 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_9;
  func_0x00010bf529e0();
  if (puVar1 != (undefined1 *)0x0) {
    uVar16 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    puStack_160 = (undefined8 *)0x0;
    _objc_retain(param_9);
    puVar15 = &uStack_170;
    puVar10 = auStack_130;
    puVar1 = param_9;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      unaff_x26 = (code *)*puStack_160;
      unaff_x27 = (undefined *)0x3ff0000000000000;
      do {
        unaff_x28 = (undefined1 *)0x0;
        do {
          unaff_d13 = uVar16;
          if ((code *)*puStack_160 != unaff_x26) {
            _objc_enumerationMutation(param_9);
          }
          unaff_x22 = *(undefined **)(lStack_168 + (long)unaff_x28 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010bf06840();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x23;
          func_0x00010c23d0a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a5040();
          puVar8 = unaff_x23;
          unaff_d14 = unaff_d13;
          func_0x00010c23d0a0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          unaff_d15 = unaff_d14;
          _objc_release(puVar8);
          _objc_release(puVar2);
          puVar2 = unaff_x23;
          func_0x00010bf345e0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2be880();
          unaff_x25 = unaff_x23;
          unaff_d8 = unaff_d15;
          func_0x00010bf345e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2beba0();
          uVar18 = unaff_d8;
          _objc_release(unaff_x25);
          _objc_release(puVar2);
          unaff_x24 = unaff_x23;
          func_0x00010c141a80();
          uStack_180 = uStack_178;
          param_5 = 0x3ff0000000000000;
          uStack_1b0 = 0x3ff0000000000000;
          uVar16 = unaff_d13;
          uVar21 = unaff_d14;
          uVar22 = unaff_d15;
          uVar23 = unaff_d8;
          uStack_1a8 = uVar18;
          uStack_1a0 = param_1;
          uStack_198 = param_2;
          uStack_190 = param_3;
          uStack_188 = param_4;
          FUN_10841b844();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1695c0(unaff_x22);
          _objc_release(unaff_x24);
          func_0x00010befa120(param_8);
          _objc_release(unaff_x23);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar1 != unaff_x28);
        puVar15 = &uStack_170;
        puVar10 = auStack_130;
        puVar1 = param_9;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_10841be2c;
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = uVar21;
  uStack_240 = unaff_d13;
  uStack_238 = param_1;
  uStack_230 = param_2;
  uStack_228 = param_3;
  uStack_220 = param_4;
  uStack_218 = unaff_d8;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  pcStack_200 = unaff_x26;
  puStack_1f8 = unaff_x25;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  uStack_1d8 = unaff_x21;
  puStack_1d0 = param_9;
  puStack_1c8 = param_8;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  _objc_retain(puVar10);
  dVar19 = 0.0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  puVar14 = &uStack_310;
  puVar1 = auStack_2d0;
  puVar3 = puVar10;
  func_0x00010bf52a60();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x24 = (undefined *)*puStack_300;
    unaff_d13 = 0xc2000000;
    unaff_x26 = FUN_10841bfec;
    unaff_x27 = &UNK_110a48368;
    do {
      unaff_x28 = (undefined1 *)0x0;
      do {
        if ((undefined *)*puStack_300 != unaff_x24) {
          _objc_enumerationMutation(puVar10);
        }
        unaff_x22 = *(undefined **)(lStack_308 + (long)unaff_x28 * 8);
        puVar8 = unaff_x22;
        func_0x00010c081660();
        if (((ulong)puVar8 & 1) == 0) {
          unaff_x23 = unaff_x22;
          func_0x00010c268400();
          _objc_retainAutoreleasedReturnValue();
          puStack_368 = puVar2;
          uStack_360 = 0xc2000000;
          pcStack_358 = FUN_10841bfec;
          puStack_350 = &UNK_110a48368;
          puStack_348 = unaff_x22;
          uStack_338 = uVar16;
          uStack_330 = uVar21;
          uStack_328 = uVar22;
          uStack_320 = uVar23;
          uStack_318 = param_5;
          _objc_retain(puVar15);
          puStack_340 = puVar15;
          func_0x00010bf97ce0(unaff_x23);
          _objc_release(unaff_x23);
          _objc_release(puStack_340);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar14 = &uStack_310;
      puVar1 = auStack_2d0;
      puVar3 = puVar10;
      func_0x00010bf52a60();
      unaff_x21 = 0;
      unaff_x25 = puVar2;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar4 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_10841bfec;
  lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_410 = unaff_d15;
  uStack_408 = unaff_d14;
  uStack_400 = unaff_d13;
  uStack_3f8 = uVar16;
  uStack_3f0 = uVar21;
  uStack_3e8 = uVar22;
  uStack_3e0 = uVar23;
  uStack_3d8 = param_5;
  puStack_3d0 = unaff_x28;
  puStack_3c8 = unaff_x27;
  pcStack_3c0 = unaff_x26;
  puStack_3b8 = unaff_x25;
  puStack_3b0 = unaff_x24;
  puStack_3a8 = unaff_x23;
  puStack_3a0 = unaff_x22;
  uStack_398 = unaff_x21;
  puStack_390 = puVar10;
  puStack_388 = puVar15;
  ppuStack_380 = &puStack_1c0;
  _objc_retain(param_7);
  _objc_retain(puVar14);
  lVar5 = puVar4[4];
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar5;
  puVar15 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar17;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar17 = lVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar17;
    func_0x00010c08fa60();
    _objc_release(lVar17);
    if (lVar5 != 0) {
      dVar19 = 0.0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      lStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      plStack_4d0 = (long *)0x0;
      _objc_retain(puVar14);
      puVar15 = &uStack_4e0;
      puVar1 = auStack_4a0;
      puVar7 = puVar14;
      func_0x00010bf52a60();
      if (puVar7 != (undefined8 *)0x0) {
        lVar17 = *plStack_4d0;
        do {
          puVar15 = (undefined8 *)0x0;
          do {
            dVar20 = dVar19;
            if (*plStack_4d0 != lVar17) {
              _objc_enumerationMutation(puVar14);
              dVar20 = dVar19;
            }
            uVar16 = *(undefined8 *)(lStack_4d8 + (long)puVar15 * 8);
            func_0x00010c1281e0(puVar4[4]);
            func_0x00010bf34840(puVar4[4]);
            func_0x00010bf348c0(puVar4[4]);
            func_0x00010c23d0a0(uVar16);
            func_0x00010bf345e0(uVar16);
            puVar8 = (undefined *)puVar4[4];
            func_0x00010c141a80();
            FUN_10841b844();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar8;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            dVar19 = dVar20;
            if (dVar20 <= 0.0) {
LAB_10841c2c0:
              _objc_release(puVar2);
            }
            else {
              puVar9 = puVar8;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe0640();
              dVar19 = dVar20;
              _objc_release(puVar9);
              _objc_release(puVar2);
              if (0.0 < dVar20) {
                puVar2 = PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(puVar2);
                puVar9 = puVar2;
                func_0x00010beedca0(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(puVar9);
                lVar5 = lVar6;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar2;
                func_0x00010beedca0(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(puVar9);
                func_0x00010befa120(puVar4[5]);
                _objc_release(lVar5);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(puVar8);
            puVar15 = (undefined8 *)((long)puVar15 + 1);
          } while (puVar7 != puVar15);
          puVar15 = &uStack_4e0;
          puVar1 = auStack_4a0;
          puVar7 = puVar14;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined8 *)0x0);
      }
      _objc_release(puVar14);
    }
  }
  _objc_release(lVar6);
  _objc_release(puVar14);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(puVar1);
  puVar10 = puVar1;
  func_0x00010c082fa0();
  if ((int)puVar10 != 0) {
    puVar10 = puVar1;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined1 *)0x0) {
      puVar3 = puVar10;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c08fa60();
      _objc_release(puVar11);
      if (puVar12 != (undefined1 *)0x0) {
        puVar2 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c128340(puVar10);
        puVar11 = puVar10;
        dVar20 = dVar19;
        uVar16 = uVar18;
        func_0x00010c128320(puVar10);
        FUN_10841b844(dVar19,uVar18,dVar20,uVar16,0x3ff0000000000000,0x3ff0000000000000,
                      0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a5040();
        if (dVar19 <= 0.0) {
          _objc_release(puVar12);
        }
        else {
          puVar13 = puVar11;
          func_0x00010c23d0a0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          _objc_release(puVar13);
          _objc_release(puVar12);
          if (0.0 < dVar19) {
            func_0x00010c1695c0(puVar2);
            func_0x00010c21acc0(puVar2);
            puVar8 = puVar2;
            func_0x00010beedca0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar8);
            puVar12 = puVar3;
            func_0x00010c297e20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar2;
            func_0x00010beedca0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar8);
            _objc_release(puVar12);
            func_0x00010befa120(puVar15);
          }
        }
        _objc_release(puVar11);
        _objc_release(puVar2);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar10);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 10841be2c; end: 10841bfeb; -[EphemeralMedia _populateTappableElements:fromCaptionsState:mediaAspectRatio:fullMediaContentBounds:] */

void FUN_10841be2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [128];
  long lStack_270;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  dVar19 = 0.0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puVar11 = &uStack_160;
  puVar12 = auStack_120;
  lVar18 = param_6;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar15 = *plStack_150;
    do {
      lVar17 = 0;
      do {
        if (*plStack_150 != lVar15) {
          _objc_enumerationMutation(param_6);
        }
        uVar13 = *(ulong *)(lStack_158 + lVar17 * 8);
        uVar1 = uVar13;
        func_0x00010c081660();
        if ((uVar1 & 1) == 0) {
          func_0x00010c268400();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_5);
          func_0x00010bf97ce0(uVar13);
          _objc_release(uVar13);
          _objc_release(param_5);
        }
        lVar17 = lVar17 + 1;
      } while (lVar18 != lVar17);
      puVar11 = &uStack_160;
      puVar12 = auStack_120;
      lVar18 = param_6;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(puVar11);
  lVar17 = *(long *)(param_5 + 0x20);
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  puVar14 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar17);
  if (lVar15 != 0) {
    lVar18 = lVar15;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar18;
    func_0x00010c08fa60();
    _objc_release(lVar18);
    if (lVar17 != 0) {
      dVar19 = 0.0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      _objc_retain(puVar11);
      puVar14 = &uStack_330;
      puVar12 = auStack_2f0;
      puVar2 = puVar11;
      func_0x00010bf52a60();
      if (puVar2 != (undefined8 *)0x0) {
        lVar18 = *plStack_320;
        do {
          puVar14 = (undefined8 *)0x0;
          do {
            dVar20 = dVar19;
            if (*plStack_320 != lVar18) {
              _objc_enumerationMutation(puVar11);
              dVar20 = dVar19;
            }
            uVar16 = *(undefined8 *)(lStack_328 + (long)puVar14 * 8);
            func_0x00010c1281e0(*(undefined8 *)(param_5 + 0x20));
            func_0x00010bf34840(*(undefined8 *)(param_5 + 0x20));
            func_0x00010bf348c0(*(undefined8 *)(param_5 + 0x20));
            func_0x00010c23d0a0(uVar16);
            func_0x00010bf345e0(uVar16);
            puVar3 = *(undefined **)(param_5 + 0x20);
            func_0x00010c141a80();
            FUN_10841b844();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            dVar19 = dVar20;
            if (dVar20 <= 0.0) {
LAB_10841c2c0:
              _objc_release(puVar4);
            }
            else {
              puVar5 = puVar3;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe0640();
              dVar19 = dVar20;
              _objc_release(puVar5);
              _objc_release(puVar4);
              if (0.0 < dVar20) {
                puVar4 = PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(puVar4);
                puVar5 = puVar4;
                func_0x00010beedca0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(puVar5);
                lVar17 = lVar15;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010beedca0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(puVar5);
                func_0x00010befa120(*(undefined8 *)(param_5 + 0x28));
                _objc_release(lVar17);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(puVar3);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar2 != puVar14);
          puVar14 = &uStack_330;
          puVar12 = auStack_2f0;
          puVar2 = puVar11;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined8 *)0x0);
      }
      _objc_release(puVar11);
    }
  }
  _objc_release(lVar15);
  _objc_release(puVar11);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  _objc_retain(puVar12);
  puVar6 = puVar12;
  func_0x00010c082fa0();
  if ((int)puVar6 != 0) {
    puVar6 = puVar12;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined1 *)0x0) {
      puVar7 = puVar6;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if (puVar9 != (undefined1 *)0x0) {
        puVar4 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c128340(puVar6);
        puVar8 = puVar6;
        dVar20 = dVar19;
        uVar16 = param_2;
        func_0x00010c128320(puVar6);
        FUN_10841b844(dVar19,param_2,dVar20,uVar16,0x3ff0000000000000,0x3ff0000000000000,
                      0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a5040();
        if (dVar19 <= 0.0) {
          _objc_release(puVar9);
        }
        else {
          puVar10 = puVar8;
          func_0x00010c23d0a0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          _objc_release(puVar10);
          _objc_release(puVar9);
          if (0.0 < dVar19) {
            func_0x00010c1695c0(puVar4);
            func_0x00010c21acc0(puVar4);
            puVar3 = puVar4;
            func_0x00010beedca0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar3);
            puVar9 = puVar7;
            func_0x00010c297e20(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010beedca0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar3);
            _objc_release(puVar9);
            func_0x00010befa120(puVar14);
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar4);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 10841bfec; end: 10841c367;  */

void FUN_10841bfec(double param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5,
                  undefined1 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  puVar13 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      param_1 = 0.0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      _objc_retain(param_5);
      puVar13 = &uStack_170;
      param_6 = auStack_130;
      lVar2 = param_5;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar1 = *plStack_160;
        do {
          lVar14 = 0;
          do {
            dVar16 = param_1;
            if (*plStack_160 != lVar1) {
              _objc_enumerationMutation(param_5);
              dVar16 = param_1;
            }
            uVar15 = *(undefined8 *)(lStack_168 + lVar14 * 8);
            func_0x00010c1281e0(*(undefined8 *)(param_3 + 0x20));
            func_0x00010bf34840(*(undefined8 *)(param_3 + 0x20));
            func_0x00010bf348c0(*(undefined8 *)(param_3 + 0x20));
            func_0x00010c23d0a0(uVar15);
            func_0x00010bf345e0(uVar15);
            puVar4 = *(undefined **)(param_3 + 0x20);
            func_0x00010c141a80();
            FUN_10841b844();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            param_1 = dVar16;
            if (dVar16 <= 0.0) {
LAB_10841c2c0:
              _objc_release(puVar5);
            }
            else {
              puVar6 = puVar4;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe0640();
              param_1 = dVar16;
              _objc_release(puVar6);
              _objc_release(puVar5);
              if (0.0 < dVar16) {
                puVar5 = PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(puVar5);
                puVar6 = puVar5;
                func_0x00010beedca0(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(puVar6);
                lVar7 = lVar3;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                func_0x00010beedca0(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(puVar6);
                func_0x00010befa120(*(undefined8 *)(param_3 + 0x28));
                _objc_release(lVar7);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(puVar4);
            lVar14 = lVar14 + 1;
          } while (lVar2 != lVar14);
          puVar13 = &uStack_170;
          param_6 = auStack_130;
          lVar2 = param_5;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(param_5);
    }
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(param_6);
  puVar8 = param_6;
  func_0x00010c082fa0();
  if ((int)puVar8 != 0) {
    puVar8 = param_6;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 != (undefined1 *)0x0) {
      puVar9 = puVar8;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c08fa60();
      _objc_release(puVar10);
      if (puVar11 != (undefined1 *)0x0) {
        puVar5 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c128340(puVar8);
        puVar10 = puVar8;
        dVar16 = param_1;
        uVar15 = param_2;
        func_0x00010c128320(puVar8);
        FUN_10841b844(param_1,param_2,dVar16,uVar15,0x3ff0000000000000,0x3ff0000000000000,
                      0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a5040();
        if (param_1 <= 0.0) {
          _objc_release(puVar11);
        }
        else {
          puVar12 = puVar10;
          func_0x00010c23d0a0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          _objc_release(puVar12);
          _objc_release(puVar11);
          if (0.0 < param_1) {
            func_0x00010c1695c0(puVar5);
            func_0x00010c21acc0(puVar5);
            puVar4 = puVar5;
            func_0x00010beedca0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar4);
            puVar11 = puVar9;
            func_0x00010c297e20(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar5;
            func_0x00010beedca0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar4);
            _objc_release(puVar11);
            func_0x00010befa120(puVar13);
          }
        }
        _objc_release(puVar10);
        _objc_release(puVar5);
      }
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 10841c368; end: 10841c5df; -[EphemeralMedia _populateTappableElements:fromFiltersState:mediaAspectRatio:fullMediaContentBounds:] */

void FUN_10841c368(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c082fa0();
  if ((int)lVar1 != 0) {
    lVar1 = param_6;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        puVar5 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c128340(lVar1);
        lVar3 = lVar1;
        dVar8 = param_1;
        uVar9 = param_2;
        func_0x00010c128320(lVar1);
        FUN_10841b844(param_1,param_2,dVar8,uVar9,0x3ff0000000000000,0x3ff0000000000000,
                      0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a5040();
        if (param_1 <= 0.0) {
          _objc_release(lVar4);
        }
        else {
          lVar6 = lVar3;
          func_0x00010c23d0a0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          _objc_release(lVar6);
          _objc_release(lVar4);
          if (0.0 < param_1) {
            func_0x00010c1695c0(puVar5,param_4,lVar3);
            func_0x00010c21acc0(puVar5,param_4,6);
            puVar7 = puVar5;
            func_0x00010beedca0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar7);
            lVar4 = lVar2;
            func_0x00010c297e20(lVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010beedca0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar7);
            _objc_release(lVar4);
            func_0x00010befa120(param_5,param_4,puVar5);
          }
        }
        _objc_release(lVar3);
        _objc_release(puVar5);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10841c5e0; end: 10841c7db; -[EphemeralMedia setCameosStickersIds:] */

void FUN_10841c5e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar3 = auStack_e8;
  puVar8 = (undefined *)0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126d9520;
        _objc_opt_new();
        func_0x00010c1a99c0();
        func_0x00010befa120(puVar2,param_2,puVar3);
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar3 = auStack_e8;
      puVar8 = (undefined *)0x10;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b2378;
    _objc_opt_new();
    func_0x00010c183080(param_1,param_2,puVar4);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c175ee0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126d2ba0;
  _objc_retain(puVar4);
  _objc_opt_new();
  puVar5 = puVar4;
  func_0x000109189420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = puVar5;
  func_0x00010c20d1a0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  puVar4 = puVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000109189420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c1aeb00(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      puVar7 = puVar8;
      func_0x00010c20d540(puVar2,param_2,puVar8);
      puVar4 = puVar2;
      func_0x00010c25a5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e17798;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_6);
        func_0x00010c20ddc0(puVar2,param_2,ppuVar6 == (undefined **)0x0);
        lVar1 = param_3;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          puVar4 = PTR_PTR_1126b2378;
          _objc_opt_new(PTR_PTR_1126b2378);
          func_0x00010c183080(param_3,param_2,puVar4);
          _objc_release(puVar4);
        }
        else {
          func_0x00010c183080(param_3,param_2,lVar1);
        }
        _objc_release(lVar1);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1a0 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a0,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0d3c80();
        lVar1 = param_3;
        func_0x00010bf4e840(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20d380();
        _objc_release(lVar9);
        _objc_release(lVar1);
        _objc_release(puVar5);
        _objc_release(puVar4);
        func_0x00010bf42a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf64920(puVar3,param_2,4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bdc2560();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c2ba480(param_3,param_2,puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(param_3);
      }
    }
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010bf4e840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca400();
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10841c7dc; end: 10841cabb; -[EphemeralMedia setStoryInviteWithPublicationId:inviteId:storyName:storyType:] */

void FUN_10841c7dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d2ba0;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x000109189420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar2;
  func_0x00010c20d1a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    uVar2 = param_4;
    func_0x000109189420(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c1aeb00(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      uVar9 = param_5;
      func_0x00010c20d540(puVar1,param_2,param_5);
      puVar3 = puVar1;
      func_0x00010c25a5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e17798;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_6);
        func_0x00010c20ddc0(puVar1,param_2,ppuVar4 == (undefined **)0x0);
        lVar5 = param_1;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          puVar3 = PTR_PTR_1126b2378;
          _objc_opt_new(PTR_PTR_1126b2378);
          func_0x00010c183080(param_1,param_2,puVar3);
          _objc_release(puVar3);
        }
        else {
          func_0x00010c183080(param_1,param_2,lVar5);
        }
        _objc_release(lVar5);
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c0d3c80();
        lVar5 = param_1;
        func_0x00010bf4e840(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20d380();
        _objc_release(lVar7);
        _objc_release(lVar5);
        _objc_release(puVar6);
        _objc_release(puVar3);
        func_0x00010bf42a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010bf64920(param_4,param_2,4);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010bdc2560();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c2ba480(param_1,param_2,uVar8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar2);
        _objc_release(param_1);
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  func_0x00010bf4e840(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca400();
  _objc_release(uVar9);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10841cabc; end: 10841cb2b; -[EphemeralMedia setMusicTrack:] */

void FUN_10841cabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca400();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10841cb2c; end: 10841ccfb; -[EphemeralMedia setMusicSelection:] */

void FUN_10841cb2c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca400();
    puVar1 = param_1;
  }
  else {
    puVar1 = PTR_PTR_1126bfac0;
    _objc_opt_new(PTR_PTR_1126bfac0);
    lVar2 = param_3;
    func_0x00010c277e80(param_3);
    func_0x00010c218f80(puVar1,param_2,lVar2);
    func_0x00010bf0ffa0(auStack_58,param_3);
    _CMTimeGetSeconds(auStack_58);
    func_0x00010c209700(puVar1);
    lVar2 = param_3;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b25f8;
      _objc_alloc(PTR_PTR_1126b25f8);
      lVar2 = param_3;
      func_0x00010bf93480(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar4,param_2,lVar2,0);
      func_0x00010c182620(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    puVar4 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar5);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c183080(param_1,param_2,puVar4);
    }
    _objc_release(puVar4);
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca400();
    _objc_release(puVar4);
    puVar4 = param_1;
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10841ccfc; end: 10841cdcb; -[EphemeralMedia setMusicStickerStyle:] */

void FUN_10841ccfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd95a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca2e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841cdcc; end: 10841d08f; -[EphemeralMedia setAudioMixArrayFromMultiSnapEditingState:] */

void FUN_10841cdcc(float param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c0cece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf4e840(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be80();
  }
  else {
    puVar2 = param_4;
    func_0x00010c0cece0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    puVar3 = puVar3 + 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0dff20(puVar2,param_3,&PTR____CFConstantStringClassReference_110e09c38);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = param_4;
      func_0x00010bef0d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        param_1 = *(float *)(puVar4 + 8) * (float)puVar3;
        puVar5 = param_4;
        func_0x00010bef0d20(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c277e80();
        _objc_release(puVar5);
        FUN_10841fab4(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c41b8;
        func_0x00010bf54ae0(param_1,PTR_PTR_1126c41b8,param_3,
                            &PTR____CFConstantStringClassReference_110e09c38,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_3,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar6);
      }
    }
    puVar5 = puVar2;
    func_0x00010c0dff20(puVar2,param_3,&PTR____CFConstantStringClassReference_110e2a938);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      param_1 = *(float *)(puVar5 + 8) * (float)puVar3;
      puVar6 = PTR_PTR_1126c41b8;
      func_0x00010bf54ae0(param_1,PTR_PTR_1126c41b8,param_3,
                          &PTR____CFConstantStringClassReference_110e2a938,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_3,puVar6);
      _objc_release(puVar6);
    }
    puVar6 = param_4;
    func_0x00010c0ced00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010bfb2c80(puVar6);
      puVar7 = PTR_PTR_1126c41b8;
      func_0x00010bf54ae0(param_1 * (float)puVar3,PTR_PTR_1126c41b8,param_3,
                          &PTR____CFConstantStringClassReference_110edbbf8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_3,puVar7);
      _objc_release(puVar7);
    }
    func_0x00010bf4e840(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be80();
    _objc_release(puVar3);
    _objc_release(param_2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    param_2 = puVar2;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10841d090; end: 10841d2cb; -[EphemeralMedia setAppMetadataWithAppAttachment:] */

void FUN_10841d090(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf3f880();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000109189420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar1);
      _objc_release(puVar1);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar3);
    }
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0d3c80();
    lVar3 = param_1;
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1ee0();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d2ba8;
    _objc_opt_new();
    func_0x00010c1a99c0();
    puVar4 = param_3;
    func_0x00010bf3f8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fece0(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0d3c80();
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c169d40();
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined *)0x0) {
    pcStack_78 = FUN_10841d2cc;
    puStack_a0 = puVar1;
    lStack_98 = param_1;
    puStack_90 = puVar2;
    puStack_88 = param_3;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar1 = puVar6;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(puVar6,param_2,puVar2);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c183080(puVar6,param_2,puVar1);
    }
    _objc_release(puVar1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10841d3b8;
    puStack_b0 = &UNK_1108450c8;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x10841d468;
    puStack_d8 = &UNK_1108450c8;
    puStack_d0 = puVar6;
    puStack_a8 = puVar6;
    func_0x00010c0bf320(puVar4,param_2,&puStack_c8,&puStack_f0);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 10841d2cc; end: 10841d3b7; -[EphemeralMedia setAuraProfileInfo:] */

void FUN_10841d2cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar2);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar1);
    }
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10841d3b8;
    puStack_40 = &UNK_1108450c8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10841d468;
    puStack_68 = &UNK_1108450c8;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010c0bf320(param_3,param_2,&puStack_58,&puStack_80);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 10841d3b8; end: 10841d517;  */

void FUN_10841d3b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000109189420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4e840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0bfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0fa680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7c60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10841d518; end: 10841d72b; -[EphemeralMedia setRemixSourceSnapId:remixSourceUserId:remixLaunchSource:] */

void FUN_10841d518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9528;
  _objc_opt_new(PTR_PTR_1126d9528);
  if (param_5 < 0xf) {
    if ((1L << (param_5 & 0x3f) & 0x13ceU) == 0) {
      if ((1L << (param_5 & 0x3f) & 0x6c00U) == 0) {
        if ((1L << (param_5 & 0x3f) & 0x30U) == 0) goto LAB_10841d724;
        puVar3 = PTR_PTR_1126d9540;
        func_0x00010c0cb140(PTR_PTR_1126d9540);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c65e0(puVar1,param_2,puVar3);
      }
      else {
        puVar3 = PTR_PTR_1126d9530;
        _objc_opt_new(PTR_PTR_1126d9530);
        uVar2 = param_4;
        func_0x000109189420(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar3,param_2,uVar2);
        _objc_release(uVar2);
        func_0x00010c204680(puVar3,param_2,param_3);
        func_0x00010c208ce0(puVar1,param_2,puVar3);
      }
    }
    else {
      puVar3 = PTR_PTR_1126d9538;
      _objc_opt_new(PTR_PTR_1126d9538);
      func_0x00010c204680();
      uVar2 = param_4;
      func_0x000109189420(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(puVar3,param_2,uVar2);
      _objc_release(uVar2);
      func_0x00010c21f4e0(puVar1,param_2,puVar3);
    }
    _objc_release(puVar3);
  }
  else {
LAB_10841d724:
    if (param_5 == 0) goto LAB_10841d6fc;
  }
  lVar4 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar4);
  }
  _objc_release(lVar4);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9f80();
  _objc_release(lVar4);
  _objc_release(param_1);
LAB_10841d6fc:
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841d72c; end: 10841d7bf; -[EphemeralMedia setRepostSourceSnapId:] */

void FUN_10841d72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d9548;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1eb7e0();
  _objc_release(param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d4e0();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841d7c0; end: 10841d8fb; -[EphemeralMedia setUserDisabledMentionRemixing:] */

void FUN_10841d7c0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c129980();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d2bc0;
    _objc_opt_new(PTR_PTR_1126d2bc0);
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e2e0(puVar4,param_2,param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea0e0();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10841d8fc; end: 10841da57; -[EphemeralMedia setUserDisabledRemixing:leaveRemixSettingUnsetExperimentEnabled:] */

void FUN_10841d8fc(undefined *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (((param_3 & 1) == 0) && (param_4 != 0)) {
    return;
  }
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c129980();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d2bc0;
    _objc_opt_new(PTR_PTR_1126d2bc0);
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e300(puVar4,param_2,param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea0e0();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10841da58; end: 10841db7b; -[EphemeralMedia setTimelineMetadataWithConfiguration:] */

void FUN_10841da58(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c263de0(), (int)lVar1 != 0)) {
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215920();
    puVar2 = param_1;
    param_1 = puVar3;
  }
  else {
    puVar2 = PTR_PTR_1126d9550;
    _objc_opt_new(PTR_PTR_1126d9550);
    puVar3 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    else {
      func_0x00010c183080(param_1,param_2,puVar3);
    }
    _objc_release(puVar3);
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215920();
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841db7c; end: 10841dc63; -[EphemeralMedia setDirectorModeMetadataWithConfiguration:] */

void FUN_10841db7c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126d9558;
    _objc_opt_new(PTR_PTR_1126d9558);
    lVar2 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf29240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18e2c0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10841dc64; end: 10841dd7b; -[EphemeralMedia setMultiCamModeMetadataWithContextInfo:] */

void FUN_10841dc64(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d9560;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    lVar2 = param_3;
    func_0x00010c08d1e0(param_3);
    _objc_release(param_3);
    func_0x00010c1b9ca0(puVar1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf29240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192200();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10841dd7c; end: 10841dedb; -[EphemeralMedia setCommerceAttachmentV2DataModels:] */

void FUN_10841dd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1);
  }
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b61f0;
  func_0x00010c0cb140(PTR_PTR_1126b61f0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a483b8);
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  func_0x00010c17f1e0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a48408);
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0d3c80(uVar3);
  func_0x00010c17f3e0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f1c0();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10841dedc; end: 10841dfbb;  */

void FUN_10841dedc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10841dfbc;
  uStack_30 = 0x10841dfcc;
  uStack_28 = 0;
  func_0x00010c0bf620(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10841dfbc; end: 10841dfd3;  */

void FUN_10841dfbc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10841dfd4; end: 10841e0d3;  */

void FUN_10841dfd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b61f8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  func_0x00010c204900(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c20c240(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(param_3);
  func_0x00010c1b6b40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(param_5);
  if (param_6 != 0) {
    uVar2 = 2;
    if (param_6 != 2) {
      uVar2 = 0;
    }
    if (param_6 == 1) {
      uVar2 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1b6350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
               PTR_s_setItemType__11264b2f8,uVar2);
    return;
  }
  return;
}



/* Entry: 10841e0d4; end: 10841e1b3;  */

void FUN_10841e0d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10841dfbc;
  uStack_30 = 0x10841dfcc;
  uStack_28 = 0;
  func_0x00010c0bf620(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10841e1b4; end: 10841e283;  */

void FUN_10841e1b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b6200;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c20c240(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(param_2);
  func_0x00010c17a100(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(param_3);
  func_0x00010c1b6b40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10841e284; end: 10841e4af; -[EphemeralMedia setShoppingLensProductIds:] */

void FUN_10841e284(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    lVar5 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      puVar1 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar1);
      _objc_release(puVar1);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar5);
    }
    _objc_release(lVar5);
    puVar1 = PTR_PTR_1126d9568;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1e3c00(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          puVar3 = puVar1;
          func_0x00010c115ee0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d700(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3,param_2,uVar4);
          _objc_release(uVar4);
          _objc_release(puVar3);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_3);
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1ff840();
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_3,param_2,puVar6);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c183080(param_3,param_2,puVar1);
    }
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c0d3c80(puVar2);
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1863e0();
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10841e4b0; end: 10841e593; -[EphemeralMedia setCTItemInstances:] */

void FUN_10841e4b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar2);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar1);
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0d3c80(param_3);
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1863e0();
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841e594; end: 10841e99b; -[EphemeralMedia setPoll:] */

void FUN_10841e594(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar7);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c183080(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  if (param_3 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    func_0x00010c1deb00();
  }
  else {
    puVar1 = PTR_PTR_1126d9570;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010c1032a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1deac0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    func_0x00010c1deae0(puVar1,param_2,param_3);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c0d3c80();
    puVar3 = param_1;
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1deb00();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bfdd280();
  _objc_release(puVar7);
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar1 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar6 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(puVar2);
          }
          puVar5 = *(undefined **)(lStack_128 + (long)puVar7 * 8);
          puVar4 = puVar5;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bf31ca0();
          _objc_release(puVar4);
          if ((int)puVar3 == 0x23) {
            _objc_retain(puVar5);
            goto LAB_10841e8a4;
          }
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar1 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    puVar5 = (undefined *)0x0;
LAB_10841e8a4:
    _objc_release(puVar2);
    if (param_3 == (undefined *)0x0) {
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c269920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010bf8d2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c12d360();
      _objc_release(puVar2);
      _objc_release(puVar7);
    }
    else {
      param_1 = param_3;
      func_0x00010c1032a0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c1b6b40();
    }
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar1 = param_3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_3,param_2,puVar7);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c183080(param_3,param_2,puVar1);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d9578;
  func_0x00010c0cb140(PTR_PTR_1126d9578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6540();
  _objc_release(puVar4);
  func_0x00010bf4e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6580();
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841e99c; end: 10841ea87; -[EphemeralMedia setQuestion:] */

void FUN_10841e99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d9578;
  func_0x00010c0cb140(PTR_PTR_1126d9578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6540();
  _objc_release(param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6580();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10841ea88; end: 10841eb73; -[EphemeralMedia setSnapMeInfo:] */

void FUN_10841ea88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d9580;
  func_0x00010c0cb140(PTR_PTR_1126d9580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4f20();
  _objc_release(param_3);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204d80();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10841eb74; end: 10841ece3; -[EphemeralMedia setLensConfigInfo:] */

void FUN_10841eb74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_10841ec74;
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
LAB_10841ec30:
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      _objc_release(lVar3);
      goto LAB_10841ec30;
    }
    lVar4 = param_3;
    func_0x00010c11cb60();
    if ((int)lVar4 == 1) {
      _objc_release(lVar3);
      _objc_release(lVar1);
LAB_10841ecd4:
      func_0x00010c1e4da0(param_3,param_2,0);
    }
    else {
      lVar4 = param_3;
      func_0x00010c11cb60();
      _objc_release(lVar3);
      _objc_release(lVar1);
      if ((int)lVar4 == 2) goto LAB_10841ecd4;
    }
  }
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb340();
  _objc_release(lVar1);
  _objc_release(param_1);
LAB_10841ec74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10841ece4; end: 10841edaf; -[EphemeralMedia setLensMusicInfo:] */

void FUN_10841ece4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_1,param_2,puVar2);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c183080(param_1,param_2,lVar1);
    }
    _objc_release(lVar1);
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc320();
    _objc_release(param_3);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10841edb0; end: 10841ee5b; -[EphemeralMedia setIsCheeriosVideo] */

void FUN_10841edb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aff80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10841ee5c; end: 10841f053; -[EphemeralMedia setDreamsInfoWithDreamId:dreamPackId:lensId:] */

void FUN_10841ee5c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf8a6a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d2bb0;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar4;
  func_0x00010bf8a420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010c191ba0(puVar4,param_2,puVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010bf8a400();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010c191b80(puVar4,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_5;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010c1bbd60(puVar4,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar2);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191d00();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10841f054; end: 10841f057; -[EphemeralMedia setSnapDocLensId:] */

void FUN_10841f054(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStoryLensId__112660f30);
  return;
}


