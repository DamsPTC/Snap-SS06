/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0075dd58; end: 0075de13; -[GPBBoolInt32Dictionary enumerateForTextFormat:] */

void FUN_0075dd58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a3fd80);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0075ddfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 0075de14; end: 0075de8f; -[GPBBoolInt32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_0075de14(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x18) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined4 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x19) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined4 *)(param_1 + 0x14),&bStack_21);
  }
  return;
}



/* Entry: 0075de90; end: 0075df5f; -[GPBBoolInt32Dictionary computeSerializedSizeAsField:] */

long FUN_0075de90(long param_1,undefined8 param_2,long param_3)

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
    if (*(char *)(param_1 + 0x18 + lVar6) == '\x01') {
      lVar8 = lVar8 + 1;
      uVar5 = (ulong)*(uint *)(param_1 + 0x10 + lVar6 * 4);
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



/* Entry: 0075df60; end: 0075e027; -[GPBBoolInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_0075df60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    if (*(char *)(param_1 + 0x18 + lVar4) == '\x01') {
      func_0x00794020(param_3);
      FUN_0074670c(*(undefined4 *)(param_1 + 0x10 + lVar4 * 4),2,uVar1);
      func_0x00794020(param_3);
      func_0x00793c60(param_3);
      FUN_007468ec(param_3,*(undefined4 *)(param_1 + 0x10 + lVar4 * 4),2,uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 0075e028; end: 0075e083; -[GPBBoolInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075e028(long param_1,undefined8 param_2,long param_3)

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
      if (*(char *)(param_3 + 0x18 + lVar6) == '\x01') {
        *(undefined1 *)(param_1 + 0x18 + lVar6) = 1;
        *(undefined4 *)(param_1 + 0x10 + lVar6 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar6 * 4);
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



/* Entry: 0075e084; end: 0075e0ab; -[GPBBoolInt32Dictionary setInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075e084(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x10) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x18) = 1;
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



/* Entry: 0075e0ac; end: 0075e0b7; -[GPBBoolInt32Dictionary removeInt32ForKey:] */

void FUN_0075e0ac(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x18) = 0;
  return;
}



/* Entry: 0075e0b8; end: 0075e0bf; -[GPBBoolInt32Dictionary removeAll] */

void FUN_0075e0b8(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 0075e0c0; end: 0075e0cf; -[GPBBoolUInt64Dictionary init] */

void FUN_0075e0c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 0075e0d0; end: 0075e14b; -[GPBBoolUInt64Dictionary initWithUInt64s:forKeys:count:] */

void FUN_0075e0d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4870;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x20) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 0075e14c; end: 0075e1c3; -[GPBBoolUInt64Dictionary initWithDictionary:] */

void FUN_0075e14c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00786b80(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar2 * 8);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 0075e1c4; end: 0075e1d3; -[GPBBoolUInt64Dictionary initWithCapacity:] */

void FUN_0075e1c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 0075e1d4; end: 0075e1ff; -[GPBBoolUInt64Dictionary copyWithZone:] */

void FUN_0075e1d4(void)

{
  func_0x0077ec40(PTR_PTR_00ac38e8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075e200; end: 0075e29f; -[GPBBoolUInt64Dictionary isEqual:] */

undefined8 FUN_0075e200(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac38e8;
    _objc_opt_class(PTR_PTR_00ac38e8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075e2a0; end: 0075e2af; -[GPBBoolUInt64Dictionary hash] */

long FUN_0075e2a0(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 0075e2b0; end: 0075e353; -[GPBBoolUInt64Dictionary description] */

undefined * FUN_0075e2b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b060);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b080);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075e354; end: 0075e363; -[GPBBoolUInt64Dictionary count] */

long FUN_0075e354(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 0075e364; end: 0075e38b; -[GPBBoolUInt64Dictionary getUInt64:forKey:] */

void FUN_0075e364(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  if ((param_3 != (undefined8 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined8 *)(param_1 + (ulong)param_4 * 8 + 0x10);
  }
  return;
}



/* Entry: 0075e38c; end: 0075e3ab; -[GPBBoolUInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075e38c(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 0075e3ac; end: 0075e467; -[GPBBoolUInt64Dictionary enumerateForTextFormat:] */

void FUN_0075e3ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a800);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0075e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 0075e468; end: 0075e4e3; -[GPBBoolUInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_0075e468(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined8 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined8 *)(param_1 + 0x18),&bStack_21);
  }
  return;
}



/* Entry: 0075e4e4; end: 0075e5d3; -[GPBBoolUInt64Dictionary computeSerializedSizeAsField:] */

long FUN_0075e4e4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = *(long *)(param_3 + 8);
  cVar2 = *(char *)(lVar9 + 0x1e);
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar5) == '\x01') {
      if (cVar2 == '\f') {
        lVar5 = *(long *)(param_1 + 0x10 + lVar5 * 8);
        func_0x00742934(lVar5);
        lVar5 = lVar5 + 3;
      }
      else {
        lVar5 = 2;
        if (cVar2 == '\x04') {
          lVar5 = 0xb;
        }
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + lVar5 + 1;
    }
    lVar5 = 1;
    bVar4 = false;
  } while (bVar6);
  uVar1 = *(uint *)(lVar9 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar9 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar9 = 2;
  }
  else {
    lVar5 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar5 = 5;
    }
    lVar9 = 3;
    if (0x1fffff < uVar3) {
      lVar9 = lVar5;
    }
  }
  return lVar8 + lVar9 * lVar7;
}



