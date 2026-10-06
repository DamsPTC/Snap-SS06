/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069a8ff8; end: 1069a8fff; -[SCAddFriendsPageDisplayCell isPinned] */

undefined1 FUN_1069a8ff8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1069a9000; end: 1069a902f; -[SCAddFriendsPageDisplayCell .cxx_destruct] */

void FUN_1069a9000(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1069a9030; end: 1069a90f7; -[SCAddFriendsActionEvent initWithDataRequest:userId:index:friendActionType:state:] */

undefined1 *
FUN_1069a9030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f40c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a90f8; end: 1069a911b; -[SCAddFriendsActionEvent copyWithZone:] */

undefined8 FUN_1069a90f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1069a911c; end: 1069a919f; -[SCAddFriendsActionEvent hash] */

undefined8 * FUN_1069a911c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1069a9250:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1069a925c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1069a925c;
        }
        goto LAB_1069a9250;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1069a925c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1069a91a0; end: 1069a9277; -[SCAddFriendsActionEvent isEqual:] */

long FUN_1069a91a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1069a9250:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1069a925c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1069a925c;
        }
        goto LAB_1069a9250;
      }
    }
    lVar3 = 0;
  }
LAB_1069a925c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1069a9278; end: 1069a927f; -[SCAddFriendsActionEvent dataRequest] */

undefined8 FUN_1069a9278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1069a9280; end: 1069a9287; -[SCAddFriendsActionEvent userId] */

undefined8 FUN_1069a9280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069a9288; end: 1069a928f; -[SCAddFriendsActionEvent index] */

undefined8 FUN_1069a9288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1069a9290; end: 1069a9297; -[SCAddFriendsActionEvent friendActionType] */

undefined8 FUN_1069a9290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1069a9298; end: 1069a929f; -[SCAddFriendsActionEvent state] */

undefined8 FUN_1069a9298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1069a92a0; end: 1069a92cf; -[SCAddFriendsActionEvent .cxx_destruct] */

void FUN_1069a92a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069a92d0; end: 1069a93f7; -[SCCameraDeviceSettingsResolverServiceBitmojiCreateFlowEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a92d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57500();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf790;
  _objc_alloc(PTR_PTR_1126cf790);
  func_0x00010c00c400();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112754c8c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069a93f8; end: 1069a9437;  */

void FUN_1069a93f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069a9438; end: 1069a9683; -[SCCameraDeviceSettingsResolverServiceBitmojiCreateFlowEntryPoint _createResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9438(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = param_1;
  FUN_1069a9684();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf692e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar5 = PTR_PTR_1126cf798;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112754c7c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010c135640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001069a96a8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x0001069a96a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf30c00();
  _objc_retainAutoreleasedReturnValue();
  FUN_1069a9684(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf48180();
  func_0x00010bffb2e0(puVar5,param_2,lVar2,lVar7,lVar9,lVar13,lVar4,lVar4,
                      &PTR____CFConstantStringClassReference_110dd6e38,0);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069a9684; end: 1069a96cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9684(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754c84);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a96cc; end: 1069a9737; -[SCCameraDeviceSettingsResolverServiceBitmojiCreateFlowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a96cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112754c8c,0);
  _objc_destroyWeak(param_1 + _DAT_112754c88);
  _objc_destroyWeak(param_1 + _DAT_112754c84);
  _objc_destroyWeak(param_1 + _DAT_112754c80);
  _objc_destroyWeak(param_1 + _DAT_112754c7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754c78);
  return;
}



/* Entry: 1069a9738; end: 1069a987b; -[SCCameraDeviceSettingsResolverServiceBitmojiEditLiveMirrorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9738(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf790;
  _objc_alloc(PTR_PTR_1126cf790);
  func_0x00010c00c400();
  puVar3 = PTR_PTR_1126cf7a0;
  _objc_alloc(PTR_PTR_1126cf7a0);
  func_0x00010bffb240();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112754ca4);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1069a987c; end: 1069a98bb;  */

void FUN_1069a987c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069a98bc; end: 1069a9b03; -[SCCameraDeviceSettingsResolverServiceBitmojiEditLiveMirrorEntryPoint _createResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a98bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = param_1;
  FUN_1069a9b04();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf692e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar5 = PTR_PTR_1126cf798;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112754c94;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010c135640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001069a9b28();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x0001069a9b28(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf30c00();
  _objc_retainAutoreleasedReturnValue();
  FUN_1069a9b04(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf48180();
  func_0x00010bffb2c0(puVar5,param_2,lVar2,lVar7,lVar9,lVar13,lVar4,lVar4,
                      &PTR____CFConstantStringClassReference_110dd6e38);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069a9b04; end: 1069a9b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9b04(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754c9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a9b4c; end: 1069a9bb7; -[SCCameraDeviceSettingsResolverServiceBitmojiEditLiveMirrorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9b4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112754ca4,0);
  _objc_destroyWeak(param_1 + _DAT_112754ca0);
  _objc_destroyWeak(param_1 + _DAT_112754c9c);
  _objc_destroyWeak(param_1 + _DAT_112754c98);
  _objc_destroyWeak(param_1 + _DAT_112754c94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754c90);
  return;
}



/* Entry: 1069a9bb8; end: 1069a9ca7; -[SCCameraDeviceSettingsResolverServiceCallUIServiceProvider provide] */

void FUN_1069a9bb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57500();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf790;
  _objc_alloc(PTR_PTR_1126cf790);
  func_0x00010c00c400();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069a9ca8; end: 1069a9ce7;  */

void FUN_1069a9ca8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069a9ce8; end: 1069a9faf; -[SCCameraDeviceSettingsResolverServiceCallUIServiceProvider _createResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9ce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar1 = PTR_PTR_1126cf798;
  _objc_alloc();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112754cac;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar23;
  func_0x00010c135640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1069a9fb0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_1069a9fb0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf30c00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0001069a9fd4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf48180();
  lVar14 = param_1;
  func_0x0001069a9fd4();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf69300();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001069a9fd4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf69300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb2c0(puVar1,param_2,lVar3,lVar6,lVar8,lVar13,lVar18,lVar22,
                      &PTR____CFConstantStringClassReference_110e66c78);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069a9fb0; end: 1069a9ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9fb0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754cb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a9ff8; end: 1069aa053; -[SCCameraDeviceSettingsResolverServiceCallUIServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069a9ff8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754cb8);
  _objc_destroyWeak(param_1 + _DAT_112754cb4);
  _objc_destroyWeak(param_1 + _DAT_112754cb0);
  _objc_destroyWeak(param_1 + _DAT_112754cac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754ca8);
  return;
}



/* Entry: 1069aa054; end: 1069aa0e3; -[SCCameraDeviceSettingsResolverServiceCameraFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069aa054(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112754cdc,0);
  _objc_destroyWeak(param_1 + _DAT_112754cd8);
  _objc_destroyWeak(param_1 + _DAT_112754cd4);
  _objc_destroyWeak(param_1 + _DAT_112754cd0);
  _objc_destroyWeak(param_1 + _DAT_112754ccc);
  _objc_destroyWeak(param_1 + _DAT_112754cc8);
  _objc_destroyWeak(param_1 + _DAT_112754cc4);
  _objc_destroyWeak(param_1 + _DAT_112754cc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754cbc);
  return;
}



/* Entry: 1069aa0e4; end: 1069aa373;  */

/* WARNING: Possible PIC construction at 0x0001069aa39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069aa3a0) */

void FUN_1069aa0e4(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    unaff_x23 = *plStack_120;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_120 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(long *)(lStack_128 + unaff_x24 * 8);
        if (lVar7 == 0) {
          _objc_retain(unaff_x22);
          lVar7 = unaff_x22;
        }
        else {
          func_0x00010bf5a600(lVar7);
          unaff_d8 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,
                                                  uVar10)))))));
          func_0x00010bf5a600(unaff_x22);
          bVar2 = false;
          if (!NAN(unaff_d8) &&
              !NAN((double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))
                                                  )))) {
            bVar2 = unaff_d8 <
                    (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13
                                                  (uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))))
                                                  )));
          }
          if (bVar2) {
            _objc_retain(unaff_x22);
            _objc_release(lVar7);
            lVar7 = unaff_x22;
          }
        }
        unaff_x24 = unaff_x24 + 1;
      } while (lVar5 != unaff_x24);
      lVar5 = param_1;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    unaff_x21 = 0;
  }
  lVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    uVar9 = 0x1069aa22c;
    ___stack_chk_fail();
    puVar1 = &uStack_130;
    while( true ) {
      *(undefined8 *)((long)puVar1 + -0x60) = unaff_d9;
      *(double *)((long)puVar1 + -0x58) = unaff_d8;
      *(undefined8 *)((long)puVar1 + -0x50) = unaff_x28;
      *(undefined8 *)((long)puVar1 + -0x48) = unaff_x27;
      *(long *)((long)puVar1 + -0x40) = unaff_x24;
      *(long *)((long)puVar1 + -0x38) = unaff_x23;
      *(long *)((long)puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
      *(long *)((long)puVar1 + -0x20) = lVar7;
      *(long *)((long)puVar1 + -0x18) = param_1;
      *(undefined1 **)((long)puVar1 + -0x10) = puVar8;
      *(undefined8 *)((long)puVar1 + -8) = uVar9;
      *(undefined8 *)((long)puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      *(undefined8 *)((long)puVar1 + -0x128) = 0;
      *(undefined8 *)((long)puVar1 + -0x130) = 0;
      *(undefined8 *)((long)puVar1 + -0x118) = 0;
      *(undefined8 *)((long)puVar1 + -0x120) = 0;
      *(undefined8 *)((long)puVar1 + -0x108) = 0;
      *(undefined8 *)((long)puVar1 + -0x110) = 0;
      *(undefined8 *)((long)puVar1 + -0xf8) = 0;
      *(undefined8 *)((long)puVar1 + -0x100) = 0;
      lVar6 = lVar5;
      func_0x00010bf52a60();
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        unaff_x23 = **(long **)((long)puVar1 + -0x120);
        do {
          unaff_x24 = 0;
          do {
            if (**(long **)((long)puVar1 + -0x120) != unaff_x23) {
              _objc_enumerationMutation(lVar5);
            }
            unaff_x22 = *(long *)(*(long *)((long)puVar1 + -0x128) + unaff_x24 * 8);
            if (lVar7 == 0) {
              _objc_retain(unaff_x22);
              lVar7 = unaff_x22;
            }
            else {
              func_0x00010bf5a600(lVar7);
              unaff_d8 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,
                                                  uVar10)))))));
              func_0x00010bf5a600(unaff_x22);
              bVar3 = false;
              bVar4 = false;
              bVar2 = NAN((double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,
                                                  uVar10))))))));
              if (!NAN(unaff_d8) && !bVar2) {
                bVar3 = unaff_d8 <
                        (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,
                                                  uVar10)))))));
                bVar4 = unaff_d8 ==
                        (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,
                                                  CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,
                                                  uVar10)))))));
              }
              if (!bVar4 && bVar3 == (NAN(unaff_d8) || bVar2)) {
                _objc_retain(unaff_x22);
                _objc_release(lVar7);
                lVar7 = unaff_x22;
              }
            }
            unaff_x24 = unaff_x24 + 1;
          } while (lVar6 != unaff_x24);
          lVar6 = lVar5;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
        unaff_x21 = 0;
      }
      param_1 = lVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x68))
      goto _objc_autoreleaseReturnValue;
      ___stack_chk_fail();
      *(long *)((long)puVar1 + -0x150) = lVar7;
      *(long *)((long)puVar1 + -0x148) = lVar5;
      *(undefined1 **)((long)puVar1 + -0x140) = (undefined1 *)((long)puVar1 + -0x10);
      *(code **)((long)puVar1 + -0x138) = FUN_1069aa374;
      puVar8 = (undefined1 *)((long)puVar1 + -0x140);
      lVar6 = param_2;
      _objc_retain();
      if (param_2 == 0) {
        lVar7 = param_1;
        FUN_1069aa0e4(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1069aa3c8;
      }
      if (param_2 != 1) break;
      uVar9 = 0x1069aa3a0;
      lVar7 = 1;
      puVar1 = (undefined8 *)((long)puVar1 + -0x150);
      lVar5 = param_1;
      param_2 = lVar6;
    }
    lVar7 = 0;
