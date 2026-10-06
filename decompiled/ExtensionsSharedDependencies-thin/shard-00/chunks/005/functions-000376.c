/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 007591cc; end: 00759213; -[GPBStringUInt32Dictionary dealloc] */

void FUN_007591cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4820;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00759214; end: 0075923f; -[GPBStringUInt32Dictionary copyWithZone:] */

void FUN_00759214(void)

{
  func_0x0077ec40(PTR_PTR_00ac3898);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00759240; end: 007592a3; -[GPBStringUInt32Dictionary isEqual:] */

undefined8 FUN_00759240(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3898;
    _objc_opt_class(PTR_PTR_00ac3898);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 007592a4; end: 007592ab; -[GPBStringUInt32Dictionary hash] */

void FUN_007592a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007592ac; end: 007592f7; -[GPBStringUInt32Dictionary description] */

void FUN_007592ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007592f8; end: 007592ff; -[GPBStringUInt32Dictionary count] */

void FUN_007592f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00759300; end: 00759383; -[GPBStringUInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_00759300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x007930e0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 00759384; end: 00759543; -[GPBStringUInt32Dictionary computeSerializedSizeAsField:] */

void FUN_00759384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40(param_3);
    lVar2 = lVar3;
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      func_0x00789f00(lVar3,param_2,lVar1);
      func_0x00788320(lVar1,param_2,4);
      func_0x007930e0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00759544; end: 007596f3; -[GPBStringUInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_00759544(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  cVar6 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  iVar5 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar13 = *(ulong *)(param_1 + 0x10);
  uVar8 = uVar13;
  func_0x00788080();
  uVar9 = uVar8;
  func_0x00789980();
  if (uVar9 != 0) {
    do {
      uVar10 = uVar13;
      func_0x00789f00(uVar13,param_2,uVar9);
      func_0x00794020(param_3,param_2,iVar5 << 3 | 2);
      func_0x007930e0();
      uVar11 = uVar9;
      func_0x00788320(uVar9,param_2,4);
      lVar1 = 4;
      if ((uVar11 >> 0x1c & 0xf) != 0) {
        lVar1 = 5;
      }
      uVar7 = (uint)uVar11;
      lVar4 = 3;
      if (0x1fffff < uVar7) {
        lVar4 = lVar1;
      }
      lVar1 = 2;
      if (0x3fff < uVar7) {
        lVar1 = lVar4;
      }
      lVar4 = 1;
      if (0x7f < uVar7) {
        lVar4 = lVar1;
      }
      lVar1 = uVar11 + lVar4 + 1;
      iVar12 = (int)lVar1;
      if (cVar6 == '\x01') {
        func_0x00794020(param_3,param_2,iVar12 + 5);
        func_0x00794320(param_3,param_2,1,uVar9);
        func_0x00793e60(param_3,param_2,2,uVar10);
      }
      else if (cVar6 == '\v') {
        iVar2 = 5;
        if ((uVar10 >> 0x1c & 0xf) != 0) {
          iVar2 = 6;
        }
        uVar7 = (uint)uVar10;
        iVar3 = 4;
        if (0x1fffff < uVar7) {
          iVar3 = iVar2;
        }
        iVar2 = 3;
        if (0x3fff < uVar7) {
          iVar2 = iVar3;
        }
        iVar3 = 2;
        if (0x7f < uVar7) {
          iVar3 = iVar2;
        }
        func_0x00794020(param_3,param_2,iVar3 + iVar12);
        func_0x00794320(param_3,param_2,1,uVar9);
        func_0x00794440(param_3,param_2,2,uVar10);
      }
      else {
        func_0x00794020(param_3,param_2,lVar1);
        func_0x00794320(param_3,param_2,1,uVar9);
      }
      uVar9 = uVar8;
      func_0x00789980();
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 007596f4; end: 0075972f; -[GPBStringUInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_007596f4(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 00759730; end: 0075977f; -[GPBStringUInt32Dictionary enumerateForTextFormat:] */

void FUN_00759730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00759780;
  puStack_20 = &UNK_00a20730;
  uStack_18 = param_3;
  func_0x00782bc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00759780; end: 007597cf;  */

void FUN_00759780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
                    /* WARNING: Could not recover jumptable at 0x007597cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 007597d0; end: 00759817; -[GPBStringUInt32Dictionary getUInt32:forKey:] */

bool FUN_007597d0(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar1,param_2,param_4);
  if ((param_3 != (undefined4 *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x007930e0();
    *param_3 = (int)lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 00759818; end: 0075985b; -[GPBStringUInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00759818(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
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
  }
  return;
}



/* Entry: 0075985c; end: 007598eb; -[GPBStringUInt32Dictionary setUInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075985c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar7);
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
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
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
            lVar9 = lVar1;
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



/* Entry: 007598ec; end: 007598f3; -[GPBStringUInt32Dictionary removeUInt32ForKey:] */

void FUN_007598ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 007598f4; end: 007598fb; -[GPBStringUInt32Dictionary removeAll] */

void FUN_007598f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 007598fc; end: 0075990b; -[GPBStringInt32Dictionary init] */

void FUN_007598fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 0075990c; end: 007599f7; -[GPBStringInt32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_0075990c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4828;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_4 = param_4 + 1;
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007599f8; end: 00759a3f; -[GPBStringInt32Dictionary initWithDictionary:] */

long FUN_007599f8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785940(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00759a40; end: 00759a4f; -[GPBStringInt32Dictionary initWithCapacity:] */

void FUN_00759a40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 00759a50; end: 00759a97; -[GPBStringInt32Dictionary dealloc] */

void FUN_00759a50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4828;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00759a98; end: 00759ac3; -[GPBStringInt32Dictionary copyWithZone:] */

void FUN_00759a98(void)

{
  func_0x0077ec40(PTR_PTR_00ac38a0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00759ac4; end: 00759b27; -[GPBStringInt32Dictionary isEqual:] */

undefined8 FUN_00759ac4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38a0;
    _objc_opt_class(PTR_PTR_00ac38a0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 00759b28; end: 00759b2f; -[GPBStringInt32Dictionary hash] */

void FUN_00759b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00759b30; end: 00759b7b; -[GPBStringInt32Dictionary description] */

void FUN_00759b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00759b7c; end: 00759b83; -[GPBStringInt32Dictionary count] */

void FUN_00759b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00759b84; end: 00759c07; -[GPBStringInt32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_00759b84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x007871a0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 00759c08; end: 00759d93; -[GPBStringInt32Dictionary computeSerializedSizeAsField:] */

void FUN_00759c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40(param_3);
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      func_0x00789f00();
      func_0x00788320();
      func_0x007871a0();
      FUN_0074670c();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00759d94; end: 00759ed3; -[GPBStringInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_00759d94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00794020(param_3);
    func_0x007871a0(lVar3);
    func_0x00788320();
    FUN_0074670c(lVar3,2,uVar1);
    func_0x00794020(param_3);
    func_0x00794320(param_3);
    FUN_007468ec(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 00759ed4; end: 00759f0f; -[GPBStringInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00759ed4(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 00759f10; end: 00759f5f; -[GPBStringInt32Dictionary enumerateForTextFormat:] */

void FUN_00759f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00759f60;
  puStack_20 = &UNK_00a20760;
  uStack_18 = param_3;
  func_0x00782b20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00759f60; end: 00759faf;  */

void FUN_00759f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a3fd80);
                    /* WARNING: Could not recover jumptable at 0x00759fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 00759fb0; end: 00759ff7; -[GPBStringInt32Dictionary getInt32:forKey:] */

bool FUN_00759fb0(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar1,param_2,param_4);
  if ((param_3 != (undefined4 *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x007871a0();
    *param_3 = (int)lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 00759ff8; end: 0075a03b; -[GPBStringInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00759ff8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
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
  }
  return;
}



/* Entry: 0075a03c; end: 0075a0cb; -[GPBStringInt32Dictionary setInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075a03c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar7);
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
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
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
            lVar9 = lVar1;
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



/* Entry: 0075a0cc; end: 0075a0d3; -[GPBStringInt32Dictionary removeInt32ForKey:] */

void FUN_0075a0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0075a0d4; end: 0075a0db; -[GPBStringInt32Dictionary removeAll] */

void FUN_0075a0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075a0dc; end: 0075a0eb; -[GPBStringUInt64Dictionary init] */

void FUN_0075a0dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 0075a0ec; end: 0075a1d7; -[GPBStringUInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_0075a0ec(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4830;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_4 = param_4 + 1;
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075a1d8; end: 0075a21f; -[GPBStringUInt64Dictionary initWithDictionary:] */

long FUN_0075a1d8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b80(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075a220; end: 0075a22f; -[GPBStringUInt64Dictionary initWithCapacity:] */

void FUN_0075a220(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 0075a230; end: 0075a277; -[GPBStringUInt64Dictionary dealloc] */

void FUN_0075a230(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4830;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075a278; end: 0075a2a3; -[GPBStringUInt64Dictionary copyWithZone:] */

void FUN_0075a278(void)

{
  func_0x0077ec40(PTR_PTR_00ac38a8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075a2a4; end: 0075a307; -[GPBStringUInt64Dictionary isEqual:] */

undefined8 FUN_0075a2a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38a8;
    _objc_opt_class(PTR_PTR_00ac38a8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 0075a308; end: 0075a30f; -[GPBStringUInt64Dictionary hash] */

void FUN_0075a308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075a310; end: 0075a35b; -[GPBStringUInt64Dictionary description] */

void FUN_0075a310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075a35c; end: 0075a363; -[GPBStringUInt64Dictionary count] */

void FUN_0075a35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075a364; end: 0075a3e7; -[GPBStringUInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_0075a364(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00793120();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 0075a3e8; end: 0075a59b; -[GPBStringUInt64Dictionary computeSerializedSizeAsField:] */

void FUN_0075a3e8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00780e80();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00788e40(param_3);
    lVar3 = lVar4;
    func_0x00788080();
    lVar2 = lVar3;
    func_0x00789980();
    while (lVar2 != 0) {
      func_0x00789f00(lVar4,param_2,lVar2);
      func_0x00788320(lVar2,param_2,4);
      func_0x00793120();
      if ((cVar1 != '\x04') && (cVar1 == '\f')) {
        func_0x00742934();
      }
      lVar2 = lVar3;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0075a59c; end: 0075a733; -[GPBStringUInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_0075a59c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  
  cVar4 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  iVar3 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar10;
  func_0x00788080();
  uVar7 = uVar6;
  func_0x00789980();
  if (uVar7 != 0) {
    do {
      uVar8 = uVar10;
      func_0x00789f00(uVar10,param_2,uVar7);
      func_0x00794020(param_3,param_2,iVar3 << 3 | 2);
      func_0x00793120(uVar8);
      uVar9 = uVar7;
      func_0x00788320(uVar7,param_2,4);
      lVar1 = 4;
      if ((uVar9 >> 0x1c & 0xf) != 0) {
        lVar1 = 5;
      }
      uVar5 = (uint)uVar9;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar1;
      }
      lVar1 = 2;
      if (0x3fff < uVar5) {
        lVar1 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar1;
      }
      lVar1 = uVar9 + lVar2 + 1;
      iVar11 = (int)lVar1;
      if (cVar4 == '\x04') {
        func_0x00794020(param_3,param_2,iVar11 + 9);
        func_0x00794320(param_3,param_2,1,uVar7);
        func_0x00793ec0(param_3,param_2,2,uVar8);
      }
      else if (cVar4 == '\f') {
        uVar9 = uVar8;
        func_0x00742934(uVar8);
        func_0x00794020(param_3,param_2,iVar11 + (int)uVar9 + 1);
        func_0x00794320(param_3,param_2,1,uVar7);
        func_0x007944a0(param_3,param_2,2,uVar8);
      }
      else {
        func_0x00794020(param_3,param_2,lVar1);
        func_0x00794320(param_3,param_2,1,uVar7);
      }
      uVar7 = uVar6;
      func_0x00789980();
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 0075a734; end: 0075a76f; -[GPBStringUInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075a734(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 0075a770; end: 0075a7bf; -[GPBStringUInt64Dictionary enumerateForTextFormat:] */

void FUN_0075a770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0075a7c0;
  puStack_20 = &UNK_00a20790;
  uStack_18 = param_3;
  func_0x00782be0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0075a7c0; end: 0075a80f;  */

void FUN_0075a7c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a800);
                    /* WARNING: Could not recover jumptable at 0x0075a80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 0075a810; end: 0075a857; -[GPBStringUInt64Dictionary getUInt64:forKey:] */

bool FUN_0075a810(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar1,param_2,param_4);
  if ((param_3 != (long *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00793120();
    *param_3 = lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 0075a858; end: 0075a89b; -[GPBStringUInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075a858(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
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
  }
  return;
}



/* Entry: 0075a89c; end: 0075a92b; -[GPBStringUInt64Dictionary setUInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075a89c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar7);
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
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
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
            lVar9 = lVar1;
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



/* Entry: 0075a92c; end: 0075a933; -[GPBStringUInt64Dictionary removeUInt64ForKey:] */

void FUN_0075a92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0075a934; end: 0075a93b; -[GPBStringUInt64Dictionary removeAll] */

void FUN_0075a934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075a93c; end: 0075a94b; -[GPBStringInt64Dictionary init] */

void FUN_0075a93c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 0075a94c; end: 0075aa37; -[GPBStringInt64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_0075a94c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4838;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_4 = param_4 + 1;
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075aa38; end: 0075aa7f; -[GPBStringInt64Dictionary initWithDictionary:] */

long FUN_0075aa38(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785960(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075aa80; end: 0075aa8f; -[GPBStringInt64Dictionary initWithCapacity:] */

void FUN_0075aa80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 0075aa90; end: 0075aad7; -[GPBStringInt64Dictionary dealloc] */

void FUN_0075aa90(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075aad8; end: 0075ab03; -[GPBStringInt64Dictionary copyWithZone:] */

void FUN_0075aad8(void)

{
  func_0x0077ec40(PTR_PTR_00ac38b0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075ab04; end: 0075ab67; -[GPBStringInt64Dictionary isEqual:] */

undefined8 FUN_0075ab04(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38b0;
    _objc_opt_class(PTR_PTR_00ac38b0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 0075ab68; end: 0075ab6f; -[GPBStringInt64Dictionary hash] */

void FUN_0075ab68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075ab70; end: 0075abbb; -[GPBStringInt64Dictionary description] */

void FUN_0075ab70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075abbc; end: 0075abc3; -[GPBStringInt64Dictionary count] */

void FUN_0075abbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075abc4; end: 0075ac47; -[GPBStringInt64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_0075abc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00788b40();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 0075ac48; end: 0075add3; -[GPBStringInt64Dictionary computeSerializedSizeAsField:] */

void FUN_0075ac48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40(param_3);
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      func_0x00789f00();
      func_0x00788320();
      func_0x00788b40();
      FUN_007478bc();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0075add4; end: 0075af13; -[GPBStringInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_0075add4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00794020(param_3);
    func_0x00788b40(lVar3);
    func_0x00788320();
    FUN_007478bc(lVar3,2,uVar1);
    func_0x00794020(param_3);
    func_0x00794320(param_3);
    FUN_00747aac(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 0075af14; end: 0075af4f; -[GPBStringInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075af14(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 0075af50; end: 0075af9f; -[GPBStringInt64Dictionary enumerateForTextFormat:] */

void FUN_0075af50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0075afa0;
  puStack_20 = &UNK_00a207c0;
  uStack_18 = param_3;
  func_0x00782b40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0075afa0; end: 0075afef;  */

void FUN_0075afa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab80);
                    /* WARNING: Could not recover jumptable at 0x0075afec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 0075aff0; end: 0075b037; -[GPBStringInt64Dictionary getInt64:forKey:] */

bool FUN_0075aff0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar1,param_2,param_4);
  if ((param_3 != (long *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00788b40();
    *param_3 = lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 0075b038; end: 0075b07b; -[GPBStringInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075b038(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
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
  }
  return;
}



/* Entry: 0075b07c; end: 0075b10b; -[GPBStringInt64Dictionary setInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075b07c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar7);
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
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
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
            lVar9 = lVar1;
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



/* Entry: 0075b10c; end: 0075b113; -[GPBStringInt64Dictionary removeInt64ForKey:] */

void FUN_0075b10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0075b114; end: 0075b11b; -[GPBStringInt64Dictionary removeAll] */

void FUN_0075b114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075b11c; end: 0075b12b; -[GPBStringBoolDictionary init] */

void FUN_0075b11c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 0075b12c; end: 0075b217; -[GPBStringBoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_0075b12c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4840;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_4 = param_4 + 1;
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075b218; end: 0075b25f; -[GPBStringBoolDictionary initWithDictionary:] */

long FUN_0075b218(long param_1,undefined8 param_2,long param_3)

{
  func_0x00784dc0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075b260; end: 0075b26f; -[GPBStringBoolDictionary initWithCapacity:] */

void FUN_0075b260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 0075b270; end: 0075b2b7; -[GPBStringBoolDictionary dealloc] */

void FUN_0075b270(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4840;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075b2b8; end: 0075b2e3; -[GPBStringBoolDictionary copyWithZone:] */

void FUN_0075b2b8(void)

{
  func_0x0077ec40(PTR_PTR_00ac38b8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075b2e4; end: 0075b347; -[GPBStringBoolDictionary isEqual:] */

undefined8 FUN_0075b2e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38b8;
    _objc_opt_class(PTR_PTR_00ac38b8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 0075b348; end: 0075b34f; -[GPBStringBoolDictionary hash] */

void FUN_0075b348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075b350; end: 0075b39b; -[GPBStringBoolDictionary description] */

void FUN_0075b350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075b39c; end: 0075b3a3; -[GPBStringBoolDictionary count] */

void FUN_0075b39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075b3a4; end: 0075b427; -[GPBStringBoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_0075b3a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x0077fbc0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 0075b428; end: 0075b59f; -[GPBStringBoolDictionary computeSerializedSizeAsField:] */

void FUN_0075b428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40(param_3);
    lVar2 = lVar4;
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00789f00(lVar4,param_2,lVar1);
      func_0x00788320(lVar1,param_2,4);
      func_0x0077fbc0(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0075b5a0; end: 0075b6bf; -[GPBStringBoolDictionary writeToCodedOutputStream:asField:] */

void FUN_0075b5a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x00788e40(param_4);
  iVar3 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar9 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar9;
  func_0x00788080();
  uVar6 = uVar5;
  func_0x00789980();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar9;
      func_0x00789f00(uVar9,param_2,uVar6);
      func_0x00794020(param_3,param_2,iVar3 << 3 | 2);
      func_0x0077fbc0(uVar7);
      uVar8 = uVar6;
      func_0x00788320(uVar6,param_2,4);
      iVar1 = 4;
      if ((uVar8 >> 0x1c & 0xf) != 0) {
        iVar1 = 5;
      }
      uVar4 = (uint)uVar8;
      iVar2 = 3;
      if (0x1fffff < uVar4) {
        iVar2 = iVar1;
      }
      iVar1 = 2;
      if (0x3fff < uVar4) {
        iVar1 = iVar2;
      }
      iVar2 = 1;
      if (0x7f < uVar4) {
        iVar2 = iVar1;
      }
      func_0x00794020(param_3,param_2,uVar4 + iVar2 + 3);
      func_0x00794320(param_3,param_2,1,uVar6);
      func_0x00793c60(param_3,param_2,2,uVar7);
      uVar6 = uVar5;
      func_0x00789980();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 0075b6c0; end: 0075b6fb; -[GPBStringBoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075b6c0(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 0075b6fc; end: 0075b74b; -[GPBStringBoolDictionary enumerateForTextFormat:] */

void FUN_0075b6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0075b74c;
  puStack_20 = &UNK_00a207f0;
  uStack_18 = param_3;
  func_0x00782ac0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0075b74c; end: 0075b76f;  */

void FUN_0075b74c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a21460;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21500;
  }
                    /* WARNING: Could not recover jumptable at 0x0075b76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,ppuVar1);
  return;
}



/* Entry: 0075b770; end: 0075b7b7; -[GPBStringBoolDictionary getBool:forKey:] */

bool FUN_0075b770(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar1,param_2,param_4);
  if ((param_3 != (undefined1 *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x0077fbc0();
    *param_3 = (char)lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 0075b7b8; end: 0075b7fb; -[GPBStringBoolDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075b7b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
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
  }
  return;
}



/* Entry: 0075b7fc; end: 0075b88b; -[GPBStringBoolDictionary setBool:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075b7fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar7);
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
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
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
            lVar9 = lVar1;
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



/* Entry: 0075b88c; end: 0075b893; -[GPBStringBoolDictionary removeBoolForKey:] */

void FUN_0075b88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}


