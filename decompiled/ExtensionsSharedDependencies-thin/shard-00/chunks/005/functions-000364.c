/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0073ba7c; end: 0073baa3; -[GPBInt64Array addValue:] */

void FUN_0073ba7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x0077e9e0(param_1,param_2,&uStack_18,1);
  return;
}



/* Entry: 0073baa4; end: 0073bb37; -[GPBInt64Array addValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073baa4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = lVar2 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x007872e0(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar2 * 8,param_3,param_4 << 3);
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar10 = lVar2;
      lVar3 = param_1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar10 + 8);
      lVar10 = lVar7;
      func_0x00780ea0();
      lVar9 = 0;
      if (lVar10 != 0) {
        do {
          lVar9 = 0;
          do {
            lVar8 = *(long *)(lVar9 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 1) {
              lVar5 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == param_1) {
                piVar6 = (int *)&DAT_00ac6014;
                if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
                  piVar6 = (int *)&DAT_00ac6018;
                }
                *(undefined8 *)(param_1 + *piVar6) = 0;
                FUN_0076248c();
                lVar9 = lVar2;
                goto LAB_0076260c;
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar10 != lVar9);
          lVar10 = lVar7;
          func_0x00780ea0();
        } while (lVar10 != 0);
        lVar9 = 0;
      }
LAB_0076260c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar9;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar2 + 8);
      lVar2 = lVar7;
      func_0x00780ea0();
      lVar10 = 0;
      if (lVar2 != 0) {
        do {
          lVar10 = 0;
          do {
            lVar8 = *(long *)(lVar10 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 2) {
              lVar5 = 0;
              if (*(long *)(lVar9 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar9 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == lVar3) {
                lVar2 = lVar8;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
                  piVar6 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar6 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(lVar3 + *piVar6) = 0;
                FUN_0076248c();
                lVar10 = lVar9;
                goto LAB_00762778;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar2 != lVar10);
          lVar2 = lVar7;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar10 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
        ___stack_chk_fail();
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
          *(undefined8 *)(lVar10 + 0x20) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x28));
          *(undefined8 *)(lVar10 + 0x28) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x30));
          *(undefined8 *)(lVar10 + 0x30) = 0;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 0073bb38; end: 0073bc17; -[GPBInt64Array insertValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073bb38(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar6 = lVar7 + 1;
  if (uVar6 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = lVar7 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar6) {
    func_0x007872e0(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar6;
  if (lVar7 - param_4 != 0) {
    lVar10 = *(long *)(param_1 + 0x10) + param_4 * 8;
    _memmove(lVar10 + 8,lVar10,(lVar7 - param_4) * 8);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_4 * 8) = param_3;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = lVar7;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar5 = *(long *)(lVar10 + 8);
  lVar10 = lVar5;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar10 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 1) {
          lVar3 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == param_1) {
            piVar4 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
              piVar4 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar4) = 0;
            FUN_0076248c();
            lVar9 = lVar7;
            goto LAB_0076260c;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar5;
      func_0x00780ea0();
    } while (lVar10 != 0);
    lVar9 = 0;
  }
LAB_0076260c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = lVar9;
  _objc_opt_class();
  func_0x00781ea0();
  lVar5 = *(long *)(lVar7 + 8);
  lVar7 = lVar5;
  func_0x00780ea0();
  lVar10 = 0;
  if (lVar7 != 0) {
    do {
      lVar10 = 0;
      do {
        lVar8 = *(long *)(lVar10 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 2) {
          lVar3 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == lVar1) {
            lVar7 = lVar8;
            func_0x00788e40();
            if (((int)lVar7 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar4 = (int *)&DAT_00ac6294;
            }
            else {
              piVar4 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar1 + *piVar4) = 0;
            FUN_0076248c();
            lVar10 = lVar9;
            goto LAB_00762778;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar5;
      func_0x00780ea0();
    } while (lVar7 != 0);
    lVar10 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar2) {
    ___stack_chk_fail();
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
      *(undefined8 *)(lVar10 + 0x20) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x28));
      *(undefined8 *)(lVar10 + 0x28) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x30));
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
    return;
  }
  return;
}



/* Entry: 0073bc18; end: 0073bc83; -[GPBInt64Array replaceValueAtIndex:withValue:] */

