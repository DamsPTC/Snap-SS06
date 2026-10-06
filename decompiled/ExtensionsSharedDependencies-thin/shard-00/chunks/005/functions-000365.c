/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0073db48; end: 0073db53; -[GPBBoolArray enumerateValuesWithBlock:] */

void FUN_0073db48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_enumerateValuesWithOptions_using_00abb830,0,param_3);
  return;
}



/* Entry: 0073db54; end: 0073dc0b; -[GPBBoolArray enumerateValuesWithOptions:usingBlock:] */

void FUN_0073db54(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (param_4,*(undefined1 *)(*(long *)(param_1 + 0x10) + lVar3),lVar3,&bStack_31);
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
                (param_4,*(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 0073dc0c; end: 0073dc6b; -[GPBBoolArray valueAtIndex:] */

undefined1 FUN_0073dc0c(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x10) + param_3);
}



/* Entry: 0073dc6c; end: 0073dcd3; -[GPBBoolArray internalResizeToCapacity:] */

void FUN_0073dc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0073dcd4; end: 0073dcfb; -[GPBBoolArray addValue:] */

void FUN_0073dcd4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  func_0x0077e9e0(param_1,param_2,&uStack_11,1);
  return;
}



/* Entry: 0073dcfc; end: 0073dd8f; -[GPBBoolArray addValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073dcfc(long param_1,undefined8 param_2,long param_3,long param_4)

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
    _memcpy(*(long *)(param_1 + 0x10) + lVar2,param_3,param_4);
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



/* Entry: 0073dd90; end: 0073de6b; -[GPBBoolArray insertValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073dd90(long param_1,undefined8 param_2,undefined1 param_3,ulong param_4)

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
    lVar10 = *(long *)(param_1 + 0x10) + param_4;
    _memmove(lVar10 + 1,lVar10,lVar7 - param_4);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_4) = param_3;
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



/* Entry: 0073de6c; end: 0073ded7; -[GPBBoolArray replaceValueAtIndex:withValue:] */

void FUN_0073de6c(long param_1,undefined8 param_2,ulong param_3,undefined1 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_3) = param_4;
  return;
}



/* Entry: 0073ded8; end: 0073dee3; -[GPBBoolArray addValuesFromArray:] */

void FUN_0073ded8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addValues_count__00aba770,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 0073dee4; end: 0073df97; -[GPBBoolArray removeValueAtIndex:] */

void FUN_0073dee4(long param_1,undefined8 param_2,ulong param_3)

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
    lVar1 = *(long *)(param_1 + 0x10) + param_3;
    _memmove(lVar1,lVar1 + 1,uVar3 - param_3);
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



/* Entry: 0073df98; end: 0073dfb3; -[GPBBoolArray removeAll] */

void FUN_0073df98(long param_1)

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



/* Entry: 0073dfb4; end: 0073e057; -[GPBBoolArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_0073dfb4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__NSRangeException_00999cb8;
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar3 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar3 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,*(undefined8 *)puVar2,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(lVar4 + param_3);
  *(undefined1 *)(lVar4 + param_3) = *(undefined1 *)(lVar4 + param_4);
  *(undefined1 *)(lVar4 + param_4) = uVar1;
  return;
}



/* Entry: 0073e058; end: 0073e05f; -[GPBBoolArray count] */

undefined8 FUN_0073e058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073e060; end: 0073e07b; +[GPBEnumArray array] */

