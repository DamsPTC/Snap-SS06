/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080ac470; end: 1080ac473; -[SCValdiLabel textLayoutViewDidInvalidateAnimatedTextProgress:] */

void FUN_1080ac470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateInlineTextChildAnimations_112594090);
  return;
}



/* Entry: 1080ac474; end: 1080ac58f; -[SCValdiLabel _clearAttributedText] */

/* WARNING: Possible PIC construction at 0x0001080ac4a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080ac4a4) */

void FUN_1080ac474(undefined8 param_1)

{
  if (lRam0000000113729170 != -1) {
    func_0x000107c27d9c(0x113729170,&PTR___NSConcreteGlobalBlock_110a1be20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAttributedText__1126387e8,uRam0000000113729178);
  return;
}



/* Entry: 1080ac590; end: 1080ac5a3; -[SCValdiLabel didMoveToValdiContext:viewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ac590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2130f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127743f8),PTR_s_setTextAnimationViewNode__112662660,
             param_4);
  return;
}



/* Entry: 1080ac5a4; end: 1080ac607; -[SCValdiLabel willEnqueueIntoValdiPool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1080ac5a4(undefined *param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_1127743f4) != 0) {
    func_0x0001080ac8e0();
    func_0x00010c286d60();
    func_0x0001080ac7a0();
  }
  func_0x00010c109780(*(undefined8 *)(param_1 + _DAT_1127743f8));
  _objc_opt_class(param_1);
  puVar1 = PTR_PTR_1126d9230;
  _objc_opt_class(PTR_PTR_1126d9230);
  return param_1 == puVar1;
}



/* Entry: 1080ac608; end: 1080ac683; -[SCValdiLabel accessibilityLabel] */

void FUN_1080ac608(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001080ac858();
  if ((bool)in_ZR) {
    func_0x0001080ac9c4();
    puVar1 = *(undefined1 **)(param_1 + extraout_x8);
    func_0x00010bf0e280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac788();
  }
  else {
    func_0x0001080ac848();
    _objc_msgSendSuper2(auStack_30,PTR_s_accessibilityLabel_112598d68);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080ac684; end: 1080ac6cf; -[SCValdiLabel accessibilityTraits] */

ulong FUN_1080ac684(void)

{
  undefined1 *puVar1;
  undefined1 auStack_20 [16];
  
  puVar1 = auStack_20;
  func_0x0001080ac848();
  _objc_msgSendSuper2(auStack_20,PTR_s_accessibilityTraits_112598d90);
  return (ulong)puVar1 & (*(ulong *)PTR__UIAccessibilityTraitButton_110345920 ^ 0xffffffffffffffff)
         | *(ulong *)PTR__UIAccessibilityTraitStaticText_110345960;
}



/* Entry: 1080ac6d0; end: 1080ac75f; -[SCValdiLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ac6d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112774424,0);
  func_0x0001080ac770((long)_DAT_112774420);
  func_0x0001080ac770((long)_DAT_11277441c);
  func_0x0001080ac770((long)_DAT_112774418);
  func_0x0001080ac770((long)_DAT_112774434);
  func_0x0001080ac770((long)_DAT_112774410);
  func_0x0001080ac770((long)_DAT_112774430);
  func_0x0001080ac770((long)_DAT_112774408);
  func_0x0001080ac770((long)_DAT_112774438);
  func_0x0001080ac770((long)_DAT_112774404);
  func_0x0001080ac770((long)_DAT_1127743fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127743f8,0);
  return;
}



/* Entry: 1080ac760; end: 1080ac9fb;  */

void FUN_1080ac760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1080ac9fc; end: 1080acb7b;  */

void FUN_1080ac9fc(undefined8 param_1,undefined **param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **unaff_x19;
  ulong uVar18;
  undefined **ppuVar19;
  undefined *puStack_200;
  
  ppuVar17 = param_2;
  func_0x0001080ad6c0();
  _objc_retain();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (unaff_x19 != (undefined **)0x0) {
    ppuVar5 = unaff_x19;
  }
  func_0x0001080ad624();
  func_0x00010c08fa60();
  if (param_2 == (undefined **)0x7fffffffffffffff) {
    uVar3 = 1;
  }
  else {
    ppuVar9 = (undefined **)((long)param_2 + param_3);
    if (ppuVar5 <= (undefined **)((long)param_2 + param_3)) {
      ppuVar9 = ppuVar5;
    }
    uVar3 = param_2 == ppuVar9;
    if (param_2 < ppuVar9) {
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x0001080ad670();
  func_0x0001080ad5f4();
  func_0x0001080ad5ec();
  func_0x0001080ad6ac(extraout_x8);
  if ((bool)uVar3) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x0001080ad6c0();
  _objc_retain();
  func_0x0001080ad624();
  if (unaff_x19 == (undefined **)0x0) {
LAB_1080acc68:
    func_0x0001080ad5d4();
  }
  else {
    ppuVar5 = unaff_x19;
    _objc_opt_respondsToSelector();
    if (((ulong)ppuVar5 & 1) == 0) {
      func_0x00010b96bf1c();
      iVar4 = (int)ppuVar5;
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080ad678();
      if (iVar4 != 0) {
        func_0x0001080ad680();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080ad62c();
        func_0x0001080ad5f4();
      }
      func_0x0001080ad5ec();
      goto LAB_1080acc68;
    }
    func_0x00010b97f424();
    func_0x00010b97f8a0();
    ppuVar9 = unaff_x19;
    func_0x00010c0f9040();
    if ((int)ppuVar9 == 0) {
      func_0x0001080ad5d4();
    }
    else {
      ppuVar9 = ppuVar5;
      func_0x00010b97fca0(ppuVar5,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar10 = ppuVar9;
      func_0x00010b97f338();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      if (((ulong)ppuVar10 & 1) == 0) {
        func_0x0001080ad624();
        _objc_opt_class(puVar6);
        ppuVar10 = ppuVar9;
        _objc_opt_isKindOfClass(ppuVar9,puVar6);
        iVar4 = (int)ppuVar10;
        uVar3 = ((ulong)ppuVar10 & 1) == 0;
        ppuVar10 = ppuVar9;
        if ((bool)uVar3) {
          ppuVar10 = (undefined **)0x0;
        }
        func_0x0001080ad668();
        func_0x0001080ad5f4();
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        if (ppuVar10 == (undefined **)0x0) {
          func_0x00010b96bf1c();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080ad678();
          if (iVar4 != 0) {
            func_0x0001080ad680();
            func_0x00010c25d9e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080ad62c();
            func_0x0001080ad5f4();
          }
          func_0x0001080ad5ec();
          func_0x0001080ad5d4();
        }
        else {
          func_0x00010bf529e0(ppuVar9);
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080ad624();
          ppuVar11 = ppuVar9;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (ppuVar11 != (undefined **)0x0) {
            ppuVar19 = (undefined **)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(ppuVar9);
              }
              puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uVar18 = *(ulong *)((long)ppuVar19 * 8);
              func_0x0001080ad668();
              _objc_opt_class();
              func_0x0001080ad69c();
              if (((ulong)puVar7 & 1) == 0) {
                uVar18 = 0;
              }
              _objc_retain(uVar18);
              func_0x0001080ad5ec();
              uVar12 = uVar18;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar12;
              func_0x0001080ad680();
              _objc_opt_class();
              func_0x0001080ad69c();
              if ((uVar13 & 1) == 0) {
                uVar12 = 0;
              }
              _objc_retain(uVar12);
              func_0x0001080ad5ec();
              uVar13 = uVar18;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar13;
              func_0x0001080ad680();
              _objc_opt_class();
              func_0x0001080ad69c();
              if ((uVar14 & 1) == 0) {
                uVar13 = 0;
              }
              func_0x0001080ad624();
              func_0x0001080ad5ec();
              func_0x00010c08fa60();
              if ((uVar12 == 0) || (func_0x00010c08fa60(), uVar13 == 0)) {
                uVar15 = 0;
                func_0x00010b96bf1c();
                _objc_retainAutoreleasedReturnValue();
                uVar16 = uVar15;
                func_0x0001080ad678();
                if ((int)uVar16 != 0) {
                  func_0x0001080ad680();
                  func_0x00010c25d9e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0eeea0(uVar15);
                  _objc_release(uVar16);
                }
              }
              else {
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6);
              }
              func_0x0001080ad5ec();
              func_0x0001080ad5f4();
              func_0x0001080ad670();
              _objc_release(uVar18);
              ppuVar19 = (undefined **)((long)ppuVar19 + 1);
              uVar3 = ppuVar19 == ppuVar11;
            } while (ppuVar19 < ppuVar11);
            ppuVar11 = ppuVar9;
            func_0x00010bf52a60();
          }
          func_0x0001080ad694();
          puStack_200 = puVar6;
        }
        _objc_release(ppuVar10);
      }
      else {
        func_0x0001080ad5d4();
      }
      func_0x0001080ad694();
      func_0x0001080ad694();
    }
    (**(code **)(*ppuVar5 + 8))();
  }
  _objc_release(ppuVar17);
  _objc_release(unaff_x19);
  func_0x0001080ad6ac(extraout_x8_00);
  puVar8 = puStack_200;
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1080ad048);
    (*pcVar2)();
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1080acb7c; end: 1080ad087;  */

void FUN_1080acb7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x8;
  long *unaff_x19;
  ulong uVar15;
  long *plVar16;
  undefined *puStack_160;
  
  func_0x0001080ad6c0();
  _objc_retain();
  func_0x0001080ad624();
  if (unaff_x19 != (long *)0x0) {
    plVar4 = unaff_x19;
    _objc_opt_respondsToSelector();
    if (((ulong)plVar4 & 1) != 0) {
      func_0x00010b97f424();
      func_0x00010b97f8a0();
      plVar5 = unaff_x19;
      func_0x00010c0f9040();
      if ((int)plVar5 == 0) {
        func_0x0001080ad5d4();
      }
      else {
        plVar5 = plVar4;
        func_0x00010b97fca0(plVar4,0xffffffffffffffff);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        plVar6 = plVar5;
        func_0x00010b97f338();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        if (((ulong)plVar6 & 1) == 0) {
          func_0x0001080ad624();
          _objc_opt_class(puVar7);
          plVar6 = plVar5;
          _objc_opt_isKindOfClass(plVar5,puVar7);
          iVar3 = (int)plVar6;
          in_ZR = ((ulong)plVar6 & 1) == 0;
          plVar6 = plVar5;
          if ((bool)in_ZR) {
            plVar6 = (long *)0x0;
          }
          func_0x0001080ad668();
          func_0x0001080ad5f4();
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          if (plVar6 == (long *)0x0) {
            func_0x00010b96bf1c();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080ad678();
            if (iVar3 != 0) {
              func_0x0001080ad680();
              func_0x00010c25d9e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080ad62c();
              func_0x0001080ad5f4();
            }
            func_0x0001080ad5ec();
            func_0x0001080ad5d4();
          }
          else {
            func_0x00010bf529e0(plVar5);
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080ad624();
            plVar8 = plVar5;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (plVar8 != (long *)0x0) {
              plVar16 = (long *)0x0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(plVar5);
                }
                puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                uVar15 = *(ulong *)((long)plVar16 * 8);
                func_0x0001080ad668();
                _objc_opt_class();
                func_0x0001080ad69c();
                if (((ulong)puVar9 & 1) == 0) {
                  uVar15 = 0;
                }
                _objc_retain(uVar15);
                func_0x0001080ad5ec();
                uVar10 = uVar15;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar10;
                func_0x0001080ad680();
                _objc_opt_class();
                func_0x0001080ad69c();
                if ((uVar11 & 1) == 0) {
                  uVar10 = 0;
                }
                _objc_retain(uVar10);
                func_0x0001080ad5ec();
                uVar11 = uVar15;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x0001080ad680();
                _objc_opt_class();
                func_0x0001080ad69c();
                if ((uVar12 & 1) == 0) {
                  uVar11 = 0;
                }
                func_0x0001080ad624();
                func_0x0001080ad5ec();
                func_0x00010c08fa60();
                if ((uVar10 == 0) || (func_0x00010c08fa60(), uVar11 == 0)) {
                  uVar13 = 0;
                  func_0x00010b96bf1c();
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = uVar13;
                  func_0x0001080ad678();
                  if ((int)uVar14 != 0) {
                    func_0x0001080ad680();
                    func_0x00010c25d9e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0eeea0(uVar13);
                    _objc_release(uVar14);
                  }
                }
                else {
                  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar7);
                }
                func_0x0001080ad5ec();
                func_0x0001080ad5f4();
                func_0x0001080ad670();
                _objc_release(uVar15);
                plVar16 = (long *)((long)plVar16 + 1);
                in_ZR = plVar16 == plVar8;
              } while (plVar16 < plVar8);
              plVar8 = plVar5;
              func_0x00010bf52a60();
            }
            func_0x0001080ad694();
            puStack_160 = puVar7;
          }
          _objc_release(plVar6);
        }
        else {
          func_0x0001080ad5d4();
        }
        func_0x0001080ad694();
        func_0x0001080ad694();
      }
      (**(code **)(*plVar4 + 8))();
      goto LAB_1080acffc;
    }
    func_0x00010b96bf1c();
    iVar3 = (int)plVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ad678();
    if (iVar3 != 0) {
      func_0x0001080ad680();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080ad62c();
      func_0x0001080ad5f4();
    }
    func_0x0001080ad5ec();
  }
  func_0x0001080ad5d4();
