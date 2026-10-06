/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104de3304; end: 104de3333; -[SCCommerceItemWidgetPaginationProvider setCommerceOrigin:] */

void FUN_104de3304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104de3334; end: 104de333b; -[SCCommerceItemWidgetPaginationProvider configProvider] */

undefined8 FUN_104de3334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104de333c; end: 104de336b; -[SCCommerceItemWidgetPaginationProvider setConfigProvider:] */

void FUN_104de333c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104de336c; end: 104de3377; -[SCCommerceItemWidgetPaginationProvider inProgressItemQueryContext] */

void FUN_104de336c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 104de3378; end: 104de337f; -[SCCommerceItemWidgetPaginationProvider setInProgressItemQueryContext:] */

void FUN_104de3378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104de3380; end: 104de33f7; -[SCCommerceItemWidgetPaginationProvider .cxx_destruct] */

void FUN_104de3380(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104de33f8; end: 104de392f;  */

void FUN_104de33f8(byte *param_1,long param_2,long param_3)

{
  long lVar1;
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
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_104dd7ad4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  FUN_104dd7ad4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  FUN_104de3930();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  FUN_104de3930();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104de3a8c;
  puStack_70 = &UNK_1108507c8;
  _objc_retain(lVar4);
  lVar6 = lVar5;
  lStack_68 = lVar4;
  func_0x00010bd86420(lVar5,&puStack_88);
  _objc_release(lVar5);
  _objc_release(lVar1);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar1 = param_2;
  func_0x00010bfbd260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bfbd260(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c071ae0();
  *param_1 = (byte)lVar7 ^ 1;
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2714e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c2714e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c071ae0();
  param_1[1] = (byte)lVar7 ^ 1;
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf6e580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf6e580(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c071ae0();
  param_1[2] = (byte)lVar7 ^ 1;
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf25820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf25820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c071ae0();
  param_1[3] = (byte)lVar7 ^ 1;
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c2a4e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c0720c0();
  param_1[4] = (byte)lVar11 ^ 1;
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0fbc60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf529e0();
  lVar7 = param_3;
  func_0x00010c0fbc60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf529e0();
  param_1[6] = lVar5 != lVar8;
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c071b60();
  param_1[5] = (byte)lVar1 ^ 1;
  lVar1 = param_3;
  FUN_104de3b34();
  *(long *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2;
  FUN_104de3b34();
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_retain(lVar6);
  *(long *)(param_1 + 0x20) = lVar6;
  lVar1 = param_3;
  FUN_104de3c74();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  FUN_104de3c74(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c071ae0();
  param_1[7] = (byte)lVar7 ^ 1;
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf04920();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf04920();
  _objc_release(lVar1);
  param_1[8] = (byte)lVar5 ^ (byte)lVar7;
  _objc_release(lVar6);
  _objc_release(lStack_68);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104de3930; end: 104de3a8b;  */

void FUN_104de3930(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104de3cec;
  uStack_40 = 0x104de3cfc;
  puStack_38 = PTR____NSArray0__struct_11034ab48;
  lVar1 = param_1;
  func_0x0001006372a4(param_1,&PTR___NSConcreteGlobalBlock_110850848);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c2a4d80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(lVar1);
  _objc_release(lVar2);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104de3a8c; end: 104de3b33;  */

void FUN_104de3a8c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c071ae0();
    if ((uVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    _objc_release(uVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104de3b34; end: 104de3c73;  */

undefined8 FUN_104de3b34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104de3cec;
  uStack_40 = 0x104de3cfc;
  puStack_38 = PTR____NSArray0__struct_11034ab48;
  uVar3 = param_1;
  func_0x00010c2a4e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a4d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = puStack_58[5];
  func_0x00010bf529e0(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 104de3c74; end: 104de3ceb;  */

void FUN_104de3c74(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104de3cec; end: 104de3d03;  */

void FUN_104de3cec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104de3d04; end: 104de3d73;  */

void FUN_104de3d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104de3d74; end: 104de3e57;  */

undefined1 FUN_104de3d74(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010c2a4d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104de3e58; end: 104de3e6b;  */

void FUN_104de3e58(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104de3e6c; end: 104de3f73;  */

void FUN_104de3e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104de3cec;
  uStack_40 = 0x104de3cfc;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c2a4d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104de3f74; end: 104de3fab;  */

void FUN_104de3f74(long param_1,undefined8 param_2)

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



/* Entry: 104de3fac; end: 104de408f;  */

undefined1 FUN_104de3fac(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010c2a4d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104de4090; end: 104de40a3;  */

void FUN_104de4090(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104de40a4; end: 104de43ff; -[SCCommerceProductPageBusinessLogic initWithProductIdentifier:store:delegate:showcaseFetcher:configProvider:isLastInNavStack:grapheneLogger:eventLogger:commerceOrigin:pdpEntrySource:favoritesCoordinator:canLaunchFavorites:toastPresenter:cartCoordinator:tryOnButtonVisible:multiMerchantEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104de40a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126e43e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271339c) = param_3;
    lVar4 = (long)_DAT_1127133a0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127133a4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127133a8,param_5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127133ac) = param_8;
    lVar4 = (long)_DAT_1127133b0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127133b4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127133b8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127133bc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127133c0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127133c4;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127133c8) = 0;
    lVar4 = (long)_DAT_1127133cc;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127133d0) = param_14;
    lVar4 = (long)_DAT_1127133d4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127133d8) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127133dc) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127133e0) = param_18._1_1_;
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar4));
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127133e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127133e4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 104de4400; end: 104de44d7; -[SCCommerceProductPageBusinessLogic loadProduct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de4400(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bde1000();
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127133a4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc91c0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104de44d8; end: 104de4577;  */

void FUN_104de44d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e4e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de4578; end: 104de501b; -[SCCommerceProductPageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de4578(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  if (*(long *)(param_1 + _DAT_1127133e8) == 0) {
    lVar22 = (long)_DAT_1127133ec;
    if (*(long *)(param_1 + lVar22) == 0) {
      func_0x00010be4f240(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar20 = (long)_DAT_1127133e4;
      lVar18 = *(long *)(param_1 + lVar20);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined8 *)(param_1 + _DAT_11271339c));
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar18 != 0) {
        uVar21 = *(undefined8 *)(param_1 + lVar20);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(uVar21);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(lVar18);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c2978e0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar2 = PTR_PTR_1126b08e0;
      _objc_alloc();
      uVar7 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c2711a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar21;
      func_0x00010c112a80(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x000106d785f4();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar21;
      func_0x00010c25ccc0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x000106d785f4();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106d77df0(*(undefined8 *)(param_1 + lVar22));
      uVar9 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010bf20e60(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c0cab00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar10;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053300();
      _objc_release(uVar13);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      lVar18 = (long)_DAT_1127133c0;
      iVar1 = (int)*(undefined8 *)(param_1 + lVar18);
      func_0x00010c235460();
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar21;
        func_0x00010bf125a0(uVar21);
      }
      uVar11 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010bf5d080();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar11;
      FUN_104de2510();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar3 = param_1;
      func_0x00010be42240(param_1);
      uVar12 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c0f6e80(uVar12);
      uVar9 = *(undefined8 *)(param_1 + _DAT_1127133b8);
      uVar13 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c0cab00(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
      FUN_104dd7390(0,puVar3,uVar6,uVar12,uVar9,uVar11,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar13);
      puVar3 = PTR_PTR_1126b08e8;
      _objc_alloc();
      puVar4 = puVar3;
      func_0x000104df374c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010bf6e4e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03a620();
      _objc_release(uVar6);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)(param_1 + _DAT_1127133f0) != 0) {
        func_0x00010befa120(puVar4);
      }
      if (*(long *)(param_1 + _DAT_1127133f4) != 0) {
        func_0x00010befa120(puVar4);
      }
      if (*(long *)(param_1 + _DAT_1127133f8) != 0) {
        func_0x00010befa120(puVar4);
      }
      iVar1 = (int)*(undefined8 *)(param_1 + lVar18);
      func_0x00010bf90380();
      lVar20 = (long)_DAT_1127133fc;
      puVar14 = *(undefined **)(param_1 + lVar20);
      func_0x00010c2a4ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      if (iVar1 == 0) {
        func_0x00010bf51e00();
      }
      else {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        uStack_80 = 0x104de4d78;
        puStack_78 = &UNK_110850958;
        puStack_70 = param_1;
        func_0x000100504554(puVar14,&puStack_90);
      }
      _objc_release(puVar14);
      puVar14 = puVar5;
      func_0x00010bf529e0();
      puVar15 = puVar5;
      if (puVar14 == (undefined *)0x0) {
        iVar1 = (int)*(undefined8 *)(param_1 + lVar20);
        func_0x00010bfd9400();
        if (iVar1 != 0) {
          puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          lVar19 = 3;
          do {
            puVar15 = PTR_PTR_1126b02c0;
            _objc_alloc_init(PTR_PTR_1126b02c0);
            func_0x00010befa120(puVar14);
            _objc_release(puVar15);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar14);
        }
      }
      puVar14 = PTR_PTR_1126b08f0;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c084e60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_1;
      func_0x00010be9d020(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b08f8;
      func_0x00010bfd9400(*(undefined8 *)(param_1 + lVar20));
      func_0x00010c115fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053ca0();
      _objc_release(puVar5);
      _objc_release(puVar16);
      _objc_release(uVar6);
      func_0x00010befa120(puVar4);
      uVar11 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010bfe9920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      func_0x00010c0f6dc0(*(undefined8 *)(param_1 + lVar18));
      iVar1 = (int)*(undefined8 *)(param_1 + lVar18);
      func_0x00010c0f6de0();
      uVar11 = uVar6;
      if (iVar1 != 0) {
        uVar11 = *(undefined8 *)(param_1 + lVar22);
        func_0x00010bfe9920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        func_0x00010c0f6e40(*(undefined8 *)(param_1 + lVar18));
      }
      if (param_1[_DAT_1127133dc] == '\x01') {
        func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_112713400));
      }
      puVar5 = PTR_PTR_1126b0900;
      _objc_alloc(PTR_PTR_1126b0900);
      func_0x00010c01d040();
      puVar16 = PTR_PTR_1126b0908;
      _objc_alloc();
      puVar17 = param_1;
      func_0x00010be42240();
      func_0x000104df3734();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd1b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a0c0(puVar16);
      _objc_release(param_1);
      _objc_release(puVar17);
      _objc_release(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(puVar2);
      _objc_release(uVar21);
      param_1 = puVar16;
    }
  }
  else {
    func_0x00010be0b220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104de501c; end: 104de5273; -[SCCommerceProductPageBusinessLogic handleAction:] */

void FUN_104de501c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
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
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
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
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104de5274;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104de527c;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104de5284;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104de528c;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104de52d0;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104de52d8;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x104de52e0;
  puStack_120 = &UNK_110850988;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x104de52f0;
  puStack_148 = &UNK_110842e18;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_104de52f8;
  puStack_170 = &UNK_110841f20;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_104de5364;
  puStack_198 = &UNK_1108509b8;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x104de53b8;
  puStack_1c0 = &UNK_1108509e8;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_104de53f4;
  puStack_1e8 = &UNK_110842e18;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x104de53fc;
  puStack_210 = &UNK_1108450c8;
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_104de5408;
  puStack_238 = &UNK_1108450c8;
  puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_104de5468;
  puStack_260 = &UNK_110850a18;
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_104de5474;
  puStack_288 = &UNK_110842e18;
  puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_104de54b8;
  puStack_2b0 = &UNK_110850a48;
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  uStack_2e0 = 0x104de54c4;
  puStack_2d8 = &UNK_1108450c8;
  uStack_2d0 = param_1;
  uStack_2a8 = param_1;
  uStack_280 = param_1;
  uStack_258 = param_1;
  uStack_230 = param_1;
  uStack_208 = param_1;
  uStack_1e0 = param_1;
  uStack_1b8 = param_1;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bca20(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,
                      &puStack_200,&puStack_228,&puStack_250,&puStack_278,&puStack_2a0,&puStack_2c8,
                      &puStack_2f0);
  return;
}



/* Entry: 104de5274; end: 104de528b;  */

void FUN_104de5274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__backButtonTapped_1125521c0);
  return;
}



/* Entry: 104de528c; end: 104de52cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de528c(long param_1,undefined8 param_2)

{
  func_0x00010c0a1d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127133b4),param_2,2,
                      0xffffffffffffffff,0x29,0);
                    /* WARNING: Could not recover jumptable at 0x00010bddbdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cartButtonTapped_112554908);
  return;
}



/* Entry: 104de52d0; end: 104de52f7;  */

void FUN_104de52d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb1ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__shareButtonTapped_11258a058);
  return;
}



/* Entry: 104de52f8; end: 104de5363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de52f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010beccc20(lVar2,param_2,*(undefined8 *)(lVar2 + _DAT_11271339c),
                      *(undefined8 *)(lVar2 + _DAT_112713410));
  uVar1 = 0x26;
  if ((int)param_2 != 0) {
    uVar1 = 0x27;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127133b4),
             PTR_s_logButtonTap_currentCard_current_112606160,uVar1,0xffffffffffffffff,0x29,0);
  return;
}



/* Entry: 104de5364; end: 104de53f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5364(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010beccc20(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar1 = 0x26;
  if (param_3 != 0) {
    uVar1 = 0x27;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127133b4),
             PTR_s_logButtonTap_currentCard_current_112606160,uVar1,0xffffffffffffffff,0x29,0);
  return;
}



/* Entry: 104de53f4; end: 104de5407;  */

void FUN_104de53f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8a950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reloadFavoriteStateForProductsI_1125803f0);
  return;
}



/* Entry: 104de5408; end: 104de5467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127133b4);
  _objc_retain(param_2);
  func_0x00010c0a37c0(uVar1);
  func_0x00010bee7f40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104de5468; end: 104de5473;  */

void FUN_104de5468(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__variantSelected__112597970,param_2);
  return;
}



/* Entry: 104de5474; end: 104de54b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5474(long param_1)

{
  func_0x00010bdcf100(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0a1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127133b4),
             PTR_s_logButtonTap_currentCard_current_112606160,0x2a,0xffffffffffffffff,0x29,0);
  return;
}



/* Entry: 104de54b8; end: 104de54cf;  */

void FUN_104de54b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sizeRecommendationRecieved__11258caf8,param_2);
  return;
}



/* Entry: 104de54d0; end: 104de5577; -[SCCommerceProductPageBusinessLogic _sizeRecommendationRecieved:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de54d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713414);
  *(undefined8 *)(param_1 + _DAT_112713414) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c115e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(*(undefined8 *)(param_1 + _DAT_1127133b4),param_2,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de5578; end: 104de56ef; -[SCCommerceProductPageBusinessLogic _availableModules:favoriteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5578(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_3 != 0) {
    uVar2 = 0x2a;
    func_0x00010baf05c0(0x2a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = 0x26;
  if ((param_4 - 2U & 0xfffffffffffffffd) == 0) {
    uVar2 = 0x27;
  }
  func_0x00010baf05c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = 0x28;
  func_0x00010baf05c0(0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (*(long *)(param_1 + _DAT_1127133f0) != 0) {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117e460;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_11117e460);
    lVar4 = *(long *)(param_1 + _DAT_112713414);
    if (lVar4 != 0) {
      func_0x00010c23d0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar3,param_2,lVar4);
      _objc_release(lVar4);
    }
    ppuVar5 = ppuVar3;
    func_0x00010bf446e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,ppuVar5);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  puVar6 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104de56f0; end: 104de576b; -[SCCommerceProductPageBusinessLogic _arTryOnButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de56f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + _DAT_1127133a8;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112713400);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127133ec);
  func_0x00010c115e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  func_0x00010c0e9b00(lVar1,param_2,uVar4,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104de576c; end: 104de57f7; -[SCCommerceProductPageBusinessLogic _reportButtonTappedWithCategoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de576c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_1127133a8;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271339c);
  func_0x00010bec4020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1327c0(lVar1,param_2,uVar2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104de57f8; end: 104de595b; -[SCCommerceProductPageBusinessLogic _variantSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de57f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271340c);
  *(undefined8 *)(param_1 + _DAT_11271340c) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_1127133b4;
  func_0x00010c0a37a0(*(undefined8 *)(param_1 + lVar3),param_2,0x29,0);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_1127133d8) = 0;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    lVar3 = param_3;
    func_0x00010c0ec580(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0ec540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3780(uVar1,param_2,0x29,lVar3,lVar2,0);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0ec540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112713418);
    lVar2 = param_3;
    func_0x00010c0ec580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,lVar3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
    func_0x00010be4eda0(param_1,param_2,param_3);
    func_0x00010bee3260(param_1,param_2,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de595c; end: 104de5b33; -[SCCommerceProductPageBusinessLogic _loadVariantProductInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de595c(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **unaff_x23;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfe5e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b0840;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_initWeak(auStack_58,param_1);
      uVar7 = *(undefined8 *)(param_1 + _DAT_1127133a4);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_104de5b34;
      puStack_68 = &UNK_110850a78;
      param_2 = auStack_58;
      _objc_copyWeak(auStack_60,param_2);
      param_4 = 1;
      func_0x00010bfc3840(uVar7);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar4);
      unaff_x23 = &puStack_80;
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  puVar5 = param_2;
  func_0x00010c1163e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = puVar5;
  func_0x00010bfb1920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4e4e0(param_3);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de5b34; end: 104de5bdf;  */

void FUN_104de5b34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c1163e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4e4e0(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de5be0; end: 104de5d73; -[SCCommerceProductPageBusinessLogic _updateVariantWidgetViewModelWithLoading:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5be0(long param_1,undefined1 *param_2,undefined1 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    puVar2 = *(undefined **)(param_1 + _DAT_11271341c);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104de5d74;
    puStack_68 = &UNK_110850aa8;
    lStack_60 = param_1;
    uStack_58 = param_3;
    func_0x000100504554(puVar2,&puStack_80);
  }
  else {
    puVar1 = PTR_PTR_1126b0910;
    func_0x00010bf99180();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    ppuVar5 = (undefined **)param_2;
  }
  puVar1 = PTR_PTR_1126b08f8;
  func_0x00010c2977e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b08f0;
  _objc_alloc();
  func_0x00010c053ca0();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127133f8);
  *(undefined **)(param_1 + _DAT_1127133f8) = puVar3;
  _objc_release(uVar6);
  lVar4 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_release(lVar4);
  if (*(char *)(param_1 + _DAT_1127133d8) == '\x01') {
    func_0x00010bdc8ac0(param_1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar1 = PTR_PTR_1126b0910;
  if ((puVar2[0x28] & 1) == 0) {
    uVar6 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + (long)_DAT_112713418);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29db60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  else {
    func_0x00010c09d520(PTR_PTR_1126b0910);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104de5d74; end: 104de5e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5d74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b0910;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713418);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29db60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010c09d520(PTR_PTR_1126b0910);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104de5e20; end: 104de5e83; -[SCCommerceProductPageBusinessLogic _clearStateAndEmitLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5e20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127133ec);
  *(undefined8 *)(param_1 + _DAT_1127133ec) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127133e8);
  *(undefined8 *)(param_1 + _DAT_1127133e8) = 0;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de5e84; end: 104de5fcf; -[SCCommerceProductPageBusinessLogic _errorViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5e84(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126b0908;
  _objc_alloc();
  bVar1 = *(byte *)(param_1 + _DAT_1127133ac) ^ 1;
  lVar5 = (long)_DAT_1127133e8;
  if (*(long *)(param_1 + lVar5) == 0) {
    func_0x00010c01a0c0(puVar2,param_2,0,bVar1 & 1,0,0,0,0,0,0,0,0,0,0,0);
  }
  else {
    puVar3 = puVar2;
    func_0x000104df377c();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + lVar5) == 0) {
      func_0x00010c01a0c0(puVar2,param_2,0,bVar1 & 1,0,0,0,0,0,0,0,puVar3,0,0,0);
    }
    else {
      puVar4 = puVar3;
      func_0x000104df3764();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a0c0(puVar2,param_2,0,bVar1 & 1,0,0,0,0,0,0,0,puVar3,puVar4,0,0);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104de5fd0; end: 104de603b; -[SCCommerceProductPageBusinessLogic _loadingViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de5fd0(void)

{
  _objc_alloc(PTR_PTR_1126b0908);
  func_0x00010c01a0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104de603c; end: 104de606f; -[SCCommerceProductPageBusinessLogic _userDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de603c(long param_1)

{
  param_1 = param_1 + _DAT_1127133a8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c116100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de6070; end: 104de60a3; -[SCCommerceProductPageBusinessLogic _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de6070(long param_1)

{
  param_1 = param_1 + _DAT_1127133a8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1160e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de60a4; end: 104de63c3; -[SCCommerceProductPageBusinessLogic _actionButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de60a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + _DAT_1127133e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadProduct_1126049e8);
    return;
  }
  lVar2 = param_1;
  func_0x00010be42240();
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addToCart_11254fc50);
    return;
  }
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104de63c4;
  uStack_60 = 0x104de63d4;
  lVar5 = (long)_DAT_1127133ec;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf5d080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_104de2204();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar3;
  _objc_release(uVar1);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_104de63c4;
  uStack_90 = 0x104de63d4;
  uStack_88 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf5d080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_104de23d8();
  _objc_release(uVar1);
  uStack_b8 = uVar3;
  func_0x00010c0a2aa0(*(undefined8 *)(param_1 + _DAT_1127133b0));
  func_0x00010c0a1d40(*(undefined8 *)(param_1 + _DAT_1127133b4));
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010beee880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010beee880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0beea0();
    _objc_release(uVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar2 = *(long *)(param_1 + _DAT_112713414);
  if (lVar2 != 0) {
    func_0x00010c297840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_78[5];
    puStack_78[5] = puVar4;
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  param_1 = param_1 + _DAT_1127133a8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10ef40();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 104de63c4; end: 104de63db;  */

void FUN_104de63c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104de63dc; end: 104de64f7;  */

void FUN_104de63dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (*(long *)(lVar2 + 0x28) == 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0x29;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104de64f8; end: 104de65af; -[SCCommerceProductPageBusinessLogic _cartButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de64f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127133a8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf32e60();
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_1127133d8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_1127133d8) = 0;
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0abc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127133b4),
               PTR_s_logPageOpen_sourcePage_metricsDa_112608918,0x27,0x29,0,0,0);
    return;
  }
  return;
}



/* Entry: 104de65b0; end: 104de67ef; -[SCCommerceProductPageBusinessLogic _addToCart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de65b0(undefined **param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [136];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)((long)param_1 + (long)_DAT_1127133d8) = 1;
  ppuVar5 = (undefined **)(long)_DAT_11271341c;
  lVar1 = *(long *)((long)param_1 + (long)ppuVar5);
  func_0x00010bf529e0();
  lVar6 = (long)_DAT_112713418;
  lVar2 = *(long *)((long)param_1 + lVar6);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    func_0x00010c0a1d40(*(undefined8 *)((long)param_1 + (long)_DAT_1127133b4));
    ppuVar3 = param_1;
    func_0x00010be82be0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 != (undefined **)0x0) {
      _objc_initWeak(auStack_f0,param_1);
      uVar4 = *(undefined8 *)((long)param_1 + (long)_DAT_1127133d4);
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_104de67f0;
      puStack_100 = &UNK_110849200;
      ppuVar5 = &puStack_118;
      _objc_copyWeak(auStack_f8,auStack_f0);
      func_0x00010bef98a0(uVar4);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
    }
  }
  else {
    ppuVar3 = *(undefined ***)((long)param_1 + (long)ppuVar5);
    _objc_retain(ppuVar3);
    ppuVar5 = ppuVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar5 != (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar3);
        }
        lVar2 = *(long *)((long)param_1 + lVar6);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == 0) {
          func_0x00010bee7f40(param_1);
          goto LAB_104de6788;
        }
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar5 != ppuVar7);
      ppuVar5 = ppuVar3;
      func_0x00010bf52a60();
    }
  }
LAB_104de6788:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 4);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume(ppuVar3);
  ppuVar3 = ppuVar3 + 4;
  _objc_loadWeakRetained(ppuVar3);
  func_0x00010bddbda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 104de67f0; end: 104de681b;  */

void FUN_104de67f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddbda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de681c; end: 104de6ad3; -[SCCommerceProductPageBusinessLogic _shareButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de681c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = (long)_DAT_1127133ec;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010c0cab00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    return;
  }
  puVar3 = *(undefined **)(param_1 + lVar15);
  func_0x00010c2978e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    lVar14 = *(long *)(param_1 + _DAT_112713410);
    _objc_release(puVar3);
    _objc_release(lVar2);
    if (lVar14 == 0) {
      return;
    }
    lVar14 = *(long *)(param_1 + lVar15);
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar3 = PTR_PTR_1126b0918;
    _objc_alloc(PTR_PTR_1126b0918);
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010bec4020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c278ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2711a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x000106d785f4();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c25ccc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x000106d785f4();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = (undefined1)*(undefined8 *)(param_1 + lVar15);
    func_0x000106d77df0();
    uVar12 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c0cab00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6dc0();
    func_0x00010c03a780(puVar3,param_2,uVar5,lVar14,uVar6,uVar7,lVar9,lVar11,uVar1);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar14);
    _objc_release(uVar5);
    lVar15 = param_1 + _DAT_1127133a8;
    _objc_loadWeakRetained(lVar15);
    func_0x00010c22c5e0();
    _objc_release(lVar15);
    func_0x00010c0abbe0(*(undefined8 *)(param_1 + _DAT_1127133b0),param_2,
                        &PTR____CFConstantStringClassReference_110db3e38,
                        &PTR____CFConstantStringClassReference_110db3e78,0);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104de6ad4; end: 104de6b2b; -[SCCommerceProductPageBusinessLogic _shopOnStoreTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de6ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127133a8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22cb60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de6b2c; end: 104de6c97; -[SCCommerceProductPageBusinessLogic _variantSelectorTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de6b2c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010be8a8e0(param_1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11271340c;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar3 = puVar2;
    func_0x00010bf00d20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112713420);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_104dd7684();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de6c98; end: 104de6cf7; -[SCCommerceProductPageBusinessLogic _reloadExistingVariantWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de6c98(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104de6cf8;
  puStack_20 = &UNK_110850b68;
  lStack_18 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_112713428),param_2,&puStack_38);
  return;
}



/* Entry: 104de6cf8; end: 104de6dfb;  */

void FUN_104de6cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x00010c2a4ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be7c0();
  _objc_release(uVar1);
  if (*(char *)(puStack_58 + 3) == '\x01') {
    *param_4 = 1;
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  return;
}



/* Entry: 104de6dfc; end: 104de6e37;  */

void FUN_104de6dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be4edc0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,param_3);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104de6e38; end: 104de6ec3; -[SCCommerceProductPageBusinessLogic _relatedProductsTapped:storeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de6e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127133a8;
  _objc_retain(param_4);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10de40();
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0abbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127133b0),
             PTR_s_logPageImpressionWithSourcePage__112608908,
             &PTR____CFConstantStringClassReference_110db3e38,
             &PTR____CFConstantStringClassReference_110db3e58,0);
  return;
}



/* Entry: 104de6ec4; end: 104de6fff; -[SCCommerceProductPageBusinessLogic _toggleFavoriteWithId:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de6ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beccde0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127133c4);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  func_0x00010c2728a0(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 104de7000; end: 104de704f;  */

void FUN_104de7000(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be321e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de7050; end: 104de70eb; -[SCCommerceProductPageBusinessLogic _updateFavoriteStateWithProductId:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de7050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_1127133e4),param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de70ec; end: 104de7367; -[SCCommerceProductPageBusinessLogic _handleToggleCompleteWithSucessWithProductId:wasFavorited:success:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de70ec(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_6);
  if ((param_5 & 1) == 0) {
    func_0x00010c237a80(*(undefined8 *)(param_1 + _DAT_1127133cc));
    goto LAB_104de7320;
  }
  _objc_initWeak(auStack_48,param_1);
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7da0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(char *)(param_1 + _DAT_1127133d0) == '\x01') {
      lVar3 = *(long *)(param_1 + _DAT_1127133c4);
      func_0x00010bfa6a80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)(param_1 + _DAT_1127133cc);
        puVar5 = auStack_78;
        _objc_copyWeak(puVar5,auStack_48);
        func_0x00010c2377c0(uVar6);
        goto LAB_104de72e8;
      }
    }
    func_0x00010c237780(*(undefined8 *)(param_1 + _DAT_1127133cc));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7da0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127133cc);
    if (*(char *)(param_1 + _DAT_1127133d0) == '\x01') {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_104de7368;
      puStack_58 = &UNK_1108434b0;
      puVar5 = auStack_50;
      _objc_copyWeak(puVar5,auStack_48);
      func_0x00010c237720(uVar6);
LAB_104de72e8:
      _objc_destroyWeak(puVar5);
    }
    else {
      func_0x00010c237700(uVar6);
    }
  }
  _objc_destroyWeak(auStack_48);
LAB_104de7320:
  _objc_release(param_6);
  return;
}



/* Entry: 104de7368; end: 104de73ef;  */

void FUN_104de7368(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cce0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de73f0; end: 104de74bb; -[SCCommerceProductPageBusinessLogic _sectionTitleForWidget:] */

void FUN_104de73f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfa0580(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2a4fc0();
  _objc_release(param_3);
  if (lVar2 < 3) {
    if (lVar2 == 1) {
      func_0x000104df37f4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar2 != 2) goto LAB_104de74a8;
      func_0x000104df380c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar2 == 3) {
    func_0x000104df3794();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar2 != 4) goto LAB_104de74a8;
    func_0x000104df37ac();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
LAB_104de74a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104de74bc; end: 104de7693; -[SCCommerceProductPageBusinessLogic _loadProductWithProductInfo:widgetsInfo:pageTitle:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de74bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = (long)_DAT_1127133e8;
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_6;
  _objc_release(uVar1);
  if (param_6 == 0) {
    if (param_3 == 0) goto LAB_104de765c;
    if (param_5 == 0) {
      lVar3 = (long)_DAT_112713404;
      lVar2 = *(long *)(param_1 + lVar3);
    }
    else {
      lVar2 = param_3;
      func_0x00010c078780();
      *(char *)(param_1 + _DAT_11271342c) = (char)lVar2;
      lVar3 = (long)_DAT_112713404;
      lVar2 = param_5;
    }
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_1127133ec;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c278ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219300(*(undefined8 *)(param_1 + _DAT_1127133b4),param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf5d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be720();
    _objc_release(lVar2);
    func_0x00010be4e4c0(param_1,param_2,param_4);
    func_0x00010be88420(param_1);
  }
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
LAB_104de765c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de7694; end: 104de7717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de7694(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = (long)_DAT_1127133a0;
  lVar3 = param_2;
  if (lVar1 == 0) {
    lVar3 = *(long *)(lVar4 + lVar5);
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + lVar5);
  *(long *)(lVar4 + lVar5) = lVar3;
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104de7718; end: 104de77db; -[SCCommerceProductPageBusinessLogic _reloadFavoriteStateForProductsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de7718(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127133c0);
  func_0x00010bf90380();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127133c4);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bfa6aa0(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104de77dc; end: 104de782b;  */

void FUN_104de77dc(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed7d80();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104de782c; end: 104de7983; -[SCCommerceProductPageBusinessLogic _updateFavoriteItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de782c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100817178(param_3,&PTR___NSConcreteGlobalBlock_110850c48);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127133e4);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104de79e0;
  puStack_68 = &UNK_110848218;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  _objc_copyWeak(auStack_50,auStack_48);
  (**(code **)(param_1 + 0x10))(param_1,&puStack_80);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104de7984; end: 104de79df;  */

void FUN_104de7984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c115e60(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104de79e0; end: 104de7bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de79e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  long lVar7;
  long lVar8;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar4 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_190;
    do {
      lVar8 = 0;
      do {
        if (*plStack_190 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x22 = *(undefined8 *)(lStack_198 + lVar8 * 8);
        uVar2 = *(ulong *)(param_1 + 0x28);
        func_0x00010bf4b900();
        if ((uVar2 & 1) == 0) {
          lVar3 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar3);
          func_0x00010bed7da0();
          _objc_release(lVar3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_1d0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1d0 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x22 = *(undefined8 *)(lStack_1d8 + lVar8 * 8);
        lVar3 = param_1 + 0x30;
        _objc_loadWeakRetained(lVar3);
        func_0x00010bed7da0();
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      puVar4 = &uStack_1e0;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_104de7bb8;
  uStack_210 = unaff_x22;
  uStack_208 = unaff_x21;
  lStack_200 = lVar5;
  lStack_1f8 = param_1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  lVar7 = (long)_DAT_1127133e4;
  lVar5 = *(long *)(lVar1 + lVar7);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
LAB_104de7c48:
    uVar6 = 4;
  }
  else {
    lVar7 = *(long *)(lVar1 + lVar7);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c067fc0();
    _objc_release(lVar7);
    if (1 < lVar5 - 1U) goto LAB_104de7ce8;
    if (lVar5 != 2) goto LAB_104de7c48;
    uVar6 = 3;
  }
  _objc_initWeak(auStack_218,lVar1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_104de7d28;
  puStack_238 = &UNK_110842a68;
  _objc_copyWeak(auStack_228,auStack_218);
  _objc_retain(puVar4);
  puStack_230 = (undefined1 *)puVar4;
  uStack_220 = uVar6;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_250);
  _objc_release(lVar1);
  _objc_release(puStack_230);
  _objc_destroyWeak(auStack_228);
  _objc_destroyWeak(auStack_218);
LAB_104de7ce8:
  _objc_release(puVar4);
  return;
}



/* Entry: 104de7bb8; end: 104de7d27; -[SCCommerceProductPageBusinessLogic _togglePendingFavoriteStateWithProductId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de7bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127133e4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
LAB_104de7c48:
    uVar2 = 4;
  }
  else {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    if (1 < lVar1 - 1U) goto LAB_104de7ce8;
    if (lVar1 != 2) goto LAB_104de7c48;
    uVar2 = 3;
  }
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104de7d28;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = uVar2;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_70);
  _objc_release(param_1);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
LAB_104de7ce8:
  _objc_release(param_3);
  return;
}



/* Entry: 104de7d28; end: 104de7d5f;  */

void FUN_104de7d28(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de7d60; end: 104de7df7; -[SCCommerceProductPageBusinessLogic _refreshCartItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de7d60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bec4020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127133d4);
    func_0x00010bfc3800(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0deea0();
    *(undefined8 *)(param_1 + _DAT_112713408) = uVar3;
    _objc_release(uVar2);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104de7df8; end: 104de7e23; -[SCCommerceProductPageBusinessLogic _isNativeCheckoutEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104de7df8(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_11271342c) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127133c0);
                    /* WARNING: Could not recover jumptable at 0x00010c235470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_shouldUseNativeCheckout_11266af40);
    return uVar1;
  }
  return 0;
}



/* Entry: 104de7e24; end: 104de803f; -[SCCommerceProductPageBusinessLogic _loadProductPageWidgets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de7e24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    lVar4 = (long)_DAT_112713428;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lVar5 * 8);
        func_0x00010c2a4ee0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0be7c0();
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be4db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__loadItemRecommendationWidget__112571070,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 104de8040; end: 104de8083;  */

void FUN_104de8040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadItemRecommendationWidget__112571070,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104de8084; end: 104de8117; -[SCCommerceProductPageBusinessLogic _loadItemRecommendationWidget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0920;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0466e0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127133fc);
  *(undefined **)(param_1 + _DAT_1127133fc) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be4e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextLastWidgetPage_112571218);
  return;
}



/* Entry: 104de8118; end: 104de81ff; -[SCCommerceProductPageBusinessLogic _loadShopOnStoreWidget:storeName:storeIconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0928;
  puVar2 = PTR_PTR_1126b08f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04cca0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c2579a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b08f0;
  _objc_alloc();
  func_0x00010c053ca0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127133f4);
  *(undefined **)(param_1 + _DAT_1127133f4) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104de8200; end: 104de835b; -[SCCommerceProductPageBusinessLogic _loadVariantWidget:variantDimensionNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8200(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar2 = param_1, func_0x00010be42240(), (int)lVar2 != 0)) {
    lVar2 = (long)_DAT_11271341c;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
    func_0x00010bee3260(param_1);
    *(undefined1 *)(param_1 + _DAT_1127133d8) = 1;
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127133a4);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfc6920(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104de835c; end: 104de845b;  */

void FUN_104de835c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104de845c;
  puStack_68 = &UNK_110850cf8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104de845c; end: 104de8493;  */

void FUN_104de845c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ede0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de8494; end: 104de850b; -[SCCommerceProductPageBusinessLogic _loadArTryOnWidget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8494(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_112713400;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de850c; end: 104de8573; -[SCCommerceProductPageBusinessLogic _loadFitFinderWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de850c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b08f8;
  func_0x00010bfb20a0(PTR_PTR_1126b08f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08f0;
  _objc_alloc();
  func_0x00010c053ca0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127133f0);
  *(undefined **)(param_1 + _DAT_1127133f0) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104de8574; end: 104de867f; -[SCCommerceProductPageBusinessLogic _loadVariantWidgetHelper:itemVariants:error:] */

void FUN_104de8574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104de8680;
  puStack_60 = &UNK_110850cf8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104de8680; end: 104de86b7;  */

void FUN_104de8680(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ed80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de86b8; end: 104de87a3; -[SCCommerceProductPageBusinessLogic _loadVariantOnMainThreadWidgetHelper:itemVariants:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de86b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    lVar3 = (long)_DAT_112713420;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    lVar3 = (long)_DAT_112713424;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271341c);
    func_0x00010bf529e0(uVar1);
    func_0x00010bffc4a0(puVar2,param_2,uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112713418);
    *(undefined **)(param_1 + _DAT_112713418) = puVar2;
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + _DAT_1127133d8) = 0;
  func_0x00010bee3260(param_1,param_2,0,param_5 != 0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de87a4; end: 104de8853; -[SCCommerceProductPageBusinessLogic _loadNextLastWidgetPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de87a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127133fc);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c09bd20(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104de8854; end: 104de88e3;  */

void FUN_104de8854(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8a940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104de88e4; end: 104de89b3; -[SCCommerceProductPageBusinessLogic _storeIdFromWidgets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de88e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104de63c4;
  uStack_30 = 0x104de63d4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104de89b4;
  puStack_60 = &UNK_110850d58;
  puStack_48 = puStack_58;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_112713428),param_2,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104de89b4; end: 104de8aa7;  */

void FUN_104de89b4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2a4ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104de8aa8; end: 104de8c67; -[SCCommerceProductPageBusinessLogic _productLineItemFromInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8aa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_f8 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104de63c4;
  uStack_60 = 0x104de63d4;
  uStack_58 = 0;
  puStack_f0 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_104de63c4;
  uStack_90 = 0x104de63d4;
  uStack_88 = 0;
  puStack_e8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_104de63c4;
  uStack_c0 = 0x104de63d4;
  uStack_b8 = 0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_104de8c68;
  puStack_100 = &UNK_110850db8;
  puStack_d8 = puStack_e8;
  puStack_a8 = puStack_f0;
  puStack_78 = puStack_f8;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_112713428),param_2,&puStack_118);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127133ec);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127133a0);
  uVar4 = puStack_78[5];
  uVar5 = puStack_a8[5];
  uVar6 = puStack_d8[5];
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713418);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104dd7c68(uVar2,uVar3,uVar4,uVar5,uVar6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104de8c68; end: 104de8d03;  */

void FUN_104de8c68(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2a4ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104de8d04; end: 104de8dd3;  */

void FUN_104de8d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  **(undefined1 **)(param_1 + 0x38) = 1;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104de8dd4; end: 104de8f03; -[SCCommerceProductPageBusinessLogic didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104de8dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104de8f04;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_70);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104de8f04; end: 104de8f2f;  */

void FUN_104de8f04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de8f30; end: 104de8f4f; -[SCCommerceProductPageBusinessLogic delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8f30(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127133a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


