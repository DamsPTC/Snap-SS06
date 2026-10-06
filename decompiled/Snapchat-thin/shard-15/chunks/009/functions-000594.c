/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd582e0; end: 10bd58317; -[FBTweakStore addResetBlock:] */

void FUN_10bd582e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd58318; end: 10bd585f3; -[FBTweakStore reset] */

void FUN_10bd58318(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  func_0x00010c27d700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      lVar5 = *(long *)(lVar15 * 8);
      func_0x00010c27d760();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = *(long *)(lVar12 * 8);
          func_0x00010c27d8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf52a60();
          lVar3 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar13 = 0;
            do {
              if (lRam0000000000000000 != lVar3) {
                _objc_enumerationMutation(lVar7);
              }
              uVar14 = *(ulong *)(lVar13 * 8);
              uVar9 = uVar14;
              func_0x00010c06b520();
              if ((uVar9 & 1) == 0) {
                func_0x00010c188000(uVar14);
              }
              lVar13 = lVar13 + 1;
            } while (lVar8 != lVar13);
            lVar8 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar6);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar4);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar10 = *(long *)(param_1 + 0x18);
  func_0x00010bf51e00();
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      (**(code **)(*(long *)(lVar15 * 8) + 0x10))();
      lVar15 = lVar15 + 1;
    } while (lVar4 != lVar15);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar10 + 0x18,0);
  _objc_storeStrong(lVar10 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar10 + 8,0);
  return;
}



/* Entry: 10bd585f4; end: 10bd5862f; -[FBTweakStore .cxx_destruct] */

void FUN_10bd585f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd58630; end: 10bd586e3; -[_FBTweakBindObserver initWithTweak:block:] */

