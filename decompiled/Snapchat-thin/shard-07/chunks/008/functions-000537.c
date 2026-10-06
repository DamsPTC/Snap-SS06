/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a006f8; end: 105a00a27;  */

void FUN_105a006f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126c0fa8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar16 = param_1;
  _objc_retainAutorelease(param_1);
  func_0x00010bdc3520();
  _objc_release(param_1);
  _atol(uVar16);
  puStack_88 = puVar1;
  func_0x00010c11b560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b60();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126c1048;
  _objc_opt_new();
  func_0x00010c21e620();
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar2);
  _objc_release(puVar1);
  func_0x00010c216900(puVar2);
  func_0x00010c206c40(puVar2);
  func_0x00010c20d3a0(puVar2);
  uVar16 = param_5;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar8 = PTR_PTR_1126b4960;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e15d98;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_b0 = uVar16;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dad998;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = param_4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b19f8;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 1;
  uStack_a0 = 3;
  uStack_98 = 1;
  uStack_b0 = 3;
  ppuStack_a8 = (undefined **)0x1;
  ppuVar15 = &PTR____CFConstantStringClassReference_110e15d78;
  puVar11 = puVar1;
  puVar12 = PTR____NSDictionary0__struct_11034ab58;
  puVar13 = puVar4;
  puVar14 = puVar5;
  func_0x00010bf58780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar16);
  _objc_release(puVar2);
  puVar9 = puStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_105a00a28;
  puStack_110 = puVar6;
  puStack_108 = puVar5;
  puStack_100 = puVar8;
  puStack_f8 = puVar4;
  puStack_f0 = puVar1;
  uStack_e8 = uVar16;
  puStack_e0 = puVar3;
  puStack_d8 = puVar2;
  uStack_d0 = param_4;
  puStack_c8 = puVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(ppuVar15);
  puVar1 = puVar11;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126ae5c0;
  if ((((ulong)puVar12 & 1) == 0) && (puVar1 != (undefined *)0x0)) {
    func_0x00010bf6ce00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (((int)puVar12 == 0) || (puVar1 != (undefined *)0x0)) {
      if (ppuVar15 != (undefined **)0x0) {
        (*(code *)ppuVar15[2])(ppuVar15);
      }
      goto LAB_105a00c2c;
    }
    func_0x00010befca80();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar14 != (undefined *)0x0) {
    uVar16 = *(undefined8 *)(puVar9 + 0x20);
    puVar1 = puVar14;
    _objc_retainBlock(puVar14);
    puVar2 = puVar11;
    func_0x00010c2923e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar16);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (ppuVar15 != (undefined **)0x0) {
    uVar16 = *(undefined8 *)(puVar9 + 0x28);
    ppuVar10 = ppuVar15;
    _objc_retainBlock(ppuVar15);
    puVar1 = puVar11;
    func_0x00010c2923e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar16);
    _objc_release(puVar1);
    _objc_release(ppuVar10);
  }
  _objc_initWeak(auStack_118,puVar9);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_105a00c80;
  puStack_130 = &UNK_110841fb0;
  _objc_copyWeak(auStack_120,auStack_118);
  _objc_retain(puVar8);
  puStack_128 = puVar8;
  func_0x000100162d98("APPSTORE",&puStack_148);
  _objc_release(puStack_128);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar8);
LAB_105a00c2c:
  _objc_release(ppuVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  return;
}



/* Entry: 105a00a28; end: 105a00c7f; -[SCCreatorSettingsSubscriptionRequestProcessor subscribeToSnapchatter:isSubscribing:placementInfo:successHandler:failureHandler:] */