void FUN_0073bc18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_4;
  return;
}



/* Entry: 0073bc84; end: 0073bc8f; -[GPBInt64Array addValuesFromArray:] */

void FUN_0073bc84(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addValues_count__00aba770,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073bc90; end: 0073bd47; -[GPBInt64Array removeValueAtIndex:] */

void FUN_0073bc90(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 8;
    _memmove(lVar1,lVar1 + 8,(uVar3 - param_3) * 8);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_internalResizeToCapacity__00abc9c0,(uVar3 & 0xfffffffffffffff0) + 0x10)
    ;
    return;
  }
  return;
}



/* Entry: 0073bd48; end: 0073bd63; -[GPBInt64Array removeAll] */

void FUN_0073bd48(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_internalResizeToCapacity__00abc9c0,0x10);
    return;
  }
  return;
}



/* Entry: 0073bd64; end: 0073be07; -[GPBInt64Array exchangeValueAtIndex:withValueAtIndex:] */

void FUN_0073bd64(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__NSRangeException_00999cb8;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar2 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,*(undefined8 *)puVar1,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + param_3 * 8);
  *(undefined8 *)(lVar3 + param_3 * 8) = *(undefined8 *)(lVar3 + param_4 * 8);
  *(undefined8 *)(lVar3 + param_4 * 8) = uVar4;
  return;
}



/* Entry: 0073be08; end: 0073be0f; -[GPBInt64Array count] */

undefined8 FUN_0073be08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073be10; end: 0073be23; +[GPBUInt64Array array] */

void FUN_0073be10(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073be24; end: 0073be53; +[GPBUInt64Array arrayWithValue:] */

void FUN_0073be24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  _objc_alloc();
  func_0x00786fe0(param_1,param_2,&uStack_18,1);
  _objc_autorelease();
  return;
}



/* Entry: 0073be54; end: 0073be7b; +[GPBUInt64Array arrayWithValueArray:] */

void FUN_0073be54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786fa0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073be7c; end: 0073bea3; +[GPBUInt64Array arrayWithCapacity:] */

void FUN_0073be7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784f20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073bea4; end: 0073bed7; -[GPBUInt64Array init] */

void FUN_0073bea4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4690;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0073bed8; end: 0073bee3; -[GPBUInt64Array initWithValueArray:] */

void FUN_0073bed8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValues_count__00abc900,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073bee4; end: 0073bf87; -[GPBUInt64Array initWithValues:count:] */

long FUN_0073bee4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x007849a0();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 3);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 0073bf88; end: 0073bfcb; -[GPBUInt64Array initWithCapacity:] */

long FUN_0073bf88(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786fe0(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x007872e0(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 0073bfcc; end: 0073bff7; -[GPBUInt64Array copyWithZone:] */

void FUN_0073bfcc(void)

{
  func_0x0077ec40(PTR_PTR_00ac3738);
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073bff8; end: 0073c03f; -[GPBUInt64Array dealloc] */

void FUN_0073bff8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4690;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073c040; end: 0073c0bb; -[GPBUInt64Array isEqual:] */

bool FUN_0073c040(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_00ac3738;
    _objc_opt_class(PTR_PTR_00ac3738);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 3);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 0073c0bc; end: 0073c0c3; -[GPBUInt64Array hash] */

undefined8 FUN_0073c0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073c0c4; end: 0073c187; -[GPBUInt64Array description] */

undefined * FUN_0073c0c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4aac0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_00a2a800;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_00a4abc0;
      }
      func_0x0077eec0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0073c188; end: 0073c193; -[GPBUInt64Array enumerateValuesWithBlock:] */

void FUN_0073c188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_enumerateValuesWithOptions_using_00abb830,0,param_3);
  return;
}



/* Entry: 0073c194; end: 0073c24b; -[GPBUInt64Array enumerateValuesWithOptions:usingBlock:] */

void FUN_0073c194(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (param_4,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),lVar3,&bStack_31);
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
                (param_4,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 0073c24c; end: 0073c2ab; -[GPBUInt64Array valueAtIndex:] */

undefined8 FUN_0073c24c(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8);
}



/* Entry: 0073c2ac; end: 0073c31f; -[GPBUInt64Array internalResizeToCapacity:] */

void FUN_0073c2ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0073c320; end: 0073c347; -[GPBUInt64Array addValue:] */

void FUN_0073c320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x0077e9e0(param_1,param_2,&uStack_18,1);
  return;
}



