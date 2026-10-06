/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10907a88c; end: 10907a89b; -[SCDefaultStackedImageProcessCommandContainer initWithFullScreenCommands:] */

void FUN_10907a88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f800000,param_1,PTR_s_initWithStackedCommands_leftSwip_1125f07e0,param_3,0,0);
  return;
}



/* Entry: 10907a89c; end: 10907a8cb; -[SCDefaultStackedImageProcessCommandContainer stackedCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10907a89c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112780d38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10907a8cc; end: 10907a8fb; -[SCDefaultStackedImageProcessCommandContainer leftSwipedCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10907a8cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112780d3c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10907a8fc; end: 10907a92b; -[SCDefaultStackedImageProcessCommandContainer rightSwipedCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10907a8fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112780d40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10907a92c; end: 10907a93b; -[SCDefaultStackedImageProcessCommandContainer dualCommandSwipingOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10907a92c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112780d44);
}



/* Entry: 10907a93c; end: 10907a9d3; -[SCDefaultStackedImageProcessCommandContainer _arrayFromSingleCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10907a93c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puStack_98;
  undefined1 *puStack_30;
  long lStack_28;
  
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuVar4 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined1 *)0x0) {
    puVar8 = (undefined *)0x0;
    ppuVar4 = (undefined1 **)0x0;
  }
  else {
    puStack_30 = param_3;
    _objc_retain(param_3);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  if (ppuVar4 == (undefined1 **)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10907ab7c;
  }
  if ((undefined1 **)param_1 == ppuVar4) {
    puVar8 = (undefined *)0x1;
    goto LAB_10907ab7c;
  }
  lVar5 = (long)_DAT_112780d38;
  puVar10 = *(undefined1 **)(param_1 + lVar5);
  puVar1 = (undefined1 *)ppuVar4;
  func_0x00010c24d2c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == puVar1) {
LAB_10907aa78:
    puVar9 = (undefined1 *)(long)_DAT_112780d3c;
    puVar11 = *(undefined1 **)(param_1 + (long)puVar9);
    puVar2 = (undefined1 *)ppuVar4;
    func_0x00010c08ea00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == puVar2) {
LAB_10907aad8:
      lVar5 = (long)_DAT_112780d40;
      puVar6 = *(undefined1 **)(param_1 + lVar5);
      puVar3 = (undefined1 *)ppuVar4;
      func_0x00010c140d60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == puVar3) {
        _objc_release(puVar3);
        puVar8 = (undefined *)0x1;
      }
      else {
        puVar8 = *(undefined **)(param_1 + lVar5);
        puVar6 = (undefined1 *)ppuVar4;
        func_0x00010c140d60(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071b60(puVar8,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
      if (puVar11 != puVar2) goto LAB_10907ab50;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + (long)puVar9);
      puVar9 = (undefined1 *)ppuVar4;
      func_0x00010c08ea00(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar7,param_2,puVar9);
      if ((int)uVar7 != 0) goto LAB_10907aad8;
      puVar8 = (undefined *)0x0;
LAB_10907ab50:
      _objc_release(puVar9);
    }
    _objc_release(puVar2);
    if (puVar10 != puVar1) goto LAB_10907ab6c;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + lVar5);
    puStack_98 = (undefined1 *)ppuVar4;
    func_0x00010c24d2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071b60(uVar7,param_2,puStack_98);
    if ((int)uVar7 != 0) goto LAB_10907aa78;
    puVar8 = (undefined *)0x0;
LAB_10907ab6c:
    _objc_release(puStack_98);
  }
  _objc_release(puVar1);
LAB_10907ab7c:
  _objc_release(ppuVar4);
  return puVar8;
}



/* Entry: 10907a9d4; end: 10907aba7; -[SCDefaultStackedImageProcessCommandContainer commandContainerHasSameCommandsWithContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10907a9d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar5 = 0;
    goto LAB_10907ab7c;
  }
  if (param_1 == param_3) {
    uVar5 = 1;
    goto LAB_10907ab7c;
  }
  lVar3 = (long)_DAT_112780d38;
  lVar8 = *(long *)(param_1 + lVar3);
  lVar1 = param_3;
  func_0x00010c24d2c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == lVar1) {
LAB_10907aa78:
    lVar6 = (long)_DAT_112780d3c;
    lVar9 = *(long *)(param_1 + lVar6);
    lVar3 = param_3;
    func_0x00010c08ea00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == lVar3) {
LAB_10907aad8:
      lVar7 = (long)_DAT_112780d40;
      lVar4 = *(long *)(param_1 + lVar7);
      lVar2 = param_3;
      func_0x00010c140d60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == lVar2) {
        _objc_release(lVar2);
        uVar5 = 1;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        lVar4 = param_3;
        func_0x00010c140d60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071b60(uVar5,param_2,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar2);
      }
      if (lVar9 != lVar3) goto LAB_10907ab50;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      lVar6 = param_3;
      func_0x00010c08ea00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar5,param_2,lVar6);
      if ((int)uVar5 != 0) goto LAB_10907aad8;
      uVar5 = 0;
LAB_10907ab50:
      _objc_release(lVar6);
    }
    _objc_release(lVar3);
    if (lVar8 != lVar1) goto LAB_10907ab6c;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + lVar3);
    uStack_68 = param_3;
    func_0x00010c24d2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071b60(uVar5,param_2,uStack_68);
    if ((int)uVar5 != 0) goto LAB_10907aa78;
    uVar5 = 0;
LAB_10907ab6c:
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
LAB_10907ab7c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10907aba8; end: 10907abf7; -[SCDefaultStackedImageProcessCommandContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10907aba8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112780d40,0);
  _objc_storeStrong(param_1 + _DAT_112780d3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780d38,0);
  return;
}



/* Entry: 10907abf8; end: 10907aca3; -[SCUnifiedColorFilterRequestCommandMapper initWithDefaultMapper:ucoMapper:isVideo:] */

undefined1 *
FUN_10907abf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700290;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907aca4; end: 10907ad43; -[SCUnifiedColorFilterRequestCommandMapper mappedCommandsFromCommandContainer:commandContainerConfiguration:] */

