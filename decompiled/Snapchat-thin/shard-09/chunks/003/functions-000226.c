/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c0a914; end: 106c0aa17; -[SCLensFriendsFeedContextCleanUpJob processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106c0a914(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(in_x5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf87660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c0aa18;
  puStack_58 = &UNK_110968940;
  uStack_50 = in_x5;
  uStack_48 = param_1;
  _objc_retain(in_x5);
  func_0x00010c0f8500(uVar3,param_3,&puStack_70,0,&PTR___NSConcreteGlobalBlock_110968970);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106c0aa18; end: 106c0ac03;  */

ulong FUN_106c0aa18(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = param_2;
  FUN_106c13d18();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 0.0;
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar8 = *(undefined8 *)(uVar9 * 8);
      uVar6 = uVar8;
      func_0x00010bf9a520(uVar8);
      _objc_retainAutoreleasedReturnValue();
      dVar10 = *(double *)(param_1 + 0x28);
      uVar4 = uVar6;
      func_0x0001006372a4();
      _objc_release(uVar6);
      puVar5 = PTR_PTR_1126d15d0;
      _objc_alloc(PTR_PTR_1126d15d0);
      func_0x00010bf50280(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004ee0(puVar5);
      _objc_release(uVar8);
      FUN_106c13c90(param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = uVar2;
    func_0x00010bf52a60();
  }
  uVar6 = 0;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  func_0x00010bf5ab40(uVar6);
  dVar11 = dVar10;
  func_0x00010c27d180(uVar6);
  _objc_release(uVar6);
  return (ulong)(*(double *)(param_2 + 0x20) < dVar10 + dVar11);
}



/* Entry: 106c0ac04; end: 106c0ac63;  */

bool FUN_106c0ac04(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  
  _objc_retain(param_3);
  func_0x00010bf5ab40(param_3);
  dVar1 = param_1;
  func_0x00010c27d180(param_3);
  _objc_release(param_3);
  return *(double *)(param_2 + 0x20) < param_1 + dVar1;
}



/* Entry: 106c0ac64; end: 106c0ac67;  */

void FUN_106c0ac64(void)

{
  return;
}



/* Entry: 106c0ac68; end: 106c0ac73; -[SCLensFriendsFeedContextCleanUpJob .cxx_destruct] */

void FUN_106c0ac68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0ac74; end: 106c0aed3; -[SCLensFriendsFeedContextCleanUpJobEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0ac74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275ad84;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(lVar9);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126b7228;
    _objc_opt_new(PTR_PTR_1126b7228);
    puVar4 = PTR_PTR_1126b7238;
    _objc_opt_new(PTR_PTR_1126b7238);
    puVar5 = PTR_PTR_1126b7248;
    _objc_opt_new(PTR_PTR_1126b7248);
    func_0x00010c1eac20();
    func_0x00010c1e9180(puVar4,param_2,puVar5);
    func_0x00010c1b67e0(puVar3,param_2,puVar4);
    puVar6 = PTR_PTR_1126b7230;
    _objc_opt_new(PTR_PTR_1126b7230);
    func_0x00010c1c35c0();
    func_0x00010c1edae0(puVar6,param_2,0x3c);
    func_0x00010c1ed860(puVar3,param_2,puVar6);
    puVar7 = PTR_PTR_1126b7240;
    _objc_opt_new(PTR_PTR_1126b7240);
    puVar8 = puVar7;
    func_0x00010bf06200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bf06200(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bf06200(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar8);
    func_0x00010c1b66e0(puVar3,param_2,puVar7);
    func_0x00010c198180(puVar3,param_2,3);
    func_0x00010c1b6840(puVar3,param_2,&PTR____CFConstantStringClassReference_110e79698);
    func_0x00010c1b6780(puVar3,param_2,0);
    param_1 = param_1 + _DAT_11275ad7c;
    _objc_loadWeakRetained(param_1);
    lVar9 = param_1;
    func_0x00010c085740();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200();
    _objc_release(lVar1);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106c0aed4; end: 106c0af17; -[SCLensFriendsFeedContextCleanUpJobEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0aed4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ad84);
  _objc_destroyWeak(param_1 + _DAT_11275ad7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ad80);
  return;
}



/* Entry: 106c0af18; end: 106c0b0ef; -[SCLensFriendsFeedContextCleanupStorageEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0af18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11275ad94;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(lVar6);
  if ((int)lVar2 == 0) {
    puVar4 = PTR_PTR_1126afc98;
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11275ad88;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar4;
    _objc_release(uVar5);
  }
  else {
    puVar4 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11275ad88;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar4;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1 + _DAT_11275ad90;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f8500(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c0b0f0; end: 106c0b0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c0b0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 in_x5;
  undefined4 uVar9;
  undefined8 in_x6;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15d0);
  if (param_4 == (undefined1 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_4);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x00010054c81c(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar1);
  uVar6 = SUB84(auStack_d8,0);
  uVar7 = 0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  uVar9 = (undefined4)in_x6;
  uVar8 = (undefined4)in_x5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar11 = *plStack_160;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = PTR_PTR_1126d1638;
        FUN_106c15d58(PTR_PTR_1126d1638,*(undefined8 *)(lStack_168 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar2 != puVar12);
      uVar6 = SUB84(auStack_d8,0);
      uVar7 = 0x10;
      puVar2 = puVar1;
      puVar12 = &uStack_170;
      func_0x00010bf52a60();
      uVar9 = (undefined4)in_x6;
      uVar8 = (undefined4)in_x5;
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  __Unwind_Resume();
  ppuVar5 = &puStack_1e0;
  _objc_retain(puVar12);
  puStack_1d8 = PTR_PTR_1126f5c20;
  puStack_1e0 = puVar4;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar4 = (undefined1 *)puVar12;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11275ae78);
    *(undefined1 **)((long)ppuVar5 + (long)_DAT_11275ae78) = puVar4;
    _objc_release(uVar10);
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae7c) = uVar6;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae80) = uVar7;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae84) = uVar8;
    *(ulong *)((long)ppuVar5 + (long)_DAT_11275ae88) =
         CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,CONCAT12(
                                                  uVar15,CONCAT11(uVar14,uVar13)))))));
    *(undefined8 *)((long)ppuVar5 + (long)_DAT_11275ae8c) = param_2;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae90) = uVar9;
  }
  _objc_release(puVar12);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106c0b0f8; end: 106c0b133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0b0f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + _DAT_11275ad88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c0b134; end: 106c0b187; -[SCLensFriendsFeedContextCleanupStorageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0b134(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ad94);
  _objc_destroyWeak(param_1 + _DAT_11275ad90);
  _objc_destroyWeak(param_1 + _DAT_11275ad8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ad88,0);
  return;
}



/* Entry: 106c0b188; end: 106c0b2a3; -[SCLensFriendsFeedContextConversationUpdatesTracker initWithConversationDataUpdateAnnouncer:] */

undefined1 * FUN_106c0b188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5bf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010bec83e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c0b2a4; end: 106c0b3cb; -[SCLensFriendsFeedContextConversationUpdatesTracker _subscribeToSendMessageUpdates] */

void FUN_106c0b2a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15b920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106c0b3cc; end: 106c0b463;  */

void FUN_106c0b3cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c252d60();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_2;
      func_0x00010bf43e40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000100504554();
      _objc_release(lVar1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
      _objc_release(lVar2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0b464; end: 106c0b4ab;  */

void FUN_106c0b464(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c0b4ac; end: 106c0b4b3; -[SCLensFriendsFeedContextConversationUpdatesTracker sentMessageByUserPublisher] */

undefined8 FUN_106c0b4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c0b4b4; end: 106c0b4e3; -[SCLensFriendsFeedContextConversationUpdatesTracker setSentMessageByUserPublisher:] */

void FUN_106c0b4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c0b4e4; end: 106c0b52b; -[SCLensFriendsFeedContextConversationUpdatesTracker .cxx_destruct] */

void FUN_106c0b4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0b52c; end: 106c0b533; -[SCLensFriendsFeedContextTopPriorityItemContainer friendsFeedItem] */

undefined8 FUN_106c0b52c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c0b534; end: 106c0b563; -[SCLensFriendsFeedContextTopPriorityItemContainer setFriendsFeedItem:] */

void FUN_106c0b534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c0b564; end: 106c0b56b; -[SCLensFriendsFeedContextTopPriorityItemContainer event] */

undefined8 FUN_106c0b564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c0b56c; end: 106c0b59b; -[SCLensFriendsFeedContextTopPriorityItemContainer setEvent:] */

void FUN_106c0b56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c0b59c; end: 106c0b5cb; -[SCLensFriendsFeedContextTopPriorityItemContainer .cxx_destruct] */

void FUN_106c0b59c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0b5cc; end: 106c0b8eb; -[SCLensFriendsFeedContextDataFetcher initWithFriendsFeedDataCoordinator:docObjectContext:lensFriendsFeedContextDataStore:lensFriendsFeedContextConfigFetcher:messagingExperimentService:lensFriendsFeedContextEventFetcher:groupsDataTracker:impressionTracker:conversationUpdatesTracker:itemsHelper:performer:areSuggestionsUpdatesAllowed:] */

undefined8 *
FUN_106c0b5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f5bf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x12) = param_14;
    *(undefined1 *)((long)puVar1 + 0x91) = 1;
    _objc_retain(param_13);
    uVar2 = puVar1[1];
    puVar1[1] = param_13;
    _objc_release(uVar2);
    func_0x00010bec7260(puVar1);
    func_0x00010bec7880(puVar1);
    func_0x00010bec79e0(puVar1);
    func_0x00010bec89e0(puVar1);
  }
  _objc_release(param_13);
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



/* Entry: 106c0b8ec; end: 106c0ba13; -[SCLensFriendsFeedContextDataFetcher _subscribeToAllGroupsUpdates] */

void FUN_106c0b8ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106c0ba14; end: 106c0ba6b;  */

void FUN_106c0ba14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0ba6c; end: 106c0bc63; -[SCLensFriendsFeedContextDataFetcher _subscribeToImpressionTrackerUpdates] */

void FUN_106c0ba6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106c0bc64;
  puStack_78 = &UNK_11086a720;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0738e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106c0bc64; end: 106c0bc97;  */

void FUN_106c0bc64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80b20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c0bc98; end: 106c0bdfb;  */

void FUN_106c0bc98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(lVar1 + 0x90) = (char)uVar3;
    if (((int)uVar3 != 0) && (*(char *)(lVar1 + 0x91) == '\x01')) {
      lVar2 = *(long *)(lVar1 + 0x98);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        func_0x00010be80b20(lVar1);
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + 0x48);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
        func_0x00010c045760();
        uVar5 = *(undefined8 *)(lVar1 + 8);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_58,param_1 + 0x20);
        func_0x00010c0bb500(uVar3);
        _objc_release(uVar5);
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106c0bdfc; end: 106c0be37;  */

void FUN_106c0bdfc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x98));
    func_0x00010be80b20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c0be38; end: 106c0bf5f; -[SCLensFriendsFeedContextDataFetcher _subsribeToSentMessagesByUser] */

void FUN_106c0be38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106c0bf60; end: 106c0c0bf;  */

void FUN_106c0bf60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0)) {
    if (*(char *)(lVar1 + 0x90) == '\x01') {
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,param_1 + 0x20);
      func_0x00010c0bb500(uVar3);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010befa160(*(undefined8 *)(lVar1 + 0x98));
      *(undefined1 *)(lVar1 + 0x91) = 1;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106c0c0c0; end: 106c0c0f3;  */

void FUN_106c0c0c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80b20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c0c0f4; end: 106c0c21b; -[SCLensFriendsFeedContextDataFetcher _subscribeToFriendsFeedDataChanges] */

void FUN_106c0c0f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106c0c21c; end: 106c0c2bf;  */

void FUN_106c0c21c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = param_2;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    _objc_release(uVar2);
    if (*(char *)(param_1 + 0x90) == '\x01') {
      *(undefined1 *)(param_1 + 0x91) = 0;
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x70));
      lVar1 = param_1;
      func_0x00010be812e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar1;
      _objc_release(uVar3);
    }
    else {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0c2c0; end: 106c0c367; -[SCLensFriendsFeedContextDataFetcher _processCurrentFriendsFeedItems] */

void FUN_106c0c2c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106c0c368; end: 106c0c3db;  */

void FUN_106c0c368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      *(undefined1 *)(param_1 + 0x91) = 0;
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x70));
      lVar1 = param_1;
      func_0x00010be812e0(param_1,param_2,*(undefined8 *)(param_1 + 0xa0));
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar1;
      _objc_release(uVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c0c3dc; end: 106c0d03f; -[SCLensFriendsFeedContextDataFetcher _processFriendsFeedItems:] */

void FUN_106c0c3dc(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  bool bVar27;
  double dVar28;
  double dVar29;
  ulong uStack_280;
  undefined1 auStack_1c8 [8];
  ulong uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dec00();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf49840();
  _objc_release(uVar4);
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c259c20();
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar9 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
      func_0x00010c06d300();
      if ((uVar4 < uVar3) || (iVar1 != 0)) {
        uVar12 = uVar9;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar12;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c08fa60();
        _objc_release(uVar10);
        _objc_release(uVar12);
        if (uVar11 != 0) {
          uVar12 = *(ulong *)(param_2 + 0x88);
          func_0x00010c07ee00();
          if ((uVar12 & 1) == 0) {
            uVar12 = uVar9;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010bf509a0();
            if (uVar10 == 1) {
LAB_106c0c600:
              uVar11 = uVar9;
              func_0x00010bef0c80(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar11;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              lVar26 = param_2;
              func_0x00010be349c0();
              if ((int)lVar26 == 0) {
                bVar27 = false;
              }
              else {
                uVar14 = uVar9;
                func_0x00010bef0c80(uVar9);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar14;
                func_0x00010c0891c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f3a0();
                bVar27 = -604800.0 < param_1;
                _objc_release(uVar15);
                _objc_release(uVar14);
              }
              _objc_release(uVar13);
              _objc_release(uVar11);
              if (uVar10 != 1) goto LAB_106c0c69c;
            }
            else {
              uStack_280 = uVar9;
              func_0x00010bef0c80();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uStack_280;
              func_0x00010c07d980();
              if ((uVar11 & 1) == 0) goto LAB_106c0c600;
              bVar27 = false;
LAB_106c0c69c:
              _objc_release(uStack_280);
            }
            _objc_release(uVar12);
            if ((uVar2 & 1) == 0) {
              uVar12 = uVar9;
              func_0x00010c258f40();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar12;
              func_0x000107cfbbc4();
              uVar25 = (uint)uVar10;
              _objc_release(uVar12);
            }
            else {
              uVar25 = 0;
            }
            if (bVar27 || (uVar25 & 1) != 0) {
              uVar12 = uVar9;
              func_0x00010bef0c80(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar12;
              func_0x00010bf50280();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8);
              _objc_release(uVar10);
              _objc_release(uVar12);
            }
            puVar16 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            func_0x00010c225ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            func_0x00010c225ec0();
            _objc_retainAutoreleasedReturnValue();
            if (iVar1 == 0) {
              func_0x00010befa120(puVar17);
            }
            else {
              func_0x00010befa120(puVar16);
              uVar12 = uVar9;
              func_0x00010bef0c80(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar12;
              func_0x00010bf50280();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar7);
              _objc_release(uVar10);
              _objc_release(uVar12);
            }
            uVar12 = uVar9;
            func_0x00010c0fc580();
            _objc_retainAutoreleasedReturnValue();
            dVar28 = param_1;
            if (uVar12 == 0) {
LAB_106c0c818:
              puVar18 = puVar17;
            }
            else {
              uVar10 = uVar9;
              func_0x00010c0fc580(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f3a0();
              dVar28 = param_1;
              _objc_release(uVar10);
              _objc_release(uVar12);
              puVar18 = puVar16;
              if (param_1 <= -14400.0) goto LAB_106c0c818;
            }
            func_0x00010befa120(puVar18);
            puStack_b0 = &uStack_b8;
            uStack_b8 = 0;
            uStack_a8 = 0x2020000000;
            uStack_a0 = 0;
            uVar12 = uVar9;
            func_0x00010bef0c80(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010c0cb340();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_e0 = 0xc2000000;
            pcStack_d8 = FUN_106c0d040;
            puStack_d0 = &UNK_1109689f0;
            _objc_retain(uVar9);
            uStack_c8 = uVar9;
            _objc_retain(puVar16);
            puStack_118 = puVar18;
            uStack_110 = 0xc2000000;
            uStack_108 = 0x106c0d124;
            puStack_100 = &UNK_110968a20;
            puStack_c0 = puVar16;
            _objc_retain(uVar9);
            uStack_f8 = uVar9;
            _objc_retain(puVar16);
            puStack_140 = puVar18;
            uStack_138 = 0xc2000000;
            pcStack_130 = FUN_106c0d1f8;
            puStack_128 = &UNK_110968a50;
            puStack_120 = &uStack_b8;
            puStack_f0 = puVar16;
            func_0x00010c0bfe20(uVar10);
            _objc_release(uVar10);
            _objc_release(uVar12);
            lVar26 = *(long *)(param_2 + 0x60);
            uVar12 = uVar9;
            func_0x00010bef0c80(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            _objc_release(uVar12);
            dVar29 = dVar28;
            if (lVar26 == 0) {
LAB_106c0c9b0:
              param_1 = dVar29;
              if (*(char *)(puStack_b0 + 3) == '\x01') {
                uVar12 = uVar9;
                func_0x00010bef0c80(uVar9);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar12;
                func_0x00010c0891c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f3a0();
                param_1 = dVar29;
                _objc_release(uVar10);
                _objc_release(uVar12);
                if (-86400.0 < dVar29) goto LAB_106c0ca0c;
              }
            }
            else {
              lVar19 = lVar26;
              func_0x00010bf5ab40(lVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f3a0();
              param_1 = dVar28;
              _objc_release(lVar19);
              dVar29 = param_1;
              if (dVar28 <= -86400.0) goto LAB_106c0c9b0;
LAB_106c0ca0c:
              func_0x00010befa120(puVar16);
            }
            iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c07be20();
            puVar18 = puVar16;
            if (iVar1 == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            uVar12 = uVar9;
            func_0x00010bf96da0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_168 = 0xc2000000;
            pcStack_160 = FUN_106c0d288;
            puStack_158 = &UNK_1109273f8;
            _objc_retain(puVar16);
            puStack_150 = puVar16;
            _objc_retain(puVar17);
            puStack_148 = puVar17;
            func_0x00010c0c0020(uVar12);
            _objc_release(uVar12);
            uVar12 = uVar9;
            func_0x00010c258f40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1a0 = 0xc2000000;
            pcStack_198 = FUN_106c0d45c;
            puStack_190 = &UNK_110968a80;
            lStack_188 = param_2;
            _objc_retain(puVar16);
            puStack_180 = puVar16;
            _objc_retain(puVar17);
            puStack_178 = puVar17;
            func_0x00010c0c0560(uVar12);
            _objc_release(uVar12);
            uVar25 = (uint)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c07ff00();
            puVar18 = puVar16;
            if ((lVar26 == 0 & uVar25) == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c077f60();
            puVar18 = puVar16;
            if (iVar1 == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c072260();
            puVar18 = puVar16;
            if (iVar1 == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c077d40();
            puVar18 = puVar16;
            if (iVar1 == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            func_0x00010bf657c0(*(undefined8 *)(param_2 + 0x88));
            lVar19 = param_2;
            func_0x00010bdf8140(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar21 = lVar19;
            func_0x00010c0d3c80();
            _objc_release(lVar19);
            lVar19 = lVar21;
            func_0x00010c0dfd40(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar16);
            _objc_release(lVar19);
            func_0x00010c12d3c0(lVar21);
            func_0x00010befa160(puVar17);
            iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c081120();
            puVar18 = puVar16;
            if (iVar1 == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
            func_0x00010c081140();
            puVar18 = puVar16;
            if (iVar1 == 0) {
              puVar18 = puVar17;
            }
            func_0x00010befa120(puVar18);
            func_0x00010bf529e0();
            uVar12 = uVar9;
            func_0x00010bef0c80(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(uVar10);
            _objc_release(uVar12);
            func_0x00010bf529e0();
            uVar12 = uVar9;
            func_0x00010bef0c80(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(uVar10);
            _objc_release(uVar12);
            _objc_release(lVar21);
            _objc_release(puVar20);
            _objc_release(puStack_178);
            _objc_release(puStack_180);
            _objc_release(puStack_148);
            _objc_release(puStack_150);
            _objc_release(lVar26);
            _objc_release(puStack_f0);
            _objc_release(uStack_f8);
            _objc_release(puStack_c0);
            _objc_release(uStack_c8);
            __Block_object_dispose(&uStack_b8,8);
            _objc_release(puVar17);
            _objc_release(puVar16);
          }
        }
      }
      _objc_release(uVar9);
      uVar4 = uVar4 + 1;
      uVar9 = param_4;
      func_0x00010bf529e0();
    } while (uVar4 < uVar9);
  }
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  lVar26 = param_2;
  func_0x00010be33d40();
  uVar22 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c0f7b20();
  _objc_release(uVar22);
  _objc_initWeak(auStack_1b0,param_2);
  uVar22 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_2 + 8);
  func_0x00010c11de00(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = (uint)lVar26 & ((uint)uVar23 ^ 1);
  _objc_copyWeak(auStack_1c8,auStack_1b0);
  _objc_retain(param_4);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  uStack_1b8 = (undefined1)uVar25;
  uStack_1b7 = (undefined1)uVar23;
  uStack_1c0 = uVar3;
  func_0x00010c285a20(uVar22);
  _objc_release(uVar24);
  _objc_release(uVar22);
  if ((uVar25 == 0) || (puVar16 = puVar7, func_0x00010bf529e0(), puVar16 != (undefined *)0x0)) {
    puVar16 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
  }
  else {
    func_0x00010be64940(param_2);
    puVar16 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
  }
  func_0x00010bffae00();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1b0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106c0d040; end: 106c0d1f7;  */

void FUN_106c0d040(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf283e0();
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07d980();
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bef0c80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (-86400.0 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x28),PTR_s_addObject__11259c1f0,
                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c86c8);
      return;
    }
  }
  return;
}



/* Entry: 106c0d1f8; end: 106c0d273;  */

void FUN_106c0d1f8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c0d274;
  puStack_20 = &UNK_110847180;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc660(param_2,param_2,0,0,&puStack_38,0,0,0,0,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 106c0d274; end: 106c0d287;  */

void FUN_106c0d274(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106c0d288; end: 106c0d45b;  */

void FUN_106c0d288(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      uVar1 = *(ulong *)(lVar5 * 8);
      func_0x00010bf33560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010c0720c0();
      if (((((uVar7 & 1) != 0) || (uVar7 = uVar1, func_0x00010c0720c0(), (uVar7 & 1) != 0)) ||
          (uVar7 = uVar1, func_0x00010c0720c0(), (uVar7 & 1) != 0)) ||
         ((uVar7 = uVar1, func_0x00010c0720c0(), (uVar7 & 1) != 0 ||
          (uVar7 = uVar1, func_0x00010c0720c0(), (int)uVar7 != 0)))) {
        _objc_release(uVar1);
        lVar6 = 0x20;
        goto LAB_106c0d408;
      }
      _objc_release(uVar1);
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
    lVar6 = param_2;
    func_0x00010bf52a60();
  }
  lVar6 = 0x28;
LAB_106c0d408:
  _objc_release(param_2);
  lVar6 = *(long *)(param_1 + lVar6);
  func_0x00010befa120();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar7 = *(ulong *)(*(long *)(lVar6 + 0x20) + 0x78);
    lVar3 = lVar2;
    func_0x00010c259cc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar3);
    _objc_release(lVar4);
    if ((uVar7 & 1) != 0) {
      lVar4 = 0x28;
      goto LAB_106c0d4e4;
    }
  }
  lVar4 = 0x30;
LAB_106c0d4e4:
  func_0x00010befa120(*(undefined8 *)(lVar6 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106c0d45c; end: 106c0d50b;  */

void FUN_106c0d45c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x78);
    lVar1 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if ((uVar3 & 1) != 0) {
      lVar2 = 0x28;
      goto LAB_106c0d4e4;
    }
  }
  lVar2 = 0x30;
LAB_106c0d4e4:
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0d50c; end: 106c0d70b;  */

void FUN_106c0d50c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_2 != 0) && ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0)) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010bde8be0();
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_106c0d70c;
      uStack_70 = 0x106c0d71c;
      uStack_68 = 0;
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      puStack_88 = &uStack_90;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_106c0d724;
      puStack_a8 = &UNK_110947df8;
      puStack_98 = &uStack_90;
      _objc_retain(lVar2);
      uVar4 = *(undefined8 *)(lVar1 + 8);
      lStack_a0 = lVar2;
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_d8,param_1 + 0x40);
      uStack_c8 = *(undefined1 *)(param_1 + 0x50);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uStack_d0 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0f8500(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_d8);
      _objc_release(lStack_a0);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106c0d70c; end: 106c0d723;  */

void FUN_106c0d70c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c0d724; end: 106c0d76b;  */

void FUN_106c0d724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_106c13984(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c0d76c; end: 106c0d7fb;  */

void FUN_106c0d76c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0)) {
    lVar2 = lVar1;
    func_0x00010be0b5e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedab20(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c0d7fc; end: 106c0d80f;  */

void FUN_106c0d7fc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106c0d810; end: 106c0dd37; -[SCLensFriendsFeedContextDataFetcher _updateLensSuggestionsFromConversationsEvents:friendsFeedItems:numberOfItemsToProcess:] */

void FUN_106c0d810(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar1 == 0) {
    func_0x00010be64940(param_1,param_2,PTR____NSDictionary0__struct_11034ab58);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_4;
    func_0x00010bf529e0();
    if (uVar13 != 0) {
      uVar13 = 0;
      do {
        uVar3 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010c08fa60();
        _objc_release(uVar9);
        _objc_release(uVar4);
        if (uVar5 != 0) {
          uVar4 = uVar3;
          func_0x00010bef0c80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar4;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010becd640(param_1,param_2,lVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          _objc_release(uVar9);
          _objc_release(uVar4);
          if ((lVar6 != 0) &&
             ((lVar1 = lVar6, func_0x00010c27c3e0(), uVar13 < param_5 || ((int)lVar1 == 1)))) {
            puVar12 = puVar2;
            func_0x00010bf529e0();
            if (puVar12 == (undefined *)0x0) {
              puVar12 = (undefined *)0xffffffffffffffff;
            }
            else {
              puVar15 = (undefined *)0x0;
              puVar14 = (undefined *)0xffffffffffffffff;
              do {
                puVar12 = puVar2;
                func_0x00010c0dfd40(puVar2,param_2,puVar15);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar12;
                func_0x00010bf99b20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar12);
                lVar1 = lVar6;
                func_0x00010c113c80();
                puVar12 = puVar7;
                func_0x00010c113c80();
                if ((uint)lVar1 < (uint)puVar12) {
                  _objc_release(puVar7);
                  goto LAB_106c0da34;
                }
                lVar1 = lVar6;
                func_0x00010c113c80();
                puVar8 = puVar7;
                func_0x00010c113c80();
                puVar12 = puVar15;
                if (puVar14 != (undefined *)0xffffffffffffffff || (int)lVar1 != (int)puVar8) {
                  puVar12 = puVar14;
                }
                _objc_release(puVar7);
                puVar15 = puVar15 + 1;
                puVar7 = puVar2;
                func_0x00010bf529e0();
                puVar14 = puVar12;
              } while (puVar15 < puVar7);
            }
            puVar15 = puVar2;
            func_0x00010bf529e0();
            puVar14 = puVar12;
LAB_106c0da34:
            uVar9 = *(ulong *)(param_1 + 0x30);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            func_0x00010c097280();
            if (((int)uVar4 == 0) || (puVar14 == (undefined *)0xffffffffffffffff)) {
              _objc_release(uVar9);
            }
            else {
              _objc_release(uVar9);
              if ((long)puVar15 - (long)puVar14 != 0 && (long)puVar14 <= (long)puVar15) {
                _arc4random();
                uVar4 = ((long)puVar15 - (long)puVar14) + 1;
                uVar5 = 0;
                if (uVar4 != 0) {
                  uVar5 = (uVar9 & 0xffffffff) / uVar4;
                }
                puVar15 = puVar14 + ((uVar9 & 0xffffffff) - uVar5 * uVar4);
              }
            }
            puVar12 = PTR_PTR_1126d15d8;
            _objc_alloc_init(PTR_PTR_1126d15d8);
            func_0x00010c1a0960();
            func_0x00010c197620(puVar12,param_2,lVar6);
            func_0x00010c066b00(puVar2,param_2,puVar12,puVar15);
            _objc_release(puVar12);
          }
          _objc_release(lVar6);
        }
        _objc_release(uVar3);
        uVar13 = uVar13 + 1;
        uVar3 = param_4;
        func_0x00010bf529e0();
      } while (uVar13 < uVar3);
    }
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010be64940(param_1,param_2,PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      puVar15 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar15;
      func_0x00010c262780();
      _objc_release(puVar15);
      puVar15 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar15;
      func_0x00010c0c2e40();
      _objc_release(puVar15);
      puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (puVar12 <= puVar14) {
        puVar12 = puVar14;
      }
      puVar14 = puVar2;
      func_0x00010bf529e0(puVar2);
      func_0x00010bf71fe0(puVar15,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar2;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          puVar7 = puVar2;
          func_0x00010c0dfd40(puVar2,param_2,puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfba020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar2;
          func_0x00010c0dfd40(puVar2,param_2,puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar10;
          func_0x00010c27c3e0();
          if (((((int)puVar7 != 1) && (puVar7 = puVar10, func_0x00010c27c3e0(), (int)puVar7 != 2))
              && (puVar7 = puVar10, func_0x00010c27c3e0(), (int)puVar7 != 3)) &&
             (puVar12 <= puVar14)) {
            _objc_release(puVar10);
            _objc_release(puVar8);
            break;
          }
          lVar1 = param_1;
          func_0x00010bdef6a0(param_1,param_2,puVar10,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar8;
          func_0x00010bef0c80(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar15,param_2,lVar1,puVar11);
          _objc_release(puVar11);
          _objc_release(puVar7);
          _objc_release(lVar1);
          _objc_release(puVar10);
          _objc_release(puVar8);
          puVar14 = puVar14 + 1;
          puVar7 = puVar2;
          func_0x00010bf529e0();
        } while (puVar14 < puVar7);
      }
      func_0x00010be64940(param_1,param_2,puVar15);
      _objc_release(puVar15);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c0dd38; end: 106c0ddc7; -[SCLensFriendsFeedContextDataFetcher _notifyFriendsFeedIfNeededWithSuggestions:] */

void FUN_106c0dd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be41800(param_1,param_2,*(undefined8 *)(param_1 + 0x80),param_3);
  if ((int)lVar1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c0ddc8; end: 106c0df73; -[SCLensFriendsFeedContextDataFetcher _topPriorityValidEventFromEvents:] */

void FUN_106c0ddc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long unaff_x21;
  undefined *puVar12;
  undefined *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar10 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar11 = auStack_100;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x26 = *plStack_130;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x21 = lVar1;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_130 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        puVar12 = *(undefined **)(lStack_138 + unaff_x28 * 8);
        func_0x00010bf5ab40(puVar12);
        dVar14 = dVar13;
        func_0x00010c27d180(puVar12);
        dVar15 = dVar13 + dVar14;
        unaff_x23 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        dVar13 = dVar14;
        _objc_release(unaff_x23);
        if (dVar14 < dVar15) {
          unaff_x23 = puVar12;
          func_0x00010bfeac00();
          unaff_x24 = *(ulong *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010bfea7c0();
          _objc_release(unaff_x24);
          if (((ulong)unaff_x23 & 0xffffffff) < unaff_x25) {
            _objc_retain(puVar12);
            goto LAB_106c0df20;
          }
        }
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x21 != unaff_x28);
      puVar11 = auStack_100;
      unaff_x21 = param_3;
      puVar10 = &uStack_140;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar12 = (undefined *)0x0;
LAB_106c0df20:
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_148 = FUN_106c0df74;
    lStack_1a0 = unaff_x28;
    ppuStack_198 = unaff_x27;
    lStack_190 = unaff_x26;
    uStack_188 = unaff_x25;
    uStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    puStack_170 = puVar12;
    lStack_168 = unaff_x21;
    lStack_160 = param_1;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    puStack_1d0 = &uStack_1d8;
    uStack_1d8 = 0;
    uStack_1c8 = 0x3032000000;
    pcStack_1c0 = FUN_106c0d70c;
    uStack_1b8 = 0x106c0d71c;
    uStack_1b0 = 0;
    puStack_200 = &uStack_208;
    uStack_208 = 0;
    uStack_1f8 = 0x3032000000;
    pcStack_1f0 = FUN_106c0d70c;
    uStack_1e8 = 0x106c0d71c;
    uStack_1e0 = 0;
    puStack_230 = &uStack_238;
    uStack_238 = 0;
    uStack_228 = 0x3032000000;
    pcStack_220 = FUN_106c0d70c;
    uStack_218 = 0x106c0d71c;
    uStack_210 = 0;
    puStack_250 = &uStack_258;
    uStack_258 = 0;
    uStack_248 = 0x2020000000;
    uStack_240 = 0;
    puVar2 = puVar11;
    func_0x00010bf96da0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0020();
    _objc_release(puVar2);
    func_0x00010c27c3e0();
    uVar3 = *(ulong *)(lVar1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4e6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = uVar6;
    func_0x00010bf529e0();
    if (uVar4 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar2 = (undefined1 *)puVar10;
      func_0x00010c11f280();
      uVar4 = uVar6;
      func_0x00010bf529e0();
      if (((ulong)puVar2 & 0xffffffff) < uVar4) {
        func_0x00010c11f280(puVar10);
        func_0x00010bf9aac0(uVar6);
      }
      puVar12 = PTR_PTR_1126d15e0;
      _objc_alloc();
      puVar7 = puVar12;
      func_0x00010b0aea2c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010bef0c80(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290b20();
      func_0x00010c010e80(puVar12);
      _objc_release(uVar9);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar7);
    }
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_258,8);
    __Block_object_dispose(&uStack_238,8);
    _objc_release(uStack_210);
    __Block_object_dispose(&uStack_208,8);
    _objc_release(uStack_1e0);
    __Block_object_dispose(&uStack_1d8,8);
    _objc_release(uStack_1b0);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106c0df74; end: 106c0e313; -[SCLensFriendsFeedContextDataFetcher _createLensSuggestionsForEvent:forFeedItem:] */

void FUN_106c0df74(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_106c0d70c;
  uStack_78 = 0x106c0d71c;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_106c0d70c;
  uStack_a8 = 0x106c0d71c;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_106c0d70c;
  uStack_d8 = 0x106c0d71c;
  uStack_d0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  uVar1 = param_4;
  func_0x00010bf96da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar1);
  func_0x00010c27c3e0();
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4e6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar5;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c11f280();
    uVar4 = uVar5;
    func_0x00010bf529e0();
    if ((uVar3 & 0xffffffff) < uVar4) {
      func_0x00010c11f280(param_3);
      func_0x00010bf9aac0(uVar5);
    }
    puVar9 = PTR_PTR_1126d15e0;
    _objc_alloc();
    puVar6 = puVar9;
    func_0x00010b0aea2c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010bef0c80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c290b20();
    func_0x00010c010e80(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(puVar6);
  }
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_118,8);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c0e314; end: 106c0e413;  */

void FUN_106c0e314(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  }
  else {
    lVar4 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar4);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar4;
  _objc_release(uVar2);
  if (lVar3 != 0) {
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0e414; end: 106c0e427;  */

void FUN_106c0e414(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106c0e428; end: 106c0e64f; -[SCLensFriendsFeedContextDataFetcher _conversationIDsForFeedItems:birthdayConversationIDs:suppressedConversationIDs:numberOfItemsToProcess:shouldHideStandardCTAs:perConversationCTAClearEnabled:] */

void FUN_106c0e428(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  ulong param_5,ulong param_6,int param_7,int param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_7 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar2 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_4;
        func_0x00010bf4b900(param_4,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar7 < param_6) || ((int)puVar5 != 0)) {
          uVar3 = uVar2;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c08fa60();
          _objc_release(uVar4);
          _objc_release(uVar3);
          if (uVar6 != 0) {
            uVar3 = uVar2;
            func_0x00010bef0c80(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_5;
            func_0x00010bf4b900(param_5,param_2,uVar4);
            _objc_release(uVar4);
            _objc_release(uVar3);
            if (((param_8 == 0) || ((int)puVar5 == 1)) || ((uVar6 & 1) == 0)) {
              uVar3 = uVar2;
              func_0x00010bef0c80(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bf50280();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1,param_2,uVar4);
              _objc_release(uVar4);
              _objc_release(uVar3);
            }
          }
        }
        _objc_release(uVar2);
        uVar7 = uVar7 + 1;
        uVar2 = param_3;
        func_0x00010bf529e0();
      } while (uVar7 < uVar2);
    }
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c0e650; end: 106c0e82b; -[SCLensFriendsFeedContextDataFetcher _eventsForDocConversations:shouldHideStandardCTAs:] */

undefined * FUN_106c0e650(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar4 = lVar7;
      func_0x00010bf9a520();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        lVar4 = lVar7;
        func_0x00010bf9a520(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        if (param_4 != 0) {
          func_0x00010bfaea20(lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
        }
        func_0x00010bf50280(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar7);
        _objc_release(lVar5);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010c27c3e0(param_2);
  return (undefined *)(ulong)((int)param_2 == 1);
}



/* Entry: 106c0e82c; end: 106c0e84b;  */

bool FUN_106c0e82c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27c3e0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 106c0e84c; end: 106c0e953; -[SCLensFriendsFeedContextDataFetcher _isLensSuggestonsUpdated:newSuggestions:] */

byte FUN_106c0e84c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    _objc_retain(param_4);
    func_0x00010bf97ce0(param_3);
    bVar3 = *(byte *)(puStack_48 + 3);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    bVar3 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar3 & 1;
}



/* Entry: 106c0e954; end: 106c0ea6f;  */

void FUN_106c0e954(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a440();
  uVar3 = param_3;
  func_0x00010bf9a440();
  if (uVar2 == uVar3) {
    uVar2 = uVar1;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c098240(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) goto LAB_106c0ea48;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  *param_4 = 1;
LAB_106c0ea48:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c0ea70; end: 106c0ed37; -[SCLensFriendsFeedContextDataFetcher _hasConsumableContentInLastWeek:] */

uint FUN_106c0ea70(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  double dVar13;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c259c20();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49840();
  _objc_release(uVar4);
  uVar6 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0dec00();
  _objc_release(uVar6);
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c099120();
  _objc_release(uVar7);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar6 = param_4;
      func_0x00010c0dfd40(param_4,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = (uint)uVar2 ^ 1;
      if (uVar4 < uVar5) {
        uVar12 = 1;
      }
      if (uVar12 != 1) {
LAB_106c0ed00:
        _objc_release(uVar6);
        goto LAB_106c0ed08;
      }
      uVar8 = uVar6;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf509a0();
      if (uVar9 == 1) {
        _objc_release(uVar8);
        dVar13 = param_1;
LAB_106c0ebe8:
        uVar8 = uVar6;
        func_0x00010bef0c80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_2;
        func_0x00010be349c0(param_2,param_3,uVar9);
        if ((uVar10 & 1) == 0) {
          _objc_release(uVar9);
          _objc_release(uVar8);
          param_1 = dVar13;
        }
        else {
          uVar10 = uVar6;
          func_0x00010bef0c80(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c0891c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f3a0();
          param_1 = dVar13;
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          if (-604800.0 < dVar13) goto LAB_106c0ed00;
        }
        uVar1 = 0;
        if (uVar4 < uVar5) {
          uVar1 = (uint)uVar3 ^ 1;
        }
        if (uVar1 == 1) {
          uVar8 = uVar6;
          func_0x00010c258f40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x000107cfbbc4();
          _objc_release(uVar8);
          if ((int)uVar9 != 0) goto LAB_106c0ed00;
        }
      }
      else {
        uVar9 = uVar6;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c07d980();
        _objc_release(uVar9);
        _objc_release(uVar8);
        dVar13 = param_1;
        if ((uVar10 & 1) == 0) goto LAB_106c0ebe8;
      }
      _objc_release(uVar6);
      uVar4 = uVar4 + 1;
      uVar6 = param_4;
      func_0x00010bf529e0();
    } while (uVar4 < uVar6);
  }
  uVar12 = 0;
LAB_106c0ed08:
  _objc_release(param_4);
  return uVar12;
}



/* Entry: 106c0ed38; end: 106c0eea7; -[SCLensFriendsFeedContextDataFetcher _hasUnreadContent:] */

undefined1 FUN_106c0ed38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bfe20(param_3);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c0eea8; end: 106c0ef73;  */

void FUN_106c0eea8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c281c20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0ef74; end: 106c0f0df;  */

void FUN_106c0ef74(long param_1,undefined8 param_2)

{
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106c0f0e0;
  puStack_30 = &UNK_1108d74b0;
  uStack_190 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106c0f0f0;
  puStack_58 = &UNK_1108431e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x106c0f100;
  puStack_80 = &UNK_1108d74e0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106c0f110;
  puStack_a8 = &UNK_1108431e0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106c0f120;
  puStack_d0 = &UNK_110847180;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x106c0f130;
  puStack_f8 = &UNK_110847180;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x106c0f140;
  puStack_120 = &UNK_110847180;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x106c0f150;
  puStack_148 = &UNK_110847180;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x106c0f160;
  puStack_170 = &UNK_1108d74e0;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x106c0f170;
  puStack_198 = &UNK_1108d74e0;
  uStack_168 = uStack_190;
  uStack_140 = uStack_190;
  uStack_118 = uStack_190;
  uStack_f0 = uStack_190;
  uStack_c8 = uStack_190;
  uStack_a0 = uStack_190;
  uStack_78 = uStack_190;
  uStack_50 = uStack_190;
  uStack_28 = uStack_190;
  func_0x00010c0bc660(param_2,param_2,&puStack_48,&puStack_70,0,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,0,0,0,&puStack_138,&puStack_160,0,&puStack_188,&puStack_1b0);
  return;
}



/* Entry: 106c0f0e0; end: 106c0f17f;  */

void FUN_106c0f0e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 106c0f180; end: 106c0f1df;  */

void FUN_106c0f180(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c0f1e0;
  puStack_20 = &UNK_1108d75d0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf7e0(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110968bb0);
  return;
}



/* Entry: 106c0f1e0; end: 106c0f1f3;  */

void FUN_106c0f1e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 106c0f1f4; end: 106c0f223;  */

void FUN_106c0f1f4(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106c0f224; end: 106c0f277; -[SCLensFriendsFeedContextDataFetcher _dayOfWeekEventTypes] */

void FUN_106c0f224(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c6e08 != -1) {
    func_0x00010002a2fc(0x1136c6e08,&PTR___NSConcreteGlobalBlock_110968bd0);
  }
  uVar1 = uRam00000001136c6e00;
  _objc_retain(uRam00000001136c6e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c0f278; end: 106c0f28f;  */

void FUN_106c0f278(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c6e00;
  ppuRam00000001136c6e00 = &PTR__OBJC_CLASS___NSConstantArray_111181010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c0f290; end: 106c0f2b7; -[SCLensFriendsFeedContextDataFetcher lensSuggestionsUpdates] */

void FUN_106c0f290(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c0f2b8; end: 106c0f38f; -[SCLensFriendsFeedContextDataFetcher updatePlayedStoryIdentifiers:] */

void FUN_106c0f2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c0f390; end: 106c0f3df;  */

void FUN_106c0f390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(lVar1 + 0x91) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c0f3e0; end: 106c0f4db; -[SCLensFriendsFeedContextDataFetcher .cxx_destruct] */

void FUN_106c0f3e0(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 106c0f4dc; end: 106c0f5d7; -[SCLensFriendsFeedContextDataStore initWithDocObjectContext:lensFriendsFeedContextConfigFetcher:lensFriendsFeedContextEventFetcher:excludedEventTypes:] */

undefined1 *
FUN_106c0f4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5c00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c0f5d8; end: 106c0f797; -[SCLensFriendsFeedContextDataStore updateEventsForConversationsWithStoreEvents:removeEvents:completionQueue:completionHandler:] */

void FUN_106c0f5d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c0f798; end: 106c0f883;  */

void FUN_106c0f798(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf97ce0(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bf97ce0(uVar2);
    _objc_release(param_2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0f884; end: 106c0fabb;  */

void FUN_106c0f884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar3 = *(undefined **)(param_1 + 0x20);
  _objc_retain(param_3);
  FUN_106c13700(puVar3,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  puVar1 = puVar3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  puVar1 = puVar3;
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126d15d0;
    _objc_alloc(PTR_PTR_1126d15d0);
    func_0x00010c004ee0();
    _objc_release(puVar3);
    FUN_106c13c90(*(undefined8 *)(param_1 + 0x20),puVar1);
  }
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0fabc; end: 106c0fb37;  */

uint FUN_106c0fabc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27c3e0(param_2);
  func_0x00010c0df820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    func_0x00010bf4b900(uVar3);
    uVar4 = (uint)uVar3 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  _objc_release(puVar1);
  return uVar4;
}



/* Entry: 106c0fb38; end: 106c0fb4b;  */

void FUN_106c0fb38(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c0fb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106c0fb4c; end: 106c0fcc7; -[SCLensFriendsFeedContextDataStore markEventsForConversationIdsAsViewedAndNotRelevant:completionQueue:completionHandler:] */

void FUN_106c0fb4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c0fcc8; end: 106c0feef;  */

void FUN_106c0fcc8(undefined8 param_1,long param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    param_1 = 0;
    lVar10 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar10);
    lVar3 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        puVar8 = *(undefined **)(lVar11 * 8);
        puVar4 = param_3;
        FUN_106c13700(param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar5);
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar4;
          func_0x00010bf9a520();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
          func_0x000100504554();
          _objc_release(puVar8);
          puVar6 = PTR_PTR_1126d15d0;
          _objc_alloc();
          puVar8 = puVar4;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c004ee0();
          _objc_release(puVar8);
          puVar8 = puVar6;
          FUN_106c13c90(param_3,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126d15e8;
  _objc_retain(puVar8);
  _objc_alloc(puVar4);
  puVar5 = puVar8;
  func_0x00010bf99f40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c3e0(puVar8);
  func_0x00010c113c80(puVar8);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfea7c0();
  func_0x00010bf5ab40(puVar8);
  uVar12 = param_1;
  func_0x00010c27d180(puVar8);
  func_0x00010c11f280(puVar8);
  _objc_release(puVar8);
  func_0x00010c010b20(param_1,uVar12,puVar4);
  _objc_release(uVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c0fef0; end: 106c0ffff;  */

void FUN_106c0fef0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d15e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf99f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c3e0(param_3);
  func_0x00010c113c80(param_3);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfea7c0();
  func_0x00010bf5ab40(param_3);
  uVar4 = param_1;
  func_0x00010c27d180(param_3);
  func_0x00010c11f280(param_3);
  _objc_release(param_3);
  func_0x00010c010b20(param_1,uVar4,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c10000; end: 106c10013;  */

void FUN_106c10000(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c1000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106c10014; end: 106c1005b; -[SCLensFriendsFeedContextDataStore cleanupAllEvents] */

void FUN_106c10014(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c1005c; end: 106c10067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c1005c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 in_x5;
  undefined4 uVar9;
  undefined8 in_x6;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15d0);
  if (param_4 == (undefined1 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_4);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x00010054c81c(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar1);
  uVar6 = SUB84(auStack_d8,0);
  uVar7 = 0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  uVar9 = (undefined4)in_x6;
  uVar8 = (undefined4)in_x5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar11 = *plStack_160;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = PTR_PTR_1126d1638;
        FUN_106c15d58(PTR_PTR_1126d1638,*(undefined8 *)(lStack_168 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar2 != puVar12);
      uVar6 = SUB84(auStack_d8,0);
      uVar7 = 0x10;
      puVar2 = puVar1;
      puVar12 = &uStack_170;
      func_0x00010bf52a60();
      uVar9 = (undefined4)in_x6;
      uVar8 = (undefined4)in_x5;
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  __Unwind_Resume();
  ppuVar5 = &puStack_1e0;
  _objc_retain(puVar12);
  puStack_1d8 = PTR_PTR_1126f5c20;
  puStack_1e0 = puVar4;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar4 = (undefined1 *)puVar12;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11275ae78);
    *(undefined1 **)((long)ppuVar5 + (long)_DAT_11275ae78) = puVar4;
    _objc_release(uVar10);
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae7c) = uVar6;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae80) = uVar7;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae84) = uVar8;
    *(ulong *)((long)ppuVar5 + (long)_DAT_11275ae88) =
         CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,CONCAT12(
                                                  uVar15,CONCAT11(uVar14,uVar13)))))));
    *(undefined8 *)((long)ppuVar5 + (long)_DAT_11275ae8c) = param_2;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae90) = uVar9;
  }
  _objc_release(puVar12);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106c10068; end: 106c10207; -[SCLensFriendsFeedContextDataStore storeImpressionsForConversationsWithEvents:completionQueue:completionHandler:] */

void FUN_106c10068(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_5 == 0) goto LAB_106c1016c;
    if (param_4 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,1);
      goto LAB_106c1016c;
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106c10208;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010007380c(param_4,&puStack_78);
    lVar1 = lStack_58;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f8500(uVar2);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_3);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
LAB_106c1016c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c10208; end: 106c10217;  */

void FUN_106c10208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106c10214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 106c10218; end: 106c10463;  */

void FUN_106c10218(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  _objc_retain(param_2);
  uVar11 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        puVar9 = *(undefined **)(lStack_138 + lVar8 * 8);
        puVar2 = param_2;
        FUN_106c13700(param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf529e0();
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar2;
          func_0x00010bf9a520(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_106c10464;
          puStack_150 = &UNK_110968c80;
          uStack_148 = uVar5;
          _objc_retain(uVar5);
          puVar3 = puVar9;
          func_0x000100504554(puVar9,&puStack_168);
          _objc_release(puVar9);
          puVar4 = PTR_PTR_1126d15d0;
          _objc_alloc(PTR_PTR_1126d15d0);
          puVar9 = puVar2;
          func_0x00010bf50280(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c004ee0(puVar4);
          _objc_release(puVar9);
          puVar9 = puVar4;
          FUN_106c13c90(param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(uStack_148);
          _objc_release(uVar5);
        }
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(ulong *)(param_2 + 0x20);
  func_0x00010c27c3e0(puVar9);
  func_0x00010c0df820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar2);
  if ((uVar6 & 1) == 0) {
    _objc_retain(puVar9);
    puVar2 = puVar9;
  }
  else {
    puVar2 = PTR_PTR_1126d15e8;
    _objc_alloc(PTR_PTR_1126d15e8);
    puVar3 = puVar9;
    func_0x00010bf99f40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c3e0(puVar9);
    func_0x00010c113c80(puVar9);
    func_0x00010bfeac00(puVar9);
    func_0x00010bf5ab40(puVar9);
    uVar5 = uVar11;
    func_0x00010c27d180(puVar9);
    func_0x00010c11f280(puVar9);
    func_0x00010c010b20(uVar11,uVar5,puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c10464; end: 106c1059f;  */

void FUN_106c10464(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(ulong *)(param_2 + 0x20);
  func_0x00010c27c3e0(param_3);
  func_0x00010c0df820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = PTR_PTR_1126d15e8;
    _objc_alloc(PTR_PTR_1126d15e8);
    puVar2 = param_3;
    func_0x00010bf99f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c3e0(param_3);
    func_0x00010c113c80(param_3);
    func_0x00010bfeac00(param_3);
    func_0x00010bf5ab40(param_3);
    uVar4 = param_1;
    func_0x00010c27d180(param_3);
    func_0x00010c11f280(param_3);
    func_0x00010c010b20(param_1,uVar4,puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c105a0; end: 106c105b3;  */

void FUN_106c105a0(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c105ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106c105b4; end: 106c109a7; -[SCLensFriendsFeedContextDataStore _updateCurrentEvents:withNewEvents:forConversationId:] */

double FUN_106c105b4(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,long param_5
                    ,undefined8 param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  long lStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar14 = param_5;
  func_0x00010bf529e0();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar14 == 0) {
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  else {
    if (param_4 == (undefined8 *)0x0) {
      lVar14 = param_5;
      func_0x00010bf529e0(param_5);
      func_0x00010bf0a0e0(puVar2,param_3,lVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_4;
      func_0x00010c0d3c80();
    }
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_5);
    puVar6 = &uStack_140;
    lStack_150 = param_5;
    func_0x00010bf52a60();
    if (lStack_150 != 0) {
      lVar14 = *plStack_130;
      do {
        lVar15 = 0;
        do {
          dVar17 = param_1;
          if (*plStack_130 != lVar14) {
            _objc_enumerationMutation(param_5);
            dVar17 = param_1;
          }
          uVar3 = *(ulong *)(lStack_138 + lVar15 * 8);
          func_0x00010c067fc0();
          uVar4 = *(ulong *)(param_2 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf4e6c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          param_1 = dVar17;
          if (uVar5 != 0) {
            puVar6 = puVar2;
            func_0x00010bf529e0();
            puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            dVar18 = dVar17;
            _objc_release(puVar7);
            puVar16 = puVar2;
            func_0x00010bf529e0();
            if (puVar16 != (undefined8 *)0x0) {
              puVar16 = (undefined8 *)0x0;
              do {
                puVar8 = puVar2;
                func_0x00010c0dfd40(puVar2,param_3,puVar16);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar8;
                func_0x00010c27c3e0();
                if (uVar3 == ((ulong)puVar9 & 0xffffffff)) {
                  func_0x00010bf5ab40(puVar8);
                  param_1 = dVar18;
                  func_0x00010c27d180(puVar8);
                  dVar18 = dVar18 + param_1;
                  _objc_release(puVar8);
                  if (dVar17 <= dVar18) goto LAB_106c1090c;
                  bVar1 = true;
                  goto LAB_106c107f8;
                }
                uVar4 = uVar5;
                func_0x00010c113c80();
                puVar9 = puVar8;
                func_0x00010c113c80();
                _objc_release(puVar8);
                if (uVar4 <= ((ulong)puVar9 & 0xffffffff)) {
                  bVar1 = false;
                  param_1 = dVar18;
                  goto LAB_106c107f8;
                }
                puVar16 = (undefined8 *)((long)puVar16 + 1);
                puVar8 = puVar2;
                func_0x00010bf529e0();
              } while (puVar16 < puVar8);
            }
            bVar1 = false;
            puVar16 = puVar6;
            param_1 = dVar18;
LAB_106c107f8:
            uVar4 = uVar5;
            func_0x00010c098240();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar4;
            func_0x00010bf529e0();
            _objc_release(uVar4);
            if (uVar10 != 0) {
              lVar11 = param_2;
              func_0x00010bec8d80(param_2,param_3,uVar5);
              puVar7 = PTR_PTR_1126d15e8;
              _objc_alloc(PTR_PTR_1126d15e8);
              uVar12 = param_6;
              func_0x00010c25cde0(param_6,param_3,&PTR____CFConstantStringClassReference_110e796b8);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar5;
              func_0x00010c113c80(uVar5);
              puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320();
              dVar17 = param_1;
              func_0x00010c27d1a0(param_2,param_3,uVar3);
              func_0x00010c010b20(param_1,dVar17,puVar7,param_3,uVar12,uVar3,uVar4,0,lVar11);
              _objc_release(puVar13);
              _objc_release(uVar12);
              if (bVar1) {
                func_0x00010c130f40(puVar2,param_3,puVar16,puVar7);
              }
              else {
                func_0x00010c066b00(puVar2,param_3,puVar7,puVar16);
              }
              _objc_release(puVar7);
            }
          }
LAB_106c1090c:
          _objc_release(uVar5);
          lVar15 = lVar15 + 1;
        } while (lVar15 != lStack_150);
        puVar6 = &uStack_140;
        lStack_150 = param_5;
        func_0x00010bf52a60();
      } while (lStack_150 != 0);
    }
    _objc_release(param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return param_1;
  }
  ___stack_chk_fail();
  if ((long)puVar6 < 0xc) {
    if ((long)puVar6 < 7) {
      if (puVar6 == (undefined8 *)0x2) {
        return 259200.0;
      }
      if (puVar6 == (undefined8 *)0x4) {
        return 14400.0;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x7) {
        return 14400.0;
      }
      if (puVar6 == (undefined8 *)0xb) {
        return 25200.0;
      }
    }
  }
  else if ((long)puVar6 < 0x16) {
    if (puVar6 == (undefined8 *)0xc) {
      return 32400.0;
    }
    if (puVar6 == (undefined8 *)0xd) {
      return 10800.0;
    }
  }
  else {
    if (puVar6 == (undefined8 *)0x17) {
      return 32400.0;
    }
    if (puVar6 == (undefined8 *)0x16) {
      return 259200.0;
    }
  }
  return 86400.0;
}



/* Entry: 106c109a8; end: 106c10a47; -[SCLensFriendsFeedContextDataStore ttlInSecondsForEventType:] */

undefined8 FUN_106c109a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 < 7) {
      if (param_3 == 2) {
        return 0x410fa40000000000;
      }
      if (param_3 == 4) {
        return 0x40cc200000000000;
      }
    }
    else {
      if (param_3 == 7) {
        return 0x40cc200000000000;
      }
      if (param_3 == 0xb) {
        return 0x40d89c0000000000;
      }
    }
  }
  else if (param_3 < 0x16) {
    if (param_3 == 0xc) {
      return 0x40dfa40000000000;
    }
    if (param_3 == 0xd) {
      return 0x40c5180000000000;
    }
  }
  else {
    if (param_3 == 0x17) {
      return 0x40dfa40000000000;
    }
    if (param_3 == 0x16) {
      return 0x410fa40000000000;
    }
  }
  return 0x40f5180000000000;
}



/* Entry: 106c10a48; end: 106c10b8b; -[SCLensFriendsFeedContextDataStore _suggestedLensIndexForEvent:] */

undefined * FUN_106c10a48(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c253680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bf9a440();
  if (puVar2 == (undefined *)0xe) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
    if ((int)puVar2 != 0) {
      puVar2 = param_3;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106c10b8c;
      puStack_40 = &UNK_110968cf0;
      _objc_retain(puVar3);
      puVar5 = puVar2;
      puStack_38 = puVar3;
      func_0x00010bfece40(puVar2,param_2,&puStack_58);
      _objc_release(puVar2);
      puVar2 = puStack_38;
      _objc_release(puStack_38);
      if (puVar5 != (undefined *)0x7fffffffffffffff) goto LAB_106c10b64;
    }
  }
  _arc4random();
  puVar4 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (puVar5 != (undefined *)0x0) {
    uVar1 = ((ulong)puVar2 & 0xffffffff) / (ulong)puVar5;
  }
  puVar5 = (undefined *)(((ulong)puVar2 & 0xffffffff) - uVar1 * (long)puVar5);
  _objc_release(puVar4);
LAB_106c10b64:
  _objc_release(puVar3);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106c10b8c; end: 106c10bd3;  */

undefined8 FUN_106c10b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c10bd4; end: 106c10c1b; -[SCLensFriendsFeedContextDataStore .cxx_destruct] */

void FUN_106c10bd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c10c1c; end: 106c10d17; -[SCLensFriendsFeedContextImpressionTracker initWithDataStore:performer:] */

undefined1 *
FUN_106c10c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5c08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c10d18; end: 106c10e33; -[SCLensFriendsFeedContextImpressionTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106c10d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c10e34; end: 106c10f8f;  */

void FUN_106c10e34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106c10ea4;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb81f8);
  if ((int)uVar2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8218);
    if ((int)uVar2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8178);
      if ((int)uVar2 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8198);
        if ((int)uVar2 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8238);
          if ((int)uVar2 != 0) {
LAB_106c10f20:
            *(undefined1 *)(lVar1 + 0x31) = 0;
            uVar2 = 0;
            goto LAB_106c10e74;
          }
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8258);
          if ((int)uVar2 == 0) {
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8278);
            if ((int)uVar2 != 0) goto LAB_106c10f20;
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8298);
            if ((int)uVar2 == 0) goto LAB_106c10ea4;
          }
          *(undefined1 *)(lVar1 + 0x31) = 1;
          uVar2 = 0;
          goto LAB_106c10e9c;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = 1;
      }
      func_0x00010be29280(lVar1,param_2,uVar2,uVar3);
      goto LAB_106c10ea4;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
LAB_106c10e9c:
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
LAB_106c10e74:
    uVar3 = 1;
  }
  func_0x00010be292c0(lVar1,param_2,uVar2,uVar3);
LAB_106c10ea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c10f90; end: 106c1126f; -[SCLensFriendsFeedContextImpressionTracker _handleExtraDataForFeedVisible:start:] */

void FUN_106c10f90(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined **unaff_x25;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_128,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_106c11270;
    puStack_140 = &UNK_11084b7a0;
    _objc_retain(uVar2);
    unaff_x25 = &puStack_158;
    uStack_138 = uVar2;
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x00010c257860(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_130);
    _objc_release(uStack_138);
    _objc_destroyWeak(auStack_128);
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
    uVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar8 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar5);
    uVar2 = uVar1;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(uVar2);
    uVar1 = uVar2;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar7 = *plStack_110;
      do {
        uVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(uVar2);
          }
          func_0x00010be32380(param_1);
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar8);
        uVar1 = uVar2;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  lVar7 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    lVar7 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x10);
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar7);
    return;
  }
  return;
}



/* Entry: 106c11270; end: 106c112f7;  */

void FUN_106c11270(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x20))
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_2,puVar2);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}