LAB_1069aa3c8:
    _objc_release(param_1);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1069aa374; end: 1069aa3df;  */

void FUN_1069aa374(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  if (param_2 == 0) {
    func_0x0001069aa0e4(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 == 1) {
    func_0x0001069aa22c(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069aa3e0; end: 1069ab2bf;  */

undefined * FUN_1069aa3e0(ulong param_1,undefined *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = 0;
  _objc_retain(param_1);
  uVar22 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  fVar32 = (float)uVar23;
  while (uVar22 != 0) {
    uVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      lVar16 = *(long *)(uVar21 * 8);
      lVar9 = lVar16;
      func_0x00010bfb6f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 != 0) {
        lVar9 = lVar16;
        func_0x00010bfb6f60(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar20);
        _objc_release(lVar9);
      }
      lVar9 = lVar16;
      func_0x00010c13a3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 != 0) {
        lVar9 = lVar16;
        func_0x00010c13a3e0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar9);
      }
      lVar9 = lVar16;
      func_0x00010c0fb680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 != 0) {
        lVar9 = lVar16;
        func_0x00010c0fb680(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(lVar9);
      }
      lVar9 = lVar16;
      func_0x00010c2993c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 != 0) {
        lVar9 = lVar16;
        func_0x00010c2993c0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(lVar9);
      }
      lVar9 = lVar16;
      func_0x00010c0c6aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 != 0) {
        lVar9 = lVar16;
        func_0x00010c0c6aa0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(lVar9);
      }
      lVar9 = lVar16;
      func_0x00010bf9d7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 != 0) {
        func_0x00010bf9d7e0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(lVar16);
      }
      uVar21 = uVar21 + 1;
    } while (uVar22 != uVar21);
    uVar22 = param_1;
    func_0x00010bf52a60();
    fVar32 = (float)uVar23;
  }
  _objc_release(param_1);
  puVar17 = param_2;
  func_0x00010bfb6f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar20);
  _objc_retain(puVar17);
  puVar10 = puVar20;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(puVar17);
    puStack_238 = puVar17;
  }
  else {
    uVar23 = 0;
    _objc_retain(puVar20);
    puVar10 = puVar20;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    fVar32 = (float)uVar23;
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar20);
    }
    else {
      bVar1 = false;
      uVar30 = 0;
      uVar18 = 0;
      uVar22 = 0xffffffffffffffff;
      uVar21 = 0xffffffffffffffff;
      uVar29 = 0xffffffffffffffff;
      do {
        puVar26 = (undefined *)0x0;
        uVar19 = uVar22;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar20);
          }
          uVar22 = *(ulong *)((long)puVar26 * 8);
          uVar27 = uVar22;
          func_0x00010c087060();
          if (uVar27 == 1) {
            func_0x00010c0cd500();
            if (uVar19 <= uVar22) {
              uVar22 = uVar19;
            }
          }
          else {
            uVar27 = uVar22;
            func_0x00010c0c2280();
            if (uVar27 <= uVar18) {
              uVar27 = uVar18;
            }
            uVar11 = uVar22;
            func_0x00010c0c22a0();
            if (uVar29 <= uVar11) {
              uVar11 = uVar29;
            }
            uVar12 = uVar22;
            func_0x00010c0cd500();
            if (uVar12 <= uVar30) {
              uVar12 = uVar30;
            }
            func_0x00010c0c1d20();
            if (uVar21 <= uVar22) {
              uVar22 = uVar21;
            }
            bVar1 = true;
            uVar21 = uVar22;
            uVar18 = uVar27;
            uVar22 = uVar19;
            uVar29 = uVar11;
            uVar30 = uVar12;
          }
          puVar26 = puVar26 + 1;
          uVar19 = uVar22;
        } while (puVar10 != puVar26);
        puVar10 = puVar20;
        func_0x00010bf52a60();
        fVar32 = (float)uVar23;
      } while (puVar10 != (undefined *)0x0);
      _objc_release(puVar20);
      if (uVar22 != 0xffffffffffffffff && !bVar1) {
        func_0x00010c0c2280(puVar17);
        func_0x00010c0c22a0(puVar17);
        func_0x00010c0cd500();
        func_0x00010c0c1d20(puVar17);
      }
    }
    puVar10 = PTR_PTR_1126b70f0;
    _objc_alloc();
    func_0x00010c028c60();
    _objc_retain();
    puVar26 = puVar10;
    func_0x00010c0c22a0();
    puVar24 = puVar10;
    func_0x00010c0c2280();
    if (puVar26 < puVar24) {
LAB_1069aa8f4:
      _objc_release(puVar10);
      puStack_238 = (undefined *)0x0;
    }
    else {
      puVar26 = puVar10;
      func_0x00010c0c2280();
      puVar24 = puVar10;
      func_0x00010c0c1d20();
      if (puVar26 < puVar24) goto LAB_1069aa8f4;
      puVar26 = puVar10;
      func_0x00010c0c1d20();
      puVar24 = puVar10;
      func_0x00010c0cd500();
      _objc_release(puVar10);
      puStack_238 = puVar10;
      if (puVar26 < puVar24) {
        puStack_238 = (undefined *)0x0;
      }
    }
    _objc_retain();
    _objc_release(puVar10);
  }
  _objc_release(puVar17);
  _objc_release(puVar20);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_retain(puVar17);
  puVar10 = puVar4;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(puVar17);
    puStack_240 = puVar17;
  }
  else {
    uVar23 = 0;
    _objc_retain(puVar4);
    puVar10 = puVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    fVar32 = (float)uVar23;
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar4);
LAB_1069aaaa4:
      func_0x00010bf0aca0(puVar17);
    }
    else {
      uVar18 = 0;
      uVar22 = 0;
      uVar21 = 0xffffffffffffffff;
      do {
        puVar26 = (undefined *)0x0;
        uVar29 = uVar22;
        uVar30 = uVar21;
        uVar19 = uVar18;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar4);
          }
          uVar27 = *(ulong *)((long)puVar26 * 8);
          uVar22 = uVar27;
          func_0x00010c0cd7e0();
          if (uVar22 <= uVar29) {
            uVar22 = uVar29;
          }
          uVar21 = uVar27;
          func_0x00010c0c2340();
          if (uVar30 <= uVar21) {
            uVar21 = uVar30;
          }
          func_0x00010bf0aca0();
          fVar32 = (float)uVar23;
          uVar18 = uVar27;
          if ((uVar19 != 0) && (uVar18 = uVar19, uVar19 != uVar27)) {
            _objc_release(puVar4);
            puStack_240 = (undefined *)0x0;
            goto LAB_1069aab0c;
          }
          puVar26 = puVar26 + 1;
          uVar29 = uVar22;
          uVar30 = uVar21;
          uVar19 = uVar18;
        } while (puVar10 != puVar26);
        puVar10 = puVar4;
        func_0x00010bf52a60();
        fVar32 = (float)uVar23;
      } while (puVar10 != (undefined *)0x0);
      _objc_release(puVar4);
      if (uVar18 == 0) goto LAB_1069aaaa4;
    }
    puVar10 = PTR_PTR_1126b70f8;
    _objc_alloc();
    func_0x00010c02c020();
    _objc_retain();
    puVar26 = puVar10;
    func_0x00010c0cd7e0();
    puVar24 = puVar10;
    func_0x00010c0c2340();
    _objc_release(puVar10);
    puStack_240 = (undefined *)0x0;
    if (puVar26 <= puVar24) {
      puStack_240 = puVar10;
    }
    _objc_retain();
    _objc_release(puVar10);
  }