undefined1 *
FUN_10bd58630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010befa200(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bd586e4; end: 10bd58723; -[_FBTweakBindObserver tweakDidChange:] */

void FUN_10bd586e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bd58724; end: 10bd5876f; -[_FBTweakBindObserver attachToObject:] */

void FUN_10bd58724(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  _objc_setAssociatedObject(param_3,param_1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd58770; end: 10bd587a7; -[_FBTweakBindObserver .cxx_destruct] */

void FUN_10bd58770(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd587a8; end: 10bd587af; -[FBTweakViewController initWithStore:] */

void FUN_10bd587a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithStore_category__1125f0cf0,param_3,0);
  return;
}



/* Entry: 10bd587b0; end: 10bd587e3; -[FBTweakViewController initWithStore:category:] */

void FUN_10bd587b0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e780;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd587e4; end: 10bd58803; -[FBTweakViewController tweaksDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd587e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112796aa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd58804; end: 10bd58817; -[FBTweakViewController setTweaksDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd58804(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112796aa8,param_3);
  return;
}



/* Entry: 10bd58818; end: 10bd58827; -[FBTweakViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd58818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112796aa8);
  return;
}



/* Entry: 10bd58828; end: 10bd58983;  */

void FUN_10bd58828(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  _objc_retain();
  if (lRam00000001137fe540 != -1) {
    lVar2 = 0x1137fe540;
    func_0x000107c27d9c(0x1137fe540,&PTR___NSConcreteGlobalBlock_110d9f288);
  }
  func_0x000107c3180c();
  lVar1 = param_3;
  _CFStringGetCStringPtr(param_3,0x8000100);
  if (lVar1 == 0) {
    lVar1 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    if (lVar1 != 0) goto LAB_10bd5889c;
  }
  else {
LAB_10bd5889c:
    if ((*(byte *)(lVar2 + 0x1c8) & 1) == 0) {
      *(undefined1 *)(lVar2 + 0x1c8) = 1;
      func_0x000107c31810();
      if (*(char *)(lVar2 + 0x1c9) != '\x01') {
        uVar3 = *(undefined8 *)(lVar2 + 0x1b0);
        *(undefined8 *)(lVar2 + 0x1b8) = 0;
        *(undefined2 *)(lVar2 + 0x1c8) = 0;
        _objc_release(param_3);
        lVar1 = 0;
        _CFStringCreateWithCString(0,uVar3,0x8000100);
        lVar2 = lVar1;
        if (param_1 == lRam00000001137fe538) {
          lVar2 = 0;
          _CFStringCreateMutableCopy(0,0,lVar1);
          _CFRelease(lVar1);
        }
        goto LAB_10bd588ec;
      }
      *(undefined8 *)(lVar2 + 0x1b8) = 0;
      *(undefined2 *)(lVar2 + 0x1c8) = 0;
    }
  }
  _objc_release(param_3);
  _objc_alloc(param_1);
  func_0x00010c013d00();
  lVar2 = param_1;
LAB_10bd588ec:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10bd58984; end: 10bd589b3;  */

void FUN_10bd58984(long param_1)

{
  _CFAllocatorDeallocate(0,*(undefined8 *)(param_1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdba13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFAllocatorDeallocate_11034a488)(0,param_1);
  return;
}



/* Entry: 10bd589b4; end: 10bd58a17;  */

void FUN_10bd589b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c14de20(param_1,param_2,param_3,param_4,
                      &PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bd58a18; end: 10bd58ce3;  */

void FUN_10bd58a18(undefined8 param_1,long param_2,undefined **param_3,undefined **param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_10bd58ca8;
  }
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 == (undefined **)0x0) goto LAB_10bd58ca8;
  ppuVar5 = param_3;
  if (((param_4 == (undefined **)0x0) || (param_5 == 0)) ||
     (lVar6 = param_5, func_0x00010c08fa60(), lVar6 == 0)) {
    _objc_retain(param_3);
    goto LAB_10bd58ca8;
  }
  _objc_retain(param_3);
  func_0x00010c08fa60(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
LAB_10bd58c6c:
    func_0x00010bf529e0(param_4);
    _objc_retain(param_3);
  }
  else {
    lVar6 = 0;
    do {
      ppuVar1 = param_3;
      func_0x00010c11f460();
      if (ppuVar1 == (undefined **)0x7fffffffffffffff) break;
      lVar6 = lVar6 + 1;
      ppuVar1 = (undefined **)((long)ppuVar1 + param_2);
      func_0x00010c08fa60();
      ppuVar8 = param_3;
      func_0x00010c08fa60();
    } while (ppuVar1 < ppuVar8);
    if (lVar6 == 0) goto LAB_10bd58c6c;
    func_0x00010bf529e0(param_4);
    ppuVar1 = param_3;
    func_0x00010c0d3c80();
    func_0x00010c08fa60();
    ppuVar5 = ppuVar1;
    func_0x00010c11f460();
    if (ppuVar5 != (undefined **)0x7fffffffffffffff) {
      ppuVar8 = (undefined **)0x0;
      do {
        ppuVar2 = param_4;
        func_0x00010bf529e0();
        ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar8 < ppuVar2) {
          ppuVar2 = param_4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar2 != (undefined **)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
            _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
            ppuVar4 = ppuVar2;
            _objc_opt_isKindOfClass(ppuVar2,puVar3);
            if (((ulong)ppuVar4 & 1) != 0) {
              ppuVar4 = ppuVar2;
              func_0x00010bf6e340();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar4 != (undefined **)0x0) {
                ppuVar7 = ppuVar4;
              }
              _objc_retain(ppuVar7);
              _objc_release(ppuVar4);
            }
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          _objc_release(ppuVar2);
        }
        func_0x00010c130d20(ppuVar1);
        ppuVar2 = ppuVar7;
        func_0x00010c08fa60();
        ppuVar4 = ppuVar1;
        func_0x00010c08fa60();
        if (ppuVar4 <= (undefined **)((long)ppuVar2 + (long)ppuVar5)) {
          _objc_release(ppuVar7);
          break;
        }
        func_0x00010c08fa60(ppuVar1);
        ppuVar5 = ppuVar1;
        func_0x00010c11f460();
        _objc_release(ppuVar7);
      } while (ppuVar5 != (undefined **)0x7fffffffffffffff);
    }
    ppuVar5 = ppuVar1;
    func_0x00010bf51e00(ppuVar1);
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
LAB_10bd58ca8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10bd58ce4; end: 10bd58d6b;  */

bool FUN_10bd58ce4(char *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  puVar2 = PTR___DefaultRuneLocale_11034bcf8;
  if (param_2 != 0) {
    if (param_2 < 1) {
      bVar3 = false;
    }
    else {
      do {
        param_2 = param_2 + -1;
        cVar1 = *param_1;
        lVar5 = (long)cVar1;
        if (cVar1 < 0) {
          ___maskrune(lVar5,0x500);
          uVar4 = (uint)lVar5;
        }
        else {
          uVar4 = *(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x500;
        }
        bVar3 = uVar4 == 0;
        param_1 = param_1 + 1;
      } while (uVar4 != 0 && param_2 != 0);
    }
    return bVar3;
  }
  return true;
}



/* Entry: 10bd58d6c; end: 10bd58ddb;  */

void FUN_10bd58d6c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd58ddc; end: 10bd58e5b;  */

void FUN_10bd58ddc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102f078;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277620();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10bd58e5c; end: 10bd58ec3; +[TraceSession descriptor] */

void FUN_10bd58e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33370,
                        &PTR____CFConstantStringClassReference_11102f098,&PTR_DAT_113409be0,
                        &PTR_DAT_113409f18,0xb,0x60,0x1c);
    puRam00000001137fe740 = puVar1;
  }
  return;
}



/* Entry: 10bd58ec4; end: 10bd58f2b; +[TraceSessionHeader descriptor] */

void FUN_10bd58ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d333c0,
                        &PTR____CFConstantStringClassReference_11102f0b8,&PTR_DAT_113409be0,0,0,4,
                        0x1c);
    puRam00000001137fe748 = puVar1;
  }
  return;
}



