/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c45f58; end: 106c45ff3; -[SCPlusAppIconJobProcessor initWithFeatureSettingsService:plusSubscriptionInfoProvider:] */

undefined1 *
FUN_106c45f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c45ff4; end: 106c460ef; -[SCPlusAppIconJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106c45ff4(undefined8 param_1)

{
  undefined8 in_x5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(in_x5);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106c460ac;
  puStack_40 = &UNK_110848708;
  _objc_copyWeak(auStack_30,auStack_28);
  uStack_38 = in_x5;
  _objc_retain(in_x5);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(in_x5);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return 0;
}



/* Entry: 106c460f0; end: 106c46323; -[SCPlusAppIconJobProcessor _updateAppIconIfNecessary] */

void FUN_106c460f0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    FUN_106c76efc(puVar1);
    goto LAB_106c46308;
  }
  puVar5 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar6 = puVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_106c771e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_106c76f58();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  puVar5 = puVar7;
  puVar8 = puVar6;
  if (puVar7 == puVar6) {
LAB_106c462e8:
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      _objc_release();
LAB_106c46228:
      FUN_106c76b08();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar5);
      puVar9 = puVar7;
      if (puVar7 == puVar5) {
        _objc_release(puVar5);
        _objc_release(puVar7);
LAB_106c4628c:
        _objc_release(puVar5);
      }
      else {
        if (puVar5 == (undefined *)0x0) {
          _objc_release();
        }
        else {
          puVar8 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar5);
          _objc_release(puVar7);
          if (((ulong)puVar8 & 1) != 0) goto LAB_106c4628c;
        }
        puVar8 = puVar7;
        FUN_106c76df4();
        _objc_release(puVar5);
        if ((int)puVar8 == 0) {
          puVar9 = (undefined *)0x0;
        }
      }
      puVar5 = (undefined *)(param_1 + 8);
      _objc_loadWeakRetained(puVar5);
      puVar8 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      FUN_106c76ffc(puVar9,puVar1,puVar8);
      goto LAB_106c462e8;
    }
    puVar8 = puVar7;
    func_0x00010c071ae0();
    _objc_release(puVar6);
    _objc_release();
    if (((ulong)puVar8 & 1) == 0) goto LAB_106c46228;
  }
  _objc_release(puVar6);
  _objc_release(puVar7);
LAB_106c46308:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c46324; end: 106c4634f; -[SCPlusAppIconJobProcessor .cxx_destruct] */

void FUN_106c46324(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106c46350; end: 106c463f3; -[SCPlusAppStartJobProcessor initWithAppStartServiceUpdater:plusServices:] */

undefined1 *
FUN_106c46350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5eb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c463f4; end: 106c464f7; -[SCPlusAppStartJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c463f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106c464f8;
  puStack_60 = &UNK_110848708;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  uStack_58 = param_6;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106c464f8; end: 106c4653b;  */

void FUN_106c464f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec97c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106c46538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 106c4653c; end: 106c4664f; -[SCPlusAppStartJobProcessor _syncConfig] */

void FUN_106c4653c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa2420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf6a640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c260800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106c46650; end: 106c4667f; -[SCPlusAppStartJobProcessor .cxx_destruct] */

void FUN_106c46650(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c46680; end: 106c46723; -[SCPlusAppThemeJobProcessor initWithCustomAppThemeService:plusSubscriptionInfoProvider:] */

undefined1 *
FUN_106c46680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c46724; end: 106c46827; -[SCPlusAppThemeJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c46724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106c46828;
  puStack_60 = &UNK_110848708;
  _objc_retain(param_6);
  uStack_58 = param_6;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106c46828; end: 106c46b43;  */

void FUN_106c46828(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar11 != (undefined *)0x0) {
    puVar1 = puVar11;
  }
  _objc_retain(puVar1);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar1);
      }
      uVar10 = *(ulong *)((long)puVar11 * 8);
      uVar3 = uVar10;
      func_0x000106c46c0c();
      if (((int)uVar3 != 0) && (uVar3 = uVar10, func_0x00010c075e80(), (uVar3 & 1) != 0))
      goto LAB_106c46a98;
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar1);
      }
      uVar10 = *(ulong *)((long)puVar11 * 8);
      uVar3 = uVar10;
      func_0x000106c46c0c();
      if ((int)uVar3 != 0) {
        uVar3 = uVar10;
        func_0x00010c1417c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) goto LAB_106c46a98;
      }
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar1);
      }
      uVar10 = *(ulong *)((long)puVar11 * 8);
      uVar3 = uVar10;
      func_0x000106c46c0c();
      if ((uVar3 & 1) != 0) goto LAB_106c46a98;
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar1;
    func_0x00010bf52a60();
  }
  uVar10 = 0;