void FUN_0073e060(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00786f00(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073e07c; end: 0073e0a3; +[GPBEnumArray arrayWithValidationFunction:] */

void FUN_0073e07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786f00(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073e0a4; end: 0073e0e3; +[GPBEnumArray arrayWithValidationFunction:rawValue:] */

void FUN_0073e0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  _objc_alloc();
  func_0x00786f40(param_1,param_2,param_3,&uStack_24,1);
  _objc_autorelease();
  return;
}



/* Entry: 0073e0e4; end: 0073e10b; +[GPBEnumArray arrayWithValueArray:] */

void FUN_0073e0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786fa0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073e10c; end: 0073e13b; +[GPBEnumArray arrayWithValidationFunction:capacity:] */

void FUN_0073e10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00786f20(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073e13c; end: 0073e143; -[GPBEnumArray init] */

void FUN_0073e13c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithValidationFunction__00abc8c8,0);
  return;
}



/* Entry: 0073e144; end: 0073e153; -[GPBEnumArray initWithValueArray:] */

void FUN_0073e144(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8d8,*(undefined8 *)(param_3 + 0x10)
             ,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 0073e154; end: 0073e1ab; -[GPBEnumArray initWithValidationFunction:] */

void FUN_0073e154(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_00ac46b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    pcVar1 = FUN_0073e1ac;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(code **)((long)puVar2 + 0x10) = pcVar1;
  }
  return;
}



/* Entry: 0073e1ac; end: 0073e1bf;  */

bool FUN_0073e1ac(int param_1)

{
  return param_1 != -0x4524111;
}



/* Entry: 0073e1c0; end: 0073e263; -[GPBEnumArray initWithValidationFunction:rawValues:count:] */

long FUN_0073e1c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  
  func_0x00786f00();
  if (((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    lVar1 = *(long *)(param_1 + 0x18);
    _reallocf(lVar1,param_5 << 2);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    else {
      *(long *)(param_1 + 0x28) = param_5;
      _memcpy();
      *(long *)(param_1 + 0x20) = param_5;
    }
  }
  return param_1;
}



/* Entry: 0073e264; end: 0073e29f; -[GPBEnumArray initWithValidationFunction:capacity:] */

long FUN_0073e264(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00786f00();
  if ((param_4 != 0) && (param_1 != 0)) {
    func_0x007872e0(param_1,param_2,param_4);
  }
  return param_1;
}



/* Entry: 0073e2a0; end: 0073e2cf; -[GPBEnumArray copyWithZone:] */

void FUN_0073e2a0(void)

{
  func_0x0077ec40(PTR_PTR_00ac3758);
                    /* WARNING: Could not recover jumptable at 0x00786f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073e2d0; end: 0073e317; -[GPBEnumArray dealloc] */

void FUN_0073e2d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_00ac46b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073e318; end: 0073e393; -[GPBEnumArray isEqual:] */

bool FUN_0073e318(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_00ac3758;
    _objc_opt_class(PTR_PTR_00ac3758);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x18),*(long *)(param_1 + 0x20) << 2);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 0073e394; end: 0073e39b; -[GPBEnumArray hash] */

undefined8 FUN_0073e394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0073e39c; end: 0073e45f; -[GPBEnumArray description] */

undefined * FUN_0073e39c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4aac0);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_00a3fd80;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_00a4aae0;
      }
      func_0x0077eec0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0073e460; end: 0073e46b; -[GPBEnumArray enumerateRawValuesWithBlock:] */

void FUN_0073e460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_enumerateRawValuesWithOptions_us_00abb818,0,param_3);
  return;
}



/* Entry: 0073e46c; end: 0073e523; -[GPBEnumArray enumerateRawValuesWithOptions:usingBlock:] */

void FUN_0073e46c(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_3 >> 1 & 1) == 0) {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined4 *)(*(long *)(param_1 + 0x18) + lVar3 * 4),lVar3,&bStack_31);
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
                (param_4,*(undefined4 *)(*(long *)(param_1 + 0x18) + lVar2 * 4),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 0073e524; end: 0073e59b; -[GPBEnumArray valueAtIndex:] */

int FUN_0073e524(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + param_3 * 4);
  iVar2 = iVar1;
  (**(code **)(param_1 + 0x10))();
  if (iVar2 == 0) {
    iVar1 = -0x4524111;
  }
  return iVar1;
}



/* Entry: 0073e59c; end: 0073e5fb; -[GPBEnumArray rawValueAtIndex:] */

undefined4 FUN_0073e59c(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + param_3 * 4);
}



/* Entry: 0073e5fc; end: 0073e607; -[GPBEnumArray enumerateValuesWithBlock:] */

void FUN_0073e5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_enumerateValuesWithOptions_using_00abb830,0,param_3);
  return;
}



/* Entry: 0073e608; end: 0073e713; -[GPBEnumArray enumerateValuesWithOptions:usingBlock:] */

void FUN_0073e608(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  byte bStack_51;
  
  bStack_51 = 0;
  pcVar8 = *(code **)(param_1 + 0x10);
  if ((param_3 >> 1 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      lVar7 = 0;
      piVar6 = *(int **)(param_1 + 0x18);
      piVar2 = piVar6;
      do {
        piVar10 = piVar2 + 1;
        iVar1 = *piVar2;
        iVar4 = iVar1;
        (*pcVar8)();
        if (iVar4 == 0) {
          iVar1 = -0x4524111;
        }
        (**(code **)(param_4 + 0x10))(param_4,iVar1,lVar7,&bStack_51);
      } while (((bStack_51 & 1) == 0) &&
              (lVar7 = lVar7 + 1, piVar2 = piVar10, piVar10 < piVar6 + lVar5));
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar9 = *(ulong *)(param_1 + 0x18);
      uVar11 = (uVar9 + lVar5 * 4) - 8;
      do {
        lVar5 = lVar5 + -1;
        iVar1 = *(int *)(uVar11 + 4);
        iVar4 = iVar1;
        (*pcVar8)();
        if (iVar4 == 0) {
          iVar1 = -0x4524111;
        }
        (**(code **)(param_4 + 0x10))(param_4,iVar1,lVar5,&bStack_51);
      } while (((bStack_51 & 1) == 0) && (bVar3 = uVar9 <= uVar11, uVar11 = uVar11 - 4, bVar3));
    }
  }
  return;
}