/* Entry: 10bd58f2c; end: 10bd58f93; +[SessionData descriptor] */

void FUN_10bd58f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33410,
                        &PTR____CFConstantStringClassReference_110f3cfd8,&PTR_DAT_113409be0,
                        &PTR_s_sessionId_11340a078,0xd,0x68,0x1c);
    puRam00000001137fe750 = puVar1;
  }
  return;
}



/* Entry: 10bd58f94; end: 10bd58ffb; +[VarintSpan descriptor] */

void FUN_10bd58f94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33460,
                        &PTR____CFConstantStringClassReference_11102f0d8,&PTR_DAT_113409be0,
                        &PTR_s_id_p_113409dd8,10,0x50,0x1c);
    puRam00000001137fe758 = puVar1;
  }
  return;
}



/* Entry: 10bd58ffc; end: 10bd59063; +[IdEntry descriptor] */

void FUN_10bd58ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d334b0,
                        &PTR____CFConstantStringClassReference_11102f0f8,&PTR_DAT_113409be0,
                        &PTR_DAT_113409bf8,2,0x18,0x1c);
    puRam00000001137fe760 = puVar1;
  }
  return;
}



/* Entry: 10bd59064; end: 10bd590cb; +[CounterEntry descriptor] */

void FUN_10bd59064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33500,
                        &PTR____CFConstantStringClassReference_11102f118,&PTR_DAT_113409be0,
                        &PTR_s_id_p_113409c38,4,0x28,0x1c);
    puRam00000001137fe768 = puVar1;
  }
  return;
}



/* Entry: 10bd590cc; end: 10bd59133; +[AuxEntry descriptor] */

void FUN_10bd590cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33550,
                        &PTR____CFConstantStringClassReference_11102f138,&PTR_DAT_113409be0,
                        &PTR_s_id_p_113409d38,5,0x30,0x1c);
    puRam00000001137fe770 = puVar1;
  }
  return;
}



/* Entry: 10bd59134; end: 10bd5919b; +[NetworkSpan descriptor] */

void FUN_10bd59134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d335a0,
                        &PTR____CFConstantStringClassReference_11102f158,&PTR_DAT_113409be0,
                        &PTR_s_id_p_11340a218,0x19,0xd0,0x1c);
    puRam00000001137fe778 = puVar1;
  }
  return;
}



/* Entry: 10bd5919c; end: 10bd59203; +[PerfLoggerEvent descriptor] */

void FUN_10bd5919c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d335f0,
                        &PTR____CFConstantStringClassReference_11102f178,&PTR_DAT_113409be0,
                        &PTR_s_eventName_113409cb8,4,0x28,0x1c);
    puRam00000001137fe780 = puVar1;
  }
  return;
}