LAB_106c46aa0:
  _objc_release(puVar1);
  _objc_release(puVar1);
  if (uVar10 != 0) {
    uVar3 = uVar10;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained();
      func_0x00010be3bd20();
      _objc_release(lVar4);
      uVar8 = 0;
      goto LAB_106c46af4;
    }
  }
  uVar8 = 1;
LAB_106c46af4:
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar8,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(uVar10 + 8);
  func_0x00010bf611e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(uVar10 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  func_0x00010c064b20(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
LAB_106c46a98:
  _objc_retain(uVar10);
  goto LAB_106c46aa0;
}



/* Entry: 106c46b44; end: 106c46bdb; -[SCPlusAppThemeJobProcessor _initializeTheme] */

void FUN_106c46b44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf611e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c080120();
  func_0x00010c064b20(uVar2,param_2,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c46bdc; end: 106c46c7b; -[SCPlusAppThemeJobProcessor .cxx_destruct] */

void FUN_106c46bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c46c7c; end: 106c46dbb; -[SCPlusFeatureBadgingFamilyPlanOnboarding initWithValue:subscriptionInfoProvider:performer:] */

undefined8 *
FUN_106c46c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5ec0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c46dbc; end: 106c46ecf;  */

void FUN_106c46dbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126d1978;
  _objc_alloc(PTR_PTR_1126d1978);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c46ed0;
  puStack_58 = &UNK_11096af28;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar4;
  _objc_retain(uVar5);
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c47070;
  puStack_80 = &UNK_11089afa0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar5;
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007aa0(puVar2,param_2,&puStack_70,puVar3);
  _objc_release(puVar3);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c46ed0; end: 106c4706f;  */

void FUN_106c46ed0(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c080120();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar5);
    _objc_release(uVar1);
LAB_106c46fe0:
    lVar7 = *(long *)(param_2 + 0x28);
    func_0x00010c270aa0();
    if (lVar7 != 0) {
      func_0x00010c215e40(*(undefined8 *)(param_2 + 0x28),param_3,0);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfa08a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((int)uVar6 != 2) goto LAB_106c46fe0;
    uVar5 = *(ulong *)(param_2 + 0x28);
    func_0x00010c270aa0();
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c260980();
    _objc_release(uVar4);
    _objc_release(uVar6);
    puVar9 = PTR_PTR_1126d19b8;
    if ((double)uVar5 <= param_1) {
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010bf15620(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      goto LAB_106c47014;
    }
  }
  puVar9 = PTR_PTR_1126d19b8;
  func_0x00010c0da580(0,PTR_PTR_1126d19b8);
  _objc_retainAutoreleasedReturnValue();
LAB_106c47014:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c47070; end: 106c470b7;  */

void FUN_106c47070(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c470b8; end: 106c470ff; -[SCPlusFeatureBadgingFamilyPlanOnboarding observable] */

void FUN_106c470b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c47100; end: 106c47153; -[SCPlusFeatureBadgingFamilyPlanOnboarding clear] */

void FUN_106c47100(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010bee4e60(param_2,param_3,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c47154; end: 106c4715b; -[SCPlusFeatureBadgingFamilyPlanOnboarding reset] */

void FUN_106c47154(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithTimestampMs__112596d40,0);
  return;
}



/* Entry: 106c4715c; end: 106c47247; -[SCPlusFeatureBadgingFamilyPlanOnboarding _updateWithTimestampMs:] */

void FUN_106c4715c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c215e40(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 106c47248; end: 106c4724f; -[SCPlusFeatureBadgingFamilyPlanOnboarding provider] */

undefined8 FUN_106c47248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c47250; end: 106c4728b; -[SCPlusFeatureBadgingFamilyPlanOnboarding .cxx_destruct] */

void FUN_106c47250(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c4728c; end: 106c47443; -[SCPlusFeatureBadgingFeatureImpl initWithPerformer:subscriptionInfoProvider:registrationInfoProvider:gatingStateProvider:impressionValue:cutoffTimestampMsProvider:newToPlusEnabled:newToPlusCutoffTime:supportsCountdowns:] */

undefined8
FUN_106c4728c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c47444;
  puStack_88 = &UNK_110897868;
  uStack_80 = param_5;
  uStack_78 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1,param_3,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  func_0x00010c0351a0(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_5);
  return param_2;
}



/* Entry: 106c47444; end: 106c4756f;  */

void FUN_106c47444(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar6 = PTR_PTR_1126ae6b8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    puVar6 = param_2;
    ___stack_chk_fail();
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c47570; end: 106c47597;  */

void FUN_106c47570(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c47598; end: 106c4778b; -[SCPlusFeatureBadgingFeatureImpl initWithPerformer:subscriptionInfoProvider:registrationInfoProvider:impressionValue:cutoffTimestampMsProvider:newToPlusEnabled:newToPlusCutoffTime:supportsCountdowns:gatingState:currentValueChangedObservable:] */

undefined8 *
FUN_106c47598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_00000010;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000010);
  puStack_80 = PTR_PTR_1126f5ec8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(in_stack_00000010);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(in_stack_00000010);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_6);
  }
  _objc_release(in_stack_00000010);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c4778c; end: 106c4787f;  */

void FUN_106c4778c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  puVar1 = PTR_PTR_1126d1978;
  _objc_alloc(PTR_PTR_1126d1978);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106c47880;
  puStack_70 = &UNK_11096afa8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  _objc_retain(uVar3);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined2 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar3;
  func_0x00010c007aa0(puVar1,param_2,&puStack_88,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c47880; end: 106c4797b;  */

void FUN_106c47880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c270aa0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_106c436b0(uVar2,*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x50),
                *(undefined1 *)(param_1 + 0x51));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4797c; end: 106c47a93; -[SCPlusFeatureBadgingFeatureImpl initWithCircumstanceEngine:performer:subscriptionInfoProvider:registrationInfoProvider:gatingStateProvider:impressionValue:cofConfigKey:cofDefaultValue:newToPlusEnabled:newToPlusCutoffTime:] */

undefined8
FUN_106c4797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_10);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c47a94;
  puStack_90 = &UNK_11096b008;
  uStack_80 = param_10;
  uStack_78 = param_11;
  uStack_88 = param_4;
  _objc_retain(param_10);
  _objc_retain(param_4);
  func_0x00010c035180(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,&puStack_a8,
                      param_12);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_10);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 106c47a94; end: 106c47aa7;  */

void FUN_106c47a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 106c47aa8; end: 106c47deb; -[SCPlusFeatureBadgingFeatureImpl initWithCircumstanceEngine:performer:subscriptionInfoProvider:registrationInfoProvider:integratedGatingStateProviders:impressionValue:cofConfigKey:cofDefaultValue:newToPlusEnabled:newToPlusCutoffTime:] */

undefined *
FUN_106c47aa8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
             undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_retain(param_8);
  lVar5 = param_8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 != 0) {
    lVar9 = 0;
    do {
      lVar8 = 0;
      lVar10 = lVar9;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_8);
        }
        lVar11 = *(long *)(lVar8 * 8);
        lVar9 = lVar11;
        func_0x00010c28d760(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar9);
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar11;
        func_0x00010c252440();
        _objc_release(lVar11);
        if (lVar9 <= lVar10) {
          lVar9 = lVar10;
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar9;
      } while (lVar5 != lVar8);
      lVar5 = param_8;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_8);
  puVar6 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_10);
  _objc_retain(param_4);
  func_0x00010c0351a0(param_1,param_2);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126ae6b8;
                    /* WARNING: Could not recover jumptable at 0x00010bf41870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126ae6b8,PTR_s_combineLatest_combiner__1125adfc0,
               *(undefined8 *)(param_5 + 0x20),&PTR___NSConcreteGlobalBlock_11096b038);
    return puVar2;
  }
  return param_2;
}



/* Entry: 106c47dec; end: 106c47e07;  */