void FUN_10907aca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be3f040(param_1,param_2,param_3);
  if (((int)lVar1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    param_1 = *(long *)(param_1 + 8);
    func_0x00010c0badc0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bed0b20(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10907ad44; end: 10907b11b; -[SCUnifiedColorFilterRequestCommandMapper _ucoMappedCommandsFromCommandContainer:commandContainerConfiguration:] */

void FUN_10907ad44(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = param_4;
  func_0x00010c24d2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be80a00(param_2,param_3,uVar7,puVar1,puVar4);
  _objc_release(uVar7);
  uVar7 = param_4;
  func_0x00010c08ea00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be80a00(param_2,param_3,uVar7,puVar2,puVar5);
  _objc_release(uVar7);
  func_0x00010bf8aea0(param_4);
  if (param_1 < 1.0) {
    uVar7 = param_4;
    func_0x00010c140d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be80a00(param_2,param_3,uVar7,puVar3,puVar6);
    _objc_release(uVar7);
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar9 = puVar1;
  func_0x00010bf529e0();
  if (((puVar9 != (undefined *)0x0) ||
      (puVar9 = puVar2, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) ||
     (puVar9 = puVar3, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10907b11c;
    puStack_90 = &UNK_110ad6e48;
    _objc_retain(puVar1);
    puStack_88 = puVar1;
    _objc_retain(puVar2);
    puStack_80 = puVar2;
    _objc_retain(puVar3);
    puStack_78 = puVar3;
    lStack_70 = param_2;
    _objc_retain(param_5);
    ppuVar10 = &puStack_a8;
    uStack_68 = param_5;
    _objc_retainBlock();
    puVar9 = puVar5;
    func_0x00010bf529e0();
    ppuVar12 = ppuVar10;
    if (((puVar9 == (undefined *)0x0) &&
        (puVar9 = puVar2, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) &&
       ((puVar9 = puVar3, func_0x00010bf529e0(), puVar9 == (undefined *)0x0 &&
        (puVar9 = puVar1, func_0x00010bf529e0(), puVar9 == (undefined *)0x0)))) {
      (*(code *)ppuVar10[2])(0x3f800000,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
    }
    else {
      puVar9 = puVar6;
      func_0x00010bf529e0();
      if (((puVar9 == (undefined *)0x0) &&
          (puVar9 = puVar3, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) &&
         ((puVar9 = puVar2, func_0x00010bf529e0(), puVar9 == (undefined *)0x0 &&
          (puVar9 = puVar1, func_0x00010bf529e0(), puVar9 == (undefined *)0x0)))) {
        (*(code *)ppuVar10[2])(0,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
      }
      else {
        func_0x00010bf8aea0(param_4);
        (*(code *)ppuVar10[2])(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
      }
    }
    func_0x00010befa120(puVar9,param_3,ppuVar12);
    _objc_release(ppuVar12);
    _objc_release(ppuVar10);
    _objc_release(uStack_68);
    _objc_release(puStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
  }
  puVar9 = puVar4;
  func_0x00010bf529e0();
  if (((puVar9 != (undefined *)0x0) ||
      (puVar9 = puVar5, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) ||
     (puVar9 = puVar6, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) {
    puVar9 = PTR_PTR_1126c40d0;
    _objc_alloc(PTR_PTR_1126c40d0);
    func_0x00010bf8aea0(param_4);
    func_0x00010c04b780(puVar9,param_3,puVar4,puVar5,puVar6);
    lVar11 = *(long *)(param_2 + 8);
    func_0x00010c0badc0(lVar11,param_3,puVar9,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      func_0x00010befa160(puVar8,param_3,lVar11);
    }
    _objc_release(lVar11);
    _objc_release(puVar9);
  }
  puVar9 = puVar8;
  func_0x00010bf51e00(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10907b11c; end: 10907b18f;  */

void FUN_10907b11c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c40d0;
  _objc_alloc(PTR_PTR_1126c40d0);
  func_0x00010c04b780(param_1);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
  func_0x00010c27fea0(uVar2,param_3,puVar1,*(undefined8 *)(param_2 + 0x40),
                      *(undefined1 *)(*(long *)(param_2 + 0x38) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10907b190; end: 10907b1e7; -[SCUnifiedColorFilterRequestCommandMapper _isCommandUcoConvertible:] */

undefined8 FUN_10907b190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c081f20();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c080440(uVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10907b1e8; end: 10907b2b3; -[SCUnifiedColorFilterRequestCommandMapper _isCommandContainerUCOCompatible:] */

ulong FUN_10907b1e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c24d2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf04920();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c08ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf04920();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c140d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf04920();
      _objc_release(uVar1);
      goto LAB_10907b298;
    }
  }
  uVar2 = 1;
LAB_10907b298:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10907b2b4; end: 10907b2bb;  */

void FUN_10907b2b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isUnifiedCameraObjectCompatible_1125fe1d8);
  return;
}



/* Entry: 10907b2bc; end: 10907b3ff; -[SCUnifiedColorFilterRequestCommandMapper _processCommands:ucoCommands:regularCommands:] */

void FUN_10907b2bc(int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      iVar3 = param_1;
      func_0x00010be3f060();
      uVar1 = param_4;
      if (iVar3 == 0) {
        uVar1 = param_5;
      }
      func_0x00010befa120(uVar1);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10907b400; end: 10907b42f; -[SCUnifiedColorFilterRequestCommandMapper .cxx_destruct] */

void FUN_10907b400(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907b430; end: 10907b48b; -[SCImageProcessTextureObject dealloc] */

void FUN_10907b430(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    _glDeleteTextures(1,param_1 + 8);
  }
  else {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_112700298;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10907b48c; end: 10907b493; -[SCImageProcessTextureObject esTexture] */

undefined8 FUN_10907b48c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10907b494; end: 10907b49b; -[SCImageProcessTextureObject setEsTexture:] */

void FUN_10907b494(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10907b49c; end: 10907b4a3; -[SCImageProcessTextureObject texture] */

undefined4 FUN_10907b49c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10907b4a4; end: 10907b4ab; -[SCImageProcessTextureObject setTexture:] */

void FUN_10907b4a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10907b4ac; end: 10907b4b3; -[SCImageProcessTextureObject width] */

undefined4 FUN_10907b4ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10907b4b4; end: 10907b4bb; -[SCImageProcessTextureObject setWidth:] */

void FUN_10907b4b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10907b4bc; end: 10907b4c3; -[SCImageProcessTextureObject height] */

undefined4 FUN_10907b4bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10907b4c4; end: 10907b4cb; -[SCImageProcessTextureObject setHeight:] */

void FUN_10907b4c4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10907b4cc; end: 10907b4f3; -[SCImageProcessGLContext glContext] */

void FUN_10907b4cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10907b4f4; end: 10907b603; -[SCImageProcessGLContext init] */

undefined1 * FUN_10907b4f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127002a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
    _objc_alloc();
    func_0x00010bfefb80();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
      _objc_alloc();
      func_0x00010bfefb80();
      uVar4 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_release(uVar4);
      *(undefined1 *)((long)puVar1 + 0x10) = 0;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _CVOpenGLESTextureCacheCreate
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,0,*(undefined8 *)((long)puVar1 + 8)
               ,0,(undefined1 *)((long)puVar1 + 0x30));
    uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
    *(undefined8 *)((long)puVar1 + 0x40) = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10907b604; end: 10907b64b; -[SCImageProcessGLContext dealloc] */

void FUN_10907b604(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CFRelease(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1127002a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10907b64c; end: 10907b673; -[SCImageProcessGLContext useAsCurrentContext] */

void FUN_10907b64c(long param_1,undefined8 param_2)

{
  func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDisable_11034b518)(0xb71);
  return;
}



/* Entry: 10907b674; end: 10907b79b; -[SCImageProcessGLContext createTextureWithData:pixelWidth:pixelHeight:textureUnit:pixelFormat:minFilterType:magFilterType:enableMipmapping:] */

undefined4
FUN_10907b674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,char param_10)

{
  undefined4 uStack_64;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    param_8 = 0x2601;
  }
  _glGenTextures(1,&uStack_64);
  _glActiveTexture(param_6);
  _glBindTexture(0xde1,uStack_64);
  _glPixelStorei(0xd05,4);
  _glPixelStorei(0xcf5,4);
  _glTexParameteri(0xde1,0x2801,param_8);
  _glTexParameteri(0xde1,0x2800,param_9);
  _glTexParameteri(0xde1,0x2802,0x812f);
  _glTexParameteri(0xde1,0x2803,0x812f);
  _glTexImage2D(0xde1,0,0x1908,param_4,param_5,0,param_7,0x1401,param_3);
  if ((param_10 != '\0') && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    _glGenerateMipmap(0xde1);
  }
  return uStack_64;
}



/* Entry: 10907b79c; end: 10907b8bf; -[SCImageProcessGLContext createRenderingTargetTextureWithRGBPixelBuffer:textureUnit:textureRef:textureCacheRef:] */

undefined8
FUN_10907b79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_5 != (undefined8 *)0x0) {
    uVar3 = param_3;
    _CVPixelBufferGetWidth(param_3);
    uVar1 = param_3;
    _CVPixelBufferGetHeight(param_3);
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVOpenGLESTextureCacheCreateTextureFromImage
              (uVar2,param_6,param_3,0,0xde1,0x1908,uVar3,uVar1,0x1401000080e1,0,param_5);
    if ((int)uVar2 == 0) {
      uVar3 = *param_5;
      _CVOpenGLESTextureGetName(uVar3);
      _glActiveTexture(param_4);
      _glBindTexture(0xde1,uVar3);
      _glPixelStorei(0xd05,4);
      _glPixelStorei(0xcf5,4);
      _glTexParameterf(0x47012f00,0xde1,0x2802);
      _glTexParameterf(0x47012f00,0xde1,0x2803);
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar3,0);
      return uVar3;
    }
  }
  return 0x7fffffff;
}



/* Entry: 10907b8c0; end: 10907b8c7; -[SCImageProcessGLContext createRenderingTargetTextureWithRGBPixelBuffer:textureUnit:textureRef:] */

void FUN_10907b8c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf58450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createRenderingTargetTextureWith_1125b3ab8);
  return;
}



/* Entry: 10907b8c8; end: 10907ba73; -[SCImageProcessGLContext createTextureWithRGBPixelBuffer:textureUnit:textureRef:textureCacheRef:] */

long FUN_10907b8c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_5 == (long *)0x0) {
    lVar3 = 0x7fffffff;
  }
  else {
    uVar1 = param_3;
    _CVPixelBufferGetWidth(param_3);
    uVar2 = param_3;
    _CVPixelBufferGetHeight(param_3);
    _CVOpenGLESTextureCacheCreateTextureFromImage
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,param_6,param_3,0,0xde1,0x1908,
               uVar1,uVar2,0x1401000080e1,0,param_5);
    lVar3 = *param_5;
    if (lVar3 == 0) {
      _CVPixelBufferLockBaseAddress(param_3,1);
      _CVPixelBufferGetBaseAddress(param_3);
      func_0x00010bf596e0(param_1);
      _CVPixelBufferUnlockBaseAddress(param_3,1);
      lVar3 = param_1;
    }
    else {
      _CVOpenGLESTextureGetName();
      _glActiveTexture(param_4);
      _glBindTexture(0xde1,lVar3);
      _glPixelStorei(0xd05,4);
      _glPixelStorei(0xcf5,4);
      _glTexParameteri(0xde1,0x2801,0x2601);
      _glTexParameteri(0xde1,0x2800,0x2601);
      _glTexParameterf(0x47012f00,0xde1,0x2802);
      _glTexParameterf(0x47012f00,0xde1,0x2803);
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,lVar3,0);
    }
  }
  return lVar3;
}



/* Entry: 10907ba74; end: 10907ba7b; -[SCImageProcessGLContext createTextureWithRGBPixelBuffer:textureUnit:textureRef:] */

void FUN_10907ba74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createTextureWithRGBPixelBuffer__1125b3f78);
  return;
}



/* Entry: 10907ba7c; end: 10907bbf3; -[SCImageProcessGLContext createTexturesWithYUVPixelBuffer:lumaTextureUnit:chromaTextureUnit:lumaTextureRef:chromaTextureRef:lumaTextureId:chromaTextureId:textureCacheRef:] */

undefined8
FUN_10907ba7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,long *param_6,long *param_7,long param_8,long param_9,
             undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  if ((((param_6 != (long *)0x0) && (param_7 != (long *)0x0)) && (param_8 != 0)) && (param_9 != 0))
  {
    uVar1 = param_3;
    _CVPixelBufferGetWidth(param_3);
    uVar2 = param_3;
    _CVPixelBufferGetHeight(param_3);
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVOpenGLESTextureCacheCreateTextureFromImage
              (uVar3,param_10,param_3,0,0xde1,0x1909,uVar1,uVar2,0x140100001909,0,param_6);
    _CVOpenGLESTextureCacheCreateTextureFromImage
              (uVar3,param_10,param_3,0,0xde1,0x190a,(int)uVar1 / 2,(int)uVar2 / 2,0x14010000190a,1,
               param_7);
    if ((*param_6 == 0) || (*param_7 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010beb1990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__setupYUVPixelBufferInputTexture_11258a008,param_3,param_4,param_5,
                 param_8,param_9);
      return param_1;
    }
    _CVOpenGLESTextureGetName();
    _CVOpenGLESTextureGetName(*param_7);
    func_0x00010beb1960(param_1);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10907bbf4; end: 10907bc1b; -[SCImageProcessGLContext createTexturesWithYUVPixelBuffer:lumaTextureUnit:chromaTextureUnit:lumaTextureRef:chromaTextureRef:lumaTextureId:chromaTextureId:] */

void FUN_10907bbf4(void)

{
  func_0x00010bf59780();
  return;
}



/* Entry: 10907bc1c; end: 10907bd1b; -[SCImageProcessGLContext _setupYUVPixelBufferInputTextureWithLumaTexture:chromaTexture:lumaTextureUnit:chromaTextureUnit:] */

void FUN_10907bc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _glActiveTexture(param_5);
  _glBindTexture(0xde1,param_3);
  _glPixelStorei(0xd05,4);
  _glPixelStorei(0xcf5,4);
  _glTexParameteri(0xde1,0x2801,0x2601);
  _glTexParameteri(0xde1,0x2800,0x2601);
  _glTexParameteri(0xde1,0x2802,0x812f);
  _glTexParameteri(0xde1,0x2803,0x812f);
  _glActiveTexture(param_6);
  _glBindTexture(0xde1,param_4);
  _glPixelStorei(0xd05,4);
  _glPixelStorei(0xcf5,4);
  _glTexParameteri(0xde1,0x2801,0x2601);
  _glTexParameteri(0xde1,0x2800,0x2601);
  _glTexParameteri(0xde1,0x2802,0x812f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glTexParameteri_11034b7f8)(0xde1,0x2803,0x812f);
  return;
}



/* Entry: 10907bd1c; end: 10907bf6f; -[SCImageProcessGLContext _setupYUVPixelBufferInputTextureWithPixelBuffer:lumaTextureUnit:chromaTextureUnit:lumaTextureId:chromaTextureId:] */

bool FUN_10907bd1c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_6 != (undefined4 *)0x0 && param_7 != (undefined4 *)0x0) {
    _CVPixelBufferLockBaseAddress(param_3,0);
    uVar1 = param_3;
    _CVPixelBufferGetWidth(param_3);
    uVar2 = param_3;
    _CVPixelBufferGetHeight(param_3);
    uVar3 = param_3;
    _CVPixelBufferGetBaseAddressOfPlane(param_3,0);
    uVar4 = param_3;
    _CVPixelBufferGetBytesPerRowOfPlane(param_3,0);
    _glActiveTexture(param_4);
    _glGenTextures(1,param_6);
    _glBindTexture(0xde1,*param_6);
    _glPixelStorei(0xcf5,4);
    lVar5 = param_1;
    func_0x00010bf04be0();
    if (lVar5 == 3) {
      _glPixelStorei(0xcf2,uVar4);
    }
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    _glTexImage2D(0xde1,0,0x1909,uVar1,uVar2,0,0x1909,0x1401,uVar3);
    uVar3 = param_3;
    _CVPixelBufferGetBaseAddressOfPlane(param_3,1);
    uVar4 = param_3;
    _CVPixelBufferGetBytesPerRowOfPlane(param_3,1);
    _glActiveTexture(param_5);
    _glGenTextures(1,param_7);
    _glBindTexture(0xde1,*param_7);
    _glPixelStorei(0xcf5,4);
    func_0x00010bf04be0();
    if (param_1 == 3) {
      _glPixelStorei(0xcf2,uVar4 >> 1 & 0x7fffffff);
    }
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    _glTexImage2D(0xde1,0,0x190a,(int)uVar1 / 2,(int)uVar2 / 2,0,0x190a,0x1401,uVar3);
    _glPixelStorei(0xcf2,0);
    _CVPixelBufferUnlockBaseAddress(param_3,0);
  }
  return param_6 != (undefined4 *)0x0 && param_7 != (undefined4 *)0x0;
}



/* Entry: 10907bf70; end: 10907bfa7; -[SCImageProcessGLContext invalidateIntermediateTextureCache] */

void FUN_10907bf70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObjects_112628590);
    return;
  }
  return;
}



/* Entry: 10907bfa8; end: 10907bfaf; -[SCImageProcessGLContext namedIntermediateTexture:pixelWidth:pixelHeight:textureUnit:] */

void FUN_10907bfa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d51d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_namedIntermediateTexture_pixelWi_112612e88);
  return;
}