/* Entry: 0075e5d4; end: 0075e6ef; -[GPBBoolUInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_0075e5d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  
  uVar7 = 0;
  lVar8 = 0;
  cVar3 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar1 = param_1 + 0x10;
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar8) == '\x01') {
      func_0x00794020(param_3,param_2,iVar2 << 3 | 2);
      if (cVar3 == '\x04') {
        func_0x00794020(param_3,param_2,0xb);
        func_0x00793c60(param_3,param_2,1,uVar7);
        func_0x00793ec0(param_3,param_2,2,*(undefined8 *)(lVar1 + lVar8 * 8));
      }
      else if (cVar3 == '\f') {
        uVar5 = *(undefined8 *)(lVar1 + lVar8 * 8);
        func_0x00742934(uVar5);
        func_0x00794020(param_3,param_2,(int)uVar5 + 3);
        func_0x00793c60(param_3,param_2,1,uVar7);
        func_0x007944a0(param_3,param_2,2,*(undefined8 *)(lVar1 + lVar8 * 8));
      }
      else {
        func_0x00794020(param_3,param_2,2);
        func_0x00793c60(param_3,param_2,1,uVar7);
      }
    }
    uVar7 = 1;
    lVar8 = 1;
    bVar4 = false;
  } while (bVar6);
  return;
}



/* Entry: 0075e6f0; end: 0075e74b; -[GPBBoolUInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075e6f0(long param_1,undefined8 param_2,long param_3)

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
        *(undefined8 *)(param_1 + 0x10 + lVar6 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar6 * 8);
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



/* Entry: 0075e74c; end: 0075e773; -[GPBBoolUInt64Dictionary setUInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075e74c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined8 *)(param_1 + (param_4 & 0xffffffff) * 8 + 0x10) = param_3;
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



/* Entry: 0075e774; end: 0075e77f; -[GPBBoolUInt64Dictionary removeUInt64ForKey:] */