/* Entry: 10bd59204; end: 10bd59213;  */

undefined ** FUN_10bd59204(void)

{
  return &PTR____CFConstantStringClassReference_11102ffd8;
}



/* Entry: 10bd59214; end: 10bd5927b; +[GPBApi descriptor] */

void FUN_10bd59214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33730,
                        &PTR____CFConstantStringClassReference_11102f198,&PTR_DAT_11340a590,
                        &PTR_DAT_11340a5e8,7,0x38,0x1c);
    puRam00000001137fe790 = puVar1;
  }
  return;
}



/* Entry: 10bd5927c; end: 10bd592f7; +[GPBMethod descriptor] */

undefined * FUN_10bd5927c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33780,
                        &PTR____CFConstantStringClassReference_11102f1b8,&PTR_DAT_11340a590,
                        &PTR_DAT_11340a6c8,7,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fe798 = puVar1;
  }
  return puRam00000001137fe798;
}



/* Entry: 10bd592f8; end: 10bd5935f; +[GPBMixin descriptor] */

void FUN_10bd592f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d337d0,
                        &PTR____CFConstantStringClassReference_11102f1d8,&PTR_DAT_11340a590,
                        &PTR_DAT_11340a5a8,2,0x18,0x1c);
    puRam00000001137fe7a0 = puVar1;
  }
  return;
}



/* Entry: 10bd59360; end: 10bd5936f;  */

undefined ** FUN_10bd59360(void)

{
  return &PTR____CFConstantStringClassReference_11102ffd8;
}



/* Entry: 10bd59370; end: 10bd593d7; +[GPBDuration descriptor] */

void FUN_10bd59370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33870,
                        &PTR____CFConstantStringClassReference_110f0f1f8,&PTR_DAT_11340a7a8,
                        &PTR_DAT_11340a7c0,2,0x10,0x1c);
    puRam00000001137fe7a8 = puVar1;
  }
  return;
}



/* Entry: 10bd593d8; end: 10bd5943f; +[GPBEmpty descriptor] */

void FUN_10bd593d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33910,
                        &PTR____CFConstantStringClassReference_110e19978,&PTR_DAT_11340a800,0,0,4,
                        0x1c);
    puRam00000001137fe7b0 = puVar1;
  }
  return;
}



/* Entry: 10bd59440; end: 10bd594a7; +[GPBFieldMask descriptor] */

void FUN_10bd59440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d339b0,
                        &PTR____CFConstantStringClassReference_11102f1f8,&PTR_DAT_11340a818,
                        &PTR_DAT_11340a830,1,0x10,0x1c);
    puRam00000001137fe7b8 = puVar1;
  }
  return;
}



/* Entry: 10bd594a8; end: 10bd5958b; +[GPBSourceContext descriptor] */

void FUN_10bd594a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33a50,
                        &PTR____CFConstantStringClassReference_11102f218,&PTR_DAT_11340a850,
                        &PTR_DAT_11340a868,1,0x10,0x1c);
    puRam00000001137fe7c0 = puVar1;
  }
  return;
}



/* Entry: 10bd5958c; end: 10bd59597;  */

bool FUN_10bd5958c(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10bd59598; end: 10bd595ff; +[GPBStruct descriptor] */

void FUN_10bd59598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33af0,
                        &PTR____CFConstantStringClassReference_11102f258,&PTR_DAT_11340a890,
                        &PTR_DAT_11340a8a8,1,0x10,0x1c);
    puRam00000001137fe7d0 = puVar1;
  }
  return;
}



/* Entry: 10bd59600; end: 10bd5968b; +[GPBValue descriptor] */

undefined * FUN_10bd59600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33b40,
                        &PTR____CFConstantStringClassReference_110dd6778,&PTR_DAT_11340a890,
                        &PTR_DAT_11340a8e8,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137fe7d8 = puVar1;
  }
  return puRam00000001137fe7d8;
}



/* Entry: 10bd5968c; end: 10bd596f3; +[GPBListValue descriptor] */