/* Entry: 10907bfb0; end: 10907c23b; -[SCImageProcessGLContext namedIntermediateTexture:pixelWidth:pixelHeight:textureUnit:data:] */

undefined *
FUN_10907bfb0(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar6 = (undefined *)0x7fffffff;
  iVar5 = (int)param_4;
  if ((iVar5 != 0) && ((int)param_5 != 0)) {
    puVar2 = *(undefined **)(param_1 + 0x18);
    puVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 == (undefined *)0x0) ||
       ((puVar6 = puVar2, func_0x00010c2a5040(), (int)puVar6 != iVar5 ||
        (puVar6 = puVar2, func_0x00010bfe0640(), (int)puVar6 != (int)param_5)))) {
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
      puStack_60 = PTR____kCFBooleanTrue_11034ab68;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      iVar1 = 0;
      _CVPixelBufferCreateWithBytes
                (0,param_4 & 0xffffffff,param_5 & 0xffffffff,0x42475241,param_7,iVar5 << 2,0,0,
                 puVar6,&lStack_78);
      if (lStack_78 != 0) {
        if (iVar1 == 0) {
          _CVOpenGLESTextureCacheCreateTextureFromImage
                    (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                     *(undefined8 *)(param_1 + 0x30),lStack_78,0,0xde1,0x1908,param_4,param_5,
                     0x1401000080e1,0,&lStack_70);
        }
        _CVPixelBufferRelease(lStack_78);
      }
      puVar6 = PTR_PTR_1126dd2a0;
      _objc_opt_new();
      _objc_release(puVar2);
      func_0x00010c2256c0(puVar6);
      func_0x00010c1a7d00(puVar6);
      func_0x00010c197420(puVar6);
      if (lStack_70 == 0) {
        func_0x00010bf596e0(param_1);
        func_0x00010c2139e0(puVar6);
      }
      else {
        _CVOpenGLESTextureGetName();
        func_0x00010c2139e0(puVar6);
        _glActiveTexture(param_6);
        puVar3 = puVar6;
        func_0x00010c26ce20(puVar6);
        _glBindTexture(0xde1,puVar3);
        _glTexParameteri(0xde1,0x2802,0x812f);
        _glTexParameteri(0xde1,0x2803,0x812f);
      }
      puVar3 = puVar6;
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
      puVar2 = puVar6;
    }
    puVar6 = puVar2;
    func_0x00010c26ce20();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = param_3;
    _CGColorSpaceCreateDeviceRGB();
    puVar2 = puVar3;
    _CGImageGetWidth(puVar3);
    _CGImageGetHeight(puVar3);
    iVar5 = (int)puVar2;
    uVar4 = 0;
    _CGBitmapContextCreate(0,(long)iVar5,(long)(int)puVar3,8,(long)(iVar5 << 2),puVar6,1);
    _CGContextDrawImage(0,0,(double)iVar5,(double)(int)puVar3);
    _CGColorSpaceRelease(puVar6);
    _CGBitmapContextGetData(uVar4);
    func_0x00010bf596e0(param_3);
    _CGContextRelease(uVar4);
    return param_3;
  }
  return puVar6;
}