LAB_1080acffc:
  _objc_release(param_2);
  _objc_release(unaff_x19);
  func_0x0001080ad6ac(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1080ad048);
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_160);
  return;
}



/* Entry: 1080ad088; end: 1080ad143;  */

void FUN_1080ad088(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x0001080ad624();
  _objc_retain(param_3);
  if (param_1 != 0) {
    func_0x00010c0d3c80(param_3);
    func_0x00010c1d0640();
    func_0x00010b97f424();
    func_0x00010b97f8a0();
    func_0x00010c0f9540(param_1);
    func_0x0001080ad658();
    _objc_release(param_3);
  }
  func_0x0001080ad670();
  func_0x0001080ad5f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080ad144; end: 1080ad173; +[SCValdiLabelTextPosition positionWithOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9328;
  _objc_opt_new();
  *(undefined8 *)(puVar1 + _DAT_11277443c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080ad174; end: 1080ad17f; -[SCValdiLabelTextPosition offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277443c);
}



/* Entry: 1080ad180; end: 1080ad207; +[SCValdiLabelTextRange rangeWithStartOffset:endOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad180(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d9330;
  _objc_opt_new(PTR_PTR_1126d9330);
  lVar1 = param_3;
  if (param_4 <= param_3) {
    lVar1 = param_4;
  }
  if (param_3 <= param_4) {
    param_3 = param_4;
  }
  func_0x00010c104420(PTR_PTR_1126d9328,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ad648();
  func_0x00010c104420(PTR_PTR_1126d9328,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ad648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080ad208; end: 1080ad20f; +[SCValdiLabelTextRange rangeWithNSRange:] */

void FUN_1080ad208(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_rangeWithStartOffset_endOffset__112625760,param_3,param_3 + param_4);
  return;
}



/* Entry: 1080ad210; end: 1080ad237; -[SCValdiLabelTextRange start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad210(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774484);
  func_0x0001080ad668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080ad238; end: 1080ad25f; -[SCValdiLabelTextRange end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad238(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774488);
  func_0x0001080ad668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080ad260; end: 1080ad2af; -[SCValdiLabelTextRange isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1080ad260(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112774484);
  func_0x00010c0e1c40(lVar1);
  lVar2 = *(long *)(param_1 + _DAT_112774488);
  func_0x00010c0e1c40(lVar2);
  return lVar1 == lVar2;
}



/* Entry: 1080ad2b0; end: 1080ad2bb; -[SCValdiLabelTextRange startPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad2b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774484);
}



/* Entry: 1080ad2bc; end: 1080ad2c7; -[SCValdiLabelTextRange endPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad2bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774488);
}



/* Entry: 1080ad2c8; end: 1080ad303; -[SCValdiLabelTextRange .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad2c8(long param_1)

{
  func_0x0001080ad5e4(param_1 + _DAT_112774488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774484,0);
  return;
}



/* Entry: 1080ad304; end: 1080ad307; -[SCValdiLabelSelectionRect rect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad304(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774440);
}



/* Entry: 1080ad308; end: 1080ad313; -[SCValdiLabelSelectionRect writingDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad308(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774444);
}



/* Entry: 1080ad314; end: 1080ad31f; -[SCValdiLabelSelectionRect containsStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080ad314(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112774448);
}



/* Entry: 1080ad320; end: 1080ad32b; -[SCValdiLabelSelectionRect containsEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080ad320(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277444c);
}



/* Entry: 1080ad32c; end: 1080ad337; -[SCValdiLabelSelectionRect isVertical] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080ad32c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112774450);
}



/* Entry: 1080ad338; end: 1080ad33b; -[SCValdiLabelSelectionRect valdiRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774440);
}



/* Entry: 1080ad33c; end: 1080ad353; -[SCValdiLabelSelectionRect setValdiRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112774440);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1080ad354; end: 1080ad35f; -[SCValdiLabelSelectionRect valdiWritingDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ad354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774444);
}



/* Entry: 1080ad360; end: 1080ad36f; -[SCValdiLabelSelectionRect setValdiWritingDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad360(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112774444) = param_3;
  return;
}



/* Entry: 1080ad370; end: 1080ad37b; -[SCValdiLabelSelectionRect valdiContainsStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080ad370(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112774448);
}



/* Entry: 1080ad37c; end: 1080ad387; -[SCValdiLabelSelectionRect setValdiContainsStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad37c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112774448) = param_3;
  return;
}



/* Entry: 1080ad388; end: 1080ad393; -[SCValdiLabelSelectionRect valdiContainsEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080ad388(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277444c);
}



/* Entry: 1080ad394; end: 1080ad39f; -[SCValdiLabelSelectionRect setValdiContainsEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad394(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277444c) = param_3;
  return;
}



/* Entry: 1080ad3a0; end: 1080ad3ab; -[SCValdiLabelSelectionRect valdiIsVertical] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080ad3a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112774450);
}



/* Entry: 1080ad3ac; end: 1080ad3b7; -[SCValdiLabelSelectionRect setValdiIsVertical:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad3ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112774450) = param_3;
  return;
}



/* Entry: 1080ad3b8; end: 1080ad3f7; -[SCValdiLabelSelectionState init] */

void FUN_1080ad3b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fc610;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
  }
  return;
}