void FUN_10bd5968c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33b90,
                        &PTR____CFConstantStringClassReference_11102f278,&PTR_DAT_11340a890,
                        &PTR_s_valuesArray_11340a8c8,1,0x10,0x1c);
    puRam00000001137fe7e0 = puVar1;
  }
  return;
}



/* Entry: 10bd596f4; end: 10bd59703;  */

undefined ** FUN_10bd596f4(void)

{
  return &PTR____CFConstantStringClassReference_11102ffd8;
}



/* Entry: 10bd59704; end: 10bd597e7; +[GPBTimestamp descriptor] */

void FUN_10bd59704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe7e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33c30,
                        &PTR____CFConstantStringClassReference_110f37b98,&PTR_DAT_11340a9a8,
                        &PTR_DAT_11340a9c0,2,0x10,0x1c);
    puRam00000001137fe7e8 = puVar1;
  }
  return;
}



/* Entry: 10bd597e8; end: 10bd597f3;  */

bool FUN_10bd597e8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10bd597f4; end: 10bd5986f;  */

undefined * FUN_10bd597f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fe7f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102f2b8,
                        &UNK_10e60dc68,&UNK_10e60dd3c,0x13,FUN_10bd59870,0);
    do {
      if (puRam00000001137fe7f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fe7f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fe7f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fe7f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fe7f8;
}



/* Entry: 10bd59870; end: 10bd5987b;  */

bool FUN_10bd59870(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 10bd5987c; end: 10bd598f7;  */

undefined * FUN_10bd5987c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fe800 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102f2d8,
                        &UNK_10e60dd88,&UNK_10e60ddd8,4,FUN_10bd598f8,0);
    do {
      if (puRam00000001137fe800 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fe800;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fe800,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fe800 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fe800;
}



/* Entry: 10bd598f8; end: 10bd59903;  */

bool FUN_10bd598f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10bd59904; end: 10bd5996b; +[GPBType descriptor] */

void FUN_10bd59904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33cd0,
                        &PTR____CFConstantStringClassReference_110f35b58,&PTR_DAT_11340aa00,
                        &PTR_DAT_11340ab78,7,0x38,0x1c);
    puRam00000001137fe808 = puVar1;
  }
  return;
}



/* Entry: 10bd5996c; end: 10bd599e7; +[GPBField descriptor] */

undefined * FUN_10bd5996c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33d20,
                        &PTR____CFConstantStringClassReference_11102f2f8,&PTR_DAT_11340aa00,
                        &PTR_s_kind_11340ac58,10,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fe810 = puVar1;
  }
  return puRam00000001137fe810;
}



/* Entry: 10bd599e8; end: 10bd59a4f; +[GPBEnum descriptor] */

void FUN_10bd599e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33d70,
                        &PTR____CFConstantStringClassReference_110f729b8,&PTR_DAT_11340aa00,
                        &PTR_DAT_11340aab8,6,0x30,0x1c);
    puRam00000001137fe818 = puVar1;
  }
  return;
}



/* Entry: 10bd59a50; end: 10bd59ab7; +[GPBEnumValue descriptor] */

void FUN_10bd59a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33dc0,
                        &PTR____CFConstantStringClassReference_11102f318,&PTR_DAT_11340aa00,
                        &PTR_DAT_11340aa58,3,0x18,0x1c);
    puRam00000001137fe820 = puVar1;
  }
  return;
}



/* Entry: 10bd59ab8; end: 10bd59b1f; +[GPBOption descriptor] */

void FUN_10bd59ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33e10,
                        &PTR____CFConstantStringClassReference_110f75938,&PTR_DAT_11340aa00,
                        &PTR_DAT_11340aa18,2,0x18,0x1c);
    puRam00000001137fe828 = puVar1;
  }
  return;
}



/* Entry: 10bd59b20; end: 10bd59b87; +[GPBDoubleValue descriptor] */

void FUN_10bd59b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33eb0,
                        &PTR____CFConstantStringClassReference_110e951b8,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340adb0,1,0x10,0x1c);
    puRam00000001137fe830 = puVar1;
  }
  return;
}



/* Entry: 10bd59b88; end: 10bd59bef; +[GPBFloatValue descriptor] */