/* Entry: 10907c23c; end: 10907c32b; -[SCImageProcessGLContext createTextureWithImage:textureUnit:] */

undefined8 FUN_10907c23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = param_1;
  _CGColorSpaceCreateDeviceRGB();
  uVar2 = param_3;
  _CGImageGetWidth(param_3);
  _CGImageGetHeight(param_3);
  iVar3 = (int)uVar2;
  uVar2 = 0;
  _CGBitmapContextCreate(0,(long)iVar3,(long)(int)param_3,8,(long)(iVar3 << 2),uVar1,1);
  _CGContextDrawImage(0,0,(double)iVar3,(double)(int)param_3);
  _CGColorSpaceRelease(uVar1);
  _CGBitmapContextGetData(uVar2);
  func_0x00010bf596e0(param_1);
  _CGContextRelease(uVar2);
  return param_1;
}



/* Entry: 10907c32c; end: 10907c423; -[SCImageProcessGLContext renderbufferStorage:fromDrawable:] */

undefined1 FUN_10907c32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10907c424;
  puStack_78 = &UNK_110862058;
  lStack_70 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  _objc_retain(param_4);
  uStack_68 = param_4;
  func_0x00010bcbe2c4("APPSTORE",&puStack_90);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10907c424; end: 10907c45b;  */

void FUN_10907c424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c130440(uVar1,param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28))
  ;
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10907c45c; end: 10907c483; -[SCImageProcessGLContext clearColor] */

void FUN_10907c45c(void)

{
  _glClearColor(0,0,0,0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glClear_11034b3e8)(0x4000);
  return;
}



/* Entry: 10907c484; end: 10907c4b3; -[SCImageProcessGLContext clearColorWithTransparent:] */

void FUN_10907c484(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    _glClearColor(0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glClear_11034b3e8)(0x4000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearColor_1125ac538);
  return;
}



/* Entry: 10907c4b4; end: 10907c4bf; -[SCImageProcessGLContext presentRenderbuffer] */

void FUN_10907c4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentRenderbuffer__1126211e8,0x8d41);
  return;
}



/* Entry: 10907c4c0; end: 10907c4c7; -[SCImageProcessGLContext sharegroup] */

void FUN_10907c4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_sharegroup_112668b70);
  return;
}



/* Entry: 10907c4c8; end: 10907c4cf; -[SCImageProcessGLContext apiVersion] */

void FUN_10907c4c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_API_11254dce8);
  return;
}



