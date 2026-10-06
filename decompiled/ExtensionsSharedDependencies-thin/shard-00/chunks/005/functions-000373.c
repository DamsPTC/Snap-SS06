/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00751e2c; end: 00751e7b; -[GPBUInt64BoolDictionary enumerateForTextFormat:] */

void FUN_00751e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00751e7c;
  puStack_20 = &UNK_00a204f0;
  uStack_18 = param_3;
  func_0x00782ac0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00751e7c; end: 00751edf;  */

void FUN_00751e7c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a800);
  ppuVar1 = &PTR____CFConstantStringClassReference_00a21460;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21500;
  }
                    /* WARNING: Could not recover jumptable at 0x00751edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2,ppuVar1);
  return;
}



/* Entry: 00751ee0; end: 00751f3b; -[GPBUInt64BoolDictionary getBool:forKey:] */

bool FUN_00751ee0(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined1 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x0077fbc0();
    *param_3 = (char)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00751f3c; end: 00751f7f; -[GPBUInt64BoolDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00751f3c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00751f80; end: 00751fff; -[GPBUInt64BoolDictionary setBool:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00751f80(long param_1)

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
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 00752000; end: 0075202f; -[GPBUInt64BoolDictionary removeBoolForKey:] */

void FUN_00752000(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00752030; end: 00752037; -[GPBUInt64BoolDictionary removeAll] */

void FUN_00752030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00752038; end: 00752047; -[GPBUInt64FloatDictionary init] */

void FUN_00752038(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 00752048; end: 0075210b; -[GPBUInt64FloatDictionary initWithFloats:forKeys:count:] */

undefined1 *
FUN_00752048(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (undefined4 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c40(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075210c; end: 00752153; -[GPBUInt64FloatDictionary initWithDictionary:] */

long FUN_0075210c(long param_1,undefined8 param_2,long param_3)

{
  func_0x007856a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00752154; end: 00752163; -[GPBUInt64FloatDictionary initWithCapacity:] */

void FUN_00752154(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 00752164; end: 007521ab; -[GPBUInt64FloatDictionary dealloc] */

void FUN_00752164(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007521ac; end: 007521d7; -[GPBUInt64FloatDictionary copyWithZone:] */

void FUN_007521ac(void)

{
  func_0x0077ec40(PTR_PTR_00ac3830);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007521d8; end: 0075223b; -[GPBUInt64FloatDictionary isEqual:] */

undefined8 FUN_007521d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3830;
    _objc_opt_class(PTR_PTR_00ac3830);
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



/* Entry: 0075223c; end: 00752243; -[GPBUInt64FloatDictionary hash] */

void FUN_0075223c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00752244; end: 0075228f; -[GPBUInt64FloatDictionary description] */

void FUN_00752244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00752290; end: 00752297; -[GPBUInt64FloatDictionary count] */

void FUN_00752290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00752298; end: 00752333; -[GPBUInt64FloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_00752298(long param_1,undefined8 param_2,long param_3)

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
    func_0x00793120(lVar2);
    func_0x00783840(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00752334; end: 00752457; -[GPBUInt64FloatDictionary computeSerializedSizeAsField:] */

void FUN_00752334(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40();
    lVar2 = lVar4;
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00789f00(lVar4,param_2,lVar1);
      func_0x00793120(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x00742934();
      }
      func_0x00783840(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00752458; end: 0075258b; -[GPBUInt64FloatDictionary writeToCodedOutputStream:asField:] */

void FUN_00752458(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_5;
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  lVar6 = *(long *)(param_2 + 0x10);
  lVar3 = lVar6;
  func_0x00788080();
  lVar4 = lVar3;
  func_0x00789980();
  if (lVar4 != 0) {
    do {
      lVar5 = lVar6;
      func_0x00789f00(lVar6,param_3,lVar4);
      func_0x00794020(param_4,param_3,iVar1 << 3 | 2);
      func_0x00793120(lVar4);
      func_0x00783840(lVar5);
      if ((int)lVar2 == 4) {
        func_0x00794020(param_4,param_3,0xe);
        func_0x00793ec0(param_4,param_3,1,lVar4);
      }
      else if ((int)lVar2 == 0xc) {
        lVar5 = lVar4;
        func_0x00742934(lVar4);
        func_0x00794020(param_4,param_3,(int)lVar5 + 6);
        func_0x007944a0(param_4,param_3,1,lVar4);
      }
      else {
        func_0x00794020(param_4,param_3,5);
      }
      func_0x00793f20(param_1,param_4,param_3,2);
      lVar4 = lVar3;
      func_0x00789980();
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 0075258c; end: 007525df; -[GPBUInt64FloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075258c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c40(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 007525e0; end: 0075262f; -[GPBUInt64FloatDictionary enumerateForTextFormat:] */

void FUN_007525e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00752630;
  puStack_20 = &UNK_00a20520;
  uStack_18 = param_3;
  func_0x00782b00(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00752630; end: 007526b3;  */

void FUN_00752630(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a800);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x007526b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 007526b4; end: 0075270f; -[GPBUInt64FloatDictionary getFloat:forKey:] */

bool FUN_007526b4(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_5);
  func_0x00789ea0(lVar2,param_3,puVar1);
  if ((param_4 != (undefined4 *)0x0) && (lVar2 != 0)) {
    func_0x00783840(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 00752710; end: 00752753; -[GPBUInt64FloatDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00752710(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00752754; end: 007527d3; -[GPBUInt64FloatDictionary setFloat:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00752754(long param_1)

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
  func_0x00789c40(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 007527d4; end: 00752803; -[GPBUInt64FloatDictionary removeFloatForKey:] */

void FUN_007527d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00752804; end: 0075280b; -[GPBUInt64FloatDictionary removeAll] */

void FUN_00752804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0075280c; end: 0075281b; -[GPBUInt64DoubleDictionary init] */

void FUN_0075280c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 0075281c; end: 007528df; -[GPBUInt64DoubleDictionary initWithDoubles:forKeys:count:] */

undefined1 *
FUN_0075281c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (undefined8 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c20(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007528e0; end: 00752927; -[GPBUInt64DoubleDictionary initWithDictionary:] */

long FUN_007528e0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785400(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00752928; end: 00752937; -[GPBUInt64DoubleDictionary initWithCapacity:] */

void FUN_00752928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 00752938; end: 0075297f; -[GPBUInt64DoubleDictionary dealloc] */

void FUN_00752938(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00752980; end: 007529ab; -[GPBUInt64DoubleDictionary copyWithZone:] */

void FUN_00752980(void)

{
  func_0x0077ec40(PTR_PTR_00ac3838);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007529ac; end: 00752a0f; -[GPBUInt64DoubleDictionary isEqual:] */

undefined8 FUN_007529ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3838;
    _objc_opt_class(PTR_PTR_00ac3838);
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



/* Entry: 00752a10; end: 00752a17; -[GPBUInt64DoubleDictionary hash] */

void FUN_00752a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00752a18; end: 00752a63; -[GPBUInt64DoubleDictionary description] */

void FUN_00752a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00752a64; end: 00752a6b; -[GPBUInt64DoubleDictionary count] */

void FUN_00752a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00752a6c; end: 00752b07; -[GPBUInt64DoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_00752a6c(long param_1,undefined8 param_2,long param_3)

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
    func_0x00793120(lVar2);
    func_0x00782440(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00752b08; end: 00752c2b; -[GPBUInt64DoubleDictionary computeSerializedSizeAsField:] */

void FUN_00752b08(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40();
    lVar2 = lVar4;
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00789f00(lVar4,param_2,lVar1);
      func_0x00793120(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x00742934();
      }
      func_0x00782440(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00752c2c; end: 00752d5f; -[GPBUInt64DoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_00752c2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_5;
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  lVar6 = *(long *)(param_2 + 0x10);
  lVar3 = lVar6;
  func_0x00788080();
  lVar4 = lVar3;
  func_0x00789980();
  if (lVar4 != 0) {
    do {
      lVar5 = lVar6;
      func_0x00789f00(lVar6,param_3,lVar4);
      func_0x00794020(param_4,param_3,iVar1 << 3 | 2);
      func_0x00793120(lVar4);
      func_0x00782440(lVar5);
      if ((int)lVar2 == 4) {
        func_0x00794020(param_4,param_3,0x12);
        func_0x00793ec0(param_4,param_3,1,lVar4);
      }
      else if ((int)lVar2 == 0xc) {
        lVar5 = lVar4;
        func_0x00742934(lVar4);
        func_0x00794020(param_4,param_3,(int)lVar5 + 10);
        func_0x007944a0(param_4,param_3,1,lVar4);
      }
      else {
        func_0x00794020(param_4,param_3,9);
      }
      func_0x00793d60(param_1,param_4,param_3,2);
      lVar4 = lVar3;
      func_0x00789980();
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 00752d60; end: 00752db3; -[GPBUInt64DoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00752d60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00752db4; end: 00752e03; -[GPBUInt64DoubleDictionary enumerateForTextFormat:] */

void FUN_00752db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00752e04;
  puStack_20 = &UNK_00a20550;
  uStack_18 = param_3;
  func_0x00782ae0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00752e04; end: 00752e83;  */

void FUN_00752e04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a800);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00752e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00752e84; end: 00752edf; -[GPBUInt64DoubleDictionary getDouble:forKey:] */

bool FUN_00752e84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_5);
  func_0x00789ea0(lVar2,param_3,puVar1);
  if ((param_4 != (undefined8 *)0x0) && (lVar2 != 0)) {
    func_0x00782440(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 00752ee0; end: 00752f23; -[GPBUInt64DoubleDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00752ee0(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00752f24; end: 00752fa3; -[GPBUInt64DoubleDictionary setDouble:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00752f24(long param_1)

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
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 00752fa4; end: 00752fd3; -[GPBUInt64DoubleDictionary removeDoubleForKey:] */

void FUN_00752fa4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00752fd4; end: 00752fdb; -[GPBUInt64DoubleDictionary removeAll] */

void FUN_00752fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00752fdc; end: 00752fef; -[GPBUInt64EnumDictionary init] */

void FUN_00752fdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,0,0,0,0);
  return;
}



/* Entry: 00752ff0; end: 00752fff; -[GPBUInt64EnumDictionary initWithValidationFunction:] */

void FUN_00752ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 00753000; end: 007530d7; -[GPBUInt64EnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

undefined1 *
FUN_00753000(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,long param_5,
            long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    pcVar1 = FUN_007496d4;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    *(code **)((long)puVar2 + 0x18) = pcVar1;
    if ((param_5 != 0) && (param_4 != 0)) {
      for (; param_6 != 0; param_6 = param_6 + -1) {
        uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
        func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar4);
      }
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 007530d8; end: 00753133; -[GPBUInt64EnumDictionary initWithDictionary:] */

long FUN_007530d8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00753134; end: 00753143; -[GPBUInt64EnumDictionary initWithValidationFunction:capacity:] */

void FUN_00753134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 00753144; end: 0075318b; -[GPBUInt64EnumDictionary dealloc] */

void FUN_00753144(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075318c; end: 007531b7; -[GPBUInt64EnumDictionary copyWithZone:] */

void FUN_0075318c(void)

{
  func_0x0077ec40(PTR_PTR_00ac3840);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007531b8; end: 0075321b; -[GPBUInt64EnumDictionary isEqual:] */

undefined8 FUN_007531b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3840;
    _objc_opt_class(PTR_PTR_00ac3840);
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



/* Entry: 0075321c; end: 00753223; -[GPBUInt64EnumDictionary hash] */

void FUN_0075321c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00753224; end: 0075326f; -[GPBUInt64EnumDictionary description] */

void FUN_00753224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00753270; end: 00753277; -[GPBUInt64EnumDictionary count] */

void FUN_00753270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00753278; end: 00753317; -[GPBUInt64EnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_00753278(long param_1,undefined8 param_2,long param_3)

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
    func_0x00793120(lVar2);
    func_0x007871a0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00753318; end: 00753497; -[GPBUInt64EnumDictionary computeSerializedSizeAsField:] */

void FUN_00753318(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40();
    lVar2 = lVar3;
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      func_0x00789f00(lVar3,param_2,lVar1);
      func_0x00793120(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x00742934();
      }
      func_0x007871a0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00753498; end: 00753613; -[GPBUInt64EnumDictionary writeToCodedOutputStream:asField:] */

void FUN_00753498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar4 = param_4;
  func_0x00788e40();
  iVar3 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar11 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar11;
  func_0x00788080();
  uVar6 = uVar5;
  func_0x00789980();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar11;
      func_0x00789f00(uVar11,param_2,uVar6);
      func_0x00794020(param_3,param_2,iVar3 << 3 | 2);
      func_0x00793120(uVar6);
      func_0x007871a0();
      iVar10 = (int)lVar4;
      if (iVar10 == 4) {
        iVar9 = 9;
      }
      else if (iVar10 == 0xc) {
        uVar8 = uVar6;
        func_0x00742934(uVar6);
        iVar9 = (int)uVar8 + 1;
      }
      else {
        iVar9 = 0;
      }
      iVar2 = 5;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        iVar2 = 6;
      }
      uVar12 = (uint)uVar7;
      iVar1 = 4;
      if (0x1fffff < uVar12) {
        iVar1 = iVar2;
      }
      iVar2 = 3;
      if (0x3fff < uVar12) {
        iVar2 = iVar1;
      }
      iVar1 = 2;
      if (0x7f < uVar12) {
        iVar1 = iVar2;
      }
      iVar2 = 0xb;
      if ((uVar7 & 0x80000000) == 0) {
        iVar2 = iVar1;
      }
      func_0x00794020(param_3,param_2,iVar2 + iVar9);
      if (iVar10 == 4) {
        func_0x00793ec0(param_3,param_2,1,uVar6);
      }
      else if (iVar10 == 0xc) {
        func_0x007944a0(param_3,param_2,1,uVar6);
      }
      func_0x00793dc0(param_3,param_2,2,uVar7);
      uVar6 = uVar5;
      func_0x00789980();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 00753614; end: 00753733; -[GPBUInt64EnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined *
FUN_00753614(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  
  if (param_5 == 4) {
    lVar3 = 9;
  }
  else if (param_5 == 0xc) {
    lVar3 = *param_4;
    func_0x00742934(lVar3);
    lVar3 = lVar3 + 1;
  }
  else {
    lVar3 = 0;
  }
  lVar1 = 5;
  if ((param_3 >> 0x1c & 0xf) != 0) {
    lVar1 = 6;
  }
  uVar6 = (uint)param_3;
  lVar2 = 4;
  if (0x1fffff < uVar6) {
    lVar2 = lVar1;
  }
  lVar1 = 3;
  if (0x3fff < uVar6) {
    lVar1 = lVar2;
  }
  lVar2 = 2;
  if (0x7f < uVar6) {
    lVar2 = lVar1;
  }
  lVar1 = 0xb;
  if ((param_3 & 0x80000000) == 0) {
    lVar1 = lVar2;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,lVar1 + lVar3);
  puVar5 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x007851c0();
  if (param_5 == 4) {
    func_0x00793ec0(puVar5,param_2,1,*param_4);
  }
  else if (param_5 == 0xc) {
    func_0x007944a0(puVar5,param_2,1);
  }
  func_0x00793dc0(puVar5,param_2,2,param_3);
  func_0x00783860(puVar5);
  _objc_release(puVar5);
  return puVar4;
}



/* Entry: 00753734; end: 00753787; -[GPBUInt64EnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00753734(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00753788; end: 007537d7; -[GPBUInt64EnumDictionary enumerateForTextFormat:] */

void FUN_00753788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007537d8;
  puStack_20 = &UNK_00a20460;
  uStack_18 = param_3;
  func_0x00782ba0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007537d8; end: 00753843;  */

void FUN_007537d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a800);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x00753840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00753844; end: 007538c7; -[GPBUInt64EnumDictionary getEnum:forKey:] */

bool FUN_00753844(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar5,param_2,puVar3);
  if ((param_3 != (int *)0x0) && (lVar5 != 0)) {
    lVar4 = lVar5;
    func_0x007871a0();
    iVar2 = (int)lVar4;
    (**(code **)(param_1 + 0x18))();
    iVar1 = (int)lVar4;
    if (iVar2 == 0) {
      iVar1 = -0x4524111;
    }
    *param_3 = iVar1;
  }
  return lVar5 != 0;
}



/* Entry: 007538c8; end: 00753923; -[GPBUInt64EnumDictionary getRawValue:forKey:] */

bool FUN_007538c8(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x007871a0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00753924; end: 007539d7; -[GPBUInt64EnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_00753924(long param_1,undefined8 param_2,long param_3)

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
    func_0x00793120(lVar5);
    (**(code **)(param_3 + 0x10))(param_3,lVar5,iVar2,&cStack_51);
  } while (cStack_51 != '\x01');
  return;
}



/* Entry: 007539d8; end: 00753a1b; -[GPBUInt64EnumDictionary addRawEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007539d8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00753a1c; end: 00753a9b; -[GPBUInt64EnumDictionary setRawValue:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00753a1c(long param_1)

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
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 00753a9c; end: 00753acb; -[GPBUInt64EnumDictionary removeEnumForKey:] */

void FUN_00753a9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00753acc; end: 00753ad3; -[GPBUInt64EnumDictionary removeAll] */

void FUN_00753acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00753ad4; end: 00753b9b; -[GPBUInt64EnumDictionary setEnum:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00753ad4(long param_1,undefined8 param_2,ulong param_3)

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
  
  (**(code **)(param_1 + 0x18))();
  if ((param_3 & 1) == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 00753b9c; end: 00753ba3; -[GPBUInt64EnumDictionary validationFunc] */

undefined8 FUN_00753b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00753ba4; end: 00753bb3; -[GPBUInt64ObjectDictionary init] */

void FUN_00753ba4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithObjects_forKeys_count__00abc490,0,0,0)
  ;
  return;
}



/* Entry: 00753bb4; end: 00753ca7; -[GPBUInt64ObjectDictionary initWithObjects:forKeys:count:] */

undefined1 *
FUN_00753bb4(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac47d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (long *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_3 == 0) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00753ca8; end: 00753cef; -[GPBUInt64ObjectDictionary initWithDictionary:] */

long FUN_00753ca8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785e20(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00753cf0; end: 00753cff; -[GPBUInt64ObjectDictionary initWithCapacity:] */

void FUN_00753cf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithObjects_forKeys_count__00abc490,0,0,0)
  ;
  return;
}



/* Entry: 00753d00; end: 00753d47; -[GPBUInt64ObjectDictionary dealloc] */

void FUN_00753d00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00753d48; end: 00753d73; -[GPBUInt64ObjectDictionary copyWithZone:] */

void FUN_00753d48(void)

{
  func_0x0077ec40(PTR_PTR_00ac3848);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00753d74; end: 00753dd7; -[GPBUInt64ObjectDictionary isEqual:] */

undefined8 FUN_00753d74(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3848;
    _objc_opt_class(PTR_PTR_00ac3848);
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



/* Entry: 00753dd8; end: 00753ddf; -[GPBUInt64ObjectDictionary hash] */

void FUN_00753dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00753de0; end: 00753e2b; -[GPBUInt64ObjectDictionary description] */

void FUN_00753de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00753e2c; end: 00753e33; -[GPBUInt64ObjectDictionary count] */

void FUN_00753e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00753e34; end: 00753ec7; -[GPBUInt64ObjectDictionary enumerateKeysAndObjectsUsingBlock:] */

void FUN_00753e34(long param_1,undefined8 param_2,long param_3)

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
    func_0x00793120(lVar2);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00753ec8; end: 00753fb3; -[GPBUInt64ObjectDictionary isInitialized] */

undefined * FUN_00753ec8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789e40();
  lVar2 = lVar1;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = *(undefined **)(lStack_108 + lVar7 * 8);
        func_0x00787980();
        if ((int)puVar3 == 0) goto LAB_00753f80;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00780ea0(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  puVar3 = (undefined *)((long)&MACH_HEADER.magic + 1);
LAB_00753f80:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_00ac3848;
  _objc_alloc_init();
  lVar1 = *(long *)(puVar3 + 0x10);
  func_0x00788080();
  uVar8 = *(undefined8 *)(puVar4 + 0x10);
  lVar2 = lVar1;
  func_0x00789980();
  while (lVar2 != 0) {
    uVar5 = *(undefined8 *)(puVar3 + 0x10);
    func_0x00789f00(uVar5,param_2,lVar2);
    func_0x00780e60();
    func_0x0078f4a0(uVar8,param_2,uVar5,lVar2);
    _objc_release(uVar5);
    lVar2 = lVar1;
    func_0x00789980();
  }
  return puVar4;
}



/* Entry: 00753fb4; end: 0075405b; -[GPBUInt64ObjectDictionary deepCopyWithZone:] */

undefined * FUN_00753fb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_00ac3848;
  _objc_alloc_init();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00788080();
  uVar5 = *(undefined8 *)(puVar1 + 0x10);
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00789f00(uVar4,param_2,lVar3);
    func_0x00780e60();
    func_0x0078f4a0(uVar5,param_2,uVar4,lVar3);
    _objc_release(uVar4);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return puVar1;
}



/* Entry: 0075405c; end: 007541db; -[GPBUInt64ObjectDictionary computeSerializedSizeAsField:] */

void FUN_0075405c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00780e80();
  if (lVar2 != 0) {
    uVar1 = *(undefined1 *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00788e40();
    lVar2 = lVar4;
    func_0x00788080();
    lVar3 = lVar2;
    func_0x00789980();
    while (lVar3 != 0) {
      lVar3 = lVar4;
      func_0x00789f00();
      func_0x00793120();
      if (((int)param_3 != 4) && ((int)param_3 == 0xc)) {
        func_0x00742934();
      }
      FUN_007453bc(lVar3,uVar1);
      lVar3 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007541dc; end: 00754337; -[GPBUInt64ObjectDictionary writeToCodedOutputStream:asField:] */

void FUN_007541dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40();
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar4 = lVar5;
    func_0x00789f00(lVar5);
    func_0x00794020(param_3);
    func_0x00793120(lVar3);
    if ((int)param_4 == 4) {
      FUN_007453bc(lVar4,uVar1);
      func_0x00794020(param_3);
      func_0x00793ec0(param_3);
    }
    else if ((int)param_4 == 0xc) {
      func_0x00742934(lVar3);
      FUN_007453bc(lVar4,uVar1);
      func_0x00794020(param_3);
      func_0x007944a0(param_3);
    }
    else {
      FUN_007453bc(lVar4,uVar1);
      func_0x00794020(param_3);
    }
    FUN_00745558(param_3,lVar4,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 00754338; end: 00754373; -[GPBUInt64ObjectDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00754338(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_4);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,uVar3,puVar1);
  return;
}



/* Entry: 00754374; end: 007543c3; -[GPBUInt64ObjectDictionary enumerateForTextFormat:] */

void FUN_00754374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007543c4;
  puStack_20 = &UNK_00a20580;
  uStack_18 = param_3;
  func_0x00782b60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007543c4; end: 00754413;  */

void FUN_007543c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a800);
                    /* WARNING: Could not recover jumptable at 0x00754410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,param_3);
  return;
}



/* Entry: 00754414; end: 00754443; -[GPBUInt64ObjectDictionary objectForKey:] */

void FUN_00754414(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_objectForKey__00abd4b8,puVar1);
  return;
}



/* Entry: 00754444; end: 00754487; -[GPBUInt64ObjectDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00754444(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00754488; end: 00754517; -[GPBUInt64ObjectDictionary setObject:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00754488(long param_1,undefined8 param_2,long param_3)

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
  
  if (param_3 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4af00);
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



/* Entry: 00754518; end: 00754547; -[GPBUInt64ObjectDictionary removeObjectForKey:] */

void FUN_00754518(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00754548; end: 0075454f; -[GPBUInt64ObjectDictionary removeAll] */

void FUN_00754548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00754550; end: 0075455f; -[GPBInt64UInt32Dictionary init] */

void FUN_00754550(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}