void FUN_106c47dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_combineLatest_combiner__1125adfc0,
             *(undefined8 *)(param_1 + 0x20),&PTR___NSConcreteGlobalBlock_11096b038);
  return;
}



/* Entry: 106c47e08; end: 106c47e2f;  */

void FUN_106c47e08(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c47e30; end: 106c47e43;  */

void FUN_106c47e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 106c47e44; end: 106c47fdb; -[SCPlusFeatureBadgingFeatureImpl initWithPerformer:registrationInfoProvider:gatingStateProvider:impressionValue:cutoffTimestampMsProvider:] */

undefined8 *
FUN_106c47e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f5ec8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_release(param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c47fdc; end: 106c48213;  */

void FUN_106c47fdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126d1978;
  _objc_alloc(PTR_PTR_1126d1978);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x106c48120;
  puStack_68 = &UNK_11096b058;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar4;
  _objc_retain(uVar5);
  puVar3 = PTR_PTR_1126ae720;
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c48214;
  puStack_90 = &UNK_11089afa0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar5;
  _objc_retain(uVar4);
  uStack_88 = uVar4;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007aa0(puVar2,param_2,&puStack_80,puVar3);
  _objc_release(puVar3);
  _objc_release(uStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c48214; end: 106c4825b;  */

void FUN_106c48214(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4825c; end: 106c482a3; -[SCPlusFeatureBadgingFeatureImpl observable] */

void FUN_106c4825c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c482a4; end: 106c482ff; -[SCPlusFeatureBadgingFeatureImpl clear] */

void FUN_106c482a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar2,param_2,puVar1);
  func_0x00010bed9940(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c48300; end: 106c48307; -[SCPlusFeatureBadgingFeatureImpl reset] */

void FUN_106c48300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImpressionTimestampMs__112593ff8,0);
  return;
}



/* Entry: 106c48308; end: 106c483f3; -[SCPlusFeatureBadgingFeatureImpl _updateImpressionTimestampMs:] */

void FUN_106c48308(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c215e40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 106c483f4; end: 106c483fb; -[SCPlusFeatureBadgingFeatureImpl provider] */

undefined8 FUN_106c483f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c483fc; end: 106c48437; -[SCPlusFeatureBadgingFeatureImpl .cxx_destruct] */

void FUN_106c483fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c48438; end: 106c488df; -[SCPlusFeatureBadgingImpl initWithSubscriptionInfoProvider:registrationInfoProvider:featureGating:circumstanceEngine:featureSettingsService:userPreferences:performerProvider:] */

undefined8 *
FUN_106c48438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126f5ed0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126d1a00;
    _objc_alloc();
    _objc_retain(param_7);
    _objc_retain(param_7);
    func_0x00010c017c00();
    uVar7 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_retain();
    _objc_release(uVar7);
    puVar4 = puVar1;
    func_0x00010be3b4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae720;
    uVar9 = puVar1[3];
    _objc_retain(param_3);
    _objc_retain(uVar9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae568;
    uVar10 = puVar1[0x12];
    _objc_retain(uVar10);
    _objc_opt_new();
    uVar7 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[6];
    puVar1[6] = uVar6;
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[5];
    puVar1[5] = puVar5;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[4];
    puVar1[4] = puVar5;
    _objc_release(uVar7);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(param_3);
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c488e0; end: 106c48a7b;  */

void FUN_106c488e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c48a7c; end: 106c48d1b;  */

void FUN_106c48a7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010c270aa0();
  _objc_retain(lVar1);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar1);
      }
      uVar5 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c119b40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar5);
      func_0x00010c0bef60(uVar6);
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126d19b8;
  if (*(char *)(puStack_118 + 3) == '\x01') {
    func_0x00010bf15620(puStack_138[3],(double)uVar3 / 1000.0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da580(0,PTR_PTR_1126d19b8);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    __Unwind_Resume();
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x000100504554(uVar8,&PTR___NSConcreteGlobalBlock_11096b0d8);
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010bf41860(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c48d1c; end: 106c48d77;  */

void FUN_106c48d1c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_11096b0d8);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c48d78; end: 106c48d7f;  */

void FUN_106c48d78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_observable_112615b30);
  return;
}



/* Entry: 106c48d80; end: 106c48da7;  */

void FUN_106c48d80(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c48da8; end: 106c48eb7;  */

void FUN_106c48da8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126d1978;
  _objc_alloc(PTR_PTR_1126d1978);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106c48eb8;
  puStack_60 = &UNK_11096b118;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR_PTR_1126ae720;
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c490c0;
  puStack_90 = &UNK_110897868;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_88 = uVar5;
  uStack_80 = uVar7;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007aa0(puVar2,param_2,&puStack_78,puVar3);
  _objc_release(puVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c48eb8; end: 106c490bf;  */

void FUN_106c48eb8(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0bef60(uVar3);
  cVar1 = *(char *)(puStack_78 + 3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar3);
  if (cVar1 == '\x01') {
    func_0x00010c0df760(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    _objc_retain(uVar8);
    uVar6 = uVar5;
    func_0x00010c080120();
    if (((int)uVar6 != 0) &&
       (uVar6 = uVar5, func_0x00010c252d60(), (uVar6 & 0xfffffffffffffffe) == 2)) {
      func_0x00010c270aa0();
      func_0x00010c2535a0(uVar5);
    }
    _objc_release(uVar8);
    _objc_release(uVar5);
    func_0x00010c0df760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c490c0; end: 106c491eb;  */

void FUN_106c490c0(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar6 = PTR_PTR_1126ae6b8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    puVar6 = param_2;
    ___stack_chk_fail();
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c491ec; end: 106c49257;  */

void FUN_106c491ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c49258; end: 106c49383;  */

void FUN_106c49258(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126ae6b8;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e0460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  puVar4 = puVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  FUN_106c493b4(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_numberWithUnsignedInteger__112615828,uVar6);
  return;
}



/* Entry: 106c49384; end: 106c493b3;  */

void FUN_106c49384(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_106c493b4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,uVar2);
  return;
}



/* Entry: 106c493b4; end: 106c4940b;  */

undefined8 FUN_106c493b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c102760();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106c4940c; end: 106c4945b;  */

void FUN_106c4940c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4945c; end: 106c4954f;  */

void FUN_106c4945c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bef60(param_2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c49550; end: 106c49553; -[SCPlusFeatureBadgingImpl _initTweaks:] */

void FUN_106c49550(void)

{
  return;
}



/* Entry: 106c49554; end: 106c4a7fb; -[SCPlusFeatureBadgingImpl _initializeFeatures:registrationInfoProvider:featureGating:circumstanceEngine:featureSettingsService:userPreferences:performer:] */

undefined *
FUN_106c49554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_9);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0d9220();
  _objc_release(uVar14);
  puVar3 = PTR_PTR_1126d1a00;
  _objc_alloc();
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106c4a7fc;
  puStack_a0 = &UNK_110927d60;
  _objc_retain(param_7);
  puStack_e0 = puVar11;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106c4a83c;
  puStack_c8 = &UNK_1108484c8;
  uStack_98 = param_7;
  _objc_retain(param_7);
  uStack_c0 = param_7;
  func_0x00010c017c00(puVar3,param_2,&puStack_b8,&puStack_e0);
  puVar4 = PTR_PTR_1126d1a00;
  _objc_alloc();
  puStack_108 = puVar11;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x106c4a878;
  puStack_f0 = &UNK_110927d60;
  _objc_retain(param_7);
  puStack_130 = puVar11;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x106c4a8b8;
  puStack_118 = &UNK_1108484c8;
  uStack_e8 = param_7;
  _objc_retain(param_7);
  uStack_110 = param_7;
  func_0x00010c017c00(puVar4,param_2,&puStack_108,&puStack_130);
  puVar5 = PTR_PTR_1126d1a00;
  _objc_alloc();
  puStack_158 = puVar11;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x106c4a8f4;
  puStack_140 = &UNK_110927d60;
  _objc_retain(param_8);
  puStack_180 = puVar11;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x106c4a934;
  puStack_168 = &UNK_1108484c8;
  lStack_138 = param_8;
  _objc_retain(param_8);
  lStack_160 = param_8;
  func_0x00010c017c00(puVar5,param_2,&puStack_158,&puStack_180);
  puVar6 = PTR_PTR_1126d1a00;
  _objc_alloc();
  puStack_1a8 = puVar11;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x106c4a970;
  puStack_190 = &UNK_110927d60;
  _objc_retain(param_8);
  puStack_1d0 = puVar11;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x106c4a9b0;
  puStack_1b8 = &UNK_1108484c8;
  lStack_1b0 = param_8;
  lStack_188 = param_8;
  _objc_retain(param_8);
  func_0x00010c017c00(puVar6,param_2,&puStack_1a8,&puStack_1d0);
  puVar7 = PTR_PTR_1126d1a08;
  _objc_alloc();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1f8 = puVar11;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x106c4a9ec;
  puStack_1e0 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_1d8 = param_5;
  func_0x00010bf11fe0(puVar8,param_2,&puStack_1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_220 = puVar11;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_106c4aa34;
  puStack_208 = &UNK_11096b208;
  uStack_200 = param_6;
  _objc_retain(param_6);
  func_0x00010c035180(0x41d936efb9c6b852,puVar7,param_2,param_9,param_3,param_4,puVar8,puVar4,
                      &puStack_220,0x100);
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar7;
  _objc_release(uVar14);
  _objc_release(puVar8);
  func_0x00010befa120(puVar13,param_2,*(undefined8 *)(param_1 + 0x68));
  lVar12 = param_1;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126ae720;
  puStack_248 = puVar11;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_106c4aa3c;
  puStack_230 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_228 = param_5;
  func_0x00010bf11fe0(puVar8,param_2,&puStack_248);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (undefined1)uVar2;
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b118,0x182a2a31540,puVar8,
                      uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar8);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  uStack_260 = 0x106c4aa84;
  puStack_258 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_250 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_270);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b138,0x18609cfe0d1,puVar11
                      ,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_290 = 0xc2000000;
  uStack_288 = 0x106c4aacc;
  puStack_280 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_278 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b158,0x18609cfe0d1,puVar11
                      ,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b8 = 0xc2000000;
  uStack_2b0 = 0x106c4ab14;
  puStack_2a8 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_2a0 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_2c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b178,0x1852b6baadd,puVar11
                      ,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  puVar7 = PTR_PTR_1126d1a08;
  _objc_alloc();
  puVar8 = PTR_PTR_1126ae720;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e0 = 0xc2000000;
  uStack_2d8 = 0x106c4ab5c;
  puStack_2d0 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_2c8 = param_5;
  func_0x00010bf11fe0(puVar8,param_2,&puStack_2e8);
  _objc_retainAutoreleasedReturnValue();
  puStack_310 = puVar11;
  uStack_308 = 0xc2000000;
  pcStack_300 = FUN_106c4aba4;
  puStack_2f8 = &UNK_11096b208;
  _objc_retain(param_7);
  uStack_2f0 = param_7;
  func_0x00010c034f20(puVar7,param_2,param_9,param_4,puVar8,puVar5,&puStack_310);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar7;
  _objc_release(uVar14);
  _objc_release(puVar8);
  func_0x00010befa120(puVar13,param_2,*(undefined8 *)(param_1 + 0x90));
  lVar12 = param_1;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126ae720;
  puStack_338 = puVar11;
  uStack_330 = 0xc2000000;
  pcStack_328 = FUN_106c4abac;
  puStack_320 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_318 = param_5;
  func_0x00010bf11fe0(puVar8,param_2,&puStack_338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b198,0x189fb0dd3b7,puVar8,
                      uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar8);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_358 = 0xc2000000;
  uStack_350 = 0x106c4abf4;
  puStack_348 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_340 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_360);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b1b8,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_380 = 0xc2000000;
  uStack_378 = 0x106c4ac3c;
  puStack_370 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_368 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b1d8,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a8 = 0xc2000000;
  uStack_3a0 = 0x106c4ac84;
  puStack_398 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_390 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_3b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b1f8,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3d0 = 0xc2000000;
  uStack_3c8 = 0x106c4accc;
  puStack_3c0 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_3b8 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_3d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b218,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3f8 = 0xc2000000;
  uStack_3f0 = 0x106c4ad14;
  puStack_3e8 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_3e0 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b238,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_428 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_420 = 0xc2000000;
  uStack_418 = 0x106c4ad5c;
  puStack_410 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_408 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_428);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b258,0x193e6a8668e,puVar11
                      ,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar12 = param_1;
  _objc_opt_class();
  uVar14 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c2421c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  uStack_90 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2421e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3d160(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b278,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar12;
  _objc_release(uVar15);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar14);
  lVar12 = param_1;
  _objc_opt_class();
  puVar11 = PTR_PTR_1126ae720;
  puStack_450 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_448 = 0xc2000000;
  uStack_440 = 0x106c4ada4;
  puStack_438 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_430 = param_5;
  func_0x00010bf11fe0(puVar11,param_2,&puStack_450);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b298,0,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xe0);
  *(long *)(param_1 + 0xe0) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar11);
  puVar7 = PTR_PTR_1126d1a08;
  _objc_alloc();
  puVar8 = PTR_PTR_1126ae720;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_478 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_470 = 0xc2000000;
  uStack_468 = 0x106c4adec;
  puStack_460 = &UNK_11096ad60;
  _objc_retain(param_5);
  uStack_458 = param_5;
  func_0x00010bf11fe0(puVar8,param_2,&puStack_478);
  _objc_retainAutoreleasedReturnValue();
  puStack_4a0 = puVar11;
  uStack_498 = 0xc2000000;
  uStack_490 = 0x106c4ae34;
  puStack_488 = &UNK_11096b208;
  _objc_retain(param_7);
  uStack_480 = param_7;
  func_0x00010c034f20(puVar7,param_2,param_9,param_4,puVar8,puVar6,&puStack_4a0);
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar7;
  _objc_release(uVar14);
  _objc_release(puVar8);
  func_0x00010befa120(puVar13,param_2,*(undefined8 *)(param_1 + 0xe8));
  puVar7 = PTR_PTR_1126d1a00;
  _objc_alloc(PTR_PTR_1126d1a00);
  puStack_4c8 = puVar11;
  uStack_4c0 = 0xc2000000;
  uStack_4b8 = 0x106c4ae74;
  puStack_4b0 = &UNK_110927d60;
  _objc_retain(param_7);
  puStack_4f0 = puVar11;
  uStack_4e8 = 0xc2000000;
  uStack_4e0 = 0x106c4aeb4;
  puStack_4d8 = &UNK_1108484c8;
  uStack_4d0 = param_7;
  uStack_4a8 = param_7;
  _objc_retain(param_7);
  func_0x00010c017c00(puVar7,param_2,&puStack_4c8,&puStack_4f0);
  puVar8 = PTR_PTR_1126d1a10;
  _objc_alloc();
  func_0x00010c060480();
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar8;
  _objc_release(uVar14);
  func_0x00010befa120(puVar13,param_2,*(undefined8 *)(param_1 + 0xa8));
  lVar12 = param_1;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126ae720;
  puStack_518 = puVar11;
  uStack_510 = 0xc2000000;
  uStack_508 = 0x106c4aef0;
  puStack_500 = &UNK_11096ad60;
  uStack_4f8 = param_5;
  _objc_retain(param_5);
  func_0x00010bf11fe0(puVar8,param_2,&puStack_518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2c40(0x41d936efb9c6b852,lVar12,param_2,puVar13,param_3,param_4,param_6,puVar3,
                      param_9,&PTR____CFConstantStringClassReference_110e7b2b8,0,puVar8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar14 = *(undefined8 *)(param_1 + 0xf0);
  *(long *)(param_1 + 0xf0) = lVar12;
  _objc_release(uVar14);
  _objc_release(puVar8);
  _objc_release(uStack_4f8);
  _objc_release(puVar7);
  _objc_release(uStack_4d0);
  _objc_release(uStack_4a8);
  _objc_release(uStack_480);
  _objc_release(uStack_458);
  _objc_release(uStack_430);
  _objc_release(uStack_408);
  _objc_release(uStack_3e0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_390);
  _objc_release(uStack_368);
  _objc_release(uStack_340);
  _objc_release(uStack_318);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_278);
  _objc_release(uStack_250);
  _objc_release(uStack_228);
  _objc_release(uStack_200);
  _objc_release(uStack_1d8);
  _objc_release(puVar6);
  _objc_release(lStack_1b0);
  _objc_release(lStack_188);
  _objc_release(puVar5);
  _objc_release(lStack_160);
  _objc_release(lStack_138);
  _objc_release(puVar4);
  _objc_release(uStack_110);
  _objc_release(uStack_e8);
  _objc_release(puVar3);
  _objc_release(uStack_c0);
  _objc_release(uStack_98);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  puVar13 = *(undefined **)(param_8 + 0x20);
  func_0x00010c269d40(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar13;
  func_0x00010c101fc0();
  _objc_release(puVar13);
  return puVar11;
}



/* Entry: 106c4a7fc; end: 106c4aa33;  */

undefined8 FUN_106c4a7fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c101fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106c4aa34; end: 106c4aa3b;  */

ulong FUN_106c4aa34(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar11 = uVar2;
  FUN_106c75a58(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (uVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar11);
        }
        uVar4 = *(ulong *)(uVar13 * 8);
        func_0x00010befce00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c2827c0();
        _objc_release(uVar4);
        if (uVar12 <= uVar5) {
          uVar12 = uVar5;
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
      uVar3 = uVar11;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(uVar11);
  uVar3 = uVar2;
  func_0x00010c0b5020();
  uVar11 = uVar2;
  func_0x00010c0b5020();
  if (uVar11 <= uVar12 || uVar12 <= uVar3) {
    uVar11 = uVar3;
  }
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar11;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar8 = puVar7;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar9 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar6);
  puVar6 = puVar8;
  if (((ulong)puVar9 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar8);
  puVar8 = puVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar8);
  uVar11 = 0;
  if (puVar8 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = (ulong)(puVar6 != (undefined *)0x0);
    _objc_release();
  }
  _objc_release(puVar7);
  _objc_release(uVar2);
  return uVar11;
}



/* Entry: 106c4aa3c; end: 106c4aba3;  */

void FUN_106c4aa3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4aba4; end: 106c4abab;  */

undefined8 FUN_106c4aba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  uVar1 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c102760();
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 106c4abac; end: 106c4af37;  */

void FUN_106c4abac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4af38; end: 106c4af7f; -[SCPlusFeatureBadgingImpl profileIcon] */

void FUN_106c4af38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4af80; end: 106c4afc7; -[SCPlusFeatureBadgingImpl profileSection] */

void FUN_106c4af80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c4afc8; end: 106c4afcf; -[SCPlusFeatureBadgingImpl appSettings] */

void FUN_106c4afc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4afd0; end: 106c4afd7; -[SCPlusFeatureBadgingImpl unredeemedGiftTimestampMs] */

void FUN_106c4afd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4afd8; end: 106c4b033; -[SCPlusFeatureBadgingImpl clearProfileSection] */

void FUN_106c4afd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar2,param_2,puVar1);
  func_0x00010beddfa0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c4b034; end: 106c4b0ab; -[SCPlusFeatureBadgingImpl clearProfileIconIfNeeded] */

void FUN_106c4b034(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 106c4b0ac; end: 106c4b127;  */

void FUN_106c4b0ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3bd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_clearProfileSection_1125ac908);
    return;
  }
  return;
}