/* Entry: 10907c4d0; end: 10907c4d7; -[SCImageProcessGLContext contextId] */

undefined8 FUN_10907c4d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10907c4d8; end: 10907c4df; -[SCImageProcessGLContext textureCache] */

undefined8 FUN_10907c4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10907c4e0; end: 10907c4e7; -[SCImageProcessGLContext outputSize] */

undefined1  [16] FUN_10907c4e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 10907c4e8; end: 10907c4ef; -[SCImageProcessGLContext setOutputSize:] */

void FUN_10907c4e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 10907c4f0; end: 10907c4f7; -[SCImageProcessGLContext disableCATransactionFlush] */

undefined1 FUN_10907c4f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10907c4f8; end: 10907c4ff; -[SCImageProcessGLContext setDisableCATransactionFlush:] */

void FUN_10907c4f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10907c500; end: 10907c53b; -[SCImageProcessGLContext .cxx_destruct] */

void FUN_10907c500(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907c53c; end: 10907c5ef;  */

undefined * FUN_10907c53c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain();
  func_0x00010c0b6660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc3520();
  _CGDataProviderCreateWithFilename();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  _CGImageCreateWithPNGDataProvider(puVar3,0,0,0);
  _CGDataProviderRelease(puVar3);
  return puVar1;
}



/* Entry: 10907c5f0; end: 10907c643; +[SCImageProcessGlobalQueue sharedQueue] */

void FUN_10907c5f0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730890 != -1) {
    func_0x000107c27d9c(0x113730890,&PTR___NSConcreteGlobalBlock_110ad6e98);
  }
  uVar1 = uRam0000000113730898;
  _objc_retain(uRam0000000113730898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10907c644; end: 10907c66f;  */

void FUN_10907c644(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf4d0;
  _objc_alloc_init();
  uVar1 = puRam0000000113730898;
  puRam0000000113730898 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10907c670; end: 10907c8e3; -[SCImageProcessGlobalQueue init] */

undefined8 * FUN_10907c670(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1127002a8;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x21,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x21;
    _dispatch_get_global_queue(0x21,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &UNK_10f54c2d2;
    _dispatch_queue_create_with_target_V2(&UNK_10f54c2d2,uVar3,uVar4);
    uVar10 = puVar2[2];
    puVar2[2] = puVar5;
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar4 = puVar2[1];
    puVar2[1] = uVar3;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[3];
    puVar2[3] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[4];
    puVar2[4] = puVar5;
    _objc_release(uVar3);
    lVar6 = 0x113730880;
    _objc_loadWeakRetained();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10907c8e4;
    puStack_70 = &UNK_110842e18;
    _objc_retain(puVar2);
    ppuVar7 = &puStack_88;
    puStack_68 = puVar2;
    _objc_retainBlock(ppuVar7);
    puVar8 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[7];
    puVar2[7] = puVar8;
    _objc_release(uVar3);
    _objc_retain(puVar8);
    _objc_initWeak(auStack_90,puVar2);
    puStack_c8 = puVar5;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10907ca00;
    puStack_b0 = &UNK_110848218;
    _objc_retain(lVar6);
    lStack_a8 = lVar6;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(puVar8);
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar8;
    _objc_retainBlock(ppuVar9);
    ppuVar1 = ppuVar7;
    if (lVar6 != 0) {
      ppuVar1 = ppuVar9;
    }
    func_0x000107c312cc("APPSTORE",ppuVar1);
    _objc_release(ppuVar9);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(puStack_68);
    _objc_release(lVar6);
  }
  return puVar2;
}



/* Entry: 10907c8e4; end: 10907c9ff;  */

void FUN_10907c8e4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__markMainThreadSetupAsFinished_112574f00);
  return;
}



/* Entry: 10907ca00; end: 10907cc03;  */

void FUN_10907ca00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10907cc04;
  puStack_60 = &UNK_110846510;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf72840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10907cc34;
  puStack_88 = &UNK_110846510;
  _objc_copyWeak(auStack_80,param_1 + 0x30);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf79200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,param_1 + 0x30);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5d580();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10907cc04; end: 10907cc93;  */

void FUN_10907cc04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10907cc94; end: 10907cc97; -[SCImageProcessGlobalQueue _applicationWillResignActive:] */

void FUN_10907cc94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startSuspendOpenGLOperations_112671d50);
  return;
}



/* Entry: 10907cc98; end: 10907cc9b; -[SCImageProcessGlobalQueue _applicationDidBecomeActive:] */

void FUN_10907cc98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeOpenGLOperations_11262cf68);
  return;
}



/* Entry: 10907cc9c; end: 10907ccbf; -[SCImageProcessGlobalQueue _applicationDidEnterBackground:] */

void FUN_10907cc9c(undefined8 param_1)

{
  func_0x00010c250ca0();
                    /* WARNING: Could not recover jumptable at 0x00010c2a1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_waitUntilOpenGLOperationsHalted_112685f78);
  return;
}



/* Entry: 10907ccc0; end: 10907ccfb; -[SCImageProcessGlobalQueue _applicationDidReceiveMemoryWarning:] */

void FUN_10907ccc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10907ccfc; end: 10907cd2b; -[SCImageProcessGlobalQueue startSuspendOpenGLOperations] */

void FUN_10907ccfc(long param_1)

{
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10907cd2c; end: 10907cd7b; -[SCImageProcessGlobalQueue resumeOpenGLOperations] */

void FUN_10907cd2c(long param_1)

{
  long lVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010be9b060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10907cd7c; end: 10907cd8f; -[SCImageProcessGlobalQueue waitUntilOpenGLOperationsHalted] */

/* WARNING: Possible PIC construction at 0x00010006eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006eb08) */

void FUN_10907cd7c(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110ad6eb8;
  func_0x000107c61174();
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110ad6eb8);
  if ((bRam0000000113817d68 & 1) == 0) {
    iVar1 = 0x13817d68;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_sync");
      pcRam0000000113817d60 = pcVar3;
      func_0x000107c60e4c(0x113817d68);
    }
  }
  pcVar3 = pcRam0000000113817d60;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110ad6eb8);
  func_0x000107c61180();
  (*pcVar3)(uVar4,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10907cd90; end: 10907ce0f; -[SCImageProcessGlobalQueue _markMainThreadSetupAsFinished] */

void FUN_10907cd90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  *(bool *)(param_1 + 0x30) = puVar2 == (undefined *)0x0;
  _objc_release(puVar1);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x31) = 1;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010be9b060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10907ce10; end: 10907cfe7; -[SCImageProcessGlobalQueue _scheduleForProcessingWithPendingRequestPresent:oldRequest:] */

void FUN_10907ce10(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x31) != '\x01') goto LAB_10907cfa8;
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
LAB_10907cf40:
    puVar9 = (undefined8 *)param_3;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\x01') {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      lVar10 = *(long *)(param_1 + 0x18);
      _objc_retain(lVar10);
      lVar3 = lVar10;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar11 = *plStack_110;
        do {
          lVar12 = 0;
          do {
            if (*plStack_110 != lVar11) {
              _objc_enumerationMutation(lVar10);
            }
            puVar4 = *(undefined1 **)(lStack_118 + lVar12 * 8);
            puVar5 = puVar4;
            func_0x00010bdc15a0();
            if ((int)puVar5 == 0) {
              _objc_retain(puVar4);
              _objc_release(lVar10);
              if (puVar4 == (undefined1 *)0x0) goto LAB_10907cf80;
              func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
              puVar9 = (undefined8 *)puVar4;
              func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18));
              goto LAB_10907cf74;
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          lVar3 = lVar10;
          puVar9 = &uStack_120;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar10);
      param_3 = (undefined1 *)puVar9;
      goto LAB_10907cf40;
    }
    puVar4 = *(undefined1 **)(param_1 + 0x18);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x18));
    puVar9 = (undefined8 *)puVar4;
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
LAB_10907cf74:
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf529e0();
    *(undefined8 *)(param_1 + 0x40) = uVar6;
  }
