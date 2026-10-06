/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f4726c; end: 105f4728f; -[SCMapTrayEvent copyWithZone:] */

undefined8 FUN_105f4726c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f47290; end: 105f472eb; -[SCMapTrayEvent hash] */

void FUN_105f47290(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ee210;
  puStack_70 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f472ec; end: 105f4732f; -[SCMapTrayEvent internalInit] */

void FUN_105f472ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ee210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f47330; end: 105f473e7; -[SCMapTrayEvent isEqual:] */

bool FUN_105f47330(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105f473e8; end: 105f4749b; -[SCMapTrayEvent matchWillChangeToPosition:didChangeToPosition:wasRemoved:] */

void FUN_105f473e8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f4749c; end: 105f475db; -[SCFullMapEntryPoint begin] */

void FUN_105f4749c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar1 = param_1;
  FUN_105f475dc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf70de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(puStack_58 + 3) == '\x01') {
    func_0x00010be0d2e0(param_1);
    func_0x00010bece020(param_1);
  }
  else {
    func_0x00010be0d160(param_1);
  }
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 105f475dc; end: 105f4765f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f475dc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273ae0c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f47660; end: 105f47673;  */

void FUN_105f47660(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105f47674; end: 105f47727; -[SCFullMapEntryPoint _exposeSecondaryMapScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47674(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c6378;
  _objc_alloc_init(PTR_PTR_1126c6378);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11273ae10;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar5;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11273adf4;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar5);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f47728; end: 105f47803; -[SCFullMapEntryPoint _exposePrimaryMapScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47728(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273ae08;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = param_1 + _DAT_11273adf8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf164e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109021b74();
  lVar4 = lVar6;
  func_0x00010bf23360(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273ae14);
  }
  func_0x00010bf9d620(uVar5,param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105f47804; end: 105f47983; -[SCFullMapEntryPoint _trackPrimacyChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47804(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1;
  FUN_105f475dc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dfbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70de0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar7 = lVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273adfc);
  *(long *)(param_1 + _DAT_11273adfc) = lVar7;
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105f47984; end: 105f47a2f;  */

void FUN_105f47984(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0be760(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f47a30; end: 105f47a5b;  */

void FUN_105f47a30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f47a5c; end: 105f47b6f; -[SCFullMapEntryPoint _switchedToPrimary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47a5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = (long)_DAT_11273adfc;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273adf4);
  *(undefined8 *)(param_1 + _DAT_11273adf4) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_11273ae00;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f47b70; end: 105f47b9b;  */

void FUN_105f47b70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f47b9c; end: 105f47c33; -[SCFullMapEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47b9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ae14,0);
  _objc_destroyWeak(param_1 + _DAT_11273ae10);
  _objc_destroyWeak(param_1 + _DAT_11273ae0c);
  _objc_destroyWeak(param_1 + _DAT_11273adf8);
  _objc_destroyWeak(param_1 + _DAT_11273ae08);
  _objc_destroyWeak(param_1 + _DAT_11273ae04);
  _objc_destroyWeak(param_1 + _DAT_11273ae00);
  _objc_storeStrong(param_1 + _DAT_11273adf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273adfc,0);
  return;
}



/* Entry: 105f47c34; end: 105f47e93; -[SCMapTileEvictionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47c34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_1 + _DAT_11273ae18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273ae1c;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ba100();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c25e100();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105f47e94;
  puStack_90 = &UNK_1108fa8c8;
  _objc_retain(lVar2);
  lStack_88 = lVar2;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar7 = lVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273ae20);
  *(long *)(param_1 + _DAT_11273ae20) = lVar7;
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c153080();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  lVar4 = lVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273ae24);
  *(long *)(param_1 + _DAT_11273ae24) = lVar4;
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_88);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105f47e94; end: 105f47f03;  */

void FUN_105f47e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153060();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde1140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f47f04; end: 105f47f4b;  */

void FUN_105f47f04(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde1140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f47f4c; end: 105f47fa3; -[SCMapTileEvictionEntryPoint _clearTileCache] */

void FUN_105f47f4c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f47fa4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105f47fa4; end: 105f48097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f47fa4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11273ae1c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a7c0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11273ae18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8020();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f48098; end: 105f480fb; -[SCMapTileEvictionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f48098(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ae1c);
  _objc_destroyWeak(param_1 + _DAT_11273ae18);
  _objc_destroyWeak(param_1 + _DAT_11273ae28);
  _objc_storeStrong(param_1 + _DAT_11273ae24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ae20,0);
  return;
}



/* Entry: 105f480fc; end: 105f484fb; -[SCMapViewEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f480fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e328f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105f484fc;
  puStack_88 = &UNK_1108fa8f8;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11273ae2c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf39900();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000109021c18();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if ((int)lVar6 != 0) {
    func_0x00010bf57500(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c6380;
  _objc_alloc(PTR_PTR_1126c6380);
  func_0x00010c0288a0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273ae30));
  puVar9 = PTR_PTR_1126c6388;
  _objc_alloc();
  func_0x00010c028860();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273ae34);
  *(undefined **)(param_1 + _DAT_11273ae34) = puVar9;
  _objc_release(uVar10);
  puVar9 = PTR_PTR_1126c6390;
  _objc_alloc();
  func_0x00010c028860();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273ae38);
  *(undefined **)(param_1 + _DAT_11273ae38) = puVar9;
  _objc_release(uVar10);
  puVar9 = PTR_PTR_1126c6398;
  _objc_alloc();
  func_0x00010c028860();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273ae3c);
  *(undefined **)(param_1 + _DAT_11273ae3c) = puVar9;
  _objc_release(uVar10);
  lVar3 = param_1 + _DAT_11273ae58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126aa0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11273ae58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125d60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11273ae58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126aa0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  param_1 = param_1 + _DAT_11273ae58;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125d60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f484fc; end: 105f4853b;  */

void FUN_105f484fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f4853c; end: 105f485ab;  */

void FUN_105f4853c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdef840(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f485ac; end: 105f48893; -[SCMapViewEntryPoint _mapViewWithViewportMetadataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f485ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar10;
  long lVar11;
  long lVar9;
  
  lVar11 = (long)_DAT_11273ae40;
  _objc_retain(param_4);
  lVar11 = param_2 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar11;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c63a0;
  func_0x00010c24b660(PTR_PTR_1126c63a0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf1f360(lVar4,param_3,puVar5);
  if ((int)lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    lVar6 = param_2 + _DAT_11273ae2c;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf39900();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x0001005929c0();
    uVar2 = (uint)lVar9;
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  if (param_2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_2 + _DAT_11273ae74;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010bf387a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c07c820();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  uVar1 = 1;
  if (((uVar2 | (uint)lVar6) & 1) != 0) {
    uVar1 = 2;
  }
  puVar5 = PTR_PTR_1126c63a8;
  _objc_alloc(PTR_PTR_1126c63a8);
  lVar11 = param_2 + _DAT_11273ae44;
  _objc_loadWeakRetained();
  func_0x00010c0c25c0();
  lVar3 = param_2 + _DAT_11273ae48;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010c0d5a80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + _DAT_11273ae2c;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + _DAT_11273ae4c;
  _objc_loadWeakRetained(param_2);
  lVar9 = param_2;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0148c0(0,0,0x4070000000000000,0x4070000000000000,param_1,puVar5,param_3,lVar7,lVar8,
                      param_4,lVar10,uVar1);
  _objc_release(param_4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_2);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f48894; end: 105f48b23; -[SCMapViewEntryPoint _createMapboxView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f48894(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32918);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c63b0;
  _objc_alloc(PTR_PTR_1126c63b0);
  if (param_1 == 0) {
    lVar9 = 0;
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11273ae64;
    _objc_loadWeakRetained(lVar8);
    lVar9 = param_1 + _DAT_11273ae68;
    _objc_loadWeakRetained(lVar9);
    lVar10 = param_1 + _DAT_11273ae4c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010c0ba3e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11273ae6c;
    _objc_loadWeakRetained(lVar11);
  }
  lVar4 = lVar11;
  func_0x00010c25c920(lVar11);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11273ae70;
    _objc_loadWeakRetained(lVar12);
  }
  lVar5 = lVar12;
  func_0x00010bfa2b80(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4840(puVar2,param_2,lVar8,lVar9,lVar3,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010be5d080(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c63b8;
  func_0x00010c2bd7a0(PTR_PTR_1126c63b8,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273ae50;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064a60(lVar8,param_2,puVar7,puVar2,0,puVar6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105f48b24; end: 105f48c4b; -[SCMapViewEntryPoint _createLoadTrackerWithMapInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f48b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c63c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0b9340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0b90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0b9a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11273ae5c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010bf07a00(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aeea8;
  _objc_alloc_init(PTR_PTR_1126aeea8);
  func_0x00010c0283a0(puVar1,param_2,uVar2,uVar3,uVar4,lVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f48c4c; end: 105f48d5f; -[SCMapViewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f48c4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ae30,0);
  _objc_destroyWeak(param_1 + _DAT_11273ae74);
  _objc_destroyWeak(param_1 + _DAT_11273ae40);
  _objc_destroyWeak(param_1 + _DAT_11273ae50);
  _objc_destroyWeak(param_1 + _DAT_11273ae70);
  _objc_destroyWeak(param_1 + _DAT_11273ae6c);
  _objc_destroyWeak(param_1 + _DAT_11273ae4c);
  _objc_destroyWeak(param_1 + _DAT_11273ae68);
  _objc_destroyWeak(param_1 + _DAT_11273ae64);
  _objc_destroyWeak(param_1 + _DAT_11273ae60);
  _objc_destroyWeak(param_1 + _DAT_11273ae5c);
  _objc_destroyWeak(param_1 + _DAT_11273ae58);
  _objc_destroyWeak(param_1 + _DAT_11273ae54);
  _objc_destroyWeak(param_1 + _DAT_11273ae48);
  _objc_destroyWeak(param_1 + _DAT_11273ae2c);
  _objc_destroyWeak(param_1 + _DAT_11273ae44);
  _objc_storeStrong(param_1 + _DAT_11273ae3c,0);
  _objc_storeStrong(param_1 + _DAT_11273ae38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ae34,0);
  return;
}



/* Entry: 105f48d60; end: 105f4910f; -[SCMapLoadTracker initWithMapLoadingState:mapFriendLoadState:mapReadyState:applicationLifecycleEvents:timeProvider:] */

undefined8 *
FUN_105f48d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126ee218;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c63c8;
    _objc_alloc();
    func_0x00010bff3b60();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c63c8;
    _objc_alloc();
    func_0x00010bff3b60();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c63c8;
    _objc_alloc();
    func_0x00010bff3b60();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c63c8;
    _objc_alloc();
    func_0x00010bff3b60();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c63c8;
    _objc_alloc();
    func_0x00010bff3b60();
    uVar4 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    _objc_release(uVar4);
    func_0x00010bdf4f60(puVar1);
    _objc_initWeak(auStack_90,puVar1);
    uVar4 = param_5;
    func_0x00010c0b9a00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105f49110;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar3 = uVar4;
    func_0x00010c25ff20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c0b90a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105f4913c;
    puStack_c8 = &UNK_110842a38;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar3 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[7];
    puVar1[7] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c09d420();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar3 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x10];
    puVar1[0x10] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f49110; end: 105f49183;  */

void FUN_105f49110(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f49184; end: 105f49237;  */

void FUN_105f49184(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bec40(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f49238; end: 105f4923b;  */

void FUN_105f49238(void)

{
  return;
}



/* Entry: 105f4923c; end: 105f49267;  */

void FUN_105f4923c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f49268; end: 105f4926b;  */

void FUN_105f49268(void)

{
  return;
}



/* Entry: 105f4926c; end: 105f492bb; -[SCMapLoadTracker startTracking] */

/* WARNING: Possible PIC construction at 0x000105f49288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f49298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f492a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f4929c) */
/* WARNING: Removing unreachable block (ram,0x000105f4928c) */
/* WARNING: Removing unreachable block (ram,0x000105f492ac) */

void FUN_105f4926c(long param_1)

{
  func_0x00010c24f360(*(undefined8 *)(param_1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105f492bc; end: 105f492e3; -[SCMapLoadTracker didRequestFriendLocations] */

void FUN_105f492bc(long param_1)

{
  func_0x00010c24f360(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105f492e4; end: 105f49333; -[SCMapLoadTracker didReceiveFriendLocations] */

void FUN_105f492e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf94d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c24f360(*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105f49334; end: 105f4935f; -[SCMapLoadTracker cancelTracking] */

void FUN_105f49334(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x00010bdf4f60();
                    /* WARNING: Could not recover jumptable at 0x00010bddaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelTrackers_112554578);
  return;
}



/* Entry: 105f49360; end: 105f49387; -[SCMapLoadTracker mapReadyObservable] */

void FUN_105f49360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f49388; end: 105f493af; -[SCMapLoadTracker mapFriendLoadObservable] */

void FUN_105f49388(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f493b0; end: 105f493d7; -[SCMapLoadTracker mapDidLoadObservable] */

void FUN_105f493b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f493d8; end: 105f49483; -[SCMapLoadTracker _onMapReadyReported] */

void FUN_105f493d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf94d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126c63d0;
    _objc_alloc(PTR_PTR_1126c63d0);
    lVar3 = lVar1;
    func_0x00010c2827c0(lVar1);
    func_0x00010c00eb80(puVar2,param_2,lVar3,*(undefined1 *)(param_1 + 8));
    func_0x00010c0d9840(uVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar4);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c18da60(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f49484; end: 105f4951b; -[SCMapLoadTracker _onNoFriendsToLoad] */

void FUN_105f49484(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  func_0x00010bf95c00(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126c63d8;
  func_0x00010c0da820(PTR_PTR_1126c63d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c18d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDidLoadFriend__112641030,1);
  return;
}



/* Entry: 105f4951c; end: 105f4962f; -[SCMapLoadTracker _onFirstFriendLoaded] */

void FUN_105f4951c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf94d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf94d60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010bf95c00(*(undefined8 *)(param_1 + 0x48),param_2,
                      &PTR____CFConstantStringClassReference_110e32958);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126c63d8;
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = lVar1;
    func_0x00010c2827c0(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c2827c0(uVar5);
    uVar3 = uVar2;
    func_0x00010c2827c0(uVar2);
    func_0x00010bfb1420(puVar6,param_2,lVar4,uVar5,uVar3,*(undefined1 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar7,param_2,puVar6);
    _objc_release(puVar6);
  }
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c18d840(param_1,param_2,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f49630; end: 105f49663; -[SCMapLoadTracker _onMapTilesLoaded] */

void FUN_105f49630(long param_1)

{
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c18d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDidLoadMapTiles__112641038,1);
  return;
}



/* Entry: 105f49664; end: 105f4966b; -[SCMapLoadTracker setDidReadyMap:] */

void FUN_105f49664(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bddd310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndReportMapLoadIfNeeded_112554e60);
  return;
}



/* Entry: 105f4966c; end: 105f49673; -[SCMapLoadTracker setDidLoadFriend:] */

void FUN_105f4966c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bddd310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndReportMapLoadIfNeeded_112554e60);
  return;
}



/* Entry: 105f49674; end: 105f4967b; -[SCMapLoadTracker setDidLoadMapTiles:] */

void FUN_105f49674(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bddd310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndReportMapLoadIfNeeded_112554e60);
  return;
}



/* Entry: 105f4967c; end: 105f49737; -[SCMapLoadTracker _checkAndReportMapLoadIfNeeded] */

void FUN_105f4967c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf78fa0();
  if ((((int)lVar1 != 0) && (lVar1 = param_1, func_0x00010bf77920(), (int)lVar1 != 0)) &&
     (lVar1 = param_1, func_0x00010bf779e0(), (int)lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x90);
    func_0x00010bf94d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x98));
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      puVar2 = PTR_PTR_1126c63d0;
      _objc_alloc(PTR_PTR_1126c63d0);
      lVar3 = lVar1;
      func_0x00010c2827c0(lVar1);
      func_0x00010c00eb80(puVar2,param_2,lVar3,*(undefined1 *)(param_1 + 8));
      func_0x00010c0d9840(uVar4,param_2,puVar2);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105f49738; end: 105f4983b; -[SCMapLoadTracker _createTraces] */

void FUN_105f49738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110e32978);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110e32998);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110e329b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110e329d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110e329f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f4983c; end: 105f4987b; -[SCMapLoadTracker _cancelTrackers] */

/* WARNING: Possible PIC construction at 0x000105f49850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f49860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f49854) */
/* WARNING: Removing unreachable block (ram,0x000105f49864) */

void FUN_105f4983c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelMeasuringIfStarted_1125a9370);
  return;
}



/* Entry: 105f4987c; end: 105f49883; -[SCMapLoadTracker didReadyMap] */

undefined1 FUN_105f4987c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 105f49884; end: 105f4988b; -[SCMapLoadTracker didLoadFriend] */

undefined1 FUN_105f49884(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



/* Entry: 105f4988c; end: 105f49893; -[SCMapLoadTracker didLoadMapTiles] */

undefined1 FUN_105f4988c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa2);
}



/* Entry: 105f49894; end: 105f49983; -[SCMapLoadTracker .cxx_destruct] */

void FUN_105f49894(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f49984; end: 105f49a37; -[SCMapBrowsingContextManager initWithMapSDKSession:] */

undefined1 * FUN_105f49984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee220;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010bebf740(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f49a38; end: 105f49abb; -[SCMapBrowsingContextManager setDefaultBrowsingContext] */

void FUN_105f49a38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c63e0;
  _objc_alloc_init(PTR_PTR_1126c63e0);
  puVar2 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c18aec0();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32a18);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110dc3a38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49abc; end: 105f49b3f; -[SCMapBrowsingContextManager setBitmojiTrayBrowsingContext] */

void FUN_105f49abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c63e8;
  _objc_alloc_init(PTR_PTR_1126c63e8);
  puVar2 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c171760();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32a38);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32a58);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49b40; end: 105f49c13; -[SCMapBrowsingContextManager setFilteredBrowsingContextWithVisibleFriendIDs:hideOtherFriendData:] */

void FUN_105f49b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c63f0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c223a00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1a82a0(puVar1,param_2,param_4);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c19c7e0();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32a78);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32a98);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49c14; end: 105f49cff; -[SCMapBrowsingContextManager setFocusViewBrowsingContextWithFocusedFeatureID:focusedFeatureCoordinates:] */

void FUN_105f49c14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c63f8;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c19e280();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126bf1b8;
  _objc_alloc_init(PTR_PTR_1126bf1b8);
  func_0x00010c1b9120(param_1);
  func_0x00010c1be5e0(param_2,puVar2);
  func_0x00010c19e260(puVar1,param_4,puVar2);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c19e180();
  func_0x00010c1c1f00(*(undefined8 *)(param_3 + 8),param_4,puVar3);
  func_0x00010bebf740(param_3,param_4,&PTR____CFConstantStringClassReference_110e32ab8);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x10),param_4,
                      &PTR____CFConstantStringClassReference_110e32ad8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49d00; end: 105f49dc7; -[SCMapBrowsingContextManager setPlacesTrayBrowsingContextWithFocusedPlaceIDs:] */

void FUN_105f49d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6400;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c19e320(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c21a000(puVar1,param_2,0);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c1dce40();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32af8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32b18);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49dc8; end: 105f49e83; -[SCMapBrowsingContextManager setFriendsTrayBrowsingContextWithVisibleFriendIDs:] */

void FUN_105f49dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6408;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c223a00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c1a0b60();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32b38);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32b58);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49e84; end: 105f49f5f; -[SCMapBrowsingContextManager setPlaceProfileBrowsingContextWithFocusedPlaceID:particleEffectURL:fromSearch:] */

void FUN_105f49e84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6410;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c19e300();
  _objc_release(param_3);
  func_0x00010c1d93c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a1040(puVar1,param_2,param_5);
  puVar2 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c1dc6a0();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32b78);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32b98);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f49f60; end: 105f4a003; -[SCMapBrowsingContextManager setHomeSettingsBrowsingContextWithType:] */

void FUN_105f49f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1e00;
  _objc_alloc_init(PTR_PTR_1126b1e00);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c1a8ec0();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32bb8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32bd8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a004; end: 105f4a08b; -[SCMapBrowsingContextManager setHomeProfileBrowsingContext] */

void FUN_105f4a004(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  puVar2 = PTR_PTR_1126c6418;
  _objc_alloc_init(PTR_PTR_1126c6418);
  func_0x00010c1a8e20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32bf8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a08c; end: 105f4a147; -[SCMapBrowsingContextManager setMapSnapshotBrowsingContextWithVisibleFriendIDs:] */

void FUN_105f4a08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6420;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c223a00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c1c2640();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32c38);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32c58);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a148; end: 105f4a1cf; -[SCMapBrowsingContextManager setMemoriesLayerBrowsingContext] */

void FUN_105f4a148(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  puVar2 = PTR_PTR_1126c6428;
  _objc_alloc_init(PTR_PTR_1126c6428);
  func_0x00010c1c6680(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32c78);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32c98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a1d0; end: 105f4a257; -[SCMapBrowsingContextManager setFootstepsModeBrowsingContext] */

void FUN_105f4a1d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  puVar2 = PTR_PTR_1126c6430;
  _objc_alloc_init(PTR_PTR_1126c6430);
  func_0x00010c19e780(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32cb8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a258; end: 105f4a313; -[SCMapBrowsingContextManager setUserPreviewBrowsingContextWithVisibleFriendIDs:] */

void FUN_105f4a258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6438;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c223a00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  func_0x00010c21ef20();
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32cf8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32d18);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a314; end: 105f4a39b; -[SCMapBrowsingContextManager setDropsTrayBrowsingContext] */

void FUN_105f4a314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1df8;
  _objc_alloc_init(PTR_PTR_1126b1df8);
  puVar2 = PTR_PTR_1126c6440;
  _objc_alloc_init(PTR_PTR_1126c6440);
  func_0x00010c192160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1c1f00(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010bebf740(param_1,param_2,&PTR____CFConstantStringClassReference_110e32d38);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e32d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4a39c; end: 105f4a3c3; -[SCMapBrowsingContextManager browsingContextDebugObservable] */

void FUN_105f4a39c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f4a3c4; end: 105f4a42f; -[SCMapBrowsingContextManager dealloc] */

void FUN_105f4a3c4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
  _os_unfair_lock_unlock(param_1 + 0x18);
  puStack_28 = PTR_PTR_1126ee220;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105f4a430; end: 105f4a4b7; -[SCMapBrowsingContextManager _startAsyncContext:] */

void FUN_105f4a430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + 0x20));
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f4a4b8; end: 105f4a4f3; -[SCMapBrowsingContextManager .cxx_destruct] */

void FUN_105f4a4b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f4a4f4; end: 105f4a573; +[SCSDKObserverWrapper wrapping:] */

void FUN_105f4a4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  _objc_alloc(param_1);
  puVar1 = auStack_28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c030dc0(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f4a574; end: 105f4a607; -[SCSDKObserverWrapper initWithObserver:] */

undefined8 * FUN_105f4a574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  puStack_30 = PTR_PTR_1126ee228;
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_28);
  return puVar1;
}



/* Entry: 105f4a608; end: 105f4a633; -[SCSDKObserverWrapper onMapReady] */

void FUN_105f4a608(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e5120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4a634; end: 105f4a67b; -[SCSDKObserverWrapper onInitialMapFriendsLoad:] */

void FUN_105f4a634(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e48c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4a67c; end: 105f4a683; -[SCSDKObserverWrapper .cxx_destruct] */

void FUN_105f4a67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f4a684; end: 105f4a7cf;  */

void FUN_105f4a684(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_105f4a7d0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_2;
    func_0x00010c0dff20(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126c6448;
  _objc_alloc(PTR_PTR_1126c6448);
  uVar3 = param_1;
  func_0x000105f4a844(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_105f4a938(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000105f4aa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_105f4aabc(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c026a80(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f4a7d0; end: 105f4a937;  */

void FUN_105f4a7d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfd8980();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c09e300(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c09e320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f4a938; end: 105f4aabb;  */

void FUN_105f4a938(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfdd640();
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c6458;
    _objc_alloc(PTR_PTR_1126c6458);
    uVar1 = param_1;
    func_0x00010c270d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c270d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e1d60();
    func_0x00010c01b6e0((double)(int)uVar4,puVar5,param_2,uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f4aabc; end: 105f4ab57;  */

void FUN_105f4aabc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfde940();
  puVar3 = PTR_PTR_1126bf318;
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c2bd580(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c297920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b76a0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f4ab58; end: 105f4ad9f;  */

void FUN_105f4ab58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfdd000();
  puVar8 = PTR____NSDictionary0__struct_11034ab58;
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c262900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfdaba0();
    puVar8 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010c118f20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c262960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(lVar3);
      lVar5 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar5 != 0) {
        lVar12 = *plStack_120;
        do {
          lVar10 = 0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(lVar3);
            }
            lVar11 = *(long *)(lStack_128 + lVar10 * 8);
            lVar6 = lVar11;
            func_0x00010c2a1200();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf86540();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c08fa60();
            if ((lVar7 != 0) && (lVar7 = lVar11, func_0x00010c08fa60(), lVar7 != 0)) {
              puVar8 = PTR_PTR_1126c6468;
              _objc_alloc(PTR_PTR_1126c6468);
              func_0x00010c026aa0();
              func_0x00010c1d0640(puVar4,param_2,puVar8,lVar6);
              _objc_release(puVar8);
            }
            _objc_release(lVar11);
            _objc_release(lVar6);
            lVar10 = lVar10 + 1;
          } while (lVar5 != lVar10);
          lVar5 = lVar3;
          func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar5 != 0);
      }
      _objc_release(lVar3);
      puVar8 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_retain(puVar8);
    _objc_release(lVar1);
  }
  _objc_release(puVar8);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126c6448;
    _objc_retain();
    _objc_alloc(puVar8);
    lVar1 = param_1;
    func_0x000105f4a844(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_105f4a938(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x000105f4aa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    FUN_105f4aabc(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126c6468;
    _objc_alloc(PTR_PTR_1126c6468);
    puVar9 = puVar4;
    func_0x000105f4d4fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026aa0(puVar4,param_2,puVar9,1);
    _objc_release(puVar9);
    func_0x00010c026a80(puVar8,param_2,lVar1,lVar2,lVar3,lVar5,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105f4ada0; end: 105f4aecb;  */

void FUN_105f4ada0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c6448;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x000105f4a844(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_105f4a938(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x000105f4aa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105f4aabc(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126c6468;
  _objc_alloc(PTR_PTR_1126c6468);
  puVar7 = puVar6;
  func_0x000105f4d4fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026aa0(puVar6,param_2,puVar7,1);
  _objc_release(puVar7);
  func_0x00010c026a80(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f4aecc; end: 105f4b197; -[SCMapViewportMetadataProviderUpdate initWithAsyncQueueServices:grpcService:mapUserPreferences:footstepsMemoryStreamServices:featureSettingsService:] */

undefined8 *
FUN_105f4aecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ee230;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar7);
    uVar7 = param_3;
    func_0x00010bf0c120(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126bc1b8;
    uVar7 = param_4;
    func_0x00010bfcfa00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106b139c8(puVar2,&PTR____CFConstantStringClassReference_110e32d78,uVar4,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126bc240;
    _objc_alloc();
    func_0x00010c058f80();
    uVar7 = puVar1[2];
    puVar1[2] = puVar5;
    _objc_release(uVar7);
    uVar7 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bfb45c0();
    _objc_release(uVar7);
    if ((int)uVar3 == 0) {
      _objc_initWeak(auStack_78,puVar1);
      uVar7 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c266660();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_78);
      uVar6 = uVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar1[7];
      puVar1[7] = uVar6;
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    else {
      func_0x00010be10bc0(puVar1);
      func_0x00010bec0620(puVar1);
    }
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f4b198; end: 105f4b1f7;  */

void FUN_105f4b198(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252d60(param_2);
  _objc_release(param_2);
  func_0x00010be29ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4b1f8; end: 105f4b323; -[SCMapViewportMetadataProviderUpdate _updateViewportMetadataOnMainThreadWithViewportInfo:footstepsActivityDictionary:isSyncingMemories:] */

void FUN_105f4b1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f88c0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f4b324; end: 105f4b35b;  */

void FUN_105f4b324(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4b35c; end: 105f4b41f; -[SCMapViewportMetadataProviderUpdate _updateViewportMetadataWithViewportInfo:footstepsActivityDictionary:isSyncingMemories:] */

void FUN_105f4b35c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  *(char *)(param_1 + 0x40) = (char)param_5;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_5 == 0) {
    FUN_105f4a684(uVar1,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_105f4ada0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f4b420; end: 105f4b51f; -[SCMapViewportMetadataProviderUpdate _fetchCurrentUserFootstepsSummary] */

void FUN_105f4b420(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126c6470;
  _objc_alloc_init(PTR_PTR_1126c6470);
  func_0x00010c19ec40();
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc5b40(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f4b520; end: 105f4b587;  */

void FUN_105f4b520(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29ee0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4b588; end: 105f4b5e3; -[SCMapViewportMetadataProviderUpdate _handleFootstepsRequestCompletionWithResponse:error:] */

void FUN_105f4b588(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  if ((param_3 != 0) && (param_4 == 0)) {
    FUN_105f4ab58();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      func_0x00010bee3ee0(param_1,param_2,*(undefined8 *)(param_1 + 0x20),param_3,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105f4b5e4; end: 105f4b65f; -[SCMapViewportMetadataProviderUpdate _handleFootstepsMemorySyncStatusUpdate:] */

void FUN_105f4b5e4(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  func_0x00010be59980();
  bVar1 = *(byte *)(param_1 + 0x40);
  if ((param_3 == 1) != (bool)bVar1) {
    func_0x00010bee3ee0(param_1);
  }
  if ((param_3 != 1 & bVar1) != 0) {
    func_0x00010be10bc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startMonitoringForFootstepsData_11258db30)
    ;
    return;
  }
  return;
}



/* Entry: 105f4b660; end: 105f4b663; -[SCMapViewportMetadataProviderUpdate _logSyncStatus:] */

void FUN_105f4b660(void)

{
  return;
}



/* Entry: 105f4b664; end: 105f4b763; -[SCMapViewportMetadataProviderUpdate _startMonitoringForFootstepsDataRemoval] */

void FUN_105f4b664(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153080();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f4b764; end: 105f4b7d3;  */

void FUN_105f4b764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    func_0x00010bee3ee0(param_1);
    func_0x00010be10bc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f4b7d4; end: 105f4b7df; -[SCMapViewportMetadataProviderUpdate onNewViewportInfo:] */

void FUN_105f4b7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateViewportMetadataOnMainThr_112596960,param_3,
             *(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 105f4b7e0; end: 105f4b807; -[SCMapViewportMetadataProviderUpdate viewportMetadataObservable] */

void FUN_105f4b7e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


