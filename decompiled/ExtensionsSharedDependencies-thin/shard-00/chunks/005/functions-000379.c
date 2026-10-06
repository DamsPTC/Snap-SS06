/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0075ff5c; end: 0075ff83; -[GPBBoolDoubleDictionary setDouble:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075ff5c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  *(ulong *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x10) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined1 *)(param_1 + (param_3 & 0xffffffff) + 0x20) = 1;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar2 + 8);
  lVar2 = lVar6;
  func_0x00780ea0();
  lVar8 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        lVar7 = *(long *)(lVar8 * 8);
        lVar4 = lVar7;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar7;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar8 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar8 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
    *(undefined8 *)(lVar8 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar8 + 0x28));
    *(undefined8 *)(lVar8 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar8 + 0x30));
    *(undefined8 *)(lVar8 + 0x30) = 0;
  }
  return;
}



/* Entry: 0075ff84; end: 0075ff8f; -[GPBBoolDoubleDictionary removeDoubleForKey:] */

void FUN_0075ff84(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 0075ff90; end: 0075ff97; -[GPBBoolDoubleDictionary removeAll] */

void FUN_0075ff90(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 0075ff98; end: 0075ffa7; -[GPBBoolObjectDictionary init] */

void FUN_0075ff98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithObjects_forKeys_count__00abc490,0,0,0)
  ;
  return;
}



/* Entry: 0075ffa8; end: 00760073; -[GPBBoolObjectDictionary initWithObjects:forKeys:count:] */

undefined1 *
FUN_0075ffa8(undefined8 param_1,undefined8 param_2,long *param_3,byte *param_4,undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4898;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      if (*param_3 == 0) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      }
      bVar1 = *param_4;
      _objc_release(*(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10));
      lVar4 = *param_3;
      _objc_retain();
      *(long *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = lVar4;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return (undefined1 *)puVar3;
}



/* Entry: 00760074; end: 007600c7; -[GPBBoolObjectDictionary initWithDictionary:] */

long FUN_00760074(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00785e20(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain();
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return param_1;
}



/* Entry: 007600c8; end: 007600d7; -[GPBBoolObjectDictionary initWithCapacity:] */

void FUN_007600c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithObjects_forKeys_count__00abc490,0,0,0)
  ;
  return;
}



/* Entry: 007600d8; end: 00760127; -[GPBBoolObjectDictionary dealloc] */

void FUN_007600d8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_00ac4898;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00760128; end: 00760153; -[GPBBoolObjectDictionary copyWithZone:] */

void FUN_00760128(void)

{
  func_0x0077ec40(PTR_PTR_00ac3910);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00760154; end: 0076020f; -[GPBBoolObjectDictionary isEqual:] */

long FUN_00760154(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == param_3) {
    return 1;
  }
  puVar1 = PTR_PTR_00ac3910;
  _objc_opt_class(PTR_PTR_00ac3910);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (lVar4 = *(long *)(param_1 + 0x10), (lVar4 != 0) == (*(long *)(param_3 + 0x10) == 0))) ||
     (lVar3 = *(long *)(param_1 + 0x18), (lVar3 != 0) == (*(long *)(param_3 + 0x18) == 0))) {
    return 0;
  }
  if (lVar4 != 0) {
    func_0x007877e0();
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if ((lVar3 != 0) && (func_0x007877e0(), (int)lVar3 == 0)) {
    return lVar3;
  }
  return 1;
}



/* Entry: 00760210; end: 00760227; -[GPBBoolObjectDictionary hash] */

char FUN_00760210(long param_1)

{
  char cVar1;
  
  cVar1 = *(long *)(param_1 + 0x18) != 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



/* Entry: 00760228; end: 007602bb; -[GPBBoolObjectDictionary description] */

undefined * FUN_00760228(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b160);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b180);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 007602bc; end: 007602d3; -[GPBBoolObjectDictionary count] */

char FUN_007602bc(long param_1)

{
  char cVar1;
  
  cVar1 = *(long *)(param_1 + 0x18) != 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



/* Entry: 007602d4; end: 007602df; -[GPBBoolObjectDictionary objectForKey:] */

undefined8 FUN_007602d4(long param_1,undefined8 param_2,uint param_3)

{
  return *(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x10);
}



/* Entry: 007602e0; end: 00760317; -[GPBBoolObjectDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_007602e0(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  undefined8 uVar1;
  
  param_1 = param_1 + (ulong)*param_4 * 8;
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *param_3;
  _objc_retain();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 00760318; end: 00760377; -[GPBBoolObjectDictionary enumerateForTextFormat:] */

void FUN_00760318(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00760368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460);
    return;
  }
  return;
}



/* Entry: 00760378; end: 007603e3; -[GPBBoolObjectDictionary enumerateKeysAndObjectsUsingBlock:] */

void FUN_00760378(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(long *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(long *)(param_1 + 0x18),&bStack_21);
  }
  return;
}



/* Entry: 007603e4; end: 00760423; -[GPBBoolObjectDictionary isInitialized] */

void FUN_007603e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (((lVar1 == 0) || (func_0x00787980(), (int)lVar1 != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    func_0x00787980();
  }
  return;
}



/* Entry: 00760424; end: 0076049b; -[GPBBoolObjectDictionary deepCopyWithZone:] */

undefined * FUN_00760424(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_00ac3910;
  _objc_alloc_init();
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar3 = *(long *)(param_1 + 0x10 + lVar5 * 8);
    if (lVar3 != 0) {
      func_0x00780e60(lVar3,param_2,param_3);
      *(long *)(puVar2 + lVar5 * 8 + 0x10) = lVar3;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar4);
  return puVar2;
}



/* Entry: 0076049c; end: 0076059b; -[GPBBoolObjectDictionary computeSerializedSizeAsField:] */

long FUN_0076049c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = 0;
  lVar9 = 0;
  lVar10 = 0;
  lVar11 = *(long *)(param_3 + 8);
  uVar3 = *(undefined1 *)(lVar11 + 0x1e);
  bVar5 = true;
  do {
    bVar8 = bVar5;
    lVar7 = *(long *)(param_1 + 0x10 + lVar7 * 8);
    if (lVar7 != 0) {
      lVar9 = lVar9 + 1;
      FUN_007453bc(lVar7,uVar3);
      uVar1 = lVar7 + 2;
      lVar7 = 4;
      if ((uVar1 >> 0x1c & 0xf) != 0) {
        lVar7 = 5;
      }
      uVar6 = (uint)uVar1;
      lVar2 = 3;
      if (0x1fffff < uVar6) {
        lVar2 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar6) {
        lVar7 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar6) {
        lVar2 = lVar7;
      }
      lVar10 = uVar1 + lVar10 + lVar2;
    }
    lVar7 = 1;
    bVar5 = false;
  } while (bVar8);
  uVar6 = *(uint *)(lVar11 + 0x10);
  uVar4 = uVar6 << 3;
  if (uVar4 < 0x80) {
    lVar11 = 1;
  }
  else if (uVar4 < 0x4000) {
    lVar11 = 2;
  }
  else {
    lVar7 = 4;
    if ((uVar6 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar11 = 3;
    if (0x1fffff < uVar4) {
      lVar11 = lVar7;
    }
  }
  return lVar10 + lVar11 * lVar9;
}



/* Entry: 0076059c; end: 00760653; -[GPBBoolObjectDictionary writeToCodedOutputStream:asField:] */

void FUN_0076059c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  param_1 = param_1 + 0x10;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(long *)(param_1 + lVar4 * 8) != 0) {
      func_0x00794020(param_3);
      FUN_007453bc(*(undefined8 *)(param_1 + lVar4 * 8),uVar1);
      func_0x00794020(param_3);
      func_0x00793c60(param_3);
      FUN_00745558(param_3,*(undefined8 *)(param_1 + lVar4 * 8),uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 00760654; end: 007606df; -[GPBBoolObjectDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00760654(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_3 != 0) {
    lVar9 = 0;
    bVar1 = true;
    do {
      bVar4 = bVar1;
      if (*(long *)(param_3 + 0x10 + lVar9 * 8) != 0) {
        _objc_release(*(undefined8 *)(param_1 + 0x10 + lVar9 * 8));
        uVar2 = *(undefined8 *)(param_3 + 0x10 + lVar9 * 8);
        _objc_retain();
        *(undefined8 *)(param_1 + 0x10 + lVar9 * 8) = uVar2;
      }
      lVar9 = 1;
      bVar1 = false;
    } while (bVar4);
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar3 = lVar9;
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
            lVar10 = *(long *)(lVar11 * 8);
            lVar6 = lVar10;
            func_0x00783280();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar9 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar9 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar3 = lVar10;
                func_0x00788e40();
                if (((int)lVar3 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar7 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                FUN_0076248c();
                lVar11 = lVar9;
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
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
        return;
      }
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
  }
  return;
}



/* Entry: 007606e0; end: 00760763; -[GPBBoolObjectDictionary setObject:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007606e0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af00);
  }
  lVar1 = param_1 + (param_4 & 0xffffffff) * 8;
  _objc_release(*(undefined8 *)(lVar1 + 0x10));
  _objc_retain();
  *(long *)(lVar1 + 0x10) = param_3;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar2 + 8);
  lVar2 = lVar6;
  func_0x00780ea0();
  lVar8 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        lVar7 = *(long *)(lVar8 * 8);
        lVar4 = lVar7;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar7;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar8 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar8 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
    *(undefined8 *)(lVar8 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar8 + 0x28));
    *(undefined8 *)(lVar8 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar8 + 0x30));
    *(undefined8 *)(lVar8 + 0x30) = 0;
  }
  return;
}



/* Entry: 00760764; end: 0076078b; -[GPBBoolObjectDictionary removeObjectForKey:] */

void FUN_00760764(long param_1,undefined8 param_2,uint param_3)

{
  param_1 = param_1 + (ulong)param_3 * 8;
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 0076078c; end: 007607bf; -[GPBBoolObjectDictionary removeAll] */

void FUN_0076078c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 007607c0; end: 007607d3; -[GPBBoolEnumDictionary init] */

void FUN_007607c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,0,0,0,0);
  return;
}



/* Entry: 007607d4; end: 007607e3; -[GPBBoolEnumDictionary initWithValidationFunction:] */

void FUN_007607d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 007607e4; end: 00760877; -[GPBBoolEnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

void FUN_007607e4(undefined8 param_1,undefined8 param_2,code *param_3,undefined4 *param_4,
                 byte *param_5,long param_6)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac48a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar3 != (undefined8 *)0x0) {
    pcVar1 = FUN_007496d4;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(code **)((long)puVar3 + 0x10) = pcVar1;
    for (; param_6 != 0; param_6 = param_6 + -1) {
      bVar2 = *param_5;
      *(undefined4 *)((long)puVar3 + (ulong)bVar2 * 4 + 0x18) = *param_4;
      *(undefined1 *)((long)puVar3 + (ulong)bVar2 + 0x20) = 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
    }
  }
  return;
}



/* Entry: 00760878; end: 00760903; -[GPBBoolEnumDictionary initWithDictionary:] */

void FUN_00760878(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = param_3;
  func_0x00793560(param_3);
  func_0x00786f60(param_1,param_2,lVar2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined4 *)(param_1 + 0x18 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x18 + lVar2 * 4);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 00760904; end: 00760913; -[GPBBoolEnumDictionary initWithValidationFunction:capacity:] */

void FUN_00760904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 00760914; end: 0076093f; -[GPBBoolEnumDictionary copyWithZone:] */

void FUN_00760914(void)

{
  func_0x0077ec40(PTR_PTR_00ac3918);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00760940; end: 007609df; -[GPBBoolEnumDictionary isEqual:] */

undefined8 FUN_00760940(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac3918;
    _objc_opt_class(PTR_PTR_00ac3918);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(int *)(param_1 + 0x18) != *(int *)(param_3 + 0x18))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(int *)(param_1 + 0x1c) != *(int *)(param_3 + 0x1c))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 007609e0; end: 007609ef; -[GPBBoolEnumDictionary hash] */

long FUN_007609e0(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 007609f0; end: 00760a93; -[GPBBoolEnumDictionary description] */

undefined * FUN_007609f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b020);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b040);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 00760a94; end: 00760aa3; -[GPBBoolEnumDictionary count] */

long FUN_00760a94(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 00760aa4; end: 00760b07; -[GPBBoolEnumDictionary getEnum:forKey:] */

char FUN_00760aa4(long param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + (ulong)param_4 + 0x20);
  if ((param_3 != (int *)0x0) && (cVar2 != '\0')) {
    iVar1 = *(int *)(param_1 + (ulong)param_4 * 4 + 0x18);
    iVar3 = iVar1;
    (**(code **)(param_1 + 0x10))();
    if (iVar3 == 0) {
      iVar1 = -0x4524111;
    }
    *param_3 = iVar1;
  }
  return cVar2;
}



/* Entry: 00760b08; end: 00760b2f; -[GPBBoolEnumDictionary getRawValue:forKey:] */

void FUN_00760b08(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x18);
  }
  return;
}