/* Entry: 0073c348; end: 0073c3db; -[GPBUInt64Array addValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073c348(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = lVar2 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x007872e0(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar2 * 8,param_3,param_4 << 3);
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar10 = lVar2;
      lVar3 = param_1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar10 + 8);
      lVar10 = lVar7;
      func_0x00780ea0();
      lVar9 = 0;
      if (lVar10 != 0) {
        do {
          lVar9 = 0;
          do {
            lVar8 = *(long *)(lVar9 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 1) {
              lVar5 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == param_1) {
                piVar6 = (int *)&DAT_00ac6014;
                if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
                  piVar6 = (int *)&DAT_00ac6018;
                }
                *(undefined8 *)(param_1 + *piVar6) = 0;
                FUN_0076248c();
                lVar9 = lVar2;
                goto LAB_0076260c;
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar10 != lVar9);
          lVar10 = lVar7;
          func_0x00780ea0();
        } while (lVar10 != 0);
        lVar9 = 0;
      }
LAB_0076260c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar9;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar2 + 8);
      lVar2 = lVar7;
      func_0x00780ea0();
      lVar10 = 0;
      if (lVar2 != 0) {
        do {
          lVar10 = 0;
          do {
            lVar8 = *(long *)(lVar10 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 2) {
              lVar5 = 0;
              if (*(long *)(lVar9 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar9 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == lVar3) {
                lVar2 = lVar8;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
                  piVar6 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar6 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(lVar3 + *piVar6) = 0;
                FUN_0076248c();
                lVar10 = lVar9;
                goto LAB_00762778;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar2 != lVar10);
          lVar2 = lVar7;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar10 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
        ___stack_chk_fail();
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
          *(undefined8 *)(lVar10 + 0x20) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x28));
          *(undefined8 *)(lVar10 + 0x28) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x30));
          *(undefined8 *)(lVar10 + 0x30) = 0;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 0073c3dc; end: 0073c4bb; -[GPBUInt64Array insertValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073c3dc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar6 = lVar7 + 1;
  if (uVar6 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = lVar7 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar6) {
    func_0x007872e0(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar6;
  if (lVar7 - param_4 != 0) {
    lVar10 = *(long *)(param_1 + 0x10) + param_4 * 8;
    _memmove(lVar10 + 8,lVar10,(lVar7 - param_4) * 8);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_4 * 8) = param_3;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = lVar7;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar5 = *(long *)(lVar10 + 8);
  lVar10 = lVar5;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar10 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 1) {
          lVar3 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == param_1) {
            piVar4 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
              piVar4 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar4) = 0;
            FUN_0076248c();
            lVar9 = lVar7;
            goto LAB_0076260c;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar5;
      func_0x00780ea0();
    } while (lVar10 != 0);
    lVar9 = 0;
  }
LAB_0076260c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = lVar9;
  _objc_opt_class();
  func_0x00781ea0();
  lVar5 = *(long *)(lVar7 + 8);
  lVar7 = lVar5;
  func_0x00780ea0();
  lVar10 = 0;
  if (lVar7 != 0) {
    do {
      lVar10 = 0;
      do {
        lVar8 = *(long *)(lVar10 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 2) {
          lVar3 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == lVar1) {
            lVar7 = lVar8;
            func_0x00788e40();
            if (((int)lVar7 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar4 = (int *)&DAT_00ac6294;
            }
            else {
              piVar4 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar1 + *piVar4) = 0;
            FUN_0076248c();
            lVar10 = lVar9;
            goto LAB_00762778;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar5;
      func_0x00780ea0();
    } while (lVar7 != 0);
    lVar10 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar2) {
    ___stack_chk_fail();
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
      *(undefined8 *)(lVar10 + 0x20) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x28));
      *(undefined8 *)(lVar10 + 0x28) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x30));
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
    return;
  }
  return;
}



/* Entry: 0073c4bc; end: 0073c527; -[GPBUInt64Array replaceValueAtIndex:withValue:] */

void FUN_0073c4bc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_4;
  return;
}



