/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10500d4e0; end: 10500d717; -[SCMyProfileSwitcherSectionEntryPoint buildSectionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10500d4e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_2);
  lVar1 = param_2 + _DAT_11271969c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_2 = param_2 + _DAT_1127196a0;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10500d718;
  puStack_88 = &UNK_110862bf8;
  _objc_copyWeak(auStack_70,auStack_68);
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = puVar5;
  param_1[1] = puVar6;
  param_1[2] = lVar4;
  _objc_retain(lVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10500d718; end: 10500d79f;  */

void FUN_10500d718(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10500d7a0; end: 10500da57; -[SCMyProfileSwitcherSectionEntryPoint _createSectionWithPerformer:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10500d7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112719694;
  _objc_retain(param_3);
  uVar1 = param_1 + lVar22;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c073920();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b3c30;
  _objc_alloc();
  lVar23 = param_1 + _DAT_1127196a4;
  _objc_loadWeakRetained();
  lVar6 = lVar23;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar7 = lVar22;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127196a8;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127196ac;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b980(puVar5,param_2,lVar6,lVar9,lVar11,param_3,lVar13,uVar4 & 0xffffffff);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(lVar23);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f12298;
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b2b48;
  _objc_alloc();
  func_0x00010c000720(0,0x4030000000000000,0x4014000000000000,0x4030000000000000);
  _objc_release(param_3);
  func_0x00010c21c600(puVar15,param_2,1);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar15 = PTR_PTR_1126b3c38;
    _objc_alloc(PTR_PTR_1126b3c38);
    lVar23 = (long)_DAT_112719694;
    puVar14 = puVar5 + lVar23;
    _objc_loadWeakRetained(puVar14);
    puVar16 = puVar14;
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5 + lVar23;
    _objc_loadWeakRetained(puVar19);
    puVar20 = puVar19;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar5 + _DAT_1127196b0);
    puVar5 = puVar5 + _DAT_1127196b4;
    _objc_loadWeakRetained(puVar5);
    puVar21 = puVar5;
    func_0x00010c27abc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03bd20(puVar15,param_2,puVar18,puVar20,uVar24,puVar21);
    _objc_release(puVar21);
    _objc_release(puVar5);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10500da58; end: 10500db8b; -[SCMyProfileSwitcherSectionEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10500da58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b3c38;
  _objc_alloc(PTR_PTR_1126b3c38);
  lVar8 = (long)_DAT_112719694;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar6 = lVar8;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127196b0);
  param_1 = param_1 + _DAT_1127196b4;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c27abc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd20(puVar1,param_2,lVar5,lVar6,uVar9,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10500db8c; end: 10500dc37; -[SCMyProfileSwitcherSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10500db8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127196b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127196b8);
  _objc_destroyWeak(param_1 + _DAT_1127196b4);
  _objc_destroyWeak(param_1 + _DAT_112719694);
  _objc_destroyWeak(param_1 + _DAT_1127196a8);
  _objc_destroyWeak(param_1 + _DAT_1127196a0);
  _objc_destroyWeak(param_1 + _DAT_11271969c);
  _objc_destroyWeak(param_1 + _DAT_1127196ac);
  _objc_destroyWeak(param_1 + _DAT_1127196a4);
  _objc_destroyWeak(param_1 + _DAT_112719698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719690,0);
  return;
}



/* Entry: 10500dc38; end: 10500dc9b; -[SCMyprofileSwitcherLogger init] */

undefined1 * FUN_10500dc38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5a28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b3c40;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10500dc9c; end: 10500dca7; -[SCMyprofileSwitcherLogger logTimeToloadForAsyncFlow:] */

void FUN_10500dc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110862c78,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10500dca8; end: 10500dcb7; -[SCMyprofileSwitcherLogger logProfileSwitcherHasSnapPro:] */

void FUN_10500dca8(long param_1,undefined8 param_2,undefined *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_1 + 8) + 8);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = &UNK_110862c28;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110862c28,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_10500de50;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_110862c78,&uStack_b0,param_3);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 10500dcb8; end: 10500dcc3; -[SCMyprofileSwitcherLogger .cxx_destruct] */

void FUN_10500dcb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10500dcc4; end: 10500dd37; -[SCGrapheneMyprofileSwitcherLoggingMetric2 init] */

undefined1 * FUN_10500dcc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5a30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10500dd38; end: 10500de4f;  */