/* Entry: 00760b30; end: 00760bab; -[GPBBoolEnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_00760b30(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined4 *)(param_1 + 0x18),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined4 *)(param_1 + 0x1c),&bStack_21);
  }
  return;
}



/* Entry: 00760bac; end: 00760c63; -[GPBBoolEnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_00760bac(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  pcVar3 = *(code **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = iVar1;
    (*pcVar3)();
    if (iVar2 == 0) {
      iVar1 = -0x4524111;
    }
    (**(code **)(param_3 + 0x10))(param_3,0,iVar1,&bStack_31);
    if ((bStack_31 & 1) != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = iVar1;
    (*pcVar3)();
    if (iVar2 == 0) {
      iVar1 = -0x4524111;
    }
    (**(code **)(param_3 + 0x10))(param_3,1,iVar1,&bStack_31);
  }
  return;
}



/* Entry: 00760c64; end: 00760d23; -[GPBBoolEnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined * FUN_00760c64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  uVar1 = 7;
  if ((param_3 >> 0x1c & 0xf) != 0) {
    uVar1 = 8;
  }
  uVar5 = (uint)param_3;
  uVar2 = 6;
  if (0x1fffff < uVar5) {
    uVar2 = uVar1;
  }
  uVar1 = 5;
  if (0x3fff < uVar5) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (0x7f < uVar5) {
    uVar2 = uVar1;
  }
  uVar1 = 0xd;
  if ((param_3 & 0x80000000) == 0) {
    uVar1 = uVar2;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,uVar1);
  puVar4 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x007851c0();
  func_0x00793c60();
  func_0x00793dc0(puVar4,param_2,2,param_3);
  func_0x00783860(puVar4);
  _objc_release(puVar4);
  return puVar3;
}



/* Entry: 00760d24; end: 00760df3; -[GPBBoolEnumDictionary computeSerializedSizeAsField:] */

long FUN_00760d24(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar10 = *(long *)(param_3 + 8);
  uVar2 = *(undefined1 *)(lVar10 + 0x1e);
  bVar4 = true;
  do {
    bVar7 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar6) == '\x01') {
      lVar8 = lVar8 + 1;
      uVar5 = (ulong)*(uint *)(param_1 + 0x18 + lVar6 * 4);
      FUN_0074670c(uVar5,2,uVar2);
      lVar9 = lVar9 + uVar5 + 3;
    }
    lVar6 = 1;
    bVar4 = false;
  } while (bVar7);
  uVar1 = *(uint *)(lVar10 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar10 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar10 = 2;
  }
  else {
    lVar6 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar6 = 5;
    }
    lVar10 = 3;
    if (0x1fffff < uVar3) {
      lVar10 = lVar6;
    }
  }
  return lVar9 + lVar10 * lVar8;
}



/* Entry: 00760df4; end: 00760ebb; -[GPBBoolEnumDictionary writeToCodedOutputStream:asField:] */