/* Entry: 0073c528; end: 0073c533; -[GPBUInt64Array addValuesFromArray:] */

void FUN_0073c528(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addValues_count__00aba770,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073c534; end: 0073c5eb; -[GPBUInt64Array removeValueAtIndex:] */

void FUN_0073c534(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 8;
    _memmove(lVar1,lVar1 + 8,(uVar3 - param_3) * 8);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_internalResizeToCapacity__00abc9c0,(uVar3 & 0xfffffffffffffff0) + 0x10)
    ;
    return;
  }
  return;
}



/* Entry: 0073c5ec; end: 0073c607; -[GPBUInt64Array removeAll] */

void FUN_0073c5ec(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_internalResizeToCapacity__00abc9c0,0x10);
    return;
  }
  return;
}



/* Entry: 0073c608; end: 0073c6ab; -[GPBUInt64Array exchangeValueAtIndex:withValueAtIndex:] */

void FUN_0073c608(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__NSRangeException_00999cb8;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar2 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,*(undefined8 *)puVar1,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + param_3 * 8);
  *(undefined8 *)(lVar3 + param_3 * 8) = *(undefined8 *)(lVar3 + param_4 * 8);
  *(undefined8 *)(lVar3 + param_4 * 8) = uVar4;
  return;
}



/* Entry: 0073c6ac; end: 0073c6b3; -[GPBUInt64Array count] */

undefined8 FUN_0073c6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073c6b4; end: 0073c6c7; +[GPBFloatArray array] */

void FUN_0073c6b4(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073c6c8; end: 0073c6f7; +[GPBFloatArray arrayWithValue:] */

void FUN_0073c6c8(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  _objc_alloc();
  func_0x00786fe0(param_2,param_3,&uStack_14,1);
  _objc_autorelease();
  return;
}



/* Entry: 0073c6f8; end: 0073c71f; +[GPBFloatArray arrayWithValueArray:] */

void FUN_0073c6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786fa0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073c720; end: 0073c747; +[GPBFloatArray arrayWithCapacity:] */

void FUN_0073c720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784f20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073c748; end: 0073c77b; -[GPBFloatArray init] */

void FUN_0073c748(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4698;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0073c77c; end: 0073c787; -[GPBFloatArray initWithValueArray:] */

void FUN_0073c77c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValues_count__00abc900,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073c788; end: 0073c82b; -[GPBFloatArray initWithValues:count:] */

long FUN_0073c788(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x007849a0();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 2);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 0073c82c; end: 0073c86f; -[GPBFloatArray initWithCapacity:] */

long FUN_0073c82c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786fe0(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x007872e0(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 0073c870; end: 0073c89b; -[GPBFloatArray copyWithZone:] */

void FUN_0073c870(void)

{
  func_0x0077ec40(PTR_PTR_00ac3740);
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073c89c; end: 0073c8e3; -[GPBFloatArray dealloc] */

void FUN_0073c89c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4698;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073c8e4; end: 0073c95f; -[GPBFloatArray isEqual:] */

bool FUN_0073c8e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_00ac3740;
    _objc_opt_class(PTR_PTR_00ac3740);
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



/* Entry: 0073c960; end: 0073c967; -[GPBFloatArray hash] */

undefined8 FUN_0073c960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073c968; end: 0073ca1b; -[GPBFloatArray description] */

undefined * FUN_0073c968(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a4aac0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a4abe0;
      if (lVar4 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a4ac00;
      }
      func_0x0077eec0(puVar2,param_2,ppuVar1);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x0077eec0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar2;
}



/* Entry: 0073ca1c; end: 0073ca27; -[GPBFloatArray enumerateValuesWithBlock:] */

void FUN_0073ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_enumerateValuesWithOptions_using_00abb830,0,param_3);
  return;
}



/* Entry: 0073ca28; end: 0073cadf; -[GPBFloatArray enumerateValuesWithOptions:usingBlock:] */

void FUN_0073ca28(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar3 * 4),param_4,lVar3,&bStack_31);
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
                (*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar2 * 4),param_4,lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 0073cae0; end: 0073cb3f; -[GPBFloatArray valueAtIndex:] */

undefined4 FUN_0073cae0(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + param_3 * 4);
}



/* Entry: 0073cb40; end: 0073cbb3; -[GPBFloatArray internalResizeToCapacity:] */

void FUN_0073cb40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 2);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0073cbb4; end: 0073cbdb; -[GPBFloatArray addValue:] */

