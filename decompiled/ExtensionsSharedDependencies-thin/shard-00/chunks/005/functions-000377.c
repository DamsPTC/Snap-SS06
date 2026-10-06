/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0075b894; end: 0075b89b; -[GPBStringBoolDictionary removeAll] */

void FUN_0075b894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075b89c; end: 0075b8ab; -[GPBStringFloatDictionary init] */

void FUN_0075b89c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 0075b8ac; end: 0075b997; -[GPBStringFloatDictionary initWithFloats:forKeys:count:] */

undefined1 *
FUN_0075b8ac(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4848;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != (undefined4 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c40(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_4 = param_4 + 1;
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075b998; end: 0075b9df; -[GPBStringFloatDictionary initWithDictionary:] */

long FUN_0075b998(long param_1,undefined8 param_2,long param_3)

{
  func_0x007856a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075b9e0; end: 0075b9ef; -[GPBStringFloatDictionary initWithCapacity:] */

void FUN_0075b9e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 0075b9f0; end: 0075ba37; -[GPBStringFloatDictionary dealloc] */

void FUN_0075b9f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075ba38; end: 0075ba63; -[GPBStringFloatDictionary copyWithZone:] */

void FUN_0075ba38(void)

{
  func_0x0077ec40(PTR_PTR_00ac38c0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075ba64; end: 0075bac7; -[GPBStringFloatDictionary isEqual:] */

undefined8 FUN_0075ba64(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38c0;
    _objc_opt_class(PTR_PTR_00ac38c0);
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



/* Entry: 0075bac8; end: 0075bacf; -[GPBStringFloatDictionary hash] */

void FUN_0075bac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075bad0; end: 0075bb1b; -[GPBStringFloatDictionary description] */

void FUN_0075bad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075bb1c; end: 0075bb23; -[GPBStringFloatDictionary count] */

void FUN_0075bb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075bb24; end: 0075bba3; -[GPBStringFloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_0075bb24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    func_0x00789f00(lVar3);
    func_0x00783840();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 0075bba4; end: 0075bd1b; -[GPBStringFloatDictionary computeSerializedSizeAsField:] */

void FUN_0075bba4(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00783840(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0075bd1c; end: 0075be43; -[GPBStringFloatDictionary writeToCodedOutputStream:asField:] */

void FUN_0075bd1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00788e40(param_5);
  iVar3 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar5 = uVar8;
  func_0x00788080();
  uVar6 = uVar5;
  func_0x00789980();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar8;
      func_0x00789f00(uVar8,param_3,uVar6);
      func_0x00794020(param_4,param_3,iVar3 << 3 | 2);
      func_0x00783840(uVar7);
      uVar7 = uVar6;
      func_0x00788320(uVar6,param_3,4);
      iVar1 = 4;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        iVar1 = 5;
      }
      uVar4 = (uint)uVar7;
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
      func_0x00794020(param_4,param_3,uVar4 + iVar2 + 6);
      func_0x00794320(param_4,param_3,1,uVar6);
      func_0x00793f20(param_1,param_4,param_3,2);
      uVar6 = uVar5;
      func_0x00789980();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 0075be44; end: 0075be7f; -[GPBStringFloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075be44(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c40(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 0075be80; end: 0075becf; -[GPBStringFloatDictionary enumerateForTextFormat:] */

void FUN_0075be80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0075bed0;
  puStack_20 = &UNK_00a20820;
  uStack_18 = param_3;
  func_0x00782b00(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0075bed0; end: 0075bf2b;  */

void FUN_0075bed0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4aea0);
                    /* WARNING: Could not recover jumptable at 0x0075bf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 0075bf2c; end: 0075bf73; -[GPBStringFloatDictionary getFloat:forKey:] */

bool FUN_0075bf2c(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00789ea0(lVar1,param_3,param_5);
  if ((param_4 != (undefined4 *)0x0) && (lVar1 != 0)) {
    func_0x00783840(lVar1);
    *param_4 = param_1;
  }
  return lVar1 != 0;
}



/* Entry: 0075bf74; end: 0075bfb7; -[GPBStringFloatDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075bf74(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0075bfb8; end: 0075c053; -[GPBStringFloatDictionary setFloat:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075bfb8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_3,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00789c40(param_1,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar2 + 8);
  lVar2 = lVar7;
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
          if (lVar4 == param_2) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_2 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
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



/* Entry: 0075c054; end: 0075c05b; -[GPBStringFloatDictionary removeFloatForKey:] */

void FUN_0075c054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0075c05c; end: 0075c063; -[GPBStringFloatDictionary removeAll] */

void FUN_0075c05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075c064; end: 0075c073; -[GPBStringDoubleDictionary init] */

void FUN_0075c064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 0075c074; end: 0075c15f; -[GPBStringDoubleDictionary initWithDoubles:forKeys:count:] */

undefined1 *
FUN_0075c074(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4850;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c20(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_4 = param_4 + 1;
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075c160; end: 0075c1a7; -[GPBStringDoubleDictionary initWithDictionary:] */

long FUN_0075c160(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785400(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075c1a8; end: 0075c1b7; -[GPBStringDoubleDictionary initWithCapacity:] */

void FUN_0075c1a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 0075c1b8; end: 0075c1ff; -[GPBStringDoubleDictionary dealloc] */

void FUN_0075c1b8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4850;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075c200; end: 0075c22b; -[GPBStringDoubleDictionary copyWithZone:] */

void FUN_0075c200(void)

{
  func_0x0077ec40(PTR_PTR_00ac38c8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075c22c; end: 0075c28f; -[GPBStringDoubleDictionary isEqual:] */

undefined8 FUN_0075c22c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38c8;
    _objc_opt_class(PTR_PTR_00ac38c8);
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



/* Entry: 0075c290; end: 0075c297; -[GPBStringDoubleDictionary hash] */

void FUN_0075c290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075c298; end: 0075c2e3; -[GPBStringDoubleDictionary description] */

void FUN_0075c298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075c2e4; end: 0075c2eb; -[GPBStringDoubleDictionary count] */

void FUN_0075c2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075c2ec; end: 0075c36b; -[GPBStringDoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_0075c2ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    func_0x00789f00(lVar3);
    func_0x00782440();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 0075c36c; end: 0075c4e3; -[GPBStringDoubleDictionary computeSerializedSizeAsField:] */

void FUN_0075c36c(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00782440(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0075c4e4; end: 0075c60b; -[GPBStringDoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_0075c4e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00788e40(param_5);
  iVar3 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar5 = uVar8;
  func_0x00788080();
  uVar6 = uVar5;
  func_0x00789980();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar8;
      func_0x00789f00(uVar8,param_3,uVar6);
      func_0x00794020(param_4,param_3,iVar3 << 3 | 2);
      func_0x00782440(uVar7);
      uVar7 = uVar6;
      func_0x00788320(uVar6,param_3,4);
      iVar1 = 4;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        iVar1 = 5;
      }
      uVar4 = (uint)uVar7;
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
      func_0x00794020(param_4,param_3,uVar4 + iVar2 + 10);
      func_0x00794320(param_4,param_3,1,uVar6);
      func_0x00793d60(param_1,param_4,param_3,2);
      uVar6 = uVar5;
      func_0x00789980();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 0075c60c; end: 0075c647; -[GPBStringDoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075c60c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,puVar1,*param_4);
  return;
}



/* Entry: 0075c648; end: 0075c697; -[GPBStringDoubleDictionary enumerateForTextFormat:] */

void FUN_0075c648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0075c698;
  puStack_20 = &UNK_00a20850;
  uStack_18 = param_3;
  func_0x00782ae0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0075c698; end: 0075c6ef;  */

void FUN_0075c698(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4aec0);
                    /* WARNING: Could not recover jumptable at 0x0075c6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 0075c6f0; end: 0075c737; -[GPBStringDoubleDictionary getDouble:forKey:] */

bool FUN_0075c6f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00789ea0(lVar1,param_3,param_5);
  if ((param_4 != (undefined8 *)0x0) && (lVar1 != 0)) {
    func_0x00782440(lVar1);
    *param_4 = param_1;
  }
  return lVar1 != 0;
}



/* Entry: 0075c738; end: 0075c77b; -[GPBStringDoubleDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075c738(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0075c77c; end: 0075c817; -[GPBStringDoubleDictionary setDouble:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075c77c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_3,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af80);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00789c20(param_1,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar2 + 8);
  lVar2 = lVar7;
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
          if (lVar4 == param_2) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_2 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
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



/* Entry: 0075c818; end: 0075c81f; -[GPBStringDoubleDictionary removeDoubleForKey:] */

void FUN_0075c818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0075c820; end: 0075c827; -[GPBStringDoubleDictionary removeAll] */

void FUN_0075c820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075c828; end: 0075c83b; -[GPBStringEnumDictionary init] */

void FUN_0075c828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,0,0,0,0);
  return;
}



/* Entry: 0075c83c; end: 0075c84b; -[GPBStringEnumDictionary initWithValidationFunction:] */

void FUN_0075c83c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 0075c84c; end: 0075c94b; -[GPBStringEnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

undefined1 *
FUN_0075c84c(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,long *param_5,
            long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4858;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    pcVar1 = FUN_007496d4;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    *(code **)((long)puVar2 + 0x18) = pcVar1;
    if ((param_5 != (long *)0x0) && (param_4 != 0)) {
      for (; param_6 != 0; param_6 = param_6 + -1) {
        if (*param_5 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
        func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        param_5 = param_5 + 1;
        func_0x0078f4a0(uVar4);
      }
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 0075c94c; end: 0075c9a7; -[GPBStringEnumDictionary initWithDictionary:] */

long FUN_0075c94c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00793560(param_3);
  func_0x00786f60(param_1,param_2,lVar1,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075c9a8; end: 0075c9b7; -[GPBStringEnumDictionary initWithValidationFunction:capacity:] */

void FUN_0075c9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 0075c9b8; end: 0075c9ff; -[GPBStringEnumDictionary dealloc] */

void FUN_0075c9b8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4858;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075ca00; end: 0075ca2b; -[GPBStringEnumDictionary copyWithZone:] */

void FUN_0075ca00(void)

{
  func_0x0077ec40(PTR_PTR_00ac38d0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075ca2c; end: 0075ca8f; -[GPBStringEnumDictionary isEqual:] */

undefined8 FUN_0075ca2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac38d0;
    _objc_opt_class(PTR_PTR_00ac38d0);
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



/* Entry: 0075ca90; end: 0075ca97; -[GPBStringEnumDictionary hash] */

void FUN_0075ca90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075ca98; end: 0075cae3; -[GPBStringEnumDictionary description] */

void FUN_0075ca98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075cae4; end: 0075caeb; -[GPBStringEnumDictionary count] */

void FUN_0075cae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075caec; end: 0075cb6f; -[GPBStringEnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_0075caec(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0075cb70; end: 0075cd1b; -[GPBStringEnumDictionary computeSerializedSizeAsField:] */

void FUN_0075cb70(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x007871a0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0075cd1c; end: 0075ce73; -[GPBStringEnumDictionary writeToCodedOutputStream:asField:] */

void FUN_0075cd1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  func_0x00788e40(param_4);
  iVar4 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar10;
  func_0x00788080();
  uVar7 = uVar6;
  func_0x00789980();
  if (uVar7 != 0) {
    do {
      uVar8 = uVar10;
      func_0x00789f00(uVar10,param_2,uVar7);
      func_0x00794020(param_3,param_2,iVar4 << 3 | 2);
      func_0x007871a0();
      uVar9 = uVar7;
      func_0x00788320(uVar7,param_2,4);
      iVar3 = 4;
      if ((uVar9 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar5 = (uint)uVar9;
      iVar1 = 3;
      if (0x1fffff < uVar5) {
        iVar1 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar5) {
        iVar3 = iVar1;
      }
      iVar1 = 1;
      if (0x7f < uVar5) {
        iVar1 = iVar3;
      }
      iVar3 = 5;
      if ((uVar8 >> 0x1c & 0xf) != 0) {
        iVar3 = 6;
      }
      uVar11 = (uint)uVar8;
      iVar2 = 4;
      if (0x1fffff < uVar11) {
        iVar2 = iVar3;
      }
      iVar3 = 3;
      if (0x3fff < uVar11) {
        iVar3 = iVar2;
      }
      iVar2 = 2;
      if (0x7f < uVar11) {
        iVar2 = iVar3;
      }
      iVar3 = 0xb;
      if ((uVar8 & 0x80000000) == 0) {
        iVar3 = iVar2;
      }
      func_0x00794020(param_3,param_2,uVar5 + iVar1 + 1 + iVar3);
      func_0x00794320(param_3,param_2,1,uVar7);
      func_0x00793dc0(param_3,param_2,2,uVar8);
      uVar7 = uVar6;
      func_0x00789980();
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 0075ce74; end: 0075cf7f; -[GPBStringEnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined * FUN_0075ce74(undefined8 param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar5 = *param_4;
  func_0x00788320(uVar5,param_2,4);
  lVar1 = 4;
  if ((uVar5 >> 0x1c & 0xf) != 0) {
    lVar1 = 5;
  }
  uVar4 = (uint)uVar5;
  lVar2 = 3;
  if (0x1fffff < uVar4) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar4) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar4) {
    lVar2 = lVar1;
  }
  lVar1 = 5;
  if ((param_3 >> 0x1c & 0xf) != 0) {
    lVar1 = 6;
  }
  uVar4 = (uint)param_3;
  lVar3 = 4;
  if (0x1fffff < uVar4) {
    lVar3 = lVar1;
  }
  lVar1 = 3;
  if (0x3fff < uVar4) {
    lVar1 = lVar3;
  }
  lVar3 = 2;
  if (0x7f < uVar4) {
    lVar3 = lVar1;
  }
  lVar1 = 0xb;
  if ((param_3 & 0x80000000) == 0) {
    lVar1 = lVar3;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,uVar5 + lVar2 + lVar1 + 1);
  puVar7 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x007851c0();
  func_0x00794320();
  func_0x00793dc0(puVar7,param_2,2,param_3);
  func_0x00783860(puVar7);
  _objc_release(puVar7);
  return puVar6;
}



/* Entry: 0075cf80; end: 0075cfbb; -[GPBStringEnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075cf80(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

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



/* Entry: 0075cfbc; end: 0075d00b; -[GPBStringEnumDictionary enumerateForTextFormat:] */

void FUN_0075cfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0075d00c;
  puStack_20 = &UNK_00a20760;
  uStack_18 = param_3;
  func_0x00782ba0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0075d00c; end: 0075d047;  */

void FUN_0075d00c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0075d044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 0075d048; end: 0075d0b7; -[GPBStringEnumDictionary getEnum:forKey:] */

bool FUN_0075d048(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar3,param_2,param_4);
  if ((param_3 != (int *)0x0) && (lVar3 != 0)) {
    lVar4 = lVar3;
    func_0x007871a0();
    iVar2 = (int)lVar4;
    (**(code **)(param_1 + 0x18))();
    iVar1 = (int)lVar4;
    if (iVar2 == 0) {
      iVar1 = -0x4524111;
    }
    *param_3 = iVar1;
  }
  return lVar3 != 0;
}



/* Entry: 0075d0b8; end: 0075d0ff; -[GPBStringEnumDictionary getRawValue:forKey:] */

bool FUN_0075d0b8(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

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



/* Entry: 0075d100; end: 0075d1a7; -[GPBStringEnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_0075d100(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char cStack_51;
  
  cStack_51 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  pcVar1 = *(code **)(param_1 + 0x18);
  func_0x00788080();
  do {
    lVar5 = lVar4;
    func_0x00789980();
    if (lVar5 == 0) {
      return;
    }
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00789f00();
    func_0x007871a0();
    iVar3 = iVar2;
    (*pcVar1)();
    if (iVar3 == 0) {
      iVar2 = -0x4524111;
    }
    (**(code **)(param_3 + 0x10))(param_3,lVar5,iVar2,&cStack_51);
  } while (cStack_51 != '\x01');
  return;
}



/* Entry: 0075d1a8; end: 0075d1eb; -[GPBStringEnumDictionary addRawEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075d1a8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0075d1ec; end: 0075d27b; -[GPBStringEnumDictionary setRawValue:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075d1ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 0075d27c; end: 0075d283; -[GPBStringEnumDictionary removeEnumForKey:] */

void FUN_0075d27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 0075d284; end: 0075d28b; -[GPBStringEnumDictionary removeAll] */

void FUN_0075d284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075d28c; end: 0075d35b; -[GPBStringEnumDictionary setEnum:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075d28c(long param_1,undefined8 param_2,ulong param_3,long param_4)

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
  (**(code **)(param_1 + 0x18))();
  if ((param_3 & 1) == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
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



/* Entry: 0075d35c; end: 0075d363; -[GPBStringEnumDictionary validationFunc] */

undefined8 FUN_0075d35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0075d364; end: 0075d373; -[GPBBoolUInt32Dictionary init] */

void FUN_0075d364(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 0075d374; end: 0075d3ef; -[GPBBoolUInt32Dictionary initWithUInt32s:forKeys:count:] */

void FUN_0075d374(undefined8 param_1,undefined8 param_2,undefined4 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4860;
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



/* Entry: 0075d3f0; end: 0075d467; -[GPBBoolUInt32Dictionary initWithDictionary:] */

void FUN_0075d3f0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00786b60(param_1,param_2,0,0,0);
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



/* Entry: 0075d468; end: 0075d477; -[GPBBoolUInt32Dictionary initWithCapacity:] */

void FUN_0075d468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 0075d478; end: 0075d4a3; -[GPBBoolUInt32Dictionary copyWithZone:] */

void FUN_0075d478(void)

{
  func_0x0077ec40(PTR_PTR_00ac38d8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075d4a4; end: 0075d543; -[GPBBoolUInt32Dictionary isEqual:] */

undefined8 FUN_0075d4a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac38d8;
    _objc_opt_class(PTR_PTR_00ac38d8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))) ||
        (*(char *)(param_1 + 0x19) != *(char *)(param_3 + 0x19))) ||
       (((*(char *)(param_1 + 0x18) != '\0' &&
         (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x19) != '\0' &&
         (*(int *)(param_1 + 0x14) != *(int *)(param_3 + 0x14))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075d544; end: 0075d553; -[GPBBoolUInt32Dictionary hash] */

long FUN_0075d544(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 0075d554; end: 0075d5f7; -[GPBBoolUInt32Dictionary description] */

undefined * FUN_0075d554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afe0);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b000);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075d5f8; end: 0075d607; -[GPBBoolUInt32Dictionary count] */

long FUN_0075d5f8(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 0075d608; end: 0075d62f; -[GPBBoolUInt32Dictionary getUInt32:forKey:] */

void FUN_0075d608(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x18) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x10);
  }
  return;
}



/* Entry: 0075d630; end: 0075d64f; -[GPBBoolUInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075d630(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x18) = 1;
  return;
}



/* Entry: 0075d650; end: 0075d70b; -[GPBBoolUInt32Dictionary enumerateForTextFormat:] */

void FUN_0075d650(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a4ab40);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21500,puVar1);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0075d6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_00a21460,puVar1);
    return;
  }
  return;
}



/* Entry: 0075d70c; end: 0075d787; -[GPBBoolUInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_0075d70c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0075d788; end: 0075d87b; -[GPBBoolUInt32Dictionary computeSerializedSizeAsField:] */

long FUN_0075d788(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = 0;
  lVar6 = 0;
  lVar7 = 0;
  cVar2 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
  bVar4 = true;
  do {
    bVar5 = bVar4;
    if (*(char *)(param_1 + 0x18 + lVar9) == '\x01') {
      if (cVar2 == '\x01') {
        lVar9 = 7;
      }
      else if (cVar2 == '\v') {
        uVar1 = *(uint *)(param_1 + 0x10 + lVar9 * 4);
        if (uVar1 < 0x80) {
          lVar9 = 4;
        }
        else if (uVar1 < 0x4000) {
          lVar9 = 5;
        }
        else {
          lVar8 = 7;
          if (uVar1 >> 0x1c != 0) {
            lVar8 = 8;
          }
          lVar9 = 6;
          if (0x1fffff < uVar1) {
            lVar9 = lVar8;
          }
        }
      }
      else {
        lVar9 = 2;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + lVar9 + 1;
    }
    lVar9 = 1;
    bVar4 = false;
  } while (bVar5);
  uVar1 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar8 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar8 = 2;
  }
  else {
    lVar9 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar9 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar9;
    }
  }
  return lVar7 + lVar8 * lVar6;
}



/* Entry: 0075d87c; end: 0075d9d3; -[GPBBoolUInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_0075d87c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  
  uVar9 = 0;
  lVar10 = 0;
  cVar4 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar1 = param_1 + 0x10;
  bVar5 = true;
  do {
    bVar7 = bVar5;
    if (*(char *)(param_1 + 0x18 + lVar10) == '\x01') {
      func_0x00794020(param_3,param_2,iVar2 << 3 | 2);
      if (cVar4 == '\x01') {
        func_0x00794020(param_3,param_2,7);
        func_0x00793c60(param_3,param_2,1,uVar9);
        func_0x00793e60(param_3,param_2,2,*(undefined4 *)(lVar1 + lVar10 * 4));
      }
      else if (cVar4 == '\v') {
        uVar3 = *(uint *)(lVar1 + lVar10 * 4);
        if (uVar3 < 0x80) {
          uVar6 = 4;
        }
        else if (uVar3 < 0x4000) {
          uVar6 = 5;
        }
        else {
          uVar8 = 7;
          if (uVar3 >> 0x1c != 0) {
            uVar8 = 8;
          }
          uVar6 = 6;
          if (0x1fffff < uVar3) {
            uVar6 = uVar8;
          }
        }
        func_0x00794020(param_3,param_2,uVar6);
        func_0x00793c60(param_3,param_2,1,uVar9);
        func_0x00794440(param_3,param_2,2,*(undefined4 *)(lVar1 + lVar10 * 4));
      }
      else {
        func_0x00794020(param_3,param_2,2);
        func_0x00793c60(param_3,param_2,1,uVar9);
      }
    }
    uVar9 = 1;
    lVar10 = 1;
    bVar5 = false;
  } while (bVar7);
  return;
}



/* Entry: 0075d9d4; end: 0075da2f; -[GPBBoolUInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075d9d4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0075da30; end: 0075da57; -[GPBBoolUInt32Dictionary setUInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075da30(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

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



/* Entry: 0075da58; end: 0075da63; -[GPBBoolUInt32Dictionary removeUInt32ForKey:] */

void FUN_0075da58(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x18) = 0;
  return;
}



/* Entry: 0075da64; end: 0075da6b; -[GPBBoolUInt32Dictionary removeAll] */

void FUN_0075da64(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 0075da6c; end: 0075da7b; -[GPBBoolInt32Dictionary init] */

void FUN_0075da6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 0075da7c; end: 0075daf7; -[GPBBoolInt32Dictionary initWithInt32s:forKeys:count:] */

void FUN_0075da7c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4868;
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



/* Entry: 0075daf8; end: 0075db6f; -[GPBBoolInt32Dictionary initWithDictionary:] */

void FUN_0075daf8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00785940(param_1,param_2,0,0,0);
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



/* Entry: 0075db70; end: 0075db7f; -[GPBBoolInt32Dictionary initWithCapacity:] */

void FUN_0075db70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 0075db80; end: 0075dbab; -[GPBBoolInt32Dictionary copyWithZone:] */

void FUN_0075db80(void)

{
  func_0x0077ec40(PTR_PTR_00ac38e0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075dbac; end: 0075dc4b; -[GPBBoolInt32Dictionary isEqual:] */

undefined8 FUN_0075dbac(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_00ac38e0;
    _objc_opt_class(PTR_PTR_00ac38e0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))) ||
        (*(char *)(param_1 + 0x19) != *(char *)(param_3 + 0x19))) ||
       (((*(char *)(param_1 + 0x18) != '\0' &&
         (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x19) != '\0' &&
         (*(int *)(param_1 + 0x14) != *(int *)(param_3 + 0x14))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 0075dc4c; end: 0075dc5b; -[GPBBoolInt32Dictionary hash] */

long FUN_0075dc4c(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 0075dc5c; end: 0075dcff; -[GPBBoolInt32Dictionary description] */

undefined * FUN_0075dc5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4afc0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b020);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4b040);
  }
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ab00);
  return puVar1;
}



/* Entry: 0075dd00; end: 0075dd0f; -[GPBBoolInt32Dictionary count] */

long FUN_0075dd00(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 0075dd10; end: 0075dd37; -[GPBBoolInt32Dictionary getInt32:forKey:] */

void FUN_0075dd10(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x18) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x10);
  }
  return;
}



/* Entry: 0075dd38; end: 0075dd57; -[GPBBoolInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075dd38(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x18) = 1;
  return;
}