LAB_10907cf80:
  param_3 = (undefined1 *)puVar9;
  if (param_4 != (undefined1 *)0x0) {
    param_3 = param_4;
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20));
  }
  if (puVar4 != (undefined1 *)0x0) {
    param_3 = puVar4;
    func_0x00010be9b440(param_1);
  }
  _objc_release(puVar4);
LAB_10907cfa8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_4 + 8),0xffffffffffffffff);
  bVar1 = param_4[0x30];
  _dispatch_semaphore_signal(*(undefined8 *)(param_4 + 8));
  if (((bVar1 & 1) != 0) || (puVar5 = param_3, func_0x00010bdc15a0(), (int)puVar5 != 0)) {
    lVar3 = *(long *)(param_4 + 0x28);
    if (lVar3 == 0) {
      puVar7 = PTR_PTR_1126dd2a8;
      _objc_alloc_init();
      uVar6 = *(undefined8 *)(param_4 + 0x28);
      *(undefined **)(param_4 + 0x28) = puVar7;
      _objc_release(uVar6);
      uVar6 = 0x1137308a8;
      func_0x00010c18e6e0(*(undefined8 *)(param_4 + 0x28));
      puVar7 = PTR_PTR_1126dd2b0;
      func_0x00010bf04be0(*(undefined8 *)(param_4 + 0x28));
      _objc_loadWeakRetained(0x1137308a8);
      func_0x00010c0a7900(puVar7);
      _objc_release(uVar6);
      lVar3 = *(long *)(param_4 + 0x28);
    }
    func_0x00010c28fe00(lVar3);
  }
  puVar5 = param_3;
  func_0x00010c1429c0();
  _objc_retain(0);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = puVar8;
  _glGetError();
  iVar2 = (int)puVar7;
  while (iVar2 != 0) {
    if (((bRam0000000113730888 & 1) != 0) &&
       (puVar7 = puVar8, func_0x00010bf529e0(), puVar7 < (undefined *)0x3)) {
      puVar7 = PTR_PTR_1126dd2b0;
      func_0x00010bfc4b20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8);
      _objc_release();
    }
    _glGetError();
    iVar2 = (int)puVar7;
  }
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010be8f8c0(param_4);
  }
  func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
  _objc_release(puVar8);
  _objc_release(0);
  _objc_release(param_3);
  return;
}



/* Entry: 10907cfe8; end: 10907d1b3; -[SCImageProcessGlobalQueue _executeRequest:] */

void FUN_10907cfe8(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  bVar1 = *(byte *)(param_1 + 0x30);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  if (((bVar1 & 1) != 0) || (uVar3 = param_3, func_0x00010bdc15a0(), (int)uVar3 != 0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
      puVar5 = PTR_PTR_1126dd2a8;
      _objc_alloc_init();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar5;
      _objc_release(uVar7);
      uVar7 = 0x1137308a8;
      func_0x00010c18e6e0(*(undefined8 *)(param_1 + 0x28));
      puVar5 = PTR_PTR_1126dd2b0;
      func_0x00010bf04be0(*(undefined8 *)(param_1 + 0x28));
      _objc_loadWeakRetained(0x1137308a8);
      func_0x00010c0a7900(puVar5);
      _objc_release(uVar7);
      lVar4 = *(long *)(param_1 + 0x28);
    }
    func_0x00010c28fe00(lVar4);
  }
  uVar3 = param_3;
  func_0x00010c1429c0();
  _objc_retain(0);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = puVar6;
  _glGetError();
  iVar2 = (int)puVar5;
  while (iVar2 != 0) {
    if (((bRam0000000113730888 & 1) != 0) &&
       (puVar5 = puVar6, func_0x00010bf529e0(), puVar5 < (undefined *)0x3)) {
      puVar5 = PTR_PTR_1126dd2b0;
      func_0x00010bfc4b20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release();
    }
    _glGetError();
    iVar2 = (int)puVar5;
  }
  if ((uVar3 & 1) == 0) {
    func_0x00010be8f8c0(param_1);
  }
  func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
  _objc_release(puVar6);
  _objc_release(0);
  _objc_release(param_3);
  return;
}



/* Entry: 10907d1b4; end: 10907d42b; -[SCImageProcessGlobalQueue _reportFailureWithRequest:error:openGLErrors:] */

void FUN_10907d1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0) {
    lVar1 = param_5;
    func_0x00010bf529e0();
    if (lVar1 == 0) goto LAB_10907d408;
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f78ed8,1000,
                        PTR____NSDictionary0__struct_11034ab58);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  uVar4 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,uVar4,&PTR____CFConstantStringClassReference_110f78f98);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c26a800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,uVar4,&PTR____CFConstantStringClassReference_110f78fd8);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bf4e080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,uVar4,&PTR____CFConstantStringClassReference_110f78ff8);
  _objc_release(uVar4);
  lVar1 = param_5;
  func_0x00010bf446e0(param_5,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,lVar1,&PTR____CFConstantStringClassReference_110f79018);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = param_4;
  func_0x00010bf87dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010bf3ec40(param_4);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010bf99240(puVar2,param_2,puVar5,puVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126dd2b0;
  uVar4 = 0x1137308a0;
  _objc_loadWeakRetained(0x1137308a0);
  uVar8 = 0x1137308a8;
  _objc_loadWeakRetained(0x1137308a8);
  func_0x00010c0a5940(puVar5,param_2,puVar2,uVar4,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
LAB_10907d408:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10907d42c; end: 10907d4bb; -[SCImageProcessGlobalQueue _scheduleOnQueue:] */

void FUN_10907d42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10907d4bc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10907d4bc; end: 10907d507;  */

void FUN_10907d4bc(long param_1,undefined8 param_2)

{
  func_0x00010be0bda0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  _dispatch_semaphore_wait(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),0xffffffffffffffff);
  func_0x00010be9b060(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}



/* Entry: 10907d508; end: 10907d57b; -[SCImageProcessGlobalQueue addRequest:] */

void FUN_10907d508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010be9b060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10907d57c; end: 10907d5b3; -[SCImageProcessGlobalQueue _queueDebugInfo] */

void FUN_10907d57c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f1eb78);
  return;
}



/* Entry: 10907d5b4; end: 10907d5fb; -[SCImageProcessGlobalQueue queueDebugInfo] */

void FUN_10907d5b4(long param_1)

{
  long lVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010be856a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10907d5fc; end: 10907d647; -[SCImageProcessGlobalQueue processingRequestIdentifier] */

undefined8 FUN_10907d5fc(long param_1)

{
  undefined8 uVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf04a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



/* Entry: 10907d648; end: 10907d64f; -[SCImageProcessGlobalQueue glEsVersion] */

void FUN_10907d648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_apiVersion_11259eca0)
  ;
  return;
}



/* Entry: 10907d650; end: 10907d657; -[SCImageProcessGlobalQueue pending] */

