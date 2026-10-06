/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00747fa4; end: 00747fab; -[GPBUInt32BoolDictionary count] */

void FUN_00747fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00747fac; end: 0074804b; -[GPBUInt32BoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_00747fac(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar2);
    func_0x0077fbc0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0074804c; end: 007481a7; -[GPBUInt32BoolDictionary computeSerializedSizeAsField:] */

void FUN_0074804c(long param_1,undefined8 param_2)

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
      func_0x007930e0();
      func_0x0077fbc0(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007481a8; end: 00748303; -[GPBUInt32BoolDictionary writeToCodedOutputStream:asField:] */

void FUN_007481a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar3 = param_4;
  func_0x00788e40();
  iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar4 = uVar8;
  func_0x00788080();
  uVar5 = uVar4;
  func_0x00789980();
  if (uVar5 != 0) {
    do {
      uVar6 = uVar8;
      func_0x00789f00(uVar8,param_2,uVar5);
      func_0x00794020(param_3,param_2,iVar2 << 3 | 2);
      func_0x007930e0();
      func_0x0077fbc0(uVar6);
      if ((int)lVar3 == 1) {
        func_0x00794020(param_3,param_2,7);
        func_0x00793e60(param_3,param_2,1,uVar5);
      }
      else if ((int)lVar3 == 0xb) {
        uVar7 = 7;
        if ((uVar5 >> 0x1c & 0xf) != 0) {
          uVar7 = 8;
        }
        uVar9 = (uint)uVar5;
        uVar1 = 6;
        if (0x1fffff < uVar9) {
          uVar1 = uVar7;
        }
        uVar7 = 5;
        if (0x3fff < uVar9) {
          uVar7 = uVar1;
        }
        uVar1 = 4;
        if (0x7f < uVar9) {
          uVar1 = uVar7;
        }
        func_0x00794020(param_3,param_2,uVar1);
        func_0x00794440(param_3,param_2,1,uVar5);
      }
      else {
        func_0x00794020(param_3,param_2,2);
      }
      func_0x00793c60(param_3,param_2,2,uVar6);
      uVar5 = uVar4;
      func_0x00789980();
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 00748304; end: 00748357; -[GPBUInt32BoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00748304(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00748358; end: 007483a7; -[GPBUInt32BoolDictionary enumerateForTextFormat:] */

void FUN_00748358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007483a8;
  puStack_20 = &UNK_00a201f0;
  uStack_18 = param_3;
  func_0x00782ac0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007483a8; end: 0074840b;  */

void FUN_007483a8(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  ppuVar1 = &PTR____CFConstantStringClassReference_00a21460;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21500;
  }
                    /* WARNING: Could not recover jumptable at 0x00748408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2,ppuVar1);
  return;
}



/* Entry: 0074840c; end: 00748467; -[GPBUInt32BoolDictionary getBool:forKey:] */

bool FUN_0074840c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined1 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x0077fbc0();
    *param_3 = (char)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00748468; end: 007484ab; -[GPBUInt32BoolDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00748468(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 007484ac; end: 0074852b; -[GPBUInt32BoolDictionary setBool:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007484ac(long param_1)

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
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 0074852c; end: 0074855b; -[GPBUInt32BoolDictionary removeBoolForKey:] */

void FUN_0074852c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 0074855c; end: 00748563; -[GPBUInt32BoolDictionary removeAll] */

void FUN_0074855c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00748564; end: 00748573; -[GPBUInt32FloatDictionary init] */

void FUN_00748564(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 00748574; end: 00748637; -[GPBUInt32FloatDictionary initWithFloats:forKeys:count:] */

undefined1 *
FUN_00748574(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4728;
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
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00748638; end: 0074867f; -[GPBUInt32FloatDictionary initWithDictionary:] */

long FUN_00748638(long param_1,undefined8 param_2,long param_3)

{
  func_0x007856a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00748680; end: 0074868f; -[GPBUInt32FloatDictionary initWithCapacity:] */

void FUN_00748680(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithFloats_forKeys_count__00abc2b0,0,0,0);
  return;
}



/* Entry: 00748690; end: 007486d7; -[GPBUInt32FloatDictionary dealloc] */

void FUN_00748690(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4728;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007486d8; end: 00748703; -[GPBUInt32FloatDictionary copyWithZone:] */

void FUN_007486d8(void)

{
  func_0x0077ec40(PTR_PTR_00ac37a0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00748704; end: 00748767; -[GPBUInt32FloatDictionary isEqual:] */

undefined8 FUN_00748704(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac37a0;
    _objc_opt_class(PTR_PTR_00ac37a0);
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



/* Entry: 00748768; end: 0074876f; -[GPBUInt32FloatDictionary hash] */

void FUN_00748768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00748770; end: 007487bb; -[GPBUInt32FloatDictionary description] */

void FUN_00748770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007487bc; end: 007487c3; -[GPBUInt32FloatDictionary count] */

void FUN_007487bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007487c4; end: 0074885f; -[GPBUInt32FloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_007487c4(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar2);
    func_0x00783840(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00748860; end: 007489bb; -[GPBUInt32FloatDictionary computeSerializedSizeAsField:] */

void FUN_00748860(long param_1,undefined8 param_2)

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
      func_0x007930e0();
      func_0x00783840(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007489bc; end: 00748b1f; -[GPBUInt32FloatDictionary writeToCodedOutputStream:asField:] */

void FUN_007489bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar3 = param_5;
  func_0x00788e40();
  iVar2 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar4 = uVar8;
  func_0x00788080();
  uVar5 = uVar4;
  func_0x00789980();
  if (uVar5 != 0) {
    do {
      uVar6 = uVar8;
      func_0x00789f00(uVar8,param_3,uVar5);
      func_0x00794020(param_4,param_3,iVar2 << 3 | 2);
      func_0x007930e0();
      func_0x00783840(uVar6);
      if ((int)lVar3 == 1) {
        func_0x00794020(param_4,param_3,10);
        func_0x00793e60(param_4,param_3,1,uVar5);
      }
      else if ((int)lVar3 == 0xb) {
        uVar7 = 10;
        if ((uVar5 >> 0x1c & 0xf) != 0) {
          uVar7 = 0xb;
        }
        uVar9 = (uint)uVar5;
        uVar1 = 9;
        if (0x1fffff < uVar9) {
          uVar1 = uVar7;
        }
        uVar7 = 8;
        if (0x3fff < uVar9) {
          uVar7 = uVar1;
        }
        uVar1 = 7;
        if (0x7f < uVar9) {
          uVar1 = uVar7;
        }
        func_0x00794020(param_4,param_3,uVar1);
        func_0x00794440(param_4,param_3,1,uVar5);
      }
      else {
        func_0x00794020(param_4,param_3,5);
      }
      func_0x00793f20(param_1,param_4,param_3,2);
      uVar5 = uVar4;
      func_0x00789980();
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 00748b20; end: 00748b73; -[GPBUInt32FloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00748b20(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c40(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00748b74; end: 00748bc3; -[GPBUInt32FloatDictionary enumerateForTextFormat:] */

void FUN_00748b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00748bc4;
  puStack_20 = &UNK_00a20220;
  uStack_18 = param_3;
  func_0x00782b00(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00748bc4; end: 00748c47;  */

void FUN_00748bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00748c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00748c48; end: 00748ca3; -[GPBUInt32FloatDictionary getFloat:forKey:] */

bool FUN_00748c48(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_5);
  func_0x00789ea0(lVar2,param_3,puVar1);
  if ((param_4 != (undefined4 *)0x0) && (lVar2 != 0)) {
    func_0x00783840(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 00748ca4; end: 00748ce7; -[GPBUInt32FloatDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00748ca4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00748ce8; end: 00748d67; -[GPBUInt32FloatDictionary setFloat:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00748ce8(long param_1)

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
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 00748d68; end: 00748d97; -[GPBUInt32FloatDictionary removeFloatForKey:] */

void FUN_00748d68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00748d98; end: 00748d9f; -[GPBUInt32FloatDictionary removeAll] */

void FUN_00748d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00748da0; end: 00748daf; -[GPBUInt32DoubleDictionary init] */

void FUN_00748da0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 00748db0; end: 00748e73; -[GPBUInt32DoubleDictionary initWithDoubles:forKeys:count:] */

undefined1 *
FUN_00748db0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4730;
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
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00748e74; end: 00748ebb; -[GPBUInt32DoubleDictionary initWithDictionary:] */

long FUN_00748e74(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785400(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00748ebc; end: 00748ecb; -[GPBUInt32DoubleDictionary initWithCapacity:] */

void FUN_00748ebc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDoubles_forKeys_count__00abc208,0,0,0)
  ;
  return;
}



/* Entry: 00748ecc; end: 00748f13; -[GPBUInt32DoubleDictionary dealloc] */

void FUN_00748ecc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4730;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00748f14; end: 00748f3f; -[GPBUInt32DoubleDictionary copyWithZone:] */

void FUN_00748f14(void)

{
  func_0x0077ec40(PTR_PTR_00ac37a8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00748f40; end: 00748fa3; -[GPBUInt32DoubleDictionary isEqual:] */

undefined8 FUN_00748f40(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac37a8;
    _objc_opt_class(PTR_PTR_00ac37a8);
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



/* Entry: 00748fa4; end: 00748fab; -[GPBUInt32DoubleDictionary hash] */

void FUN_00748fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00748fac; end: 00748ff7; -[GPBUInt32DoubleDictionary description] */

void FUN_00748fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00748ff8; end: 00748fff; -[GPBUInt32DoubleDictionary count] */

void FUN_00748ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00749000; end: 0074909b; -[GPBUInt32DoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_00749000(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar2);
    func_0x00782440(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0074909c; end: 007491f7; -[GPBUInt32DoubleDictionary computeSerializedSizeAsField:] */

void FUN_0074909c(long param_1,undefined8 param_2)

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
      func_0x007930e0();
      func_0x00782440(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007491f8; end: 0074935b; -[GPBUInt32DoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_007491f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar3 = param_5;
  func_0x00788e40();
  iVar2 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar4 = uVar8;
  func_0x00788080();
  uVar5 = uVar4;
  func_0x00789980();
  if (uVar5 != 0) {
    do {
      uVar6 = uVar8;
      func_0x00789f00(uVar8,param_3,uVar5);
      func_0x00794020(param_4,param_3,iVar2 << 3 | 2);
      func_0x007930e0();
      func_0x00782440(uVar6);
      if ((int)lVar3 == 1) {
        func_0x00794020(param_4,param_3,0xe);
        func_0x00793e60(param_4,param_3,1,uVar5);
      }
      else if ((int)lVar3 == 0xb) {
        uVar7 = 0xe;
        if ((uVar5 >> 0x1c & 0xf) != 0) {
          uVar7 = 0xf;
        }
        uVar9 = (uint)uVar5;
        uVar1 = 0xd;
        if (0x1fffff < uVar9) {
          uVar1 = uVar7;
        }
        uVar7 = 0xc;
        if (0x3fff < uVar9) {
          uVar7 = uVar1;
        }
        uVar1 = 0xb;
        if (0x7f < uVar9) {
          uVar1 = uVar7;
        }
        func_0x00794020(param_4,param_3,uVar1);
        func_0x00794440(param_4,param_3,1,uVar5);
      }
      else {
        func_0x00794020(param_4,param_3,9);
      }
      func_0x00793d60(param_1,param_4,param_3,2);
      uVar5 = uVar4;
      func_0x00789980();
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 0074935c; end: 007493af; -[GPBUInt32DoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0074935c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(*param_3,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 007493b0; end: 007493ff; -[GPBUInt32DoubleDictionary enumerateForTextFormat:] */

void FUN_007493b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00749400;
  puStack_20 = &UNK_00a20250;
  uStack_18 = param_3;
  func_0x00782ae0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00749400; end: 0074947f;  */

void FUN_00749400(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x0074947c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00749480; end: 007494db; -[GPBUInt32DoubleDictionary getDouble:forKey:] */

bool FUN_00749480(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_5);
  func_0x00789ea0(lVar2,param_3,puVar1);
  if ((param_4 != (undefined8 *)0x0) && (lVar2 != 0)) {
    func_0x00782440(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 007494dc; end: 0074951f; -[GPBUInt32DoubleDictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007494dc(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00749520; end: 0074959f; -[GPBUInt32DoubleDictionary setDouble:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00749520(long param_1)

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
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 007495a0; end: 007495cf; -[GPBUInt32DoubleDictionary removeDoubleForKey:] */

void FUN_007495a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 007495d0; end: 007495d7; -[GPBUInt32DoubleDictionary removeAll] */

void FUN_007495d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 007495d8; end: 007495eb; -[GPBUInt32EnumDictionary init] */

void FUN_007495d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,0,0,0,0);
  return;
}



/* Entry: 007495ec; end: 007495fb; -[GPBUInt32EnumDictionary initWithValidationFunction:] */

void FUN_007495ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 007495fc; end: 007496d3; -[GPBUInt32EnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

undefined1 *
FUN_007495fc(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,long param_5,
            long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4738;
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
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar4);
      }
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 007496d4; end: 007496e7;  */

bool FUN_007496d4(int param_1)

{
  return param_1 != -0x4524111;
}



/* Entry: 007496e8; end: 00749743; -[GPBUInt32EnumDictionary initWithDictionary:] */

long FUN_007496e8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00749744; end: 00749753; -[GPBUInt32EnumDictionary initWithValidationFunction:capacity:] */

void FUN_00749744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithValidationFunction_rawVa_00abc8e0,param_3,0,0,0);
  return;
}



/* Entry: 00749754; end: 0074979b; -[GPBUInt32EnumDictionary dealloc] */

void FUN_00749754(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4738;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0074979c; end: 007497c7; -[GPBUInt32EnumDictionary copyWithZone:] */

void FUN_0074979c(void)

{
  func_0x0077ec40(PTR_PTR_00ac37b0);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007497c8; end: 0074982b; -[GPBUInt32EnumDictionary isEqual:] */

undefined8 FUN_007497c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac37b0;
    _objc_opt_class(PTR_PTR_00ac37b0);
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



/* Entry: 0074982c; end: 00749833; -[GPBUInt32EnumDictionary hash] */

void FUN_0074982c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00749834; end: 0074987f; -[GPBUInt32EnumDictionary description] */

void FUN_00749834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00749880; end: 00749887; -[GPBUInt32EnumDictionary count] */

void FUN_00749880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00749888; end: 00749927; -[GPBUInt32EnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_00749888(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar2);
    func_0x007871a0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00749928; end: 00749ab3; -[GPBUInt32EnumDictionary computeSerializedSizeAsField:] */

void FUN_00749928(long param_1,undefined8 param_2)

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
      func_0x007930e0();
      func_0x007871a0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00749ab4; end: 00749c3f; -[GPBUInt32EnumDictionary writeToCodedOutputStream:asField:] */

void FUN_00749ab4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar4 = param_4;
  func_0x00788e40();
  iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar5;
  func_0x00788080();
  uVar7 = uVar6;
  func_0x00789980();
  if (uVar7 != 0) {
    do {
      uVar8 = uVar5;
      func_0x00789f00(uVar5,param_2,uVar7);
      func_0x00794020(param_3,param_2,iVar2 << 3 | 2);
      func_0x007930e0();
      func_0x007871a0();
      iVar10 = 5;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        iVar10 = 6;
      }
      uVar3 = (uint)uVar7;
      iVar11 = 4;
      if (0x1fffff < uVar3) {
        iVar11 = iVar10;
      }
      iVar10 = 3;
      if (0x3fff < uVar3) {
        iVar10 = iVar11;
      }
      iVar11 = 2;
      if (0x7f < uVar3) {
        iVar11 = iVar10;
      }
      iVar9 = (int)lVar4;
      iVar10 = 0;
      if (iVar9 == 0xb) {
        iVar10 = iVar11;
      }
      iVar11 = 5;
      iVar1 = iVar11;
      if (iVar9 != 1) {
        iVar1 = iVar10;
      }
      if ((uVar8 >> 0x1c & 0xf) != 0) {
        iVar11 = 6;
      }
      uVar3 = (uint)uVar8;
      iVar10 = 4;
      if (0x1fffff < uVar3) {
        iVar10 = iVar11;
      }
      iVar11 = 3;
      if (0x3fff < uVar3) {
        iVar11 = iVar10;
      }
      iVar10 = 2;
      if (0x7f < uVar3) {
        iVar10 = iVar11;
      }
      iVar11 = 0xb;
      if ((uVar8 & 0x80000000) == 0) {
        iVar11 = iVar10;
      }
      func_0x00794020(param_3,param_2,iVar11 + iVar1);
      if (iVar9 == 1) {
        func_0x00793e60(param_3,param_2,1,uVar7);
      }
      else if (iVar9 == 0xb) {
        func_0x00794440(param_3,param_2,1,uVar7);
      }
      func_0x00793dc0(param_3,param_2,2,uVar8);
      uVar7 = uVar6;
      func_0x00789980();
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 00749c40; end: 00749d7f; -[GPBUInt32EnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined *
FUN_00749c40(undefined8 param_1,undefined8 param_2,ulong param_3,uint *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  
  uVar6 = *param_4;
  lVar1 = 5;
  if (uVar6 >> 0x1c != 0) {
    lVar1 = 6;
  }
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
  lVar1 = 0;
  if (param_5 == 0xb) {
    lVar1 = lVar2;
  }
  lVar2 = 5;
  if (param_5 != 1) {
    lVar2 = lVar1;
  }
  lVar1 = 5;
  if ((param_3 >> 0x1c & 0xf) != 0) {
    lVar1 = 6;
  }
  uVar6 = (uint)param_3;
  lVar3 = 4;
  if (0x1fffff < uVar6) {
    lVar3 = lVar1;
  }
  lVar1 = 3;
  if (0x3fff < uVar6) {
    lVar1 = lVar3;
  }
  lVar3 = 2;
  if (0x7f < uVar6) {
    lVar3 = lVar1;
  }
  lVar1 = 0xb;
  if ((param_3 & 0x80000000) == 0) {
    lVar1 = lVar3;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,lVar1 + lVar2);
  puVar5 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x007851c0();
  if (param_5 == 1) {
    func_0x00793e60(puVar5,param_2,1,*param_4);
  }
  else if (param_5 == 0xb) {
    func_0x00794440(puVar5,param_2,1);
  }
  func_0x00793dc0(puVar5,param_2,2,param_3);
  func_0x00783860(puVar5);
  _objc_release(puVar5);
  return puVar4;
}



/* Entry: 00749d80; end: 00749dd3; -[GPBUInt32EnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00749d80(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00749dd4; end: 00749e23; -[GPBUInt32EnumDictionary enumerateForTextFormat:] */

void FUN_00749dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00749e24;
  puStack_20 = &UNK_00a20160;
  uStack_18 = param_3;
  func_0x00782ba0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00749e24; end: 00749e8f;  */

void FUN_00749e24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x00749e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00749e90; end: 00749f13; -[GPBUInt32EnumDictionary getEnum:forKey:] */

bool FUN_00749e90(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
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



/* Entry: 00749f14; end: 00749f6f; -[GPBUInt32EnumDictionary getRawValue:forKey:] */

bool FUN_00749f14(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x007871a0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00749f70; end: 0074a023; -[GPBUInt32EnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_00749f70(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar5);
    (**(code **)(param_3 + 0x10))(param_3,lVar5,iVar2,&cStack_51);
  } while (cStack_51 != '\x01');
  return;
}



/* Entry: 0074a024; end: 0074a067; -[GPBUInt32EnumDictionary addRawEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0074a024(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0074a068; end: 0074a0e7; -[GPBUInt32EnumDictionary setRawValue:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0074a068(long param_1)

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
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
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



/* Entry: 0074a0e8; end: 0074a117; -[GPBUInt32EnumDictionary removeEnumForKey:] */

void FUN_0074a0e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 0074a118; end: 0074a11f; -[GPBUInt32EnumDictionary removeAll] */

void FUN_0074a118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0074a120; end: 0074a1e7; -[GPBUInt32EnumDictionary setEnum:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0074a120(long param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 0074a1e8; end: 0074a1ef; -[GPBUInt32EnumDictionary validationFunc] */

undefined8 FUN_0074a1e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0074a1f0; end: 0074a1ff; -[GPBUInt32ObjectDictionary init] */

void FUN_0074a1f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithObjects_forKeys_count__00abc490,0,0,0)
  ;
  return;
}



/* Entry: 0074a200; end: 0074a2f3; -[GPBUInt32ObjectDictionary initWithObjects:forKeys:count:] */

undefined1 *
FUN_0074a200(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_00ac4740;
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
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0074a2f4; end: 0074a33b; -[GPBUInt32ObjectDictionary initWithDictionary:] */

long FUN_0074a2f4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785e20(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0074a33c; end: 0074a34b; -[GPBUInt32ObjectDictionary initWithCapacity:] */

void FUN_0074a33c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithObjects_forKeys_count__00abc490,0,0,0)
  ;
  return;
}



/* Entry: 0074a34c; end: 0074a393; -[GPBUInt32ObjectDictionary dealloc] */

void FUN_0074a34c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4740;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0074a394; end: 0074a3bf; -[GPBUInt32ObjectDictionary copyWithZone:] */

void FUN_0074a394(void)

{
  func_0x0077ec40(PTR_PTR_00ac37b8);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0074a3c0; end: 0074a423; -[GPBUInt32ObjectDictionary isEqual:] */

undefined8 FUN_0074a3c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac37b8;
    _objc_opt_class(PTR_PTR_00ac37b8);
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



/* Entry: 0074a424; end: 0074a42b; -[GPBUInt32ObjectDictionary hash] */

void FUN_0074a424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0074a42c; end: 0074a477; -[GPBUInt32ObjectDictionary description] */

void FUN_0074a42c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0074a478; end: 0074a47f; -[GPBUInt32ObjectDictionary count] */

void FUN_0074a478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0074a480; end: 0074a513; -[GPBUInt32ObjectDictionary enumerateKeysAndObjectsUsingBlock:] */

void FUN_0074a480(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar2);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0074a514; end: 0074a5ff; -[GPBUInt32ObjectDictionary isInitialized] */

undefined * FUN_0074a514(long param_1,undefined8 param_2)

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
        if ((int)puVar3 == 0) goto LAB_0074a5cc;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00780ea0(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  puVar3 = (undefined *)((long)&MACH_HEADER.magic + 1);
LAB_0074a5cc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_00ac37b8;
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



/* Entry: 0074a600; end: 0074a6a7; -[GPBUInt32ObjectDictionary deepCopyWithZone:] */

undefined * FUN_0074a600(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_00ac37b8;
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



/* Entry: 0074a6a8; end: 0074a847; -[GPBUInt32ObjectDictionary computeSerializedSizeAsField:] */

void FUN_0074a6a8(long param_1,undefined8 param_2,long param_3)

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
    lVar3 = lVar4;
    func_0x00788080();
    lVar2 = lVar3;
    func_0x00789980();
    while (lVar2 != 0) {
      lVar2 = lVar4;
      func_0x00789f00();
      func_0x007930e0();
      FUN_007453bc(lVar2,uVar1);
      lVar2 = lVar3;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0074a848; end: 0074a9c7; -[GPBUInt32ObjectDictionary writeToCodedOutputStream:asField:] */

void FUN_0074a848(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00794020(param_3);
    func_0x007930e0();
    if ((int)param_4 == 1) {
      FUN_007453bc(lVar3,uVar1);
      func_0x00794020(param_3);
      func_0x00793e60(param_3);
    }
    else if ((int)param_4 == 0xb) {
      FUN_007453bc(lVar3,uVar1);
      func_0x00794020(param_3);
      func_0x00794440(param_3);
    }
    else {
      FUN_007453bc(lVar3,uVar1);
      func_0x00794020(param_3);
    }
    FUN_00745558(param_3,lVar3,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 0074a9c8; end: 0074aa03; -[GPBUInt32ObjectDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0074a9c8(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_4);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_setObject_forKey__00abea38,uVar3,puVar1);
  return;
}



/* Entry: 0074aa04; end: 0074aa53; -[GPBUInt32ObjectDictionary enumerateForTextFormat:] */

void FUN_0074aa04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0074aa54;
  puStack_20 = &UNK_00a20280;
  uStack_18 = param_3;
  func_0x00782b60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0074aa54; end: 0074aaa3;  */

void FUN_0074aa54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
                    /* WARNING: Could not recover jumptable at 0x0074aaa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,param_3);
  return;
}