void FUN_00760df4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x20 + lVar4) == '\x01') {
      func_0x00794020(param_3);
      FUN_0074670c(*(undefined4 *)(param_1 + 0x18 + lVar4 * 4),2,uVar1);
      func_0x00794020(param_3);
      func_0x00793c60(param_3);
      FUN_007468ec(param_3,*(undefined4 *)(param_1 + 0x18 + lVar4 * 4),2,uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 00760ebc; end: 00760f53; -[GPBBoolEnumDictionary enumerateForTextFormat:] */

void FUN_00760ebc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*(undefined4 *)(param_1 + 0x18));
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x00760f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 00760f54; end: 00760f73; -[GPBBoolEnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00760f54(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x18) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 00760f74; end: 00760fcf; -[GPBBoolEnumDictionary addRawEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00760f74(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 != 0) {
    lVar6 = 0;
    bVar1 = true;
    do {
      bVar7 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar6) == '\x01') {
        *(undefined1 *)(param_1 + 0x20 + lVar6) = 1;
        *(undefined4 *)(param_1 + 0x18 + lVar6 * 4) = *(undefined4 *)(param_3 + 0x18 + lVar6 * 4);
      }
      lVar6 = 1;
      bVar1 = false;
    } while (bVar7);
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 != 0) {
      lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar6;
      _objc_opt_class();
      func_0x00781ea0();
      lVar8 = *(long *)(lVar2 + 8);
      lVar2 = lVar8;
      func_0x00780ea0();
      lVar10 = 0;
      if (lVar2 != 0) {
        do {
          lVar10 = 0;
          do {
            lVar9 = *(long *)(lVar10 * 8);
            lVar4 = lVar9;
            func_0x00783280();
            if ((int)lVar4 == 2) {
              lVar4 = 0;
              if (*(long *)(lVar6 + 0x40) != 0) {
                lVar4 = *(long *)(*(long *)(lVar6 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar4 == param_1) {
                lVar2 = lVar9;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar5 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar5 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(param_1 + *piVar5) = 0;
                FUN_0076248c();
                lVar10 = lVar6;
                goto LAB_00762778;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar2 != lVar10);
          lVar2 = lVar8;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar10 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
        return;
      }
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
  }
  return;
}



/* Entry: 00760fd0; end: 0076106b; -[GPBBoolEnumDictionary setEnum:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00760fd0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

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
  
  uVar1 = param_3;
  (**(code **)(param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  *(int *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x18) = (int)param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x20) = 1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar3 = lVar2;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar3 + 8);
  lVar3 = lVar7;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar5 = lVar8;
        func_0x00783280();
        if ((int)lVar5 == 2) {
          lVar5 = 0;
          if (*(long *)(lVar2 + 0x40) != 0) {
            lVar5 = *(long *)(*(long *)(lVar2 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar5 == param_1) {
            lVar3 = lVar8;
            func_0x00788e40();
            if (((int)lVar3 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar6 = (int *)&DAT_00ac6294;
            }
            else {
              piVar6 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar6) = 0;
            FUN_0076248c();
            lVar9 = lVar2;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar7;
      func_0x00780ea0();
    } while (lVar3 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 0076106c; end: 00761093; -[GPBBoolEnumDictionary setRawValue:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0076106c(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x18) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x20) = 1;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar2 + 8);
  lVar2 = lVar6;
  func_0x00780ea0();
  lVar8 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        lVar7 = *(long *)(lVar8 * 8);
        lVar4 = lVar7;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar7;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar8 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar8 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
    *(undefined8 *)(lVar8 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar8 + 0x28));
    *(undefined8 *)(lVar8 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar8 + 0x30));
    *(undefined8 *)(lVar8 + 0x30) = 0;
  }
  return;
}



/* Entry: 00761094; end: 0076109f; -[GPBBoolEnumDictionary removeEnumForKey:] */

void FUN_00761094(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 007610a0; end: 007610a7; -[GPBBoolEnumDictionary removeAll] */

void FUN_007610a0(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 007610a8; end: 007610af; -[GPBBoolEnumDictionary validationFunc] */

undefined8 FUN_007610a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 007610b0; end: 007610ff; -[GPBAutocreatedDictionary dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007610b0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ac6290));
  puStack_28 = PTR_PTR_00ac48a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00761100; end: 00761183; -[GPBAutocreatedDictionary initWithObjects:forKeys:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00761100(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac48a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00785e20();
    *(undefined **)((long)puVar1 + (long)_DAT_00ac6290) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00761184; end: 00761193; -[GPBAutocreatedDictionary count] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6290),PTR_s_count_00abb098);
  return;
}



/* Entry: 00761194; end: 007611a3; -[GPBAutocreatedDictionary objectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6290),PTR_s_objectForKey__00abd4b8);
  return;
}



/* Entry: 007611a4; end: 007611df; -[GPBAutocreatedDictionary keyEnumerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007611a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac6290;
  if (*(long *)(param_1 + lVar2) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar2) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00788090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007611e0; end: 0076125b; -[GPBAutocreatedDictionary setObject:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007611e0(long param_1)

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
  
  lVar7 = (long)_DAT_00ac6290;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar7) = puVar1;
  }
  func_0x0078f4a0();
  lVar7 = *(long *)(param_1 + _DAT_00ac6294);
  if (lVar7 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar7;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar2 + 8);
  lVar2 = lVar6;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar7;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 0076125c; end: 0076126b; -[GPBAutocreatedDictionary removeObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076125c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6290),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0076126c; end: 0076129b; -[GPBAutocreatedDictionary copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076126c(long param_1)

{
  if (*(long *)(param_1 + _DAT_00ac6290) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00780e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(long *)(param_1 + _DAT_00ac6290),PTR_s_copyWithZone__00abb090);
    return;
  }
  func_0x0077ec40(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
                    /* WARNING: Could not recover jumptable at 0x007849b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0076129c; end: 007612cb; -[GPBAutocreatedDictionary mutableCopyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076129c(long param_1)

{
  if (*(long *)(param_1 + _DAT_00ac6290) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00789730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(long *)(param_1 + _DAT_00ac6290),PTR_s_mutableCopyWithZone__00abd2d8);
    return;
  }
  func_0x0077ec40(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
                    /* WARNING: Could not recover jumptable at 0x007849b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007612cc; end: 007612db; -[GPBAutocreatedDictionary objectForKeyedSubscript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007612cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6290),PTR_s_objectForKeyedSubscript__00abd4d0);
  return;
}



/* Entry: 007612dc; end: 00761357; -[GPBAutocreatedDictionary setObject:forKeyedSubscript:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007612dc(long param_1)

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
  
  lVar7 = (long)_DAT_00ac6290;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar7) = puVar1;
  }
  func_0x0078f4e0();
  lVar7 = *(long *)(param_1 + _DAT_00ac6294);
  if (lVar7 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar7;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar2 + 8);
  lVar2 = lVar6;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar7 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar7 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar7;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 00761358; end: 00761367; -[GPBAutocreatedDictionary enumerateKeysAndObjectsUsingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6290),
             PTR_s_enumerateKeysAndObjectsUsingBloc_00abb7d0);
  return;
}



/* Entry: 00761368; end: 00761377; -[GPBAutocreatedDictionary enumerateKeysAndObjectsWithOptions:usingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac6290),
             PTR_s_enumerateKeysAndObjectsWithOptio_00abb7d8);
  return;
}



/* Entry: 00761378; end: 007617bb;  */

void FUN_00761378(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_1e0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = param_2;
  if ((*(byte *)(lVar7 + 0x2d) & 1) == 0) {
    lVar3 = param_2;
    puVar5 = param_3;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) goto code_r0x007617bc;
  }
  else {
    if ((*(byte *)(lVar7 + 0x2d) >> 1 & 1) == 0) {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      puVar5 = &uStack_160;
      lVar3 = param_2;
      func_0x00780ea0(param_2,param_2,puVar5,auStack_d8,0x10);
      if (lVar3 != 0) {
        lVar8 = *plStack_150;
        do {
          lVar9 = 0;
          do {
            if (*plStack_150 != lVar8) {
              _objc_enumerationMutation(param_2);
            }
            lVar4 = lVar7;
            FUN_007617bc(*(undefined8 *)(lStack_158 + lVar9 * 8),lVar7,param_3);
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          puVar5 = &uStack_160;
          lVar3 = param_2;
          func_0x00780ea0();
        } while (lVar3 != 0);
      }
    }
    else {
      func_0x00794380(param_3,param_2,*(undefined4 *)(lVar7 + 0x28),2);
      if (*(byte *)(lVar7 + 0x2c) < 7) {
        func_0x00780e80(param_2);
      }
      else {
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        lStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        plStack_190 = (long *)0x0;
        lVar3 = param_2;
        func_0x00780ea0();
        if (lVar3 != 0) {
          lVar8 = *plStack_190;
          do {
            lVar9 = 0;
            do {
              if (*plStack_190 != lVar8) {
                _objc_enumerationMutation(param_2);
              }
              lVar4 = *(long *)(lStack_198 + lVar9 * 8);
              FUN_00761fe8(*(undefined1 *)(lVar7 + 0x2c));
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = param_2;
            func_0x00780ea0();
          } while (lVar3 != 0);
        }
      }
      func_0x00794180(param_3);
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      plStack_1d0 = (long *)0x0;
      lVar3 = param_2;
      func_0x00780ea0();
      if (lVar3 != 0) {
        lVar8 = *plStack_1d0;
        do {
          lVar9 = 0;
          do {
            if (*plStack_1d0 != lVar8) {
              _objc_enumerationMutation(param_2);
            }
            if (*(byte *)(lVar7 + 0x2c) < 0x12) {
              uVar6 = *(undefined8 *)(lStack_1d8 + lVar9 * 8);
              switch(*(byte *)(lVar7 + 0x2c)) {
              case 0:
                func_0x0077fbc0(uVar6);
                func_0x00793ca0(param_3);
                break;
              case 1:
                func_0x007930e0(uVar6);
                func_0x00793ea0(param_3);
                break;
              case 2:
                func_0x007871a0(uVar6);
                func_0x007941e0(param_3);
                break;
              case 3:
                func_0x00783840(uVar6);
                func_0x00793f60(param_3);
                break;
              case 4:
                func_0x00793120(uVar6);
                func_0x00793f00(param_3);
                break;
              case 5:
                func_0x00788b40(uVar6);
                func_0x00794240(param_3);
                break;
              case 6:
                func_0x00782440(uVar6);
                func_0x00793da0(param_3);
                break;
              case 7:
                func_0x007871a0(uVar6);
                func_0x00794020(param_3);
                break;
              case 8:
                func_0x00788b40(uVar6);
                func_0x00794080(param_3);
                break;
              case 9:
                func_0x007871a0(uVar6);
                func_0x007942a0(param_3);
                break;
              case 10:
                func_0x00788b40(uVar6);
                func_0x00794300(param_3);
                break;
              case 0xb:
                func_0x007930e0(uVar6);
                func_0x00794480(param_3);
                break;
              case 0xc:
                func_0x00793120(uVar6);
                func_0x007944e0(param_3);
                break;
              case 0xd:
                func_0x00793d00(param_3);
                break;
              case 0xe:
                func_0x00794360(param_3);
                break;
              case 0xf:
                func_0x007940e0(param_3);
                break;
              case 0x10:
                func_0x00793fc0(param_3);
                break;
              case 0x11:
                func_0x007871a0(uVar6);
                func_0x00793e00(param_3);
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = param_2;
          puVar5 = &uStack_1e0;
          func_0x00780ea0();
        } while (lVar3 != 0);
      }
    }
    param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
  }
  unaff_x30 = FUN_007617bc;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&uStack_1e0;
  lVar3 = param_1;
  lVar7 = lVar4;
  unaff_x19 = param_3;
  unaff_x20 = param_2;
  unaff_x29 = puVar1;
code_r0x007617bc:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  switch(*(undefined1 *)(lVar7 + 0x2c)) {
  case 0:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x0077fbc0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeBool_value__00abfc28,uVar2,lVar3);
    return;
  case 1:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x007930e0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeFixed32_value__00abfca8,uVar2,lVar3);
    return;
  case 2:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x007871a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x007941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeSFixed32_value__00abfd78,uVar2,lVar3);
    return;
  case 3:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00783840(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeFloat_value__00abfcd8,uVar2);
    return;
  case 4:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00793120(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeFixed64_value__00abfcc0,uVar2,lVar3);
    return;
  case 5:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00788b40(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00794210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeSFixed64_value__00abfd90,uVar2,lVar3);
    return;
  case 6:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00782440(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeDouble_value__00abfc68,uVar2);
    return;
  case 7:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x007871a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeInt32_value__00abfd08,uVar2,lVar3);
    return;
  case 8:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00788b40(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00794050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeInt64_value__00abfd20,uVar2,lVar3);
    return;
  case 9:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x007871a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00794270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeSInt32_value__00abfda8,uVar2,lVar3);
    return;
  case 10:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00788b40(lVar3);
                    /* WARNING: Could not recover jumptable at 0x007942d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeSInt64_value__00abfdc0,uVar2,lVar3);
    return;
  case 0xb:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x007930e0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00794450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeUInt32_value__00abfe20,uVar2,lVar3);
    return;
  case 0xc:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00793120(lVar3);
                    /* WARNING: Could not recover jumptable at 0x007944b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeUInt64_value__00abfe38,uVar2,lVar3);
    return;
  case 0xd:
                    /* WARNING: Could not recover jumptable at 0x00793cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (puVar5,PTR_s_writeBytes_value__00abfc40,*(undefined4 *)(lVar7 + 0x28));
    return;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x00794330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (puVar5,PTR_s_writeString_value__00abfdd8,*(undefined4 *)(lVar7 + 0x28));
    return;
  case 0xf:
    break;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00793f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (puVar5,PTR_s_writeGroup_value__00abfcf0,*(undefined4 *)(lVar7 + 0x28));
    return;
  case 0x11:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x007871a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00793dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeEnum_value__00abfc80,uVar2,lVar3);
    return;
  default:
    return;
  }
  if ((*(byte *)(lVar7 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00794110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (puVar5,PTR_s_writeMessageSetExtension_value__00abfd50,*(undefined4 *)(lVar7 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_writeMessage_value__00abfd38);
  return;
}



/* Entry: 007617bc; end: 00761a53;  */

void FUN_007617bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_2 + 0x2c)) {
  case 0:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x0077fbc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeBool_value__00abfc28,uVar1,param_1);
    return;
  case 1:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x007930e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeFixed32_value__00abfca8,uVar1,param_1);
    return;
  case 2:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x007871a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x007941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeSFixed32_value__00abfd78,uVar1,param_1)
    ;
    return;
  case 3:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00783840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeFloat_value__00abfcd8,uVar1);
    return;
  case 4:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00793120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeFixed64_value__00abfcc0,uVar1,param_1);
    return;
  case 5:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00788b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00794210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeSFixed64_value__00abfd90,uVar1,param_1)
    ;
    return;
  case 6:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00782440(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeDouble_value__00abfc68,uVar1);
    return;
  case 7:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x007871a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeInt32_value__00abfd08,uVar1,param_1);
    return;
  case 8:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00788b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00794050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeInt64_value__00abfd20,uVar1,param_1);
    return;
  case 9:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x007871a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00794270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeSInt32_value__00abfda8,uVar1,param_1);
    return;
  case 10:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00788b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x007942d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeSInt64_value__00abfdc0,uVar1,param_1);
    return;
  case 0xb:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x007930e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00794450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeUInt32_value__00abfe20,uVar1,param_1);
    return;
  case 0xc:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00793120(param_1);
                    /* WARNING: Could not recover jumptable at 0x007944b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeUInt64_value__00abfe38,uVar1,param_1);
    return;
  case 0xd:
                    /* WARNING: Could not recover jumptable at 0x00793cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_writeBytes_value__00abfc40,*(undefined4 *)(param_2 + 0x28));
    return;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x00794330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_writeString_value__00abfdd8,*(undefined4 *)(param_2 + 0x28));
    return;
  case 0xf:
    break;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00793f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_writeGroup_value__00abfcf0,*(undefined4 *)(param_2 + 0x28));
    return;
  case 0x11:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x007871a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00793dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeEnum_value__00abfc80,uVar1,param_1);
    return;
  default:
    return;
  }
  if ((*(byte *)(param_2 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00794110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_writeMessageSetExtension_value__00abfd50,
               *(undefined4 *)(param_2 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeMessage_value__00abfd38);
  return;
}



/* Entry: 00761a54; end: 00761cdf;  */