/* Entry: 1080ad3f8; end: 1080ad3ff; -[SCValdiLabelSelectionState selectable] */

undefined1 FUN_1080ad3f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1080ad400; end: 1080ad407; -[SCValdiLabelSelectionState setSelectable:] */

void FUN_1080ad400(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1080ad408; end: 1080ad413; -[SCValdiLabelSelectionState selectedRange] */

undefined1  [16] FUN_1080ad408(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 1080ad414; end: 1080ad41b; -[SCValdiLabelSelectionState setSelectedRange:] */

void FUN_1080ad414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  return;
}



/* Entry: 1080ad41c; end: 1080ad423; -[SCValdiLabelSelectionState selectionInteraction] */

undefined8 FUN_1080ad41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080ad424; end: 1080ad443; -[SCValdiLabelSelectionState setSelectionInteraction:] */

void FUN_1080ad424(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ad5c4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ad444; end: 1080ad44b; -[SCValdiLabelSelectionState selectionInstalledInteractions] */

undefined8 FUN_1080ad444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080ad44c; end: 1080ad453; -[SCValdiLabelSelectionState setSelectionInstalledInteractions:] */

void FUN_1080ad44c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1080ad454; end: 1080ad45b; -[SCValdiLabelSelectionState selectionInteractionOverlayView] */

undefined8 FUN_1080ad454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080ad45c; end: 1080ad47b; -[SCValdiLabelSelectionState setSelectionInteractionOverlayView:] */

void FUN_1080ad45c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ad5c4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ad47c; end: 1080ad483; -[SCValdiLabelSelectionState tokenizer] */

undefined8 FUN_1080ad47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1080ad484; end: 1080ad4a3; -[SCValdiLabelSelectionState setTokenizer:] */

void FUN_1080ad484(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ad5c4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ad4a4; end: 1080ad4ab; -[SCValdiLabelSelectionState markedTextStyle] */

undefined8 FUN_1080ad4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1080ad4ac; end: 1080ad4b3; -[SCValdiLabelSelectionState setMarkedTextStyle:] */

void FUN_1080ad4ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1080ad4b4; end: 1080ad4cb; -[SCValdiLabelSelectionState inputDelegate] */

void FUN_1080ad4b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080ad4cc; end: 1080ad4d7; -[SCValdiLabelSelectionState setInputDelegate:] */

void FUN_1080ad4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1080ad4d8; end: 1080ad4df; -[SCValdiLabelSelectionState selectionAffinity] */

undefined8 FUN_1080ad4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080ad4e0; end: 1080ad4e7; -[SCValdiLabelSelectionState setSelectionAffinity:] */

void FUN_1080ad4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1080ad4e8; end: 1080ad4ef; -[SCValdiLabelSelectionState onSelectionChange] */

undefined8 FUN_1080ad4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080ad4f0; end: 1080ad50f; -[SCValdiLabelSelectionState setOnSelectionChange:] */

void FUN_1080ad4f0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ad5c4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ad510; end: 1080ad517; -[SCValdiLabelSelectionState onTextSelectionMenu] */

undefined8 FUN_1080ad510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080ad518; end: 1080ad537; -[SCValdiLabelSelectionState setOnTextSelectionMenu:] */

void FUN_1080ad518(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ad5c4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ad538; end: 1080ad53f; -[SCValdiLabelSelectionState onTextSelectionMenuAction] */

undefined8 FUN_1080ad538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1080ad540; end: 1080ad55f; -[SCValdiLabelSelectionState setOnTextSelectionMenuAction:] */

void FUN_1080ad540(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ad5c4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ad560; end: 1080ad5c3; -[SCValdiLabelSelectionState .cxx_destruct] */

void FUN_1080ad560(long param_1)

{
  func_0x0001080ad5e4(param_1 + 0x58);
  func_0x0001080ad5e4(param_1 + 0x50);
  func_0x0001080ad5e4(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x38);
  func_0x0001080ad5e4(param_1 + 0x30);
  func_0x0001080ad5e4(param_1 + 0x28);
  func_0x0001080ad5e4(param_1 + 0x20);
  func_0x0001080ad5e4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080ad5c4; end: 1080ad6d3;  */

void FUN_1080ad5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1080ad6d4; end: 1080ad76f; -[SCValdiShapeView initWithFrame:] */

undefined1 * FUN_1080ad6d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc618;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080aea5c();
    func_0x0001080ae9a8();
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    func_0x0001080ae9a8();
    func_0x00010c2962c0(puVar1);
    func_0x00010c296300(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080ad770; end: 1080ad86f; -[SCValdiShapeView valdi_applyPath:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ad770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long extraout_x8;
  
  _objc_retain(param_8);
  func_0x0001080aea48();
  func_0x00010bf20c00(param_5);
  func_0x00010b973a6c(param_3,param_4);
  func_0x0001080ae9c0();
  lVar1 = param_5;
  func_0x00010c22a660(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_8 == 0) {
    func_0x00010c1d9820(lVar1,param_6,param_7);
    func_0x0001080ae9c0();
    func_0x0001080aea64((long)_DAT_11277448c);
    func_0x0001080aea64((long)_DAT_112774490);
  }
  else {
    func_0x0001080aea04(param_8,param_6,lVar1,&PTR____CFConstantStringClassReference_110dbfab8);
    func_0x0001080ae9c0();
    if (*(long *)(param_5 + _DAT_11277448c) != 0) {
      func_0x0001080aea04(param_8,param_6,*(long *)(param_5 + _DAT_11277448c),
                          &PTR____CFConstantStringClassReference_110dbfab8);
      func_0x0001080ae9dc();
      func_0x0001080aea04(param_8,param_6,*(undefined8 *)(param_5 + extraout_x8),
                          &PTR____CFConstantStringClassReference_110dbfab8);
    }
  }
  if (param_7 != 0) {
    _CFRelease(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1080ad870; end: 1080ad923; -[SCValdiShapeView valdi_setPath:animator:] */

void FUN_1080ad870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001080ae9d4();
  func_0x00010c295620(param_1,param_2,param_3,param_4);
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1080ad924;
  puStack_40 = &UNK_110a1be50;
  uStack_38 = param_3;
  func_0x0001080ae9e8();
  func_0x00010c18d6c0(param_1,param_2,&puStack_58,&PTR____CFConstantStringClassReference_110df1218);
  func_0x0001080aea14();
  _objc_release(uStack_38);
  func_0x0001080ae9a8();
  return;
}



/* Entry: 1080ad924; end: 1080ad933;  */

void FUN_1080ad924(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_applyPath_animator__112682fb0,*(undefined8 *)(param_1 + 0x20),
             param_3);
  return;
}



/* Entry: 1080ad934; end: 1080ad9fb; -[SCValdiShapeView valdi_setStrokeStart:animator:] */

void FUN_1080ad934(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080ae978();
  lVar1 = unaff_x20;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    func_0x00010c20e9a0(lVar1);
    func_0x0001080ae9a0();
    func_0x0001080ae9dc();
    func_0x00010c20e9a0(*(undefined8 *)(unaff_x20 + extraout_x8_00));
  }
  else {
    func_0x0001080aea70();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080aea30();
    func_0x0001080ae9c0();
    func_0x0001080ae9a0();
    func_0x0001080ae9dc();
    if (*(long *)(unaff_x20 + extraout_x8) != 0) {
      func_0x0001080aea70();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080aea04();
      func_0x0001080ae9a0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080ad9fc; end: 1080adac3; -[SCValdiShapeView valdi_setStrokeEnd:animator:] */

void FUN_1080ad9fc(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080ae978();
  lVar1 = unaff_x20;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    func_0x00010c20e920(lVar1);
    func_0x0001080ae9a0();
    func_0x0001080ae9dc();
    func_0x00010c20e920(*(undefined8 *)(unaff_x20 + extraout_x8_00));
  }
  else {
    func_0x0001080aea70();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080aea30();
    func_0x0001080ae9c0();
    func_0x0001080ae9a0();
    func_0x0001080ae9dc();
    if (*(long *)(unaff_x20 + extraout_x8) != 0) {
      func_0x0001080aea70();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080aea04();
      func_0x0001080ae9a0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080adac4; end: 1080add27; -[SCValdiShapeView _layoutFillGradientWithAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080adac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  puVar6 = &uStack_180;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_5;
  puVar5 = param_7;
  func_0x0001080ae9d4();
  lVar7 = (long)_DAT_112774494;
  if (*(long *)(param_5 + lVar7) != 0) {
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x0001080ae9a8();
    if (param_7 == (undefined1 *)0x0) {
      func_0x0001080ae98c(*(undefined8 *)(param_5 + lVar7));
      func_0x00010c19f0e0();
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277448c));
      lVar10 = *(long *)(param_5 + _DAT_112774490);
      func_0x0001080ae98c();
      func_0x00010c19f0e0();
    }
    else {
      func_0x0001080ae98c();
      _CGRectGetMidX();
      uVar9 = param_1;
      func_0x0001080ae98c();
      _CGRectGetMidY();
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(param_1,uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971a0(0,0,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      plStack_170 = (long *)0x0;
      uStack_138 = *(undefined8 *)(param_5 + lVar7);
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_130 = *(undefined8 *)(param_5 + _DAT_11277448c);
      uStack_128 = *(undefined8 *)(param_5 + _DAT_112774490);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_138,3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar10 = *plStack_170;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_170 != lVar10) {
              _objc_enumerationMutation(puVar3);
            }
            uVar9 = *(undefined8 *)(lStack_178 + (long)puVar11 * 8);
            func_0x00010bef6ca0(param_7,param_6,uVar9,
                                &PTR____CFConstantStringClassReference_110daf598,puVar1);
            func_0x00010bef6ca0(param_7,param_6,uVar9,
                                &PTR____CFConstantStringClassReference_110e41f78,puVar2);
            puVar11 = puVar11 + 1;
          } while (puVar11 < puVar4);
          puVar4 = puVar3;
          puVar6 = &uStack_180;
          func_0x00010bf52a60(puVar3,param_6,&uStack_180,auStack_120,0x10);
        } while (puVar4 != (undefined *)0x0);
      }
      lVar10 = 0;
      func_0x0001080ae9a0();
      func_0x0001080ae9c0();
      func_0x0001080ae9a8();
      puVar5 = (undefined1 *)puVar6;
    }
  }
  func_0x0001080aea14();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar10 + _DAT_112774498) = 0;
  func_0x0001080ae9d4();
  func_0x0001080ae9a0();
  lVar7 = (long)_DAT_112774494;
  func_0x00010c12c940(*(undefined8 *)(lVar10 + lVar7));
  lVar8 = (long)_DAT_112774490;
  func_0x00010c12c940(*(undefined8 *)(lVar10 + lVar8));
  uVar9 = *(undefined8 *)(lVar10 + lVar7);
  *(undefined8 *)(lVar10 + lVar7) = 0;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar10 + _DAT_11277448c);
  *(undefined8 *)(lVar10 + _DAT_11277448c) = 0;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar10 + lVar8);
  *(undefined8 *)(lVar10 + lVar8) = 0;
  _objc_release(uVar9);
  func_0x00010c2954e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d6c0();
  func_0x0001080ae9a0();
  func_0x00010bea3f40(lVar10,param_6,*(undefined8 *)(lVar10 + _DAT_11277449c),puVar5);
  func_0x00010bea80c0(lVar10,param_6,*(undefined8 *)(lVar10 + _DAT_1127744a0),puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1080add28; end: 1080addfb; -[SCValdiShapeView _resetFillGradientWithAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080add28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + _DAT_112774498) = 0;
  func_0x0001080ae9d4();
  func_0x0001080ae9a0();
  lVar2 = (long)_DAT_112774494;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_112774490;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277448c);
  *(undefined8 *)(param_1 + _DAT_11277448c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d6c0();
  func_0x0001080ae9a0();
  func_0x00010bea3f40(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277449c),param_3);
  func_0x00010bea80c0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127744a0),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080addfc; end: 1080ae11f; -[SCValdiShapeView valdi_setFillGradient:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080addfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001080ae9d4();
  func_0x0001080ae9e8();
  uVar4 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    uVar1 = uVar4;
    func_0x00010bf529e0();
    if (uVar1 == 1) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010b988f18();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080aea0c();
    }
    else {
      uVar4 = 0;
    }
    func_0x00010be92be0(param_1);
    if (uVar4 != 0) {
      lVar5 = (long)_DAT_112774498;
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar4;
      _objc_release(uVar3);
      func_0x00010bdce1a0(param_1);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112774498);
    *(undefined8 *)(param_1 + (long)_DAT_112774498) = 0;
    _objc_release(uVar3);
    uVar4 = param_1;
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112774494;
    lVar5 = *(long *)(param_1 + lVar6);
    if (lVar5 == 0) {
      puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar2;
      func_0x0001080aea40(uVar3);
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11277448c;
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      func_0x0001080aea40(uVar3);
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar5));
      func_0x0001080aea0c();
      func_0x00010c0f5800(uVar4);
      func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar6));
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112774490;
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      func_0x0001080aea40(uVar3);
      func_0x0001080aea5c(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c0f5800(uVar4);
      func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c25dbc0(uVar4);
      func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c099460(uVar4);
      func_0x00010c1bdd00(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c0991c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar5));
      func_0x0001080aea0c();
      func_0x00010c099380(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdc80(*(undefined8 *)(param_1 + lVar5));
      func_0x0001080aea0c();
      func_0x00010c25dd20(uVar4);
      func_0x00010c20e9a0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c25dc60(uVar4);
      func_0x00010c20e920(*(undefined8 *)(param_1 + lVar5));
      func_0x0001080aea5c(uVar4);
      func_0x00010c20e8e0(uVar4);
      func_0x00010c066f40(uVar4);
      func_0x00010c066f20(uVar4);
      lVar5 = *(long *)(param_1 + lVar6);
    }
    FUN_1080a7b84(param_3,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be49180(param_1);
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d6c0();
    func_0x0001080ae9c0();
  }
  _objc_release(uVar4);
  func_0x0001080ae9a0();
  func_0x0001080ae9a8();
  func_0x0001080aea14();
  return 1;
}



/* Entry: 1080ae120; end: 1080ae127;  */

void FUN_1080ae120(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be49190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__layoutFillGradientWithAnimator__11256fe00);
  return;
}