/* Entry: 0073e714; end: 0073e787; -[GPBEnumArray internalResizeToCapacity:] */

void FUN_0073e714(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  _reallocf(lVar1,param_3 << 2);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  *(long *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 0073e788; end: 0073e7af; -[GPBEnumArray addRawValue:] */

void FUN_0073e788(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  func_0x0077e880(param_1,param_2,&uStack_14,1);
  return;
}



/* Entry: 0073e7b0; end: 0073e843; -[GPBEnumArray addRawValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073e7b0(long param_1,undefined8 param_2,long param_3,long param_4)

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
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = lVar2 + param_4;
    if (*(ulong *)(param_1 + 0x28) < uVar1) {
      func_0x007872e0(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    _memcpy(*(long *)(param_1 + 0x18) + lVar2 * 4,param_3,param_4 << 2);
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



/* Entry: 0073e844; end: 0073e923; -[GPBEnumArray insertRawValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073e844(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

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
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar6 = lVar7 + 1;
  if (uVar6 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    lVar7 = *(long *)(param_1 + 0x20);
    uVar6 = lVar7 + 1;
  }
  if (*(ulong *)(param_1 + 0x28) < uVar6) {
    func_0x007872e0(param_1);
  }
  *(ulong *)(param_1 + 0x20) = uVar6;
  if (lVar7 - param_4 != 0) {
    lVar10 = *(long *)(param_1 + 0x18) + param_4 * 4;
    _memmove(lVar10 + 4,lVar10,(lVar7 - param_4) * 4);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + param_4 * 4) = param_3;
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



/* Entry: 0073e924; end: 0073e98f; -[GPBEnumArray replaceValueAtIndex:withRawValue:] */

void FUN_0073e924(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + param_3 * 4) = param_4;
  return;
}



/* Entry: 0073e990; end: 0073e99b; -[GPBEnumArray addRawValuesFromArray:] */

void FUN_0073e990(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addRawValues_count__00aba718,*(undefined8 *)(param_3 + 0x18),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 0073e99c; end: 0073ea53; -[GPBEnumArray removeValueAtIndex:] */

void FUN_0073e99c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x18) + param_3 * 4;
    _memmove(lVar1,lVar1 + 4,(uVar3 - param_3) * 4);
  }
  *(ulong *)(param_1 + 0x20) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_internalResizeToCapacity__00abc9c0,(uVar3 & 0xfffffffffffffff0) + 0x10)
    ;
    return;
  }
  return;
}



/* Entry: 0073ea54; end: 0073ea6f; -[GPBEnumArray removeAll] */

void FUN_0073ea54(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x007872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_internalResizeToCapacity__00abc9c0,0x10);
    return;
  }
  return;
}



/* Entry: 0073ea70; end: 0073eb13; -[GPBEnumArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_0073ea70(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__NSRangeException_00999cb8;
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  if (uVar3 <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,*(undefined8 *)puVar2,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(lVar4 + param_3 * 4);
  *(undefined4 *)(lVar4 + param_3 * 4) = *(undefined4 *)(lVar4 + param_4 * 4);
  *(undefined4 *)(lVar4 + param_4 * 4) = uVar1;
  return;
}



/* Entry: 0073eb14; end: 0073eb3b; -[GPBEnumArray addValue:] */

void FUN_0073eb14(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  func_0x0077e9e0(param_1,param_2,&uStack_14,1);
  return;
}