void FUN_0075e774(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 0075e780; end: 0075e787; -[GPBBoolUInt64Dictionary removeAll] */

void FUN_0075e780(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 0075e788; end: 0075e797; -[GPBBoolInt64Dictionary init] */

void FUN_0075e788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 0075e798; end: 0075e813; -[GPBBoolInt64Dictionary initWithInt64s:forKeys:count:] */

void FUN_0075e798(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x20) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 0075e814; end: 0075e88b; -[GPBBoolInt64Dictionary initWithDictionary:] */

void FUN_0075e814(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00785960(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar2 * 8);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 0075e88c; end: 0075e89b; -[GPBBoolInt64Dictionary initWithCapacity:] */

void FUN_0075e88c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 0075e89c; end: 0075e8c7; -[GPBBoolInt64Dictionary copyWithZone:] */

void FUN_0075e89c(void)

{
  func_0x0077ec40(PTR_PTR_00ac38f0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075e8c8; end: 0075e967; -[GPBBoolInt64Dictionary isEqual:] */

undefined8 FUN_0075e8c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac38f0;
    _objc_opt_class(PTR_PTR_00ac38f0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075e968; end: 0075e977; -[GPBBoolInt64Dictionary hash] */

long FUN_0075e968(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 0075e978; end: 0075ea1b; -[GPBBoolInt64Dictionary description] */

undefined * FUN_0075e978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b0a0);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b0c0);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075ea1c; end: 0075ea2b; -[GPBBoolInt64Dictionary count] */

long FUN_0075ea1c(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 0075ea2c; end: 0075ea53; -[GPBBoolInt64Dictionary getInt64:forKey:] */

void FUN_0075ea2c(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  if ((param_3 != (undefined8 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined8 *)(param_1 + (ulong)param_4 * 8 + 0x10);
  }
  return;
}



/* Entry: 0075ea54; end: 0075ea73; -[GPBBoolInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075ea54(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 0075ea74; end: 0075eb2f; -[GPBBoolInt64Dictionary enumerateForTextFormat:] */

void FUN_0075ea74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a4ab80);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0075eb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 0075eb30; end: 0075ebab; -[GPBBoolInt64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_0075eb30(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined8 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined8 *)(param_1 + 0x18),&bStack_21);
  }
  return;
}



/* Entry: 0075ebac; end: 0075ec7b; -[GPBBoolInt64Dictionary computeSerializedSizeAsField:] */

long FUN_0075ebac(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = *(long *)(param_3 + 8);
  uVar2 = *(undefined1 *)(lVar9 + 0x1e);
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar5) == '\x01') {
      lVar7 = lVar7 + 1;
      lVar5 = *(long *)(param_1 + 0x10 + lVar5 * 8);
      FUN_007478bc(lVar5,2,uVar2);
      lVar8 = lVar8 + lVar5 + 3;
    }
    lVar5 = 1;
    bVar4 = false;
  } while (bVar6);
  uVar1 = *(uint *)(lVar9 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar9 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar9 = 2;
  }
  else {
    lVar5 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar5 = 5;
    }
    lVar9 = 3;
    if (0x1fffff < uVar3) {
      lVar9 = lVar5;
    }
  }
  return lVar8 + lVar9 * lVar7;
}



/* Entry: 0075ec7c; end: 0075ed43; -[GPBBoolInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_0075ec7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
      FUN_007478bc(*(undefined8 *)(param_1 + 0x10 + lVar4 * 8),2,uVar1);
      func_0x00794020(param_3);
      func_0x00793c60(param_3);
      FUN_00747aac(param_3,*(undefined8 *)(param_1 + 0x10 + lVar4 * 8),2,uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 0075ed44; end: 0075ed9f; -[GPBBoolInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075ed44(long param_1,undefined8 param_2,long param_3)

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
        *(undefined8 *)(param_1 + 0x10 + lVar6 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar6 * 8);
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



/* Entry: 0075eda0; end: 0075edc7; -[GPBBoolInt64Dictionary setInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075eda0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined8 *)(param_1 + (param_4 & 0xffffffff) * 8 + 0x10) = param_3;
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



/* Entry: 0075edc8; end: 0075edd3; -[GPBBoolInt64Dictionary removeInt64ForKey:] */

