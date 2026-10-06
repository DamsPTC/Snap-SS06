/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085961c4; end: 1085961cf; -[POPAnimation type] */

undefined4 FUN_1085961c4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
}



/* Entry: 1085961d0; end: 1085961eb; -[POPAnimation animationDidStartBlock] */

void FUN_1085961d0(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(*(long *)(param_1 + 8) + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085961ec; end: 108596257; -[POPAnimation setAnimationDidStartBlock:] */

void FUN_1085961ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x48)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
    *(long *)(*(long *)(param_1 + 8) + 0x48) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596258; end: 108596273; -[POPAnimation animationDidReachToValueBlock] */

void FUN_108596258(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108596274; end: 1085962df; -[POPAnimation setAnimationDidReachToValueBlock:] */

void FUN_108596274(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x50)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x50);
    *(long *)(*(long *)(param_1 + 8) + 0x50) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085962e0; end: 1085962fb; -[POPAnimation completionBlock] */

void FUN_1085962e0(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(*(long *)(param_1 + 8) + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085962fc; end: 108596367; -[POPAnimation setCompletionBlock:] */

void FUN_1085962fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x58)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x58);
    *(long *)(*(long *)(param_1 + 8) + 0x58) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596368; end: 108596383; -[POPAnimation animationDidApplyBlock] */

void FUN_108596368(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(*(long *)(param_1 + 8) + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108596384; end: 1085963ef; -[POPAnimation setAnimationDidApplyBlock:] */

void FUN_108596384(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x60)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x60);
    *(long *)(*(long *)(param_1 + 8) + 0x60) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085963f0; end: 10859641b; -[POPAnimation name] */

void FUN_1085963f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10859641c; end: 108596487; -[POPAnimation setName:] */

void FUN_10859641c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x18)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
    *(long *)(*(long *)(param_1 + 8) + 0x18) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596488; end: 108596493; -[POPAnimation beginTime] */

undefined8 FUN_108596488(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x28);
}



/* Entry: 108596494; end: 1085964af; -[POPAnimation setBeginTime:] */

void FUN_108596494(double param_1,long param_2)

{
  if (param_1 == *(double *)(*(long *)(param_2 + 8) + 0x28)) {
    return;
  }
  *(double *)(*(long *)(param_2 + 8) + 0x28) = param_1;
  return;
}



/* Entry: 1085964b0; end: 1085964bf; -[POPAnimation removedOnCompletion] */

ushort FUN_1085964b0(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x88) >> 2 & 1;
}



/* Entry: 1085964c0; end: 1085964f3; -[POPAnimation setRemovedOnCompletion:] */

void FUN_1085964c0(long param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x88);
  if (((param_3 ^ (uVar1 & 4) == 0) & 1) == 0) {
    uVar2 = 4;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    *(ushort *)(*(long *)(param_1 + 8) + 0x88) = uVar1 & 0xfffb | uVar2;
  }
  return;
}



/* Entry: 1085964f4; end: 108596503; -[POPAnimation repeatForever] */

ushort FUN_1085964f4(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x88) >> 0xd & 1;
}



/* Entry: 108596504; end: 108596537; -[POPAnimation setRepeatForever:] */

void FUN_108596504(long param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x88);
  if (((param_3 ^ (uVar1 & 0x2000) == 0) & 1) == 0) {
    uVar2 = 0x2000;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    *(ushort *)(*(long *)(param_1 + 8) + 0x88) = uVar1 & 0xdfff | uVar2;
  }
  return;
}



/* Entry: 108596538; end: 10859655b; -[POPAnimation valueForUndefinedKey:] */

void FUN_108596538(long param_1)

{
  func_0x00010c0e00e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x68));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10859655c; end: 10859660f; -[POPAnimation setValue:forUndefinedKey:] */