void FUN_10bd59b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33f00,
                        &PTR____CFConstantStringClassReference_110e951d8,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340add0,1,8,0x1c);
    puRam00000001137fe838 = puVar1;
  }
  return;
}



/* Entry: 10bd59bf0; end: 10bd59c57; +[GPBInt64Value descriptor] */

void FUN_10bd59bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33f50,
                        &PTR____CFConstantStringClassReference_110e951f8,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340adf0,1,0x10,0x1c);
    puRam00000001137fe840 = puVar1;
  }
  return;
}



/* Entry: 10bd59c58; end: 10bd59cbf; +[GPBUInt64Value descriptor] */

void FUN_10bd59c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33fa0,
                        &PTR____CFConstantStringClassReference_110e95218,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340ae10,1,0x10,0x1c);
    puRam00000001137fe848 = puVar1;
  }
  return;
}



/* Entry: 10bd59cc0; end: 10bd59d27; +[GPBInt32Value descriptor] */

void FUN_10bd59cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33ff0,
                        &PTR____CFConstantStringClassReference_110e95238,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340ae30,1,8,0x1c);
    puRam00000001137fe850 = puVar1;
  }
  return;
}



/* Entry: 10bd59d28; end: 10bd59d8f; +[GPBUInt32Value descriptor] */

void FUN_10bd59d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d34040,
                        &PTR____CFConstantStringClassReference_110e95258,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340ae50,1,8,0x1c);
    puRam00000001137fe858 = puVar1;
  }
  return;
}



/* Entry: 10bd59d90; end: 10bd59df7; +[GPBBoolValue descriptor] */

void FUN_10bd59d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d34090,
                        &PTR____CFConstantStringClassReference_110e917f8,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340ae70,1,4,0x1c);
    puRam00000001137fe860 = puVar1;
  }
  return;
}



/* Entry: 10bd59df8; end: 10bd59e5f; +[GPBStringValue descriptor] */

void FUN_10bd59df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d340e0,
                        &PTR____CFConstantStringClassReference_110e95278,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340ae90,1,0x10,0x1c);
    puRam00000001137fe868 = puVar1;
  }
  return;
}



/* Entry: 10bd59e60; end: 10bd59ec7; +[GPBBytesValue descriptor] */

void FUN_10bd59e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d34130,
                        &PTR____CFConstantStringClassReference_110e95298,&PTR_DAT_11340ad98,
                        &PTR_s_value_11340aeb0,1,0x10,0x1c);
    puRam00000001137fe870 = puVar1;
  }
  return;
}



/* Entry: 10bd59ec8; end: 10bd59edb; +[GPBInt32Array array] */

void FUN_10bd59ec8(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd59edc; end: 10bd59f0b; +[GPBInt32Array arrayWithValue:] */

void FUN_10bd59edc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  _objc_alloc();
  func_0x00010c060580(param_1,param_2,&uStack_14,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd59f0c; end: 10bd59f33; +[GPBInt32Array arrayWithValueArray:] */

void FUN_10bd59f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd59f34; end: 10bd59f5b; +[GPBInt32Array arrayWithCapacity:] */

void FUN_10bd59f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd59f5c; end: 10bd59f67; -[GPBInt32Array initWithValueArray:] */

void FUN_10bd59f5c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd59f68; end: 10bd5a00b; -[GPBInt32Array initWithValues:count:] */

long FUN_10bd59f68(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 2);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 10bd5a00c; end: 10bd5a04f; -[GPBInt32Array initWithCapacity:] */

long FUN_10bd5a00c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5a050; end: 10bd5a07b; -[GPBInt32Array copyWithZone:] */

void FUN_10bd5a050(void)

{
  func_0x00010bf00e40(PTR_PTR_1126b7828);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5a07c; end: 10bd5a0f7; -[GPBInt32Array isEqual:] */

bool FUN_10bd5a07c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126b7828;
    _objc_opt_class(PTR_PTR_1126b7828);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 2);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5a0f8; end: 10bd5a0ff; -[GPBInt32Array hash] */

undefined8 FUN_10bd5a0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5a100; end: 10bd5a1c3; -[GPBInt32Array description] */

undefined * FUN_10bd5a100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daf4f8;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_11102f378;
      }
      func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd5a1c4; end: 10bd5a2a3; -[GPBInt32Array insertValue:atIndex:] */

void FUN_10bd5a1c4(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + 0x18);
  uVar7 = lVar9 + 1;
  if (uVar7 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    lVar9 = *(long *)(param_1 + 0x18);
    uVar7 = lVar9 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar7) {
    func_0x00010c069520(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar7;
  if (lVar9 - param_4 != 0) {
    lVar3 = *(long *)(param_1 + 0x10) + param_4 * 4;
    _memmove(lVar3 + 4,lVar3,(lVar9 - param_4) * 4);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + param_4 * 4) = param_3;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    return;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar9;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar6);
      }
      lVar8 = *(long *)(lVar10 * 8);
      lVar5 = lVar8;
      func_0x000107c433d8();
      if ((int)lVar5 == 1) {
        lVar5 = 0;
        if (*(long *)(lVar9 + 0x40) != 0) {
          lVar5 = *(long *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18))
          ;
        }
        if (lVar5 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar9);
          goto code_r0x00010060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar6;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5a2a4; end: 10bd5a30f; -[GPBInt32Array replaceValueAtIndex:withValue:] */

void FUN_10bd5a2a4(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + param_3 * 4) = param_4;
  return;
}