void FUN_0075edc8(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 0075edd4; end: 0075eddb; -[GPBBoolInt64Dictionary removeAll] */

void FUN_0075edd4(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 0075eddc; end: 0075edeb; -[GPBBoolBoolDictionary init] */

void FUN_0075eddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 0075edec; end: 0075ee67; -[GPBBoolBoolDictionary initWithBools:forKeys:count:] */

void FUN_0075edec(undefined8 param_1,undefined8 param_2,undefined1 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x12) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 0075ee68; end: 0075eedf; -[GPBBoolBoolDictionary initWithDictionary:] */

void FUN_0075ee68(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00784dc0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x12 + lVar2) == '\x01') {
        *(undefined1 *)(param_1 + 0x10 + lVar2) = *(undefined1 *)(param_3 + 0x10 + lVar2);
        *(undefined1 *)(param_1 + 0x12 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 0075eee0; end: 0075eeef; -[GPBBoolBoolDictionary initWithCapacity:] */

void FUN_0075eee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 0075eef0; end: 0075ef1b; -[GPBBoolBoolDictionary copyWithZone:] */

void FUN_0075eef0(void)

{
  func_0x0077ec40(PTR_PTR_00ac38f8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075ef1c; end: 0075efbb; -[GPBBoolBoolDictionary isEqual:] */

undefined8 FUN_0075ef1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac38f8;
    _objc_opt_class(PTR_PTR_00ac38f8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x12) != *(char *)(param_3 + 0x12))) ||
        (*(char *)(param_1 + 0x13) != *(char *)(param_3 + 0x13))) ||
       (((*(char *)(param_1 + 0x12) != '\0' &&
         (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x13) != '\0' &&
         (*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075efbc; end: 0075efcb; -[GPBBoolBoolDictionary hash] */

long FUN_0075efbc(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x13) + (ulong)*(byte *)(param_1 + 0x12);
}



/* Entry: 0075efcc; end: 0075f06f; -[GPBBoolBoolDictionary description] */

undefined * FUN_0075efcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x12) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b020);
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b040);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075f070; end: 0075f07f; -[GPBBoolBoolDictionary count] */

long FUN_0075f070(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x13) + (ulong)*(byte *)(param_1 + 0x12);
}



/* Entry: 0075f080; end: 0075f0a7; -[GPBBoolBoolDictionary getBool:forKey:] */

void FUN_0075f080(long param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  if ((param_3 != (undefined1 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x12) != '\0')) {
    *param_3 = *(undefined1 *)(param_1 + (ulong)param_4 + 0x10);
  }
  return;
}



/* Entry: 0075f0a8; end: 0075f0c3; -[GPBBoolBoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075f0a8(long param_1,undefined8 param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x12) = 1;
  return;
}



/* Entry: 0075f0c4; end: 0075f157; -[GPBBoolBoolDictionary enumerateForTextFormat:] */

void FUN_0075f0c4(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (*(char *)(param_1 + 0x12) == '\x01') {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21460;
    if (*(char *)(param_1 + 0x10) == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a21500;
    }
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,ppuVar1);
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21460;
    if (*(char *)(param_1 + 0x11) == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a21500;
    }
                    /* WARNING: Could not recover jumptable at 0x0075f144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,ppuVar1);
    return;
  }
  return;
}



/* Entry: 0075f158; end: 0075f1d3; -[GPBBoolBoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_0075f158(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x12) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined1 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x13) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined1 *)(param_1 + 0x11),&bStack_21);
  }
  return;
}



/* Entry: 0075f1d4; end: 0075f253; -[GPBBoolBoolDictionary computeSerializedSizeAsField:] */

long FUN_0075f1d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 0;
  lVar6 = 0;
  lVar7 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    bVar3 = *(byte *)(param_1 + 0x12 + lVar8);
    lVar1 = lVar7 + 5;
    if (bVar3 == 0) {
      lVar1 = lVar7;
    }
    lVar6 = lVar6 + (ulong)bVar3;
    lVar8 = 1;
    lVar7 = lVar1;
    bVar5 = false;
  } while (bVar9);
  uVar2 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar4 = uVar2 << 3;
  lVar7 = 4;
  if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
    lVar7 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < uVar4) {
    lVar8 = lVar7;
  }
  lVar7 = 2;
  if (0x3fff < uVar4) {
    lVar7 = lVar8;
  }
  lVar8 = 1;
  if (0x7f < uVar4) {
    lVar8 = lVar7;
  }
  return lVar1 + lVar8 * lVar6;
}



/* Entry: 0075f254; end: 0075f303; -[GPBBoolBoolDictionary writeToCodedOutputStream:asField:] */