/* Entry: 0073eb3c; end: 0073ec4f; -[GPBEnumArray addValues:count:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073eb3c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar9 = 0;
    pcVar12 = *(code **)(param_1 + 0x10);
    do {
      uVar2 = (ulong)*(uint *)(param_3 + lVar9 * 4);
      (*pcVar12)();
      puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
      if ((uVar2 & 1) == 0) {
        _objc_opt_class();
        func_0x0078ad40(puVar1);
      }
      lVar9 = lVar9 + 1;
    } while (param_4 != lVar9);
    lVar9 = *(long *)(param_1 + 0x20);
    uVar2 = lVar9 + param_4;
    if (*(ulong *)(param_1 + 0x28) < uVar2) {
      func_0x007872e0(param_1);
    }
    *(ulong *)(param_1 + 0x20) = uVar2;
    _memcpy(*(long *)(param_1 + 0x18) + lVar9 * 4,param_3,param_4 << 2);
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 != 0) {
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar11 = lVar9;
      lVar3 = param_1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar11 + 8);
      lVar11 = lVar7;
      func_0x00780ea0();
      lVar10 = 0;
      if (lVar11 != 0) {
        do {
          lVar10 = 0;
          do {
            lVar8 = *(long *)(lVar10 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 1) {
              lVar5 = 0;
              if (*(long *)(lVar9 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar9 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == param_1) {
                piVar6 = (int *)&DAT_00ac6014;
                if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
                  piVar6 = (int *)&DAT_00ac6018;
                }
                *(undefined8 *)(param_1 + *piVar6) = 0;
                FUN_0076248c();
                lVar10 = lVar9;
                goto LAB_0076260c;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar11 != lVar10);
          lVar11 = lVar7;
          func_0x00780ea0();
        } while (lVar11 != 0);
        lVar10 = 0;
      }
LAB_0076260c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar9 = lVar10;
      _objc_opt_class();
      func_0x00781ea0();
      lVar7 = *(long *)(lVar9 + 8);
      lVar9 = lVar7;
      func_0x00780ea0();
      lVar11 = 0;
      if (lVar9 != 0) {
        do {
          lVar11 = 0;
          do {
            lVar8 = *(long *)(lVar11 * 8);
            lVar5 = lVar8;
            func_0x00783280();
            if ((int)lVar5 == 2) {
              lVar5 = 0;
              if (*(long *)(lVar10 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar10 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
              }
              if (lVar5 == lVar3) {
                lVar9 = lVar8;
                func_0x00788e40();
                if (((int)lVar9 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
                  piVar6 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar6 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(lVar3 + *piVar6) = 0;
                FUN_0076248c();
                lVar11 = lVar10;
                goto LAB_00762778;
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar9 != lVar11);
          lVar9 = lVar7;
          func_0x00780ea0();
        } while (lVar9 != 0);
        lVar11 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
        ___stack_chk_fail();
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0x20) != 0)) {
          *(undefined8 *)(lVar11 + 0x20) = 0;
          _objc_release(*(undefined8 *)(lVar11 + 0x28));
          *(undefined8 *)(lVar11 + 0x28) = 0;
          _objc_release(*(undefined8 *)(lVar11 + 0x30));
          *(undefined8 *)(lVar11 + 0x30) = 0;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 0073ec50; end: 0073ed6b; -[GPBEnumArray insertValue:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_0073ec50(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x20) + 1U <= param_4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  uVar2 = param_3;
  (**(code **)(param_1 + 0x10))();
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if ((uVar2 & 1) == 0) {
    _objc_opt_class();
    func_0x0078ad40(puVar1);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = lVar3 + 1;
  if (*(ulong *)(param_1 + 0x28) < uVar2) {
    func_0x007872e0(param_1);
  }
  *(ulong *)(param_1 + 0x20) = uVar2;
  lVar3 = lVar3 - param_4;
  if (lVar3 != 0) {
    lVar11 = *(long *)(param_1 + 0x18) + param_4 * 4;
    _memmove(lVar11 + 4,lVar11,lVar3 * 4);
  }
  *(int *)(*(long *)(param_1 + 0x18) + param_4 * 4) = (int)param_3;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = lVar3;
  lVar4 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar8 = *(long *)(lVar11 + 8);
  lVar11 = lVar8;
  func_0x00780ea0();
  lVar10 = 0;
  if (lVar11 != 0) {
    do {
      lVar10 = 0;
      do {
        lVar9 = *(long *)(lVar10 * 8);
        lVar6 = lVar9;
        func_0x00783280();
        if ((int)lVar6 == 1) {
          lVar6 = 0;
          if (*(long *)(lVar3 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar3 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            piVar7 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
              piVar7 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            FUN_0076248c();
            lVar10 = lVar3;
            goto LAB_0076260c;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar11 != lVar10);
      lVar11 = lVar8;
      func_0x00780ea0();
    } while (lVar11 != 0);
    lVar10 = 0;
  }
LAB_0076260c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar3 = lVar10;
  _objc_opt_class();
  func_0x00781ea0();
  lVar8 = *(long *)(lVar3 + 8);
  lVar3 = lVar8;
  func_0x00780ea0();
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        lVar9 = *(long *)(lVar11 * 8);
        lVar6 = lVar9;
        func_0x00783280();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar10 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar10 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
          }
          if (lVar6 == lVar4) {
            lVar3 = lVar9;
            func_0x00788e40();
            if (((int)lVar3 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_00ac6294;
            }
            else {
              piVar7 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar4 + *piVar7) = 0;
            FUN_0076248c();
            lVar11 = lVar10;
            goto LAB_00762778;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar8;
      func_0x00780ea0();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0x20) != 0)) {
      *(undefined8 *)(lVar11 + 0x20) = 0;
      _objc_release(*(undefined8 *)(lVar11 + 0x28));
      *(undefined8 *)(lVar11 + 0x28) = 0;
      _objc_release(*(undefined8 *)(lVar11 + 0x30));
      *(undefined8 *)(lVar11 + 0x30) = 0;
    }
    return;
  }
  return;
}



/* Entry: 0073ed6c; end: 0073ee1f; -[GPBEnumArray replaceValueAtIndex:withValue:] */

