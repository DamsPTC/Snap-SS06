/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105112e40; end: 105112e73; -[SCVerifiedCommunitiesOnboardingTrayViewController viewDidDisappear:] */

void FUN_105112e40(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6370;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidDisappear__112684c48);
  return;
}



/* Entry: 105112e74; end: 105112f97; -[SCVerifiedCommunitiesOnboardingTrayViewController presentViewController:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112e74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b4e60;
    _objc_opt_new(PTR_PTR_1126b4e60);
    func_0x00010c222480();
    func_0x00010c167e40(puVar2);
    func_0x00010c17fb20(puVar2);
    lVar5 = (long)_DAT_11271c940;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  else {
    puStack_48 = PTR_PTR_1126e6370;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_presentViewController_animated_c_112621588,param_3,param_4,
                        param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105112f98; end: 10511300f; -[SCVerifiedCommunitiesOnboardingTrayViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112f98(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_11271c940);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0a3840(*(undefined8 *)(param_1 + _DAT_11271c944));
  }
  puStack_28 = PTR_PTR_1126e6370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105113010; end: 10511301b; -[SCVerifiedCommunitiesOnboardingTrayViewController defaultProjectNameV2] */

undefined ** FUN_105113010(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 10511301c; end: 105113027; -[SCVerifiedCommunitiesOnboardingTrayViewController defaultSubProjectName] */

undefined ** FUN_10511301c(void)

{
  return &PTR____CFConstantStringClassReference_110dc5f98;
}



/* Entry: 105113028; end: 105113047; -[SCVerifiedCommunitiesOnboardingTrayViewController onboardingComponentContextFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105113028(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271c948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105113048; end: 10511305b; -[SCVerifiedCommunitiesOnboardingTrayViewController setOnboardingComponentContextFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105113048(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271c948,param_3);
  return;
}



/* Entry: 10511305c; end: 1051130c7; -[SCVerifiedCommunitiesOnboardingTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511305c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c948);
  _objc_storeStrong(param_1 + _DAT_11271c944,0);
  _objc_storeStrong(param_1 + _DAT_11271c940,0);
  _objc_storeStrong(param_1 + _DAT_11271c93c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c930,0);
  return;
}



/* Entry: 1051130c8; end: 10511313b; -[SCGrapheneCommunitiesOnboardingMetric2 init] */

undefined1 * FUN_1051130c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6378;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10511313c; end: 105113323;  */

/* WARNING: Removing unreachable block (ram,0x000105113568) */

char * FUN_10511313c(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x24;
  char *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar6 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar3 = acStack_160;
  pcStack_a8 = FUN_105113324;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  uVar8 = uVar5;
  uVar9 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_128,pcVar2);
    unaff_x24 = auStack_110;
    pcVar2 = "true";
    if ((int)uVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110868718,acStack_160);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar10 = 0;
    pcVar7 = pcVar3;
    uVar8 = param_5;
    do {
      if ((&cStack_f9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    puStack_190 = auStack_140;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puStack_190);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    ppcVar4 = &pcStack_1a0;
    pcStack_168 = FUN_105113598;
    pcStack_188 = pcVar2;
    pcStack_180 = pcVar6;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_b0;
    _objc_retain(pcVar7);
    _objc_retain(uVar8);
    puStack_198 = PTR_PTR_1126e6380;
    pcStack_1a0 = pcVar3;
    _objc_msgSendSuper2(&pcStack_1a0,PTR_s_init_1125d9248);
    if (ppcVar4 != (char **)0x0) {
      _objc_storeWeak((char *)((long)ppcVar4 + 8),pcVar7);
      _objc_retain(uVar8);
      uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
      *(undefined8 *)((long)ppcVar4 + 0x10) = uVar8;
      _objc_release(uVar5);
      *(undefined8 *)((long)ppcVar4 + 0x18) = uVar9;
    }
    _objc_release(uVar8);
    _objc_release(pcVar7);
    return (char *)ppcVar4;
  }
  return pcVar2;
}



/* Entry: 105113324; end: 105113597;  */

/* WARNING: Removing unreachable block (ram,0x000105113568) */

char * FUN_105113324(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x24;
  char *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar6 = param_4;
  uVar7 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = auStack_70;
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110868718,acStack_c0);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    pcVar1 = pcVar2;
    uVar6 = param_5;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    puStack_f0 = auStack_a0;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puStack_f0);
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    ppcVar4 = &pcStack_100;
    pcStack_c8 = FUN_105113598;
    pcStack_e8 = pcVar2;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(uVar6);
    puStack_f8 = PTR_PTR_1126e6380;
    pcStack_100 = pcVar3;
    _objc_msgSendSuper2(&pcStack_100,PTR_s_init_1125d9248);
    if (ppcVar4 != (char **)0x0) {
      _objc_storeWeak((char *)((long)ppcVar4 + 8),pcVar1);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
      *(undefined8 *)((long)ppcVar4 + 0x10) = uVar6;
      _objc_release(uVar5);
      *(undefined8 *)((long)ppcVar4 + 0x18) = uVar7;
    }
    _objc_release(uVar6);
    _objc_release(pcVar1);
    return (char *)ppcVar4;
  }
  return pcVar2;
}