void FUN_0073cbb4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  func_0x0077e9e0(param_2,param_3,&uStack_14,1);
  return;
}



/* Entry: 0073cbdc; end: 0073cc6f; -[GPBFloatArray addValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073cbdc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = lVar2 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x007872e0(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar2 * 4,param_3,param_4 << 2);
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar10 = lVar2;
      lVar3 = param_1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar10 + 8);
      lVar10 = lVar7;
      func_0x00780ea0();
      lVar9 = 0;
      if (lVar10 != 0) {
        do {
          lVar9 = 0;
          do {
            lVar8 = *(long *)(lVar9 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 1) {
              lVar5 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == param_1) {
                piVar6 = (int *)&DAT_00ac6014;
                if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
                  piVar6 = (int *)&DAT_00ac6018;
                }
                *(undefined8 *)(param_1 + *piVar6) = 0;
                FUN_0076248c();
                lVar9 = lVar2;
                goto LAB_0076260c;
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar10 != lVar9);
          lVar10 = lVar7;
          func_0x00780ea0();
        } while (lVar10 != 0);
        lVar9 = 0;
      }
LAB_0076260c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar9;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar2 + 8);
      lVar2 = lVar7;
      func_0x00780ea0();
      lVar10 = 0;
      if (lVar2 != 0) {
        do {
          lVar10 = 0;
          do {
            lVar8 = *(long *)(lVar10 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 2) {
              lVar5 = 0;
              if (*(long *)(lVar9 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar9 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == lVar3) {
                lVar2 = lVar8;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
                  piVar6 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar6 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(lVar3 + *piVar6) = 0;
                FUN_0076248c();
                lVar10 = lVar9;
                goto LAB_00762778;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar2 != lVar10);
          lVar2 = lVar7;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar10 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
        ___stack_chk_fail();
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
          *(undefined8 *)(lVar10 + 0x20) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x28));
          *(undefined8 *)(lVar10 + 0x28) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x30));
          *(undefined8 *)(lVar10 + 0x30) = 0;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 0073cc70; end: 0073cd4f; -[GPBFloatArray insertValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073cc70(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar5 = lVar7 + 1;
  if (uVar5 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar5 = lVar7 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar5) {
    func_0x007872e0(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar5;
  if (lVar7 - param_3 != 0) {
    lVar10 = *(long *)(param_1 + 0x10) + param_3 * 4;
    _memmove(lVar10 + 4,lVar10,(lVar7 - param_3) * 4);
  }
  *(uint *)(*(long *)(param_1 + 0x10) + param_3 * 4) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = lVar7;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar10 + 8);
  lVar10 = lVar6;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar10 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 1) {
          lVar3 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == param_1) {
            piVar4 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
              piVar4 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar4) = 0;
            FUN_0076248c();
            lVar9 = lVar7;
            goto LAB_0076260c;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar6;
      func_0x00780ea0();
    } while (lVar10 != 0);
    lVar9 = 0;
  }
LAB_0076260c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = lVar9;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar7 + 8);
  lVar7 = lVar6;
  func_0x00780ea0();
  lVar10 = 0;
  if (lVar7 != 0) {
    do {
      lVar10 = 0;
      do {
        lVar8 = *(long *)(lVar10 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 2) {
          lVar3 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == lVar1) {
            lVar7 = lVar8;
            func_0x00788e40();
            if (((int)lVar7 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar4 = (int *)&DAT_00ac6294;
            }
            else {
              piVar4 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar1 + *piVar4) = 0;
            FUN_0076248c();
            lVar10 = lVar9;
            goto LAB_00762778;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar6;
      func_0x00780ea0();
    } while (lVar7 != 0);
    lVar10 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar2) {
    ___stack_chk_fail();
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
      *(undefined8 *)(lVar10 + 0x20) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x28));
      *(undefined8 *)(lVar10 + 0x28) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x30));
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
    return;
  }
  return;
}



/* Entry: 0073cd50; end: 0073cdbb; -[GPBFloatArray replaceValueAtIndex:withValue:] */