void FUN_0073ed6c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSRangeException_00999cb8,
                    &PTR____CFConstantStringClassReference_00a4ab20);
  }
  uVar2 = param_4;
  (**(code **)(param_1 + 0x10))();
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)PTR__NSInvalidArgumentException_00999c90;
    _objc_opt_class();
    func_0x0078ad40(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_00a4ac60);
  }
  *(int *)(*(long *)(param_1 + 0x18) + param_3 * 4) = (int)param_4;
  return;
}



/* Entry: 0073ee20; end: 0073ee27; -[GPBEnumArray count] */

undefined8 FUN_0073ee20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0073ee28; end: 0073ee2f; -[GPBEnumArray validationFunc] */

undefined8 FUN_0073ee28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0073ee30; end: 0073ee7f; -[GPBAutocreatedArray dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ee30(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ac6010));
  puStack_28 = PTR_PTR_00ac46b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073ee80; end: 0073ee8f; -[GPBAutocreatedArray count] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ee80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),PTR_s_count_00abb098);
  return;
}



/* Entry: 0073ee90; end: 0073ee9f; -[GPBAutocreatedArray objectAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ee90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),PTR_s_objectAtIndex__00abd490);
  return;
}



/* Entry: 0073eea0; end: 0073ef1b; -[GPBAutocreatedArray insertObject:atIndex:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073eea0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = (long)_DAT_00ac6010;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar7) = puVar1;
  }
  func_0x00787100();
  lVar7 = *(long *)(param_1 + _DAT_00ac6014);
  if (lVar7 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = lVar7;
  lVar2 = param_1;
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
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 1) {
          lVar4 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            piVar5 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
              piVar5 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
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
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
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
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == lVar2) {
            lVar7 = lVar8;
            func_0x00788e40();
            if (((int)lVar7 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar2 + *piVar5) = 0;
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
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
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



/* Entry: 0073ef1c; end: 0073ef2b; -[GPBAutocreatedArray removeObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ef1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),PTR_s_removeObject__00abda28);
  return;
}



/* Entry: 0073ef2c; end: 0073ef3b; -[GPBAutocreatedArray removeObjectAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ef2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),PTR_s_removeObjectAtIndex__00abda30);
  return;
}



/* Entry: 0073ef3c; end: 0073efaf; -[GPBAutocreatedArray addObject:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ef3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = (long)_DAT_00ac6010;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar6) = puVar1;
  }
  func_0x0077e720();
  lVar6 = *(long *)(param_1 + _DAT_00ac6014);
  if (lVar6 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = lVar6;
  lVar2 = param_1;
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
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 1) {
          lVar4 = 0;
          if (*(long *)(lVar6 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar6 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            piVar5 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
              piVar5 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar6;
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
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = lVar9;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar6 + 8);
  lVar6 = lVar7;
  func_0x00780ea0();
  lVar10 = 0;
  if (lVar6 != 0) {
    do {
      lVar10 = 0;
      do {
        lVar8 = *(long *)(lVar10 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == lVar2) {
            lVar6 = lVar8;
            func_0x00788e40();
            if (((int)lVar6 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar2 + *piVar5) = 0;
            FUN_0076248c();
            lVar10 = lVar9;
            goto LAB_00762778;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = lVar7;
      func_0x00780ea0();
    } while (lVar6 != 0);
    lVar10 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
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



/* Entry: 0073efb0; end: 0073efbf; -[GPBAutocreatedArray removeLastObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073efb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),PTR_s_removeLastObject_00abda18);
  return;
}



/* Entry: 0073efc0; end: 0073efcf; -[GPBAutocreatedArray replaceObjectAtIndex:withObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073efc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),
             PTR_s_replaceObjectAtIndex_withObject__00abda80);
  return;
}



/* Entry: 0073efd0; end: 0073efff; -[GPBAutocreatedArray copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073efd0(long param_1)

{
  if (*(long *)(param_1 + _DAT_00ac6010) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00780e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(long *)(param_1 + _DAT_00ac6010),PTR_s_copyWithZone__00abb090);
    return;
  }
  func_0x0077ec40(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
                    /* WARNING: Could not recover jumptable at 0x007849b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073f000; end: 0073f02f; -[GPBAutocreatedArray mutableCopyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073f000(long param_1)

{
  if (*(long *)(param_1 + _DAT_00ac6010) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00789730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(long *)(param_1 + _DAT_00ac6010),PTR_s_mutableCopyWithZone__00abd2d8);
    return;
  }
  func_0x0077ec40(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
                    /* WARNING: Could not recover jumptable at 0x007849b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0073f030; end: 0073f03f; -[GPBAutocreatedArray countByEnumeratingWithState:objects:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073f030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),
             PTR_s_countByEnumeratingWithState_obje_00abb0a0);
  return;
}



/* Entry: 0073f040; end: 0073f04f; -[GPBAutocreatedArray enumerateObjectsUsingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073f040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),PTR_s_enumerateObjectsUsingBlock__00abb7f8);
  return;
}



/* Entry: 0073f050; end: 0073f05f; -[GPBAutocreatedArray enumerateObjectsWithOptions:usingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073f050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6010),
             PTR_s_enumerateObjectsWithOptions_usin_00abb800);
  return;
}



/* Entry: 0073f060; end: 0073f0e3;  */