ulong FUN_00761a54(ulong param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong unaff_x19;
  ulong uVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *unaff_x29;
  code *unaff_x30;
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
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar7 = param_2;
  if ((*(byte *)(uVar9 + 0x2d) & 1) == 0) {
    uVar10 = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)PTR____stack_chk_guard_00999f88)
    goto LAB_00761cdc;
  }
  else {
    if ((*(byte *)(uVar9 + 0x2d) >> 1 & 1) == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uVar11 = param_2;
      func_0x00780ea0(param_2,param_2,&uStack_120,auStack_d8,0x10);
      if (uVar11 == 0) {
        uVar10 = 0;
        param_1 = 0;
      }
      else {
        uVar10 = 0;
        lVar12 = *plStack_110;
        do {
          uVar13 = 0;
          do {
            if (*plStack_110 != lVar12) {
              _objc_enumerationMutation(param_2);
            }
            uVar7 = *(ulong *)(lStack_118 + uVar13 * 8);
            uVar6 = uVar9;
            FUN_00761ce0(uVar9);
            uVar10 = uVar6 + uVar10;
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          uVar11 = param_2;
          func_0x00780ea0();
        } while (uVar11 != 0);
        param_1 = 0;
      }
    }
    else {
      if ((ulong)*(byte *)(uVar9 + 0x2c) < 7) {
        lVar12 = *(long *)(&UNK_0083d2f0 + (ulong)*(byte *)(uVar9 + 0x2c) * 8);
        param_1 = param_2;
        func_0x00780e80();
        uVar11 = param_1 * lVar12;
      }
      else {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        lStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        plStack_110 = (long *)0x0;
        uVar10 = param_2;
        func_0x00780ea0(param_2,param_2,&uStack_120,auStack_d8,0x10);
        if (uVar10 == 0) {
          uVar11 = 0;
          param_1 = 0;
        }
        else {
          uVar11 = 0;
          lVar12 = *plStack_110;
          do {
            uVar13 = 0;
            do {
              if (*plStack_110 != lVar12) {
                _objc_enumerationMutation(param_2);
              }
              uVar7 = *(ulong *)(lStack_118 + uVar13 * 8);
              uVar6 = (ulong)*(byte *)(uVar9 + 0x2c);
              FUN_00761fe8();
              uVar11 = uVar6 + uVar11;
              uVar13 = uVar13 + 1;
            } while (uVar10 != uVar13);
            uVar10 = param_2;
            func_0x00780ea0();
          } while (uVar10 != 0);
          param_1 = 0;
        }
      }
      uVar5 = *(uint *)(uVar9 + 0x28) << 3;
      if (uVar5 < 0x80) {
        lVar8 = 1;
      }
      else if (uVar5 < 0x4000) {
        lVar8 = 2;
      }
      else {
        lVar12 = 4;
        if ((*(uint *)(uVar9 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
          lVar12 = 5;
        }
        lVar8 = 3;
        if (0x1fffff < uVar5) {
          lVar8 = lVar12;
        }
      }
      lVar12 = 4;
      if ((uVar11 >> 0x1c & 0xf) != 0) {
        lVar12 = 5;
      }
      uVar5 = (uint)uVar11;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar5) {
        lVar12 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar12;
      }
      uVar10 = lVar8 + uVar11 + lVar2;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return uVar10;
    }
LAB_00761cdc:
    unaff_x30 = FUN_00761ce0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)&uStack_120;
    uVar10 = param_1;
    unaff_x19 = uVar9;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  switch(*(undefined1 *)(uVar10 + 0x2c)) {
  case 0:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x0077fbc0(uVar7);
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 2;
    }
    if (uVar3 < 0x4000) {
      return 3;
    }
    if (uVar3 < 0x200000) {
      return 4;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    uVar10 = 5;
    goto code_r0x00761fd8;
  case 1:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x007930e0(uVar7);
    break;
  case 2:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x007871a0(uVar7);
    break;
  case 3:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00783840(uVar7);
    break;
  case 4:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00793120(uVar7);
    goto code_r0x00761e8c;
  case 5:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00788b40(uVar7);
    goto code_r0x00761e8c;
  case 6:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00782440(uVar7);
code_r0x00761e8c:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 9;
    }
    if (uVar3 < 0x4000) {
      return 10;
    }
    if (uVar3 < 0x200000) {
      return 0xb;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    uVar10 = 0xc;
    goto code_r0x00761fd8;
  case 7:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x007871a0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 10;
    if ((uVar7 & 0x80000000) == 0) {
      lVar12 = lVar2;
    }
    return lVar12 + lVar8;
  case 8:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00788b40(uVar7);
    goto code_r0x00761ee0;
  case 9:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x007871a0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    uVar5 = (int)uVar7 << 1 ^ (int)uVar7 >> 0x1f;
    lVar12 = 4;
    if (uVar5 >> 0x1c != 0) {
      lVar12 = 5;
    }
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return lVar2 + lVar8;
  case 10:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00788b40(uVar7);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    uVar7 = uVar7 << 1 ^ (long)uVar7 >> 0x3f;
    func_0x00742934(uVar7);
    return uVar7 + lVar8;
  case 0xb:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x007930e0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return lVar2 + lVar8;
  case 0xc:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00793120(uVar7);
code_r0x00761ee0:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      lVar12 = 1;
    }
    else {
      lVar12 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar12 = 5;
      }
      lVar8 = 3;
      if (0x1fffff < uVar3) {
        lVar8 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar3) {
        lVar12 = lVar8;
      }
    }
    func_0x00742934();
code_r0x00761f78:
    return uVar7 + lVar12;
  case 0xd:
    uVar5 = *(uint *)(uVar10 + 0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    func_0x007882e0();
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return uVar7 + lVar8 + lVar2;
  case 0xe:
    uVar5 = *(uint *)(uVar10 + 0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    func_0x00788320();
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return uVar7 + lVar8 + lVar2;
  case 0xf:
    uVar5 = *(uint *)(uVar10 + 0x28);
    if ((*(byte *)(uVar10 + 0x2d) >> 2 & 1) == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar3 = uVar5 << 3;
      lVar12 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar12 = 5;
      }
      lVar8 = 3;
      if (0x1fffff < uVar3) {
        lVar8 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar3) {
        lVar12 = lVar8;
      }
      lVar8 = 1;
      if (0x7f < uVar3) {
        lVar8 = lVar12;
      }
      func_0x0078c740();
      lVar12 = 4;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        lVar12 = 5;
      }
      uVar5 = (uint)uVar7;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar5) {
        lVar12 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar12;
      }
      return uVar7 + lVar8 + lVar2;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    lVar12 = 8;
    if (uVar5 >> 0x1c != 0) {
      lVar12 = 9;
    }
    lVar8 = 7;
    if (0x1fffff < uVar5) {
      lVar8 = lVar12;
    }
    lVar12 = 6;
    if (0x3fff < uVar5) {
      lVar12 = lVar8;
    }
    lVar8 = 5;
    if (0x7f < uVar5) {
      lVar8 = lVar12;
    }
    func_0x0078c740();
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return lVar8 + uVar7 + lVar2;
  case 0x10:
    uVar5 = *(uint *)(uVar10 + 0x28) << 3;
    if (uVar5 < 0x80) {
      lVar12 = 2;
    }
    else {
      lVar12 = 8;
      if ((*(uint *)(uVar10 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
        lVar12 = 10;
      }
      lVar8 = 6;
      if (0x1fffff < uVar5) {
        lVar8 = lVar12;
      }
      lVar12 = 4;
      if (0x3fff < uVar5) {
        lVar12 = lVar8;
      }
    }
    func_0x0078c740(uVar7);
    goto code_r0x00761f78;
  case 0x11:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x007871a0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 10;
    if ((uVar7 & 0x80000000) == 0) {
      lVar12 = lVar2;
    }
    return lVar12 + lVar8;
  default:
    goto LAB_00761fdc;
  }
  uVar3 = uVar5 << 3;
  if (uVar3 < 0x80) {
    uVar10 = 5;
  }
  else if (uVar3 < 0x4000) {
    uVar10 = 6;
  }
  else if (uVar3 < 0x200000) {
    uVar10 = 7;
  }
  else {
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    uVar10 = 8;
code_r0x00761fd8:
    if (!bVar4) {
      uVar10 = uVar10 + 1;
    }
  }
LAB_00761fdc:
  return uVar10;
}



/* Entry: 00761ce0; end: 00761fe7;  */

long FUN_00761ce0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  switch(*(undefined1 *)(param_1 + 0x2c)) {
  case 0:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x0077fbc0(param_2);
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 2;
    }
    if (uVar3 < 0x4000) {
      return 3;
    }
    if (uVar3 < 0x200000) {
      return 4;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    param_1 = 5;
    goto code_r0x00761fd8;
  case 1:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x007930e0(param_2);
    break;
  case 2:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x007871a0(param_2);
    break;
  case 3:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00783840(param_2);
    break;
  case 4:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00793120(param_2);
    goto code_r0x00761e8c;
  case 5:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00788b40(param_2);
    goto code_r0x00761e8c;
  case 6:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00782440(param_2);
code_r0x00761e8c:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 9;
    }
    if (uVar3 < 0x4000) {
      return 10;
    }
    if (uVar3 < 0x200000) {
      return 0xb;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    param_1 = 0xc;
    goto code_r0x00761fd8;
  case 7:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x007871a0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 10;
    if ((param_2 & 0x80000000) == 0) {
      lVar7 = lVar2;
    }
    return lVar7 + lVar1;
  case 8:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00788b40(param_2);
    goto code_r0x00761ee0;
  case 9:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x007871a0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    uVar5 = (int)param_2 << 1 ^ (int)param_2 >> 0x1f;
    lVar7 = 4;
    if (uVar5 >> 0x1c != 0) {
      lVar7 = 5;
    }
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return lVar2 + lVar1;
  case 10:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00788b40(param_2);
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    uVar6 = param_2 << 1 ^ (long)param_2 >> 0x3f;
    func_0x00742934(uVar6);
    return uVar6 + lVar1;
  case 0xb:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x007930e0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return lVar2 + lVar1;
  case 0xc:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00793120(param_2);
code_r0x00761ee0:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      lVar7 = 1;
    }
    else {
      lVar7 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar7 = 5;
      }
      lVar1 = 3;
      if (0x1fffff < uVar3) {
        lVar1 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar3) {
        lVar7 = lVar1;
      }
    }
    func_0x00742934();
