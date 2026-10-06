/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c7d848; end: 105c7d8bb; -[SCUserPropertiesSyncJob initWithSyncService:] */

undefined1 * FUN_105c7d848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eca80;
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



/* Entry: 105c7d8bc; end: 105c7d8eb; -[SCUserPropertiesSyncJob dataSyncerIdentifier] */

void FUN_105c7d8bc(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e26158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e26158);
  return;
}



/* Entry: 105c7d8ec; end: 105c7d9d3; -[SCUserPropertiesSyncJob onSync:] */

void FUN_105c7d8ec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd120();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c265b60(uVar3);
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c7d9d4; end: 105c7d9ef;  */

void FUN_105c7d9d4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000105c7d9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,0);
  return;
}



/* Entry: 105c7d9f0; end: 105c7d9f7; -[SCUserPropertiesSyncJob submitOnRegister] */

undefined8 FUN_105c7d9f0(void)

{
  return 1;
}



/* Entry: 105c7d9f8; end: 105c7d9fb; -[SCUserPropertiesSyncJob jobConfig] */

void FUN_105c7d9f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar3 = PTR_PTR_1126b7238;
  _objc_opt_new();
  puVar4 = puVar3;
  func_0x00010c124680();
  iVar1 = (int)puVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213d80();
  _objc_release();
  func_0x00010b88a530();
  if (iVar1 != 0) {
    func_0x00010c1eeea0(puVar3,param_2,1);
  }
  func_0x00010c1b67e0(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010c168b40(puVar4,param_2,1);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar2,param_2,puVar4);
  func_0x00010c198180(puVar2,param_2,0);
  func_0x00010c1b6840(puVar2,param_2,&PTR____CFConstantStringClassReference_110e26158);
  func_0x00010c1b6780(puVar2,param_2,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c7d9fc; end: 105c7da07; -[SCUserPropertiesSyncJob .cxx_destruct] */

void FUN_105c7d9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c7da08; end: 105c7db1b;  */

void FUN_105c7da08(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar3 = PTR_PTR_1126b7238;
  _objc_opt_new();
  puVar4 = puVar3;
  func_0x00010c124680();
  iVar1 = (int)puVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213d80();
  _objc_release();
  func_0x00010b88a530();
  if (iVar1 != 0) {
    func_0x00010c1eeea0(puVar3,param_2,1);
  }
  func_0x00010c1b67e0(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010c168b40(puVar4,param_2,1);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar2,param_2,puVar4);
  func_0x00010c198180(puVar2,param_2,0);
  func_0x00010c1b6840(puVar2,param_2,&PTR____CFConstantStringClassReference_110e26158);
  func_0x00010c1b6780(puVar2,param_2,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c7db1c; end: 105c7db47; -[SCUserPropertiesDeltaSyncProcessor type] */

void FUN_105c7db1c(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c7db48; end: 105c7dd53; -[SCUserPropertiesDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_105c7db48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long in_x4;
  long in_x5;
  undefined8 in_x6;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  lVar1 = in_x4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(in_x4);
      }
      lVar10 = *(long *)(lVar9 * 8);
      lVar2 = lVar10;
      func_0x00010c084700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0f5860();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) {
        lVar2 = lVar10;
        FUN_105c7ab5c(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar10;
        FUN_105c7afec(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        FUN_105c7ac8c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0896c0(lVar10);
        func_0x00010be81580(param_1);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = in_x4;
    func_0x00010bf52a60();
  }
  lVar1 = in_x5;
  func_0x000100504554(in_x5,&PTR___NSConcreteGlobalBlock_1108e2688);
  lVar6 = lVar1;
  uVar7 = in_x6;
  func_0x00010be80ce0(param_1);
  _objc_release(lVar1);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  _objc_retain(uVar7);
  lVar1 = lVar6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(in_x4 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar6);
    func_0x00010bf6c140(uVar5);
    _objc_release(uVar5);
    _objc_release(lVar6);
  }
  _objc_release(uVar7);
  _objc_release(lVar6);
  return;
}



/* Entry: 105c7dd54; end: 105c7de27; -[SCUserPropertiesDeltaSyncProcessor _processDeleteOfItemKeys:transactionContext:] */

void FUN_105c7dd54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c7de28;
    puStack_40 = &UNK_110841f20;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bf6c140(uVar2,param_2,param_3,param_4,0,&puStack_58);
    _objc_release(uVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7de28; end: 105c7de2b;  */

void FUN_105c7de28(void)

{
  return;
}



/* Entry: 105c7de2c; end: 105c7e03b; -[SCUserPropertiesDeltaSyncProcessor _processInsertUpdateOfKey:withValue:version:transactionContext:] */

void FUN_105c7de2c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc90c0();
  _objc_release(uVar1);
  if (uVar2 < param_5) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c296f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((lVar5 == 0) || (lVar3 = lVar5, func_0x00010c071ae0(lVar5,param_2,param_4), (int)lVar3 == 0)
       ) {
LAB_105c7dfc8:
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3d920();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105c7e03c;
      puStack_70 = &UNK_1108e27e8;
      _objc_retain(param_3);
      uStack_68 = param_3;
      _objc_retain(param_4);
      uStack_60 = param_4;
      uStack_58 = param_5;
      func_0x00010c28bba0(uVar4,param_2,param_3,param_4,param_5,param_6,0,&puStack_88);
      _objc_release(uVar4);
      _objc_release(uStack_60);
      uVar4 = uStack_68;
    }
    _objc_release(uVar4);
  }
  else {
    if (param_5 != uVar2) goto LAB_105c7e008;
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c296f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((param_4 != 0) &&
       (uVar2 = param_4, func_0x00010c071ae0(param_4,param_2,lVar5), (uVar2 & 1) == 0))
    goto LAB_105c7dfc8;
  }
  _objc_release(lVar5);
LAB_105c7e008:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7e03c; end: 105c7e03f;  */

void FUN_105c7e03c(void)

{
  return;
}



/* Entry: 105c7e040; end: 105c7e14f; -[SCUserPropertiesDeltaSyncProcessor logInDeltaSyncGroupKeys] */

void FUN_105c7e040(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105c7e5e0();
  _objc_release(puVar1);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar2 != 0) {
    puVar1 = PTR_PTR_1126b0440;
    _objc_alloc();
    puVar2 = PTR_PTR_1126b0438;
    func_0x00010c0d5160(PTR_PTR_1126b0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_storeStrong(puVar1 + 0x18,0);
    _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c7e150; end: 105c7e18b; -[SCUserPropertiesDeltaSyncProcessor .cxx_destruct] */

void FUN_105c7e150(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c7e18c; end: 105c7e217;  */

void FUN_105c7e18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0440;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c021180(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd5fd8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c7e218; end: 105c7e2ff; -[SCUserPropertiesDefaultSyncService initWithDeltaSyncService:performer:userId:] */

undefined1 *
FUN_105c7e218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eca90;
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
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c7e300; end: 105c7e36f; -[SCUserPropertiesDefaultSyncService hasSynced] */

undefined8 FUN_105c7e300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_105c7e18c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfdd140(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105c7e370; end: 105c7e3e7; -[SCUserPropertiesDefaultSyncService observeLoginComplete] */

void FUN_105c7e370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_105c7e18c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0d60(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c7e3e8; end: 105c7e507; -[SCUserPropertiesDefaultSyncService sync:] */

void FUN_105c7e3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_105c7e18c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0448;
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
  uVar4 = uVar1;
  func_0x00010c266020(uVar1,param_2,uVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c7e508;
  puStack_50 = &UNK_1108e2818;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(uVar4,param_2,&puStack_68,uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7e508; end: 105c7e563;  */

void FUN_105c7e508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c7e564; end: 105c7e643; -[SCUserPropertiesDefaultSyncService .cxx_destruct] */

void FUN_105c7e564(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c7e644; end: 105c7e7bb;  */

void FUN_105c7e644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010c168b40(puVar3,param_2,1);
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  func_0x00010c1b66e0(puVar1,param_2,puVar3);
  func_0x00010c198180(puVar1,param_2,1);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110e26178);
  puVar4 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbc0();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edae0();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c35c0();
  _objc_release(puVar4);
  func_0x00010c1b6780(puVar1,param_2,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c7e7bc; end: 105c7e9f7; +[SCUserPropertiesSpeculativeWritesJobPluginFactory createJobPluginWithUserSessionScope:deltaSyncServices:grapheneServices:userStorageServices:] */

void FUN_105c7e7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_6);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c248100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x0001003db5f0(uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126ae720;
  _objc_retain(param_3);
  _objc_retain(uVar5);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c3880;
  func_0x00010c085680(PTR_PTR_1126c3880);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c7e9f8; end: 105c7ea53;  */

void FUN_105c7e9f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3868;
  _objc_alloc(PTR_PTR_1126c3868);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf87660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c7ea54; end: 105c7ebe7;  */

void FUN_105c7ea54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f33a34d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,PTR___dispatch_queue_attr_concurrent_11034be28,0x12
                     );
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c293340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c3870;
  _objc_alloc(PTR_PTR_1126c3870);
  func_0x00010c018080();
  puVar6 = PTR_PTR_1126c3878;
  _objc_alloc(PTR_PTR_1126c3878);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c248100(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c293740(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059c20(puVar6,param_2,uVar7,uVar4,uVar3,puVar1,puVar2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105c7ebe8; end: 105c7ed3f; -[SCUserPropertiesSpeculativeWritesJobProcessor initWithUploadService:repository:syncService:performer:metricsReporter:userId:] */

undefined1 *
FUN_105c7ebe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126eca98;
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
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c7ed40; end: 105c7ed6b; -[SCUserPropertiesSpeculativeWritesJobProcessor deleteJobWithJobConfig:jobData:jobDeletionReason:] */

void FUN_105c7ed40(long param_1,undefined8 param_2)

{
  func_0x00010c133d20(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 105c7ed6c; end: 105c7ed8b; -[SCUserPropertiesSpeculativeWritesJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_105c7ed6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x5;
  
  func_0x00010bee5be0(param_1,param_2,0,in_x5);
  return 0;
}



/* Entry: 105c7ed8c; end: 105c7ef5f; -[SCUserPropertiesSpeculativeWritesJobProcessor _uploadPendingUserProperties:jobCompletionCallback:] */

void FUN_105c7ed8c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  int iStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcbf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c133cc0(*(undefined8 *)(param_1 + 0x28));
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if ((lVar1 == 0) || (param_3 == 10)) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf529e0(lVar2);
    func_0x00010c133ce0(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105c7f174;
    puStack_80 = &UNK_11089a980;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(puVar3);
    puStack_78 = puVar3;
    iStack_60 = param_3;
    _objc_retain(param_4);
    lStack_70 = param_4;
    FUN_105c7ef60(uVar5,uVar4,0,lVar2,puVar3,&puStack_98);
    _objc_release(uVar4);
    _objc_release(lStack_70);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 105c7ef60; end: 105c7f173;  */

void FUN_105c7ef60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (param_3 == lVar1) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else {
    lVar1 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2be400();
    if ((int)lVar2 == 1) {
      lVar2 = lVar1;
      func_0x00010c087060(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133d40(param_1);
      _objc_release(lVar2);
      func_0x00010befa120(param_5);
      FUN_105c7ef60(param_1,param_2,param_3 + 1,param_4,param_5,param_6);
    }
    else {
      lVar2 = lVar1;
      FUN_105c7f878(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar1);
      _objc_retain(param_5);
      _objc_retain(param_1);
      _objc_retain(param_2);
      _objc_retain(param_4);
      _objc_retain(param_6);
      func_0x00010c28bbc0(param_2);
      _objc_release(lVar2);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(param_2);
      _objc_release(param_1);
      _objc_release(param_5);
      _objc_release(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 105c7f174; end: 105c7f267;  */

void FUN_105c7f174(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uStack_48 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bee5ca0(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 105c7f268; end: 105c7f41b;  */

void FUN_105c7f268(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  ulong uStack_160;
  long lStack_158;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = (ulong)(*(int *)(param_1 + 0x30) + 1);
    func_0x00010bee5be0();
  }
  else {
    _objc_retain(param_2);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar4 = param_2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf52a60();
    if (uVar8 != 0) {
      lVar7 = *plStack_120;
      unaff_x22 = uVar8;
      do {
        uVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(uVar4);
          }
          lVar6 = *(long *)(lStack_128 + uVar8 * 8);
          uVar1 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf3ec40();
          _objc_release(uVar1);
          if (uVar2 == 4) goto LAB_105c7f37c;
          uVar8 = uVar8 + 1;
        } while (unaff_x22 != uVar8);
        unaff_x22 = uVar4;
        func_0x00010bf52a60();
      } while (unaff_x22 != 0);
    }
    lVar6 = 0;
LAB_105c7f37c:
    _objc_release(uVar4);
    _objc_release(param_2);
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = param_2;
    if (lVar6 == 0) {
      func_0x00010be29400();
    }
    else {
      func_0x00010be32fc0();
    }
  }
  _objc_release(lVar7);
  uVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105c7f41c;
  uStack_160 = unaff_x22;
  lStack_158 = lVar7;
  lStack_150 = param_1;
  uStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_168,uVar8);
  uVar3 = *(undefined8 *)(uVar8 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  func_0x00010c265b60(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105c7f41c; end: 105c7f53b; -[SCUserPropertiesSpeculativeWritesJobProcessor _handleVersionMismatchFailure:jobCompletionCallback:] */

void FUN_105c7f41c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c265b60(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7f53c; end: 105c7f56f;  */

void FUN_105c7f53c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c7f570; end: 105c7f877; -[SCUserPropertiesSpeculativeWritesJobProcessor _uploadPropertyAtIndex:properties:failedItems:putCompletionHandler:] */

void FUN_105c7f570(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (param_3 == lVar1) {
    (**(code **)(param_6 + 0x10))(param_6,param_5);
  }
  else {
    lVar1 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_105c7f878();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_105c7b320(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfc90c0();
    lVar5 = lVar2;
    FUN_105c7b038(lVar2,lVar3,uVar8,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = lVar2;
    func_0x00010c087060(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf964a0(lVar1);
    func_0x00010c133ca0(uVar7);
    _objc_release(lVar3);
    _objc_initWeak(auStack_78,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0448;
    _objc_alloc(PTR_PTR_1126b0448);
    func_0x00010c02d480();
    uVar7 = uVar4;
    func_0x00010c11c640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_retain(param_5);
    _objc_retain(lVar1);
    _objc_copyWeak(auStack_88,auStack_78);
    lStack_80 = param_3;
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c297260(uVar7);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
    _objc_release(lVar1);
    _objc_release(param_5);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105c7f878; end: 105c7f8fb;  */

void FUN_105c7f878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8720;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0844e0(param_1);
  uVar3 = param_1;
  func_0x00010c087060(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c01ff40(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c7f8fc; end: 105c7fb33;  */

void FUN_105c7f8fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_105c7f878(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_105c7b320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    FUN_105c7ac8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c0896c0(param_2);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    func_0x00010c28bba0(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x28));
    lVar2 = param_3;
    func_0x00010bf3ec40();
    if (lVar2 == 4) {
      lVar2 = param_1 + 0x50;
      _objc_loadWeakRetained();
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c087060(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1339a0(uVar4);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bee5ca0();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c7fb34; end: 105c7fb73;  */

void FUN_105c7fb34(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c7fb74; end: 105c7fe97; -[SCUserPropertiesSpeculativeWritesJobProcessor _handleFailure:jobCompletionCallback:] */

void FUN_105c7fb74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (iVar1 < 2) {
    (**(code **)(param_4 + 0x10))(param_4,1,0);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = param_3;
    func_0x00010bf002e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c087060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133d00(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf002e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105c7fe98;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x000105c7fd20(uVar4,0,uVar3,uVar5,&puStack_78);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7fe98; end: 105c7feab;  */

void FUN_105c7fe98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c7fea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105c7feac; end: 105c7ff43; -[SCUserPropertiesSpeculativeWritesJobProcessor .cxx_destruct] */

void FUN_105c7feac(long param_1)

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



/* Entry: 105c7ff44; end: 105c7ff5b;  */

void FUN_105c7ff44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(lVar3);
  _objc_retain(uVar6);
  _objc_retain(lVar1);
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar5 + 1 == lVar4) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  else {
    lVar5 = lVar3;
    func_0x00010c0dfd40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    FUN_105c7f878();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(lVar3);
    _objc_retain(uVar6);
    _objc_retain(lVar1);
    func_0x00010bf3a880(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c7ff5c; end: 105c803bb;  */

long FUN_105c7ff5c(double param_1,long param_2,long param_3)

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
  float fVar10;
  double dVar12;
  float fVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  double dVar11;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c295040();
  lVar2 = param_3;
  func_0x00010c295040();
  if (lVar1 == lVar2) {
    lVar1 = param_2;
    func_0x00010c0844e0();
    lVar2 = param_3;
    func_0x00010c0844e0();
    if (lVar1 == lVar2) {
      lVar1 = param_2;
      func_0x00010c2950a0();
      lVar2 = param_3;
      func_0x00010c2950a0();
      if ((int)lVar1 == (int)lVar2) {
        lVar1 = param_2;
        func_0x00010c294f80();
        lVar2 = param_3;
        func_0x00010c294f80();
        if ((int)lVar1 == (int)lVar2) {
          lVar1 = param_2;
          func_0x00010c2950c0();
          lVar2 = param_3;
          func_0x00010c2950c0();
          if (lVar1 == lVar2) {
            func_0x00010c295020(param_2);
            dVar11 = param_1;
            func_0x00010c295020(param_3);
            fVar13 = ABS(SUB84(param_1,0) - SUB84(dVar11,0));
            if ((fVar13 < 1.1754944e-38) ||
               (fVar10 = ABS(SUB84(param_1,0) + SUB84(dVar11,0)) * 1.1920929e-07,
               dVar11 = (double)(ulong)(uint)fVar10, fVar13 < fVar10)) {
              func_0x00010c294fe0(param_2);
              dVar12 = dVar11;
              func_0x00010c294fe0(param_3);
              if ((ABS(dVar11 - dVar12) < 2.2250738585072014e-308) ||
                 (ABS(dVar11 - dVar12) < ABS(dVar11 + dVar12) * 2.220446049250313e-16)) {
                lVar1 = param_2;
                func_0x00010c087060();
                _objc_retainAutoreleasedReturnValue();
                lVar2 = param_3;
                func_0x00010c087060();
                _objc_retainAutoreleasedReturnValue();
                if (lVar1 == lVar2) {
LAB_105c80154:
                  lVar3 = param_2;
                  func_0x00010c295080();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = param_3;
                  func_0x00010c295080();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar3 == lVar4) {
LAB_105c801c4:
                    lVar5 = param_2;
                    func_0x00010c294fc0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar6 = param_3;
                    func_0x00010c294fc0();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar5 == lVar6) {
                      _objc_release(lVar6);
                      _objc_release(lVar5);
                      lVar9 = 1;
                    }
                    else {
                      lVar7 = param_2;
                      func_0x00010c294fc0(param_2);
                      _objc_retainAutoreleasedReturnValue();
                      lVar8 = param_3;
                      func_0x00010c294fc0(param_3);
                      _objc_retainAutoreleasedReturnValue();
                      lVar9 = lVar7;
                      func_0x00010c071ae0(lVar7);
                      _objc_release(lVar8);
                      _objc_release(lVar7);
                      _objc_release(lVar6);
                      _objc_release(lVar5);
                    }
                    if (lVar3 != lVar4) goto LAB_105c8026c;
                  }
                  else {
                    lStack_88 = param_2;
                    func_0x00010c295080();
                    _objc_retainAutoreleasedReturnValue();
                    lStack_98 = param_3;
                    func_0x00010c295080();
                    _objc_retainAutoreleasedReturnValue();
                    lVar5 = lStack_88;
                    func_0x00010c071ae0();
                    if ((int)lVar5 != 0) goto LAB_105c801c4;
                    lVar9 = 0;
LAB_105c8026c:
                    _objc_release(lStack_98);
                    _objc_release(lStack_88);
                  }
                  _objc_release(lVar4);
                  _objc_release(lVar3);
                  if (lVar1 != lVar2) goto LAB_105c80298;
                }
                else {
                  lStack_80 = param_2;
                  func_0x00010c087060();
                  _objc_retainAutoreleasedReturnValue();
                  lStack_90 = param_3;
                  func_0x00010c087060();
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = lStack_80;
                  func_0x00010c071ae0();
                  if ((int)lVar3 != 0) goto LAB_105c80154;
                  lVar9 = 0;
LAB_105c80298:
                  _objc_release(lStack_90);
                  _objc_release(lStack_80);
                }
                _objc_release(lVar2);
                _objc_release(lVar1);
                goto LAB_105c800a8;
              }
            }
          }
        }
      }
    }
  }
  lVar9 = 0;
LAB_105c800a8:
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar9;
}



/* Entry: 105c803bc; end: 105c8082f;  */

void FUN_105c803bc(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **unaff_x21;
  ulong uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
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
  ppuVar5 = param_2;
  _objc_retain(param_2);
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0)) {
    ppuStack_198 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x21 = param_2;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar11 = *plStack_130;
      do {
        ppuVar6 = (undefined **)0x0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(unaff_x21);
          }
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuVar9 = *(undefined ***)(lStack_138 + (long)ppuVar6 * 8);
          uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
          func_0x00010c0844e0(ppuVar9);
          func_0x00010c0df880(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_retain(uVar8);
          _objc_retain(ppuVar9);
          if ((((ppuVar9 == (undefined **)0x0 || uVar8 != 0) &&
               (((uVar3 = uVar8, func_0x00010c2be400(), (int)uVar3 != 0 ||
                 (ppuVar4 = ppuVar9, func_0x00010c2be400(), (int)ppuVar4 != 0)) ||
                (uVar3 = uVar8, ppuVar5 = ppuVar9, FUN_105c7ff5c(uVar8,ppuVar9), (uVar3 & 1) != 0)))
               ) && (((uVar3 = uVar8, func_0x00010c2be400(), (int)uVar3 != 2 ||
                      (ppuVar4 = ppuVar9, func_0x00010c2be400(), (int)ppuVar4 != 2)) ||
                     (uVar3 = uVar8, ppuVar5 = ppuVar9, FUN_105c7ff5c(uVar8,ppuVar9),
                     (int)uVar3 != 0)))) &&
             (((uVar8 == 0 ||
               ((uVar3 = uVar8, func_0x00010c2be400(), (int)uVar3 != 1 &&
                (uVar3 = uVar8, func_0x00010c2be400(), (int)uVar3 != 0)))) ||
              (ppuVar4 = ppuVar9, func_0x00010c2be400(), (int)ppuVar4 != 2)))) {
            _objc_release(ppuVar9);
            _objc_release(uVar8);
            uVar3 = uVar8;
            ppuVar5 = ppuVar9;
            FUN_105c7ff5c(uVar8,ppuVar9);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)uVar3 != 0) {
              uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
              func_0x00010c0844e0(ppuVar9);
              func_0x00010c0df880(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar10);
              goto LAB_105c805d4;
            }
          }
          else {
            _objc_release(ppuVar9);
            _objc_release(uVar8);
            func_0x00010befa120(ppuStack_198);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
            func_0x00010c0844e0(ppuVar9);
            func_0x00010c0df880(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar10);
LAB_105c805d4:
            _objc_release(puVar2);
          }
          _objc_release(uVar8);
          ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        } while (ppuVar1 != ppuVar6);
        ppuVar1 = unaff_x21;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(unaff_x21);
    ppuVar1 = ppuStack_198;
    func_0x00010bf529e0();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (ppuVar1 != (undefined **)0x0) {
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_105c80830;
      puStack_150 = &UNK_1108e2a28;
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      puStack_190 = puVar2;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_105c808dc;
      puStack_178 = &UNK_1108e2a28;
      uStack_170 = *(undefined8 *)(param_1 + 0x20);
      ppuVar5 = &puStack_168;
      unaff_x21 = ppuStack_198;
      uStack_148 = uVar10;
      func_0x00010050471c(ppuStack_198,ppuVar5,&puStack_190);
      lVar11 = *(long *)(param_1 + 0x30);
      if (lVar11 != 0) {
        ppuVar5 = unaff_x21;
        (**(code **)(lVar11 + 0x10))(lVar11,unaff_x21);
      }
      _objc_release(unaff_x21);
      _objc_release(uStack_148);
    }
    _objc_release(ppuStack_198);
  }
  ppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(uStack_148);
  _objc_release(ppuStack_198);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(ppuVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = ppuVar1[4];
  func_0x00010c0844e0(ppuVar5);
  func_0x00010c0df880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c80830; end: 105c808db;  */

void FUN_105c80830(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c808dc; end: 105c80903;  */

void FUN_105c808dc(long param_1,undefined8 param_2)

{
  func_0x00010bf6e960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c80904; end: 105c80933; -[SCUserPropertiesObservableContext unobserve] */

void FUN_105c80904(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c80934; end: 105c80a57; -[SCUserPropertiesObservableContext .cxx_destruct] */

void FUN_105c80934(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c80a58; end: 105c8104f;  */

void FUN_105c80a58(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_464;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined **ppuStack_448;
  undefined4 uStack_440;
  undefined4 uStack_430;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  undefined1 uStack_3d1;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined1 *puStack_398;
  undefined ***pppuStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e9;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2d0;
  byte bStack_2ce;
  byte bStack_2cd;
  undefined1 *puStack_2b0;
  undefined ***pppuStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c3858);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  func_0x0001004fd544();
  uVar3 = param_2;
  func_0x00010c0844e0();
  uStack_270 = 0xf;
  pppuStack_1c0 = &ppuStack_278;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_DAT_110864b98;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  uStack_1e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f8 = 10;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_DAT_110864b38;
  lStack_1b0 = 0;
  lStack_1b8 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar4 = &uStack_2e9;
  uStack_248 = uVar3;
  puStack_1c8 = puVar2;
  func_0x0001004fd5fc();
  uVar3 = param_2;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  _objc_retain();
  ppuStack_360 = &PTR_SUB_110862760;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_310 = 0;
  puStack_318 = (undefined *)0x0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2ce = puVar4[0x1a];
  bStack_2cd = puVar4[0x1b];
  uStack_2e0 = 10;
  uStack_2d0 = 0x100;
  ppuStack_2e8 = &PTR_SUB_110862700;
  pppuStack_150 = &ppuStack_2e8;
  uStack_298 = 0;
  puStack_2a0 = (undefined *)0x0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  bStack_176 = (byte)uStack_1e6 | bStack_2ce;
  bStack_175 = uStack_1e6._1_1_ & bStack_2cd;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_158 = &ppuStack_200;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_148 = 0;
  puVar2 = &uStack_3d1;
  uStack_330 = uVar3;
  puStack_2b0 = puVar4;
  pppuStack_2a8 = &ppuStack_360;
  FUN_105c867a4();
  uStack_440 = 0xf;
  uStack_430 = 0x100;
  ppuStack_448 = &PTR_DAT_1108e2c78;
  uStack_408 = 0;
  uStack_410 = 0;
  lStack_3f8 = 0;
  lStack_400 = 0;
  plStack_3e8 = (long *)0x0;
  uStack_3f0 = 0;
  plStack_3e0 = (long *)0x0;
  bStack_3b6 = puVar2[0x1a];
  bStack_3b5 = puVar2[0x1b];
  uStack_3c8 = 10;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_DAT_1108e2c18;
  plStack_368 = (long *)0x0;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  bStack_106 = bStack_176 | bStack_3b6;
  bStack_105 = bStack_175 & bStack_3b5;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_3d0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_460 = 0;
  lStack_458 = 0;
  uStack_450 = 0;
  uStack_464 = 0;
  puVar5 = &uStack_b0;
  uStack_418 = param_3;
  puStack_398 = puVar2;
  pppuStack_390 = &ppuStack_448;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_460,&uStack_464);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_460 != 0) {
    lStack_458 = lStack_460;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_DAT_1108e2c18;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  plVar1 = plStack_3e0;
  ppuStack_448 = &PTR_DAT_1108e2c78;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e8;
  plStack_3e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_400 != 0) {
    lStack_3f8 = lStack_400;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_SUB_110862700;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3d0 = &puStack_2a0;
  func_0x000100105004(&ppuStack_3d0);
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_110862760;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3d0 = &puStack_318;
  func_0x000100105004(&ppuStack_3d0);
  _objc_release(uStack_330);
  _objc_release(uVar3);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_DAT_110864b38;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_DAT_110864b98;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  func_0x00010bf529e0(puVar5);
  puVar6 = puVar5;
  func_0x00010bfb1920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105c81050; end: 105c81073; -[SCUserPropertiesDocRepository userPropertyWithKey:] */

void FUN_105c81050(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001004fcce4(*(undefined8 *)(param_1 + 0x10),param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c81074; end: 105c810cb; -[SCUserPropertiesDocRepository boolForUserPropertyWithKey:] */

undefined8 FUN_105c81074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001004fcce4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294f80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c810cc; end: 105c8112b; -[SCUserPropertiesDocRepository doubleForUserPropertyWithKey:] */

undefined8 FUN_105c810cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001004fcce4(uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294fe0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105c8112c; end: 105c81183; -[SCUserPropertiesDocRepository longForUserPropertyWithKey:] */

undefined8 FUN_105c8112c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001004fcce4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c295040();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c81184; end: 105c811e3; -[SCUserPropertiesDocRepository floatForUserPropertyWithKey:] */

undefined8 FUN_105c81184(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001004fcce4(uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c295020();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105c811e4; end: 105c81243; -[SCUserPropertiesDocRepository stringForUserPropertyWithKey:] */

void FUN_105c811e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001004fcce4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c295080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c81244; end: 105c8129b; -[SCUserPropertiesDocRepository unsignedIntegerForUserPropertyWithKey:] */

undefined8 FUN_105c81244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001004fcce4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2950c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c8129c; end: 105c812f3; -[SCUserPropertiesDocRepository integerForUserPropertyWithKey:] */

undefined8 FUN_105c8129c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001004fcce4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c295040();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c812f4; end: 105c81353; -[SCUserPropertiesDocRepository rawItemForUserPropertyWithKey:] */

void FUN_105c812f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001004fcce4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c81354; end: 105c813c3; -[SCUserPropertiesDocRepository valueForItemKey:withPendingWriteStatus:] */

void FUN_105c81354(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_105c80a58(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c813c4; end: 105c815df; -[SCUserPropertiesDocRepository getUserPropertiesWithPendingWriteStatus:] */

void FUN_105c813c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
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
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
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
  
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar5);
  _objc_opt_class(PTR_PTR_1126c3858);
  if (lVar5 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar5);
  }
  puVar2 = &uStack_101;
  FUN_105c867a4();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_1108e2c78;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_1108e2c18;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_3;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_1108e2c18;
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
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_1108e2c78;
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
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c815e0; end: 105c81bcf; -[SCUserPropertiesDocRepository getUserPropertiesForUploadInPendingWriteStatus] */

void FUN_105c815e0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 *puStack_328;
  undefined4 uStack_31c;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2e8;
  undefined1 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined1 uStack_289;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined2 uStack_270;
  byte bStack_26e;
  byte bStack_26d;
  undefined1 *puStack_250;
  undefined ***pppuStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined2 uStack_e0;
  byte bStack_de;
  byte bStack_dd;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c3858);
  puVar7 = &uStack_130;
  if (lVar2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130);
  }
  puVar3 = &uStack_1a1;
  FUN_105c867a4();
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  uStack_1e8 = 2;
  ppuStack_218 = &PTR_DAT_1108e2c78;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  lStack_198 = CONCAT44(lStack_198._4_4_,10);
  uStack_188._0_4_ = CONCAT22(*(undefined2 *)(puVar3 + 0x1a),0x100);
  ppuStack_1a0 = &PTR_DAT_1108e2c18;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  puVar4 = &uStack_289;
  puStack_168 = puVar3;
  pppuStack_160 = &ppuStack_218;
  FUN_105c867a4();
  uStack_2f8 = 0xf;
  uStack_2e8 = 0x100;
  uStack_2d0 = 1;
  ppuStack_300 = &PTR_DAT_1108e2c78;
  dVar17 = 0.0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  lStack_2b0 = 0;
  lStack_2b8 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_2a8 = 0;
  plStack_298 = (long *)0x0;
  bStack_26e = puVar4[0x1a];
  bStack_26d = puVar4[0x1b];
  uStack_280 = 10;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_DAT_1108e2c18;
  plStack_220 = (long *)0x0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  bStack_de = uStack_188._2_1_ | bStack_26e;
  bStack_dd = uStack_188._3_1_ | bStack_26d;
  uStack_f0 = 5;
  uStack_e0 = 0x100;
  ppuStack_f8 = &PTR_SUB_1108629c8;
  pppuStack_c0 = &ppuStack_1a0;
  pppuStack_b8 = &ppuStack_288;
  uStack_a8 = 0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  plStack_90 = (long *)0x0;
  ppuStack_318 = (undefined **)0x0;
  ppuStack_310 = (undefined **)0x0;
  uStack_308 = 0;
  uStack_31c = 0;
  puVar5 = &uStack_130;
  pppuVar11 = &ppuStack_318;
  pppuVar12 = (undefined ***)&uStack_31c;
  puStack_250 = puVar4;
  pppuStack_248 = &ppuStack_300;
  func_0x0001000e77a0(puVar5,&ppuStack_f8,pppuVar11,pppuVar12);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_318 != (undefined **)0x0) {
    ppuStack_310 = ppuStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_90;
  ppuStack_f8 = &PTR_SUB_1108629c8;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_DAT_1108e2c18;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  plVar1 = plStack_298;
  ppuStack_300 = &PTR_DAT_1108e2c78;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a0;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b8 != 0) {
    lStack_2b0 = lStack_2b8;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_1108e2c18;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_1108e2c78;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf0a540(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puStack_328 = puVar5;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    puStack_168 = (undefined1 *)0x0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    lStack_198 = 0;
    ppuStack_1a0 = (undefined **)0x0;
    _objc_retain();
    pppuVar11 = &ppuStack_1a0;
    pppuVar12 = &ppuStack_f8;
    in_x4 = 0x10;
    puVar6 = puStack_328;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar13 = *plStack_190;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_190 != lVar13) {
            _objc_enumerationMutation(puStack_328);
          }
          uVar16 = *(undefined8 *)(lStack_198 + (long)puVar14 * 8);
          puVar8 = PTR_PTR_1126b8720;
          _objc_alloc();
          func_0x00010c0844e0(uVar16);
          uVar15 = uVar16;
          func_0x00010c087060(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01ff40();
          _objc_release(uVar15);
          puVar9 = puVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined8 *)0x0) {
LAB_105c81a58:
            func_0x00010c1d0640(puVar7);
          }
          else {
            func_0x00010c2be400();
            puVar10 = puVar9;
            func_0x00010c2be400();
            if ((int)uVar16 < (int)puVar10) goto LAB_105c81a58;
          }
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar6 != puVar14);
        pppuVar11 = &ppuStack_1a0;
        pppuVar12 = &ppuStack_f8;
        in_x4 = 0x10;
        puVar6 = puStack_328;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(puStack_328);
    puVar6 = puVar7;
    func_0x00010bf00d20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_328);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  lVar13 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_328);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar2);
  __Unwind_Resume();
  _objc_retain(pppuVar11);
  _objc_retain(pppuVar12);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _CACurrentMediaTime();
  lVar2 = lVar13;
  func_0x00010c15e8a0(dVar17 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar15 = *(undefined8 *)(lVar13 + 0x10);
    _objc_retain(lVar2);
    _objc_retain(in_x5);
    func_0x00010c0f8500(uVar15);
    _objc_release(in_x5);
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(pppuVar12);
  _objc_release(pppuVar11);
  return;
}



/* Entry: 105c81bd0; end: 105c81d77; -[SCUserPropertiesDocRepository putItemWithKey:value:completionQueue:completionHandler:] */

void FUN_105c81bd0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  lVar2 = param_2;
  func_0x00010c15e8a0(param_1 * 1000.0,param_2,param_3,param_4,param_5,2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105c81d78;
    puStack_70 = &UNK_11084f688;
    _objc_retain(lVar2);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105c81f9c;
    puStack_98 = &UNK_11084f6b8;
    lStack_68 = lVar2;
    _objc_retain(param_7);
    uStack_90 = param_7;
    func_0x00010c0f8500(uVar3,param_3,&puStack_88,param_6,&puStack_b0);
    _objc_release(uStack_90);
    _objc_release(lStack_68);
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105c81d78; end: 105c81e33;  */

void FUN_105c81d78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c3888;
  FUN_105c86c64(PTR_PTR_1126c3888,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c3888;
    FUN_105c86910(PTR_PTR_1126c3888,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_105c81e34(*(undefined8 *)(param_1 + 0x20),puVar1);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c81e34; end: 105c81f9b;  */

void FUN_105c81e34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c0844e0();
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  uVar1 = param_2;
  func_0x00010c087060(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_setProperty_nonatomic_copy(param_3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2be400();
  *(char *)(param_3 + 0x14) = (char)uVar1;
  uVar1 = param_2;
  func_0x00010c1422a0();
  *(undefined8 *)(param_3 + 0x30) = uVar1;
  uVar1 = param_2;
  func_0x00010c2950a0();
  *(char *)(param_3 + 0x15) = (char)uVar1;
  uVar1 = param_2;
  func_0x00010c294f80();
  *(char *)(param_3 + 0x16) = (char)uVar1;
  uVar1 = param_2;
  func_0x00010c295040();
  *(undefined8 *)(param_3 + 0x38) = uVar1;
  uVar1 = param_2;
  func_0x00010c2950c0();
  *(undefined8 *)(param_3 + 0x40) = uVar1;
  func_0x00010c295020(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  func_0x00010c294fe0(param_2);
  *(ulong *)(param_3 + 0x48) = CONCAT44(uVar3,uVar2);
  uVar1 = param_2;
  func_0x00010c295080(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_setProperty_nonatomic_copy(param_3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c294fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_setProperty_nonatomic_copy(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c81f9c; end: 105c81faf;  */

void FUN_105c81f9c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c81fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c81fb0; end: 105c8225b; -[SCUserPropertiesDocRepository clearAllPendingWrites:transactionContext:completionQueue:completionHandler:] */

void FUN_105c81fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  FUN_105c80a58(lVar3,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  if (lVar1 == 0) {
    FUN_105c80a58(lVar3,param_3,2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar2 = auStack_58;
      _objc_loadWeakRetained(puVar2);
      func_0x00010be3dc40();
      _objc_release(puVar2);
      lVar4 = 0;
    }
    else {
      func_0x00010be8de40(param_1);
    }
  }
  else {
    _objc_retain(lVar3);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010be8de40(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_3);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8225c; end: 105c82303;  */

void FUN_105c8225c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_105c80a58(lVar1,*(undefined8 *)(param_1 + 0x28),2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be3dc40(param_1);
  }
  else {
    func_0x00010be8de40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c82304; end: 105c823a3;  */

void FUN_105c82304(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 105c823a4; end: 105c825cf; -[SCUserPropertiesDocRepository clobberItem:value:rowVersion:transactionContext:completionQueue:completionHandler:] */

void FUN_105c823a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  _objc_retain(param_7);
  uVar1 = param_7;
  if (param_6 != 0) {
    _objc_release(param_7);
    uVar1 = 0;
  }
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3a880(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105c825d0; end: 105c82737;  */

void FUN_105c825d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_70,param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  func_0x00010c066a20(lVar2);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c82738; end: 105c8278f;  */

void FUN_105c82738(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c82790; end: 105c8283f;  */

void FUN_105c82790(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 105c82840; end: 105c82a17; -[SCUserPropertiesDocRepository updateUserPropertyToPendingPutResponse:completionQueue:completionHandler:] */

void FUN_105c82840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105c82a18;
  uStack_80 = 0x105c82a28;
  uStack_78 = 0;
  _objc_retain(param_4);
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105c82a18; end: 105c82a2f;  */

void FUN_105c82a18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c82a30; end: 105c82b63;  */

void FUN_105c82a30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_105c80a58(uVar2,*(undefined8 *)(param_1 + 0x20),2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  _objc_release(uVar4);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    puVar3 = PTR_PTR_1126c3888;
    FUN_105c86c64();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c15e820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_105c81e34();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c82b64; end: 105c82b93;  */

void FUN_105c82b64(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      param_2 = (ulong)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x000105c82b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 105c82b94; end: 105c82d8f; -[SCUserPropertiesDocRepository updateUserPropertyFromPendingPutResponseToConfirmed:value:rowVersion:transactionContext:completionQueue:completionHandler:] */

void FUN_105c82b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c82d90;
  puStack_90 = &UNK_1108e2ba8;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_4);
  uStack_78 = param_4;
  uStack_60 = param_5;
  _objc_retain(param_8);
  ppuVar1 = &puStack_a8;
  uStack_70 = param_8;
  _objc_retainBlock();
  if (param_6 == 0) {
    func_0x00010c0f8500(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1,param_6);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c82d90; end: 105c82f1b;  */

void FUN_105c82d90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_60,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010bf6c0c0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 105c82f1c; end: 105c8303f;  */

void FUN_105c82f1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_68,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010c066a20(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105c83040; end: 105c83097;  */

void FUN_105c83040(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c83098; end: 105c8327b; -[SCUserPropertiesDocRepository insertItemWithConfirmedStatus:value:rowVersion:transactionContext:completionQueue:completionHandler:] */

void FUN_105c83098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010c15e8a0(0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105c8327c;
    puStack_70 = &UNK_1108e2bd8;
    _objc_retain(lVar1);
    lStack_68 = lVar1;
    _objc_retain(param_8);
    uStack_58 = param_8;
    _objc_retain(param_7);
    ppuVar2 = &puStack_88;
    uStack_60 = param_7;
    _objc_retainBlock();
    if (param_6 == 0) {
      func_0x00010c0f8500(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      (*(code *)ppuVar2[2])(ppuVar2,param_6);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_60);
    _objc_release(uStack_58);
    _objc_release(lStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8327c; end: 105c833f3;  */

void FUN_105c8327c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c3888;
  FUN_105c86c64(PTR_PTR_1126c3888,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c3888;
    FUN_105c86910(PTR_PTR_1126c3888,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_105c81e34(*(undefined8 *)(param_1 + 0x20),puVar1);
  }
  lVar2 = param_2;
  func_0x00010c25ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,lVar2 != 0);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105c833f4;
      puStack_58 = &UNK_1107d0af0;
      _objc_retain(lVar4);
      lStack_48 = lVar4;
      _objc_retain(lVar2);
      lStack_50 = lVar2;
      func_0x00010007380c(lVar3,&puStack_70);
      _objc_release(lStack_50);
      _objc_release(lStack_48);
    }
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105c833f4; end: 105c8340b;  */

void FUN_105c833f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c83408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x20) != 0);
  return;
}



/* Entry: 105c8340c; end: 105c835af; -[SCUserPropertiesDocRepository deleteItemsWithKeys:transactionContext:completionQueue:completionHandler:] */

void FUN_105c8340c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = auStack_e8;
  uVar5 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = param_6;
        func_0x00010be8de60(param_1);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_e8;
      uVar5 = 0x10;
      lVar1 = param_3;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_105c80a58(uVar2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8de40(lVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105c835b0; end: 105c8368b; -[SCUserPropertiesDocRepository deleteItem:withPendingWriteStatus:transactionContext:completionQueue:completionHandler:] */

void FUN_105c835b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_105c80a58(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8de40(param_1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105c8368c; end: 105c836f7; -[SCUserPropertiesDocRepository getPreviousRowVersionForPropertyWithKey:] */

long FUN_105c8368c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_105c80a58(lVar1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c1422a0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 105c836f8; end: 105c838ab; -[SCUserPropertiesDocRepository hasSynced] */

undefined8 * FUN_105c836f8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 in_x4;
  undefined *in_x5;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puStack_578;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  code *pcStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_45c;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined4 uStack_428;
  undefined4 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 uStack_3c9;
  undefined **ppuStack_3c8;
  undefined4 uStack_3c0;
  undefined2 uStack_3b0;
  byte bStack_3ae;
  byte bStack_3ad;
  undefined1 *puStack_390;
  undefined ***pppuStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  long *plStack_360;
  undefined **ppuStack_358;
  undefined4 uStack_350;
  undefined4 uStack_340;
  undefined4 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined1 uStack_2e1;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined1 *puStack_2a8;
  undefined ***pppuStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined2 uStack_258;
  byte bStack_256;
  byte bStack_255;
  undefined ***pppuStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined auStack_1c8 [128];
  long lStack_148;
  undefined4 uStack_c8;
  undefined1 uStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_4c;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar13);
  _objc_opt_class(PTR_PTR_1126c3858);
  if (lVar13 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar13);
  }
  puVar2 = &uStack_c1;
  func_0x0001004fd5fc();
  uStack_58 = *(undefined8 *)(puVar2 + 0x10);
  uStack_50 = puVar2[0x19];
  uStack_4f = puVar2[0x18];
  uStack_40 = *(undefined8 *)(puVar2 + 0x28);
  uStack_4c = 0;
  pcStack_48 = FUN_105c85fa0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c0 = 0;
  puVar10 = (undefined8 *)0x1;
  func_0x000100c435d0(&lStack_c0,&uStack_58,&lStack_38);
  func_0x000100c436b8(&lStack_a8,&lStack_c0);
  uStack_c8 = 1;
  puVar16 = &uStack_90;
  puVar9 = &uStack_c8;
  func_0x00010054c81c(puVar16,&lStack_a8);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  puVar17 = puVar16;
  func_0x00010bf529e0(puVar16);
  _objc_release(puVar16);
  lVar3 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined8 *)(ulong)(puVar17 != (undefined8 *)0x0);
  }
  ___stack_chk_fail();
  _objc_release(puVar16);
  _objc_release(lVar13);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = in_x5;
  _objc_retain(puVar10);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  lVar13 = *(long *)(lVar3 + 0x10);
  _objc_retain(lVar13);
  _objc_retain(puVar9);
  _objc_opt_class(PTR_PTR_1126c3858);
  if (lVar13 == 0) {
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_200,lVar13);
  }
  puVar2 = &uStack_2e1;
  func_0x0001004fd544();
  puVar4 = puVar9;
  func_0x00010c0844e0();
  uStack_350 = 0xf;
  uStack_340 = 0x100;
  ppuStack_358 = &PTR_DAT_110864b98;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_308 = 0;
  lStack_310 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2c6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_2d8 = 10;
  uStack_2c8 = 0x100;
  ppuStack_2e0 = &PTR_DAT_110864b38;
  pppuStack_2a0 = &ppuStack_358;
  lStack_290 = 0;
  lStack_298 = 0;
  plStack_280 = (long *)0x0;
  uStack_288 = 0;
  plStack_278 = (long *)0x0;
  puVar5 = &uStack_3c9;
  puStack_328 = puVar4;
  puStack_2a8 = puVar2;
  func_0x0001004fd5fc();
  puVar4 = puVar9;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uStack_438 = 0xf;
  uStack_428 = 0x100;
  _objc_retain();
  ppuStack_440 = &PTR_SUB_110862760;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3e8 = 0;
  plStack_3d8 = (long *)0x0;
  bStack_3ae = puVar5[0x1a];
  bStack_3ad = puVar5[0x1b];
  uStack_3c0 = 10;
  uStack_3b0 = 0x100;
  ppuStack_3c8 = &PTR_SUB_110862700;
  pppuStack_388 = &ppuStack_440;
  pppuStack_230 = &ppuStack_3c8;
  uStack_378 = 0;
  uStack_380 = 0;
  plStack_368 = (long *)0x0;
  uStack_370 = 0;
  plStack_360 = (long *)0x0;
  bStack_256 = (byte)uStack_2c6 | bStack_3ae;
  bStack_255 = uStack_2c6._1_1_ & bStack_3ad;
  uStack_268 = 4;
  uStack_258 = 0x100;
  ppuStack_270 = &PTR_SUB_1108629c8;
  pppuStack_238 = &ppuStack_2e0;
  plStack_208 = (long *)0x0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_228 = 0;
  puStack_458 = (undefined8 *)0x0;
  puStack_450 = (undefined8 *)0x0;
  uStack_448 = 0;
  uStack_45c = 0;
  puVar16 = &uStack_200;
  puStack_410 = puVar4;
  puStack_390 = puVar5;
  func_0x0001000e77a0(puVar16,&ppuStack_270,&puStack_458,&uStack_45c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_458 != (undefined8 *)0x0) {
    puStack_450 = puStack_458;
    __ZdlPv();
  }
  plVar1 = plStack_208;
  ppuStack_270 = &PTR_SUB_1108629c8;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_228 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_360;
  ppuStack_3c8 = &PTR_SUB_110862700;
  plStack_360 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_368;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_458 = &uStack_380;
  func_0x000100105004(&puStack_458);
  plVar1 = plStack_3d8;
  ppuStack_440 = &PTR_SUB_110862760;
  plStack_3d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e0;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_458 = &uStack_3f8;
  func_0x000100105004(&puStack_458);
  _objc_release(puStack_410);
  _objc_release(puVar4);
  plVar1 = plStack_278;
  ppuStack_2e0 = &PTR_DAT_110864b38;
  plStack_278 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_280;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_298 != 0) {
    lStack_290 = lStack_298;
    __ZdlPv();
  }
  plVar1 = plStack_2f0;
  ppuStack_358 = &PTR_DAT_110864b98;
  plStack_2f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2f8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_310 != 0) {
    lStack_308 = lStack_310;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  puVar17 = puVar16;
  func_0x00010bf529e0();
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    puVar17 = puVar16;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar16);
  _objc_release(puVar9);
  _objc_release(lVar13);
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  plStack_490 = (long *)0x0;
  _objc_retain(puVar17);
  puVar16 = &uStack_4a0;
  puVar11 = auStack_1c8;
  lVar13 = 0x10;
  puVar6 = puVar17;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    lVar15 = *plStack_490;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_490 != lVar15) {
          _objc_enumerationMutation(puVar17);
        }
        puVar12 = in_x5;
        func_0x00010be8de40(lVar3);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar6 != puVar16);
      puVar16 = &uStack_4a0;
      puVar11 = auStack_1c8;
      lVar13 = 0x10;
      puVar6 = puVar17;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar17);
  _objc_release(puVar17);
  _objc_release(in_x5);
  _objc_release(in_x4);
  puVar6 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  _objc_release(puVar17);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(puVar10);
  __Unwind_Resume();
  _objc_retain(puVar16);
  _objc_retain(puVar11);
  _objc_retain(lVar13);
  _objc_retain(puVar12);
  if (puVar11 == (undefined *)0x0) {
    uVar14 = puVar6[2];
    _objc_retain(puVar16);
    _objc_retain(puVar12);
    func_0x00010c0f8500(uVar14);
    _objc_release(puVar12);
    puVar10 = puVar16;
    goto LAB_105c840b0;
  }
  puVar10 = (undefined8 *)PTR_PTR_1126c3888;
  FUN_105c871f4(PTR_PTR_1126c3888,puVar16);
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined8 *)0x0) {
    if (puVar12 != (undefined *)0x0) {
      if (lVar13 != 0) {
        puStack_578 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_570 = 0xc2000000;
        pcStack_568 = FUN_105c841d8;
        puStack_560 = &UNK_11087bb60;
        _objc_retain(puVar12);
        puStack_558 = puVar12;
        func_0x00010007380c(lVar13,&puStack_578);
        puVar7 = puStack_558;
        goto LAB_105c84090;
      }
      (**(code **)(puVar12 + 0x10))(puVar12,1);
    }
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar7 = puVar11;
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 != (undefined *)0x0) {
      if (lVar13 == 0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar12 + 0x10))(puVar12,puVar7 == puVar8);
      }
      else {
        puStack_550 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_548 = 0xc2000000;
        pcStack_540 = FUN_105c84170;
        puStack_538 = &UNK_1107d0af0;
        _objc_retain(puVar12);
        puStack_528 = puVar12;
        _objc_retain(puVar7);
        puStack_530 = puVar7;
        func_0x00010007380c(lVar13,&puStack_550);
        _objc_release(puStack_530);
        puVar8 = puStack_528;
      }
      _objc_release(puVar8);
    }
LAB_105c84090:
    _objc_release(puVar7);
  }
LAB_105c840b0:
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(lVar13);
  _objc_release(puVar11);
  _objc_release(puVar16);
  return puVar16;
}



/* Entry: 105c838ac; end: 105c83e87; -[SCUserPropertiesDocRepository _removeUserPropertyWithItem:transactionContext:completionQueue:completionHandler:] */

void FUN_105c838ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  code *pcStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  code *pcStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_38c;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined4 uStack_358;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2e0;
  byte bStack_2de;
  byte bStack_2dd;
  undefined1 *puStack_2c0;
  undefined ***pppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar10 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar10);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126c3858);
  if (lVar10 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,lVar10);
  }
  puVar2 = &uStack_211;
  func_0x0001004fd544();
  uVar9 = param_3;
  func_0x00010c0844e0();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_DAT_110864b98;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  uStack_1f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_208 = 10;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_DAT_110864b38;
  pppuStack_1d0 = &ppuStack_288;
  lStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  puVar3 = &uStack_2f9;
  uStack_258 = uVar9;
  puStack_1d8 = puVar2;
  func_0x0001004fd5fc();
  uVar9 = param_3;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uStack_368 = 0xf;
  uStack_358 = 0x100;
  _objc_retain();
  ppuStack_370 = &PTR_SUB_110862760;
  uStack_330 = 0;
  uStack_338 = 0;
  uStack_320 = 0;
  uStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  bStack_2de = puVar3[0x1a];
  bStack_2dd = puVar3[0x1b];
  uStack_2f0 = 10;
  uStack_2e0 = 0x100;
  ppuStack_2f8 = &PTR_SUB_110862700;
  pppuStack_2b8 = &ppuStack_370;
  pppuStack_160 = &ppuStack_2f8;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  plStack_298 = (long *)0x0;
  uStack_2a0 = 0;
  plStack_290 = (long *)0x0;
  bStack_186 = (byte)uStack_1f6 | bStack_2de;
  bStack_185 = uStack_1f6._1_1_ & bStack_2dd;
  uStack_198 = 4;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_SUB_1108629c8;
  pppuStack_168 = &ppuStack_210;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_158 = 0;
  puStack_388 = (undefined8 *)0x0;
  puStack_380 = (undefined8 *)0x0;
  uStack_378 = 0;
  uStack_38c = 0;
  puVar12 = &uStack_130;
  uStack_340 = uVar9;
  puStack_2c0 = puVar3;
  func_0x0001000e77a0(puVar12,&ppuStack_1a0,&puStack_388,&uStack_38c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_388 != (undefined8 *)0x0) {
    puStack_380 = puStack_388;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_SUB_1108629c8;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_290;
  ppuStack_2f8 = &PTR_SUB_110862700;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_298;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_388 = &uStack_2b0;
  func_0x000100105004(&puStack_388);
  plVar1 = plStack_308;
  ppuStack_370 = &PTR_SUB_110862760;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_388 = &uStack_328;
  func_0x000100105004(&puStack_388);
  _objc_release(uStack_340);
  _objc_release(uVar9);
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_DAT_110864b38;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_DAT_110864b98;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  puVar13 = puVar12;
  func_0x00010bf529e0();
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = puVar12;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar12);
  _objc_release(param_3);
  _objc_release(lVar10);
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  _objc_retain(puVar13);
  puVar12 = &uStack_3d0;
  puVar7 = auStack_f8;
  lVar10 = 0x10;
  puVar4 = puVar13;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar11 = *plStack_3c0;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_3c0 != lVar11) {
          _objc_enumerationMutation(puVar13);
        }
        puVar8 = param_6;
        func_0x00010be8de40(param_1);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar4 != puVar12);
      puVar12 = &uStack_3d0;
      puVar7 = auStack_f8;
      lVar10 = 0x10;
      puVar4 = puVar13;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(param_6);
  _objc_release(param_5);
  lVar11 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume();
  _objc_retain(puVar12);
  _objc_retain(puVar7);
  _objc_retain(lVar10);
  _objc_retain(puVar8);
  if (puVar7 == (undefined *)0x0) {
    uVar9 = *(undefined8 *)(lVar11 + 0x10);
    _objc_retain(puVar12);
    _objc_retain(puVar8);
    func_0x00010c0f8500(uVar9);
    _objc_release(puVar8);
    puVar13 = puVar12;
    goto LAB_105c840b0;
  }
  puVar13 = (undefined8 *)PTR_PTR_1126c3888;
  FUN_105c871f4(PTR_PTR_1126c3888,puVar12);
  _objc_retainAutoreleasedReturnValue();
  if (puVar13 == (undefined8 *)0x0) {
    if (puVar8 != (undefined *)0x0) {
      if (lVar10 != 0) {
        puStack_4a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_4a0 = 0xc2000000;
        pcStack_498 = FUN_105c841d8;
        puStack_490 = &UNK_11087bb60;
        _objc_retain(puVar8);
        puStack_488 = puVar8;
        func_0x00010007380c(lVar10,&puStack_4a8);
        puVar5 = puStack_488;
        goto LAB_105c84090;
      }
      (**(code **)(puVar8 + 0x10))(puVar8,1);
    }
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar7;
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      if (lVar10 == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar8 + 0x10))(puVar8,puVar5 == puVar6);
      }
      else {
        puStack_480 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_478 = 0xc2000000;
        pcStack_470 = FUN_105c84170;
        puStack_468 = &UNK_1107d0af0;
        _objc_retain(puVar8);
        puStack_458 = puVar8;
        _objc_retain(puVar5);
        puStack_460 = puVar5;
        func_0x00010007380c(lVar10,&puStack_480);
        _objc_release(puStack_460);
        puVar6 = puStack_458;
      }
      _objc_release(puVar6);
    }
LAB_105c84090:
    _objc_release(puVar5);
  }
LAB_105c840b0:
  _objc_release(puVar13);
  _objc_release(puVar8);
  _objc_release(lVar10);
  _objc_release(puVar7);
  _objc_release(puVar12);
  return;
}



/* Entry: 105c83e88; end: 105c8416f; -[SCUserPropertiesDocRepository _removeUserProperty:transactionContext:completionQueue:completionHandler:] */

void FUN_105c83e88(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c0f8500(uVar4);
    _objc_release(param_6);
    puVar1 = param_3;
    goto LAB_105c840b0;
  }
  puVar1 = PTR_PTR_1126c3888;
  FUN_105c871f4(PTR_PTR_1126c3888,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_6 != (undefined *)0x0) {
      if (param_5 != 0) {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_105c841d8;
        puStack_a0 = &UNK_11087bb60;
        _objc_retain(param_6);
        puStack_98 = param_6;
        func_0x00010007380c(param_5,&puStack_b8);
        puVar2 = puStack_98;
        goto LAB_105c84090;
      }
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar2 = param_4;
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != (undefined *)0x0) {
      if (param_5 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,puVar2 == puVar3);
      }
      else {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_105c84170;
        puStack_78 = &UNK_1107d0af0;
        _objc_retain(param_6);
        puStack_68 = param_6;
        _objc_retain(puVar2);
        puStack_70 = puVar2;
        func_0x00010007380c(param_5,&puStack_90);
        _objc_release(puStack_70);
        puVar3 = puStack_68;
      }
      _objc_release(puVar3);
    }
LAB_105c84090:
    _objc_release(puVar2);
  }
LAB_105c840b0:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c84170; end: 105c841d7;  */

void FUN_105c84170(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1 == puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105c841d8; end: 105c841e7;  */

void FUN_105c841d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c841e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105c841e8; end: 105c8427b;  */

void FUN_105c841e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c3888;
  FUN_105c871f4(PTR_PTR_1126c3888,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c8427c; end: 105c8428f;  */

void FUN_105c8427c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c84288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c84290; end: 105c84367; -[SCUserPropertiesDocRepository _invokeCompletionOnQueue:withHandler:success:] */

void FUN_105c84290(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_5);
    }
  }
  else if (param_4 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105c84368;
    puStack_48 = &UNK_1108b5ae0;
    _objc_retain(param_4);
    uStack_38 = (undefined1)param_5;
    lStack_40 = param_4;
    func_0x00010007380c(param_3,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c84368; end: 105c8437b;  */

void FUN_105c84368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c84378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c8437c; end: 105c84427; -[SCUserPropertiesDocRepository .cxx_destruct] */

void FUN_105c8437c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c84428; end: 105c84ae3;  */

void FUN_105c84428(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105c84a88;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105c84aa8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105c84aa8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105c84a1c:
                    /* WARNING: Could not recover jumptable at 0x000105c84a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105c84a1c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x000105c84aa8;
    }
    goto code_r0x000105c84a9c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105c84a9c;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x000105c84aa8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105c84aa8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105c84ab8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105c84a88:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105c84a9c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105c84aa8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105c84ab8:
  return;
}



/* Entry: 105c84ae4; end: 105c84b6b;  */

void FUN_105c84ae4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105c84b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}