ulong FUN_0073f060(long *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      FUN_0073f16c(0xffffffffffffff97,&PTR____CFConstantStringClassReference_00a4ad40);
      return 0;
    }
    func_0x0073f2fc(param_1,1);
    lVar2 = param_1[2];
    param_1[2] = lVar2 + 1;
    bVar1 = *(byte *)(*param_1 + lVar2);
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((char)bVar1 < '\0');
  return uVar3;
}



/* Entry: 0073f0e4; end: 0073f16b;  */

void FUN_0073f0e4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) ||
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = param_1;
    FUN_0073f060();
    uVar1 = (uint)lVar2;
    *(uint *)(param_1 + 0x20) = uVar1;
    if (((uVar1 ^ 0xffffffff) & 6) == 0) {
      FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ace0);
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    if (uVar1 < 8) {
      FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad00);
    }
  }
  return;
}



/* Entry: 0073f16c; end: 0073f25f;  */

void FUN_0073f16c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x007882e0();
  if (param_2 != 0) {
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  }
  func_0x00782e40();
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20();
  func_0x0078ad20();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    FUN_0073f060();
    if ((ulong)puVar2 >> 0x1f == 0) {
      if (puVar2 == (undefined *)0x0) {
        return;
      }
    }
    else {
      FUN_0073f16c(0xffffffffffffff9c,0);
    }
    func_0x0073f2fc(puVar1,puVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_alloc();
    func_0x00784e20();
    *(undefined **)(puVar1 + 0x10) = puVar2 + *(long *)(puVar1 + 0x10);
    if (puVar3 == (undefined *)0x0) {
      FUN_0073f16c(0xffffffffffffff98,0);
    }
    return;
  }
  return;
}



/* Entry: 0073f260; end: 0073f43b;  */

void FUN_0073f260(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  FUN_0073f060();
  if (uVar1 >> 0x1f == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    FUN_0073f16c(0xffffffffffffff9c,0);
  }
  func_0x0073f2fc(param_1,uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_alloc();
  func_0x00784e20();
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar1;
  if (puVar2 == (undefined *)0x0) {
    FUN_0073f16c(0xffffffffffffff98,0);
  }
  return;
}



/* Entry: 0073f43c; end: 0073f463; +[GPBCodedInputStream streamWithData:] */

void FUN_0073f43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x007851c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073f464; end: 0073f4d7; -[GPBCodedInputStream initWithData:] */

undefined1 * FUN_0073f464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac46c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retain();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x0077fde0();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x007882e0();
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0073f4d8; end: 0073f51f; -[GPBCodedInputStream dealloc] */

void FUN_0073f4d8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  puStack_28 = PTR_PTR_00ac46c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073f520; end: 0073f527; -[GPBCodedInputStream readTag] */

void FUN_0073f520(long param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 + 8;
  if ((*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) ||
     (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    FUN_0073f060();
    *(uint *)(param_1 + 0x28) = uVar1;
    if (((uVar1 ^ 0xffffffff) & 6) == 0) {
      FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ace0);
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    if (uVar1 < 8) {
      FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad00);
    }
  }
  return;
}



/* Entry: 0073f528; end: 0073f547; -[GPBCodedInputStream checkLastTagWas:] */

void FUN_0073f528(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x28) == param_3) {
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_00a4ad20;
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x007882e0();
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  }
  func_0x00782e40();
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  puVar2 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20();
  func_0x0078ad20();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    puVar3 = puVar2;
    FUN_0073f060();
    if ((ulong)puVar3 >> 0x1f == 0) {
      if (puVar3 == (undefined *)0x0) {
        return;
      }
    }
    else {
      FUN_0073f16c(0xffffffffffffff9c,0);
    }
    func_0x0073f2fc(puVar2,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_alloc();
    func_0x00784e20();
    *(undefined **)(puVar2 + 0x10) = puVar3 + *(long *)(puVar2 + 0x10);
    if (puVar4 == (undefined *)0x0) {
      FUN_0073f16c(0xffffffffffffff98,0);
    }
    return;
  }
  return;
}