/* Entry: 105113598; end: 10511363b; -[SCCommunitySharingScope initWithDelegate:uiContainer:sourcePageViewName:] */

undefined1 *
FUN_105113598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6380;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10511363c; end: 105113653; -[SCCommunitySharingScope delegate] */

void FUN_10511363c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105113654; end: 10511365b; -[SCCommunitySharingScope uiContainer] */

undefined8 FUN_105113654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10511365c; end: 105113663; -[SCCommunitySharingScope sourcePageViewName] */

undefined8 FUN_10511365c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105113664; end: 10511368f; -[SCCommunitySharingScope .cxx_destruct] */

void FUN_105113664(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105113690; end: 10511376f; -[SCCustomReportV3EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105113690(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b4e68;
  _objc_alloc(PTR_PTR_1126b4e68);
  lVar2 = param_1 + _DAT_11271c95c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271c960;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271c964;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf44ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e7c0(puVar1,param_2,lVar2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf17a60(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105113770; end: 1051137b3; -[SCCustomReportV3EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105113770(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c964);
  _objc_destroyWeak(param_1 + _DAT_11271c960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c95c);
  return;
}



/* Entry: 1051137b4; end: 10511387f; -[SCCustomReportV3Router initWithReportScope:valdiRuntimeProvider:customReportComposerFactory:] */

undefined1 *
FUN_1051137b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6388;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105113880; end: 1051139d3; -[SCCustomReportV3Router begin] */

void FUN_105113880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf55860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c0b7720(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  puVar6 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  func_0x00010c1c1bc0(puVar1,param_2,puVar5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051139d4; end: 105113b27; -[SCCustomReportV3Router makeReportPageWithCoreDeps:] */

void FUN_1051139d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b4e70;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c133ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1416a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e8a0(puVar1,param_2,uVar2,uVar3,param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29c000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2223c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b4e78;
  _objc_alloc(PTR_PTR_1126b4e78);
  func_0x00010c00b8c0();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b4e80;
  _objc_alloc(PTR_PTR_1126b4e80);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar5,param_2,puVar1,puVar4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105113b28; end: 105113bd3; -[SCCustomReportV3Router reportDidCompleteWithCancelled:] */

void FUN_105113b28(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105113bd4;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105113bd4; end: 105113c33;  */

void FUN_105113bd4(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105113c34;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  uStack_18 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 105113c34; end: 105113c43;  */

void FUN_105113c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reportDidCompleteWithCancelled__11262a4f0,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105113c44; end: 105113d4b; -[SCCustomReportV3Router submitReportWithReasonId:comment:] */

void FUN_105113c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105113d4c;
  puStack_60 = &UNK_1108683b8;
  uStack_58 = uVar1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105113d4c; end: 105113e07;  */

void FUN_105113d4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c25f540(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105113e08; end: 105113e47;  */

void FUN_105113e08(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (param_2 != 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105113e48; end: 105113eab; -[SCCustomReportV3Router didSelectWebViewReasonWithReasonId:] */

void FUN_105113e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf7b360(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105113eac; end: 105113eb7; -[SCCustomReportV3Router pushToValdiMarshaller:] */

undefined8 FUN_105113eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2d8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010afc56f4();
  return param_3;
}



/* Entry: 105113eb8; end: 105113ef3; -[SCCustomReportV3Router .cxx_destruct] */

void FUN_105113eb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105113ef4; end: 105113f67; -[SCGrapheneDmdNotificationMetric2 init] */

undefined1 * FUN_105113ef4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6390;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105113f68; end: 105113fdf;  */

void FUN_105113f68(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108687b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105113fe0; end: 105114057;  */

void FUN_105113fe0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110868808,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105114058; end: 1051140cf;  */

void FUN_105114058(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110868858,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1051140d0; end: 105114147;  */

void FUN_1051140d0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108688a8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105114148; end: 105114483; -[SCInAppAppealEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105114148(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar18 = (long)_DAT_11271c978;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf06800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b4e88;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010beed520(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027060(puVar3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_retain(lVar2);
  _objc_retain(puVar3);
  if (lVar2 == 0) {
    func_0x00010c0aa540(puVar3);
  }
  else {
    lVar1 = lVar2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      func_0x00010c0aa5e0(puVar3);
    }
    else {
      lVar1 = lVar2;
      func_0x00010c243380();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c23f260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar1);
      if (lVar5 != 0) {
        _objc_release();
        _objc_release(lVar2);
        puVar6 = PTR_PTR_1126b4e90;
        _objc_alloc();
        lVar18 = param_1 + lVar18;
        _objc_loadWeakRetained();
        lVar1 = param_1 + _DAT_11271c97c;
        _objc_loadWeakRetained();
        lVar7 = lVar1;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1 + _DAT_11271c980;
        _objc_loadWeakRetained();
        lVar8 = lVar4;
        func_0x00010bf66980();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf66920();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1 + _DAT_11271c984;
        _objc_loadWeakRetained();
        lVar10 = lVar5;
        func_0x00010c295140();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_1 + _DAT_11271c988);
        uVar15 = *(undefined8 *)(param_1 + _DAT_11271c98c);
        lVar11 = param_1 + _DAT_11271c990;
        _objc_loadWeakRetained();
        lVar12 = lVar11;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = param_1 + _DAT_11271c998;
        _objc_loadWeakRetained();
        lVar14 = lVar13;
        func_0x00010c08d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff3800(puVar6,param_2,lVar18,lVar7,lVar9,lVar10,uVar16,uVar15,lVar12,puVar3,
                            lVar14);
        lVar17 = (long)_DAT_11271c994;
        uVar15 = *(undefined8 *)(param_1 + lVar17);
        *(undefined **)(param_1 + lVar17) = puVar6;
        _objc_release(uVar15);
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar5);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar4);
        _objc_release(lVar7);
        _objc_release(lVar1);
        _objc_release(lVar18);
        func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar17));
        goto LAB_105114458;
      }
      func_0x00010c0aa560(puVar3);
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf067c0();
  _objc_release(lVar1);
  _objc_release(param_1);
LAB_105114458:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105114484; end: 10511450f; -[SCInAppAppealEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105114484(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271c978;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e6398;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105114510; end: 1051145a7; -[SCInAppAppealEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105114510(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c98c,0);
  _objc_storeStrong(param_1 + _DAT_11271c988,0);
  _objc_destroyWeak(param_1 + _DAT_11271c984);
  _objc_destroyWeak(param_1 + _DAT_11271c990);
  _objc_destroyWeak(param_1 + _DAT_11271c998);
  _objc_destroyWeak(param_1 + _DAT_11271c980);
  _objc_destroyWeak(param_1 + _DAT_11271c97c);
  _objc_destroyWeak(param_1 + _DAT_11271c978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c994,0);
  return;
}



/* Entry: 1051145a8; end: 105114637; -[SCNativeAppealLogger initWithLockReason:] */

undefined1 * FUN_1051145a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e63a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4e98;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105114638; end: 105114643; -[SCNativeAppealLogger logMissingAppealData] */

void FUN_105114638(long param_1)

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
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110868988,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105114644; end: 105114653; -[SCNativeAppealLogger logMissingUsername] */

undefined ** FUN_105114644(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar5 = *(undefined ***)(param_1 + 0x10);
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  _objc_retain(ppuVar5);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_1108689d8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108689d8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar4;
  puVar8 = puVar6;
  _objc_retain(ppuVar4);
  if (ppuVar3 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar3[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar5 = (undefined **)&UNK_110868a28;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110868a28,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  if (ppuVar3 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar3[1];
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_160,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110868a78,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  ppuVar4 = ppuVar5;
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  __Unwind_Resume(ppuVar4);
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 105114654; end: 105114663; -[SCNativeAppealLogger logMissingAuth] */

undefined ** FUN_105114654(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar4 = *(undefined ***)(param_1 + 0x10);
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar4;
  _objc_retain(ppuVar4);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar5 = (undefined **)&UNK_110868a28;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110868a28,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  if (ppuVar3 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar3[1];
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110868a78,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar4 = ppuVar5;
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  __Unwind_Resume(ppuVar4);
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 105114664; end: 105114673; -[SCNativeAppealLogger logMissingAgeVerificationData] */

undefined ** FUN_105114664(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar2 = *(undefined ***)(param_1 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar2);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110868a78,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar4 = ppuVar2;
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  __Unwind_Resume(ppuVar4);
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 105114674; end: 1051146a3; -[SCNativeAppealLogger .cxx_destruct] */

void FUN_105114674(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051146a4; end: 105114717; -[SCAppealAuthDelegate initWithSnapSessionResponse:] */

undefined1 * FUN_1051146a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e63a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105114718; end: 10511487b; -[SCAppealAuthDelegate getAuthContext:callback:] */

void FUN_105114718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b4ea0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c23f260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020de0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b4ea8;
  _objc_alloc(PTR_PTR_1126b4ea8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a240(puVar5);
  _objc_release(puVar6);
  func_0x00010c0e2fc0(param_4);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10511487c; end: 105114887; -[SCAppealAuthDelegate .cxx_destruct] */

void FUN_10511487c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105114888; end: 1051149d7; -[SCAppealGrpcService initWithSnapSessionResponse:] */

undefined8 * FUN_105114888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e63b0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051149d8; end: 105114a57;  */

void FUN_1051149d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdf5340(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4eb0;
    _objc_alloc(PTR_PTR_1126b4eb0);
    func_0x00010c058f80();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105114a58; end: 105114b5f; -[SCAppealGrpcService _createUnifiedGrpcServiceWithSnapSessionReponse:] */

void FUN_105114a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,15000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4eb8;
  _objc_alloc(PTR_PTR_1126b4eb8);
  func_0x00010c048700();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b4ec0;
  _objc_alloc(PTR_PTR_1126b4ec0);
  func_0x00010c034960();
  puVar4 = PTR_PTR_1126b4ec8;
  func_0x00010bf543a0(PTR_PTR_1126b4ec8,param_2,&PTR____CFConstantStringClassReference_110dc6358,
                      puVar1,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105114b60; end: 105114c13; -[SCAppealGrpcService _callOptionsBuilder] */

void FUN_105114b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x000106b7ff44();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    func_0x000106b7ff44();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110dadcb8);
    _objc_release(puVar3);
  }
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105114c14; end: 105114dcf; -[SCAppealGrpcService submitAppealWithSubmitAppealRequest:] */

void FUN_105114c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd8d60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4ed0;
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  func_0x00010c1b4f60(puVar2,param_2,0);
  func_0x00010c080d60(puVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105114d14;
  puStack_50 = &UNK_1108683b8;
  puVar3 = PTR_PTR_1126ae6b8;
  uStack_48 = param_1;
  puStack_40 = puVar2;
  uStack_38 = uVar1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105114dd0; end: 105114ef7;  */

void FUN_105114dd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dc6378,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105114ef8;
    puStack_50 = &UNK_110868928;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010c25eea0(lVar2,param_2,uVar6,uVar1,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105114ef8; end: 105114f8b;  */

void FUN_105114ef8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105114f8c; end: 105115133; -[SCAppealGrpcService checkExistingAppealWithCheckExistingAppealRequest:] */

void FUN_105114f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd8d60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105115068;
  puStack_50 = &UNK_1108683b8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = uVar1;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105115134; end: 10511527f;  */

void FUN_105115134(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dc6378,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar3 = PTR_PTR_1126b4ed8;
    _objc_alloc(PTR_PTR_1126b4ed8);
    func_0x00010c008360();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105115280;
    puStack_50 = &UNK_110868958;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_48 = uVar4;
    func_0x00010bf37e20(lVar1,param_2,puVar3,uVar5,&puStack_68);
    _objc_release(puVar3);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105115280; end: 105115313;  */

void FUN_105115280(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105115314; end: 105115343; -[SCAppealGrpcService .cxx_destruct] */

void FUN_105115314(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105115344; end: 1051153b7; -[UNISCAppealPbAppealService initWithUnifiedGrpcService:] */

undefined1 * FUN_105115344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e63b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051153b8; end: 10511549b; -[UNISCAppealPbAppealService submitAppealWithRequest:callOptionsBuilder:handler:] */

void FUN_1051153b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b4ee0;
  _objc_opt_class(PTR_PTR_1126b4ee0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc6398,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10511549c; end: 10511557f; -[UNISCAppealPbAppealService getAppealStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_10511549c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b4ee8;
  _objc_opt_class(PTR_PTR_1126b4ee8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc63b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105115580; end: 105115663; -[UNISCAppealPbAppealService checkExistingOpenAppealWithRequest:callOptionsBuilder:handler:] */

void FUN_105115580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b4ef0;
  _objc_opt_class(PTR_PTR_1126b4ef0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc63d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105115664; end: 105115747; -[UNISCAppealPbAppealService updateAppealWithRequest:callOptionsBuilder:handler:] */

void FUN_105115664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b4ef8;
  _objc_opt_class(PTR_PTR_1126b4ef8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc63f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105115748; end: 105115753; -[UNISCAppealPbAppealService .cxx_destruct] */

void FUN_105115748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105115754; end: 1051159bf; -[SCNativeAppealRouter initWithAppealScope:valdiRuntimeProvider:deckHierarchyFactory:blizzardLogger:webBrowsingScopeExposer:ageVerifcationScopeExposer:circumstanceEngine:logger:loginService:] */

undefined8 *
FUN_105115754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e63c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4f00;
    _objc_alloc();
    uVar4 = puVar1[1];
    func_0x00010bf06800(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c243380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048700();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
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
  }
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



/* Entry: 1051159c0; end: 105115b67; -[SCNativeAppealRouter begin] */

void FUN_1051159c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126af108;
  _objc_opt_new(PTR_PTR_1126af108);
  func_0x00010c1c8b80();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar8);
  _objc_release(uVar4);
  lVar5 = param_1;
  func_0x00010be5b520(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b4f08;
  _objc_alloc(PTR_PTR_1126b4f08);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf06800(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3840(puVar6,param_2,uVar1,lVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126b4f10;
  uVar1 = uVar2;
  func_0x00010c085ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0e0(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c08b4e0(puVar7,param_2,puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105115b68; end: 105115dc7; -[SCNativeAppealRouter _makeAppealDeps] */

void FUN_105115b68(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf553a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4f18;
  _objc_alloc(PTR_PTR_1126b4f18);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105115dc8;
  puStack_90 = &UNK_110843540;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105115e20;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_copyWeak(auStack_d8,auStack_80);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0098e0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000106b7ff1c(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7aa0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000106b7ff30(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3040(puVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105115dc8; end: 105115e93;  */

void FUN_105115dc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d880();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105115e94; end: 10511601b; -[SCNativeAppealRouter _openUrl:] */

void FUN_105115e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10511601c;
  puStack_60 = &UNK_110842308;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(puVar3,param_2,&puStack_78,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  lVar4 = param_1;
  func_0x00010be236c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf22ba0(puVar3,param_2,puVar2,puVar1,lVar4,param_1,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 10511601c; end: 105116033;  */

void FUN_10511601c(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105116034; end: 1051161e7; -[SCNativeAppealRouter _launchAgeComplianceAppealSessionId:] */

void FUN_105116034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf06800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010beeed20();
  _objc_release(uVar8);
  if ((int)uVar1 != 0xc) {
    func_0x00010c0aa520(*(undefined8 *)(param_1 + 0x40));
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf06800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befe860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010befe880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126b4f20;
    _objc_alloc(PTR_PTR_1126b4f20);
    lVar2 = lVar3;
    func_0x00010befe880(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2800(puVar4,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar5 = PTR_PTR_1126b4f28;
  _objc_alloc(PTR_PTR_1126b4f28);
  func_0x00010bff3820();
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126b4f30;
  _objc_alloc(PTR_PTR_1126b4f30);
  lVar2 = param_1;
  func_0x00010be236c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf10d20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058320(puVar6,param_2,lVar2,param_1,puVar4,lVar7,puVar5);
  _objc_release(lVar7);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1051161e8; end: 105116233; -[SCNativeAppealRouter _getTopUIContainer] */

void FUN_1051161e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf668c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105116234; end: 10511626b; -[SCNativeAppealRouter _onComplete] */

void FUN_105116234(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf067c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10511626c; end: 1051162b3; -[SCNativeAppealRouter webBrowserDidDismiss:] */

void FUN_10511626c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051162b4; end: 105116353; -[SCNativeAppealRouter ageVerificationScopeDidCompleteWithResult:] */

void FUN_1051162b4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((param_3 < 5) && ((1L << (param_3 & 0x3f) & 0x13U) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf6b020(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf067c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 105116354; end: 1051163ef; -[SCNativeAppealRouter .cxx_destruct] */

void FUN_105116354(long param_1)

{
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



/* Entry: 1051163f0; end: 105116463; -[SCGrapheneNativeAppealsMetric2 init] */

undefined1 * FUN_1051163f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e63c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105116464; end: 1051164db;  */

void FUN_105116464(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110868988,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1051164dc; end: 10511664f;  */

undefined ** FUN_1051164dc(long param_1,undefined **param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar3 = (undefined **)&UNK_1108689d8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108689d8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar3;
  puVar7 = puVar5;
  _objc_retain(ppuVar3);
  if (ppuVar2 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar2[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_e0,pcVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar4 = (undefined **)&UNK_110868a28;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110868a28,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar4);
  if (ppuVar2 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar2[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110868a78,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume(ppuVar3);
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 105116650; end: 1051167c3;  */

undefined ** FUN_105116650(long param_1,undefined **param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar3 = (undefined **)&UNK_110868a28;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110868a28,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  if (ppuVar2 != (undefined **)0x0) {
    plVar6 = (long *)ppuVar2[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_e0,pcVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110868a78,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 1051167c4; end: 105116937;  */

undefined ** FUN_1051167c4(long param_1,undefined **param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110868a78,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 105116938; end: 105116943; +[SCCAppealLauncher modulePath] */

undefined ** FUN_105116938(void)

{
  return &PTR____CFConstantStringClassReference_110dc6418;
}



/* Entry: 105116944; end: 10511694b; +[SCCAppealLauncher asyncStrictMode] */

undefined8 FUN_105116944(void)

{
  return 0;
}



/* Entry: 10511694c; end: 10511699f; -[SCCAppealLauncher launchAppealWithArgs:] */

void FUN_10511694c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051169a0; end: 105116af7; +[SCCAppealLauncher invokeWithJSRuntimeProvider:args:completionHandler:] */

void FUN_1051169a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105116a84;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105116af8; end: 105116b1b; +[SCCAppealLauncher valdiMarshallableObjectDescriptor] */

void FUN_105116af8(undefined8 *param_1)

{
  *param_1 = &PTR_s_launchAppeal_110868af8;
  param_1[1] = &PTR_s_SCCAppealLauncherArgs_110868b28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105116b1c; end: 105116b3f; +[SCCNativeAppealService valdiMarshallableObjectDescriptor] */

void FUN_105116b1c(undefined8 *param_1)

{
  *param_1 = &PTR_s_submitAppeal_110868b38;
  param_1[1] = &PTR_s_SCBridgeObservable_110868b80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105116b40; end: 105116c77; -[SCCAppealDependencies initWithDeckHierarchy:openUrl:onComplete:nativeAppealService:openAgeCompliance:blizzardLogger:deviceId:] */

undefined8 *
FUN_105116b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_68 = PTR_PTR_1126e63d0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 105116c78; end: 105116c8b; +[SCCAppealDependencies valdiMarshallableObjectDescriptor] */

void FUN_105116c78(undefined8 *param_1)

{
  *param_1 = &PTR_s_deckHierarchy_110868b90;
  param_1[1] = &PTR_s_SCCDeckHierarchyInterface_110868c98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105116c8c; end: 105116cc7; -[SCCAppealLauncherArgs initWithAppealableLockDataBytes:dependencies:] */

void FUN_105116c8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e63d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105116cc8; end: 105116ceb; +[SCCAppealLauncherArgs valdiMarshallableObjectDescriptor] */

void FUN_105116cc8(undefined8 *param_1)

{
  *param_1 = &PTR_s_appealableLockDataBytes_110868cb8;
  param_1[1] = &PTR_s_SCCAppealDependencies_110868d00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105116cec; end: 105116d67;  */

undefined * FUN_105116cec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b93d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dc6438,
                        &UNK_10dd90040,&UNK_10dd900b0,7,FUN_105116d68,0);
    do {
      if (puRam00000001136b93d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b93d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b93d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b93d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b93d8;
}



/* Entry: 105116d68; end: 105116d73;  */

bool FUN_105116d68(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 105116d74; end: 105116def;  */

undefined * FUN_105116d74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b93e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dc6458,
                        &UNK_10dd900cc,&UNK_10dd900fc,3,FUN_105116df0,0);
    do {
      if (puRam00000001136b93e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b93e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b93e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b93e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b93e0;
}



/* Entry: 105116df0; end: 105116dfb;  */

bool FUN_105116df0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105116dfc; end: 105116e87; +[SCAppealPbSubmitAppealRequest descriptor] */

undefined * FUN_105116dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b93e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19130,
                        &PTR____CFConstantStringClassReference_110dc6478,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_requesterUserId_1130c43d8,9,
                        0x48,0x1c);
    func_0x00010c229040();
    puRam00000001136b93e8 = puVar1;
  }
  return puRam00000001136b93e8;
}



/* Entry: 105116e88; end: 105116eef; +[SCAppealPbAccountLockAppeal descriptor] */

void FUN_105116e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b93f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19180,
                        &PTR____CFConstantStringClassReference_110dc6498,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_userEmail_1130c40b8,1,0x10,
                        0x1c);
    puRam00000001136b93f0 = puVar1;
  }
  return;
}



/* Entry: 105116ef0; end: 105116f57; +[SCAppealPbEnforcementAppeal descriptor] */

void FUN_105116ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b93f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a191d0,
                        &PTR____CFConstantStringClassReference_110dc64b8,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_enforcedTaskId_1130c40d8,1,
                        0x10,0x1c);
    puRam00000001136b93f8 = puVar1;
  }
  return;
}



/* Entry: 105116f58; end: 105116fbf; +[SCAppealPbSubmitAppealResponse descriptor] */

void FUN_105116f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9400 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19220,
                        &PTR____CFConstantStringClassReference_110dc64d8,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_appealData_1130c40f8,1,0x10,
                        0x1c);
    puRam00000001136b9400 = puVar1;
  }
  return;
}



/* Entry: 105116fc0; end: 105117027; +[SCAppealPbAppealError descriptor] */

void FUN_105116fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19270,
                        &PTR____CFConstantStringClassReference_110dc64f8,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_errorMessage_1130c4118,1,0x10
                        ,0x1c);
    puRam00000001136b9408 = puVar1;
  }
  return;
}