void FUN_0073cd50(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  if (*(ulong *)(param_2 + 0x18) <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_3,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  *(undefined4 *)(*(long *)(param_2 + 0x10) + param_4 * 4) = param_1;
  return;
}



/* Entry: 0073cdbc; end: 0073cdc7; -[GPBFloatArray addValuesFromArray:] */

void FUN_0073cdbc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addValues_count__00aba770,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073cdc8; end: 0073ce7f; -[GPBFloatArray removeValueAtIndex:] */

void FUN_0073cdc8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 4;
    _memmove(lVar1,lVar1 + 4,(uVar3 - param_3) * 4);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_internalResizeToCapacity__00abc9c0,(uVar3 & 0xfffffffffffffff0) + 0x10)
    ;
    return;
  }
  return;
}



/* Entry: 0073ce80; end: 0073ce9b; -[GPBFloatArray removeAll] */

void FUN_0073ce80(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_internalResizeToCapacity__00abc9c0,0x10);
    return;
  }
  return;
}



/* Entry: 0073ce9c; end: 0073cf3f; -[GPBFloatArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_0073ce9c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar1 = PTR__NSRangeException_00999cb8;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar2 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,*(undefined8 *)puVar1,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(lVar3 + param_3 * 4);
  *(undefined4 *)(lVar3 + param_3 * 4) = *(undefined4 *)(lVar3 + param_4 * 4);
  *(undefined4 *)(lVar3 + param_4 * 4) = uVar4;
  return;
}



/* Entry: 0073cf40; end: 0073cf47; -[GPBFloatArray count] */

undefined8 FUN_0073cf40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073cf48; end: 0073cf5b; +[GPBDoubleArray array] */

void FUN_0073cf48(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073cf5c; end: 0073cf8b; +[GPBDoubleArray arrayWithValue:] */

void FUN_0073cf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  _objc_alloc();
  func_0x00786fe0(param_2,param_3,&uStack_18,1);
  _objc_autorelease();
  return;
}



/* Entry: 0073cf8c; end: 0073cfb3; +[GPBDoubleArray arrayWithValueArray:] */

void FUN_0073cf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786fa0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073cfb4; end: 0073cfdb; +[GPBDoubleArray arrayWithCapacity:] */

void FUN_0073cfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784f20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073cfdc; end: 0073d00f; -[GPBDoubleArray init] */

void FUN_0073cfdc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac46a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0073d010; end: 0073d01b; -[GPBDoubleArray initWithValueArray:] */

void FUN_0073d010(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValues_count__00abc900,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073d01c; end: 0073d0bf; -[GPBDoubleArray initWithValues:count:] */

long FUN_0073d01c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x007849a0();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 3);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 0073d0c0; end: 0073d103; -[GPBDoubleArray initWithCapacity:] */

long FUN_0073d0c0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786fe0(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x007872e0(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 0073d104; end: 0073d12f; -[GPBDoubleArray copyWithZone:] */

void FUN_0073d104(void)

{
  func_0x0077ec40(PTR_PTR_00ac3748);
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073d130; end: 0073d177; -[GPBDoubleArray dealloc] */

void FUN_0073d130(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac46a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073d178; end: 0073d1f3; -[GPBDoubleArray isEqual:] */

bool FUN_0073d178(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_00ac3748;
    _objc_opt_class(PTR_PTR_00ac3748);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 3);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 0073d1f4; end: 0073d1fb; -[GPBDoubleArray hash] */

undefined8 FUN_0073d1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073d1fc; end: 0073d2bf; -[GPBDoubleArray description] */

undefined * FUN_0073d1fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4aac0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_00a4ac20;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_00a4ac40;
      }
      func_0x0077eec0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0073d2c0; end: 0073d2cb; -[GPBDoubleArray enumerateValuesWithBlock:] */

void FUN_0073d2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_enumerateValuesWithOptions_using_00abb830,0,param_3);
  return;
}



/* Entry: 0073d2cc; end: 0073d383; -[GPBDoubleArray enumerateValuesWithOptions:usingBlock:] */

void FUN_0073d2cc(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),param_4,lVar3,&bStack_31);
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
                (*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),param_4,lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 0073d384; end: 0073d3e3; -[GPBDoubleArray valueAtIndex:] */