/* Entry: 0073f548; end: 0073f643; -[GPBCodedInputStream skipField:] */

undefined8 FUN_0073f548(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_3 & 7;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      FUN_0073f060(param_1 + 8);
      return 1;
    }
    if (uVar1 != 1) {
      return 0;
    }
    func_0x0073f2fc(param_1 + 8,8);
    lVar3 = *(long *)(param_1 + 0x18) + 8;
  }
  else if (uVar1 == 2) {
    uVar2 = param_1 + 8;
    FUN_0073f060();
    if (uVar2 >> 0x1f != 0) {
      FUN_0073f16c(0xffffffffffffff9c,0);
    }
    func_0x0073f2fc(param_1 + 8,uVar2);
    lVar3 = *(long *)(param_1 + 0x18) + uVar2;
  }
  else {
    if (uVar1 == 3) {
      func_0x00791960(param_1);
      if (*(uint *)(param_1 + 0x28) == (param_3 & 0xfffffff8 | 4)) {
        return 1;
      }
      FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad20);
      return 1;
    }
    if (uVar1 != 5) {
      return 0;
    }
    func_0x0073f2fc(param_1 + 8,4);
    lVar3 = *(long *)(param_1 + 0x18) + 4;
  }
  *(long *)(param_1 + 0x18) = lVar3;
  return 1;
}



/* Entry: 0073f644; end: 0073f67b; -[GPBCodedInputStream skipMessage] */

void FUN_0073f644(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  do {
    lVar1 = param_1 + 8;
    FUN_0073f0e4();
    if ((int)lVar1 == 0) {
      return;
    }
    uVar2 = param_1;
    func_0x00791940(param_1,param_2,lVar1);
  } while ((uVar2 & 1) != 0);
  return;
}



/* Entry: 0073f67c; end: 0073f69f; -[GPBCodedInputStream isAtEnd] */

bool FUN_0073f67c(long param_1)

{
  if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) {
    return true;
  }
  return *(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20);
}



/* Entry: 0073f6a0; end: 0073f6a7; -[GPBCodedInputStream position] */

undefined8 FUN_0073f6a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073f6a8; end: 0073f6ef; -[GPBCodedInputStream pushLimit:] */

ulong FUN_0073f6a8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(long *)(param_1 + 0x18) + param_3;
  if (uVar2 < uVar1) {
    FUN_0073f16c(0xffffffffffffff9a,0);
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
  return uVar2;
}



/* Entry: 0073f6f0; end: 0073f6f7; -[GPBCodedInputStream popLimit:] */

void FUN_0073f6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0073f6f8; end: 0073f733; -[GPBCodedInputStream readDouble] */

undefined8 FUN_0073f6f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x0073f2fc(param_1 + 8,8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return uVar1;
}



/* Entry: 0073f734; end: 0073f76f; -[GPBCodedInputStream readFloat] */

undefined4 FUN_0073f734(long param_1)

{
  undefined4 uVar1;
  
  func_0x0073f2fc(param_1 + 8,4);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  return uVar1;
}



/* Entry: 0073f770; end: 0073f777; -[GPBCodedInputStream readUInt64] */

ulong FUN_0073f770(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      FUN_0073f16c(0xffffffffffffff97,&PTR____CFConstantStringClassReference_00a4ad40);
      return 0;
    }
    func_0x0073f2fc((long *)(param_1 + 8),1);
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2 + 1;
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + lVar2);
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((char)bVar1 < '\0');
  return uVar3;
}



/* Entry: 0073f778; end: 0073f77f; -[GPBCodedInputStream readInt64] */

ulong FUN_0073f778(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      FUN_0073f16c(0xffffffffffffff97,&PTR____CFConstantStringClassReference_00a4ad40);
      return 0;
    }
    func_0x0073f2fc((long *)(param_1 + 8),1);
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2 + 1;
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + lVar2);
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((char)bVar1 < '\0');
  return uVar3;
}



/* Entry: 0073f780; end: 0073f797; -[GPBCodedInputStream readInt32] */

void FUN_0073f780(long param_1)

{
  FUN_0073f060(param_1 + 8);
  return;
}



/* Entry: 0073f798; end: 0073f7d3; -[GPBCodedInputStream readFixed64] */

undefined8 FUN_0073f798(long param_1)