undefined8 FUN_10907d650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10907d658; end: 10907d6b7; -[SCImageProcessGlobalQueue .cxx_destruct] */

void FUN_10907d658(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907d6b8; end: 10907d74f; +[SCImageProcessLogger _iOSErrorCodeWithError:] */

undefined ** FUN_10907d6b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x00010bf3ec40();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1ec58;
  if (param_3 != 1000) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f1ec38;
  if (param_3 != 300) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1ec18;
  if (param_3 != 200) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f1ebf8;
  if (param_3 != 100) {
    ppuVar2 = ppuVar1;
  }
  if (param_3 < 300) {
    ppuVar3 = ppuVar2;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1ebd8;
  if (param_3 != 3) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f1ebb8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1eb98;
  if (param_3 != 1) {
    ppuVar1 = ppuVar2;
  }
  if (param_3 < 100) {
    ppuVar3 = ppuVar1;
  }
  return ppuVar3;
}



/* Entry: 10907d750; end: 10907d7cb; +[SCImageProcessLogger _sourceWithError:] */

void FUN_10907d750(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10907d7cc; end: 10907d853; +[SCImageProcessLogger _processorWithError:] */

undefined ** FUN_10907d7cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c067fc0(), 0xd < uVar2)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  else {
    ppuVar3 = (undefined **)(&PTR_PTR_110ad6ed8)[uVar2];
  }
  _objc_release(uVar1);
  return ppuVar3;
}



/* Entry: 10907d854; end: 10907db37; +[SCImageProcessLogger _additionalInfoWithError:] */

