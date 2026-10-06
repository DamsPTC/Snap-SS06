/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10557c3a8; end: 10557c47f;  */

void FUN_10557c3a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10557c480; end: 10557c523;  */

void FUN_10557c480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10557c524; end: 10557c71f; -[CTPItemsLoaderCompute _itemsGroupFromResultSection:] */

void FUN_10557c524(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105576944;
  uStack_60 = 0x105576954;
  uStack_58 = 0;
  lVar1 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c0beee0(lVar3);
  }
  puVar4 = PTR_PTR_1126badc0;
  _objc_alloc(PTR_PTR_1126badc0);
  func_0x00010bf85520(param_3);
  func_0x00010bebbf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f0e0(param_3);
  func_0x00010c27dd80(param_3);
  func_0x00010c0531c0(puVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10557c720; end: 10557c78f;  */

void FUN_10557c720(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10557c790; end: 10557c827; -[CTPItemsLoaderCompute _shuffleIfNeededItemsFromItems:withDisplayCount:] */

void FUN_10557c790(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (((long)param_4 < 1) || (uVar1 = param_3, func_0x00010bf529e0(), uVar1 <= param_4)) {
    _objc_retain(param_3);
    uVar1 = param_3;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0d3c80(param_3);
    func_0x00010c23b4a0();
    uVar1 = uVar2;
    func_0x00010c25e980(uVar2,param_2,0,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10557c828; end: 10557c933; -[CTPItemsLoaderCompute _itemFromPersistedItem:] */

void FUN_10557c828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf5d7e0(uVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126badc8;
  func_0x00010c084440(PTR_PTR_1126badc8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2b70c0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10557c934; end: 10557c9cb; -[CTPItemsLoaderCompute _itemsFromResultItems:withFeed:] */

void FUN_10557c934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10557c9cc;
  puStack_48 = &UNK_110898348;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bd86420(param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10557c9cc; end: 10557caef;  */

void FUN_10557c9cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  pcStack_48 = FUN_105576944;
  uStack_40 = 0x105576954;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0beee0(param_2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10557caf0; end: 10557cbfb;  */

void FUN_10557caf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf5d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  _objc_release(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126badc8;
  func_0x00010c084440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b70c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10557cbfc; end: 10557cc67;  */

void FUN_10557cbfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be45c80(lVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be45cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10557cc68; end: 10557ccdb; -[CTPItemsLoaderCompute _flatItemsGroupFromItems:feedName:] */

void FUN_10557cc68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126badc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0531c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557ccdc; end: 10557d0a7; -[CTPItemsLoaderCompute _itemsGroupForPersistedSection:reverseItems:timestamp:] */

void FUN_10557ccdc(double param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                  ulong param_6)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  uint uStack_15c;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  uStack_15c = param_5;
  lStack_148 = param_2;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_150 = puVar2;
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_158 = param_4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        lVar12 = *(long *)(lStack_138 + lVar11 * 8);
        if (((param_6 == 0) || (lVar4 = lVar12, func_0x00010bf3cba0(), lVar4 == 0)) ||
           (lVar4 = lVar12, func_0x00010bf3cba0(),
           (double)(long)(param_1 / 60.0) - (double)param_6 <= (double)lVar4)) {
          lVar5 = *(long *)(lStack_148 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar12;
          func_0x00010bf63640(lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf5d7e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar5);
          if (lVar6 != 0) {
            puVar2 = PTR_PTR_1126badc8;
            func_0x00010c084440(PTR_PTR_1126badc8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c135700(lVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c2b70c0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            _objc_release(puVar7);
            _objc_release(lVar12);
            _objc_release(puVar2);
            func_0x00010befa120(puStack_150);
            _objc_release(puVar8);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = param_4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  lVar3 = lStack_158;
  lVar9 = lStack_158;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar11 = lVar3;
    func_0x00010c0cc0c0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cc60();
    _objc_release(lVar11);
  }
  _objc_release(lVar9);
  lVar9 = lVar3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c156360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar9);
  lVar9 = lVar3;
  func_0x00010c0cc0c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85520();
  lVar11 = lStack_148;
  func_0x00010bebbf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar2 = PTR_PTR_1126badc0;
  _objc_alloc(PTR_PTR_1126badc0);
  uVar1 = uStack_15c;
  uVar10 = (ulong)uStack_15c;
  lVar9 = lVar11;
  if (uStack_15c != 0) {
    func_0x00010c140200(lVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  lVar6 = lVar12;
  func_0x00010c0531c0(puVar2);
  _objc_release(lVar4);
  if (uVar1 != 0) {
    _objc_release(lVar9);
  }
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(puStack_150);
  lVar9 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lStack_180 = lVar3;
    pcStack_168 = FUN_10557d0a8;
    lStack_190 = lVar11;
    uStack_188 = uVar10;
    lStack_178 = lVar4;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(lVar6);
    _objc_initWeak(auStack_198,lVar9);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_retain(lVar6);
    _objc_copyWeak(auStack_1a0,auStack_198);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_1a0);
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_198);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10557d0a8; end: 10557d197; -[CTPItemsLoaderCompute _fetchPersistenceItemsFromCacheForFeed:] */

void FUN_10557d0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557d198; end: 10557d2df;  */

void FUN_10557d198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c156ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010c297260(uVar3);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10557d2e0; end: 10557d4b7;  */

void FUN_10557d2e0(long param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  long lVar6;
  long lVar7;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    puVar1 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    if (puVar1 != (undefined *)0x0) {
      unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
      _objc_retain(param_2);
      param_4 = auStack_e8;
      lVar2 = param_2;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar6 = *plStack_120;
        do {
          lVar7 = 0;
          do {
            if (*plStack_120 != lVar6) {
              _objc_enumerationMutation(param_2);
            }
            unaff_x24 = *(undefined8 *)(lStack_128 + lVar7 * 8);
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(unaff_x22);
            _objc_release(unaff_x24);
            lVar7 = lVar7 + 1;
          } while (lVar2 != lVar7);
          param_4 = auStack_e8;
          lVar2 = param_2;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(param_2);
      param_1 = *(long *)(param_1 + 0x20);
      unaff_x23 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x23;
      func_0x00010c0d9840(param_1);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
    }
  }
  else {
    param_1 = *(long *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0d9840(param_1);
  }
  _objc_release(puVar1);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10557d4b8;
  uStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = puVar1;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_105576944;
  uStack_180 = 0x105576954;
  uStack_178 = 0;
  uVar3 = *(undefined8 *)(lVar2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf15da0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0843a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_retain(param_4);
  func_0x00010c0c0800(uVar4);
  uVar3 = puStack_198[5];
  _objc_retain(uVar3);
  _objc_release(param_4);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  _objc_release(param_4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10557d4b8; end: 10557d633; -[CTPItemsLoaderCompute _itemFromCachedItemId:withFeed:] */

void FUN_10557d4b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105576944;
  uStack_50 = 0x105576954;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf15da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0843a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_retain(param_4);
  func_0x00010c0c0800(uVar2);
  uVar3 = puStack_68[5];
  _objc_retain(uVar3);
  _objc_release(param_4);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10557d634; end: 10557d82f;  */

void FUN_10557d634(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar10 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar10 == 0) {
LAB_10557d7e0:
      _objc_release(param_2);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar12 = *(long *)(lVar11 * 8);
      lVar2 = lVar12;
      func_0x00010bfa3dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27dd80();
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c27dd80();
      if (lVar3 == lVar5) {
        lVar3 = lVar12;
        func_0x00010bfa3dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf4e080();
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf4e080();
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(lVar4);
        _objc_release(lVar2);
        if (lVar5 == lVar7) {
          func_0x00010bf51e00();
          lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          uVar9 = *(undefined8 *)(lVar10 + 0x28);
          *(long *)(lVar10 + 0x28) = lVar12;
          _objc_release(uVar9);
          goto LAB_10557d7e0;
        }
      }
      else {
        _objc_release(lVar4);
        _objc_release(lVar2);
      }
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10557d830; end: 10557d833;  */

void FUN_10557d830(void)

{
  return;
}



/* Entry: 10557d834; end: 10557d8cb; -[CTPItemsLoaderCompute _parseExistingPersistedItemsFromNetworkResults:withFeed:] */

void FUN_10557d834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10557d8cc;
  puStack_48 = &UNK_110898348;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bd86420(param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10557d8cc; end: 10557d9d3;  */

void FUN_10557d8cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  pcStack_38 = FUN_105576944;
  uStack_30 = 0x105576954;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0beee0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10557d9d4; end: 10557d9d7;  */

void FUN_10557d9d4(void)

{
  return;
}



/* Entry: 10557d9d8; end: 10557da1f;  */

void FUN_10557d9d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be45c80(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10557da20; end: 10557dad3; -[CTPItemsLoaderCompute .cxx_destruct] */

void FUN_10557da20(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10557dad4; end: 10557db77; -[CTPItemsDeltaSyncForceFullSyncVersionManager initWithExperiments:preferences:] */

undefined1 *
FUN_10557dad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9000;
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



/* Entry: 10557db78; end: 10557dbbf; -[CTPItemsDeltaSyncForceFullSyncVersionManager _currentDeltaSyncVersion] */

undefined4 FUN_10557db78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2353c0();
  _objc_release(uVar1);
  uVar3 = 3;
  if ((int)uVar2 != 0) {
    uVar3 = 4;
  }
  return uVar3;
}



/* Entry: 10557dbc0; end: 10557dd9b; -[CTPItemsDeltaSyncForceFullSyncVersionManager deltaSyncVersion] */

ulong FUN_10557dbc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c2353c0();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar3 = uVar8;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar8);
  uVar8 = uVar3;
  func_0x00010c067ec0();
  _objc_release(uVar3);
  if ((int)uVar8 < 3 || (int)uVar2 != (int)uVar7) {
    lVar6 = param_1;
    func_0x00010bdf6960(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar7);
    uVar8 = (ulong)(int)lVar6;
  }
  else {
    uVar8 = uVar8 & 0xffffffff;
  }
  return uVar8;
}



/* Entry: 10557dd9c; end: 10557ddcb; -[CTPItemsDeltaSyncForceFullSyncVersionManager .cxx_destruct] */

void FUN_10557dd9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10557ddcc; end: 10557de13; -[CTPItemsDeltaSyncProcessor docObjectContext] */

void FUN_10557ddcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10557de14; end: 10557e20f; -[CTPItemsDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_10557de14(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa3de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    if (param_4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c266c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 0;
      puStack_150 = puVar7;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_10557e210;
      puStack_138 = &UNK_1108646c8;
      puStack_118 = &uStack_120;
      _objc_retain(param_7);
      uStack_130 = param_7;
      puStack_128 = &uStack_120;
      func_0x00010c0c0800(uVar6);
      bVar1 = *(byte *)(puStack_118 + 3);
      _objc_release(uStack_130);
      __Block_object_dispose(&uStack_120,8);
      _objc_release(uVar6);
      if ((bVar1 & 1) != 0) goto LAB_10557e188;
    }
    puStack_180 = puVar7;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_10557e244;
    puStack_168 = &UNK_110898408;
    lStack_160 = param_1;
    _objc_retain(lVar4);
    uVar6 = param_5;
    lStack_158 = lVar4;
    func_0x000100504554(param_5,&puStack_180);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_6);
    func_0x00010bf0a0e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    lVar3 = param_6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_6);
        }
        lVar8 = *(long *)(lVar11 * 8);
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        FUN_10557e688();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar9 != 0) {
          func_0x00010befa120(puVar7);
        }
        _objc_release(lVar9);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = param_6;
      func_0x00010bf52a60();
    }
    _objc_release(param_6);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010c266cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_retain(param_7);
    func_0x00010c0c0800(uVar5);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c4e0();
    _objc_release(uVar10);
    _objc_release(param_7);
    _objc_release(uVar5);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lStack_158);
  }
LAB_10557e188:
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
  func_0x00010beec4e0(*(undefined8 *)(param_3 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10557e210; end: 10557e243;  */

void FUN_10557e210(long param_1)

{
  func_0x00010beec4e0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10557e244; end: 10557e35b;  */

void FUN_10557e244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_10557e908(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_10557ea78(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bacd0;
  _objc_alloc(PTR_PTR_1126bacd0);
  uVar3 = uVar4;
  func_0x00010c0844e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ffe0(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10557e35c; end: 10557e363;  */

void FUN_10557e35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_abort_112598ae0);
  return;
}



/* Entry: 10557e364; end: 10557e38b; -[CTPItemsDeltaSyncProcessor type] */

void FUN_10557e364(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10557e38c; end: 10557e40f; -[CTPItemsDeltaSyncProcessor versionForGroupKey:] */

undefined8 FUN_10557e38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6d620();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 10557e410; end: 10557e4df; -[CTPItemsDeltaSyncProcessor logoutCleanUpDeltaSyncGroupKeys] */

void FUN_10557e410(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 10557e4e0; end: 10557e533; -[CTPItemsDeltaSyncProcessor .cxx_destruct] */

void FUN_10557e4e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10557e534; end: 10557e5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10557e534(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar3 = PTR_PTR_1126bade0;
    _objc_alloc(PTR_PTR_1126bade0);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112725b70);
    lVar1 = param_1 + _DAT_112725b88;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011160(puVar3,param_2,uVar4,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10557e5f8; end: 10557e687; -[CTPItemsDeltaSyncProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10557e5f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725b90);
  _objc_destroyWeak(param_1 + _DAT_112725b74);
  _objc_destroyWeak(param_1 + _DAT_112725b8c);
  _objc_destroyWeak(param_1 + _DAT_112725b88);
  _objc_destroyWeak(param_1 + _DAT_112725b84);
  _objc_destroyWeak(param_1 + _DAT_112725b80);
  _objc_destroyWeak(param_1 + _DAT_112725b7c);
  _objc_destroyWeak(param_1 + _DAT_112725b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725b70,0);
  return;
}



/* Entry: 10557e688; end: 10557e8b3;  */

void FUN_10557e688(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
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
  _objc_retain();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = *(undefined8 *)(lStack_138 + lVar4 * 8);
        uVar1 = uVar5;
        func_0x00010c087060();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 != 0) {
          uStack_170 = 0;
          uStack_160 = 0x3032000000;
          pcStack_158 = FUN_10557e8b4;
          uStack_150 = 0x10557e8c4;
          uStack_148 = 0;
          puStack_168 = &uStack_170;
          func_0x00010bfe5ec0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bee60();
          _objc_release(uVar5);
          lVar6 = puStack_168[5];
          if (lVar6 != 0) {
            _objc_retain(lVar6);
            unaff_x20 = lVar6;
          }
          __Block_object_dispose(&uStack_170,8);
          _objc_release(uStack_148);
          if (lVar6 != 0) goto LAB_10557e840;
        }
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  unaff_x20 = 0;
LAB_10557e840:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
    return;
  }
  ___stack_chk_fail();
  lVar3 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 10557e8b4; end: 10557e8cb;  */

void FUN_10557e8b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10557e8cc; end: 10557e903;  */

void FUN_10557e8cc(long param_1,undefined8 param_2)

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



/* Entry: 10557e904; end: 10557e907;  */

void FUN_10557e904(void)

{
  return;
}



/* Entry: 10557e908; end: 10557ea3f;  */

void FUN_10557e908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10557e8b4;
  uStack_40 = 0x10557e8c4;
  uStack_38 = 0;
  func_0x00010c0c0580(uVar1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10557ea40; end: 10557ea77;  */

void FUN_10557ea40(long param_1,undefined8 param_2)

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



/* Entry: 10557ea78; end: 10557ebaf;  */

void FUN_10557ea78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10557e8b4;
  uStack_40 = 0x10557e8c4;
  uStack_38 = 0;
  func_0x00010c0c0580(uVar1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10557ebb0; end: 10557ebe7;  */

void FUN_10557ebb0(long param_1,undefined8 param_2)

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



/* Entry: 10557ebe8; end: 10557ed43; -[CTPItemsLoaderDeltaForce initWithDeltaSyncService:itemsPersistenceService:feedsPersistenceService:networkItemsClient:logger:] */

undefined1 *
FUN_10557ebe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9010;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10557ed44; end: 10557ed4b; -[CTPItemsLoaderDeltaForce loaderType] */

undefined8 FUN_10557ed44(void)

{
  return 3;
}



/* Entry: 10557ed4c; end: 10557ed53; -[CTPItemsLoaderDeltaForce itemsForFeed:returnCachedFirst:useChecksum:] */

void FUN_10557ed4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_itemsForFeed_allowRetry__1125fee30,param_3,1)
  ;
  return;
}



/* Entry: 10557ed54; end: 10557f15b; -[CTPItemsLoaderDeltaForce itemsForFeed:allowRetry:] */

void FUN_10557ed54(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  code *unaff_x23;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
  else {
    uStack_b8 = 0;
    unaff_x23 = FUN_10557f15c;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_10557f15c;
    uStack_98 = 0x10557f16c;
    uStack_90 = 0;
    lVar5 = param_3;
    puStack_b0 = &uStack_b8;
    func_0x00010c247520(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10557f174;
    puStack_c8 = &UNK_110897558;
    puStack_c0 = &uStack_b8;
    func_0x00010c0bd420();
    _objc_release(lVar5);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puStack_b0[5] == 0) {
      ppuStack_88 = &PTR____CFConstantStringClassReference_110deb298;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_80 = param_3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(ppuVar2);
    }
    else {
      _objc_initWeak(auStack_e8,param_1);
      uStack_118 = 0;
      uStack_108 = 0x3032000000;
      pcStack_100 = FUN_10557f15c;
      uStack_f8 = 0x10557f16c;
      uStack_f0 = 0;
      puVar1 = PTR_PTR_1126badb0;
      puStack_110 = &uStack_118;
      _objc_alloc(PTR_PTR_1126badb0);
      puStack_158 = puVar3;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x10557f1ac;
      puStack_140 = &UNK_110898488;
      unaff_x23 = (code *)&puStack_158;
      puStack_130 = &uStack_118;
      _objc_copyWeak(auStack_120,auStack_e8);
      _objc_retain(param_3);
      puStack_128 = &uStack_b8;
      lStack_138 = param_3;
      func_0x00010c031700(puVar1);
      puVar4 = puVar1;
      if (((ulong)param_4 & 1) == 0) {
        _objc_retain(puVar1);
      }
      else {
        puStack_198 = puVar3;
        uStack_190 = 0xc2000000;
        pcStack_188 = FUN_10557f244;
        puStack_180 = &UNK_1108984e8;
        puStack_168 = &uStack_118;
        param_4 = &puStack_198;
        uStack_178 = param_1;
        _objc_copyWeak(auStack_160,auStack_e8);
        _objc_retain(param_3);
        lStack_170 = param_3;
        func_0x00010bfb2660(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_170);
        _objc_destroyWeak(auStack_160);
      }
      _objc_release(puVar1);
      _objc_release(lStack_138);
      _objc_destroyWeak(auStack_120);
      __Block_object_dispose(&uStack_118,8);
      _objc_release(uStack_f0);
      _objc_destroyWeak(auStack_e8);
      ppuVar2 = param_4;
    }
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 7);
  _objc_destroyWeak((undefined **)((long)unaff_x23 + 0x38));
  __Block_object_dispose(&uStack_118,8);
  _objc_destroyWeak(auStack_e8);
  lVar5 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 10557f15c; end: 10557f173;  */

void FUN_10557f15c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10557f174; end: 10557f243;  */

void FUN_10557f174(long param_1,undefined8 param_2)

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



/* Entry: 10557f244; end: 10557f3db;  */

void FUN_10557f244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
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
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10557f15c;
  uStack_60 = 0x10557f16c;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10557f15c;
  uStack_90 = 0x10557f16c;
  uStack_88 = 0;
  _objc_copyWeak(auStack_b8,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10557f3dc; end: 10557f5e3;  */

void FUN_10557f3dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    lVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    _objc_release(lVar8);
    puVar4 = PTR_PTR_1126ae6b8;
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined **)(lVar8 + 0x28) = puVar4;
      _objc_release(uVar6);
      _objc_release(puVar3);
      goto LAB_10557f5b0;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf3c2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf0ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar9);
  uVar6 = uVar5;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_48);
LAB_10557f5b0:
  _objc_release(param_2);
  return;
}



/* Entry: 10557f5e4; end: 10557f62f;  */

void FUN_10557f5e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c085080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10557f630; end: 10557f6a7;  */

void FUN_10557f630(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10557f6a8; end: 10557f97f; -[CTPItemsLoaderDeltaForce continuouslyUpdatingItemsForFeed:] */

void FUN_10557f6a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  lVar3 = param_1;
  func_0x00010c085100(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10557f980;
  puStack_a8 = &UNK_110898518;
  _objc_retain(param_3);
  lStack_a0 = param_3;
  _objc_retain(puVar1);
  puStack_98 = puVar1;
  _objc_retain(puVar2);
  lVar4 = lVar3;
  puStack_90 = puVar2;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_initWeak(auStack_c8,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c0e05c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_c8;
  _objc_copyWeak(auStack_d0,puVar8);
  _objc_retain(param_3);
  uVar10 = uVar9;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126ae6b8;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  uStack_80 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(lStack_a0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar10);
  func_0x00010c0c0800(puVar8);
  func_0x00010bf86d80(*(undefined8 *)(param_3 + 0x30));
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10557f980; end: 10557fa43;  */

void FUN_10557f980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10557fa44; end: 10557fa47;  */

void FUN_10557fa44(void)

{
  return;
}



/* Entry: 10557fa48; end: 10557fa8f;  */

void FUN_10557fa48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10557fa90; end: 10557fc5f;  */

void FUN_10557fa90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lVar10 * 8);
        lVar9 = *(long *)(param_1 + 0x20);
        func_0x00010c084fc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be461e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar9 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar9);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar6 = PTR_PTR_1126af5d0;
    puVar7 = puVar3;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    puVar6 = PTR_PTR_1126ae6b8;
    _objc_retain(puVar7);
    func_0x00010bf54280(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10557fc60; end: 10557fdff; -[CTPItemsLoaderDeltaForce _createObservableFromFuture:] */

void FUN_10557fc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10557fcf8;
  puStack_30 = &UNK_11088e668;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557fe00; end: 10557ffcf; -[CTPItemsLoaderDeltaForce _saveFeedDeltaSyncKeyIfNecessary:groupKey:] */

void FUN_10557fe00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10557f15c;
  uStack_50 = 0x10557f16c;
  uStack_48 = 0;
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee80();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0440;
  _objc_alloc();
  uVar1 = param_4;
  func_0x00010c087060(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180();
  _objc_release(uVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b0a0(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10557ffd0; end: 10558005f;  */

void FUN_10557ffd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105580060; end: 1055801ff; -[CTPItemsLoaderDeltaForce _loadItemsForDeltaSyncKey:feed:] */

void FUN_105580060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b0448;
  _objc_alloc();
  puVar3 = PTR_PTR_1126badd8;
  func_0x00010bf3d620(PTR_PTR_1126badd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d480();
  _objc_release(puVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar4);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105580200; end: 10558031b;  */

void FUN_105580200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c266020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c297260(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10558031c; end: 105580387;  */

void FUN_10558031c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfab40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105580388; end: 1055804e7; -[CTPItemsLoaderDeltaForce _deltaSyncDidFinishForFeed:key:error:subject:] */

void FUN_105580388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfdd140();
    _objc_release(param_4);
    _objc_release(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5e60(uVar1,param_2,uVar4,(uint)uVar3 ^ 1);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  lVar2 = param_1;
  func_0x00010be4ea60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055804e8;
  puStack_50 = &UNK_11085c638;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c297260(lVar2,param_2,&puStack_68,uVar3);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1055804e8; end: 10558088b;  */

void FUN_1055804e8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *unaff_x22;
  undefined *unaff_x24;
  long lVar9;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_220 = param_1;
    _objc_alloc_init();
    unaff_x22 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_208 = puVar1;
    _objc_alloc_init();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lStack_200 = lVar2;
    if (lVar2 != 0) {
      lStack_210 = *plStack_1a0;
      lStack_218 = param_2;
      do {
        param_3 = 0;
        do {
          if (*plStack_1a0 != lStack_210) {
            _objc_enumerationMutation(lStack_218);
          }
          lVar8 = *(long *)(lStack_1a8 + param_3 * 8);
          unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1f8 = lVar8;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar8;
          func_0x00010c140180();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          _objc_release(lVar8);
          lVar2 = lVar3;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            lVar8 = *plStack_1e0;
            do {
              lVar9 = 0;
              do {
                if (*plStack_1e0 != lVar8) {
                  _objc_enumerationMutation(lVar3);
                }
                uVar7 = *(undefined8 *)(lStack_1e8 + lVar9 * 8);
                uVar4 = uVar7;
                func_0x00010c0844e0(uVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = unaff_x22;
                func_0x00010bf4b900();
                _objc_release(uVar4);
                if (((ulong)puVar1 & 1) == 0) {
                  func_0x00010c0844e0(uVar7);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(unaff_x22);
                  _objc_release(uVar7);
                  func_0x00010befa120(unaff_x24);
                }
                lVar9 = lVar9 + 1;
              } while (lVar2 != lVar9);
              lVar2 = lVar3;
              func_0x00010bf52a60();
            } while (lVar2 != 0);
          }
          _objc_release(lVar3);
          puVar1 = PTR_PTR_1126badc0;
          _objc_alloc(PTR_PTR_1126badc0);
          lVar2 = lStack_1f8;
          lVar3 = lStack_1f8;
          func_0x00010c2711a0(lStack_1f8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x24;
          func_0x00010c140180(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1562a0(lVar2);
          func_0x00010c156900(lVar2);
          func_0x00010c0531c0(puVar1);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(lVar3);
          func_0x00010befa120(puStack_208);
          _objc_release(puVar1);
          _objc_release(unaff_x24);
          param_2 = lStack_218;
          param_3 = param_3 + 1;
        } while (param_3 != lStack_200);
        lVar2 = lStack_218;
        func_0x00010bf52a60();
        lStack_200 = lVar2;
      } while (lVar2 != 0);
    }
    _objc_release(param_2);
    puVar1 = puStack_208;
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    param_1 = lStack_220;
  }
  else {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar5;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar5);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10558088c;
  puStack_260 = unaff_x24;
  puStack_258 = puVar5;
  puStack_250 = unaff_x22;
  lStack_248 = param_3;
  lStack_240 = param_1;
  lStack_238 = param_2;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar5 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bfa3d00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c085120(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_initWeak(auStack_268,lVar2);
  _objc_copyWeak(auStack_270,auStack_268);
  _objc_retain(puVar5);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar4);
  puVar6 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_270);
  _objc_destroyWeak(auStack_268);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10558088c; end: 105580a0b; -[CTPItemsLoaderDeltaForce _loadSyncedItemsFromCacheForFeed:] */

void FUN_10558088c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c085120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c297260(uVar4);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105580a0c; end: 105580a77;  */

void FUN_105580a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a1a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105580a78; end: 105580b6b; -[CTPItemsLoaderDeltaForce _handleFutureItems:error:promise:feed:] */

void FUN_105580a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0) {
    func_0x00010be461e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x1;
    param_4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = param_1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010bf43d60(param_5);
    _objc_release(param_5);
    _objc_release(param_4);
    param_6 = param_1;
  }
  else {
    puVar2 = param_4;
    func_0x00010bf43ca0(param_5);
    param_1 = param_5;
  }
  uVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105580b6c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x105580c40;
  puStack_90 = &UNK_1108978c8;
  uStack_88 = uVar1;
  uStack_80 = param_3;
  puStack_78 = param_4;
  uStack_70 = param_6;
  uStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  func_0x000100504554(puVar2,&puStack_a8);
  puVar3 = PTR_PTR_1126badc0;
  _objc_alloc(PTR_PTR_1126badc0);
  puVar4 = puVar5;
  func_0x00010c0d4f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c0531c0(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105580b6c; end: 105580cf3; -[CTPItemsLoaderDeltaForce _itemsGroupForPersistedItems:feed:] */

void FUN_105580b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105580c40;
  puStack_40 = &UNK_1108978c8;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x000100504554(param_3,&puStack_58);
  puVar1 = PTR_PTR_1126badc0;
  _objc_alloc(PTR_PTR_1126badc0);
  uVar2 = param_4;
  func_0x00010c0d4f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0531c0(puVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105580cf4; end: 105580d53; -[CTPItemsLoaderDeltaForce .cxx_destruct] */

void FUN_105580cf4(long param_1)

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



/* Entry: 105580d54; end: 105580d83; +[CTPKmpItemsDeltaSyncProcessor clientTypeName] */

void FUN_105580d54(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110deb1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110deb1d8);
  return;
}



/* Entry: 105580d84; end: 105580ea3; -[CTPKmpItemsDeltaSyncProcessor initWithKmpDeltaForcePersistenceService:forceFullSyncVersionManager:crashLogger:] */

undefined1 *
FUN_105580d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e9018;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0448;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf3d620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02d480();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105580ea4; end: 105580ecb; -[CTPKmpItemsDeltaSyncProcessor type] */

void FUN_105580ea4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105580ecc; end: 105580f17; -[CTPKmpItemsDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_105580ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c087060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105580f18; end: 105580ff3; -[CTPKmpItemsDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_105580f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114900();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105580ff4; end: 1055810a7;  */

void FUN_105580ff4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    puVar2 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132d60(uVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1055810a8; end: 10558112f; -[CTPKmpItemsDeltaSyncProcessor versionForGroupKey:] */

undefined8 FUN_1055810a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6d620();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 105581130; end: 105581207; -[CTPKmpItemsDeltaSyncProcessor logoutCleanUpDeltaSyncGroupKeys] */

void FUN_105581130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar1,param_2,&PTR____CFConstantStringClassReference_110deb1f8,puVar2);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105581208; end: 10558120b; -[CTPKmpItemsDeltaSyncProcessor performLogoutCleanUp:transactionContext:] */

void FUN_105581208(void)

{
  return;
}



/* Entry: 10558120c; end: 105581253; -[CTPKmpItemsDeltaSyncProcessor .cxx_destruct] */

void FUN_10558120c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105581254; end: 105581387; -[CTPKmpItemsLoaderDeltaForce initWithDeltaSyncService:kmpDataPersistenceService:networkItemsClient:crashLogger:] */

undefined1 *
FUN_105581254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9020;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105581388; end: 10558138f; -[CTPKmpItemsLoaderDeltaForce loaderType] */

undefined8 FUN_105581388(void)

{
  return 3;
}



/* Entry: 105581390; end: 1055816a7; -[CTPKmpItemsLoaderDeltaForce itemsForFeed:returnCachedFirst:useChecksum:] */

void FUN_105581390(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  else {
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_1055816a8;
    uStack_78 = 0x1055816b8;
    uStack_70 = 0;
    lVar4 = param_3;
    puStack_90 = &uStack_98;
    func_0x00010c247520(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1055816c0;
    puStack_a8 = &UNK_110897558;
    puStack_a0 = &uStack_98;
    func_0x00010c0bd420();
    _objc_release(lVar4);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puStack_90[5] == 0) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110deb318;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_60 = param_3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(ppuVar1);
    }
    else {
      _objc_initWeak(auStack_c8,param_1);
      puVar3 = PTR_PTR_1126badb0;
      _objc_alloc(PTR_PTR_1126badb0);
      puStack_100 = puVar2;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_1055816f8;
      puStack_e8 = &UNK_1108985d8;
      _objc_copyWeak(auStack_d0,auStack_c8);
      _objc_retain(param_3);
      puStack_d8 = &uStack_98;
      lStack_e0 = param_3;
      func_0x00010c031700(puVar3);
      _objc_release(lStack_e0);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_c8);
      ppuVar1 = &puStack_100;
    }
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar1 + 0x30));
  _objc_destroyWeak(auStack_c8);
  lVar4 = 8;
  __Block_object_dispose(&uStack_98);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1055816a8; end: 1055816bf;  */

void FUN_1055816a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055816c0; end: 1055816f7;  */

void FUN_1055816c0(long param_1,undefined8 param_2)

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



/* Entry: 1055816f8; end: 105581783;  */

void FUN_1055816f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be1e8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4dbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105581784; end: 1055818eb; -[CTPKmpItemsLoaderDeltaForce _getDeltaSyncKey:groupKey:] */

void FUN_105581784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1055816a8;
  uStack_40 = 0x1055816b8;
  uStack_38 = 0;
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee80();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0440;
  _objc_alloc(PTR_PTR_1126b0440);
  uVar1 = param_4;
  func_0x00010c087060(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055818ec; end: 10558197b;  */

void FUN_1055818ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10558197c; end: 105581987; -[CTPKmpItemsLoaderDeltaForce continuouslyUpdatingItemsForFeed:] */

void FUN_10558197c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_itemsForFeed_returnCachedFirst_u_1125fee50,param_3,0,0);
  return;
}



/* Entry: 105581988; end: 105581abf; -[CTPKmpItemsLoaderDeltaForce _loadItemsForDeltaSyncKey:feed:] */

void FUN_105581988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdfaba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105581ac0; end: 105581c2b;  */

void FUN_105581ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1055816a8;
  uStack_60 = 0x1055816b8;
  uStack_58 = 0;
  _objc_copyWeak(auStack_88,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105581c2c; end: 105581cc3;  */

void FUN_105581c2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be4ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105581cc4; end: 105581df7; -[CTPKmpItemsLoaderDeltaForce _deltaSyncWithKey:feed:] */

void FUN_105581cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b0448;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126badd0;
  func_0x00010bf3d620(PTR_PTR_1126badd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c266020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105581df8;
  puStack_58 = &UNK_11084f340;
  uStack_50 = uVar4;
  lStack_48 = param_1;
  _objc_retain(uVar4);
  func_0x00010bf54280(puVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105581df8; end: 105581eaf;  */

void FUN_105581df8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar1);
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



/* Entry: 105581eb0; end: 105581f07;  */

void FUN_105581eb0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105581f08; end: 105582137; -[CTPKmpItemsLoaderDeltaForce _getFeedTypeOriginForKey:feed:] */

void FUN_105581f08(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1055816a8;
  uStack_70 = 0x1055816b8;
  uStack_68 = 0;
  puVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee60();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = PTR_PTR_1126ae6b8;
  if (puStack_88[5] == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_retain(puVar2);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
  }
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