LAB_1069aab0c:
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010c0fb680();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  _objc_retain(puVar17);
  puVar10 = puVar5;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(puVar17);
    puStack_248 = puVar17;
  }
  else {
    uVar23 = 0;
    _objc_retain(puVar5);
    puVar10 = puVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    fVar32 = (float)uVar23;
    if (puVar10 != (undefined *)0x0) {
      uVar29 = 0;
      uVar18 = 0;
      uVar22 = 0;
      uVar21 = 0xffffffffffffffff;
      do {
        puVar26 = (undefined *)0x0;
        uVar30 = uVar22;
        uVar19 = uVar29;
        uVar27 = uVar21;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar5);
          }
          uVar29 = *(ulong *)((long)puVar26 * 8);
          uVar22 = uVar29;
          func_0x00010c0cd7e0();
          if (uVar22 <= uVar30) {
            uVar22 = uVar30;
          }
          uVar21 = uVar29;
          func_0x00010c0c2340();
          if (uVar27 <= uVar21) {
            uVar21 = uVar27;
          }
          if ((uVar18 & 1) == 0) {
            uVar18 = uVar29;
            func_0x00010c232800();
            if ((uVar19 & 1) != 0) goto LAB_1069aac14;
LAB_1069aabf4:
            func_0x00010c232820();
          }
          else {
            uVar18 = 1;
            if ((uVar19 & 1) == 0) goto LAB_1069aabf4;
LAB_1069aac14:
            uVar29 = 1;
          }
          puVar26 = puVar26 + 1;
          uVar30 = uVar22;
          uVar19 = uVar29;
          uVar27 = uVar21;
        } while (puVar10 != puVar26);
        puVar10 = puVar5;
        func_0x00010bf52a60();
        fVar32 = (float)uVar23;
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    puVar10 = PTR_PTR_1126b7100;
    _objc_alloc();
    func_0x00010c02c040();
    _objc_retain();
    puVar26 = puVar10;
    func_0x00010c0cd7e0();
    puVar24 = puVar10;
    func_0x00010c0c2340();
    _objc_release(puVar10);
    puStack_248 = (undefined *)0x0;
    if (puVar26 <= puVar24) {
      puStack_248 = puVar10;
    }
    _objc_retain();
    _objc_release(puVar10);
  }
  _objc_release(puVar17);
  _objc_release(puVar5);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010c2993c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  _objc_retain(puVar17);
  puVar10 = puVar6;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(puVar17);
    puVar10 = puVar17;
  }
  else {
    puVar26 = PTR_PTR_1126cf7b8;
    func_0x00010bf29500();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = 0;
    _objc_retain(puVar6);
    puVar10 = puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    fVar32 = (float)uVar23;
    while (puVar10 != (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        iVar28 = (int)*(undefined8 *)((long)puVar24 * 8);
        iVar3 = iVar28;
        func_0x00010c232880();
        if (iVar3 != 0) {
          func_0x00010c2b8b00(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        iVar3 = iVar28;
        func_0x00010c232840();
        if (iVar3 != 0) {
          func_0x00010c2b8ac0(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        iVar3 = iVar28;
        func_0x00010c232860();
        if (iVar3 != 0) {
          func_0x00010c2b8ae0(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        iVar3 = iVar28;
        func_0x00010c2328a0();
        if (iVar3 != 0) {
          func_0x00010c2b8b20(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        iVar3 = iVar28;
        func_0x00010c232900();
        if (iVar3 != 0) {
          func_0x00010c2b8b80(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        iVar3 = iVar28;
        func_0x00010c2328c0();
        if (iVar3 != 0) {
          func_0x00010c2b8b40(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        func_0x00010c2328e0();
        if (iVar28 != 0) {
          func_0x00010c2b8b60(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar24 = puVar24 + 1;
      } while (puVar10 != puVar24);
      puVar10 = puVar6;
      func_0x00010bf52a60();
      fVar32 = (float)uVar23;
    }
    _objc_release(puVar6);
    puVar10 = puVar26;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
  }
  _objc_release(puVar17);
  _objc_release(puVar6);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010bf9d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  _objc_retain(puVar17);
  puVar26 = puVar7;
  func_0x00010bf529e0();
  if (puVar26 == (undefined *)0x0) {
    _objc_retain(puVar17);
    puVar26 = puVar17;
  }
  else {
    uVar22 = 0;
    _objc_retain(puVar7);
    puVar26 = puVar7;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (puVar26 == (undefined *)0x0) {
      uVar21 = 0;
      fVar32 = 3.4028235e+38;
    }
    else {
      uVar21 = 0;
      fVar32 = 3.4028235e+38;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          uVar23 = *(undefined8 *)((long)puVar24 * 8);
          func_0x00010c0cd820(uVar23);
          if ((float)uVar21 <= (float)uVar22) {
            uVar21 = uVar22 & 0xffffffff;
          }
          func_0x00010c0c23c0(uVar23);
          fVar33 = (float)uVar22;
          if (fVar32 <= (float)uVar22) {
            fVar33 = fVar32;
          }
          fVar32 = fVar33;
          puVar24 = puVar24 + 1;
        } while (puVar26 != puVar24);
        puVar26 = puVar7;
        func_0x00010bf52a60();
      } while (puVar26 != (undefined *)0x0);
    }
    fVar31 = (float)uVar21;
    _objc_release(puVar7);
    puVar24 = PTR_PTR_1126b7118;
    _objc_alloc();
    func_0x00010c02c080(uVar21,fVar32);
    _objc_retain();
    func_0x00010c0cd820(puVar24);
    fVar33 = fVar31;
    func_0x00010c0c23c0(puVar24);
    fVar32 = fVar33;
    _objc_release(puVar24);
    puVar26 = puVar24;
    if (fVar33 < fVar31) {
      puVar26 = (undefined *)0x0;
    }
    _objc_retain(puVar26);
    _objc_release(puVar24);
  }
  _objc_release(puVar17);
  _objc_release(puVar7);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010c0c6aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar8);
  _objc_retain(puVar17);
  puVar24 = puVar8;
  func_0x00010bf529e0();
  if (puVar24 == (undefined *)0x0) {
    _objc_retain(puVar17);
    puVar24 = puVar17;
  }
  else {
    puVar24 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar24;
    func_0x00010c0c6a80();
    _objc_release(puVar24);
    uVar23 = 0;
    _objc_retain(puVar8);
    puVar24 = puVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    fVar32 = (float)uVar23;
    while (puVar24 != (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar8);
        }
        puVar14 = *(undefined **)((long)puVar25 * 8);
        func_0x00010c0c6a80();
        fVar32 = (float)uVar23;
        if (puVar14 != puVar13) {
          _objc_release(puVar8);
          puVar24 = (undefined *)0x0;
          goto LAB_1069ab1a0;
        }
        puVar25 = puVar25 + 1;
      } while (puVar24 != puVar25);
      puVar24 = puVar8;
      func_0x00010bf52a60();
      fVar32 = (float)uVar23;
    }
    _objc_release(puVar8);
    puVar24 = PTR_PTR_1126b7108;
    _objc_alloc();
    func_0x00010c029de0();
  }
LAB_1069ab1a0:
  _objc_release(puVar17);
  _objc_release(puVar8);
  _objc_release(puVar17);
  puVar17 = (undefined *)0x0;
  if ((((puStack_238 != (undefined *)0x0) && (puStack_240 != (undefined *)0x0)) &&
      (puVar26 != (undefined *)0x0)) &&
     (((puStack_248 != (undefined *)0x0 && (puVar24 != (undefined *)0x0)) &&
      (puVar10 != (undefined *)0x0)))) {
    puVar17 = PTR_PTR_1126b7120;
    _objc_alloc();
    func_0x00010c015240();
  }
  _objc_release(puVar24);
  _objc_release(puVar26);
  _objc_release(puVar10);
  _objc_release(puStack_248);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar20);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar22 = param_1;
  func_0x00010bfb6f60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar22 == 0) {
LAB_1069ab39c:
    uVar22 = param_1;
    func_0x00010c13a3e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar22 != 0) {
      uVar21 = param_1;
      func_0x00010c13a3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar21;
      func_0x00010c0cd7e0();
      uVar29 = uVar21;
      func_0x00010c0c2340();
      _objc_release(uVar21);
      _objc_release(uVar22);
      if (uVar29 < uVar18) goto LAB_1069ab44c;
    }
    uVar22 = param_1;
    func_0x00010c0fb680();
    _objc_retainAutoreleasedReturnValue();
    if (uVar22 != 0) {
      uVar21 = param_1;
      func_0x00010c0fb680();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar21;
      func_0x00010c0cd7e0();
      uVar29 = uVar21;
      func_0x00010c0c2340();
      _objc_release(uVar21);
      _objc_release(uVar22);
      if (uVar29 < uVar18) goto LAB_1069ab44c;
    }
    uVar22 = param_1;
    func_0x00010bf9d7e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar22 == 0) {
      puVar20 = (undefined *)0x1;
    }
    else {
      uVar21 = param_1;
      func_0x00010bf9d7e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cd820();
      fVar33 = fVar32;
      func_0x00010c0c23c0(uVar21);
      puVar20 = (undefined *)(ulong)(fVar32 <= fVar33);
      _objc_release(uVar21);
      _objc_release(uVar22);
    }
  }
  else {
    uVar21 = param_1;
    func_0x00010bfb6f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar18 = uVar21;
    func_0x00010c0c22a0();
    uVar29 = uVar21;
    func_0x00010c0c2280();
    if (uVar29 <= uVar18) {
      uVar18 = uVar21;
      func_0x00010c0c2280();
      uVar29 = uVar21;
      func_0x00010c0c1d20();
      if (uVar29 <= uVar18) {
        uVar18 = uVar21;
        func_0x00010c0c1d20();
        uVar29 = uVar21;
        func_0x00010c0cd500();
        _objc_release(uVar21);
        _objc_release(uVar21);
        _objc_release(uVar22);
        if (uVar29 <= uVar18) goto LAB_1069ab39c;
        goto LAB_1069ab44c;
      }
    }
    _objc_release(uVar21);
    _objc_release(uVar21);
    _objc_release(uVar22);
LAB_1069ab44c:
    puVar20 = (undefined *)0x0;
  }
  _objc_release(param_1);
  return puVar20;
}



/* Entry: 1069ab2c0; end: 1069ab4d3;  */

bool FUN_1069ab2c0(float param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  float fVar6;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfb6f60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_1069ab39c:
    uVar1 = param_2;
    func_0x00010c13a3e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_2;
      func_0x00010c13a3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0cd7e0();
      uVar4 = uVar2;
      func_0x00010c0c2340();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar4 < uVar3) goto LAB_1069ab44c;
    }
    uVar1 = param_2;
    func_0x00010c0fb680();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_2;
      func_0x00010c0fb680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0cd7e0();
      uVar4 = uVar2;
      func_0x00010c0c2340();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar4 < uVar3) goto LAB_1069ab44c;
    }
    uVar1 = param_2;
    func_0x00010bf9d7e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      bVar5 = true;
    }
    else {
      uVar2 = param_2;
      func_0x00010bf9d7e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cd820();
      fVar6 = param_1;
      func_0x00010c0c23c0(uVar2);
      bVar5 = param_1 <= fVar6;
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  else {
    uVar2 = param_2;
    func_0x00010bfb6f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar3 = uVar2;
    func_0x00010c0c22a0();
    uVar4 = uVar2;
    func_0x00010c0c2280();
    if (uVar4 <= uVar3) {
      uVar3 = uVar2;
      func_0x00010c0c2280();
      uVar4 = uVar2;
      func_0x00010c0c1d20();
      if (uVar4 <= uVar3) {
        uVar3 = uVar2;
        func_0x00010c0c1d20();
        uVar4 = uVar2;
        func_0x00010c0cd500();
        _objc_release(uVar2);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar4 <= uVar3) goto LAB_1069ab39c;
        goto LAB_1069ab44c;
      }
    }
    _objc_release(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_1069ab44c:
    bVar5 = false;
  }
  _objc_release(param_2);
  return bVar5;
}