{
  undefined8 uVar1;
  
  func_0x0073f2fc(param_1 + 8,8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return uVar1;
}



/* Entry: 0073f7d4; end: 0073f80f; -[GPBCodedInputStream readFixed32] */

undefined4 FUN_0073f7d4(long param_1)

{
  undefined4 uVar1;
  
  func_0x0073f2fc(param_1 + 8,4);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  return uVar1;
}



/* Entry: 0073f810; end: 0073f82f; -[GPBCodedInputStream readBool] */

bool FUN_0073f810(long param_1)

{
  param_1 = param_1 + 8;
  FUN_0073f060(param_1);
  return param_1 != 0;
}



/* Entry: 0073f830; end: 0073f847; -[GPBCodedInputStream readString] */

void FUN_0073f830(long param_1)

{
  FUN_0073f260(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073f848; end: 0073f8db; -[GPBCodedInputStream readGroup:message:extensionRegistry:] */

void FUN_0073f848(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (99 < uVar1) {
    FUN_0073f16c(0xffffffffffffff96,0);
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar1 + 1;
  func_0x00789260(param_4);
  if (*(uint *)(param_1 + 0x28) != (param_3 << 3 | 4U)) {
    FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad20);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  return;
}



/* Entry: 0073f8dc; end: 0073f967; -[GPBCodedInputStream readUnknownGroup:message:] */

void FUN_0073f8dc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (99 < uVar1) {
    FUN_0073f16c(0xffffffffffffff96,0);
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar1 + 1;
  func_0x00789240(param_4);
  if (*(uint *)(param_1 + 0x28) != (param_3 << 3 | 4U)) {
    FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad20);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  return;
}



/* Entry: 0073f968; end: 0073fa37; -[GPBCodedInputStream readMessage:extensionRegistry:] */

void FUN_0073f968(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (99 < *(ulong *)(param_1 + 0x30)) {
    FUN_0073f16c(0xffffffffffffff96,0);
  }
  uVar2 = param_1 + 8;
  FUN_0073f060();
  if (uVar2 >> 0x1f != 0) {
    FUN_0073f16c(0xffffffffffffff9c,0);
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(long *)(param_1 + 0x18) + uVar2;
  if (uVar1 < uVar2) {
    FUN_0073f16c(0xffffffffffffff9a,0);
  }
  *(ulong *)(param_1 + 0x20) = uVar2;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  func_0x00789260(param_3);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad20);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 0073fa38; end: 0073fb1f; -[GPBCodedInputStream readMapEntry:extensionRegistry:field:parentMessage:] */

void FUN_0073fa38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  if (99 < *(ulong *)(param_1 + 0x30)) {
    FUN_0073f16c(0xffffffffffffff96,0);
  }
  uVar2 = param_1 + 8;
  FUN_0073f060();
  if (uVar2 >> 0x1f != 0) {
    FUN_0073f16c(0xffffffffffffff9c,0);
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(long *)(param_1 + 0x18) + uVar2;
  if (uVar1 < uVar2) {
    FUN_0073f16c(0xffffffffffffff9a,0);
  }
  *(ulong *)(param_1 + 0x20) = uVar2;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  FUN_00745598(param_3,param_1,param_4,param_5,param_6);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0073f16c(0xffffffffffffff99,&PTR____CFConstantStringClassReference_00a4ad20);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 0073fb20; end: 0073fb37; -[GPBCodedInputStream readBytes] */

void FUN_0073fb20(long param_1)

{
  func_0x0073f358(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073fb38; end: 0073fb4f; -[GPBCodedInputStream readUInt32] */

void FUN_0073fb38(long param_1)

{
  FUN_0073f060(param_1 + 8);
  return;
}



/* Entry: 0073fb50; end: 0073fb67; -[GPBCodedInputStream readEnum] */

void FUN_0073fb50(long param_1)

{
  FUN_0073f060(param_1 + 8);
  return;
}



/* Entry: 0073fb68; end: 0073fba3; -[GPBCodedInputStream readSFixed32] */

undefined4 FUN_0073fb68(long param_1)

{
  undefined4 uVar1;
  
  func_0x0073f2fc(param_1 + 8,4);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  return uVar1;
}



/* Entry: 0073fba4; end: 0073fbdf; -[GPBCodedInputStream readSFixed64] */

undefined8 FUN_0073fba4(long param_1)

{
  undefined8 uVar1;
  
  func_0x0073f2fc(param_1 + 8,8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return uVar1;
}



/* Entry: 0073fbe0; end: 0073fbff; -[GPBCodedInputStream readSInt32] */

uint FUN_0073fbe0(long param_1)

{
  param_1 = param_1 + 8;
  FUN_0073f060(param_1);
  return -((uint)param_1 & 1) ^ (uint)param_1 >> 1;
}



/* Entry: 0073fc00; end: 0073fc1f; -[GPBCodedInputStream readSInt64] */

ulong FUN_0073fc00(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 8;
  FUN_0073f060(uVar1);
  return -(uVar1 & 1) ^ uVar1 >> 1;
}



/* Entry: 0073fc20; end: 0073fc87; -[GPBCodedOutputStream dealloc] */

void FUN_0073fc20(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00783860();
  func_0x00780360(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_00ac46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}