code_r0x00761f78:
    return param_2 + lVar7;
  case 0xd:
    uVar5 = *(uint *)(param_1 + 0x28) << 3;
    lVar7 = 4;
    if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar5) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar5) {
      lVar1 = lVar7;
    }
    func_0x007882e0();
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return param_2 + lVar1 + lVar2;
  case 0xe:
    uVar5 = *(uint *)(param_1 + 0x28) << 3;
    lVar7 = 4;
    if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar5) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar5) {
      lVar1 = lVar7;
    }
    func_0x00788320(param_2,param_2,4);
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return param_2 + lVar1 + lVar2;
  case 0xf:
    uVar5 = *(uint *)(param_1 + 0x28);
    if ((*(byte *)(param_1 + 0x2d) >> 2 & 1) == 0) {
      uVar3 = uVar5 << 3;
      lVar7 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar7 = 5;
      }
      lVar1 = 3;
      if (0x1fffff < uVar3) {
        lVar1 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar3) {
        lVar7 = lVar1;
      }
      lVar1 = 1;
      if (0x7f < uVar3) {
        lVar1 = lVar7;
      }
      func_0x0078c740();
      lVar7 = 4;
      if ((param_2 >> 0x1c & 0xf) != 0) {
        lVar7 = 5;
      }
      uVar5 = (uint)param_2;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar5) {
        lVar7 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar7;
      }
      return param_2 + lVar1 + lVar2;
    }
    lVar7 = 8;
    if (uVar5 >> 0x1c != 0) {
      lVar7 = 9;
    }
    lVar1 = 7;
    if (0x1fffff < uVar5) {
      lVar1 = lVar7;
    }
    lVar7 = 6;
    if (0x3fff < uVar5) {
      lVar7 = lVar1;
    }
    lVar1 = 5;
    if (0x7f < uVar5) {
      lVar1 = lVar7;
    }
    func_0x0078c740();
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return lVar1 + param_2 + lVar2;
  case 0x10:
    uVar5 = *(uint *)(param_1 + 0x28) << 3;
    if (uVar5 < 0x80) {
      lVar7 = 2;
    }
    else {
      lVar7 = 8;
      if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
        lVar7 = 10;
      }
      lVar1 = 6;
      if (0x1fffff < uVar5) {
        lVar1 = lVar7;
      }
      lVar7 = 4;
      if (0x3fff < uVar5) {
        lVar7 = lVar1;
      }
    }
    func_0x0078c740(param_2);
    goto code_r0x00761f78;
  case 0x11:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x007871a0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 10;
    if ((param_2 & 0x80000000) == 0) {
      lVar7 = lVar2;
    }
    return lVar7 + lVar1;
  default:
    goto LAB_00761fdc;
  }
  uVar3 = uVar5 << 3;
  if (uVar3 < 0x80) {
    param_1 = 5;
  }
  else if (uVar3 < 0x4000) {
    param_1 = 6;
  }
  else if (uVar3 < 0x200000) {
    param_1 = 7;
  }
  else {
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    param_1 = 8;
code_r0x00761fd8:
    if (!bVar4) {
      param_1 = param_1 + 1;
    }
  }
LAB_00761fdc:
  return param_1;
}



/* Entry: 00761fe8; end: 007621ef;  */

/* WARNING: Possible PIC construction at 0x00762064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00762068) */

ulong FUN_00761fe8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  switch(param_1 & 0xffffffff) {
  case 0:
    func_0x0077fbc0(param_2);
    goto code_r0x007621b4;
  case 1:
    func_0x007930e0(param_2);
    goto code_r0x00762158;
  case 2:
    func_0x007871a0(param_2);
    goto code_r0x00762158;
  case 3:
    func_0x00783840(param_2);
code_r0x00762158:
    param_1 = 4;
    break;
  case 4:
    func_0x00793120(param_2);
    goto code_r0x00762180;
  case 5:
    func_0x00788b40(param_2);
    goto code_r0x00762180;
  case 6:
    func_0x00782440(param_2);
code_r0x00762180:
    param_1 = 8;
    break;
  case 7:
  case 0x11:
    func_0x007871a0();
    uVar1 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      uVar1 = 5;
    }
    uVar5 = (uint)param_2;
    uVar3 = 3;
    if (0x1fffff < uVar5) {
      uVar3 = uVar1;
    }
    uVar1 = 2;
    if (0x3fff < uVar5) {
      uVar1 = uVar3;
    }
    uVar3 = 1;
    if (0x7f < uVar5) {
      uVar3 = uVar1;
    }
    param_1 = 10;
    if ((param_2 & 0x80000000) == 0) {
      param_1 = uVar3;
    }
    break;
  case 8:
    func_0x00788b40();
    goto SUB_00742934;
  case 9:
    func_0x007871a0();
    uVar5 = (int)param_2 << 1 ^ (int)param_2 >> 0x1f;
    if (0x7f < uVar5) {
      if (uVar5 < 0x4000) {
        return 2;
      }
      uVar1 = 4;
      if (uVar5 >> 0x1c != 0) {
        uVar1 = 5;
      }
      if (uVar5 < 0x200000) {
        return 3;
      }
      return uVar1;
    }
code_r0x007621b4:
    param_1 = 1;
    break;
  case 10:
    func_0x00788b40();
    param_2 = param_2 << 1 ^ (long)param_2 >> 0x3f;
    goto SUB_00742934;
  case 0xb:
    func_0x007930e0();
    uVar1 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      uVar1 = 5;
    }
    uVar5 = (uint)param_2;
    uVar3 = 3;
    if (0x1fffff < uVar5) {
      uVar3 = uVar1;
    }
    uVar1 = 2;
    if (0x3fff < uVar5) {
      uVar1 = uVar3;
    }
    param_1 = 1;
    if (0x7f < uVar5) {
      param_1 = uVar1;
    }
    break;
  case 0xc:
    func_0x00793120();
SUB_00742934:
    if (param_2 < 0x80) {
      return 1;
    }
    if (param_2 < 0x4000) {
      return 2;
    }
    if (param_2 < 0x200000) {
      return 3;
    }
    if (param_2 >> 0x1c == 0) {
      return 4;
    }
    if (param_2 >> 0x23 == 0) {
      return 5;
    }
    if (param_2 >> 0x2a == 0) {
      return 6;
    }
    if (param_2 >> 0x31 == 0) {
      return 7;
    }
    uVar1 = 9;
    if (0x7fffffffffffffff < param_2) {
      uVar1 = 10;
    }
    uVar3 = 8;
    if (param_2 >> 0x38 != 0) {
      uVar3 = uVar1;
    }
    return uVar3;
  case 0xd:
    func_0x007882e0();
    goto code_r0x007620fc;
  case 0xe:
    func_0x00788320(param_2,param_2,4);