void FUN_0075f254(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x12 + lVar5) == '\x01') {
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x00794020(param_3,param_2,4);
      func_0x00793c60(param_3,param_2,1,uVar4);
      func_0x00793c60(param_3,param_2,2,*(undefined1 *)(param_1 + 0x10 + lVar5));
    }
    uVar4 = 1;
    lVar5 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 0075f304; end: 0075f35f; -[GPBBoolBoolDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075f304(long param_1,undefined8 param_2,long param_3)

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
      if (*(char *)(param_3 + 0x12 + lVar6) == '\x01') {
        *(undefined1 *)(param_1 + 0x12 + lVar6) = 1;
        *(undefined1 *)(param_1 + 0x10 + lVar6) = *(undefined1 *)(param_3 + 0x10 + lVar6);
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



/* Entry: 0075f360; end: 0075f383; -[GPBBoolBoolDictionary setBool:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075f360(long param_1,undefined8 param_2,undefined1 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + (param_4 & 0xffffffff);
  *(undefined1 *)(lVar1 + 0x10) = param_3;
  *(undefined1 *)(lVar1 + 0x12) = 1;
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



/* Entry: 0075f384; end: 0075f38f; -[GPBBoolBoolDictionary removeBoolForKey:] */

void FUN_0075f384(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x12) = 0;
  return;
}



/* Entry: 0075f390; end: 0075f397; -[GPBBoolBoolDictionary removeAll] */

void FUN_0075f390(long param_1)

{
  *(undefined2 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 0075f398; end: 0075f3a7; -[GPBBoolFloatDictionary init] */

void FUN_0075f398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 0075f3a8; end: 0075f423; -[GPBBoolFloatDictionary initWithFloats:forKeys:count:] */

void FUN_0075f3a8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4888;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined4 *)((long)puVar3 + (ulong)bVar1 * 4 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x18) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 0075f424; end: 0075f49b; -[GPBBoolFloatDictionary initWithDictionary:] */

void FUN_0075f424(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x007856a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x18 + lVar2) == '\x01') {
        *(undefined4 *)(param_1 + 0x10 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar2 * 4);
        *(undefined1 *)(param_1 + 0x18 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 0075f49c; end: 0075f4ab; -[GPBBoolFloatDictionary initWithCapacity:] */

void FUN_0075f49c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 0075f4ac; end: 0075f4d7; -[GPBBoolFloatDictionary copyWithZone:] */

void FUN_0075f4ac(void)

{
  func_0x0077ec40(PTR_PTR_00ac3900);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075f4d8; end: 0075f577; -[GPBBoolFloatDictionary isEqual:] */

undefined8 FUN_0075f4d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac3900;
    _objc_opt_class(PTR_PTR_00ac3900);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))) ||
        (*(char *)(param_1 + 0x19) != *(char *)(param_3 + 0x19))) ||
       (((*(char *)(param_1 + 0x18) != '\0' &&
         (*(float *)(param_1 + 0x10) != *(float *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x19) != '\0' &&
         (*(float *)(param_1 + 0x14) != *(float *)(param_3 + 0x14))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075f578; end: 0075f587; -[GPBBoolFloatDictionary hash] */

long FUN_0075f578(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 0075f588; end: 0075f633; -[GPBBoolFloatDictionary description] */

undefined * FUN_0075f588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b0e0);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b100);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075f634; end: 0075f643; -[GPBBoolFloatDictionary count] */

long FUN_0075f634(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 0075f644; end: 0075f66b; -[GPBBoolFloatDictionary getFloat:forKey:] */

void FUN_0075f644(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x18) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x10);
  }
  return;
}



/* Entry: 0075f66c; end: 0075f68b; -[GPBBoolFloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075f66c(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x18) = 1;
  return;
}



/* Entry: 0075f68c; end: 0075f75f; -[GPBBoolFloatDictionary enumerateForTextFormat:] */

void FUN_0075f68c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a4aea0);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0075f748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 0075f760; end: 0075f7db; -[GPBBoolFloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_0075f760(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x18) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(*(undefined4 *)(param_1 + 0x10),param_3,0,&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x19) == '\x01')) {
    (**(code **)(param_3 + 0x10))(*(undefined4 *)(param_1 + 0x14),param_3,1,&bStack_21);
  }
  return;
}



/* Entry: 0075f7dc; end: 0075f853; -[GPBBoolFloatDictionary computeSerializedSizeAsField:] */

long FUN_0075f7dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  
  lVar7 = 0;
  lVar5 = 0;
  lVar6 = 0;
  bVar4 = true;
  do {
    bVar9 = bVar4;
    uVar8 = (ulong)*(byte *)(param_1 + 0x18 + lVar7);
    lVar6 = lVar6 + uVar8 * 8;
    lVar5 = lVar5 + uVar8;
    lVar7 = 1;
    bVar4 = false;
  } while (bVar9);
  uVar2 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar3 = uVar2 << 3;
  lVar7 = 4;
  if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
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
  return lVar6 + lVar1 * lVar5;
}



/* Entry: 0075f854; end: 0075f903; -[GPBBoolFloatDictionary writeToCodedOutputStream:asField:] */