void FUN_10859655c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  if (param_3 == 0) {
    func_0x00010c12d3e0(lVar1,param_2,param_4);
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x68);
      *(undefined **)(*(long *)(param_1 + 8) + 0x68) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    }
    func_0x00010c1d0640(lVar1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596610; end: 108596673; -[POPAnimation tracer] */

void FUN_108596610(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x70);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126da250;
    _objc_alloc();
    func_0x00010bff2ea0();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x70);
    *(undefined **)(*(long *)(param_1 + 8) + 0x70) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x70);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108596674; end: 108596727; -[POPAnimation description] */

void FUN_108596674(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ee4438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bdcd060(param_1,param_2,puVar2,0);
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108596728; end: 1085967db; -[POPAnimation debugDescription] */

void FUN_108596728(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ee4438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bdcd060(param_1,param_2,puVar2,1);
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085967dc; end: 1085967e3; -[POPAnimation _advance:currentTime:elapsedTime:] */

undefined8 FUN_1085967dc(void)

{
  return 1;
}



/* Entry: 1085967e4; end: 108596a63; -[POPAnimation _appendDescription:debug:] */

long FUN_1085967e4(ulong param_1,undefined8 param_2,long param_3,int param_4)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  if (*(long *)(*(long *)(param_1 + 8) + 0x18) != 0) {
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4458);
  }
  uVar2 = param_1;
  func_0x00010c12f4a0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c12f4a0();
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4478);
  }
  lVar4 = *(long *)(param_1 + 8);
  if (param_4 != 0) {
    uVar1 = *(ushort *)(lVar4 + 0x88);
    if ((uVar1 & 1) != 0) {
      func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4498);
      lVar4 = *(long *)(param_1 + 8);
      uVar1 = *(ushort *)(lVar4 + 0x88);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee44b8);
      lVar4 = *(long *)(param_1 + 8);
    }
  }
  if (*(double *)(lVar4 + 0x28) != 0.0) {
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee44d8);
    lVar4 = *(long *)(param_1 + 8);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar5 = *(long *)(lVar4 + 0x68);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar4 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x68);
        func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee44f8);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  __Unwind_Resume();
  return *(long *)(lVar4 + 0x10);
}



/* Entry: 108596a64; end: 108596a6b; -[POPAnimation solver] */

undefined8 FUN_108596a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108596a6c; end: 108596a73; -[POPAnimation setSolver:] */

void FUN_108596a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108596a74; end: 108596a7b; -[POPAnimation currentValue] */

undefined8 FUN_108596a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108596a7c; end: 108596a83; -[POPAnimation progressMarkers] */

undefined8 FUN_108596a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108596a84; end: 108596a8b; -[POPAnimation setProgressMarkers:] */

void FUN_108596a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108596a8c; end: 108596abb; -[POPAnimation .cxx_destruct] */

void FUN_108596a8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108596abc; end: 108596b5f;  */

void FUN_108596abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c60();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596b60; end: 108596bb3;  */

void FUN_108596b60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108596bb4; end: 108596c37;  */

void FUN_108596bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b220();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596c38; end: 108596c9f;  */

void FUN_108596c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf03d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108596ca0; end: 108596d37;  */

void FUN_108596ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf03c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108596d38; end: 108596ddb;  */

void FUN_108596d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c60();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596ddc; end: 108596e2f;  */

void FUN_108596ddc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108596e30; end: 108596eb3;  */

void FUN_108596e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b220();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108596eb4; end: 108596f1b;  */

void FUN_108596eb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf03d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108596f1c; end: 108596fb3;  */