code_r0x007620fc:
    lVar2 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar2 = 5;
    }
    uVar5 = (uint)param_2;
    lVar4 = 3;
    if (0x1fffff < uVar5) {
      lVar4 = lVar2;
    }
    lVar2 = 2;
    if (0x3fff < uVar5) {
      lVar2 = lVar4;
    }
    lVar4 = 1;
    if (0x7f < uVar5) {
      lVar4 = lVar2;
    }
    param_1 = lVar4 + param_2;
    break;
  case 0xf:
    goto code_r0x0078c740;
  case 0x10:
code_r0x0078c740:
                    /* WARNING: Could not recover jumptable at 0x0078c750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_2,PTR_s_serializedSize_00abdee0);
    return param_2;
  }
  return param_1;
}



/* Entry: 007621f0; end: 0076225b; -[GPBExtensionRegistry init] */

undefined1 * FUN_007621f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac48b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_00999d30;
    _CFDictionaryCreateMutable(uVar2,0,0,PTR__kCFTypeDictionaryValueCallBacks_00999d88);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0076225c; end: 007622a3; -[GPBExtensionRegistry dealloc] */

void FUN_0076225c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CFRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_00ac48b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007622a4; end: 007622e3; -[GPBExtensionRegistry copyWithZone:] */

undefined8 FUN_007622a4(undefined8 param_1)

{
  _objc_opt_class();
  func_0x0077ec40();
  func_0x007849a0();
  func_0x0077e520();
  return param_1;
}



/* Entry: 007622e4; end: 00762383; -[GPBExtensionRegistry addExtension:] */

void FUN_007622e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00780be0(param_3);
    lVar2 = *(long *)(param_1 + 8);
    _CFDictionaryGetValue(lVar2,uVar1);
    if (lVar2 == 0) {
      lVar2 = *(long *)PTR__kCFAllocatorDefault_00999d30;
      _CFDictionaryCreateMutable(lVar2,0,0,PTR__kCFTypeDictionaryValueCallBacks_00999d88);
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),uVar1,lVar2);
      _CFRelease(lVar2);
    }
    uVar1 = param_3;
    func_0x00783260(param_3);
                    /* WARNING: Could not recover jumptable at 0x00779334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionarySetValue_00999a98)(lVar2,uVar1 & 0xffffffff,param_3);
    return;
  }
  return;
}



/* Entry: 00762384; end: 007623cb; -[GPBExtensionRegistry extensionForDescriptor:fieldNumber:] */

void FUN_00762384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00789340(param_3);
  lVar1 = *(long *)(param_1 + 8);
  _CFDictionaryGetValue(lVar1,param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryGetValue_00999a88)();
    return;
  }
  return;
}



/* Entry: 007623cc; end: 007623eb; -[GPBExtensionRegistry addExtensions:] */

void FUN_007623cc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007792c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_00999a50)
              (*(undefined8 *)(param_3 + 8),FUN_007623ec,*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 007623ec; end: 00762477;  */

void FUN_007623ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  _CFDictionaryGetValue(param_3,param_1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007792c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_00999a50)(param_2,FUN_00762478,lVar1);
    return;
  }
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_00999d30;
  _CFDictionaryCreateMutableCopy(uVar2,0,param_2);
  _CFDictionarySetValue(param_3,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077943c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_00999b48)(uVar2);
  return;
}



/* Entry: 00762478; end: 0076248b;  */

void FUN_00762478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00779334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDictionarySetValue_00999a98)(param_3,param_1,param_2);
  return;
}



/* Entry: 0076248c; end: 007624eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076248c(long param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
code_r0x0076248c:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar8,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x0076c1a8(lVar8,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_1, func_0x007882e0(), lVar9 != 0)) {
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar11 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar6;
    }
    else {
      _objc_release(param_1);
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar9 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar11 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar11 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar8)) {
    FUN_007627b0(uVar11);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar11 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar11 == 0) goto code_r0x0076248c;
  lVar10 = lVar9;
  func_0x00783280();
  uVar5 = uVar11;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar11 + 8) == lVar8) {
        *(undefined8 *)(uVar11 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar11 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar11);
  param_1 = lVar8;
  goto code_r0x0076248c;
}



/* Entry: 007624ec; end: 007627af;  */

/* WARNING: Removing unreachable block (ram,0x007626c8) */
/* WARNING: Removing unreachable block (ram,0x00762570) */

void FUN_007624ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = param_1;
  lVar2 = param_2;
  _objc_opt_class();
  func_0x00781ea0();
  lVar6 = *(long *)(lVar1 + 8);
  lVar1 = lVar6;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar1 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar7 = *(long *)(lVar9 * 8);
        lVar4 = lVar7;
        func_0x00783280();
        if ((int)lVar4 == 1) {
          lVar4 = 0;
          if (*(long *)(param_1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(param_1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
          }
          if (lVar4 == param_2) {
            piVar5 = (int *)&DAT_00ac6014;
            if (3 < *(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd) {
              piVar5 = (int *)&DAT_00ac6018;
            }
            *(undefined8 *)(param_2 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = param_1;
            goto LAB_0076260c;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar6;
      func_0x00780ea0();
    } while (lVar1 != 0);
    lVar9 = 0;
  }
LAB_0076260c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = lVar9;
  _objc_opt_class();
  func_0x00781ea0();
  lVar4 = *(long *)(lVar1 + 8);
  lVar1 = lVar4;
  func_0x00780ea0();
  lVar3 = 0;
  if (lVar1 != 0) {
    do {
      lVar3 = 0;
      do {
        lVar8 = *(long *)(lVar3 * 8);
        lVar7 = lVar8;
        func_0x00783280();
        if ((int)lVar7 == 2) {
          lVar7 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar7 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar7 == lVar2) {
            lVar1 = lVar8;
            func_0x00788e40();
            if (((int)lVar1 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(lVar2 + *piVar5) = 0;
            FUN_0076248c();
            lVar3 = lVar9;
            goto LAB_00762778;
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = lVar4;
      func_0x00780ea0();
    } while (lVar1 != 0);
    lVar3 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
      *(undefined8 *)(lVar3 + 0x20) = 0;
      _objc_release(*(undefined8 *)(lVar3 + 0x28));
      *(undefined8 *)(lVar3 + 0x28) = 0;
      _objc_release(*(undefined8 *)(lVar3 + 0x30));
      *(undefined8 *)(lVar3 + 0x30) = 0;
    }
    return;
  }
  return;
}



/* Entry: 007627b0; end: 007627f3;  */

void FUN_007627b0(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 007627f4; end: 0076286b; +[GPBMessage initialize] */

/* WARNING: Possible PIC construction at 0x00762844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00762848) */
/* WARNING: Removing unreachable block (ram,0x0077aa24) */

void FUN_007627f4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___GPBMessage_00ac3920;
  _objc_opt_class();
  puVar2 = param_1;
  _objc_opt_class();
  if ((puVar2 != puVar1) && (puVar2 = param_1, func_0x00792520(), puVar2 != puVar1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00781eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_descriptor_00abb4a0);
  return;
}



/* Entry: 0076286c; end: 0076289b; +[GPBMessage allocWithZone:] */

void FUN_0076286c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781ea0();
                    /* WARNING: Could not recover jumptable at 0x0077985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSAllocateObject_00998ec0)(param_1,*(undefined4 *)(lVar1 + 0x18),param_3);
  return;
}



/* Entry: 0076289c; end: 0076289f; +[GPBMessage alloc] */

void FUN_0076289c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_allocWithZone_0099acb8)();
  return;
}



/* Entry: 007628a0; end: 00762933; +[GPBMessage descriptor] */

void FUN_007628a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam0000000000b646a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_00ac3770;
  _objc_alloc();
  func_0x00786180();
  puVar3 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
  puVar2 = PTR__OBJC_CLASS___GPBMessage_00ac3920;
  puRam0000000000b646b0 = puVar1;
  _objc_opt_class(PTR__OBJC_CLASS___GPBMessage_00ac3920);
  func_0x0077ebe0(puVar3,param_2,puVar2,0,puRam0000000000b646b0,0,0,0,0);
  puRam0000000000b646a8 = puVar3;
  return;
}



/* Entry: 00762934; end: 00762947; +[GPBMessage message] */

void FUN_00762934(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 00762948; end: 007629a7; -[GPBMessage init] */

undefined1 * FUN_00762948(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR__OBJC_CLASS___GPBMessage_00ac48b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    _objc_opt_class();
    _class_getInstanceSize();
    *(undefined1 **)((long)puVar1 + 0x40) = (undefined1 *)((long)puVar1 + (long)puVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007629a8; end: 007629b3; -[GPBMessage initWithData:error:] */

void FUN_007629a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00785230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithData_extensionRegistry_e_00abc190,param_3,0,param_4);
  return;
}



/* Entry: 007629b4; end: 00762a33; -[GPBMessage initWithData:extensionRegistry:error:] */

ulong FUN_007629b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x007849a0();
  if (param_1 != 0) {
    if (param_3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((param_3 & 1) == 0) {
        return param_1;
      }
    }
    uVar2 = param_1;
    func_0x007892a0();
    if ((uVar2 & 1) == 0) {
      _objc_release(param_1);
      param_1 = 0;
    }
  }
  return param_1;
}



/* Entry: 00762a34; end: 00762ad3; -[GPBMessage initWithCodedInputStream:extensionRegistry:error:] */

long FUN_00762a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  func_0x007849a0();
  if ((param_1 != 0) &&
     (func_0x00789260(param_1,param_2,param_3,param_4), param_5 != (undefined8 *)0x0)) {
    *param_5 = 0;
  }
  return param_1;
}



/* Entry: 00762ad4; end: 00762bb3;  */

void FUN_00762ad4(undefined *param_1)

{
  int iVar1;
  long lVar3;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puVar2;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = param_1;
  func_0x00789760();
  iVar1 = (int)puVar2;
  func_0x007877e0();
  if (iVar1 != 0) {
    puVar2 = param_1;
    func_0x00793400();
    func_0x00789f00();
    if (puVar2 != (undefined *)0x0) goto LAB_00762b88;
  }
  func_0x0078afc0();
  func_0x007882e0();
  if (param_1 != (undefined *)0x0) {
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
  func_0x00782e40();
LAB_00762b88:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
    func_0x007872a0();
    puStack_68 = PTR__OBJC_CLASS___GPBMessage_00ac48b8;
    puStack_70 = puVar2;
    _objc_msgSendSuper2(&puStack_70,PTR_s_dealloc_00ab6538);
    return;
  }
  return;
}



/* Entry: 00762bb4; end: 00762bfb; -[GPBMessage dealloc] */

void FUN_00762bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x007872a0(param_1,param_2,0);
  puStack_28 = PTR__OBJC_CLASS___GPBMessage_00ac48b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00762bfc; end: 00763027; -[GPBMessage copyFieldsInto:zone:descriptor:] */

/* WARNING: Removing unreachable block (ram,0x00762d74) */

void FUN_00762bfc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  _memcpy(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_1 + 0x40),
          *(undefined4 *)(param_5 + 0x18));
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar16 = *(long *)(param_5 + 8);
  puVar7 = &uStack_1c0;
  lVar3 = lVar16;
  func_0x00780ea0();
  if (lVar3 != 0) {
    lVar10 = *plStack_1b0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(lVar16);
        }
        lVar13 = *(long *)(lStack_1b8 + lVar12 * 8);
        lVar8 = *(long *)(lVar13 + 8);
        if ((*(ushort *)(lVar8 + 0x1c) & 0xf02) == 0) {
          if (*(byte *)(lVar8 + 0x1e) - 0xf < 2) {
            uVar1 = *(uint *)(lVar8 + 0x14);
            if ((int)uVar1 < 0) {
              lVar9 = *(long *)(param_1 + 0x40);
              if (*(int *)(lVar9 + (ulong)-uVar1 * 4) != *(int *)(lVar8 + 0x10)) goto LAB_00762e74;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x40);
              if ((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_00762e74:
                *(undefined8 *)(*(long *)(param_3 + 0x40) + (ulong)*(uint *)(lVar8 + 0x18)) = 0;
                goto LAB_00762fc0;
              }
            }
LAB_00762f58:
            uVar15 = *(undefined8 *)(lVar9 + (ulong)*(uint *)(lVar8 + 0x18));
            uVar5 = uVar15;
            func_0x00780e60(uVar15);
            _objc_retain(uVar15);
            FUN_0076c2c4(param_3,lVar13,uVar5);
          }
          else if (*(byte *)(lVar8 + 0x1e) - 0xd < 4) {
            uVar1 = *(uint *)(lVar8 + 0x14);
            if ((int)uVar1 < 0) {
              lVar9 = *(long *)(param_1 + 0x40);
              if (*(int *)(lVar9 + (ulong)-uVar1 * 4) == *(int *)(lVar8 + 0x10)) goto LAB_00762f58;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x40);
              if ((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
              goto LAB_00762f58;
            }
          }
        }
        else {
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (puVar14 = *(undefined **)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar8 + 0x18)),
             puVar14 == (undefined *)0x0)) goto LAB_00762fc0;
          bVar2 = *(byte *)(lVar8 + 0x1e);
          lVar8 = lVar13;
          func_0x00783280();
          puVar6 = puVar14;
          if (bVar2 - 0xf < 2) {
            if ((int)lVar8 == 1) {
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
              _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
              func_0x00780e80(puVar14);
              func_0x00784f20(puVar6);
              puVar4 = puVar14;
              func_0x00780ea0();
              while (puVar4 != (undefined *)0x0) {
                puVar11 = (undefined *)0x0;
                do {
                  uVar5 = *(undefined8 *)((long)puVar11 * 8);
                  func_0x00780e60(uVar5);
                  func_0x0077e720(puVar6);
                  _objc_release(uVar5);
                  puVar11 = puVar11 + 1;
                } while (puVar4 != puVar11);
                puVar4 = puVar14;
                func_0x00780ea0();
              }
            }
            else {
              lVar8 = lVar13;
              func_0x00788e40();
              if ((int)lVar8 == 0xe) {
                puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
                _objc_alloc();
                func_0x00780e80(puVar14);
                func_0x00784f20();
                func_0x00782b60(puVar14);
              }
              else {
                func_0x00781be0(puVar14);
              }
            }
          }
          else {
            if ((int)lVar8 == 1) {
              bVar2 = *(byte *)(*(long *)(lVar13 + 8) + 0x1e);
joined_r0x00762f1c:
              if (bVar2 - 0xd < 4) {
                func_0x00789720(puVar14);
                goto LAB_00762fa0;
              }
            }
            else {
              lVar8 = lVar13;
              func_0x00788e40();
              if ((int)lVar8 == 0xe) {
                bVar2 = *(byte *)(*(long *)(lVar13 + 8) + 0x1e);
                goto joined_r0x00762f1c;
              }
            }
            func_0x00780e60(puVar14);
          }
LAB_00762fa0:
          _objc_retain(puVar14);
          FUN_0076c2c4(param_3,lVar13,puVar6);
        }