undefined8 FUN_0073d384(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8);
}



/* Entry: 0073d3e4; end: 0073d457; -[GPBDoubleArray internalResizeToCapacity:] */

void FUN_0073d3e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0073d458; end: 0073d47f; -[GPBDoubleArray addValue:] */

void FUN_0073d458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0077e9e0(param_2,param_3,&uStack_18,1);
  return;
}



/* Entry: 0073d480; end: 0073d513; -[GPBDoubleArray addValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073d480(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = lVar2 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x007872e0(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar2 * 8,param_3,param_4 << 3);
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar10 = lVar2;
      lVar3 = param_1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar10 + 8);
      lVar10 = lVar7;
      func_0x00780ea0();
      lVar9 = 0;
      if (lVar10 != 0) {
        do {
          lVar9 = 0;
          do {
            lVar8 = *(long *)(lVar9 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 1) {
              lVar5 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == param_1) {
                piVar6 = (int *)&DAT_00ac6014;
                if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
                  piVar6 = (int *)&DAT_00ac6018;
                }
                *(undefined8 *)(param_1 + *piVar6) = 0;
                FUN_0076248c();
                lVar9 = lVar2;
                goto LAB_0076260c;
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar10 != lVar9);
          lVar10 = lVar7;
          func_0x00780ea0();
        } while (lVar10 != 0);
        lVar9 = 0;
      }
LAB_0076260c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar9;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar2 + 8);
      lVar2 = lVar7;
      func_0x00780ea0();
      lVar10 = 0;
      if (lVar2 != 0) {
        do {
          lVar10 = 0;
          do {
            lVar8 = *(long *)(lVar10 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 2) {
              lVar5 = 0;
              if (*(long *)(lVar9 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar9 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == lVar3) {
                lVar2 = lVar8;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
                  piVar6 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar6 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(lVar3 + *piVar6) = 0;
                FUN_0076248c();
                lVar10 = lVar9;
                goto LAB_00762778;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar2 != lVar10);
          lVar2 = lVar7;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar10 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
        ___stack_chk_fail();
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
          *(undefined8 *)(lVar10 + 0x20) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x28));
          *(undefined8 *)(lVar10 + 0x28) = 0;
          _objc_release(*(undefined8 *)(lVar10 + 0x30));
          *(undefined8 *)(lVar10 + 0x30) = 0;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 0073d514; end: 0073d5f3; -[GPBDoubleArray insertValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073d514(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar5 = lVar7 + 1;
  if (uVar5 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar5 = lVar7 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar5) {
    func_0x007872e0(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar5;
  if (lVar7 - param_3 != 0) {
    lVar10 = *(long *)(param_1 + 0x10) + param_3 * 8;
    _memmove(lVar10 + 8,lVar10,(lVar7 - param_3) * 8);
  }
  *(ulong *)(*(long *)(param_1 + 0x10) + param_3 * 8) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = lVar7;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar10 + 8);
  lVar10 = lVar6;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar10 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 1) {
          lVar3 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == param_1) {
            piVar4 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
              piVar4 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar4) = 0;
            FUN_0076248c();
            lVar9 = lVar7;
            goto LAB_0076260c;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar6;
      func_0x00780ea0();
    } while (lVar10 != 0);
    lVar9 = 0;
  }
LAB_0076260c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = lVar9;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar7 + 8);
  lVar7 = lVar6;
  func_0x00780ea0();
  lVar10 = 0;
  if (lVar7 != 0) {
    do {
      lVar10 = 0;
      do {
        lVar8 = *(long *)(lVar10 * 8);
        lVar3 = lVar8;
        func_0x00783280();
        if ((int)lVar3 == 2) {
          lVar3 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar3 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar3 == lVar1) {
            lVar7 = lVar8;
            func_0x00788e40();
            if (((int)lVar7 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar4 = (int *)&DAT_00ac6294;
            }
            else {
              piVar4 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar1 + *piVar4) = 0;
            FUN_0076248c();
            lVar10 = lVar9;
            goto LAB_00762778;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar6;
      func_0x00780ea0();
    } while (lVar7 != 0);
    lVar10 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar2) {
    ___stack_chk_fail();
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
      *(undefined8 *)(lVar10 + 0x20) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x28));
      *(undefined8 *)(lVar10 + 0x28) = 0;
      _objc_release(*(undefined8 *)(lVar10 + 0x30));
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
    return;
  }
  return;
}



/* Entry: 0073d5f4; end: 0073d65f; -[GPBDoubleArray replaceValueAtIndex:withValue:] */