/* Entry: 1080ae128; end: 1080ae26b; +[SCValdiShapeView bindAttributes:] */

void FUN_1080ae128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080ae9d4();
  func_0x0001080ae9f8();
  func_0x00010bf1a180();
  func_0x0001080ae9f8();
  func_0x00010bf1a140();
  func_0x0001080ae9f8();
  func_0x00010bf1a140();
  func_0x0001080ae9f8();
  func_0x00010bf1a0c0();
  func_0x0001080ae9f8();
  func_0x00010bf1a060();
  func_0x0001080ae9f8();
  func_0x00010bf1a0c0();
  func_0x0001080ae9f8();
  func_0x00010bf1a0e0();
  func_0x0001080ae9f8();
  func_0x00010bf1a0e0();
  func_0x0001080ae9f8();
  func_0x00010bf1a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080ae26c; end: 1080ae287;  */

undefined8 FUN_1080ae26c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2960c0(param_2);
  return 1;
}



/* Entry: 1080ae288; end: 1080ae2bf;  */

void FUN_1080ae288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2960d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setPath_animator__112683258,0,param_3);
  return;
}



/* Entry: 1080ae2c0; end: 1080ae2db;  */

undefined8 FUN_1080ae2c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea3f40(param_2);
  return 1;
}



/* Entry: 1080ae2dc; end: 1080ae2fb;  */