/* Entry: 106c4b128; end: 106c4b1ab; -[SCPlusFeatureBadgingImpl _updateProfileSectionImpressionTimestampMs:] */

void FUN_106c4b128(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 106c4b1ac; end: 106c4b237;  */

void FUN_106c4b1ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c215e40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 106c4b238; end: 106c4b303;  */

void FUN_106c4b238(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1978;
  _objc_opt_class(PTR_PTR_1126d1978);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c069d00(uVar1);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1978;
  _objc_opt_class(PTR_PTR_1126d1978);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c069d00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4b304; end: 106c4b44b; +[SCPlusFeatureBadgingImpl _basicFeature:subscriptionInfoProvider:registrationInfoProvider:circumstanceEngine:impressionValue:performer:cofConfigKey:cofDefaultValue:gatingStateProvider:newToPlusEnabled:newToPlusCutoffTime:] */

void FUN_106c4b304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1a08;
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bffea80(param_1);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010befa120(param_4,param_3,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c4b44c; end: 106c4b593; +[SCPlusFeatureBadgingImpl _integratedFeature:subscriptionInfoProvider:registrationInfoProvider:circumstanceEngine:impressionValue:performer:cofConfigKey:cofDefaultValue:integratedGatingStateProviders:newToPlusEnabled:newToPlusCutoffTime:] */

void FUN_106c4b44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1a08;
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bffeaa0(param_1);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010befa120(param_4,param_3,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c4b594; end: 106c4b59b; -[SCPlusFeatureBadgingImpl appIcon] */

undefined8 FUN_106c4b594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106c4b59c; end: 106c4b5a3; -[SCPlusFeatureBadgingImpl postViewEmoji] */

undefined8 FUN_106c4b59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106c4b5a4; end: 106c4b5ab; -[SCPlusFeatureBadgingImpl customAppTheme] */

undefined8 FUN_106c4b5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106c4b5ac; end: 106c4b5b3; -[SCPlusFeatureBadgingImpl chatWallpapers] */

undefined8 FUN_106c4b5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106c4b5b4; end: 106c4b5bb; -[SCPlusFeatureBadgingImpl gifting] */

undefined8 FUN_106c4b5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106c4b5bc; end: 106c4b5c3; -[SCPlusFeatureBadgingImpl giftingUnredeemedGift] */

undefined8 FUN_106c4b5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106c4b5c4; end: 106c4b5cb; -[SCPlusFeatureBadgingImpl mapAppearance] */

undefined8 FUN_106c4b5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106c4b5cc; end: 106c4b5d3; -[SCPlusFeatureBadgingImpl peekAPeek] */

undefined8 FUN_106c4b5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106c4b5d4; end: 106c4b5db; -[SCPlusFeatureBadgingImpl familyPlanOnboarding] */

undefined8 FUN_106c4b5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106c4b5dc; end: 106c4b5e3; -[SCPlusFeatureBadgingImpl aiChatStickers] */

undefined8 FUN_106c4b5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106c4b5e4; end: 106c4b5eb; -[SCPlusFeatureBadgingImpl presenceHints] */

undefined8 FUN_106c4b5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106c4b5ec; end: 106c4b5f3; -[SCPlusFeatureBadgingImpl replayOwnSnap] */

undefined8 FUN_106c4b5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106c4b5f4; end: 106c4b5fb; -[SCPlusFeatureBadgingImpl friendReferrals] */

undefined8 FUN_106c4b5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106c4b5fc; end: 106c4b603; -[SCPlusFeatureBadgingImpl instantStreaks] */

undefined8 FUN_106c4b5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106c4b604; end: 106c4b60b; -[SCPlusFeatureBadgingImpl snapModes] */

undefined8 FUN_106c4b604(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106c4b60c; end: 106c4b613; -[SCPlusFeatureBadgingImpl buddyPass] */

undefined8 FUN_106c4b60c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106c4b614; end: 106c4b61b; -[SCPlusFeatureBadgingImpl buddyPassUnredeemedPass] */

undefined8 FUN_106c4b614(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106c4b61c; end: 106c4b623; -[SCPlusFeatureBadgingImpl comicStyleBitmoji] */

undefined8 FUN_106c4b61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106c4b624; end: 106c4b7a3; -[SCPlusFeatureBadgingImpl .cxx_destruct] */

void FUN_106c4b624(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c4b7a4; end: 106c4b7fb;  */

void FUN_106c4b7a4(double param_1,double param_2,long param_3)

{
  *(bool *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = param_2 < param_1;
  return;
}



/* Entry: 106c4b7fc; end: 106c4bd0f;  */

void FUN_106c4b7fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1de1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