void FUN_10500dd38(long param_1,undefined *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_110862c28;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110862c28,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_10500de50;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_110862c78,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 10500de50; end: 10500dec7;  */

void FUN_10500de50(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110862c78,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10500dec8; end: 10500df73; -[SCProfileFlatlandFriendProfileLoggingHelper initWithFriendUserId:snapchattersObservableRepository:] */

undefined1 *
FUN_10500dec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c08fa60(param_3);
  puStack_38 = PTR_PTR_1126e5a38;
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



/* Entry: 10500df74; end: 10500e0db; -[SCProfileFlatlandFriendProfileLoggingHelper friendshipStatus] */

undefined8 FUN_10500df74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10500e0dc; end: 10500e143;  */

undefined8 FUN_10500e0dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10500e144; end: 10500e1ef;  */

void FUN_10500e144(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar1 = param_2;
    func_0x000100bf119c();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_2;
      func_0x00010901c5ac();
      if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010901c618(), (uVar1 & 1) == 0)) {
        uVar1 = param_2;
        func_0x00010901c6c4();
        ppuVar2 = (undefined **)0x2;
        if ((int)uVar1 == 0) {
          ppuVar2 = (undefined **)0x0;
        }
      }
      else {
        ppuVar2 = (undefined **)0x1;
      }
    }
    else {
      ppuVar2 = (undefined **)0x3;
    }
    func_0x00010bafa1cc(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10500e1f0; end: 10500e1f7; -[SCProfileFlatlandFriendProfileLoggingHelper shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10500e1f0(void)

{
  return 0;
}



/* Entry: 10500e1f8; end: 10500e203; -[SCProfileFlatlandFriendProfileLoggingHelper pushToValdiMarshaller:] */

void FUN_10500e1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 10500e204; end: 10500e20b; -[SCProfileFlatlandFriendProfileLoggingHelper profileSessionId] */

undefined8 FUN_10500e204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10500e20c; end: 10500e213; -[SCProfileFlatlandFriendProfileLoggingHelper setProfileSessionId:] */

void FUN_10500e20c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10500e214; end: 10500e21b; -[SCProfileFlatlandFriendProfileLoggingHelper blizzardLogger] */

undefined8 FUN_10500e214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10500e21c; end: 10500e24b; -[SCProfileFlatlandFriendProfileLoggingHelper setBlizzardLogger:] */

void FUN_10500e21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10500e24c; end: 10500e293; -[SCProfileFlatlandFriendProfileLoggingHelper .cxx_destruct] */

void FUN_10500e24c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10500e294; end: 10500e7c3; -[SCProfileFlatlandFriendProfileRootViewCreator initWithSnapchatter:scopedValdiRuntimeProvider:bitmojiFlatlandConfigProvider:composerAlertPresenterFactory:flatlandLoggingHelper:bitmojiAvatarProvider:composerCOFStore:circumstanceEngine:snapchattersObservableRepository:featureSettingsService:expandBitmojiHeader:subscriptionInfoProvider:plusSubscribeScopeExposer:plusSubscribeScopeServices:mutualFriendsPageScopeServices:myProfileScopeLauncherService:glbFetcher:bitmojiFlatlandInfoProvider:isCurrentUsersBirthday:publicProfileFactory:transitionToViewStateSubject:updateScrollPositionYSubject:publicProfileConfiguration:unifiedPublicProfileScopeDelegate:initialViewState:messageExperimentService:streakProvider:] */

undefined8 *
FUN_10500e294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined4 param_29,undefined4 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_31);
  _objc_retain(param_32);
  puStack_70 = PTR_PTR_1126e5a40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = param_13;
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x14) = param_22;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x19,param_28);
    *(undefined4 *)(puVar1 + 0x1a) = param_29;
    _objc_retain(param_31);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_32;
    _objc_release(uVar2);
  }
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10500e7c4; end: 10500e9bb; -[SCProfileFlatlandFriendProfileRootViewCreator createRootViewAsyncWithOwner:actionHandler:profileManagementComposerViewProvider:presentingViewController:delegate:] */