void FUN_1080ae2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setFillColor_animator__112586978,0,param_3);
  return;
}



/* Entry: 1080ae2fc; end: 1080ae317;  */

undefined8 FUN_1080ae2fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea80c0(param_2);
  return 1;
}



/* Entry: 1080ae318; end: 1080ae327;  */

void FUN_1080ae318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea80d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__setStrokeColor_animator__1125879d8,0,param_3);
  return;
}



/* Entry: 1080ae328; end: 1080ae343;  */

undefined8 FUN_1080ae328(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea5480(param_2);
  return 1;
}



/* Entry: 1080ae344; end: 1080ae34f;  */

void FUN_1080ae344(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_2,PTR_s__setLineWidth_animator__112586ec8);
  return;
}



/* Entry: 1080ae350; end: 1080ae36b;  */

undefined8 FUN_1080ae350(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c296320(param_2);
  return 1;
}



/* Entry: 1080ae36c; end: 1080ae377;  */

void FUN_1080ae36c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_2,PTR_s_valdi_setStrokeStart_animator__1126832f0);
  return;
}



/* Entry: 1080ae378; end: 1080ae393;  */

undefined8 FUN_1080ae378(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2962e0(param_2);
  return 1;
}



/* Entry: 1080ae394; end: 1080ae39f;  */