void FUN_0073d5f4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  if (*(ulong *)(param_2 + 0x18) <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_3,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  *(undefined8 *)(*(long *)(param_2 + 0x10) + param_4 * 8) = param_1;
  return;
}



/* Entry: 0073d660; end: 0073d66b; -[GPBDoubleArray addValuesFromArray:] */

void FUN_0073d660(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addValues_count__00aba770,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073d66c; end: 0073d723; -[GPBDoubleArray removeValueAtIndex:] */

void FUN_0073d66c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 8;
    _memmove(lVar1,lVar1 + 8,(uVar3 - param_3) * 8);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_internalResizeToCapacity__00abc9c0,(uVar3 & 0xfffffffffffffff0) + 0x10)
    ;
    return;
  }
  return;
}



/* Entry: 0073d724; end: 0073d73f; -[GPBDoubleArray removeAll] */

void FUN_0073d724(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_internalResizeToCapacity__00abc9c0,0x10);
    return;
  }
  return;
}



/* Entry: 0073d740; end: 0073d7e3; -[GPBDoubleArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_0073d740(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__NSRangeException_00999cb8;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar2 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,*(undefined8 *)puVar1,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + param_3 * 8);
  *(undefined8 *)(lVar3 + param_3 * 8) = *(undefined8 *)(lVar3 + param_4 * 8);
  *(undefined8 *)(lVar3 + param_4 * 8) = uVar4;
  return;
}



/* Entry: 0073d7e4; end: 0073d7eb; -[GPBDoubleArray count] */

undefined8 FUN_0073d7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073d7ec; end: 0073d7ff; +[GPBBoolArray array] */

void FUN_0073d7ec(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073d800; end: 0073d82f; +[GPBBoolArray arrayWithValue:] */

void FUN_0073d800(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  _objc_alloc();
  func_0x00786fe0(param_1,param_2,&uStack_11,1);
  _objc_autorelease();
  return;
}



/* Entry: 0073d830; end: 0073d857; +[GPBBoolArray arrayWithValueArray:] */

void FUN_0073d830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786fa0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073d858; end: 0073d87f; +[GPBBoolArray arrayWithCapacity:] */

void FUN_0073d858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784f20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073d880; end: 0073d8b3; -[GPBBoolArray init] */

void FUN_0073d880(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac46a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0073d8b4; end: 0073d8bf; -[GPBBoolArray initWithValueArray:] */

void FUN_0073d8b4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValues_count__00abc900,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073d8c0; end: 0073d95f; -[GPBBoolArray initWithValues:count:] */

long FUN_0073d8c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x007849a0();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 0073d960; end: 0073d9a3; -[GPBBoolArray initWithCapacity:] */

long FUN_0073d960(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786fe0(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x007872e0(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 0073d9a4; end: 0073d9cf; -[GPBBoolArray copyWithZone:] */

void FUN_0073d9a4(void)

{
  func_0x0077ec40(PTR_PTR_00ac3750);
                    /* WARNING: Could not recover jumptable at 0x00786ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073d9d0; end: 0073da17; -[GPBBoolArray dealloc] */

void FUN_0073d9d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac46a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073da18; end: 0073da8f; -[GPBBoolArray isEqual:] */

bool FUN_0073da18(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    return true;
  }
  puVar1 = PTR_PTR_00ac3750;
  _objc_opt_class(PTR_PTR_00ac3750);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _memcmp(uVar3,*(undefined8 *)(param_3 + 0x10));
    return (int)uVar3 == 0;
  }
  return false;
}



/* Entry: 0073da90; end: 0073da97; -[GPBBoolArray hash] */

undefined8 FUN_0073da90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073da98; end: 0073db47; -[GPBBoolArray description] */

undefined * FUN_0073da98(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a4aac0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a3fd80;
      if (lVar4 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a4aae0;
      }
      func_0x0077eec0(puVar2,param_2,ppuVar1);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x0077eec0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar2;
}


