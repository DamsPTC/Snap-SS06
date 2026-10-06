/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00754560; end: 00754623; -[GPBInt64UInt32Dictionary initWithUInt32s:forKeys:count:] */

undefined1 *
FUN_00754560(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00754624; end: 0075466b; -[GPBInt64UInt32Dictionary initWithDictionary:] */

long FUN_00754624(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b60(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075466c; end: 0075467b; -[GPBInt64UInt32Dictionary initWithCapacity:] */

void FUN_0075466c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 0075467c; end: 007546c3; -[GPBInt64UInt32Dictionary dealloc] */

void FUN_0075467c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007546c4; end: 007546ef; -[GPBInt64UInt32Dictionary copyWithZone:] */

void FUN_007546c4(void)

{
  func_0x0077ec40(PTR_PTR_00ac3850);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007546f0; end: 00754753; -[GPBInt64UInt32Dictionary isEqual:] */

undefined8 FUN_007546f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3850;
    _objc_opt_class(PTR_PTR_00ac3850);
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



/* Entry: 00754754; end: 0075475b; -[GPBInt64UInt32Dictionary hash] */

void FUN_00754754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075475c; end: 007547a7; -[GPBInt64UInt32Dictionary description] */

void FUN_0075475c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007547a8; end: 007547af; -[GPBInt64UInt32Dictionary count] */

void FUN_007547a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007547b0; end: 0075484f; -[GPBInt64UInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_007547b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
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
    func_0x00788b40(lVar2);
    func_0x007930e0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00754850; end: 007549c3; -[GPBInt64UInt32Dictionary computeSerializedSizeAsField:] */

void FUN_00754850(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00788b40(lVar1);
      FUN_007478bc();
      func_0x007930e0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007549c4; end: 00754b67; -[GPBInt64UInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_007549c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00788080();
  lVar2 = lVar3;
  func_0x00789980();
  while (lVar2 != 0) {
    func_0x00789f00();
    func_0x00794020(param_3);
    func_0x00788b40(lVar2);
    func_0x007930e0();
    FUN_007478bc(lVar2,1,param_4);
    if (cVar1 == '\x01') {
      func_0x00794020(param_3);
      FUN_00747aac(param_3,lVar2,1,param_4);
      func_0x00793e60(param_3);
    }
    else if (cVar1 == '\v') {
      func_0x00794020(param_3);
      FUN_00747aac(param_3,lVar2,1,param_4);
      func_0x00794440(param_3);
    }
    else {
      func_0x00794020(param_3);
      FUN_00747aac(param_3,lVar2,1,param_4);
    }
    lVar2 = lVar3;
    func_0x00789980();
  }
  return;
}



/* Entry: 00754b68; end: 00754bbb; -[GPBInt64UInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00754b68(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00754bbc; end: 00754c0b; -[GPBInt64UInt32Dictionary enumerateForTextFormat:] */

void FUN_00754bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00754c0c;
  puStack_20 = &UNK_00a205b0;
  uStack_18 = param_3;
  func_0x00782bc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00754c0c; end: 00754c7b;  */

void FUN_00754c0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab80);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00754c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00754c7c; end: 00754cd7; -[GPBInt64UInt32Dictionary getUInt32:forKey:] */

bool FUN_00754c7c(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x007930e0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00754cd8; end: 00754d1b; -[GPBInt64UInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00754cd8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00754d1c; end: 00754d9b; -[GPBInt64UInt32Dictionary setUInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00754d1c(long param_1)

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
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
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



/* Entry: 00754d9c; end: 00754dcb; -[GPBInt64UInt32Dictionary removeUInt32ForKey:] */

void FUN_00754d9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00754dcc; end: 00754dd3; -[GPBInt64UInt32Dictionary removeAll] */

void FUN_00754dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00754dd4; end: 00754de3; -[GPBInt64Int32Dictionary init] */

void FUN_00754dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 00754de4; end: 00754ea7; -[GPBInt64Int32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_00754de4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00754ea8; end: 00754eef; -[GPBInt64Int32Dictionary initWithDictionary:] */

long FUN_00754ea8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785940(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00754ef0; end: 00754eff; -[GPBInt64Int32Dictionary initWithCapacity:] */

void FUN_00754ef0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 00754f00; end: 00754f47; -[GPBInt64Int32Dictionary dealloc] */

void FUN_00754f00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00754f48; end: 00754f73; -[GPBInt64Int32Dictionary copyWithZone:] */

void FUN_00754f48(void)

{
  func_0x0077ec40(PTR_PTR_00ac3858);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00754f74; end: 00754fd7; -[GPBInt64Int32Dictionary isEqual:] */

undefined8 FUN_00754f74(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3858;
    _objc_opt_class(PTR_PTR_00ac3858);
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



/* Entry: 00754fd8; end: 00754fdf; -[GPBInt64Int32Dictionary hash] */

void FUN_00754fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00754fe0; end: 0075502b; -[GPBInt64Int32Dictionary description] */

void FUN_00754fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0075502c; end: 00755033; -[GPBInt64Int32Dictionary count] */

void FUN_0075502c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00755034; end: 007550d3; -[GPBInt64Int32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_00755034(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
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
    func_0x00788b40(lVar2);
    func_0x007871a0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 007550d4; end: 007551ff; -[GPBInt64Int32Dictionary computeSerializedSizeAsField:] */

void FUN_007550d4(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00789f00(lVar4);
      func_0x00788b40(lVar1);
      FUN_007478bc();
      func_0x007871a0(lVar3);
      FUN_0074670c();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00755200; end: 0075531f; -[GPBInt64Int32Dictionary writeToCodedOutputStream:asField:] */

void FUN_00755200(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar4 = lVar5;
    func_0x00789f00(lVar5);
    func_0x00794020(param_3);
    func_0x00788b40(lVar3);
    func_0x007871a0(lVar4);
    FUN_007478bc(lVar3,1,param_4);
    FUN_0074670c(lVar4,2,uVar1);
    func_0x00794020(param_3);
    FUN_00747aac(param_3,lVar3,1,param_4);
    FUN_007468ec(param_3,lVar4,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 00755320; end: 00755373; -[GPBInt64Int32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00755320(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00755374; end: 007553c3; -[GPBInt64Int32Dictionary enumerateForTextFormat:] */

void FUN_00755374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007553c4;
  puStack_20 = &UNK_00a205e0;
  uStack_18 = param_3;
  func_0x00782b20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007553c4; end: 00755433;  */

void FUN_007553c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab80);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00755430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00755434; end: 0075548f; -[GPBInt64Int32Dictionary getInt32:forKey:] */

bool FUN_00755434(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x007871a0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00755490; end: 007554d3; -[GPBInt64Int32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00755490(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 007554d4; end: 00755553; -[GPBInt64Int32Dictionary setInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007554d4(long param_1)

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
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
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



/* Entry: 00755554; end: 00755583; -[GPBInt64Int32Dictionary removeInt32ForKey:] */

void FUN_00755554(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00755584; end: 0075558b; -[GPBInt64Int32Dictionary removeAll] */

void FUN_00755584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075558c; end: 0075559b; -[GPBInt64UInt64Dictionary init] */

void FUN_0075558c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 0075559c; end: 0075565f; -[GPBInt64UInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_0075559c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00755660; end: 007556a7; -[GPBInt64UInt64Dictionary initWithDictionary:] */

long FUN_00755660(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b80(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 007556a8; end: 007556b7; -[GPBInt64UInt64Dictionary initWithCapacity:] */

void FUN_007556a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 007556b8; end: 007556ff; -[GPBInt64UInt64Dictionary dealloc] */

void FUN_007556b8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00755700; end: 0075572b; -[GPBInt64UInt64Dictionary copyWithZone:] */

void FUN_00755700(void)

{
  func_0x0077ec40(PTR_PTR_00ac3860);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0075572c; end: 0075578f; -[GPBInt64UInt64Dictionary isEqual:] */

undefined8 FUN_0075572c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3860;
    _objc_opt_class(PTR_PTR_00ac3860);
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



/* Entry: 00755790; end: 00755797; -[GPBInt64UInt64Dictionary hash] */

void FUN_00755790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00755798; end: 007557e3; -[GPBInt64UInt64Dictionary description] */

void FUN_00755798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007557e4; end: 007557eb; -[GPBInt64UInt64Dictionary count] */

void FUN_007557e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007557ec; end: 0075588b; -[GPBInt64UInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_007557ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
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
    func_0x00788b40(lVar2);
    func_0x00793120(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0075588c; end: 007559d3; -[GPBInt64UInt64Dictionary computeSerializedSizeAsField:] */

void FUN_0075588c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00780e80();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00788e40(param_3);
    lVar3 = lVar5;
    func_0x00788080();
    lVar2 = lVar3;
    func_0x00789980();
    while (lVar2 != 0) {
      lVar4 = lVar5;
      func_0x00789f00(lVar5);
      func_0x00788b40(lVar2);
      FUN_007478bc();
      func_0x00793120(lVar4);
      if ((cVar1 != '\x04') && (cVar1 == '\f')) {
        func_0x00742934();
      }
      lVar2 = lVar3;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007559d4; end: 00755b53; -[GPBInt64UInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_007559d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  cVar1 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar4 = lVar5;
    func_0x00789f00(lVar5);
    func_0x00794020(param_3);
    func_0x00788b40(lVar3);
    func_0x00793120(lVar4);
    FUN_007478bc(lVar3,1,param_4);
    if (cVar1 == '\x04') {
      func_0x00794020(param_3);
      FUN_00747aac(param_3,lVar3,1,param_4);
      func_0x00793ec0(param_3);
    }
    else if (cVar1 == '\f') {
      func_0x00742934(lVar4);
      func_0x00794020(param_3);
      FUN_00747aac(param_3,lVar3,1,param_4);
      func_0x007944a0(param_3);
    }
    else {
      func_0x00794020(param_3);
      FUN_00747aac(param_3,lVar3,1,param_4);
    }
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 00755b54; end: 00755ba7; -[GPBInt64UInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00755b54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00755ba8; end: 00755bf7; -[GPBInt64UInt64Dictionary enumerateForTextFormat:] */

void FUN_00755ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00755bf8;
  puStack_20 = &UNK_00a20610;
  uStack_18 = param_3;
  func_0x00782be0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00755bf8; end: 00755c67;  */

void FUN_00755bf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab80);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00755c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00755c68; end: 00755cc3; -[GPBInt64UInt64Dictionary getUInt64:forKey:] */

bool FUN_00755c68(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00793120();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00755cc4; end: 00755d07; -[GPBInt64UInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00755cc4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00755d08; end: 00755d87; -[GPBInt64UInt64Dictionary setUInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00755d08(long param_1)

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
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
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



/* Entry: 00755d88; end: 00755db7; -[GPBInt64UInt64Dictionary removeUInt64ForKey:] */

void FUN_00755d88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00755db8; end: 00755dbf; -[GPBInt64UInt64Dictionary removeAll] */

void FUN_00755db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00755dc0; end: 00755dcf; -[GPBInt64Int64Dictionary init] */

void FUN_00755dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 00755dd0; end: 00755e93; -[GPBInt64Int64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_00755dd0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00755e94; end: 00755edb; -[GPBInt64Int64Dictionary initWithDictionary:] */

long FUN_00755e94(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785960(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00755edc; end: 00755eeb; -[GPBInt64Int64Dictionary initWithCapacity:] */

void FUN_00755edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 00755eec; end: 00755f33; -[GPBInt64Int64Dictionary dealloc] */

void FUN_00755eec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00755f34; end: 00755f5f; -[GPBInt64Int64Dictionary copyWithZone:] */

void FUN_00755f34(void)

{
  func_0x0077ec40(PTR_PTR_00ac3868);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00755f60; end: 00755fc3; -[GPBInt64Int64Dictionary isEqual:] */

undefined8 FUN_00755f60(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3868;
    _objc_opt_class(PTR_PTR_00ac3868);
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



/* Entry: 00755fc4; end: 00755fcb; -[GPBInt64Int64Dictionary hash] */

void FUN_00755fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00755fcc; end: 00756017; -[GPBInt64Int64Dictionary description] */

void FUN_00755fcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00756018; end: 0075601f; -[GPBInt64Int64Dictionary count] */

void FUN_00756018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00756020; end: 007560bf; -[GPBInt64Int64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_00756020(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
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
    func_0x00788b40(lVar2);
    func_0x00788b40(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 007560c0; end: 007561eb; -[GPBInt64Int64Dictionary computeSerializedSizeAsField:] */

void FUN_007560c0(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00789f00(lVar4);
      func_0x00788b40(lVar1);
      FUN_007478bc();
      func_0x00788b40(lVar3);
      FUN_007478bc();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007561ec; end: 0075630b; -[GPBInt64Int64Dictionary writeToCodedOutputStream:asField:] */

void FUN_007561ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40(param_4);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar4 = lVar5;
    func_0x00789f00(lVar5);
    func_0x00794020(param_3);
    func_0x00788b40(lVar3);
    func_0x00788b40(lVar4);
    FUN_007478bc(lVar3,1,param_4);
    FUN_007478bc(lVar4,2,uVar1);
    func_0x00794020(param_3);
    FUN_00747aac(param_3,lVar3,1,param_4);
    FUN_00747aac(param_3,lVar4,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 0075630c; end: 0075635f; -[GPBInt64Int64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075630c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00756360; end: 007563af; -[GPBInt64Int64Dictionary enumerateForTextFormat:] */

void FUN_00756360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007563b0;
  puStack_20 = &UNK_00a20640;
  uStack_18 = param_3;
  func_0x00782b40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007563b0; end: 00756427;  */

void FUN_007563b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab80);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00756424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00756428; end: 00756483; -[GPBInt64Int64Dictionary getInt64:forKey:] */

bool FUN_00756428(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00788b40();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00756484; end: 007564c7; -[GPBInt64Int64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00756484(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 007564c8; end: 00756547; -[GPBInt64Int64Dictionary setInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007564c8(long param_1)

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
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
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



/* Entry: 00756548; end: 00756577; -[GPBInt64Int64Dictionary removeInt64ForKey:] */

void FUN_00756548(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00756578; end: 0075657f; -[GPBInt64Int64Dictionary removeAll] */

void FUN_00756578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00756580; end: 0075658f; -[GPBInt64BoolDictionary init] */

void FUN_00756580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 00756590; end: 00756653; -[GPBInt64BoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_00756590(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00756654; end: 0075669b; -[GPBInt64BoolDictionary initWithDictionary:] */

long FUN_00756654(long param_1,undefined8 param_2,long param_3)

{
  func_0x00784dc0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075669c; end: 007566ab; -[GPBInt64BoolDictionary initWithCapacity:] */

void FUN_0075669c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 007566ac; end: 007566f3; -[GPBInt64BoolDictionary dealloc] */

void FUN_007566ac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007566f4; end: 0075671f; -[GPBInt64BoolDictionary copyWithZone:] */

void FUN_007566f4(void)

{
  func_0x0077ec40(PTR_PTR_00ac3870);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00756720; end: 00756783; -[GPBInt64BoolDictionary isEqual:] */

undefined8 FUN_00756720(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3870;
    _objc_opt_class(PTR_PTR_00ac3870);
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



/* Entry: 00756784; end: 0075678b; -[GPBInt64BoolDictionary hash] */

void FUN_00756784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075678c; end: 007567d7; -[GPBInt64BoolDictionary description] */

void FUN_0075678c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007567d8; end: 007567df; -[GPBInt64BoolDictionary count] */

void FUN_007567d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007567e0; end: 0075687f; -[GPBInt64BoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_007567e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
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
    func_0x00788b40(lVar2);
    func_0x0077fbc0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00756880; end: 0075698f; -[GPBInt64BoolDictionary computeSerializedSizeAsField:] */

void FUN_00756880(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00789f00(lVar4);
      func_0x00788b40(lVar1);
      FUN_007478bc();
      func_0x0077fbc0(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00756990; end: 00756a87; -[GPBInt64BoolDictionary writeToCodedOutputStream:asField:] */

void FUN_00756990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00788e40(param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  lVar2 = lVar1;
  func_0x00789980();
  while (lVar2 != 0) {
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00794020(param_3);
    func_0x00788b40(lVar2);
    func_0x0077fbc0(lVar3);
    FUN_007478bc(lVar2,1,param_4);
    func_0x00794020(param_3);
    FUN_00747aac(param_3,lVar2,1,param_4);
    func_0x00793c60(param_3);
    lVar2 = lVar1;
    func_0x00789980();
  }
  return;
}



/* Entry: 00756a88; end: 00756adb; -[GPBInt64BoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00756a88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00756adc; end: 00756b2b; -[GPBInt64BoolDictionary enumerateForTextFormat:] */

void FUN_00756adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00756b2c;
  puStack_20 = &UNK_00a20670;
  uStack_18 = param_3;
  func_0x00782ac0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00756b2c; end: 00756b8f;  */

void FUN_00756b2c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab80);
  ppuVar1 = &PTR____CFConstantStringClassReference_00a21460;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21500;
  }
                    /* WARNING: Could not recover jumptable at 0x00756b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2,ppuVar1);
  return;
}



/* Entry: 00756b90; end: 00756beb; -[GPBInt64BoolDictionary getBool:forKey:] */

bool FUN_00756b90(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined1 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x0077fbc0();
    *param_3 = (char)lVar2;
  }
  return lVar3 != 0;
}