LAB_00762fc0:
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar3);
      puVar7 = &uStack_1c0;
      lVar3 = lVar16;
      func_0x00780ea0();
    } while (lVar3 != 0);
  }
  lVar3 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_80) {
    ___stack_chk_fail();
    func_0x00780e60(puVar7);
    func_0x0078f4a0(*(undefined8 *)(lVar3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar7);
    return;
  }
  return;
}



/* Entry: 00763028; end: 00763077;  */

void FUN_00763028(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00780e60(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x0078f4a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00763078; end: 007630f3; -[GPBMessage copyWithZone:] */

long FUN_00763078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00781ea0();
  func_0x00789340();
  func_0x0077ec40();
  func_0x007849a0();
  func_0x00780e40(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00780e60();
  *(undefined8 *)(lVar1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_007630f4(uVar2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return lVar1;
}



/* Entry: 007630f4; end: 00763397;  */

/* WARNING: Removing unreachable block (ram,0x007631ac) */
/* WARNING: Removing unreachable block (ram,0x00763258) */

undefined * FUN_007630f4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = param_1;
  func_0x00780e80();
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x0077ec40();
    func_0x00780e80(param_1);
    func_0x00784f20();
    lVar2 = param_1;
    func_0x00780ea0();
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        lVar9 = *(long *)(lVar7 * 8);
        lVar3 = param_1;
        func_0x00789ea0();
        uVar1 = *(byte *)(*(long *)(lVar9 + 8) + 0x2c) - 0xf;
        func_0x00787c60();
        if ((int)lVar9 == 0) {
          if (uVar1 < 2) {
            func_0x00780e60(lVar3);
            goto LAB_007632f8;
          }
          func_0x0078f4a0(puVar10);
        }
        else if (uVar1 < 2) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
          _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
          func_0x00780e80(lVar3);
          func_0x00784f20(puVar4);
          lVar9 = lVar3;
          func_0x00780ea0();
          while (lVar9 != 0) {
            lVar8 = 0;
            do {
              uVar5 = *(undefined8 *)(lVar8 * 8);
              func_0x00780e60(uVar5);
              func_0x0077e720(puVar4);
              _objc_release(uVar5);
              lVar8 = lVar8 + 1;
            } while (lVar9 != lVar8);
            lVar9 = lVar3;
            func_0x00780ea0();
          }
          func_0x0078f4a0(puVar10);
          _objc_release(puVar4);
        }
        else {
          func_0x00789720(lVar3);
LAB_007632f8:
          func_0x0078f4a0(puVar10);
          _objc_release(lVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar2);
      lVar2 = param_1;
      func_0x00780ea0();
    }
  }
  puVar4 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x007872b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)();
    return puVar4;
  }
  return puVar10;
}



/* Entry: 00763398; end: 0076339f; -[GPBMessage clear] */

void FUN_00763398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007872b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_internalClear__00abc9b0,1);
  return;
}



/* Entry: 007633a0; end: 007636df; -[GPBMessage internalClear:] */