/* Entry: 1069ab4d4; end: 1069ab5fb;  */

bool FUN_1069ab4d4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfb6f60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = param_1;
    func_0x00010c13a3e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = true;
    }
    else {
      lVar4 = param_1;
      func_0x00010c0fb680();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        bVar1 = true;
      }
      else {
        lVar5 = param_1;
        func_0x00010bf9d7e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          bVar1 = true;
        }
        else {
          lVar6 = param_1;
          func_0x00010c2993c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            bVar1 = true;
          }
          else {
            lVar7 = param_1;
            func_0x00010c0c6aa0(param_1);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = lVar7 == 0;
            _objc_release();
          }
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1069ab5fc; end: 1069ab6c3; -[SCCameraDeviceSettingsProviderToken initWithCreatedTime:delegate:featureName:] */

undefined1 *
FUN_1069ab5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f40c8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain();
    uVar2 = param_4;
    func_0x00010bfde980();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(param_4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1069ab6c4; end: 1069ab6e7; -[SCCameraDeviceSettingsProviderToken copyWithZone:] */

undefined8 FUN_1069ab6c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1069ab6e8; end: 1069ab747; -[SCCameraDeviceSettingsProviderToken hash] */

long * FUN_1069ab6e8(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_28 = (long)*(double *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  plVar1 = &lStack_28;
  func_0x000100505190(plVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    if (plVar1 == param_3) {
      plVar3 = (long *)0x1;
    }
    else {
      plVar3 = (long *)0x0;
      if ((plVar1 != (long *)0x0) && (param_3 != (long *)0x0)) {
        plVar3 = plVar1;
        _objc_opt_class(plVar1);
        plVar2 = param_3;
        _objc_opt_isKindOfClass(param_3,plVar3);
        if ((((ulong)plVar2 & 1) == 0) || ((double)plVar1[2] != (double)param_3[2])) {
          plVar3 = (long *)0x0;
        }
        else {
          plVar2 = plVar1 + 3;
          _objc_loadWeakRetained();
          plVar3 = param_3 + 3;
          _objc_loadWeakRetained();
          if (plVar2 == plVar3) {
            plVar3 = (long *)(ulong)(plVar1[1] == param_3[1]);
          }
          else {
            plVar3 = (long *)0x0;
          }
          _objc_release();
          _objc_release(plVar2);
        }
      }
    }
    _objc_release(param_3);
    return plVar3;
  }
  return plVar1;
}



/* Entry: 1069ab748; end: 1069ab80f; -[SCCameraDeviceSettingsProviderToken isEqual:] */

bool FUN_1069ab748(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(double *)(param_1 + 0x10) != *(double *)(param_3 + 0x10))) {
        bVar1 = false;
      }
      else {
        lVar4 = param_1 + 0x18;
        _objc_loadWeakRetained();
        lVar5 = param_3 + 0x18;
        _objc_loadWeakRetained();
        if (lVar4 == lVar5) {
          bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
        }
        else {
          bVar1 = false;
        }
        _objc_release();
        _objc_release(lVar4);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1069ab810; end: 1069ab817; -[SCCameraDeviceSettingsProviderToken createdTime] */

undefined8 FUN_1069ab810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069ab818; end: 1069ab82f; -[SCCameraDeviceSettingsProviderToken delegate] */

void FUN_1069ab818(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069ab830; end: 1069ab837; -[SCCameraDeviceSettingsProviderToken featureName] */

undefined8 FUN_1069ab830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1069ab838; end: 1069ab893; -[SCCameraDeviceSettingsProviderToken .cxx_destruct] */

void FUN_1069ab838(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 1069ab894; end: 1069aba5f; -[SCCameraDeviceSettingsResolver registerWithDeviceSettingsMap:delegate:] */

void FUN_1069ab894(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be43040(param_1);
  ppuVar1 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar3 = ppuVar2;
  func_0x00010bfa28e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3a38;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126cf7c0;
  _objc_alloc();
  _CACurrentMediaTime();
  func_0x00010c006700();
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5);
  _objc_retain(puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069aba60; end: 1069aba97;  */

void FUN_1069aba60(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069aba98; end: 1069abb6f; -[SCCameraDeviceSettingsResolver unregister:] */

void FUN_1069aba98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069abb70; end: 1069abbab;  */

void FUN_1069abb70(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069abbac; end: 1069ac06f; -[SCCameraDeviceSettingsResolver _requestDeviceFormatUpdateWithToken:deviceSettingsMapOfToken:isRegister:] */

void FUN_1069abbac(long param_1,undefined8 param_2,long param_3,undefined *param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_118 [8];
  undefined1 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  _objc_opt_class(param_1);
  func_0x00010be43e40();
  if (param_5 == 0) {
    puVar3 = puVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b7040;
      func_0x00010c22be80(PTR_PTR_1126b7040);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1069ac070;
      puStack_88 = &UNK_110842e18;
      _objc_retain(param_3);
      puVar7 = puVar3;
      lStack_80 = param_3;
      func_0x00010bf1d4a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa340();
      _objc_release(puVar3);
      _objc_release(puVar7);
      lVar6 = lStack_80;
      goto LAB_1069abe80;
    }
    func_0x00010c12d3e0(puVar1);
    if (*(char *)(param_1 + 0x50) == '\x01') goto LAB_1069abc98;
    puVar3 = PTR_PTR_1126b7040;
    func_0x00010c22be80(PTR_PTR_1126b7040);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar7 = puVar3;
    func_0x00010bf1d4a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(puVar3);
    _objc_release(puVar7);
    lVar6 = param_3;
  }
  else {
    func_0x00010c1d0640();
LAB_1069abc98:
    lVar6 = param_1;
    func_0x00010be1e9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be1b100(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_1069ac0ac;
    uStack_b0 = 0x1069ac0bc;
    uStack_a8 = 0;
    puStack_c8 = &uStack_d0;
    _objc_initWeak(auStack_d8,param_1);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1069ac0c4;
    puStack_f0 = &UNK_1108646c8;
    lVar5 = param_1;
    lStack_e8 = param_1;
    puStack_e0 = &uStack_d0;
    func_0x00010be90e40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b7040;
    func_0x00010c22be80(PTR_PTR_1126b7040);
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = (undefined1)param_5;
    _objc_copyWeak(auStack_118,auStack_d8);
    _objc_retain(param_3);
    puVar7 = puVar3;
    func_0x00010bf1d4a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lVar5 != 0) {
      func_0x00010bef7d60(puVar7);
    }
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_118);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    _objc_release(lVar4);
  }
  _objc_release(lVar6);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  lVar6 = *(long *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar3;
LAB_1069abe80:
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ac070; end: 1069ac0ab;  */

void FUN_1069ac070(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7df00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ac0ac; end: 1069ac0c3;  */

void FUN_1069ac0ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069ac0c4; end: 1069ac1f3;  */

void FUN_1069ac0c4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf3ec40();
  if (lVar2 == 0xbb9) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ac1f4; end: 1069ac2db;  */

void FUN_1069ac1f4(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  else {
    lVar2 = lVar1;
    FUN_1069aa3e0(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar2 == 0) {
    func_0x00010be94920(*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ac2dc; end: 1069ac3d7; +[SCCameraDeviceSettingsResolver _isSoftOnlyFrameRateContribution:] */

byte FUN_1069ac2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 1;
  func_0x00010bf97ce0(param_3);
  if (*(char *)(puStack_38 + 3) == '\x01') {
    bVar1 = *(byte *)(puStack_58 + 3);
  }
  else {
    bVar1 = 0;
  }
  __Block_object_dispose(&uStack_60,8);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 1069ac3d8; end: 1069ac4ef;  */

void FUN_1069ac3d8(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0c6aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1069ac44c;
    lVar1 = param_3;
    func_0x00010c0fb680();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1069ac44c;
    lVar1 = param_3;
    func_0x00010c2993c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1069ac44c;
    lVar1 = param_3;
    func_0x00010bf9d7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfb6f60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x00010c087060();
        if (lVar2 == 1) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
        }
        else {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
          *param_4 = 1;
        }
      }
      _objc_release(lVar1);
      goto LAB_1069ac464;
    }
  }
  else {
LAB_1069ac44c:
    _objc_release();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  *param_4 = 1;
LAB_1069ac464:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ac4f0; end: 1069ac69f; -[SCCameraDeviceSettingsResolver _sortDeviceSettingsMapByDevicePositionsFromActiveSettingsProviderDict:] */

void FUN_1069ac4f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,puVar4,uVar6);
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1069ac6a0;
  puStack_140 = &UNK_1109501e0;
  _objc_retain(puVar1);
  ppuVar5 = &puStack_158;
  puStack_138 = puVar1;
  func_0x00010bf97ce0(param_3,param_2,ppuVar5);
  _objc_release(puStack_138);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1069ac6a0;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1069ac710;
  puStack_190 = &UNK_1109501b0;
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  puStack_180 = puVar1;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  uStack_188 = uVar6;
  func_0x00010bf97ce0(ppuVar5,param_2,&puStack_1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_188);
  return;
}



/* Entry: 1069ac6a0; end: 1069ac70f;  */

void FUN_1069ac6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069ac710;
  puStack_30 = &UNK_1109501b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010bf97ce0(param_3,param_2,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_28);
  return;
}



/* Entry: 1069ac710; end: 1069ac76f;  */

void FUN_1069ac710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ac770; end: 1069ac8a3; -[SCCameraDeviceSettingsResolver _resolveConstraintConflictsInActiveSettingsProviderDict:] */

void FUN_1069ac770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1069aa374();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c12d3e0(param_3);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b7040;
  func_0x00010c22be80(PTR_PTR_1126b7040);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  puVar4 = puVar3;
  func_0x00010bf1d460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa340();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 1069ac8a4; end: 1069ac8df;  */

void FUN_1069ac8a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7df00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ac8e0; end: 1069acb47; -[SCCameraDeviceSettingsResolver _requestDeviceCaptureFormats:errorHandler:requestingFeatures:useFrameRateOnlyFastPath:] */

void FUN_1069ac8e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010bf97ce0(param_3);
  puVar3 = PTR_PTR_1126b00d0;
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  func_0x00010c064bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR_PTR_1126b00d0;
  if (param_6 == 0) {
    func_0x00010c285140(PTR_PTR_1126b00d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c285fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b00d0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf12540();
  func_0x00010c251a00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1069acb48; end: 1069acba7;  */

void FUN_1069acb48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    return;
  }
  func_0x00010c2993c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c232840();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069acba8; end: 1069acc67; -[SCCameraDeviceSettingsResolver _isProviderSettingsMapValid:] */

undefined1 FUN_1069acba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010bf97ce0(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1069acc68; end: 1069accef;  */

void FUN_1069acc68(long param_1,uint param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010c067ec0();
  if (1 < param_2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  uVar1 = param_3;
  FUN_1069ab2c0();
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1069accf0; end: 1069ace43; +[SCCameraDeviceSettingsResolver _isValidDefaultMap:cameraHardwareResource:captureDeviceManager:] */

undefined8
FUN_1069accf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_4;
  func_0x00010c11dfc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1069ace44; end: 1069ad087;  */

ulong FUN_1069ace44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  long lStack_150;
  ulong uStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010010fab4();
    lVar1 = lVar4;
    if ((int)lVar11 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c252440(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf70d80();
      func_0x00010c0df780(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c252440(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c154f00();
      func_0x0001090468e4(puVar7,uVar5,lVar4);
      _objc_release(uVar8);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(puVar7);
      puVar6 = puVar7;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        lVar11 = *plStack_120;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(puVar7);
            }
            func_0x00010c067fc0(*(undefined8 *)(lStack_128 + (long)puVar12 * 8));
            uVar5 = *(undefined8 *)(param_1 + 0x30);
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar9);
            puVar12 = puVar12 + 1;
          } while (puVar6 != puVar12);
          puVar6 = puVar7;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      _objc_release(puVar7);
    }
    param_3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be45340(uVar3);
    _objc_release(lVar1);
  }
  uVar10 = uVar3;
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar10;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1069ad088;
  lStack_150 = param_1;
  uStack_148 = uVar3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 1;
  func_0x00010bf97ce0(param_3);
  bVar2 = *(byte *)(puStack_168 + 3);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(param_3);
  return (ulong)bVar2;
}



/* Entry: 1069ad088; end: 1069ad143; +[SCCameraDeviceSettingsResolver _isValidDefaultMap:] */

undefined1 FUN_1069ad088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010bf97ce0(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1069ad144; end: 1069ad207;  */

void FUN_1069ad144(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  FUN_1069ab2c0();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  uVar1 = param_3;
  FUN_1069ab4d4();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  uVar2 = param_2;
  func_0x00010c067ec0();
  _objc_release(param_2);
  if (1 < (uint)uVar2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1069ad208; end: 1069ad20f; -[SCCameraDeviceSettingsResolver activeSettingsProviderDict] */

undefined8 FUN_1069ad208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1069ad210; end: 1069ad23f; -[SCCameraDeviceSettingsResolver setActiveSettingsProviderDict:] */

void FUN_1069ad210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ad240; end: 1069ad24b; -[SCCameraDeviceSettingsResolver cameraIsAlive] */

byte FUN_1069ad240(long param_1)

{
  return *(byte *)(param_1 + 0x50) & 1;
}



/* Entry: 1069ad24c; end: 1069ad2cb; -[SCCameraDeviceSettingsResolver .cxx_destruct] */

void FUN_1069ad24c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069ad2cc; end: 1069ad6db; -[SCCameraDeviceSettingsResolverDecorator registerWithDeviceSettingsMap:delegate:] */

undefined8 * FUN_1069ad2cc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long unaff_x23;
  undefined *puVar16;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  long lVar17;
  long unaff_x28;
  long lVar18;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_1f0;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar11 = param_1;
  func_0x00010be0e940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be40e20();
  if ((int)lVar3 == 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      lStack_178 = lVar11;
      puStack_170 = param_4;
      puStack_168 = param_3;
      func_0x00010bf72020();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puVar6 = puVar5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puVar6;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        lVar11 = *plStack_120;
        lStack_160 = lVar11;
        puStack_158 = puVar5;
        lStack_150 = param_1;
        do {
          puVar16 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(puStack_148);
            }
            unaff_x27 = *(undefined8 *)(lStack_128 + (long)puVar16 * 8);
            unaff_x26 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = *(long *)(param_1 + 0x48);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x26 != (undefined *)0x0) {
              lVar3 = unaff_x28;
              func_0x00010c13a3e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar3 != 0) {
                puVar5 = PTR_PTR_1126b7128;
                func_0x00010bf294a0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR_PTR_1126b70f8;
                puStack_138 = puVar5;
                _objc_alloc();
                lVar11 = unaff_x28;
                puStack_140 = puVar7;
                func_0x00010c13a3e0(unaff_x28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0cd7e0();
                lVar3 = unaff_x28;
                func_0x00010c13a3e0(unaff_x28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0c2340();
                unaff_x25 = unaff_x26;
                func_0x00010c13a3e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf0aca0();
                puVar8 = puStack_140;
                func_0x00010c02c020(puStack_140);
                puVar7 = puStack_138;
                func_0x00010c2b72a0(puStack_138);
                _objc_unsafeClaimAutoreleasedReturnValue();
                puVar5 = puStack_158;
                _objc_release(puVar8);
                _objc_release(unaff_x25);
                param_1 = lStack_150;
                _objc_release(lVar3);
                _objc_release(lVar11);
                puVar8 = puVar7;
                func_0x00010bf21f60(puVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar5);
                lVar11 = lStack_160;
                _objc_release(puVar8);
                _objc_release(puVar7);
              }
            }
            _objc_release(unaff_x28);
            _objc_release(unaff_x26);
            puVar16 = puVar16 + 1;
          } while (puVar6 != puVar16);
          puVar6 = puStack_148;
          func_0x00010bf52a60();
          unaff_x23 = 0;
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puStack_148);
      puVar4 = *(undefined8 **)(param_1 + 8);
      func_0x00010c1276a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      param_3 = puStack_168;
      param_4 = puStack_170;
      lVar11 = lStack_178;
    }
    else {
      puVar4 = *(undefined8 **)(param_1 + 8);
      func_0x00010c1276a0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar4 = *(undefined8 **)(param_1 + 8);
      func_0x00010c1276a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x23 = param_1;
      func_0x00010be5fb80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = *(undefined8 **)(param_1 + 8);
      func_0x00010c1276a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
    }
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  puVar15 = param_4;
  func_0x00010bea3560(param_1);
  _objc_release(lVar11);
  _objc_release(param_4);
  puVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1069ad6dc;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e0 = unaff_x28;
  uStack_1d8 = unaff_x27;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  lStack_1c0 = lVar11;
  lStack_1b8 = unaff_x23;
  puStack_1b0 = puVar4;
  lStack_1a8 = param_1;
  puStack_1a0 = param_4;
  puStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  puVar10 = (undefined8 *)puVar9[10];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  if (puVar10 != (undefined8 *)0x0) {
    puVar4 = puVar10;
  }
  _objc_retain(puVar4);
  _objc_release(puVar10);
  uVar2 = puVar9[10];
  func_0x00010bf00320();
  _objc_retainAutoreleasedReturnValue();
  uStack_3b8 = uVar2;
  func_0x00010c12d4a0(puVar9[10]);
  puStack_3b0 = puVar15;
  func_0x00010c12d3e0(puVar9[10]);
  lVar11 = puVar9[2];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  lStack_3a8 = lVar11;
  if (lVar11 == 0) {
    func_0x00010befa120(puVar9[6]);
    func_0x00010c281f80(puVar9[1]);
  }
  else {
    puVar10 = puVar9;
    func_0x00010be0e940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(puVar9[2]);
    puVar12 = puVar9;
    puStack_3c0 = puVar10;
    func_0x00010be40e20();
    if ((int)puVar12 == 0) {
      if ((*(char *)(puVar9 + 8) == '\x01') &&
         (puVar12 = puVar9, func_0x00010be5c960(), (int)puVar12 != 0)) {
        func_0x00010be86a20(puVar9);
      }
      func_0x00010befa120(puVar9[6]);
      func_0x00010c281f80(puVar9[1]);
    }
    else {
      func_0x00010befa120(puVar9[6]);
      puStack_3c8 = puVar4;
      func_0x00010c281f80(puVar9[1]);
      *(undefined1 *)(puVar9 + 8) = 0;
      uVar2 = puVar9[9];
      puVar9[9] = 0;
      _objc_release(uVar2);
      uVar2 = puVar9[7];
      puVar9[7] = 0;
      _objc_release(uVar2);
      lVar11 = puVar9[2];
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      puVar13 = &uStack_330;
      lStack_390 = lVar11;
      func_0x00010bf52a60();
      if (lVar11 != 0) {
        puVar15 = (undefined8 *)*plStack_320;
        puStack_3a0 = puVar15;
        do {
          lVar3 = 0;
          lStack_398 = lVar11;
          do {
            if ((undefined8 *)*plStack_320 != puVar15) {
              _objc_enumerationMutation(lStack_390);
            }
            uVar2 = puVar9[2];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar9;
            func_0x00010bdf9b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c281f80(puVar9[1]);
            if (*(char *)(puVar9 + 5) == '\x01' && puVar4 == (undefined8 *)0x0) {
              func_0x00010c12d3e0(puVar9[2]);
              func_0x00010be8bda0(puVar9);
              puVar10 = (undefined8 *)puVar9[10];
              puVar13 = puVar10;
              func_0x00010bf00320(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d4a0(puVar10);
            }
            else {
              puVar13 = (undefined8 *)puVar9[1];
              lStack_378 = lVar3;
              func_0x00010c1276a0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(puVar9[2]);
              uStack_380 = uVar2;
              func_0x00010c1d0640(puVar9[2]);
              func_0x00010be8bda0(puVar9);
              puStack_388 = puVar4;
              func_0x00010bea3560(puVar9);
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              uStack_368 = 0;
              uStack_370 = 0;
              uStack_358 = 0;
              plStack_360 = (long *)0x0;
              lVar3 = puVar9[10];
              func_0x00010bf002e0();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar3;
              func_0x00010bf52a60();
              if (lVar11 != 0) {
                lVar18 = *plStack_360;
                do {
                  lVar17 = 0;
                  do {
                    if (*plStack_360 != lVar18) {
                      _objc_enumerationMutation(lVar3);
                    }
                    uVar14 = puVar9[10];
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = uVar14;
                    func_0x00010c071ae0();
                    _objc_release(uVar14);
                    if ((int)uVar2 != 0) {
                      func_0x00010c1d0640(puVar9[10]);
                    }
                    lVar17 = lVar17 + 1;
                  } while (lVar11 != lVar17);
                  lVar11 = lVar3;
                  func_0x00010bf52a60();
                  puVar10 = (undefined8 *)0x0;
                } while (lVar11 != 0);
              }
              _objc_release(lVar3);
              func_0x00010c1d0640(puVar9[10]);
              puVar15 = puStack_3a0;
              lVar11 = lStack_398;
              lVar3 = lStack_378;
              uVar2 = uStack_380;
              puVar4 = puStack_388;
            }
            _objc_release(puVar13);
            _objc_release(puVar4);
            _objc_release(uVar2);
            lVar3 = lVar3 + 1;
          } while (lVar3 != lVar11);
          puVar13 = &uStack_330;
          lVar11 = lStack_390;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lStack_390);
      puVar4 = puStack_3c8;
    }
    _objc_release(puStack_3c0);
  }
  _objc_release(lStack_3a8);
  _objc_release(uStack_3b8);
  _objc_release(puVar4);
  puVar4 = puStack_3b0;
  _objc_release(puStack_3b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_3d8 = FUN_1069adb68;
  puStack_3f0 = puVar15;
  puStack_3e8 = puVar10;
  ppuStack_3e0 = &puStack_190;
  _objc_retain(puVar13);
  puStack_408 = &uStack_410;
  uStack_410 = 0;
  uStack_400 = 0x2020000000;
  uStack_3f8 = 0;
  func_0x00010bf97ce0(puVar13);
  bVar1 = *(byte *)(puStack_408 + 3);
  __Block_object_dispose(&uStack_410,8);
  _objc_release(puVar13);
  return (undefined8 *)(ulong)bVar1;
}



/* Entry: 1069ad6dc; end: 1069adb67; -[SCCameraDeviceSettingsResolverDecorator unregister:] */

undefined8 * FUN_1069ad6dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = (undefined8 *)param_1[10];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = puVar2;
  }
  _objc_retain(puVar6);
  _objc_release(puVar2);
  uVar3 = param_1[10];
  func_0x00010bf00320();
  _objc_retainAutoreleasedReturnValue();
  uStack_238 = uVar3;
  func_0x00010c12d4a0(param_1[10]);
  puStack_230 = param_3;
  func_0x00010c12d3e0(param_1[10]);
  lVar4 = param_1[2];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  lStack_228 = lVar4;
  if (lVar4 == 0) {
    func_0x00010befa120(param_1[6]);
    func_0x00010c281f80(param_1[1]);
  }
  else {
    puVar2 = param_1;
    func_0x00010be0e940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(param_1[2]);
    puVar5 = param_1;
    puStack_240 = puVar2;
    func_0x00010be40e20();
    if ((int)puVar5 == 0) {
      if ((*(char *)(param_1 + 8) == '\x01') &&
         (puVar5 = param_1, func_0x00010be5c960(), (int)puVar5 != 0)) {
        func_0x00010be86a20(param_1);
      }
      func_0x00010befa120(param_1[6]);
      func_0x00010c281f80(param_1[1]);
    }
    else {
      func_0x00010befa120(param_1[6]);
      puStack_248 = puVar6;
      func_0x00010c281f80(param_1[1]);
      *(undefined1 *)(param_1 + 8) = 0;
      uVar3 = param_1[9];
      param_1[9] = 0;
      _objc_release(uVar3);
      uVar3 = param_1[7];
      param_1[7] = 0;
      _objc_release(uVar3);
      lVar4 = param_1[2];
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      puVar7 = &uStack_1b0;
      lStack_210 = lVar4;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        param_3 = (undefined8 *)*plStack_1a0;
        puStack_220 = param_3;
        do {
          lVar9 = 0;
          lStack_218 = lVar4;
          do {
            if ((undefined8 *)*plStack_1a0 != param_3) {
              _objc_enumerationMutation(lStack_210);
            }
            uVar3 = param_1[2];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_1;
            func_0x00010bdf9b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c281f80(param_1[1]);
            if (*(char *)(param_1 + 5) == '\x01' && puVar6 == (undefined8 *)0x0) {
              func_0x00010c12d3e0(param_1[2]);
              func_0x00010be8bda0(param_1);
              puVar2 = (undefined8 *)param_1[10];
              puVar7 = puVar2;
              func_0x00010bf00320(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d4a0(puVar2);
            }
            else {
              puVar7 = (undefined8 *)param_1[1];
              lStack_1f8 = lVar9;
              func_0x00010c1276a0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(param_1[2]);
              uStack_200 = uVar3;
              func_0x00010c1d0640(param_1[2]);
              func_0x00010be8bda0(param_1);
              puStack_208 = puVar6;
              func_0x00010bea3560(param_1);
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              plStack_1e0 = (long *)0x0;
              lVar9 = param_1[10];
              func_0x00010bf002e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar9;
              func_0x00010bf52a60();
              if (lVar4 != 0) {
                lVar11 = *plStack_1e0;
                do {
                  lVar10 = 0;
                  do {
                    if (*plStack_1e0 != lVar11) {
                      _objc_enumerationMutation(lVar9);
                    }
                    uVar8 = param_1[10];
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar8;
                    func_0x00010c071ae0();
                    _objc_release(uVar8);
                    if ((int)uVar3 != 0) {
                      func_0x00010c1d0640(param_1[10]);
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar4 != lVar10);
                  lVar4 = lVar9;
                  func_0x00010bf52a60();
                  puVar2 = (undefined8 *)0x0;
                } while (lVar4 != 0);
              }
              _objc_release(lVar9);
              func_0x00010c1d0640(param_1[10]);
              param_3 = puStack_220;
              lVar4 = lStack_218;
              lVar9 = lStack_1f8;
              uVar3 = uStack_200;
              puVar6 = puStack_208;
            }
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(uVar3);
            lVar9 = lVar9 + 1;
          } while (lVar9 != lVar4);
          puVar7 = &uStack_1b0;
          lVar4 = lStack_210;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lStack_210);
      puVar6 = puStack_248;
    }
    _objc_release(puStack_240);
  }
  _objc_release(lStack_228);
  _objc_release(uStack_238);
  _objc_release(puVar6);
  puVar6 = puStack_230;
  _objc_release(puStack_230);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_1069adb68;
  puStack_270 = param_3;
  puStack_268 = puVar2;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_288 = &uStack_290;
  uStack_290 = 0;
  uStack_280 = 0x2020000000;
  uStack_278 = 0;
  func_0x00010bf97ce0(puVar7);
  bVar1 = *(byte *)(puStack_288 + 3);
  __Block_object_dispose(&uStack_290,8);
  _objc_release(puVar7);
  return (undefined8 *)(ulong)bVar1;
}



/* Entry: 1069adb68; end: 1069adc1f; -[SCCameraDeviceSettingsResolverDecorator _mapAffectsHDMerge:] */

undefined1 FUN_1069adb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf97ce0(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1069adc20; end: 1069add23;  */

void FUN_1069adc20(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0c6aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1069adc94;
    lVar1 = param_3;
    func_0x00010c0fb680();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1069adc94;
    lVar1 = param_3;
    func_0x00010c2993c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_1069adc94;
    lVar1 = param_3;
    func_0x00010bf9d7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfb6f60();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c087060(), lVar2 != 1)) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
        *param_4 = 1;
      }
      _objc_release(lVar1);
      goto LAB_1069adcac;
    }
  }
  else {
LAB_1069adc94:
    _objc_release();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *param_4 = 1;
LAB_1069adcac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069add24; end: 1069adfef; -[SCCameraDeviceSettingsResolverDecorator _rebuildAndReregisterHDToken] */

/* WARNING: Possible PIC construction at 0x0001069addb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069addb4) */
/* WARNING: Removing unreachable block (ram,0x0001069ade08) */
/* WARNING: Removing unreachable block (ram,0x0001069ade24) */
/* WARNING: Removing unreachable block (ram,0x0001069ade4c) */
/* WARNING: Removing unreachable block (ram,0x0001069ade58) */
/* WARNING: Removing unreachable block (ram,0x0001069ade2c) */
/* WARNING: Removing unreachable block (ram,0x0001069ade64) */
/* WARNING: Removing unreachable block (ram,0x0001069ade98) */
/* WARNING: Removing unreachable block (ram,0x0001069adea4) */
/* WARNING: Removing unreachable block (ram,0x0001069adea8) */
/* WARNING: Removing unreachable block (ram,0x0001069adeb8) */
/* WARNING: Removing unreachable block (ram,0x0001069adec0) */
/* WARNING: Removing unreachable block (ram,0x0001069adef8) */
/* WARNING: Removing unreachable block (ram,0x0001069adf08) */
/* WARNING: Removing unreachable block (ram,0x0001069adf14) */
/* WARNING: Removing unreachable block (ram,0x0001069adf30) */
/* WARNING: Removing unreachable block (ram,0x0001069adf8c) */

void FUN_1069add24(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [128];
  long lStack_350;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined1 **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x28] == '\x01') {
    puVar6 = param_1;
    func_0x00010bdf9b40(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    _objc_release();
    if (puVar6 == (undefined *)0x0) {
      ppuVar9 = *(undefined ***)(param_1 + 0x38);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        pcStack_158 = FUN_1069adff0;
        lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_2c8 = ppuVar9;
        puStack_160 = &stack0xfffffffffffffff0;
        _objc_retain(ppuVar9);
        ppuVar8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(puVar1 + 0x10);
        func_0x00010bf529e0();
        ppuVar4 = ppuStack_2c8;
        if ((lVar3 == 1) && (puVar1[0x40] == '\x01')) {
          _objc_retain(ppuStack_2c8);
          ppuStack_2d0 = ppuVar4;
          ppuVar8 = ppuVar4;
        }
        else {
          unaff_x22 = *(undefined ***)(puVar1 + 0x10);
          puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_268 = 0xc2000000;
          uStack_260 = 0x1069ae318;
          puStack_258 = &UNK_110950240;
          puStack_250 = puVar1;
          _objc_retain(ppuVar2);
          ppuStack_248 = ppuVar2;
          func_0x00010bf97ce0(unaff_x22);
          ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          lStack_2a8 = 0;
          puStack_2b0 = (undefined *)0x0;
          uStack_298 = 0;
          plStack_2a0 = (long *)0x0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          ppuStack_2d0 = ppuVar9;
          _objc_retain(ppuVar2);
          ppuVar9 = &puStack_2b0;
          param_4 = auStack_240;
          ppuVar4 = ppuVar2;
          func_0x00010bf52a60();
          ppuStack_2c0 = ppuVar4;
          if (ppuVar4 != (undefined **)0x0) {
            lStack_2d8 = *plStack_2a0;
            ppuStack_2e0 = ppuVar2;
            do {
              unaff_x27 = (undefined **)0x0;
              do {
                if (*plStack_2a0 != lStack_2d8) {
                  _objc_enumerationMutation(ppuVar2);
                }
                unaff_x24 = *(undefined8 *)(lStack_2a8 + (long)unaff_x27 * 8);
                unaff_x23 = ppuStack_2c8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = ppuVar2;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar9 = unaff_x23;
                func_0x00010c13a3e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                unaff_x26 = (undefined **)0x0;
                if (ppuVar9 != (undefined **)0x0) {
                  puVar6 = PTR_PTR_1126b70f8;
                  _objc_alloc();
                  unaff_x26 = unaff_x23;
                  puStack_2b8 = puVar6;
                  func_0x00010c13a3e0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = unaff_x26;
                  func_0x00010c0cd7e0();
                  ppuVar9 = unaff_x23;
                  func_0x00010c13a3e0(unaff_x23);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0c2340();
                  ppuVar4 = unaff_x25;
                  func_0x00010bf21f60();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x22 = ppuVar4;
                  func_0x00010c13a3e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf0aca0();
                  puVar1 = puStack_2b8;
                  func_0x00010c02c020();
                  func_0x00010c2b72a0(unaff_x25);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  _objc_release(puVar1);
                  _objc_release(unaff_x22);
                  ppuVar2 = ppuStack_2e0;
                  _objc_release(ppuVar4);
                  _objc_release(ppuVar9);
                  _objc_release(unaff_x26);
                }
                ppuVar8 = unaff_x25;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuStack_2d0);
                _objc_release(ppuVar8);
                _objc_release(unaff_x25);
                _objc_release(unaff_x23);
                unaff_x27 = (undefined **)((long)unaff_x27 + 1);
              } while (ppuStack_2c0 != unaff_x27);
              ppuVar9 = &puStack_2b0;
              param_4 = auStack_240;
              ppuVar4 = ppuVar2;
              func_0x00010bf52a60();
              ppuStack_2c0 = ppuVar4;
            } while (ppuVar4 != (undefined **)0x0);
          }
          _objc_release(ppuVar2);
          _objc_release(ppuStack_248);
        }
        _objc_release(ppuVar2);
        ppuVar4 = ppuStack_2c8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuStack_2d0);
          return;
        }
        ___stack_chk_fail();
        puVar7 = &uStack_410;
        uStack_2e8 = 0x1069ae318;
        lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_340 = unaff_x28;
        ppuStack_338 = unaff_x27;
        ppuStack_330 = unaff_x26;
        ppuStack_328 = unaff_x25;
        uStack_320 = unaff_x24;
        ppuStack_318 = unaff_x23;
        ppuStack_310 = unaff_x22;
        puStack_308 = puVar1;
        ppuStack_300 = ppuVar2;
        ppuStack_2f8 = ppuVar8;
        ppuStack_2f0 = &puStack_160;
        _objc_retain(ppuVar9);
        puVar10 = ppuVar4[4];
        puVar6 = puVar10;
        func_0x00010be0e940();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010be40e20();
        _objc_release(puVar6);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_3d8 = 0;
          uStack_3e0 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
          uStack_3f8 = 0;
          plStack_400 = (long *)0x0;
          _objc_retain(ppuVar9);
          param_4 = auStack_3d0;
          ppuVar2 = ppuVar9;
          func_0x00010bf52a60();
          if (ppuVar2 != (undefined **)0x0) {
            lVar3 = *plStack_400;
            do {
              ppuVar8 = (undefined **)0x0;
              do {
                if (*plStack_400 != lVar3) {
                  _objc_enumerationMutation(ppuVar9);
                }
                ppuVar5 = ppuVar9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar5 != (undefined **)0x0) {
                  puVar6 = ppuVar4[5];
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar6 == (undefined *)0x0) {
                    puVar1 = PTR_PTR_1126b7128;
                    func_0x00010bf29480(PTR_PTR_1126b7128);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    _objc_retain(puVar6);
                    puVar1 = puVar6;
                  }
                  _objc_release(puVar6);
                  func_0x00010bdce9e0(ppuVar4[4]);
                  func_0x00010c1d0640(ppuVar4[5]);
                  _objc_release(puVar1);
                }
                _objc_release(ppuVar5);
                ppuVar8 = (undefined **)((long)ppuVar8 + 1);
              } while (ppuVar2 != ppuVar8);
              param_4 = auStack_3d0;
              ppuVar2 = ppuVar9;
              puVar7 = &uStack_410;
              func_0x00010bf52a60();
            } while (ppuVar2 != (undefined **)0x0);
          }
          _objc_release(ppuVar9);
          puVar1 = (undefined *)puVar7;
        }
        _objc_release(ppuVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_350) {
          ___stack_chk_fail();
          _objc_retain(puVar1);
          _objc_retain(param_4);
          puVar6 = puVar1;
          func_0x00010bfb6f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010bfb6f60(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ae620(param_4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010c13a3e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010c13a3e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b72a0(param_4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010c0c6aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010c0c6aa0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b3a80(param_4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010c0fb680();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010c0fb680(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b55e0(param_4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010c2993c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010c2993c0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bc660(param_4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010bf9d7e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010bf9d7e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ad8c0(param_4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar1);
          return;
        }
        return;
      }
      goto code_r0x00010c281f80;
    }
  }
  func_0x00010be5fb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = *(undefined ***)(param_1 + 0x38);
  _objc_retain(ppuVar9);
  param_1 = *(undefined **)(param_1 + 8);
code_r0x00010c281f80:
                    /* WARNING: Could not recover jumptable at 0x00010c281f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unregister__11267e208,ppuVar9);
  return;
}



/* Entry: 1069adff0; end: 1069ae4f7; -[SCCameraDeviceSettingsResolverDecorator _mergedHDSettingsWithHDMap:] */

void FUN_1069adff0(undefined *param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined8 uVar10;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  long lStack_200;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_178 = param_3;
  _objc_retain(param_3);
  ppuVar8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  ppuVar3 = ppuStack_178;
  if ((lVar2 == 1) && (param_1[0x40] == '\x01')) {
    _objc_retain(ppuStack_178);
    ppuStack_180 = ppuVar3;
    ppuVar8 = ppuVar3;
  }
  else {
    unaff_x22 = *(undefined ***)(param_1 + 0x10);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x1069ae318;
    puStack_108 = &UNK_110950240;
    puStack_100 = param_1;
    _objc_retain(ppuVar1);
    ppuStack_f8 = ppuVar1;
    func_0x00010bf97ce0(unaff_x22,param_2,&puStack_120);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    ppuStack_180 = ppuVar3;
    _objc_retain(ppuVar1);
    param_3 = &puStack_160;
    param_4 = auStack_f0;
    ppuVar3 = ppuVar1;
    func_0x00010bf52a60();
    ppuStack_170 = ppuVar3;
    if (ppuVar3 != (undefined **)0x0) {
      lStack_188 = *plStack_150;
      ppuStack_190 = ppuVar1;
      do {
        unaff_x27 = (undefined **)0x0;
        do {
          if (*plStack_150 != lStack_188) {
            _objc_enumerationMutation(ppuVar1);
          }
          unaff_x24 = *(undefined8 *)(lStack_158 + (long)unaff_x27 * 8);
          unaff_x23 = ppuStack_178;
          func_0x00010c0e00e0(ppuStack_178,param_2,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar1;
          func_0x00010c0e00e0(ppuVar1,param_2,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = unaff_x23;
          func_0x00010c13a3e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x26 = (undefined **)0x0;
          if (ppuVar3 != (undefined **)0x0) {
            puVar5 = PTR_PTR_1126b70f8;
            _objc_alloc();
            unaff_x26 = unaff_x23;
            puStack_168 = puVar5;
            func_0x00010c13a3e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x26;
            func_0x00010c0cd7e0();
            ppuVar3 = unaff_x23;
            func_0x00010c13a3e0(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = ppuVar3;
            func_0x00010c0c2340();
            ppuVar8 = unaff_x25;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = ppuVar8;
            func_0x00010c13a3e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = unaff_x22;
            func_0x00010bf0aca0();
            param_1 = puStack_168;
            func_0x00010c02c020(puStack_168,param_2,unaff_x28,ppuVar1,ppuVar4);
            func_0x00010c2b72a0(unaff_x25,param_2,param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(unaff_x22);
            ppuVar1 = ppuStack_190;
            _objc_release(ppuVar8);
            _objc_release(ppuVar3);
            _objc_release(unaff_x26);
          }
          ppuVar8 = unaff_x25;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuStack_180,param_2,ppuVar8,unaff_x24);
          _objc_release(ppuVar8);
          _objc_release(unaff_x25);
          _objc_release(unaff_x23);
          unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        } while (ppuStack_170 != unaff_x27);
        param_3 = &puStack_160;
        param_4 = auStack_f0;
        ppuVar3 = ppuVar1;
        func_0x00010bf52a60();
        ppuStack_170 = ppuVar3;
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    _objc_release(ppuStack_f8);
  }
  _objc_release(ppuVar1);
  ppuVar3 = ppuStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuStack_180);
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_2c0;
  uStack_198 = 0x1069ae318;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1f0 = unaff_x28;
  ppuStack_1e8 = unaff_x27;
  ppuStack_1e0 = unaff_x26;
  ppuStack_1d8 = unaff_x25;
  uStack_1d0 = unaff_x24;
  ppuStack_1c8 = unaff_x23;
  ppuStack_1c0 = unaff_x22;
  puStack_1b8 = param_1;
  ppuStack_1b0 = ppuVar1;
  ppuStack_1a8 = ppuVar8;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar9 = ppuVar3[4];
  puVar5 = puVar9;
  func_0x00010be0e940(puVar9,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010be40e20();
  _objc_release(puVar5);
  if (((ulong)puVar9 & 1) == 0) {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    _objc_retain(param_3);
    param_4 = auStack_280;
    ppuVar1 = param_3;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar2 = *plStack_2b0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_2b0 != lVar2) {
            _objc_enumerationMutation(param_3);
          }
          uVar10 = *(undefined8 *)(lStack_2b8 + (long)ppuVar8 * 8);
          ppuVar4 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar10);
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar4 != (undefined **)0x0) {
            puVar5 = ppuVar3[5];
            func_0x00010c0e00e0(puVar5,param_2,uVar10);
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 == (undefined *)0x0) {
              puVar6 = PTR_PTR_1126b7128;
              func_0x00010bf29480(PTR_PTR_1126b7128);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              _objc_retain(puVar5);
              puVar6 = puVar5;
            }
            _objc_release(puVar5);
            func_0x00010bdce9e0(ppuVar3[4],param_2,ppuVar4,puVar6);
            func_0x00010c1d0640(ppuVar3[5],param_2,puVar6,uVar10);
            _objc_release(puVar6);
          }
          _objc_release(ppuVar4);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar1 != ppuVar8);
        param_4 = auStack_280;
        ppuVar1 = param_3;
        puVar7 = &uStack_2c0;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(param_3);
    puVar6 = (undefined *)puVar7;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(param_4);
  puVar5 = puVar6;
  func_0x00010bfb6f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010bfb6f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ae620(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar6;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c13a3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b72a0(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar6;
  func_0x00010c0c6aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c0c6aa0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3a80(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar6;
  func_0x00010c0fb680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c0fb680(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b55e0(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar6;
  func_0x00010c2993c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c2993c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc660(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar6;
  func_0x00010bf9d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010bf9d7e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad8c0(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1069ae4f8; end: 1069ae703; -[SCCameraDeviceSettingsResolverDecorator _applySettings:toBuilder:] */

void FUN_1069ae4f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfb6f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb6f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ae620(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c13a3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b72a0(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0c6aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0c6aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3a80(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0fb680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0fb680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b55e0(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c2993c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c2993c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc660(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf9d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf9d7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad8c0(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ae704; end: 1069ae78f; -[SCCameraDeviceSettingsResolverDecorator _featureNameForDeviceSettingsMap:] */

void FUN_1069ae704(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar3 = ppuVar2;
  func_0x00010bfa28e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3a38;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1069ae790; end: 1069ae7fb; -[SCCameraDeviceSettingsResolverDecorator _isHdModeFeatureName:] */

undefined8 FUN_1069ae790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9b08;
  _objc_retain(param_3);
  func_0x00010bfe2f20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1069ae7fc; end: 1069ae893; -[SCCameraDeviceSettingsResolverDecorator didUnregisterProviderToken:] */

void FUN_1069ae7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    lVar2 = param_1;
    func_0x00010bdf9b40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010bf7df00(lVar2,param_2,param_3);
    }
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x00010be8bda0(param_1,param_2,param_3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ae894; end: 1069ae907; -[SCCameraDeviceSettingsResolverDecorator didRegisterProviderToken:noFormatFoundError:] */

void FUN_1069ae894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdf9b40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf798a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ae908; end: 1069ae90f; -[SCCameraDeviceSettingsResolverDecorator featureNameForToken:] */

void FUN_1069ae908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa28f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_featureName_1125c63e0);
  return;
}



/* Entry: 1069ae910; end: 1069ae92b; -[SCCameraDeviceSettingsResolverDecorator _setDelegate:forToken:] */

void FUN_1069ae910(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKey__112651b80);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 1069ae92c; end: 1069ae967; -[SCCameraDeviceSettingsResolverDecorator _delegateForToken:] */

void FUN_1069ae92c(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dff20(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069ae968; end: 1069ae983; -[SCCameraDeviceSettingsResolverDecorator _removeDelegateForToken:] */

void FUN_1069ae968(long param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar1 = 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 1069ae984; end: 1069ae9fb; -[SCCameraDeviceSettingsResolverDecorator .cxx_destruct] */

void FUN_1069ae984(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069ae9fc; end: 1069aebdb; +[SCCameraDeviceSettingsResolverFactory resolverForUsageTier:deviceSettingsConfig:bareboneDeviceSettings:cameraRequestHandler:cameraHardwareResource:captureDeviceManager:] */

void FUN_1069ae9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf692e0(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1069aebdc;
  puStack_78 = &UNK_110950120;
  uStack_70 = param_5;
  puStack_68 = puVar2;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010bf97ce0(uVar1,param_2,&puStack_90);
  puVar3 = PTR_PTR_1126cf798;
  _objc_alloc(PTR_PTR_1126cf798);
  uVar4 = param_4;
  func_0x00010bf48180(param_4);
  uVar5 = param_4;
  func_0x00010bf45fc0(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb2c0(puVar3,param_2,param_6,param_7,param_8,uVar4,uVar1,puVar2,uVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126cf7b0;
  _objc_alloc(PTR_PTR_1126cf7b0);
  uVar4 = param_4;
  func_0x00010c083a40(param_4);
  _objc_release(param_4);
  func_0x00010c03f840(puVar6,param_2,puVar3,uVar4);
  _objc_release(puVar3);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1069aebdc; end: 1069aecb3;  */

void FUN_1069aebdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7128;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf294a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c13a3e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b72a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069aecb4; end: 1069aee07; -[SCCameraWarmupResolverFactory initWithCameraRequestManager:cameraHardwareResource:captureDeviceManager:deviceSettingsConfig:systemConfiguration:liveResolverHolder:] */

undefined1 *
FUN_1069aecb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f40e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069aee08; end: 1069aef73; -[SCCameraWarmupResolverFactory makeResolverForUsageTier:target:] */

void FUN_1069aee08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c0b67c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    if (lVar1 != 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1069aef74;
      puStack_40 = &UNK_110950270;
      lStack_38 = lVar1;
      _objc_retain();
      func_0x00010bf11fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf57500();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lStack_38);
      _objc_release(lVar1);
      goto LAB_1069aef3c;
    }
  }
  _objc_initWeak(auStack_60,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_60);
  uStack_68 = param_3;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57500();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
LAB_1069aef3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069aef74; end: 1069aefe3;  */

void FUN_1069aef74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069aefe4; end: 1069af10b; -[SCCameraWarmupResolverFactory _createResolverForUsageTier:] */

void FUN_1069aefe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf29100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf15c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126cf7a8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b1c0(puVar5,param_2,param_3,uVar3,uVar2,uVar4,uVar1,*(undefined8 *)(param_1 + 0x18)
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069af10c; end: 1069af16b; -[SCCameraWarmupResolverFactory .cxx_destruct] */

void FUN_1069af10c(long param_1)

{
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



/* Entry: 1069af16c; end: 1069af1df; -[SCGrapheneWebLensesMetric2 init] */

undefined1 * FUN_1069af16c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f40e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069af1e0; end: 1069af257;  */

void FUN_1069af1e0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109502d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069af258; end: 1069af2cf;  */

void FUN_1069af258(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950320,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069af2d0; end: 1069af443;  */

void FUN_1069af2d0(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110950370,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1069af444;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109503c0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1069af5b8;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950410,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 1069af444; end: 1069af5b7;  */

void FUN_1069af444(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109503c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1069af5b8;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950410,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1069af5b8; end: 1069af62f;  */

void FUN_1069af5b8(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950410,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069af630; end: 1069af7a3;  */

void FUN_1069af630(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110950460,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1069af7a4;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109504b0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1069af7a4; end: 1069af81b;  */

void FUN_1069af7a4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109504b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}