void FUN_10500e7c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_60,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_70,auStack_60);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = auStack_68;
  _objc_copyWeak(puVar2,auStack_58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9d60(uVar4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10500e9bc; end: 10500ea73;  */

void FUN_10500e9bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar2 = lVar1;
  func_0x00010bdf2aa0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf43d60(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10500ea74; end: 10500eb1f;  */

void FUN_10500ea74(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_copyWeak(param_1 + 0x48,param_2 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 10500eb20; end: 10500ef1b; -[SCProfileFlatlandFriendProfileRootViewCreator _createRootViewWithOwner:valdiRuntime:actionHandler:profileManagementComposerViewProvider:presentingViewController:delegate:] */

void FUN_10500eb20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010bdec760(param_1,param_2,param_5,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  lVar2 = param_1;
  func_0x00010bdf5920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x40);
  func_0x000108fab1cc();
  if ((uVar3 & 1) == 0) {
    puVar14 = PTR_PTR_1126b3c48;
    _objc_alloc(PTR_PTR_1126b3c48);
    func_0x00010c032a60();
  }
  else {
    puVar4 = PTR_PTR_1126b1678;
    _objc_alloc();
    func_0x00010c017a80();
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c242760(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 200;
    _objc_loadWeakRetained(lVar8);
    uVar9 = uVar5;
    func_0x00010bf55760(uVar5,param_2,param_7,uVar6,0,uVar7,lVar8,*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar10 = PTR_PTR_1126b1678;
    _objc_alloc();
    func_0x00010c017a80();
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c242760(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf5a0a0(uVar6,param_2,uVar7,uVar11,*(undefined8 *)(param_1 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar12 = PTR_PTR_1126b3c50;
    _objc_alloc(PTR_PTR_1126b3c50);
    func_0x00010c03bcc0();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c242760(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar6);
    puVar13 = PTR_PTR_1126b3c58;
    _objc_alloc(PTR_PTR_1126b3c58);
    func_0x00010c03a3a0();
    uVar15 = 2;
    if (*(int *)(param_1 + 0xd0) != 1) {
      uVar15 = 0;
    }
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b340(puVar13,param_2,puVar14);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126b3c60;
    _objc_alloc(PTR_PTR_1126b3c60);
    func_0x00010c061d40();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10500ef1c; end: 10500ef6b;  */

void FUN_10500ef1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10500ef6c; end: 10500f7f3; -[SCProfileFlatlandFriendProfileRootViewCreator _createContextWithActionHandler:presentingViewController:delegate:] */

void FUN_10500ef6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_5);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_88,param_1);
  puVar5 = PTR_PTR_1126b3c68;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10500f7f4;
  puStack_98 = &UNK_110862d58;
  _objc_copyWeak(auStack_90,auStack_80);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10500f850;
  puStack_c0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b8,auStack_80);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10500f87c;
  puStack_e8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e0,auStack_80);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x10500f8a8;
  puStack_118 = &UNK_110841fb0;
  _objc_copyWeak(auStack_108,auStack_88);
  _objc_retain(param_3);
  puVar6 = auStack_80;
  uStack_110 = param_3;
  _objc_loadWeakRetained(puVar6);
  puVar7 = puVar6;
  func_0x00010c141880();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010be3e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e0e0(puVar5);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10500f8e8;
  puStack_148 = &UNK_110841fb0;
  _objc_copyWeak(auStack_138,auStack_88);
  _objc_retain(param_3);
  uStack_140 = param_3;
  func_0x00010c18fa40(puVar5);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_10500f928;
  puStack_178 = &UNK_110859c28;
  _objc_copyWeak(auStack_168,auStack_88);
  _objc_retain(param_3);
  uStack_170 = param_3;
  func_0x00010c21a780(puVar5);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x10500f97c;
  puStack_1a8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_198,auStack_88);
  _objc_retain(param_3);
  uStack_1a0 = param_3;
  func_0x00010c18f9e0(puVar5);
  puStack_1f0 = puVar1;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x10500f9ec;
  puStack_1d8 = &UNK_110862d88;
  _objc_copyWeak(auStack_1c8,auStack_88);
  _objc_retain(param_3);
  uStack_1d0 = param_3;
  func_0x00010c1fc2e0(puVar5);
  puStack_218 = puVar1;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_10500fa68;
  puStack_200 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1f8,auStack_88);
  func_0x00010c185080(puVar5);
  puStack_248 = puVar1;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x10500fa94;
  puStack_230 = &UNK_110841fb0;
  _objc_copyWeak(auStack_220,auStack_88);
  _objc_retain(param_3);
  uStack_228 = param_3;
  func_0x00010c193860(puVar5);
  puStack_278 = puVar1;
  uStack_270 = 0xc2000000;
  uStack_268 = 0x10500fad4;
  puStack_260 = &UNK_110841fb0;
  _objc_copyWeak(auStack_250,auStack_88);
  _objc_retain(param_3);
  uStack_258 = param_3;
  func_0x00010c193880(puVar5);
  puStack_2a8 = puVar1;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_10500fb14;
  puStack_290 = &UNK_110862db8;
  _objc_copyWeak(auStack_280,auStack_88);
  _objc_retain(param_3);
  uStack_288 = param_3;
  func_0x00010c18f9a0(puVar5);
  lVar11 = param_1;
  func_0x00010be0e980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2900(puVar5);
  _objc_release(lVar11);
  puStack_2d0 = puVar1;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_10500fe28;
  puStack_2b8 = &UNK_110849200;
  _objc_copyWeak(auStack_2b0,auStack_80);
  func_0x00010c1ec4c0(puVar5);
  _objc_initWeak(auStack_2d8,param_4);
  puStack_308 = puVar1;
  uStack_300 = 0xc2000000;
  uStack_2f8 = 0x10500fe5c;
  puStack_2f0 = &UNK_110854350;
  _objc_copyWeak(auStack_2e8,auStack_88);
  _objc_copyWeak(auStack_2e0,auStack_2d8);
  func_0x00010c1d4f00(puVar5);
  _objc_copyWeak(auStack_310,auStack_88);
  func_0x00010c18fb20(puVar5);
  lVar11 = param_1;
  func_0x00010c078480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2b60(puVar5);
  _objc_release(lVar11);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bfc93c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f540(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_310);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2e8);
  _objc_destroyWeak(auStack_2d8);
  _objc_destroyWeak(auStack_2b0);
  _objc_release(uStack_288);
  _objc_destroyWeak(auStack_280);
  _objc_release(uStack_258);
  _objc_destroyWeak(auStack_250);
  _objc_release(uStack_228);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(uStack_1d0);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(uStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(uStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(uStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10500f7f4; end: 10500f84f;  */

void FUN_10500f7f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c141900(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10500f850; end: 10500f927;  */

void FUN_10500f850(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500f928; end: 10500fa67;  */

void FUN_10500f928(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500fa68; end: 10500fb13;  */

void FUN_10500fa68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfec400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500fb14; end: 10500fe27;  */

void FUN_10500fb14(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1af20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf1af00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    func_0x00010c0fa820();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010bfb8640();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be9e6c0(param_1);
    _objc_release(puVar13);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c1418c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10500fe28; end: 10500fedb;  */

void FUN_10500fe28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1418c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500fedc; end: 10500ff13; -[SCProfileFlatlandFriendProfileRootViewCreator _handleDismissBitmojiGesturesEducationOverlay] */

void FUN_10500fedc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10500ff14; end: 105010037; -[SCProfileFlatlandFriendProfileRootViewCreator _sendTryOnFriendsOutfitActionWithFriendAvatarId:toActionHandler:] */

void FUN_10500ff14(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = (int)*(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010901d778();
  if (iVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126afdc0;
  _objc_alloc(PTR_PTR_1126afdc0);
  lVar3 = param_3;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_3;
  }
  lVar4 = lVar7;
  func_0x00010c08fa60();
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar7;
  }
  func_0x00010c0154a0(puVar2,param_2,lVar1,lVar3);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010be9e6c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb7bd8,puVar5,
                      param_4);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 105010038; end: 105010043; -[SCProfileFlatlandFriendProfileRootViewCreator _sendActionIdentifier:toActionHandler:] */

void FUN_105010038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier_actionData_112585358,param_3,0,param_4);
  return;
}



/* Entry: 105010044; end: 1050100e3; -[SCProfileFlatlandFriendProfileRootViewCreator _sendActionIdentifier:actionDataModel:toActionHandler:] */

void FUN_105010044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfd0140(param_5,param_2,param_1,puVar1,0);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050100e4; end: 105010a23; -[SCProfileFlatlandFriendProfileRootViewCreator _createViewModel] */

void FUN_1050100e4(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  double dVar21;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1c000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae6b8;
  if (lVar4 == 0) {
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010c2923e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf6a200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010bf1bae0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf1c000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar9 = *(undefined **)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar9;
  func_0x00010c2445c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6b8;
  if (puVar5 == (undefined *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar11);
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar16;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar12);
  puVar5 = PTR_PTR_1126b3c70;
  _objc_alloc(PTR_PTR_1126b3c70);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010901d7c4(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c272120(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010be82ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d360(puVar5);
  _objc_release(uVar17);
  _objc_release(puVar7);
  _objc_release(uVar10);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar13;
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c2519e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187de0(puVar5);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar13);
  uVar10 = uVar11;
  func_0x00010b09c8d0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187f80(puVar5);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(uVar10,puVar9);
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1300(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar9);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0420(puVar5);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b3c78;
  _objc_alloc_init(PTR_PTR_1126b3c78);
  uVar16 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010c0790e0();
  _objc_release(uVar16);
  if ((int)uVar10 == 0) {
    uVar18 = *(ulong *)(param_1 + 8);
    func_0x00010bfb8280(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c243560();
    dVar21 = (double)(int)uVar20;
    func_0x00010c20e2c0(dVar21,puVar7);
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0xe0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c25bfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar17);
    if (uVar18 == 0) {
      dVar21 = 0.0;
    }
    else {
      uVar17 = uVar18;
      func_0x00010c25c060(uVar18);
      dVar21 = (double)uVar17;
    }
    func_0x00010c20e2c0(dVar21,puVar7);
    uVar17 = *(ulong *)(param_1 + 8);
    func_0x00010c2923e0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_1;
    func_0x00010be19600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e2c0(puVar5);
  }
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar18);
  func_0x00010be40a40(param_1);
  func_0x00010c1b1360(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb8280(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef89e0();
  func_0x00010c0df720(dVar21 * 1000.0,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1658e0(puVar7);
  _objc_release(puVar9);
  _objc_release(uVar10);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb9b40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010c0d3c80();
  _objc_release(uVar10);
  _objc_release(uVar12);
  func_0x00010c1a05a0(puVar7);
  func_0x00010c1a0cc0(puVar5);
  _objc_release(uVar16);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b3c80;
  _objc_opt_new(PTR_PTR_1126b3c80);
  func_0x00010c21ab00(puVar5);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1b1e0();
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1850a0(puVar5);
  _objc_release(puVar7);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1986a0(puVar5);
  _objc_release(puVar7);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aef80(puVar5);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c242760(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c0df760(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6820(puVar5);
  _objc_release(puVar7);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b340(puVar5);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108fab1cc(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21efe0(puVar5);
  _objc_release(puVar7);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c242760(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ff60(puVar5);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a03c0(puVar5);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108fab210(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ff20(puVar5);
  _objc_release(puVar7);
  _objc_release(uVar11);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105010a24; end: 105010a93;  */

void FUN_105010a24(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105010a94; end: 105010cd3;  */

void FUN_105010a94(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c14fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126af5d0;
  puVar1 = PTR_PTR_1126ae6b8;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010bf6a1e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105010cd4; end: 105010dd7; -[SCProfileFlatlandFriendProfileRootViewCreator _friendStreakObservable:] */

void FUN_105010cd4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be918);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0xe0);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105010dd8; end: 105010e33;  */

void FUN_105010dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c060();
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105010e34; end: 105010e93; -[SCProfileFlatlandFriendProfileRootViewCreator incrementBitmojiCreateAvatarFriendProfileCTAViews] */

void FUN_105010e34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1b1e0();
  func_0x00010c170c80(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105010e94; end: 105011007; -[SCProfileFlatlandFriendProfileRootViewCreator isMutualFriendsWithCurrentUser] */

long FUN_105010e94(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c09dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return lVar7;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0720c0(lVar4);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(param_2);
  return lVar5;
}



/* Entry: 105011008; end: 105011093;  */

undefined8 FUN_105011008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105011094; end: 1050110db;  */

void FUN_105011094(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100bf119c();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}



/* Entry: 1050110dc; end: 105011287; -[SCProfileFlatlandFriendProfileRootViewCreator _isBitmojiFriendmojiSharingSupported] */

void FUN_1050110dc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar7 = PTR_PTR_1126b3c88;
    _objc_alloc(PTR_PTR_1126b3c88);
    func_0x00010c04ef40();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x48);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c09dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    puVar5 = puVar4;
    func_0x00010bfad7a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001050112a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,1,0,PTR____kCFBooleanFalse_11034ab60,0);
  return;
}



/* Entry: 105011288; end: 1050112a7;  */

void FUN_105011288(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001050112a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,1,0,PTR____kCFBooleanFalse_11034ab60,0);
  return;
}



/* Entry: 1050112a8; end: 10501130f;  */

undefined8 FUN_1050112a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105011310; end: 1050113af;  */

void FUN_105011310(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06d440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar4);
  return;
}



/* Entry: 1050113b0; end: 105011547; -[SCProfileFlatlandFriendProfileRootViewCreator _profileFlatlandBackground] */

void FUN_1050113b0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1af20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      func_0x00010bdf91a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105011500;
    }
    puVar5 = PTR_PTR_1126b3c90;
    _objc_alloc(PTR_PTR_1126b3c90);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1bae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf1af00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126b3c90;
    _objc_alloc(PTR_PTR_1126b3c90);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1bae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf1af20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 1;
  }
  func_0x00010c0563a0(puVar5,param_2,uVar7,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  param_1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
LAB_105011500:
  puVar5 = param_1;
  func_0x00010c272120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105011548; end: 1050115df; -[SCProfileFlatlandFriendProfileRootViewCreator _defaultBackground] */

void FUN_105011548(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf68de0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1050115e0; end: 105011707;  */

void FUN_1050115e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105011708;
  uStack_40 = 0x105011718;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126b3c90;
  _objc_alloc(PTR_PTR_1126b3c90);
  func_0x00010c0563a0();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(ppuStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105011708; end: 10501171f;  */

void FUN_105011708(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105011720; end: 105011757;  */

void FUN_105011720(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105011758; end: 1050117df; -[SCProfileFlatlandFriendProfileRootViewCreator _featurePlusStatus] */

void FUN_105011758(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1050117e0; end: 10501180f;  */

undefined ** FUN_1050117e0(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  func_0x00010c080120();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be930;
  if (param_2 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be948;
  }
  return ppuVar1;
}



/* Entry: 105011810; end: 1050118b7; -[SCProfileFlatlandFriendProfileRootViewCreator _presentGenerativeBackgroundsPlusUpsellInContainer:] */

void FUN_105011810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1da8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04abe0();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf23e60(uVar2,param_2,param_3,puVar1,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050118b8; end: 1050119af; -[SCProfileFlatlandFriendProfileRootViewCreator _presentMyProfileGenerativeWallpapersPicker:] */

void FUN_1050118b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain();
  _objc_release(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b3550;
    _objc_alloc(PTR_PTR_1126b3550);
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c0028e0(puVar1);
    _objc_release(puVar2);
    func_0x00010c1e3f80(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c08f240(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050119b0; end: 105011a07; -[SCProfileFlatlandFriendProfileRootViewCreator _getFriendshipDate:] */

void FUN_1050119b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bfb8280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef89e0();
  func_0x00010bf655e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105011a08; end: 105011a9b; -[SCProfileFlatlandFriendProfileRootViewCreator _isFriendshipAnniversaryWithFriend:] */

undefined * FUN_105011a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  puVar1 = puVar2;
  func_0x00010bf64de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1f580(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0702e0(puVar2,param_2,puVar1,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 105011a9c; end: 105011ae3; -[SCProfileFlatlandFriendProfileRootViewCreator plusSubscribeDidDismiss] */

void FUN_105011a9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105011ae4; end: 105011b17; -[SCProfileFlatlandFriendProfileRootViewCreator myProfileDidDismiss] */

void FUN_105011ae4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c08f240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105011b18; end: 105011b1b; -[SCProfileFlatlandFriendProfileRootViewCreator myProfileWillAppear] */

void FUN_105011b18(void)

{
  return;
}



/* Entry: 105011b1c; end: 105011b1f; -[SCProfileFlatlandFriendProfileRootViewCreator myProfileAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_105011b1c(void)

{
  return;
}



/* Entry: 105011b20; end: 105011c5f; -[SCProfileFlatlandFriendProfileRootViewCreator .cxx_destruct] */

void FUN_105011b20(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105011c60; end: 105012143; -[SCProfileFlatlandFriendProfileRootViewCreatorFactoryImpl initWithScopedValdiRuntimeProvider:bitmojiFlatlandConfigProvider:composerAlertPresenterFactory:snapchattersObservableRepository:composerBlizzardLogger:bitmojiAvatarProvider:composerCOFStore:circumstanceEngine:featureSettingsService:expandBitmojiHeader:subscriptionInfoProvider:plusSubscribeScopeExposer:plusSubscribeScopeServices:mutualFriendsPageScopeServices:myProfileScopeLauncherService:glbFetcher:bitmojiFlatlandInfoProvider:isCurrentUsersBirthday:publicProfileFactory:transitionToViewStateSubject:updateScrollPositionYSubject:publicProfileConfiguration:unifiedPublicProfileScopeDelegate:initialViewState:messageExperimentService:streakProvider:] */

undefined8 *
FUN_105011c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined4 param_28,
             undefined4 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_30);
  _objc_retain(param_31);
  puStack_70 = PTR_PTR_1126e5a48;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = param_12;
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x12) = param_21;
    _objc_retain(param_23);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_26;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x17,param_27);
    *(undefined4 *)(puVar1 + 0x18) = param_28;
    _objc_retain(param_30);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_31;
    _objc_release(uVar2);
  }
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105012144; end: 105012313; -[SCProfileFlatlandFriendProfileRootViewCreatorFactoryImpl createWithSnapchatter:profileSessionIdForLogging:] */

void FUN_105012144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = PTR_PTR_1126b3c98;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar5);
  uVar6 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015ea0(puVar5,param_2,uVar6,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c1e44c0(puVar5,param_2,param_4);
  _objc_release(param_4);
  puVar7 = PTR_PTR_1126b3ca0;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined1 *)(param_1 + 0x50);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  func_0x00010c048fe0(puVar7,param_2,param_3,uVar6,uVar2,uVar1,puVar5,uVar8,uVar10,uVar11,uVar3,
                      uVar9,uVar4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105012314; end: 10501243b; -[SCProfileFlatlandFriendProfileRootViewCreatorFactoryImpl .cxx_destruct] */

void FUN_105012314(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10501243c; end: 1050125ff; -[SCProfileFlatlandFriendProfileServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10501243c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127197b0;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar3 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126ae568;
  _objc_opt_new();
  lVar7 = (long)_DAT_1127197b4;
  _objc_retain(puVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_1127197b8;
  _objc_retain(puVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar4;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127197bc);
  puVar6 = PTR_PTR_1126b3ca8;
  _objc_alloc(PTR_PTR_1126b3ca8);
  func_0x00010c0403e0();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar6);
  func_0x00010be0cee0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105012600; end: 10501263f;  */

void FUN_105012600(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105012640; end: 10501269f; -[SCProfileFlatlandFriendProfileServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105012640(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127197c0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e5a50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050126a0; end: 105012cdf; -[SCProfileFlatlandFriendProfileServicesEntryPoint _createRootViewCreatorFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050126a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105012ce0;
  puStack_90 = &UNK_110862fe8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = (long)_DAT_1127197c4;
  lVar3 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0702e0();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b3cb0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_1127197c8;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127197cc;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127197d0;
  _objc_loadWeakRetained();
  lVar10 = lVar5;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127197d4;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_1127197d8;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127197dc;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_1127197e0;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_1127197b0;
  lVar19 = param_1 + lVar37;
  _objc_loadWeakRetained();
  func_0x00010bf9bca0();
  lVar20 = param_1 + _DAT_1127197e4;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_1127197ec;
  _objc_loadWeakRetained();
  lVar23 = param_1 + _DAT_1127197f0;
  _objc_loadWeakRetained();
  lVar24 = param_1 + _DAT_1127197f4;
  _objc_loadWeakRetained();
  lVar25 = param_1 + _DAT_1127197f8;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf1b7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar27 = lVar38;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_1127197fc;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c11a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010bdf2140();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c2801a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar33 = lVar37;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064680();
  lVar34 = param_1 + _DAT_112719800;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719804;
  _objc_loadWeakRetained();
  lVar36 = param_1;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042200(puVar7);
  _objc_release(lVar36);
  _objc_release(param_1);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar37);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar38);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105012ce0; end: 105012df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105012ce0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11271980c;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf1cf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105012df8; end: 105012ea7; -[SCProfileFlatlandFriendProfileServicesEntryPoint _exposeGenerativeBackgroundsImageLoaderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105012df8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_112719808;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ba0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b3cb8;
  _objc_alloc(PTR_PTR_1126b3cb8);
  func_0x00010c017740();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127197c0),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105012ea8; end: 105012ecb; -[SCProfileFlatlandFriendProfileServicesEntryPoint _convertToUnifiedPublicProfilePageEntryType:] */

undefined8 FUN_105012ea8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 6U < 9) {
    return *(undefined8 *)(&UNK_10dd8df08 + (param_3 - 6U) * 8);
  }
  return 0;
}



/* Entry: 105012ecc; end: 1050130ff; -[SCProfileFlatlandFriendProfileServicesEntryPoint _createPublicProfileConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105012ecc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127197b0;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126afdd8;
  if (lVar2 == 0) {
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c247980();
    func_0x00010bfc8740(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bc9109c();
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1180();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = param_1;
    func_0x00010bde9740(param_1,param_2,lVar3);
    puVar4 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c247b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033440(puVar4,param_2,puVar5,lVar3,lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c078860();
    func_0x00010bff9da0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar4,0,0,
                        lVar2,1,0,0);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0daca0();
    func_0x00010c1cd9a0(puVar5,param_2,lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0dac60();
    func_0x00010c1cd960(puVar5,param_2,lVar1);
    _objc_release(param_1);
  }
  else {
    puVar4 = (undefined *)(param_1 + lVar6);
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105013100; end: 10501325f; -[SCProfileFlatlandFriendProfileServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105013100(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127197e8,0);
  _objc_destroyWeak(param_1 + _DAT_1127197f0);
  _objc_destroyWeak(param_1 + _DAT_1127197ec);
  _objc_storeStrong(param_1 + _DAT_1127197bc,0);
  _objc_storeStrong(param_1 + _DAT_1127197c0,0);
  _objc_destroyWeak(param_1 + _DAT_112719804);
  _objc_destroyWeak(param_1 + _DAT_112719800);
  _objc_destroyWeak(param_1 + _DAT_1127197fc);
  _objc_destroyWeak(param_1 + _DAT_1127197c4);
  _objc_destroyWeak(param_1 + _DAT_1127197f8);
  _objc_destroyWeak(param_1 + _DAT_1127197f4);
  _objc_destroyWeak(param_1 + _DAT_1127197e4);
  _objc_destroyWeak(param_1 + _DAT_112719808);
  _objc_destroyWeak(param_1 + _DAT_1127197e0);
  _objc_destroyWeak(param_1 + _DAT_1127197dc);
  _objc_destroyWeak(param_1 + _DAT_1127197d8);
  _objc_destroyWeak(param_1 + _DAT_112719810);
  _objc_destroyWeak(param_1 + _DAT_11271980c);
  _objc_destroyWeak(param_1 + _DAT_1127197d4);
  _objc_destroyWeak(param_1 + _DAT_1127197d0);
  _objc_destroyWeak(param_1 + _DAT_1127197cc);
  _objc_destroyWeak(param_1 + _DAT_1127197c8);
  _objc_destroyWeak(param_1 + _DAT_1127197b0);
  _objc_storeStrong(param_1 + _DAT_1127197b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127197b4,0);
  return;
}



/* Entry: 105013260; end: 10501330b; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel initWithFriendAvatarId:friendFirstName:] */

undefined1 *
FUN_105013260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5a58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10501330c; end: 10501332f; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel copyWithZone:] */

undefined8 FUN_10501330c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105013330; end: 1050133a3; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel hash] */

undefined8 * FUN_105013330(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105013424:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105013430;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105013430;
        }
        goto LAB_105013424;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105013430:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050133a4; end: 10501344b; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel isEqual:] */

long FUN_1050133a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105013424:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105013430;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105013430;
        }
        goto LAB_105013424;
      }
    }
    lVar3 = 0;
  }
LAB_105013430:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10501344c; end: 105013453; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel friendAvatarId] */

undefined8 FUN_10501344c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105013454; end: 10501345b; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel friendFirstName] */

undefined8 FUN_105013454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10501345c; end: 10501348b; -[SCFriendUnifiedProfileTryOnOutfitActionDataModel .cxx_destruct] */

void FUN_10501345c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10501348c; end: 105013497; -[SCFeatureSettingsService isbitmojiCreateAvatarFriendProfileCTAViewsAvailable] */

void FUN_10501348c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2b98);
  return;
}



/* Entry: 105013498; end: 1050134a3; -[SCFeatureSettingsService bitmojiCreateAvatarFriendProfileCTAViewsServerParam] */

undefined ** FUN_105013498(void)

{
  return &PTR____CFConstantStringClassReference_110dc2b98;
}



/* Entry: 1050134a4; end: 1050134b3; -[SCFeatureSettingsService setBitmojiCreateAvatarFriendProfileCTAViews:] */

void FUN_1050134a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2b98,param_3);
  return;
}



/* Entry: 1050134b4; end: 1050134bb; -[SCFeatureSettingsService BITMOJI_CREATE_AVATAR_FRIEND_PROFILE_CTA_VIEWS_client_value:] */

void FUN_1050134b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1050134bc; end: 1050134c3; -[SCFeatureSettingsService BITMOJI_CREATE_AVATAR_FRIEND_PROFILE_CTA_VIEWS_server_value:] */

void FUN_1050134bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1050134c4; end: 1050134d3; -[SCFeatureSettingsService bitmojiCreateAvatarFriendProfileCTAViews] */

void FUN_1050134c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2b98,0);
  return;
}



/* Entry: 1050134d4; end: 105013527; -[SCProfileFlatlandGroupProfileLoggingHelper friendshipStatus] */

void FUN_1050134d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105013528; end: 10501352f; -[SCProfileFlatlandGroupProfileLoggingHelper shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105013528(void)

{
  return 0;
}



/* Entry: 105013530; end: 10501353b; -[SCProfileFlatlandGroupProfileLoggingHelper pushToValdiMarshaller:] */

void FUN_105013530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 10501353c; end: 105013543; -[SCProfileFlatlandGroupProfileLoggingHelper profileSessionId] */

undefined8 FUN_10501353c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105013544; end: 10501354b; -[SCProfileFlatlandGroupProfileLoggingHelper setProfileSessionId:] */

void FUN_105013544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10501354c; end: 105013553; -[SCProfileFlatlandGroupProfileLoggingHelper blizzardLogger] */

undefined8 FUN_10501354c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