void FUN_0075f854(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x18 + lVar5) == '\x01') {
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x00794020(param_3,param_2,7);
      func_0x00793c60(param_3,param_2,1,uVar4);
      func_0x00793f20(*(undefined4 *)(param_1 + 0x10 + lVar5 * 4),param_3,param_2,2);
    }
    uVar4 = 1;
    lVar5 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 0075f904; end: 0075f95f; -[GPBBoolFloatDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075f904(long param_1,undefined8 param_2,long param_3)

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
      if (*(char *)(param_3 + 0x18 + lVar6) == '\x01') {
        *(undefined1 *)(param_1 + 0x18 + lVar6) = 1;
        *(undefined4 *)(param_1 + 0x10 + lVar6 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar6 * 4);
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



/* Entry: 0075f960; end: 0075f987; -[GPBBoolFloatDictionary setFloat:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075f960(long param_1,undefined8 param_2,ulong param_3)

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
  
  *(uint *)(param_1 + (param_3 & 0xffffffff) * 4 + 0x10) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *(undefined1 *)(param_1 + (param_3 & 0xffffffff) + 0x18) = 1;
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



/* Entry: 0075f988; end: 0075f993; -[GPBBoolFloatDictionary removeFloatForKey:] */

void FUN_0075f988(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x18) = 0;
  return;
}



/* Entry: 0075f994; end: 0075f99b; -[GPBBoolFloatDictionary removeAll] */

void FUN_0075f994(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 0075f99c; end: 0075f9ab; -[GPBBoolDoubleDictionary init] */

void FUN_0075f99c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 0075f9ac; end: 0075fa27; -[GPBBoolDoubleDictionary initWithDoubles:forKeys:count:] */

void FUN_0075f9ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4890;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x20) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 0075fa28; end: 0075fa9f; -[GPBBoolDoubleDictionary initWithDictionary:] */

void FUN_0075fa28(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00785400(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar2 * 8);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 0075faa0; end: 0075faaf; -[GPBBoolDoubleDictionary initWithCapacity:] */

void FUN_0075faa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 0075fab0; end: 0075fadb; -[GPBBoolDoubleDictionary copyWithZone:] */

void FUN_0075fab0(void)

{
  func_0x0077ec40(PTR_PTR_00ac3908);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075fadc; end: 0075fb7b; -[GPBBoolDoubleDictionary isEqual:] */

undefined8 FUN_0075fadc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac3908;
    _objc_opt_class(PTR_PTR_00ac3908);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(double *)(param_1 + 0x10) != *(double *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(double *)(param_1 + 0x18) != *(double *)(param_3 + 0x18))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075fb7c; end: 0075fb8b; -[GPBBoolDoubleDictionary hash] */

long FUN_0075fb7c(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 0075fb8c; end: 0075fc2f; -[GPBBoolDoubleDictionary description] */

undefined * FUN_0075fb8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b120);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b140);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075fc30; end: 0075fc3f; -[GPBBoolDoubleDictionary count] */

long FUN_0075fc30(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 0075fc40; end: 0075fc67; -[GPBBoolDoubleDictionary getDouble:forKey:] */

void FUN_0075fc40(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  if ((param_3 != (undefined8 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined8 *)(param_1 + (ulong)param_4 * 8 + 0x10);
  }
  return;
}



/* Entry: 0075fc68; end: 0075fc87; -[GPBBoolDoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075fc68(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 0075fc88; end: 0075fd53; -[GPBBoolDoubleDictionary enumerateForTextFormat:] */

void FUN_0075fc88(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a4aec0);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0075fd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 0075fd54; end: 0075fdcf; -[GPBBoolDoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_0075fd54(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + 0x10),param_3,0,&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_3,1,&bStack_21);
  }
  return;
}



/* Entry: 0075fdd0; end: 0075fe4f; -[GPBBoolDoubleDictionary computeSerializedSizeAsField:] */

long FUN_0075fdd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 0;
  lVar6 = 0;
  lVar7 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    bVar3 = *(byte *)(param_1 + 0x20 + lVar8);
    lVar1 = lVar7 + 0xc;
    if (bVar3 == 0) {
      lVar1 = lVar7;
    }
    lVar6 = lVar6 + (ulong)bVar3;
    lVar8 = 1;
    lVar7 = lVar1;
    bVar5 = false;
  } while (bVar9);
  uVar2 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar4 = uVar2 << 3;
  lVar7 = 4;
  if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
    lVar7 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < uVar4) {
    lVar8 = lVar7;
  }
  lVar7 = 2;
  if (0x3fff < uVar4) {
    lVar7 = lVar8;
  }
  lVar8 = 1;
  if (0x7f < uVar4) {
    lVar8 = lVar7;
  }
  return lVar1 + lVar8 * lVar6;
}



/* Entry: 0075fe50; end: 0075feff; -[GPBBoolDoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_0075fe50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x20 + lVar5) == '\x01') {
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x00794020(param_3,param_2,0xb);
      func_0x00793c60(param_3,param_2,1,uVar4);
      func_0x00793d60(*(undefined8 *)(param_1 + 0x10 + lVar5 * 8),param_3,param_2,2);
    }
    uVar4 = 1;
    lVar5 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 0075ff00; end: 0075ff5b; -[GPBBoolDoubleDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075ff00(long param_1,undefined8 param_2,long param_3)

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
        *(undefined8 *)(param_1 + 0x10 + lVar6 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar6 * 8);
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