/* WARNING: Removing unreachable block (ram,0x00763434) */
/* WARNING: Removing unreachable block (ram,0x00763638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007633a0(ulong param_1,undefined *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar6 = param_1;
  func_0x00781ea0();
  lVar13 = *(long *)(uVar6 + 8);
  lVar11 = lVar13;
  func_0x00780ea0();
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      puVar15 = *(undefined **)(lVar12 * 8);
      lVar10 = *(long *)(puVar15 + 8);
      if ((*(ushort *)(lVar10 + 0x1c) & 0xf02) == 0) {
        if (*(byte *)(lVar10 + 0x1e) - 0xf < 2) {
          puVar7 = puVar15;
          FUN_0076c258(param_1);
          if (*(long *)(param_1 + 0x40) == 0) {
            uVar14 = 0;
            puVar15 = puVar7;
          }
          else {
            uVar14 = *(ulong *)(*(long *)(param_1 + 0x40) +
                               (ulong)*(uint *)(*(long *)(puVar15 + 8) + 0x18));
            puVar15 = puVar7;
          }
          goto LAB_007635ac;
        }
        if (*(byte *)(lVar10 + 0x1e) - 0xd < 4) {
          uVar2 = *(uint *)(lVar10 + 0x14);
          if ((int)uVar2 < 0) {
            if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar2 * 4) == *(int *)(lVar10 + 0x10))
            goto LAB_0076359c;
          }
          else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar2 >> 5) * 4) >>
                    (ulong)(uVar2 & 0x1f) & 1) != 0) {
LAB_0076359c:
            uVar14 = param_1;
            FUN_007636e0(param_1);
            goto LAB_007635ac;
          }
        }
      }
      else {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (uVar14 = *(ulong *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)),
           uVar14 == 0)) goto LAB_007635b4;
        puVar7 = puVar15;
        func_0x00783280();
        uVar8 = uVar14;
        if ((int)puVar7 == 1) {
          if (3 < *(byte *)(*(long *)(puVar15 + 8) + 0x1e) - 0xd) {
LAB_00763568:
            puVar15 = param_2;
            if (*(ulong *)(uVar14 + 8) == param_1) {
              *(undefined8 *)(uVar14 + 8) = 0;
            }
            goto LAB_007635ac;
          }
          puVar15 = PTR_PTR_00ac3930;
          _objc_opt_class();
          _objc_opt_isKindOfClass();
          iVar5 = _DAT_00ac6014;
        }
        else {
          puVar7 = puVar15;
          func_0x00788e40();
          if (((int)puVar7 != 0xe) || (3 < *(byte *)(*(long *)(puVar15 + 8) + 0x1e) - 0xd))
          goto LAB_00763568;
          puVar15 = PTR_PTR_00ac3938;
          _objc_opt_class();
          _objc_opt_isKindOfClass();
          iVar5 = _DAT_00ac6294;
        }
        if (((uVar8 & 1) != 0) && (*(ulong *)(uVar14 + (long)iVar5) == param_1)) {
          *(undefined8 *)(uVar14 + (long)iVar5) = 0;
        }
LAB_007635ac:
        _objc_release(uVar14);
        param_2 = puVar15;
      }
LAB_007635b4:
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar13;
    func_0x00780ea0();
  }
  lVar13 = *(long *)(param_1 + 0x18);
  func_0x0077eb80();
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar11 = lVar13;
  func_0x00780ea0();
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      FUN_007627b0(*(undefined8 *)(lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar13;
    func_0x00780ea0();
  }
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar15 = *(undefined **)(param_1 + 8);
  _objc_release();
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_3 != 0) {
    puVar15 = *(undefined **)(param_1 + 0x40);
    param_2 = (undefined *)(ulong)*(uint *)(uVar6 + 0x18);
    _bzero();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    return puVar15;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)(param_2 + 8);
  if (*(byte *)(lVar11 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(puVar15 + 0x40) + (ulong)*(uint *)(lVar11 + 0x18));
    if ((undefined *)*plVar1 != (undefined *)0x0) {
      return (undefined *)*plVar1;
    }
    puVar7 = param_2;
    func_0x00789620();
    _objc_alloc_init();
    *(undefined **)(puVar7 + 0x20) = puVar15;
    _objc_retain();
    *(undefined **)(puVar7 + 0x28) = param_2;
    do {
      puVar15 = (undefined *)*plVar1;
      if (puVar15 != (undefined *)0x0) {
        ClearExclusiveLocal();
        FUN_007627b0(puVar7);
        _objc_release(puVar7);
        return puVar15;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)puVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return puVar7;
  }
  uVar2 = *(uint *)(lVar11 + 0x14);
  if ((int)uVar2 < 0) {
    lVar9 = *(long *)(puVar15 + 0x40);
    if (*(int *)(lVar9 + (ulong)-uVar2 * 4) != *(int *)(lVar11 + 0x10)) goto LAB_0076379c;
  }
  else {
    lVar9 = *(long *)(puVar15 + 0x40);
    if ((*(uint *)(lVar9 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_0076379c:
      func_0x00781ce0(param_2);
      return param_2;
    }
  }
  return *(undefined **)(lVar9 + (ulong)*(uint *)(lVar11 + 0x18));
}



/* Entry: 007636e0; end: 007637df;  */

long FUN_007636e0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 8);
  if (*(byte *)(lVar5 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
    if (*plVar1 != 0) {
      return *plVar1;
    }
    lVar5 = param_2;
    func_0x00789620();
    _objc_alloc_init();
    *(long *)(lVar5 + 0x20) = param_1;
    _objc_retain();
    *(long *)(lVar5 + 0x28) = param_2;
    do {
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        ClearExclusiveLocal();
        FUN_007627b0(lVar5);
        _objc_release(lVar5);
        return lVar6;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return lVar5;
  }
  uVar2 = *(uint *)(lVar5 + 0x14);
  if ((int)uVar2 < 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar6 + (ulong)-uVar2 * 4) != *(int *)(lVar5 + 0x10)) goto LAB_0076379c;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar6 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_0076379c:
      func_0x00781ce0(param_2);
      return param_2;
    }
  }
  return *(long *)(lVar6 + (ulong)*(uint *)(lVar5 + 0x18));
}



/* Entry: 007637e0; end: 00763b53; -[GPBMessage isInitialized] */

/* WARNING: Possible PIC construction at 0x00763818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076381c) */
/* WARNING: Removing unreachable block (ram,0x00763848) */
/* WARNING: Removing unreachable block (ram,0x00763850) */
/* WARNING: Removing unreachable block (ram,0x00763854) */
/* WARNING: Removing unreachable block (ram,0x00763864) */
/* WARNING: Removing unreachable block (ram,0x0076386c) */
/* WARNING: Removing unreachable block (ram,0x00763884) */
/* WARNING: Removing unreachable block (ram,0x007638a4) */
/* WARNING: Removing unreachable block (ram,0x0076388c) */
/* WARNING: Removing unreachable block (ram,0x007638a0) */
/* WARNING: Removing unreachable block (ram,0x007638bc) */
/* WARNING: Removing unreachable block (ram,0x007638cc) */
/* WARNING: Removing unreachable block (ram,0x00763900) */
/* WARNING: Removing unreachable block (ram,0x00763960) */
/* WARNING: Removing unreachable block (ram,0x00763908) */
/* WARNING: Removing unreachable block (ram,0x00763964) */
/* WARNING: Removing unreachable block (ram,0x0076398c) */
/* WARNING: Removing unreachable block (ram,0x00763994) */
/* WARNING: Removing unreachable block (ram,0x00763998) */
/* WARNING: Removing unreachable block (ram,0x007639a8) */
/* WARNING: Removing unreachable block (ram,0x007639b0) */
/* WARNING: Removing unreachable block (ram,0x007639c0) */
/* WARNING: Removing unreachable block (ram,0x007639cc) */
/* WARNING: Removing unreachable block (ram,0x007639e8) */
/* WARNING: Removing unreachable block (ram,0x007638dc) */
/* WARNING: Removing unreachable block (ram,0x00763918) */
/* WARNING: Removing unreachable block (ram,0x007639ec) */
/* WARNING: Removing unreachable block (ram,0x0076392c) */
/* WARNING: Removing unreachable block (ram,0x007639f0) */
/* WARNING: Removing unreachable block (ram,0x00763a1c) */
/* WARNING: Removing unreachable block (ram,0x00763a20) */
/* WARNING: Removing unreachable block (ram,0x00763a28) */
/* WARNING: Removing unreachable block (ram,0x007639f8) */
/* WARNING: Removing unreachable block (ram,0x007639fc) */
/* WARNING: Removing unreachable block (ram,0x00763a04) */
/* WARNING: Removing unreachable block (ram,0x00763a10) */
/* WARNING: Removing unreachable block (ram,0x00763a18) */
/* WARNING: Removing unreachable block (ram,0x007638e0) */
/* WARNING: Removing unreachable block (ram,0x0076393c) */
/* WARNING: Removing unreachable block (ram,0x00763a2c) */
/* WARNING: Removing unreachable block (ram,0x00763948) */
/* WARNING: Removing unreachable block (ram,0x00763a44) */
/* WARNING: Removing unreachable block (ram,0x0076395c) */
/* WARNING: Removing unreachable block (ram,0x007638ec) */
/* WARNING: Removing unreachable block (ram,0x00763a54) */
/* WARNING: Removing unreachable block (ram,0x00763af0) */
/* WARNING: Removing unreachable block (ram,0x00763a58) */
/* WARNING: Removing unreachable block (ram,0x00763a64) */
/* WARNING: Removing unreachable block (ram,0x00763a80) */
/* WARNING: Removing unreachable block (ram,0x00763af4) */
/* WARNING: Removing unreachable block (ram,0x00763b30) */
/* WARNING: Removing unreachable block (ram,0x00763b4c) */
/* WARNING: Removing unreachable block (ram,0x00763b94) */
/* WARNING: Removing unreachable block (ram,0x00763c34) */
/* WARNING: Removing unreachable block (ram,0x00763bac) */
/* WARNING: Removing unreachable block (ram,0x00763bd0) */
/* WARNING: Removing unreachable block (ram,0x00763bdc) */
/* WARNING: Removing unreachable block (ram,0x00763be0) */
/* WARNING: Removing unreachable block (ram,0x00763bf0) */
/* WARNING: Removing unreachable block (ram,0x00763bf8) */
/* WARNING: Removing unreachable block (ram,0x00763c40) */
/* WARNING: Removing unreachable block (ram,0x00763c08) */
/* WARNING: Removing unreachable block (ram,0x00763c14) */
/* WARNING: Removing unreachable block (ram,0x00763c30) */
/* WARNING: Removing unreachable block (ram,0x00763c54) */
/* WARNING: Removing unreachable block (ram,0x00763c88) */
/* WARNING: Removing unreachable block (ram,0x00763c6c) */
/* WARNING: Removing unreachable block (ram,0x00763b0c) */

void FUN_007637e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00781eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_descriptor_00abb4a0);
  return;
}



/* Entry: 00763b54; end: 00763c8b;  */

/* WARNING: Removing unreachable block (ram,0x00763bf0) */

void FUN_00763b54(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(byte *)(*(long *)(param_2 + 8) + 0x2c) - 0xf < 2) {
    func_0x00787c60();
    if ((int)param_2 == 0) {
      func_0x00787980();
      if ((param_3 & 1) == 0) {
LAB_00763c40:
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
        *param_4 = 1;
      }
    }
    else {
      uVar2 = param_3;
      func_0x00780ea0();
      while (uVar2 != 0) {
        uVar4 = 0;
        do {
          iVar1 = (int)*(undefined8 *)(uVar4 * 8);
          func_0x00787980();
          if (iVar1 == 0) goto LAB_00763c40;
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
        uVar2 = param_3;
        func_0x00780ea0();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
    _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00781eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)();
    return;
  }
  return;
}



/* Entry: 00763c8c; end: 00763c9f; -[GPBMessage descriptor] */

void FUN_00763c8c(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00781eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_descriptor_00abb4a0);
  return;
}