void FUN_1080ae394(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2962f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_2,PTR_s_valdi_setStrokeEnd_animator__1126832e0);
  return;
}



/* Entry: 1080ae3a0; end: 1080ae3a7; -[SCValdiShapeView willEnqueueIntoValdiPool] */

undefined8 FUN_1080ae3a0(void)

{
  return 1;
}



/* Entry: 1080ae3a8; end: 1080ae3af; -[SCValdiShapeView requiresLayoutWhenAnimatingBounds] */

undefined8 FUN_1080ae3a8(void)

{
  return 0;
}



/* Entry: 1080ae3b0; end: 1080ae3fb; -[SCValdiShapeView layoutSubviews] */

void FUN_1080ae3b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc618;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be49180(param_1);
  return;
}



/* Entry: 1080ae3fc; end: 1080ae3ff; -[SCValdiShapeView shapeLayer] */

void FUN_1080ae3fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 1080ae400; end: 1080ae40b; +[SCValdiShapeView layerClass] */

void FUN_1080ae400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 1080ae40c; end: 1080ae4df; -[SCValdiShapeView _applyFillColor:animator:] */

void FUN_1080ae40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    _objc_retainAutorelease(param_3);
    _objc_retain();
    func_0x00010bdc0fe0(param_3);
    func_0x0001080ae9a8();
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
  }
  else {
    _objc_retain();
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_fillColor_1125c8ee8;
    _NSStringFromSelector(PTR_s_fillColor_1125c8ee8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x0001080ae9a8();
    func_0x00010bef6ca0(param_4,param_2,param_1,puVar1,param_3);
    func_0x0001080ae9c0();
  }
  func_0x0001080ae9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080ae4e0; end: 1080ae55b; -[SCValdiShapeView _setFillColor:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ae4e0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x21;
  long lVar2;
  
  func_0x0001080ae9b0();
  func_0x0001080ae9e8();
  lVar2 = (long)_DAT_11277449c;
  _objc_retain();
  uVar1 = *(undefined8 *)(unaff_x21 + lVar2);
  *(undefined8 *)(unaff_x21 + lVar2) = unaff_x19;
  _objc_release(uVar1);
  if ((*(long *)(unaff_x21 + _DAT_112774494) == 0) && (*(long *)(unaff_x21 + _DAT_112774498) == 0))
  {
    func_0x00010bdce1a0();
  }
  func_0x0001080ae9a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080ae55c; end: 1080ae63f; -[SCValdiShapeView _setStrokeColor:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ae55c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x0001080ae9d4();
  func_0x0001080ae9e8();
  lVar3 = (long)_DAT_1127744a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + _DAT_112774490);
  if (lVar3 == 0) {
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    puVar2 = PTR_s_strokeColor_112675118;
  }
  else {
    _objc_retain(lVar3);
    puVar2 = PTR_s_strokeColor_112675118;
  }
  PTR_s_strokeColor_112675118 = puVar2;
  if (param_4 == 0) {
    uVar1 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(lVar3,param_2,uVar1);
  }
  else {
    _NSStringFromSelector(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x00010bef6ca0(param_4,param_2,lVar3,puVar2,uVar1);
    func_0x0001080ae9c0();
  }
  func_0x0001080ae9a0();
  func_0x0001080ae9a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080ae640; end: 1080ae76b; -[SCValdiShapeView _setLineWidth:animator:] */

void FUN_1080ae640(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080ae978();
  lVar2 = unaff_x20;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_lineWidth_112603f28;
  if (unaff_x19 == 0) {
    func_0x00010c1bdd00(lVar2);
    func_0x0001080ae9a0();
    func_0x0001080ae9dc();
    func_0x00010c1bdd00(*(undefined8 *)(unaff_x20 + extraout_x8_00));
  }
  else {
    puVar3 = PTR_s_lineWidth_112603f28;
    _NSStringFromSelector(PTR_s_lineWidth_112603f28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6ca0();
    func_0x0001080aea0c();
    _objc_release(puVar3);
    func_0x0001080ae9a0();
    func_0x0001080ae9dc();
    if (*(long *)(unaff_x20 + extraout_x8) != 0) {
      _NSStringFromSelector(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6ca0();
      func_0x0001080ae9c0();
      func_0x0001080ae9a0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080ae76c; end: 1080ae837; -[SCValdiShapeView valdi_setStrokeCap:] */

undefined8 FUN_1080ae76c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  
  func_0x0001080ae9b0();
  uVar3 = *(undefined8 *)PTR__kCALineCapButt_110346d38;
  func_0x0001080ae9e8();
  if ((unaff_x19 != 0) && (func_0x0001080ae9f0(), (param_1 & 1) == 0)) {
    func_0x0001080ae9f0();
    iVar1 = (int)param_1;
    puVar2 = (undefined8 *)PTR__kCALineCapRound_110346d40;
    if (((param_1 & 1) == 0) &&
       (func_0x0001080ae9f0(), puVar2 = (undefined8 *)PTR__kCALineCapSquare_110346d48, iVar1 == 0))
    {
      uVar3 = 0;
      goto LAB_1080ae81c;
    }
    uVar3 = *puVar2;
    func_0x0001080aea48();
    func_0x0001080ae9a8();
  }
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb40();
  func_0x0001080ae9c0();
  func_0x0001080ae9dc();
  func_0x00010c1bdb40(*(undefined8 *)(unaff_x21 + extraout_x8),param_2,uVar3);
  uVar3 = 1;
LAB_1080ae81c:
  func_0x0001080ae9a8();
  func_0x0001080aea14();
  return uVar3;
}



/* Entry: 1080ae838; end: 1080ae907; -[SCValdiShapeView valdi_setStrokeJoin:] */

undefined8 FUN_1080ae838(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  
  func_0x0001080ae9b0();
  uVar3 = *(undefined8 *)PTR__kCALineJoinMiter_110346d58;
  func_0x0001080ae9e8();
  if (unaff_x19 != 0) {
    func_0x0001080ae9f0();
    puVar2 = (undefined8 *)PTR__kCALineJoinBevel_110346d50;
    if ((param_1 & 1) == 0) {
      func_0x0001080ae9f0();
      iVar1 = (int)param_1;
      if ((param_1 & 1) != 0) goto LAB_1080ae89c;
      func_0x0001080ae9f0();
      puVar2 = (undefined8 *)PTR__kCALineJoinRound_110346d60;
      if (iVar1 == 0) {
        uVar3 = 0;
        goto LAB_1080ae8d0;
      }
    }
    uVar3 = *puVar2;
    func_0x0001080aea48();
    func_0x0001080ae9a8();
  }
LAB_1080ae89c:
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdc80();
  func_0x0001080ae9c0();
  func_0x0001080ae9dc();
  func_0x00010c1bdc80(*(undefined8 *)(unaff_x21 + extraout_x8),param_2,uVar3);
  uVar3 = 1;
LAB_1080ae8d0:
  func_0x0001080ae9a8();
  func_0x0001080aea14();
  return uVar3;
}



/* Entry: 1080ae908; end: 1080ae967; -[SCValdiShapeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ae908(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112774490,0);
  func_0x0001080ae9c8((long)_DAT_11277448c);
  func_0x0001080ae9c8((long)_DAT_112774494);
  func_0x0001080ae9c8((long)_DAT_1127744a0);
  func_0x0001080ae9c8((long)_DAT_112774498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277449c,0);
  return;
}



/* Entry: 1080ae968; end: 1080aea7b;  */

void FUN_1080ae968(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080aea7c; end: 1080aeaaf; -[SCValdiTextAnimationGroupDisplayLinkProxy initWithTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080aea7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_1127744a4,param_3);
  return param_1;
}