void FUN_10907d854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  _objc_opt_class(param_1);
  func_0x00010be36720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110f1edf8);
  _objc_release(param_1);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110f1ee18);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110f1ee38);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110f1ee58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110f1ee78);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110dae878);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f79018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110f1ee98);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f1eeb8;
  }
  else {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10907db38; end: 10907ddc3; +[SCImageProcessLogger logError:withUserBlizzardLogger:grapheneRegistry:] */

void FUN_10907db38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be36720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be82b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bebe760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dd2b8;
  _objc_opt_new(PTR_PTR_1126dd2b8);
  uVar5 = param_3;
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c09e560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8080(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010c206c40(puVar4,param_2,uVar3);
  func_0x00010c1e3a20(puVar4,param_2,uVar2);
  _objc_opt_class(param_1);
  func_0x00010bdc9180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c165a20(puVar4,param_2,param_1);
  _objc_release(param_1);
  uVar5 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0b2e60(uVar5,param_2,puVar4);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126bb928;
  func_0x00010bfe85e0(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110f1eed8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar5 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar8 = uVar5;
  func_0x00010c094240(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10907ddc4; end: 10907de37; +[SCImageProcessLogger getDescriptionForGLError:] */

void FUN_10907ddc4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_3 - 0x500 < 7) && ((0x67U >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
    puVar2 = (&PTR_PTR_110ad6f48)[param_3 - 0x500];
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10907de38; end: 10907de5f; +[SCImageProcessLogger _glContextApi:] */

undefined ** FUN_10907de38(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110ad6f80)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f1eff8;
}



/* Entry: 10907de60; end: 10907df3f; +[SCImageProcessLogger logGlContextApi:withGrapheneRegistry:] */

void FUN_10907de60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  func_0x00010be24080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dd258;
  func_0x00010bfccd80(PTR_PTR_1126dd258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bfe8620(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10907df40; end: 10907df7f;  */

undefined8 FUN_10907df40(void)

{
  if (lRam00000001137308b0 != -1) {
    func_0x000107c27d9c(0x1137308b0,&PTR___NSConcreteGlobalBlock_110ad6f98);
  }
  return uRam00000001137308b8;
}



/* Entry: 10907df80; end: 10907e01b;  */

void FUN_10907df80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  _CGDataProviderCreateWithFilename();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  _CGImageCreateWithPNGDataProvider(puVar3,0,0,0);
  puRam00000001137308b8 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbafb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGDataProviderRelease_110347380)(puVar3);
  return;
}



/* Entry: 10907e01c; end: 10907e0af;  */

undefined8 FUN_10907e01c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = param_1;
    _CVPixelBufferGetPixelFormatType();
    if ((int)lVar1 == 0x42475241) {
      uVar2 = 1;
    }
    else if ((int)lVar1 == 0x34323066) {
      _CVBufferGetAttachment(param_1,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,0);
      if ((param_1 == 0) || (_CFStringCompare(), param_1 != 0)) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 10907e0b0; end: 10907e14b;  */

void FUN_10907e0b0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uStack_34;
  
  uStack_34 = 0;
  _glGetShaderiv(param_1,0x8b84,&uStack_34);
  uVar3 = (ulong)uStack_34;
  if (((int)uStack_34 < 1) || (uVar1 = uVar3, _malloc(), uVar1 == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _glGetShaderInfoLog(param_1,uVar3,&uStack_34,uVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _free(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10907e14c; end: 10907e1f7; -[SCImageProcessProgramImpl initWithVertexShaderString:fragmentShaderString:] */

undefined1 *
FUN_10907e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127002b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907e1f8; end: 10907e56f; -[SCImageProcessProgramImpl compileWithError:] */

ulong FUN_10907e1f8(ulong param_1,undefined8 param_2,undefined **param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong unaff_x19;
  long lVar10;
  undefined **unaff_x20;
  ulong uVar11;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **ppuVar12;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  int iStack_170;
  uint uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  ulong uStack_108;
  undefined **ppuStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d0;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 1;
  uVar3 = param_1;
  ppuVar9 = param_3;
  uStack_f8 = unaff_x19;
  ppuStack_100 = unaff_x20;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    _glCreateProgram();
    *(int *)(param_1 + 0x28) = (int)uVar3;
    uVar1 = 0x8b31;
    _glCreateShader();
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bdc3520();
    uStack_c0 = uVar2;
    _glShaderSource(*(undefined4 *)(param_1 + 0x20),1,&uStack_c0,0);
    _glCompileShader(*(undefined4 *)(param_1 + 0x20));
    iStack_c4 = 1;
    ppuVar9 = (undefined **)&iStack_c4;
    _glGetShaderiv(*(undefined4 *)(param_1 + 0x20),0x8b81);
    uStack_f8 = param_1;
    ppuStack_100 = param_3;
    if (iStack_c4 == 1) {
      uVar1 = 0x8b30;
      _glCreateShader();
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bdc3520();
      unaff_x22 = (undefined **)0x1;
      uStack_d0 = uVar2;
      _glShaderSource(*(undefined4 *)(param_1 + 0x24),1,&uStack_d0,0);
      _glCompileShader(*(undefined4 *)(param_1 + 0x24));
      uVar3 = (ulong)*(uint *)(param_1 + 0x24);
      ppuVar9 = (undefined **)&iStack_c4;
      _glGetShaderiv(uVar3,0x8b81);
      uVar11 = (ulong)(iStack_c4 == 1);
      if (iStack_c4 == 1) {
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        if (param_3 != (undefined **)0x0) {
          ppuStack_e0 = &PTR____CFConstantStringClassReference_110f78f18;
          unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = (undefined **)(ulong)*(uint *)(param_1 + 0x24);
          FUN_10907e0b0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          unaff_x25 = &PTR____CFConstantStringClassReference_110f78ed8;
          uStack_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          uStack_b0 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
          ppuStack_98 = &PTR____CFConstantStringClassReference_110f1f098;
          if (unaff_x23 != (undefined **)0x0) {
            ppuStack_98 = unaff_x23;
          }
          ppuStack_a8 = &PTR____CFConstantStringClassReference_110f78fb8;
          ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f50;
          unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_a0 = unaff_x22;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined *)unaff_x24;
          ppuVar9 = unaff_x25;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_3 = puVar4;
          _objc_release(unaff_x26);
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
        }
        _glDeleteProgram(*(undefined4 *)(param_1 + 0x28));
        _glDeleteShader(*(undefined4 *)(param_1 + 0x20));
        uVar3 = (ulong)*(uint *)(param_1 + 0x24);
        _glDeleteShader();
      }
    }
    else {
      if (param_3 != (undefined **)0x0) {
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110f78f18;
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = (undefined **)(ulong)*(uint *)(param_1 + 0x20);
        FUN_10907e0b0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        unaff_x24 = &PTR____CFConstantStringClassReference_110f78ed8;
        uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        uStack_80 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
        ppuStack_68 = &PTR____CFConstantStringClassReference_110f1f098;
        if (unaff_x22 != (undefined **)0x0) {
          ppuStack_68 = unaff_x22;
        }
        ppuStack_78 = &PTR____CFConstantStringClassReference_110f78fb8;
        ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f50;
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar4;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = (undefined *)unaff_x23;
        ppuVar9 = unaff_x24;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = puVar5;
        _objc_release(unaff_x25);
        _objc_release(unaff_x22);
        _objc_release(puVar4);
      }
      _glDeleteProgram(*(undefined4 *)(param_1 + 0x28));
      uVar3 = (ulong)*(uint *)(param_1 + 0x20);
      _glDeleteShader();
      uVar11 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar11;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10907e570;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = uVar3;
  puStack_130 = unaff_x26;
  ppuStack_128 = unaff_x25;
  ppuStack_120 = unaff_x24;
  ppuStack_118 = unaff_x23;
  ppuStack_110 = unaff_x22;
  uStack_108 = uVar11;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (*(long *)(uVar3 + 0x30) == 0) {
    uVar11 = 1;
    if ((*(byte *)(uVar3 + 9) & 1) == 0) {
      _glAttachShader(*(undefined4 *)(uVar3 + 0x28),*(undefined4 *)(uVar3 + 0x20));
      _glAttachShader(*(undefined4 *)(uVar3 + 0x28),*(undefined4 *)(uVar3 + 0x24));
      _glLinkProgram(*(undefined4 *)(uVar3 + 0x28));
      iStack_170 = 1;
      uVar6 = (ulong)*(uint *)(uVar3 + 0x28);
      _glGetProgramiv(uVar6,0x8b82,&iStack_170);
      uVar11 = (ulong)(iStack_170 == 1);
      if (iStack_170 == 1) {
        *(undefined1 *)(uVar3 + 9) = 1;
      }
      else {
        if (ppuVar9 != (undefined **)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined4 *)(uVar3 + 0x28);
          uStack_16c = 0;
          _glGetProgramiv(uVar1,0x8b84,&uStack_16c);
          uVar6 = (ulong)uStack_16c;
          if (((int)uStack_16c < 1) || (uVar7 = uVar6, _malloc(), uVar7 == 0)) {
            ppuVar12 = (undefined **)0x0;
          }
          else {
            _glGetProgramInfoLog(uVar1,uVar6,&uStack_16c,uVar7);
            ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80();
            _objc_retainAutoreleasedReturnValue();
            _free(uVar7);
          }
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          uStack_168 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          uStack_160 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
          ppuStack_148 = &PTR____CFConstantStringClassReference_110f1f098;
          if (ppuVar12 != (undefined **)0x0) {
            ppuStack_148 = ppuVar12;
          }
          ppuStack_158 = &PTR____CFConstantStringClassReference_110f78fb8;
          ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f50;
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_150 = puVar4;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *ppuVar9 = puVar5;
          _objc_release(puVar8);
          _objc_release(ppuVar12);
          _objc_release(puVar4);
        }
        _glDetachShader(*(undefined4 *)(uVar3 + 0x28),*(undefined4 *)(uVar3 + 0x20));
        _glDeleteShader(*(undefined4 *)(uVar3 + 0x20));
        _glDetachShader(*(undefined4 *)(uVar3 + 0x28),*(undefined4 *)(uVar3 + 0x24));
        _glDeleteShader(*(undefined4 *)(uVar3 + 0x24));
        uVar6 = (ulong)*(uint *)(uVar3 + 0x28);
        _glDeleteProgram();
      }
    }
  }
  else {
    uVar11 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(uVar6 + 0x30);
  if (lVar10 == 0) {
    _glUseProgram(*(undefined4 *)(uVar6 + 0x28));
  }
  return (ulong)(lVar10 == 0);
}



/* Entry: 10907e570; end: 10907e7d3; -[SCImageProcessProgramImpl linkWithError:] */

bool FUN_10907e570(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  int iStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar2 = true;
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      _glAttachShader(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
      _glAttachShader(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
      _glLinkProgram(*(undefined4 *)(param_1 + 0x28));
      iStack_90 = 1;
      uVar3 = (ulong)*(uint *)(param_1 + 0x28);
      _glGetProgramiv(uVar3,0x8b82,&iStack_90);
      bVar2 = iStack_90 == 1;
      if (bVar2) {
        *(undefined1 *)(param_1 + 9) = 1;
      }
      else {
        if (param_3 != (undefined8 *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          uStack_8c = 0;
          _glGetProgramiv(uVar1,0x8b84,&uStack_8c);
          uVar3 = (ulong)uStack_8c;
          if (((int)uStack_8c < 1) || (uVar5 = uVar3, _malloc(), uVar5 == 0)) {
            ppuVar9 = (undefined **)0x0;
          }
          else {
            _glGetProgramInfoLog(uVar1,uVar3,&uStack_8c,uVar5);
            ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80();
            _objc_retainAutoreleasedReturnValue();
            _free(uVar5);
          }
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          uStack_80 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
          ppuStack_68 = &PTR____CFConstantStringClassReference_110f1f098;
          if (ppuVar9 != (undefined **)0x0) {
            ppuStack_68 = ppuVar9;
          }
          ppuStack_78 = &PTR____CFConstantStringClassReference_110f78fb8;
          ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f50;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_70 = puVar4;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_3 = puVar7;
          _objc_release(puVar6);
          _objc_release(ppuVar9);
          _objc_release(puVar4);
        }
        _glDetachShader(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
        _glDeleteShader(*(undefined4 *)(param_1 + 0x20));
        _glDetachShader(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
        _glDeleteShader(*(undefined4 *)(param_1 + 0x24));
        uVar3 = (ulong)*(uint *)(param_1 + 0x28);
        _glDeleteProgram();
      }
    }
  }
  else {
    bVar2 = false;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar2;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(uVar3 + 0x30);
  if (lVar8 == 0) {
    _glUseProgram(*(undefined4 *)(uVar3 + 0x28));
  }
  return lVar8 == 0;
}



/* Entry: 10907e7d4; end: 10907e803; -[SCImageProcessProgramImpl use] */

bool FUN_10907e7d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    _glUseProgram(*(undefined4 *)(param_1 + 0x28));
  }
  return lVar1 == 0;
}


