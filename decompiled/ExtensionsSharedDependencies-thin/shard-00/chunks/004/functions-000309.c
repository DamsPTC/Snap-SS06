/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0061a188; end: 0061a207; -[SCObservableDeferred initWithObservableBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061a188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59bc) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061a208; end: 0061a2a3; -[SCObservableDeferred subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(param_1 + _DAT_00ac59bc);
  pcVar4 = *(code **)(lVar3 + 0x10);
  _objc_retain(param_3);
  (*pcVar4)(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_00ac3540;
  _objc_alloc(PTR_PTR_00ac3540);
  func_0x007869c0();
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061a2a4; end: 0061a2b7; -[SCObservableDeferred .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac59bc,0);
  return;
}



/* Entry: 0061a2b8; end: 0061a30f; -[SCEmptyObservable subscribe:] */

void FUN_0061a2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x007806e0(param_3);
  puVar1 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061a310; end: 0061a32b; +[SCObservable empty] */

void FUN_0061a310(void)

{
  _objc_alloc_init(PTR_PTR_00ac3550);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0061a32c; end: 0061a3af; -[SCFromObservable initWithArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061a32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac59c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061a3b0; end: 0061a4f3; -[SCFromObservable subscribe:] */

/* WARNING: Removing unreachable block (ram,0x0061a444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a3b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + _DAT_00ac59c0);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar5 = 0;
    do {
      func_0x00789920(param_3);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
    lVar1 = lVar4;
    func_0x00780ea0();
  }
  _objc_release(lVar4);
  func_0x007806e0(param_3);
  puVar2 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(param_3 + _DAT_00ac59c0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061a4f4; end: 0061a507; -[SCFromObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac59c0,0);
  return;
}



/* Entry: 0061a508; end: 0061a553; +[SCObservable from:] */

void FUN_0061a508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3558;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784c20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061a554; end: 0061a61b; -[SCFutureObservable initWithFuture:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0061a554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac4348;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac59c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_00ac59c8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac59cc) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061a61c; end: 0061a6f3; -[SCFutureObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  pcStack_58 = FUN_0061a6f4;
  puStack_50 = &UNK_00a0b118;
  uVar3 = *(undefined8 *)(param_1 + _DAT_00ac59c4);
  uStack_60 = 0xc2000000;
  uVar4 = *(undefined8 *)(param_1 + _DAT_00ac59c8);
  uVar1 = *(undefined1 *)(param_1 + _DAT_00ac59cc);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00793720(uVar3,param_2,&puStack_68,uVar4,uVar1);
  puVar2 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061a6f4; end: 0061a763;  */

void FUN_0061a6f4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___SCResult_00ac2c10;
  if (param_3 == 0) {
    func_0x00792500(PTR__OBJC_CLASS___SCResult_00ac2c10,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x007830c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00789920(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061a764; end: 0061a7a3; -[SCFutureObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a764(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac59c8,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac59c4,0);
  return;
}



/* Entry: 0061a7a4; end: 0061a7f7; +[SCObservable future:] */

void FUN_0061a7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3560;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061a7f8; end: 0061a86b; +[SCObservable future:performer:preferSynchronous:] */

void FUN_0061a7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3560;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785720();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061a86c; end: 0061a93f; -[SCJustObservable initWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061a86c(undefined8 param_1,undefined8 param_2,undefined8 ****param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 ***pppuStack_30;
  long lStack_28;
  
  puVar1 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuVar4 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR____NSArray0__struct_00999d10;
    if (param_3 != (undefined8 ****)0x0) {
      ppppuVar4 = &pppuStack_30;
      puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      pppuStack_30 = param_3;
      func_0x0077f200();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59d0);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59d0) = puVar2;
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    ppppuVar3 = &pppuStack_80;
    _objc_retain(ppppuVar4);
    puStack_78 = PTR_PTR_00ac4350;
    pppuStack_80 = param_3;
    _objc_msgSendSuper2(&pppuStack_80,PTR_s_init_00abbf70);
    if (ppppuVar3 != (undefined8 ****)0x0) {
      lVar6 = (long)_DAT_00ac59d0;
      _objc_retain(ppppuVar4);
      uVar5 = *(undefined8 *)((long)ppppuVar3 + lVar6);
      *(undefined8 *****)((long)ppppuVar3 + lVar6) = ppppuVar4;
      _objc_release(uVar5);
    }
    _objc_release(ppppuVar4);
    return (undefined1 *)ppppuVar3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0061a940; end: 0061a9c3; -[SCJustObservable initWithValues:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061a940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac59d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061a9c4; end: 0061ab07; -[SCJustObservable subscribe:] */

/* WARNING: Removing unreachable block (ram,0x0061aa58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a9c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + _DAT_00ac59d0);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar5 = 0;
    do {
      func_0x00789920(param_3);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
    lVar1 = lVar4;
    func_0x00780ea0();
  }
  _objc_release(lVar4);
  func_0x007806e0(param_3);
  puVar2 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(param_3 + _DAT_00ac59d0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061ab08; end: 0061ab1b; -[SCJustObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ab08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac59d0,0);
  return;
}



/* Entry: 0061ab1c; end: 0061ab67; +[SCObservable just:] */

void FUN_0061ab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3568;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786f80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061ab68; end: 0061abb3; +[SCObservable justAll:] */

void FUN_0061ab68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3568;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061abb4; end: 0061ac0f; -[SCNeverObservable subscribe:] */

void FUN_0061abb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3548;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061ac10; end: 0061ac2b; +[SCObservable never] */

void FUN_0061ac10(void)

{
  _objc_alloc_init(PTR_PTR_00ac3570);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0061ac2c; end: 0061acd7; -[SCAnonymousObserver initWithNext:complete:] */

undefined1 *
FUN_0061ac2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061acd8; end: 0061acef; -[SCAnonymousObserver next:] */

void FUN_0061acd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0061ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 0061acf0; end: 0061ad03; -[SCAnonymousObserver complete] */

void FUN_0061acf0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0061acfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 0061ad04; end: 0061ad33; -[SCAnonymousObserver .cxx_destruct] */

void FUN_0061ad04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061ad34; end: 0061adef; -[SCProxyObserver initWithGeneratedObservable:observer:delegate:] */

undefined1 *
FUN_0061ad34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_00ac4360;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061adf0; end: 0061ae37; -[SCProxyObserver next:] */

void FUN_0061adf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00789920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061ae38; end: 0061ae77; -[SCProxyObserver complete] */

void FUN_0061ae38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x0078abc0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061ae78; end: 0061aeab; -[SCProxyObserver .cxx_destruct] */

void FUN_0061ae78(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061aeac; end: 0061af07; -[SCObservable subscribe:] */

void FUN_0061aeac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3548;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061af08; end: 0061af83; -[SCObservable subscribeOnNext:] */

void FUN_0061af08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3578;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785d80();
  _objc_release(param_3);
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0061af84; end: 0061afff; -[SCObservable subscribeOnComplete:] */

void FUN_0061af84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3578;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785d80();
  _objc_release(param_3);
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0061b000; end: 0061b08f; -[SCObservable subscribeOnNext:onComplete:] */

void FUN_0061b000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3578;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785d80();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0061b090; end: 0061b093; -[SCObservable unsubscribe:] */

void FUN_0061b090(void)

{
  return;
}



/* Entry: 0061b094; end: 0061b097; -[SCBehaviorSubject value] */

void FUN_0061b094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_mostRecentValue_00abd260);
  return;
}



/* Entry: 0061b098; end: 0061b137; -[SCBehaviorSubject init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061b098(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4368;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59ec);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59ec) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59f0);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59f0) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0061b138; end: 0061b207; -[SCBehaviorSubject initWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061b138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4368;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59ec);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59ec) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59f0);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59f0) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_00ac59f4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061b208; end: 0061b257; -[SCBehaviorSubject dealloc] */

void FUN_0061b208(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x007875a0();
  if ((uVar1 & 1) == 0) {
    func_0x007806e0(param_1);
  }
  puStack_28 = PTR_PTR_00ac4368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061b258; end: 0061b2a3; -[SCBehaviorSubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b258(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0078f080(param_1,param_2,param_3);
  func_0x00789920(*(undefined8 *)(param_1 + _DAT_00ac59f0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061b2a4; end: 0061b2d3; -[SCBehaviorSubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b2a4(long param_1,undefined8 param_2)

{
  func_0x0078e7e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac59f0),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061b2d4; end: 0061b37f; -[SCBehaviorSubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x0077e7a0(*(undefined8 *)(param_1 + _DAT_00ac59ec),param_2,param_3);
  lVar1 = param_1;
  func_0x00789540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00789920(param_3,param_2,lVar1);
  }
  func_0x007875a0();
  if ((int)param_1 != 0) {
    func_0x007806e0(param_3);
  }
  puVar2 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061b380; end: 0061b38f; -[SCBehaviorSubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac59ec),PTR_s_removeObserver__00abda48);
  return;
}



/* Entry: 0061b390; end: 0061b39f; -[SCBehaviorSubject mostRecentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b390(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,(long)_DAT_00ac59f4,1);
  return;
}



/* Entry: 0061b3a0; end: 0061b3ab; -[SCBehaviorSubject setMostRecentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b3a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 0061b3ac; end: 0061b3bf; -[SCBehaviorSubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0061b3ac(long param_1)

{
  return *(byte *)(param_1 + _DAT_00ac59e8) & 1;
}



/* Entry: 0061b3c0; end: 0061b3cf; -[SCBehaviorSubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b3c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac59e8) = param_3;
  return;
}



/* Entry: 0061b3d0; end: 0061b41f; -[SCBehaviorSubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b3d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac59f4,0);
  _objc_storeStrong(param_1 + _DAT_00ac59f0,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac59ec,0);
  return;
}



/* Entry: 0061b420; end: 0061b4bf; -[SCPublishSubject init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061b420(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4370;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59fc);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59fc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a00);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5a00) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0061b4c0; end: 0061b50f; -[SCPublishSubject dealloc] */

void FUN_0061b4c0(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x007875a0();
  if ((uVar1 & 1) == 0) {
    func_0x007806e0(param_1);
  }
  puStack_28 = PTR_PTR_00ac4370;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061b510; end: 0061b51f; -[SCPublishSubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5a00),PTR_s_next__00abd358);
  return;
}



/* Entry: 0061b520; end: 0061b54f; -[SCPublishSubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b520(long param_1,undefined8 param_2)

{
  func_0x0078e7e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5a00),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061b550; end: 0061b5c7; -[SCPublishSubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x007875a0();
  if ((int)lVar1 != 0) {
    func_0x007806e0(param_3);
  }
  func_0x0077e7a0(*(undefined8 *)(param_1 + _DAT_00ac59fc),param_2,param_3);
  puVar2 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061b5c8; end: 0061b5d7; -[SCPublishSubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac59fc),PTR_s_removeObserver__00abda48);
  return;
}



/* Entry: 0061b5d8; end: 0061b5eb; -[SCPublishSubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0061b5d8(long param_1)

{
  return *(byte *)(param_1 + _DAT_00ac59f8) & 1;
}



/* Entry: 0061b5ec; end: 0061b5fb; -[SCPublishSubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b5ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac59f8) = param_3;
  return;
}



/* Entry: 0061b5fc; end: 0061b63b; -[SCPublishSubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b5fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac59fc,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5a00,0);
  return;
}



/* Entry: 0061b63c; end: 0061b66f; -[SCSubject init] */

void FUN_0061b63c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4378;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0061b670; end: 0061b6a3; -[SCSubject dealloc] */

void FUN_0061b670(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4378;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061b6a4; end: 0061b6a7; -[SCSubject next:] */

void FUN_0061b6a4(void)

{
  return;
}



/* Entry: 0061b6a8; end: 0061b6ab; -[SCSubject complete] */

void FUN_0061b6a8(void)

{
  return;
}



/* Entry: 0061b6ac; end: 0061ba5b; -[SCLatestCombinedMultiObserver initWithObservables:combiner:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0061b6ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_108 = PTR_PTR_00ac4380;
  puVar1 = &uStack_110;
  puVar4 = (undefined8 *)PTR_s_init_00abbf70;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_00ac5a04;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(long *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a08);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a08) = uVar2;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_00ac5a0c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_00ac2d78;
    func_0x00792260();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a10);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5a10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCDisposableObserverLifecycle_00ac3158;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a14);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5a14) = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1;
    _objc_initWeak(&uStack_118,puVar1);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00780ea0();
    puVar3 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar6 != 0) {
      lVar9 = *plStack_150;
      do {
        lVar7 = 0;
        do {
          if (*plStack_150 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = *(undefined8 *)(lStack_158 + lVar7 * 8);
          puStack_190 = puVar3;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_0061ba5c;
          puStack_178 = &UNK_00a0b148;
          _objc_copyWeak(auStack_168,&uStack_118);
          puVar4 = &uStack_118;
          uStack_170 = uVar2;
          _objc_copyWeak(auStack_198,puVar4);
          func_0x00792400(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x0077fa40();
          _objc_release(uVar2);
          _objc_destroyWeak(auStack_198);
          _objc_destroyWeak(auStack_168);
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
        lVar6 = param_3;
        func_0x00780ea0();
      } while (lVar6 != 0);
    }
    _objc_release(param_3);
    lVar6 = param_3;
    func_0x00780e80();
    if (lVar6 == 0) {
      func_0x007806e0(*(undefined8 *)((long)puVar1 + lVar8));
    }
    _objc_destroyWeak(&uStack_118);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_destroyWeak(&uStack_118);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar4);
  lVar6 = lVar6 + 0x28;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    lVar8 = (long)_DAT_00ac5a18;
    __ZNSt3__15mutex4lockEv(lVar6 + lVar8);
    func_0x0078f4a0(*(undefined8 *)(lVar6 + _DAT_00ac5a10));
    func_0x00782560(lVar6);
    __ZNSt3__15mutex6unlockEv(lVar6 + lVar8);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar4);
  return puVar4;
}



/* Entry: 0061ba5c; end: 0061bafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ba5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_00ac5a18;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    func_0x0078f4a0(*(undefined8 *)(param_1 + _DAT_00ac5a10));
    func_0x00782560(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0061bafc; end: 0061bb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bafc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_00ac5a18;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    *(long *)(param_1 + _DAT_00ac5a1c) = *(long *)(param_1 + _DAT_00ac5a1c) + 1;
    func_0x00792e60(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061bb70; end: 0061bb7f; -[SCLatestCombinedMultiObserver dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bb70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5a14),PTR_s_disposeAll_00abb5b8);
  return;
}



/* Entry: 0061bb80; end: 0061bca3; -[SCLatestCombinedMultiObserver emitNext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bb80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_00ac5a10);
  func_0x00780e80();
  lVar3 = (long)_DAT_00ac5a04;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00780e80();
  if (lVar1 == lVar2) {
    lVar2 = *(long *)(param_1 + lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_00999f30;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_0061bca4;
    puStack_40 = &UNK_00a0b1a8;
    lStack_38 = param_1;
    _SCMapArray(lVar2,&puStack_58);
    uVar4 = *(undefined8 *)(param_1 + _DAT_00ac5a0c);
    lVar3 = *(long *)(param_1 + _DAT_00ac5a08);
    lVar1 = lVar2;
    if (lVar3 != 0) {
      lVar1 = lVar3;
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00789920(uVar4);
    if (lVar3 != 0) {
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 0061bca4; end: 0061bcd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bca4(long param_1,undefined8 param_2)

{
  func_0x00789ea0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_00ac5a10),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0061bcd4; end: 0061bd2b; -[SCLatestCombinedMultiObserver tryComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bcd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_00ac5a04);
  func_0x00780e80();
  if (lVar1 == *(long *)(param_1 + _DAT_00ac5a1c)) {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_1 + _DAT_00ac5a0c),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 0061bd2c; end: 0061bda7; -[SCLatestCombinedMultiObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bd2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5a14,0);
  _objc_storeStrong(param_1 + _DAT_00ac5a10,0);
  _objc_storeStrong(param_1 + _DAT_00ac5a04,0);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_00ac5a18);
  _objc_storeStrong(param_1 + _DAT_00ac5a0c,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5a08,0);
  return;
}



/* Entry: 0061bda8; end: 0061bdd7; -[SCLatestCombinedMultiObserver .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061bda8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ac5a18);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 0061bdd8; end: 0061c093; -[SCLatestCombinedObserver initWithFirstObservable:secondObservable:combiner:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0061bdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
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
  puStack_80 = PTR_PTR_00ac4388;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_5;
    func_0x00780e20();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5a20);
    *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5a20) = uVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_00ac5a24;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_6;
    _objc_release(uVar3);
    _objc_initWeak(auStack_90,puVar2);
    puVar1 = PTR___NSConcreteStackBlock_00999f30;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_0061c094;
    puStack_a0 = &UNK_00a0b1d8;
    _objc_copyWeak(auStack_98,auStack_90);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_0061c138;
    puStack_c8 = &UNK_00a0b178;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar3 = param_3;
    func_0x00792400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5a34);
    *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5a34) = uVar3;
    _objc_release(uVar4);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_0061c1a8;
    puStack_f0 = &UNK_00a0b1d8;
    _objc_copyWeak(auStack_e8,auStack_90);
    _objc_copyWeak(auStack_110,auStack_90);
    uVar3 = param_4;
    func_0x00792400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5a40);
    *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5a40) = uVar3;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 0061c094; end: 0061c137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_00ac5a28;
    __ZNSt3__15mutex4lockEv(param_1 + lVar2);
    lVar3 = (long)_DAT_00ac5a2c;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_2;
    _objc_release(uVar1);
    func_0x00782560(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0061c138; end: 0061c1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c138(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_00ac5a28;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    *(undefined1 *)(param_1 + _DAT_00ac5a30) = 1;
    func_0x00792e60(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061c1a8; end: 0061c24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c1a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_00ac5a28;
    __ZNSt3__15mutex4lockEv(param_1 + lVar2);
    lVar3 = (long)_DAT_00ac5a38;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_2;
    _objc_release(uVar1);
    func_0x00782560(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0061c24c; end: 0061c2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c24c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_00ac5a28;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    *(undefined1 *)(param_1 + _DAT_00ac5a3c) = 1;
    func_0x00792e60(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061c2bc; end: 0061c2f3; -[SCLatestCombinedObserver dispose] */

/* WARNING: Possible PIC construction at 0x0061c2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0061c2e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5a34),PTR_s_dispose_00abb5b0);
  return;
}



/* Entry: 0061c2f4; end: 0061c383; -[SCLatestCombinedObserver emitNext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c2f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + _DAT_00ac5a2c) != 0) && (*(long *)(param_1 + _DAT_00ac5a38) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ac5a24);
    lVar1 = *(long *)(param_1 + _DAT_00ac5a20);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789920(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(lVar1);
    return;
  }
  return;
}



/* Entry: 0061c384; end: 0061c3bf; -[SCLatestCombinedObserver tryComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c384(long param_1)

{
  if ((*(char *)(param_1 + _DAT_00ac5a30) == '\x01') &&
     (*(char *)(param_1 + _DAT_00ac5a3c) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_1 + _DAT_00ac5a24),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 0061c3c0; end: 0061c44b; -[SCLatestCombinedObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c3c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5a40,0);
  _objc_storeStrong(param_1 + _DAT_00ac5a38,0);
  _objc_storeStrong(param_1 + _DAT_00ac5a34,0);
  _objc_storeStrong(param_1 + _DAT_00ac5a2c,0);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_00ac5a28);
  _objc_storeStrong(param_1 + _DAT_00ac5a24,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5a20,0);
  return;
}



/* Entry: 0061c44c; end: 0061c47b; -[SCLatestCombinedObserver .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c44c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ac5a28);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 0061c47c; end: 0061c59b; -[SCDistinctUntilChangedObserver initWithObserver:keySelector:keyComparer:] */

undefined1 *
FUN_0061c47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4390;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061c59c; end: 0061c6c3; -[SCDistinctUntilChangedObserver next:] */

void FUN_0061c59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x18);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(uVar3 + 0x10))(uVar3,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
      __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
      goto LAB_0061c664;
    }
  }
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar4);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  func_0x00789920(*(undefined8 *)(param_1 + 8));
LAB_0061c664:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061c6c4; end: 0061c6cb; -[SCDistinctUntilChangedObserver complete] */

void FUN_0061c6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061c6cc; end: 0061c71b; -[SCDistinctUntilChangedObserver .cxx_destruct] */

void FUN_0061c6cc(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061c71c; end: 0061c73b; -[SCDistinctUntilChangedObserver .cxx_construct] */

void FUN_0061c71c(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 0061c73c; end: 0061c81f; -[SCFlatMapObserver initWithObserver:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0061c73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_00ac5a58;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a5c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5a5c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061c820; end: 0061ca5f; -[SCFlatMapObserver next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c820(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  qword *pqVar5;
  undefined8 uVar6;
  qword *pqVar7;
  long lVar8;
  qword *pqVar9;
  qword *pqVar10;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_00ac5a5c);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_00ac3588;
  _objc_alloc();
  func_0x00785740();
  lVar8 = (long)_DAT_00ac5a60;
  __ZNSt3__15mutex4lockEv(param_1 + lVar8);
  *(long *)(param_1 + _DAT_00ac5a64) = *(long *)(param_1 + _DAT_00ac5a64) + 1;
  __ZNSt3__15mutex6unlockEv(param_1 + lVar8);
  lVar4 = lVar2;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__15mutex4lockEv(param_1 + lVar8);
  if ((*(byte *)(param_1 + _DAT_00ac5a68) & 1) == 0) {
    plVar1 = (long *)(param_1 + _DAT_00ac5a6c);
    pqVar7 = (qword *)plVar1[1];
    pqVar9 = (qword *)(plVar1 + 1);
    while (pqVar10 = pqVar9, pqVar7 != (qword *)0x0) {
      while (pqVar5 = pqVar7, pqVar9 = pqVar5, (undefined *)pqVar5[4] <= puVar3) {
        if (puVar3 <= (undefined *)pqVar5[4]) goto LAB_0061c9b0;
        pqVar7 = (qword *)pqVar5[1];
        if ((qword *)pqVar5[1] == (qword *)0x0) {
          pqVar10 = pqVar5 + 1;
          goto LAB_0061c95c;
        }
      }
      pqVar7 = (qword *)*pqVar5;
    }
LAB_0061c95c:
    pqVar5 = (qword *)(segment_command_00000020.segname + 8);
    __Znwm();
    _objc_retain(puVar3);
    pqVar5[4] = (qword)puVar3;
    pqVar5[5] = 0;
    *pqVar5 = 0;
    pqVar5[1] = 0;
    pqVar5[2] = (qword)pqVar9;
    *pqVar10 = (qword)pqVar5;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
    }
    FUN_0046691c(plVar1[1],pqVar5);
    plVar1[2] = plVar1[2] + 1;
LAB_0061c9b0:
    _objc_retain(lVar4);
    uVar6 = pqVar5[5];
    pqVar5[5] = lVar4;
    _objc_release(uVar6);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar8);
  }
  else {
    __ZNSt3__15mutex6unlockEv(param_1 + lVar8);
    func_0x007822e0(lVar4);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061ca60; end: 0061caf3; -[SCFlatMapObserver complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ca60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_00ac5a60;
  __ZNSt3__15mutex4lockEv(param_1 + lVar1);
  if ((*(byte *)(param_1 + _DAT_00ac5a70) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + lVar1);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_00ac5a70) = 1;
  lVar2 = *(long *)(param_1 + _DAT_00ac5a64);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5a58),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061caf4; end: 0061ccf3; -[SCFlatMapObserver dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061caf4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)(param_1 + _DAT_00ac5a6c);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,plVar1[2]);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_00ac5a60;
  __ZNSt3__15mutex4lockEv(param_1 + lVar14);
  *(undefined1 *)(param_1 + _DAT_00ac5a68) = 1;
  plVar16 = (long *)*plVar1;
  while (plVar16 != plVar1 + 1) {
    if (plVar16[5] != 0) {
      func_0x0077e720(puVar5);
    }
    plVar3 = (long *)plVar16[1];
    plVar17 = plVar16;
    if ((long *)plVar16[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar17[2];
        bVar4 = plVar17 != (long *)*plVar16;
        plVar17 = plVar16;
      } while (bVar4);
    }
    else {
      do {
        plVar16 = plVar3;
        plVar3 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
  }
  FUN_0061cf10(plVar1[1]);
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = (long)(plVar1 + 1);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar14);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00780ea0();
  if (puVar6 != (undefined *)0x0) {
    lVar14 = *plStack_110;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(puVar5);
        }
        func_0x007822e0(*(undefined8 *)(lStack_118 + (long)puVar15 * 8));
        puVar15 = puVar15 + 1;
      } while (puVar6 != puVar15);
      puVar6 = puVar5;
      puVar8 = &uStack_120;
      func_0x00780ea0();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    __Unwind_Resume();
    _objc_retain(puVar8);
    lVar14 = (long)_DAT_00ac5a60;
    __ZNSt3__15mutex4lockEv(puVar6 + lVar14);
    *(long *)(puVar6 + _DAT_00ac5a64) = *(long *)(puVar6 + _DAT_00ac5a64) + -1;
    puVar2 = (undefined8 *)(puVar6 + _DAT_00ac5a6c);
    puVar9 = puVar2 + 1;
    puVar7 = (undefined8 *)*puVar9;
    puVar11 = puVar7;
    puVar12 = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        lVar13 = 8;
        if (puVar8 <= (undefined1 *)puVar11[4]) {
          lVar13 = 0;
          puVar12 = puVar11;
        }
        puVar10 = (undefined8 *)((long)puVar11 + lVar13);
        puVar11 = (undefined8 *)*puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
      if ((puVar12 != puVar9) && ((undefined1 *)puVar12[4] <= puVar8)) {
        puVar11 = puVar12;
        puVar9 = (undefined8 *)puVar12[1];
        if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
          do {
            puVar10 = (undefined8 *)puVar11[2];
            bVar4 = puVar11 != (undefined8 *)*puVar10;
            puVar11 = puVar10;
          } while (bVar4);
        }
        else {
          do {
            puVar10 = puVar9;
            puVar9 = (undefined8 *)*puVar10;
          } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
        }
        if ((undefined8 *)*puVar2 == puVar12) {
          *puVar2 = puVar10;
        }
        puVar2[2] = puVar2[2] + -1;
        func_0x005c76b0(puVar7,puVar12);
        _objc_release(puVar12[5]);
        _objc_release(puVar12[4]);
        __ZdlPv(puVar12);
      }
    }
    if (puVar6[_DAT_00ac5a70] == '\x01') {
      lVar13 = puVar2[2];
      __ZNSt3__15mutex6unlockEv(puVar6 + lVar14);
      if (lVar13 == 0) {
        func_0x007806e0(*(undefined8 *)(puVar6 + _DAT_00ac5a58));
      }
    }
    else {
      __ZNSt3__15mutex6unlockEv(puVar6 + lVar14);
    }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar8);
    return;
  }
  return;
}



/* Entry: 0061ccf4; end: 0061ce67; -[SCFlatMapObserver proxyObserverDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ccf4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_00ac5a60;
  __ZNSt3__15mutex4lockEv(param_1 + lVar10);
  *(long *)(param_1 + _DAT_00ac5a64) = *(long *)(param_1 + _DAT_00ac5a64) + -1;
  puVar2 = (undefined8 *)(param_1 + _DAT_00ac5a6c);
  plVar5 = puVar2 + 1;
  plVar4 = (long *)*plVar5;
  plVar7 = plVar4;
  plVar8 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      lVar9 = 8;
      if (param_3 <= (ulong)plVar7[4]) {
        lVar9 = 0;
        plVar8 = plVar7;
      }
      puVar1 = (undefined8 *)((long)plVar7 + lVar9);
      plVar7 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if ((plVar8 != plVar5) && ((ulong)plVar8[4] <= param_3)) {
      plVar7 = plVar8;
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar3 = plVar7 != (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((long *)*puVar2 == plVar8) {
        *puVar2 = plVar6;
      }
      puVar2[2] = puVar2[2] + -1;
      func_0x005c76b0(plVar4,plVar8);
      _objc_release(plVar8[5]);
      _objc_release(plVar8[4]);
      __ZdlPv(plVar8);
    }
  }
  if (*(char *)(param_1 + _DAT_00ac5a70) == '\x01') {
    lVar9 = puVar2[2];
    __ZNSt3__15mutex6unlockEv(param_1 + lVar10);
    if (lVar9 == 0) {
      func_0x007806e0(*(undefined8 *)(param_1 + _DAT_00ac5a58));
    }
  }
  else {
    __ZNSt3__15mutex6unlockEv(param_1 + lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061ce68; end: 0061cec3; -[SCFlatMapObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ce68(long param_1)

{
  FUN_0061cf10(*(undefined8 *)(param_1 + _DAT_00ac5a6c + 8));
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_00ac5a60);
  _objc_storeStrong(param_1 + _DAT_00ac5a5c,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5a58,0);
  return;
}



/* Entry: 0061cec4; end: 0061cf0f; -[SCFlatMapObserver .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061cec4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ac5a60);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_00ac5a6c);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  return;
}



/* Entry: 0061cf10; end: 0061cf57;  */

void FUN_0061cf10(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0061cf10(*param_1);
    FUN_0061cf10(param_1[1]);
    _objc_release(param_1[5]);
    _objc_release(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 0061cf58; end: 0061d02b; -[SCFlatMapLatestObserver initWithObserver:mapper:] */

undefined1 *
FUN_0061cf58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac43a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061d02c; end: 0061d173; -[SCFlatMapLatestObserver next:] */

void FUN_0061d02c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac3588;
  _objc_alloc();
  func_0x00785740();
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x69) = 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  lVar3 = lVar1;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x007822e0();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
  }
  *(long *)(param_1 + 0x60) = lVar3;
  _objc_retain(lVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061d174; end: 0061d1d7; -[SCFlatMapLatestObserver complete] */

void FUN_0061d174(long param_1)

{
  byte bVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_00998b28)(param_1 + 0x18);
    return;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  bVar1 = *(byte *)(param_1 + 0x69);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  if ((bVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061d1d8; end: 0061d243; -[SCFlatMapLatestObserver proxyObserverDidComplete:] */

void FUN_0061d1d8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  func_0x007822e0(*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x69) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar2);
  cVar1 = *(char *)(param_1 + 0x68);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 0061d244; end: 0061d293; -[SCFlatMapLatestObserver .cxx_destruct] */

void FUN_0061d244(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061d294; end: 0061d2bb; -[SCFlatMapLatestObserver .cxx_construct] */

long FUN_0061d294(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x18);
  return param_1;
}