/* Entry: 10bd5a310; end: 10bd5a31b; -[GPBInt32Array addValuesFromArray:] */

void FUN_10bd5a310(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5a31c; end: 10bd5a3d3; -[GPBInt32Array removeValueAtIndex:] */

void FUN_10bd5a31c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 4;
    _memmove(lVar1,lVar1 + 4,(uVar3 - param_3) * 4);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_internalResizeToCapacity__1125f7f58,(uVar3 & 0xfffffffffffffff0) + 0x10
              );
    return;
  }
  return;
}



/* Entry: 10bd5a3d4; end: 10bd5a3ef; -[GPBInt32Array removeAll] */

void FUN_10bd5a3d4(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalResizeToCapacity__1125f7f58,0x10);
    return;
  }
  return;
}



/* Entry: 10bd5a3f0; end: 10bd5a493; -[GPBInt32Array exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5a3f0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__NSRangeException_11034aaa0;
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar3 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar3 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,*(undefined8 *)puVar2,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar4 + param_3 * 4);
  *(undefined4 *)(lVar4 + param_3 * 4) = *(undefined4 *)(lVar4 + param_4 * 4);
  *(undefined4 *)(lVar4 + param_4 * 4) = uVar1;
  return;
}



/* Entry: 10bd5a494; end: 10bd5a4a7; +[GPBUInt32Array array] */

void FUN_10bd5a494(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5a4a8; end: 10bd5a4d7; +[GPBUInt32Array arrayWithValue:] */

void FUN_10bd5a4a8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  _objc_alloc();
  func_0x00010c060580(param_1,param_2,&uStack_14,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5a4d8; end: 10bd5a4ff; +[GPBUInt32Array arrayWithValueArray:] */

void FUN_10bd5a4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5a500; end: 10bd5a527; +[GPBUInt32Array arrayWithCapacity:] */

void FUN_10bd5a500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5a528; end: 10bd5a55b; -[GPBUInt32Array init] */

void FUN_10bd5a528(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e790;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd5a55c; end: 10bd5a567; -[GPBUInt32Array initWithValueArray:] */

void FUN_10bd5a55c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5a568; end: 10bd5a60b; -[GPBUInt32Array initWithValues:count:] */

long FUN_10bd5a568(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 2);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 10bd5a60c; end: 10bd5a64f; -[GPBUInt32Array initWithCapacity:] */

long FUN_10bd5a60c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5a650; end: 10bd5a67b; -[GPBUInt32Array copyWithZone:] */

void FUN_10bd5a650(void)

{
  func_0x00010bf00e40(PTR_PTR_1126beb00);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5a67c; end: 10bd5a6c3; -[GPBUInt32Array dealloc] */

void FUN_10bd5a67c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e790;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5a6c4; end: 10bd5a73f; -[GPBUInt32Array isEqual:] */

bool FUN_10bd5a6c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126beb00;
    _objc_opt_class(PTR_PTR_1126beb00);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 2);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5a740; end: 10bd5a747; -[GPBUInt32Array hash] */

undefined8 FUN_10bd5a740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5a748; end: 10bd5a80b; -[GPBUInt32Array description] */

undefined * FUN_10bd5a748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eb3938;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_11102f3d8;
      }
      func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd5a80c; end: 10bd5a817; -[GPBUInt32Array enumerateValuesWithBlock:] */

void FUN_10bd5a80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5a818; end: 10bd5a8cf; -[GPBUInt32Array enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5a818(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  if ((param_3 >> 1 & 1) == 0) {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar3 * 4),lVar3,&bStack_31);
        if ((bStack_31 & 1) != 0) {
          return;
        }
        bVar1 = lVar2 + -1 != lVar3;
        lVar3 = lVar3 + 1;
      } while (bVar1);
    }
  }
  else if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == -1) {
        return;
      }
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar2 * 4),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5a8d0; end: 10bd5a92f; -[GPBUInt32Array valueAtIndex:] */