void FUN_108596f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da258;
  func_0x00010c22b700(PTR_PTR_1126da258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf03c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108596fb4; end: 10859717f; -[POPAnimation copyWithZone:] */

long FUN_108596fb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010bf18c20(param_1);
    func_0x00010c16fd40(lVar1);
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf03b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168180(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf03b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168160(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf44000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17fb40(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf03b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168140(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c12f4a0(param_1);
    func_0x00010c1ea580(lVar1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010bf121e0(param_1);
    func_0x00010c16d4c0(lVar1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010c130b40(param_1);
    func_0x00010c1eabe0(lVar1,param_2,lVar2);
    func_0x00010c130b60(param_1);
    func_0x00010c1eac00(lVar1,param_2,param_1);
  }
  return lVar1;
}



/* Entry: 108597180; end: 108597183;  */

undefined8 * FUN_108597180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 108597184; end: 108597197;  */

void FUN_108597184(void)

{
  FUN_1085973d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108597198; end: 1085972a3;  */

void FUN_108597198(long param_1)

{
  long lVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if ((*(ushort *)(param_1 + 0x88) >> 3 & 1) != 0) {
    FUN_108597498(&uStack_21);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c103ac0();
    _objc_release(lVar1);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  _objc_retainBlock();
  if (lVar1 != 0) {
    FUN_108597498(&uStack_22);
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 8));
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  if ((*(ushort *)(param_1 + 0x88) >> 10 & 1) != 0) {
    func_0x00010bf7ba60(*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1085972a4; end: 1085972d7;  */

ushort FUN_1085972a4(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 3) {
    return *(ushort *)(param_1 + 0x88) >> 0xe & 1;
  }
  return 0;
}



/* Entry: 1085972d8; end: 1085973cb;  */

void FUN_1085972d8(long param_1)

{
  long lVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if ((*(ushort *)(param_1 + 0x88) >> 6 & 1) != 0) {
    FUN_108597498(&uStack_21);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c103a80();
    _objc_release(lVar1);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  _objc_retainBlock();
  if (lVar1 != 0) {
    FUN_108597498(&uStack_22);
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 8));
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1085973cc; end: 1085973d3;  */

void FUN_1085973cc(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1085973d4; end: 108597497;  */

undefined8 * FUN_1085973d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 108597498; end: 1085974d7;  */

undefined1 * FUN_108597498(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x00010bf7fa00();
  *param_1 = (char)puVar1;
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,0);
  return param_1;
}



/* Entry: 1085974d8; end: 10859752f; -[POPAnimationEvent initWithType:time:] */

void FUN_1085974d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fcdf0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 108597530; end: 1085975d3; -[POPAnimationEvent description] */

void FUN_108597530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,
                      &PTR____CFConstantStringClassReference_110ee4518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd040(param_1,param_2,puVar1);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085975d4; end: 10859763f; -[POPAnimationEvent _appendDescription:] */

void FUN_1085975d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4538);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108597640; end: 108597647; -[POPAnimationEvent type] */

undefined8 FUN_108597640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108597648; end: 10859764f; -[POPAnimationEvent time] */

undefined8 FUN_108597648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108597650; end: 108597657; -[POPAnimationEvent animationDescription] */

undefined8 FUN_108597650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108597658; end: 10859765f; -[POPAnimationEvent setAnimationDescription:] */

void FUN_108597658(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108597660; end: 10859766b; -[POPAnimationEvent .cxx_destruct] */

void FUN_108597660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10859766c; end: 1085976f7; -[POPAnimationValueEvent initWithType:time:value:] */

long FUN_10859766c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c056200(param_1,param_2,param_3,param_4);
  if (param_2 != 0) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  return param_2;
}



/* Entry: 1085976f8; end: 10859779b; -[POPAnimationValueEvent _appendDescription:] */

void FUN_1085976f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fcdf8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s__appendDescription__112550db0,param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf06ba0(param_3);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bf06ba0(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10859779c; end: 1085977a3; -[POPAnimationValueEvent value] */

undefined8 FUN_10859779c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085977a4; end: 1085977ab; -[POPAnimationValueEvent velocity] */

undefined8 FUN_1085977a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085977ac; end: 1085977db; -[POPAnimationValueEvent setVelocity:] */

void FUN_1085977ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085977dc; end: 10859780b; -[POPAnimationValueEvent .cxx_destruct] */

void FUN_1085977dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10859780c; end: 10859780f;  */

void FUN_10859780c(void)

{
  return;
}



/* Entry: 108597810; end: 10859791b; +[POPSpringAnimation convertBounciness:speed:toTension:friction:mass:] */

void FUN_108597810(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,double *param_6,undefined8 *param_7)

{
  double dVar1;
  double dVar2;
  
  dVar2 = ((param_2 / 1.7) / 20.0) * 199.5 + 0.5;
  dVar1 = dVar2;
  FUN_10859fe70();
  if (param_5 != (double *)0x0) {
    *param_5 = ((dVar2 + -30.0) / 50.0) * 181.0 + 194.0;
  }
  if (param_6 != (double *)0x0) {
    dVar2 = ((param_1 / 1.7) / 20.0) * 0.8 + 0.0;
    dVar2 = -(dVar2 * dVar2) + dVar2 * 2.0;
    *param_6 = ((1.0 - dVar2) * dVar1 + dVar2 * 0.01 + -8.0) * 0.5 * 6.0 + 25.0;
  }
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = 0x3ff0000000000000;
  }
  return;
}



/* Entry: 10859791c; end: 108597a1f; +[POPSpringAnimation convertTension:friction:toBounciness:speed:] */

void FUN_10859791c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ((param_1 + -194.0) / 181.0) * 50.0 + 30.0;
  if (param_5 != (double *)0x0) {
    dVar3 = dVar5;
    FUN_10859fe70();
    dVar2 = (0.01 - dVar3) + (0.01 - dVar3);
    dVar4 = dVar3 + -0.01;
    dVar1 = SQRT(dVar4 * -4.0 * (dVar3 - (((param_2 + -25.0) / 6.0) * 2.0 + 8.0)) + dVar2 * dVar2);
    dVar3 = (-dVar2 - dVar1) / (dVar4 + dVar4);
    if (0.8 <= dVar3) {
      dVar3 = (dVar1 - dVar2) / (dVar4 + dVar4);
    }
    *param_5 = dVar3 * 42.5;
  }
  if (param_6 != (double *)0x0) {
    *param_6 = (dVar5 + -0.5) * 0.17042606516290726;
  }
  return;
}



/* Entry: 108597a20; end: 108597a2f;  */

bool FUN_108597a20(long param_1,long param_2)

{
  return param_1 == param_2;
}



/* Entry: 108597a30; end: 108597cdb;  */

undefined4 FUN_108597a30(byte *param_1,int *param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  pbVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  if (((ulong)pbVar4 & 1) == 0) {
    pbVar4 = param_1;
    FUN_10859cf34();
    uVar6 = 0;
    if (pbVar4 != (byte *)0x0) {
      uVar6 = 10;
    }
  }
  else {
    pbVar4 = param_1;
    _objc_retainAutorelease();
    func_0x00010c0dfba0();
    if (pbVar4 == (byte *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      if (param_3 != 0) {
        do {
          iVar1 = *param_2;
          if (iVar1 < 5) {
            if (iVar1 < 3) {
              if (iVar1 == 1) {
                bVar2 = *pbVar4;
                if (bVar2 < 0x69) {
                  if (((bVar2 == 0x49) || (bVar2 == 0x51)) || (bVar2 == 0x53)) {
LAB_108597c28:
                    if (pbVar4[1] == 0) {
                      uVar6 = 1;
                      goto LAB_108597c58;
                    }
                  }
                }
                else if (((bVar2 == 0x73) || (bVar2 == 0x71)) || (bVar2 == 0x69))
                goto LAB_108597c28;
              }
              else if (((iVar1 == 2) && ((*pbVar4 == 100 || (*pbVar4 == 0x66)))) && (pbVar4[1] == 0)
                      ) {
                uVar6 = 2;
                goto LAB_108597c58;
              }
            }
            else if (iVar1 == 3) {
              pbVar5 = pbVar4;
              _strcmp(pbVar4,"{CGPoint=dd}");
              if ((int)pbVar5 == 0) {
                uVar6 = 3;
                goto LAB_108597c58;
              }
            }
            else if ((iVar1 == 4) &&
                    (pbVar5 = pbVar4, _strcmp(pbVar4,"{CGSize=dd}"), (int)pbVar5 == 0)) {
              uVar6 = 4;
              goto LAB_108597c58;
            }
          }
          else if (iVar1 < 7) {
            if (iVar1 == 5) {
              pbVar5 = pbVar4;
              _strcmp(pbVar4,"{CGRect={CGPoint=dd}{CGSize=dd}}");
              if ((int)pbVar5 == 0) {
                uVar6 = 5;
                goto LAB_108597c58;
              }
            }
            else if ((iVar1 == 6) &&
                    (pbVar5 = pbVar4, _strcmp(pbVar4,"{UIEdgeInsets=dddd}"), (int)pbVar5 == 0)) {
              uVar6 = 6;
              goto LAB_108597c58;
            }
          }
          else if (iVar1 == 7) {
            pbVar5 = pbVar4;
            _strcmp(pbVar4,&UNK_10f4a7874);
            if ((int)pbVar5 == 0) {
              uVar6 = 7;
              goto LAB_108597c58;
            }
          }
          else if (iVar1 == 8) {
            pbVar5 = pbVar4;
            _strcmp(pbVar4,&UNK_10f4a788f);
            if ((int)pbVar5 == 0) {
              uVar6 = 8;
              goto LAB_108597c58;
            }
          }
          else if ((iVar1 == 9) &&
                  ((pbVar5 = pbVar4, _strcmp(pbVar4,&UNK_10f4a78b0), (int)pbVar5 == 0 ||
                   (pbVar5 = pbVar4, _strcmp(pbVar4,&UNK_10f4a78b7), (int)pbVar5 == 0)))) {
            uVar6 = 9;
            goto LAB_108597c58;
          }
          param_3 = param_3 + -1;
          param_2 = param_2 + 1;
        } while (param_3 != 0);
        uVar6 = 0;
      }
    }
  }
LAB_108597c58:
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 108597cdc; end: 108597e2f;  */

void FUN_108597cdc(long *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) goto LAB_108597e24;
  if (param_2 < 5) {
    if (param_2 - 1U < 2) {
      func_0x00010c0df720(*(undefined8 *)puVar2[1],PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108597e24;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        FUN_1085a26ac();
        func_0x00010c2971c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108597e24;
      }
      goto LAB_108597d98;
    }
  }
  else {
    if (param_2 == 5) {
      func_0x0001085a26d8();
      func_0x00010c2971a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108597e24;
    }
    if (param_2 == 6) {
      puVar3 = (undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
      if (3 < *puVar2) {
        puVar3 = (undefined8 *)puVar2[1];
      }
      func_0x00010c297340(*puVar3,puVar3[1],puVar3[2],puVar3[3],PTR__OBJC_CLASS___NSValue_1126afdf8)
      ;
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108597e24;
    }
    if (param_2 == 10) {
      func_0x0001085a2754();
      goto LAB_108597e24;
    }
LAB_108597d98:
    if (param_3 == 0) goto LAB_108597e24;
  }
  uVar5 = 0;
  if (*puVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)puVar2[1];
    if (*puVar2 != 1) {
      uVar5 = ((undefined8 *)puVar2[1])[1];
    }
  }
  func_0x00010c297180(uVar4,uVar5,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
LAB_108597e24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108597e30; end: 108598193;  */

void FUN_108597e30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,uint *param_7,long *param_8,int param_9)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_a0 [6];
  
  _objc_retain();
  if (param_6 == (undefined8 *)0x0) {
    *param_8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_108598108;
  }
  puVar6 = param_6;
  FUN_108597a30(param_6,&UNK_10df35a98,10);
  uVar3 = (uint)puVar6;
  if (uVar3 == 0) {
    puVar6 = param_6;
    _objc_opt_class();
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    _objc_release(puVar6);
    _objc_retain(param_6);
    puVar6 = (undefined8 *)0x0;
  }
  else {
    _objc_retain(param_6);
    puVar6 = (undefined8 *)0x0;
    if ((int)uVar3 < 5) {
      if (uVar3 - 1 < 2) {
        func_0x00010bf885a0(param_6);
        puVar6 = (undefined8 *)0x10;
        __Znwm();
        *puVar6 = 1;
        puVar4 = (undefined8 *)0x1;
        _calloc(1,8);
        puVar6[1] = puVar4;
        *puVar4 = param_2;
      }
      else {
        if (uVar3 == 3) {
          func_0x00010bdc1060(param_6);
          puVar6 = (undefined8 *)0x10;
          __Znwm();
        }
        else {
          if (uVar3 != 4) goto LAB_108598064;
          func_0x00010bdc10a0(param_6);
          puVar6 = (undefined8 *)0x10;
          __Znwm();
        }
        *puVar6 = 2;
        puVar4 = (undefined8 *)0x2;
        _calloc(2,8);
        puVar6[1] = puVar4;
        *puVar4 = param_2;
        puVar4[1] = param_3;
      }
    }
    else if ((int)uVar3 < 7) {
      if (uVar3 == 5) {
        func_0x00010bdc1080(param_6);
        puVar6 = (undefined8 *)0x10;
        __Znwm();
      }
      else {
        if (uVar3 != 6) goto LAB_108598064;
        func_0x00010bdc2aa0(param_6);
        puVar6 = (undefined8 *)0x10;
        __Znwm();
      }
      *puVar6 = 4;
      puVar4 = (undefined8 *)0x4;
      _calloc(4,8);
      puVar6[1] = puVar4;
      *puVar4 = param_2;
      puVar4[1] = param_3;
      puVar4[2] = param_4;
      puVar4[3] = param_5;
    }
    else if (uVar3 == 7) {
      func_0x00010bdc0fc0(auStack_a0,param_6);
      puVar6 = auStack_a0;
      FUN_1085a2700(puVar6);
    }
    else if (uVar3 == 10) {
      puVar6 = param_6;
      FUN_10859cf34(param_6);
      FUN_1085a27a4();
    }
  }
LAB_108598064:
  FUN_108598194(param_1,puVar6);
  _objc_release(param_6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar1 = *param_7;
  if ((uVar1 == 0) || (*param_8 == 0)) {
    *param_7 = uVar3;
    if ((long *)*param_1 != (long *)0x0) {
      *param_8 = *(long *)*param_1;
    }
  }
  else if ((param_9 != 0) && (*param_8 != *(long *)*param_1)) {
    if (uVar1 < 0xd) {
      puVar5 = (&PTR_PTR_110a579c8)[uVar1 - 1];
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    func_0x00010c11f020(puVar2);
    _objc_release(puVar5);
  }
LAB_108598108:
  _objc_release(param_6);
  return;
}



/* Entry: 108598194; end: 108598203;  */

undefined8 * FUN_108598194(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110a57960;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 108598204; end: 108598207;  */

void FUN_108598204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108598208; end: 10859821b;  */

void FUN_108598208(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10859821c; end: 108598293;  */

void FUN_10859821c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      _free();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108598294; end: 108598297;  */

void FUN_108598294(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108598298; end: 1085982ef;  */

long FUN_108598298(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1085982f0; end: 1085983d3; -[POPAnimationTracer initWithAnimation:] */

undefined1 * FUN_1085982f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fce00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x10) = *(undefined8 *)(param_3 + 8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    lVar3 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_velocity_1126838a0);
    *(byte *)((long)puVar1 + 0x20) = (byte)lVar3 & 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085983d4; end: 10859842b; -[POPAnimationTracer readPropertyValue:] */

void FUN_1085983d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10859842c; end: 1085985cb;  */

void FUN_10859842c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain();
  _objc_retain(param_3);
  dVar4 = *(double *)(*(long *)(param_1 + 0x10) + 0x30);
  dVar5 = *(double *)(*(long *)(param_1 + 0x10) + 0x38);
  dVar6 = dVar5 - dVar4;
  if (dVar4 == 0.0) {
    dVar6 = dVar5;
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    puVar3 = PTR_PTR_1126da260;
    _objc_alloc(PTR_PTR_1126da260);
    func_0x00010c056200(dVar6);
  }
  else {
    puVar3 = PTR_PTR_1126da268;
    _objc_alloc(PTR_PTR_1126da268);
    func_0x00010c056220(dVar6);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      lVar2 = lVar1;
      func_0x00010c2979e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220640(puVar3);
      _objc_release(lVar2);
    }
  }
  if (param_4 != 0) {
    lVar2 = lVar1;
    func_0x00010bf6e340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168120(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085985cc; end: 108598623; -[POPAnimationTracer writePropertyValue:] */

void FUN_1085985cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108598624; end: 10859867b; -[POPAnimationTracer updateToValue:] */

void FUN_108598624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10859867c; end: 1085986d3; -[POPAnimationTracer updateFromValue:] */

void FUN_10859867c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,3,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085986d4; end: 10859872b; -[POPAnimationTracer updateVelocity:] */

void FUN_1085986d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10859872c; end: 1085987bf; -[POPAnimationTracer updateSpeed:] */

void FUN_10859872c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10859842c(param_1,6,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085987c0; end: 108598853; -[POPAnimationTracer updateBounciness:] */

void FUN_1085987c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10859842c(param_1,5,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108598854; end: 1085988e7; -[POPAnimationTracer updateFriction:] */

void FUN_108598854(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10859842c(param_1,7,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085988e8; end: 10859897b; -[POPAnimationTracer updateMass:] */

void FUN_1085988e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10859842c(param_1,8,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10859897c; end: 108598a0f; -[POPAnimationTracer updateTension:] */

void FUN_10859897c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10859842c(param_1,9,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108598a10; end: 108598a6b; -[POPAnimationTracer didStart] */

void FUN_108598a10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,10,0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108598a6c; end: 108598b57; -[POPAnimationTracer didStop:] */

void FUN_108598a6c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10859842c(param_1,0xb,puVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x21) == '\x01') {
    lVar3 = param_1;
    func_0x00010befff20();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110ee4918);
    _objc_release(lVar3);
    func_0x00010c137fe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108598b58; end: 108598baf; -[POPAnimationTracer didReachToValue:] */

void FUN_108598b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,0xc,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108598bb0; end: 108598c0b; -[POPAnimationTracer autoreversed] */

void FUN_108598bb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10859842c(param_1,0xd,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108598c0c; end: 108598c3f; -[POPAnimationTracer start] */

void FUN_108598c0c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = *(long *)(param_1 + 8);
  _objc_release();
  *(ushort *)(lVar1 + 0x88) = *(ushort *)(lVar1 + 0x88) | 0x400;
  return;
}



/* Entry: 108598c40; end: 108598c73; -[POPAnimationTracer stop] */

void FUN_108598c40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = *(long *)(param_1 + 8);
  _objc_release();
  *(ushort *)(lVar1 + 0x88) = *(ushort *)(lVar1 + 0x88) & 0xfbff;
  return;
}



/* Entry: 108598c74; end: 108598c7b; -[POPAnimationTracer reset] */

void FUN_108598c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108598c7c; end: 108598c93; -[POPAnimationTracer allEvents] */

void FUN_108598c7c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108598c94; end: 108598c9b; -[POPAnimationTracer writeEvents] */

void FUN_108598c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_eventsWithType__1125c4330,1);
  return;
}



/* Entry: 108598c9c; end: 108598dfb; -[POPAnimationTracer eventsWithType:] */

undefined * FUN_108598c9c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = *(long *)(lStack_118 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c27dd80();
        if (param_3 == lVar3) {
          func_0x00010befa120(puVar1,param_2,lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  lVar2 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(puVar1);
  __Unwind_Resume();
  return (undefined *)(ulong)*(byte *)(lVar2 + 0x21);
}



/* Entry: 108598dfc; end: 108598e03; -[POPAnimationTracer shouldLogAndResetOnCompletion] */

undefined1 FUN_108598dfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 108598e04; end: 108598e0b; -[POPAnimationTracer setShouldLogAndResetOnCompletion:] */

void FUN_108598e04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}