void FUN_105a00a28(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126ae5c0;
  if (((param_4 & 1) == 0) && (lVar1 != 0)) {
    func_0x00010bf6ce00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_4 == 0) || (lVar1 != 0)) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      goto LAB_105a00c2c;
    }
    func_0x00010befca80();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_6 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_6;
    _objc_retainBlock(param_6);
    lVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  if (param_7 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_7;
    _objc_retainBlock(param_7);
    lVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105a00c80;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar2);
  puStack_78 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(puStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
LAB_105a00c2c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105a00c80; end: 105a00cb3;  */

void FUN_105a00c80(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a00cb4; end: 105a00ea3; -[SCCreatorSettingsSubscriptionRequestProcessor subscribeToPublisher:isSubscribing:successHandler:failureHandler:] */

void FUN_105a00cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_80 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_6);
  func_0x00010bfa48e0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105a00ea4; end: 105a00eff;  */

void FUN_105a00ea4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec81c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a00f00; end: 105a00f13;  */

void FUN_105a00f00(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a00f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105a00f14; end: 105a0106f; -[SCCreatorSettingsSubscriptionRequestProcessor _subscribeToPublisher:isSubscribing:accessToken:successHandler:failureHandler:] */

void FUN_105a00f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105a006f8(param_3,param_4,*(undefined8 *)(param_1 + 0x10),param_5,
                *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c25f660(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 105a01070; end: 105a01097;  */

void FUN_105a01070(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a0107c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105a01098; end: 105a0109b; -[SCCreatorSettingsSubscriptionRequestProcessor didStartSnapchattersUpdateDataRequest:] */

void FUN_105a01098(void)

{
  return;
}



/* Entry: 105a0109c; end: 105a012f7; -[SCCreatorSettingsSubscriptionRequestProcessor didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105a0109c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf0a620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_105a0128c;
  }
  else {
    _objc_release();
  }
  lVar1 = param_3;
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bf0a620();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beec000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_4 == 0) {
    puVar8 = (ulong *)(param_1 + 0x28);
    uVar5 = *puVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b900(uVar5,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar5);
    if ((int)uVar6 != 0) goto LAB_105a011c8;
  }
  else {
    puVar8 = (ulong *)(param_1 + 0x20);
    uVar5 = *puVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b900(uVar5,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) {
LAB_105a011c8:
      uVar6 = *puVar8;
      lVar1 = lVar4;
      func_0x00010c2923e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(uVar6,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(uVar6 + 0x10))();
      _objc_release(uVar6);
      _objc_release(lVar1);
    }
  }
  lVar1 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = lVar4;
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar7,param_2,lVar1);
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = lVar4;
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar7,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(lVar4);
LAB_105a0128c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a012f8; end: 105a01347; -[SCCreatorSettingsSubscriptionRequestProcessor _sendSnapchatterDataMutatorRequest:] */

void FUN_105a012f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a01348; end: 105a013bf; -[SCCreatorSettingsSubscriptionRequestProcessor .cxx_destruct] */

void FUN_105a01348(long param_1)

{
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



/* Entry: 105a013c0; end: 105a01433; -[SCCreatorSettingsDataFetcher initWithDocObjectContext:] */

undefined1 * FUN_105a013c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb488;
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



/* Entry: 105a01434; end: 105a0143f; -[SCCreatorSettingsDataFetcher creatorSettingsWithIdentifier:] */

void FUN_105a01434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar2);
  }
  puVar3 = &uStack_111;
  FUN_105a075b8();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_3);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar4 = &uStack_a0;
  uStack_158 = param_3;
  puStack_d8 = puVar3;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar4,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a01440; end: 105a0144b; -[SCCreatorSettingsDataFetcher creatorSettingsWithIdentifiers:] */

undefined ** FUN_105a01440(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d1;
  undefined **appuStack_1d0 [9];
  undefined1 auStack_188 [24];
  long *plStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_58;
  
  lVar3 = *(long *)(param_1 + 8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar3 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    puStack_160 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_160,lVar3);
  }
  puVar4 = &uStack_1d1;
  FUN_105a075b8(puVar4);
  _objc_retain(param_3);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f0 = 0;
  lVar5 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x0001004c2bb4(&uStack_1f0,lVar5);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        _objc_retain(uVar8);
        uStack_e0 = uVar8;
        func_0x0001004c2d3c(&uStack_1f0,&uStack_e0);
        _objc_release(uStack_e0);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x0001004c2e3c(appuStack_1d0,0xc,puVar4,&uStack_1f0);
  puStack_d8 = (undefined1 *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  uStack_c8 = 0;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  ppuVar6 = &puStack_160;
  func_0x0001000e77a0(ppuVar6,appuStack_1d0,&puStack_d8,&uStack_120);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  plVar1 = plStack_168;
  appuStack_1d0[0] = &PTR_FUN_110862700;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_170;
  plStack_170 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_d8 = auStack_188;
  func_0x000100105004(&puStack_d8);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x0001000e76e0(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_3);
  lVar5 = lVar3;
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  FUN_1050048c0(appuStack_1d0);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x000104d96620(&puStack_160);
  _objc_release(param_3);
  _objc_release(lVar3);
  __Unwind_Resume(lVar5);
  func_0x000104bd46a0(lVar5);
  if ((bRam000000011381a6a8 & 1) == 0) {
    iVar2 = 0x1381a6a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113115998,0x100000000);
      ___cxa_guard_release(0x11381a6a8);
    }
  }
  return &PTR_PTR_113115998;
}



/* Entry: 105a0144c; end: 105a01453; -[SCCreatorSettingsDataFetcher subscribedCreatorSettingsFromSource:] */

void FUN_105a0144c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar2);
  }
  puVar3 = &uStack_101;
  FUN_105a07730();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar3[0x1a];
  uStack_e5 = puVar3[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  puStack_c8 = puVar3;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a01454; end: 105a0145b; -[SCCreatorSettingsDataFetcher subscribedPublisherSettingsFromSource:] */

void FUN_105a01454(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar4);
  }
  puVar5 = &uStack_181;
  FUN_105a07730();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar6 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar5;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000105a07d64();
  bStack_f5 = bVar2 & puVar6[0x1b];
  bStack_f6 = (bVar1 | puVar6[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar7 = &uStack_a0;
  puStack_d0 = puVar6;
  func_0x0001000e77a0(puVar7,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a0145c; end: 105a01463; -[SCCreatorSettingsDataFetcher subscribedUserSettingsFromSource:] */

void FUN_105a0145c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar4);
  }
  puVar5 = &uStack_181;
  FUN_105a07730();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar6 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar5;
  pppuStack_140 = &ppuStack_1f8;
  FUN_105a07b20();
  bStack_f5 = bVar2 & puVar6[0x1b];
  bStack_f6 = (bVar1 | puVar6[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar7 = &uStack_a0;
  puStack_d0 = puVar6;
  func_0x0001000e77a0(puVar7,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a01464; end: 105a0146b; -[SCCreatorSettingsDataFetcher notificationOptedInCreatorSettings] */

void FUN_105a01464(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar2);
  }
  puVar3 = &uStack_101;
  FUN_105a07880();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar3[0x1a];
  uStack_e5 = puVar3[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  puStack_c8 = puVar3;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a0146c; end: 105a01473; -[SCCreatorSettingsDataFetcher notificationOptedInPublisherSettings] */

void FUN_105a0146c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar4);
  }
  puVar5 = &uStack_181;
  FUN_105a07880();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar6 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar5;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000105a07d64();
  bStack_f5 = bVar2 & puVar6[0x1b];
  bStack_f6 = (bVar1 | puVar6[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar7 = &uStack_a0;
  puStack_d0 = puVar6;
  func_0x0001000e77a0(puVar7,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a01474; end: 105a0147b; -[SCCreatorSettingsDataFetcher notificationOptedInUserSettings] */

void FUN_105a01474(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar4);
  }
  puVar5 = &uStack_181;
  FUN_105a07880();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar6 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar5;
  pppuStack_140 = &ppuStack_1f8;
  FUN_105a07b20();
  bStack_f5 = bVar2 & puVar6[0x1b];
  bStack_f6 = (bVar1 | puVar6[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar7 = &uStack_a0;
  puStack_d0 = puVar6;
  func_0x0001000e77a0(puVar7,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a0147c; end: 105a01483; -[SCCreatorSettingsDataFetcher hiddenCreatorSettings] */

void FUN_105a0147c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar2);
  }
  puVar3 = &uStack_101;
  FUN_105a079d0();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar3[0x1a];
  uStack_e5 = puVar3[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  puStack_c8 = puVar3;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a01484; end: 105a0148b; -[SCCreatorSettingsDataFetcher hiddenPublisherSettingsFromSource:] */

void FUN_105a01484(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar4);
  }
  puVar5 = &uStack_181;
  FUN_105a079d0();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar6 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar5;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000105a07d64();
  bStack_f5 = bVar2 & puVar6[0x1b];
  bStack_f6 = (bVar1 | puVar6[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar7 = &uStack_a0;
  puStack_d0 = puVar6;
  func_0x0001000e77a0(puVar7,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a0148c; end: 105a01493; -[SCCreatorSettingsDataFetcher hiddenUserSettingsFromSource:] */

void FUN_105a0148c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar4);
  }
  puVar5 = &uStack_181;
  FUN_105a079d0();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar6 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar5;
  pppuStack_140 = &ppuStack_1f8;
  FUN_105a07b20();
  bStack_f5 = bVar2 & puVar6[0x1b];
  bStack_f6 = (bVar1 | puVar6[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar7 = &uStack_a0;
  puStack_d0 = puVar6;
  func_0x0001000e77a0(puVar7,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a01494; end: 105a0149b; -[SCCreatorSettingsDataFetcher allCreatorSettings] */

void FUN_105a01494(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,lVar1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar2 = &uStack_70;
  func_0x00010054c81c(puVar2,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a0149c; end: 105a014a7; -[SCCreatorSettingsDataFetcher .cxx_destruct] */

void FUN_105a0149c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a014a8; end: 105a015e3;  */

void FUN_105a014a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_1);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    _objc_release(param_1);
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f9260();
  return;
}



/* Entry: 105a015e4; end: 105a01617; -[SCCreatorSettingsDataMutator performUserAction:creatorIdentifier:creatorType:fromSource:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a015e4(void)

{
  func_0x00010c0f9260();
  return;
}



/* Entry: 105a01618; end: 105a01787; -[SCCreatorSettingsDataMutator performUserAction:creatorIdentifier:creatorType:fromSource:placementInfo:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a01618(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_3 < 6) {
    if ((1L << (param_3 & 0x3f) & 3U) == 0) {
      if ((1L << (param_3 & 0x3f) & 0xcU) == 0) {
        func_0x00010bed9420(param_1,param_2,param_4,param_5,param_3,param_6,param_8,param_9,param_10
                            ,param_11);
      }
      else {
        func_0x00010bedc820(param_1,param_2,param_4,param_5,param_3,param_6,param_8,param_9,param_10
                            ,param_11);
      }
    }
    else {
      func_0x00010bee1440(param_1,param_2,param_4,param_5,param_3,param_6,param_7,param_8,param_9,
                          param_10,param_11);
    }
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a01788; end: 105a0186f; -[SCCreatorSettingsDataMutator updateCreatorSettings:completionQueue:completionHandler:] */

void FUN_105a01788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar2);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105a01870; end: 105a0187f;  */

void FUN_105a01870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = *(undefined **)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(puVar4);
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0aaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x0) &&
     (puVar1 = puVar4, func_0x00010c080120(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = puVar4;
    func_0x00010c074c20();
    _objc_release(puVar4);
    if (((ulong)puVar1 & 1) != 0) goto LAB_105a05554;
    puVar1 = PTR_PTR_1126c1058;
    FUN_105a0a36c(PTR_PTR_1126c1058,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(puVar4);
LAB_105a05554:
    puVar1 = puVar4;
    FUN_105a0a3e0(puVar4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar4 == (undefined *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e15ed8;
  }
  else {
    puVar2 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_105a056a8;
      }
    }
    puVar2 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e15ef8;
    }
    else {
      puVar2 = puVar4;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = puVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      }
    }
  }
  _objc_release(ppuVar5);
LAB_105a056a8:
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a01880; end: 105a018af; -[SCCreatorSettingsDataMutator performUserActionOnDummySnapchatter:userId:snapProId:username:displayName:isPopular:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a01880(void)

{
  func_0x00010c0f92a0();
  return;
}



/* Entry: 105a018b0; end: 105a01a33; -[SCCreatorSettingsDataMutator performUserActionOnDummySnapchatter:userId:snapProId:username:displayName:isPopular:placementInfo:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a018b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c05c0e0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bee1480(param_1,param_2,puVar1,param_3 == 0,param_3,
                      &PTR____CFConstantStringClassReference_110e15e18,param_9,param_10,param_11,
                      param_12,param_13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a01a34; end: 105a01ca7; -[SCCreatorSettingsDataMutator _updateSubscriptionStatusForPublisher:isSubscribing:action:source:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a01a34(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105a01ca8;
  puStack_d0 = &UNK_1108cd0e8;
  uStack_88 = param_4;
  _objc_retain(param_3);
  uStack_c8 = param_3;
  _objc_retain(param_6);
  uStack_c0 = param_6;
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_90 = param_5;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_8);
  uStack_b8 = param_8;
  _objc_retain(param_9);
  uStack_a0 = param_9;
  _objc_retain(param_10);
  uStack_b0 = param_10;
  _objc_copyWeak(auStack_100,auStack_80);
  uStack_f0 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_9);
  uStack_f8 = param_5;
  func_0x00010c2602a0(uVar1);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a01ca8; end: 105a01edf;  */

void FUN_105a01ca8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105a0055c(uVar1,*(undefined1 *)(param_1 + 0x60),0,0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a01ee0; end: 105a01ef3;  */

void FUN_105a01ee0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar5 != 0) {
    _objc_retain(lVar1);
    _objc_retain(lVar5);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    _objc_release(lVar5);
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f9260();
  return;
}



/* Entry: 105a01ef4; end: 105a0218f; -[SCCreatorSettingsDataMutator _updateSubscriptionStatusForSnapchatter:isSubscribing:action:source:placementInfo:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a01ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105a02190;
  puStack_d0 = &UNK_1108cd0e8;
  uStack_88 = param_4;
  _objc_retain(param_3);
  uStack_c8 = param_3;
  _objc_retain(param_6);
  uStack_c0 = param_6;
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_90 = param_5;
  _objc_retain(param_8);
  uStack_a8 = param_8;
  _objc_retain(param_9);
  uStack_b8 = param_9;
  _objc_retain(param_10);
  uStack_a0 = param_10;
  _objc_retain(param_11);
  uStack_b0 = param_11;
  _objc_copyWeak(auStack_100,auStack_80);
  uStack_f0 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_10);
  uStack_f8 = param_5;
  func_0x00010c260320(uVar1);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a02190; end: 105a023df;  */

void FUN_105a02190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000105a00630();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a023e0; end: 105a0241f;  */

void FUN_105a023e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105a014a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a02420; end: 105a02697; -[SCCreatorSettingsDataMutator _updateSubscriptionStatusForCreator:creatorType:action:source:placementInfo:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a02420(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_4 == 1) {
    _objc_initWeak(auStack_70,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_11);
    _objc_retain(param_10);
    lStack_80 = param_5;
    _objc_copyWeak(auStack_88,auStack_70);
    uStack_78 = param_5 == 0;
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c2448c0(uVar2);
    _objc_release(uVar1);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_10);
    _objc_release(param_11);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
  }
  else if (param_4 == 0) {
    func_0x00010bee1460(param_1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a02698; end: 105a027b7;  */

void FUN_105a02698(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    if ((lVar2 == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_105a02790;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105a027b8;
    puStack_60 = &UNK_11085b7b0;
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar3);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    lStack_58 = lVar3;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    func_0x00010007380c(lVar2,&puStack_78);
    _objc_release(uStack_50);
    param_1 = lStack_58;
  }
  else {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee1480();
  }
  _objc_release(param_1);
LAB_105a02790:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a027b8; end: 105a027cb;  */

void FUN_105a027b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar5 != 0) {
    _objc_retain(lVar1);
    _objc_retain(lVar5);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    _objc_release(lVar5);
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f9260();
  return;
}



/* Entry: 105a027cc; end: 105a02b73; -[SCCreatorSettingsDataMutator _updateOptedInNotificationStatusForCreator:creatorType:action:source:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a027cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_108 [8];
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_80,param_1);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_retain(lVar4);
  uVar1 = 3;
  if (param_5 != 2) {
    uVar1 = 0;
  }
  if (param_4 == 1) {
    lVar3 = lVar4;
    func_0x00010846c464(lVar4,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
    if (param_4 == 0) {
      uVar2 = param_3;
      func_0x00010c0b4ca0(param_3);
      lVar3 = lVar4;
      func_0x00010846c3a0(lVar4,uVar2,uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_105a02b74;
    puStack_d8 = &UNK_1108cd148;
    _objc_copyWeak(auStack_a0,auStack_80);
    _objc_retain(param_3);
    uStack_d0 = param_3;
    lStack_98 = param_4;
    lStack_90 = param_5;
    _objc_retain(param_6);
    uStack_c8 = param_6;
    _objc_retain(param_7);
    uStack_b0 = param_7;
    _objc_retain(param_8);
    uStack_c0 = param_8;
    _objc_retain(param_9);
    uStack_a8 = param_9;
    _objc_retain(param_10);
    uStack_b8 = param_10;
    uStack_88 = param_5 == 2;
    _objc_copyWeak(auStack_108,auStack_80);
    _objc_retain(param_3);
    lStack_100 = param_4;
    lStack_f8 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010c15c760(uVar1);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(uVar1);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_108);
    _objc_release(uStack_b8);
    _objc_release(uStack_a8);
    _objc_release(uStack_c0);
    _objc_release(uStack_b0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a02b74; end: 105a02c03;  */

void FUN_105a02b74(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a02c04; end: 105a02d43; -[SCCreatorSettingsDataMutator _successfulUpdatedOptedInNotificationForCreator:creatorType:action:source:successHandler:successQueue:failureHandler:failureQueue:isOptingInNotification:] */

void FUN_105a02c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_3;
  if (param_4 == 0) {
    func_0x000105a0055c(param_3,1,param_11,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 1) {
    func_0x000105a00630(param_3,1,param_11,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  func_0x00010bed6440(param_1);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a02d44; end: 105a02f3f; -[SCCreatorSettingsDataMutator _failedUpdatingOptedInNotificationForCreator:creatorType:action:source:failureHandler:failureQueue:] */

void FUN_105a02d44(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *unaff_x26;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_7 != 0) && (param_8 != 0)) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105a02f40;
    puStack_70 = &UNK_11085b7b0;
    _objc_retain(param_3);
    uStack_68 = param_3;
    lStack_58 = param_5;
    _objc_retain(param_7);
    lStack_60 = param_7;
    func_0x00010007380c(param_8,&puStack_88);
    _objc_release(lStack_60);
    _objc_release(uStack_68);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (param_5 < 3) {
    if (param_5 == 0) {
      unaff_x26 = PTR_PTR_1126b4030;
      func_0x00010bf5b300(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_5 == 1) {
      unaff_x26 = PTR_PTR_1126b4030;
      func_0x00010bf5b340(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_5 == 2) {
      unaff_x26 = PTR_PTR_1126b4030;
      func_0x00010bf5b2c0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_5 == 3) {
    unaff_x26 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_5 == 4) {
    unaff_x26 = PTR_PTR_1126b4030;
    func_0x00010bf5b2a0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_5 == 5) {
    unaff_x26 = PTR_PTR_1126b4030;
    func_0x00010bf5b320(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e15e38;
  }
  func_0x000108f33e58(uVar2,unaff_x26,param_6,ppuVar1,1);
  _objc_release(unaff_x26);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a02f40; end: 105a02f53;  */

void FUN_105a02f40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar5 != 0) {
    _objc_retain(lVar1);
    _objc_retain(lVar5);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    _objc_release(lVar5);
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f9260();
  return;
}



/* Entry: 105a02f54; end: 105a0319b; -[SCCreatorSettingsDataMutator _updateHideStatusForCreator:creatorType:action:source:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a02f54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105a0319c;
  puStack_b8 = &UNK_1108cd1a8;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_b0 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  _objc_retain(param_6);
  uStack_a8 = param_6;
  _objc_retain(param_7);
  uStack_90 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_9);
  uStack_88 = param_9;
  _objc_retain(param_10);
  uStack_98 = param_10;
  _objc_retainBlock(&puStack_d0);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa48e0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(uStack_a0);
  _objc_release(uStack_90);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a0319c; end: 105a0320b;  */

void FUN_105a0319c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a0320c; end: 105a0320f;  */

void FUN_105a0320c(void)

{
  return;
}



/* Entry: 105a03210; end: 105a038a3; -[SCCreatorSettingsDataMutator _updateHideStatusForCreator:creatorType:action:source:accessToken:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a03210(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 auStack_128 [8];
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_retain(uVar15);
  _objc_retain(param_7);
  puVar16 = PTR_PTR_1126c0fa8;
  if (param_4 == 1) {
    _objc_retain(param_3);
    _objc_opt_new();
    puVar1 = param_3;
    func_0x00010bf51e00(param_3);
    _objc_release(param_3);
    puVar2 = puVar16;
    func_0x00010c11ab20(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
    _objc_release(puVar2);
  }
  else {
    if (param_4 != 0) {
      puVar16 = (undefined *)0x0;
      goto LAB_105a0339c;
    }
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    _atol();
    puVar16 = PTR_PTR_1126c0fa8;
    _objc_opt_new();
    puVar1 = puVar16;
    func_0x00010c11b560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60();
  }
  _objc_release(puVar1);
LAB_105a0339c:
  puVar3 = PTR_PTR_1126c0fa0;
  _objc_opt_new(PTR_PTR_1126c0fa0);
  uVar11 = uVar15;
  func_0x00010bf51e00(uVar15);
  func_0x00010c21e620(puVar3);
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar3);
  _objc_release(puVar1);
  func_0x00010c216900(puVar3);
  func_0x00010c206c40(puVar3);
  func_0x00010c20d3a0(puVar3);
  puVar2 = PTR_PTR_1126b4960;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dad998;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_88 = param_7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b19f8;
  puStack_a0 = puVar8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar16);
  _objc_release(param_7);
  _objc_release(uVar15);
  _objc_release(param_3);
  _objc_initWeak(&puStack_a0,param_1);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105a038a4;
  puStack_f8 = &UNK_1108cd1f8;
  lStack_b8 = param_5;
  lStack_b0 = param_4;
  _objc_retain(param_3);
  puStack_f0 = param_3;
  _objc_retain(param_6);
  uStack_e8 = param_6;
  uStack_a8 = param_5 == 4;
  _objc_copyWeak(auStack_c0,&puStack_a0);
  _objc_retain(param_8);
  uStack_d0 = param_8;
  _objc_retain(param_9);
  uStack_e0 = param_9;
  _objc_retain(param_10);
  uStack_c8 = param_10;
  _objc_retain(param_11);
  uStack_d8 = param_11;
  ppuVar13 = &puStack_a0;
  _objc_copyWeak(auStack_128,ppuVar13);
  lStack_120 = param_5;
  lStack_118 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_10);
  puVar16 = puVar2;
  uVar15 = uVar11;
  func_0x00010c25f660(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_128);
  _objc_release(uStack_d8);
  _objc_release(uStack_c8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_e8);
  _objc_release(puStack_f0);
  _objc_destroyWeak(&puStack_a0);
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_a0);
  __Unwind_Resume();
  _objc_retain(ppuVar13);
  _objc_retain(puVar16);
  _objc_retain(uVar15);
  if (*(long *)(param_3 + 0x60) == 0) {
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    func_0x000105a0055c(uVar11,0,0,param_3[0x68]);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_3 + 0x60) == 1) {
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    func_0x000105a00630(uVar11,0,0,param_3[0x68]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar11 = 0;
  }
  param_3 = param_3 + 0x50;
  _objc_loadWeakRetained(param_3);
  func_0x00010bed6440();
  _objc_release(param_3);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
  return;
}



/* Entry: 105a038a4; end: 105a0399f;  */

void FUN_105a038a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000105a0055c(uVar1,0,0,*(undefined1 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x60) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000105a00630(uVar1,0,0,*(undefined1 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6440();
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a039a0; end: 105a03b4f;  */

void FUN_105a039a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *unaff_x22;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x30);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105a03b50;
    puStack_50 = &UNK_11085b7b0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_38 = *(undefined8 *)(param_1 + 0x48);
    unaff_x22 = *(undefined **)(param_1 + 0x38);
    uStack_48 = uVar3;
    _objc_retain(unaff_x22);
    puStack_40 = unaff_x22;
    func_0x00010007380c(lVar2,&puStack_68);
    _objc_release(puStack_40);
    _objc_release(uStack_48);
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      unaff_x22 = PTR_PTR_1126b4030;
      func_0x00010bf5b300(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar2 == 1) {
      unaff_x22 = PTR_PTR_1126b4030;
      func_0x00010bf5b340(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar2 == 2) {
      unaff_x22 = PTR_PTR_1126b4030;
      func_0x00010bf5b2c0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar2 == 3) {
    unaff_x22 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 4) {
    unaff_x22 = PTR_PTR_1126b4030;
    func_0x00010bf5b2a0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 5) {
    unaff_x22 = PTR_PTR_1126b4030;
    func_0x00010bf5b320(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108f33e58(uVar3,unaff_x22,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110dd2038,1);
  _objc_release(unaff_x22);
  _objc_release(lVar1);
  return;
}



/* Entry: 105a03b50; end: 105a03b63;  */

void FUN_105a03b50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar5 != 0) {
    _objc_retain(lVar1);
    _objc_retain(lVar5);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    _objc_release(lVar5);
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f9260();
  return;
}



/* Entry: 105a03b64; end: 105a03da7; -[SCCreatorSettingsDataMutator _updateCreatorSettingsToDataStore:fromAction:fromSource:creatorType:successHandler:successQueue:failureHandler:failureQueue:] */

void FUN_105a03b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105a03da8;
  puStack_90 = &UNK_11085adb8;
  _objc_retain(param_3);
  uVar2 = 0x19;
  uStack_88 = param_3;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_80);
  uStack_b8 = param_4;
  uStack_b0 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105a03da8; end: 105a03db7;  */

void FUN_105a03da8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = *(undefined **)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(puVar4);
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0aaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x0) &&
     (puVar1 = puVar4, func_0x00010c080120(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = puVar4;
    func_0x00010c074c20();
    _objc_release(puVar4);
    if (((ulong)puVar1 & 1) != 0) goto LAB_105a05554;
    puVar1 = PTR_PTR_1126c1058;
    FUN_105a0a36c(PTR_PTR_1126c1058,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(puVar4);
LAB_105a05554:
    puVar1 = puVar4;
    FUN_105a0a3e0(puVar4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar4 == (undefined *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e15ed8;
  }
  else {
    puVar2 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_105a056a8;
      }
    }
    puVar2 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e15ef8;
    }
    else {
      puVar2 = puVar4;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = puVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      }
    }
  }
  _objc_release(ppuVar5);
LAB_105a056a8:
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a03db8; end: 105a040c7;  */

void FUN_105a03db8(long param_1,int param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *unaff_x22;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    if ((lVar4 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105a040d4;
      puStack_78 = &UNK_11085b7b0;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uStack_60 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      uStack_70 = uVar5;
      _objc_retain(uVar6);
      uStack_68 = uVar6;
      func_0x00010007380c(lVar4,&puStack_90);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    lVar4 = *(long *)(param_1 + 0x58);
    puVar3 = PTR_PTR_1126b4030;
    if (lVar4 < 3) {
      if (lVar4 == 0) {
        func_0x00010bf5b300();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar4 == 1) {
        func_0x00010bf5b340();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf5b2c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar4 == 3) {
      func_0x00010bf5b2e0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar4 == 4) {
      func_0x00010bf5b2a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf5b320();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
    if (*(long *)(param_1 + 0x60) != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e15e38;
    }
    func_0x000108f33b98(uVar5,puVar3,*(undefined8 *)(param_1 + 0x28),ppuVar1,1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    if ((lVar4 != 0) && (unaff_x22 = *(undefined **)(param_1 + 0x40), unaff_x22 != (undefined *)0x0)
       ) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105a040c8;
      puStack_40 = &UNK_110849530;
      _objc_retain(unaff_x22);
      puStack_38 = unaff_x22;
      func_0x00010007380c(lVar4,&puStack_58);
      _objc_release(puStack_38);
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 < 3) {
      if (lVar4 == 0) {
        unaff_x22 = PTR_PTR_1126b4030;
        func_0x00010bf5b300(PTR_PTR_1126b4030);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar4 == 1) {
        unaff_x22 = PTR_PTR_1126b4030;
        func_0x00010bf5b340(PTR_PTR_1126b4030);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar4 == 2) {
        unaff_x22 = PTR_PTR_1126b4030;
        func_0x00010bf5b2c0(PTR_PTR_1126b4030);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar4 == 3) {
      unaff_x22 = PTR_PTR_1126b4030;
      func_0x00010bf5b2e0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar4 == 4) {
      unaff_x22 = PTR_PTR_1126b4030;
      func_0x00010bf5b2a0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar4 == 5) {
      unaff_x22 = PTR_PTR_1126b4030;
      func_0x00010bf5b320(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
    if (*(long *)(param_1 + 0x60) != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e15e38;
    }
    func_0x000108f34118(uVar5,unaff_x22,*(undefined8 *)(param_1 + 0x28),ppuVar1,1);
    _objc_release(unaff_x22);
    puVar3 = (undefined *)(param_1 + 0x50);
    _objc_loadWeakRetained(puVar3);
    func_0x00010be646a0();
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105a040c8; end: 105a040d3;  */

void FUN_105a040c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a040d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105a040d4; end: 105a04113;  */

void FUN_105a040d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105a014a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a04114; end: 105a04243; -[SCCreatorSettingsDataMutator _notifyCreatorSettingsDidUpdate:fromAction:] */

void FUN_105a04114(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *unaff_x21;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 < 3) {
    if (param_4 == 0) {
      unaff_x21 = PTR_PTR_1126b4030;
      func_0x00010bf5b300(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      unaff_x21 = PTR_PTR_1126b4030;
      func_0x00010bf5b340(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 2) {
      unaff_x21 = PTR_PTR_1126b4030;
      func_0x00010bf5b2c0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_4 == 3) {
    unaff_x21 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 4) {
    unaff_x21 = PTR_PTR_1126b4030;
    func_0x00010bf5b2a0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 5) {
    unaff_x21 = PTR_PTR_1126b4030;
    func_0x00010bf5b320(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf5b740(uVar1,param_2,param_3,unaff_x21);
  _objc_release(unaff_x21);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a04244; end: 105a042c7; -[SCCreatorSettingsDataMutator .cxx_destruct] */

void FUN_105a04244(long param_1)

{
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



/* Entry: 105a042c8; end: 105a042cb; -[SCCreatorSettingsDataStore didStartSnapchattersUpdateDataRequest:] */

void FUN_105a042c8(void)

{
  return;
}



/* Entry: 105a042cc; end: 105a0439b; -[SCCreatorSettingsDataStore didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105a042cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105a0439c;
    puStack_20 = &UNK_110855640;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a043ac;
    puStack_48 = &UNK_1108941c0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105a044d0;
    puStack_70 = &UNK_110866ad0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x105a044e0;
    puStack_98 = &UNK_110866b00;
    uStack_90 = param_1;
    uStack_68 = param_1;
    uStack_40 = param_1;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,0,&puStack_b0,0,0,0,0);
  }
  return;
}



/* Entry: 105a0439c; end: 105a043ab;  */

void FUN_105a0439c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCreatorSettingsForSnapcha_1125932b0,
             param_2,1);
  return;
}



/* Entry: 105a043ac; end: 105a044cf;  */

/* WARNING: Possible PIC construction at 0x000105a0445c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a04460) */
/* WARNING: Removing unreachable block (ram,0x000105a04474) */
/* WARNING: Removing unreachable block (ram,0x000105a0442c) */

void FUN_105a043ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lRam0000000000000000;
    func_0x00010c244280(lRam0000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed6430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,PTR_s__updateCreatorSettingsForSnapcha_1125932b0,lVar2,uVar3);
  return;
}



/* Entry: 105a044d0; end: 105a044ef;  */

void FUN_105a044d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCreatorSettingsForSnapcha_1125932b0,
             param_2,0);
  return;
}



/* Entry: 105a044f0; end: 105a04627; -[SCCreatorSettingsDataStore _refreshCreatorSettings] */

void FUN_105a044f0(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105a04628;
  puStack_58 = &UNK_110843540;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa48e0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a04628; end: 105a0466f;  */

void FUN_105a04628(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a04670; end: 105a04673;  */

void FUN_105a04670(void)

{
  return;
}



/* Entry: 105a04674; end: 105a04787; -[SCCreatorSettingsDataStore _fetchCreatorSettingsWithAccessToken:] */

void FUN_105a04674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_105a00038(uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c25f5e0(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105a04788; end: 105a0484b;  */

void FUN_105a04788(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010c252ee0();
  if (param_3 == 200) {
    lStack_38 = 0;
    uVar1 = param_4;
    FUN_105a0029c(param_4,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_38 == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      uVar2 = uVar1;
      func_0x00010050471c(uVar1,&PTR___NSConcreteGlobalBlock_1108cd058,
                          &PTR___NSConcreteGlobalBlock_1108cd098);
      func_0x00010be6ecc0(param_1);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105a0484c; end: 105a049db; -[SCCreatorSettingsDataStore _overrideCreatorSettingsDataStore:] */

void FUN_105a0484c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105a05740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a049dc;
  puStack_70 = &UNK_110864a38;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105a049dc; end: 105a04c2b;  */

void FUN_105a049dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(lVar12 * 8);
      lVar8 = 0;
      FUN_105a0a3e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar7 = (int)lVar8;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar10 = *(long *)(lVar12 * 8);
      lVar11 = *(long *)(param_1 + 0x20);
      lVar5 = lVar10;
      func_0x00010bfe5ec0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar11 == 0) {
        puVar6 = PTR_PTR_1126c1058;
        FUN_105a0a36c(PTR_PTR_1126c1058);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar6);
        lVar8 = lVar10;
      }
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    iVar7 = (int)lVar8;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    func_0x00010bde2ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 105a04c2c; end: 105a04c5f;  */

void FUN_105a04c2c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde2ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105a04c60; end: 105a04cef; -[SCCreatorSettingsDataStore _completeCreatorSettingsDataStoreOverride] */

void FUN_105a04c60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e15e58);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a04cf0; end: 105a04ea7; -[SCCreatorSettingsDataStore _updateCreatorSettingsForSnapchatter:isSubscribing:] */

void FUN_105a04cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000105a00630();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a04ea8;
  puStack_68 = &UNK_11085adb8;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(uVar1);
  uStack_88 = param_4;
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_3);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105a04ea8; end: 105a04eb7;  */

void FUN_105a04ea8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = *(undefined **)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(puVar4);
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0aaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x0) &&
     (puVar1 = puVar4, func_0x00010c080120(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = puVar4;
    func_0x00010c074c20();
    _objc_release(puVar4);
    if (((ulong)puVar1 & 1) != 0) goto LAB_105a05554;
    puVar1 = PTR_PTR_1126c1058;
    FUN_105a0a36c(PTR_PTR_1126c1058,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(puVar4);
LAB_105a05554:
    puVar1 = puVar4;
    FUN_105a0a3e0(puVar4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar4 == (undefined *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e15ed8;
  }
  else {
    puVar2 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_105a056a8;
      }
    }
    puVar2 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e15ef8;
    }
    else {
      puVar2 = puVar4;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = puVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      }
    }
  }
  _objc_release(ppuVar5);
LAB_105a056a8:
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a04eb8; end: 105a04ef7;  */

void FUN_105a04eb8(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde2ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105a04ef8; end: 105a04f8f; -[SCCreatorSettingsDataStore _completeCreatorSettingsUpdate:isSubscribing:] */

void FUN_105a04ef8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4030;
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    func_0x00010bf5b340(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf5b300();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b740();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a04f90; end: 105a05007; -[SCCreatorSettingsDataStore .cxx_destruct] */

void FUN_105a04f90(long param_1)

{
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



/* Entry: 105a05008; end: 105a050d3; -[SCCreatorSettingsDataTracker init] */

undefined1 * FUN_105a05008(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eb4a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105a050d4; end: 105a050df; +[SCCreatorSettingsDataTracker announcerIdentifier] */

undefined ** FUN_105a050d4(void)

{
  return &PTR____CFConstantStringClassReference_110e15eb8;
}



/* Entry: 105a050e0; end: 105a050e7; -[SCCreatorSettingsDataTracker addListener:] */

void FUN_105a050e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105a050e8; end: 105a050ef; -[SCCreatorSettingsDataTracker removeListener:] */

void FUN_105a050e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105a050f0; end: 105a05197; -[SCCreatorSettingsDataTracker creatorSettingsDataStoreDidRefresh] */

void FUN_105a050f0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a05198; end: 105a051ef;  */

void FUN_105a05198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b4030;
  func_0x00010bf5b720(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc720(param_1,param_2,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a051f0; end: 105a052ef; -[SCCreatorSettingsDataTracker creatorSettingsDidUpdate:event:] */

void FUN_105a051f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a052f0; end: 105a05427;  */

void FUN_105a052f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126b4038;
    func_0x00010bf5b6e0(PTR_PTR_1126b4038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar5,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126b4030;
  func_0x00010bf5b300(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar6,param_2,puVar3);
  func_0x00010c0df6e0(puVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4038;
  func_0x00010bf7c180(PTR_PTR_1126b4038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bdcc720(lVar5,param_2,uVar6,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a05428; end: 105a054a7; -[SCCreatorSettingsDataTracker _announceUpdateEvent:extraData:] */

void FUN_105a05428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a054a8; end: 105a054d7; -[SCCreatorSettingsDataTracker .cxx_destruct] */

void FUN_105a054a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a054d8; end: 105a0573f;  */

void FUN_105a054d8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0aaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x0) &&
     (puVar1 = param_2, func_0x00010c080120(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = param_2;
    func_0x00010c074c20();
    _objc_release(param_2);
    if (((ulong)puVar1 & 1) != 0) goto LAB_105a05554;
    puVar1 = PTR_PTR_1126c1058;
    FUN_105a0a36c(PTR_PTR_1126c1058,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(param_2);
LAB_105a05554:
    puVar1 = param_2;
    FUN_105a0a3e0(param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_2 == (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e15ed8;
  }
  else {
    puVar2 = param_2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = param_2;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_105a056a8;
      }
    }
    puVar2 = param_2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e15ef8;
    }
    else {
      puVar2 = param_2;
      func_0x00010bf5b280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = param_2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      }
    }
  }
  _objc_release(ppuVar4);
LAB_105a056a8:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a05740; end: 105a05857;  */

void FUN_105a05740(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a05858; end: 105a05a8f;  */

void FUN_105a05858(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_105a07730();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a05a90; end: 105a05d6b;  */

void FUN_105a05a90(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  FUN_105a07730();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000105a07d64();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a05d6c; end: 105a06047;  */

void FUN_105a05d6c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  FUN_105a07730();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  FUN_105a07b20();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a06048; end: 105a0627f;  */

void FUN_105a06048(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_105a07880();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a06280; end: 105a0655b;  */

void FUN_105a06280(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  FUN_105a07880();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000105a07d64();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a0655c; end: 105a06837;  */

void FUN_105a0655c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  FUN_105a07880();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  FUN_105a07b20();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a06838; end: 105a06a6f;  */

void FUN_105a06838(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_105a079d0();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a06a70; end: 105a06d4b;  */

void FUN_105a06a70(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  FUN_105a079d0();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000105a07d64();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