undefined4 FUN_10bd5a8d0(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + param_3 * 4);
}



/* Entry: 10bd5a930; end: 10bd5a9a3; -[GPBUInt32Array internalResizeToCapacity:] */

void FUN_10bd5a930(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 2);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bd5a9a4; end: 10bd5a9cb; -[GPBUInt32Array addValue:] */

void FUN_10bd5a9a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  func_0x00010befc840(param_1,param_2,&uStack_14,1);
  return;
}



/* Entry: 10bd5a9cc; end: 10bd5aa5f; -[GPBUInt32Array addValues:count:] */

void FUN_10bd5a9cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar5 = *(long *)(param_1 + 0x18);
    uVar1 = lVar5 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x00010c069520(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar5 * 4,param_3,param_4 << 2);
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = lVar5;
      func_0x000107c61158();
      func_0x000107c41800();
      lVar8 = *(long *)(lVar4 + 8);
      lVar4 = lVar8;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      do {
        if (lVar4 == 0) {
code_r0x00010060c364:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
            return;
          }
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(lVar8);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar7 = lVar9;
          func_0x000107c433d8();
          if ((int)lVar7 == 1) {
            lVar7 = 0;
            if (*(long *)(lVar5 + 0x40) != 0) {
              lVar7 = *(long *)(*(long *)(lVar5 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
            }
            if (lVar7 == param_1) {
              piVar2 = (int *)&DAT_112796b30;
              if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
                piVar2 = (int *)&DAT_112796b34;
              }
              *(undefined8 *)(param_1 + *piVar2) = 0;
              func_0x000100109ff0(lVar5);
              goto code_r0x00010060c364;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar8;
        func_0x000107c4080c();
      } while( true );
    }
  }
  return;
}



/* Entry: 10bd5aa60; end: 10bd5ab3f; -[GPBUInt32Array insertValue:atIndex:] */

void FUN_10bd5aa60(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + 0x18);
  uVar7 = lVar9 + 1;
  if (uVar7 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    lVar9 = *(long *)(param_1 + 0x18);
    uVar7 = lVar9 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar7) {
    func_0x00010c069520(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar7;
  if (lVar9 - param_4 != 0) {
    lVar3 = *(long *)(param_1 + 0x10) + param_4 * 4;
    _memmove(lVar3 + 4,lVar3,(lVar9 - param_4) * 4);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + param_4 * 4) = param_3;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    return;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar9;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar6);
      }
      lVar8 = *(long *)(lVar10 * 8);
      lVar5 = lVar8;
      func_0x000107c433d8();
      if ((int)lVar5 == 1) {
        lVar5 = 0;
        if (*(long *)(lVar9 + 0x40) != 0) {
          lVar5 = *(long *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18))
          ;
        }
        if (lVar5 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar9);
          goto code_r0x00010060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar6;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5ab40; end: 10bd5abab; -[GPBUInt32Array replaceValueAtIndex:withValue:] */

void FUN_10bd5ab40(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + param_3 * 4) = param_4;
  return;
}


