/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd63a0c; end: 10bd63a8b; -[GPBUInt32UInt64Dictionary setUInt64:forKey:] */

long FUN_10bd63a0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd63a8c; end: 10bd63abb; -[GPBUInt32UInt64Dictionary removeUInt64ForKey:] */

void FUN_10bd63a8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd63abc; end: 10bd63ac3; -[GPBUInt32UInt64Dictionary removeAll] */

void FUN_10bd63abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd63ac4; end: 10bd63ad3; -[GPBUInt32Int64Dictionary init] */

void FUN_10bd63ac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd63ad4; end: 10bd63b97; -[GPBUInt32Int64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_10bd63ad4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e828;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd63b98; end: 10bd63bdf; -[GPBUInt32Int64Dictionary initWithDictionary:] */

long FUN_10bd63b98(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e500(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd63be0; end: 10bd63bef; -[GPBUInt32Int64Dictionary initWithCapacity:] */

void FUN_10bd63be0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd63bf0; end: 10bd63c37; -[GPBUInt32Int64Dictionary dealloc] */

void FUN_10bd63bf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e828;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd63c38; end: 10bd63c63; -[GPBUInt32Int64Dictionary copyWithZone:] */

void FUN_10bd63c38(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30d0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd63c64; end: 10bd63cc7; -[GPBUInt32Int64Dictionary isEqual:] */

undefined8 FUN_10bd63c64(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30d0;
    _objc_opt_class(PTR_PTR_1126e30d0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd63cc8; end: 10bd63ccf; -[GPBUInt32Int64Dictionary hash] */

void FUN_10bd63cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd63cd0; end: 10bd63d1b; -[GPBUInt32Int64Dictionary description] */

void FUN_10bd63cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd63d1c; end: 10bd63d23; -[GPBUInt32Int64Dictionary count] */

void FUN_10bd63d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd63d24; end: 10bd63dc3; -[GPBUInt32Int64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_10bd63d24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010c0b4ca0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd63dc4; end: 10bd63f33; -[GPBUInt32Int64Dictionary computeSerializedSizeAsField:] */

void FUN_10bd63dc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar1 = lVar3;
    func_0x00010c0865c0();
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    while (lVar2 != 0) {
      lVar2 = lVar3;
      func_0x00010c0e00e0(lVar3);
      func_0x00010c282760();
      func_0x00010c0b4ca0(lVar2);
      FUN_10bd63f34();
      lVar2 = lVar1;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd63f34; end: 10bd63f87;  */

long FUN_10bd63f34(long param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 5) {
    return 9;
  }
  if (param_3 != 10) {
    if (param_3 == 8) {
      func_0x000107c3184c(param_1);
      return param_1 + 1;
    }
    return 0;
  }
  uVar3 = param_2 << 3;
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < uVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar3) {
    lVar2 = lVar1;
  }
  uVar4 = param_1 << 1 ^ param_1 >> 0x3f;
  func_0x000107c3184c(uVar4);
  return uVar4 + lVar2;
}



/* Entry: 10bd63f88; end: 10bd64123; -[GPBUInt32Int64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd63f88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00010c0b92a0();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00010c0865c0();
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c2bdf60(param_3);
    func_0x00010c282760();
    func_0x00010c0b4ca0(lVar3);
    if ((int)param_4 == 1) {
      FUN_10bd63f34(lVar3,2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bdd00(param_3);
    }
    else if ((int)param_4 == 0xb) {
      FUN_10bd63f34(lVar3,2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2be600(param_3);
    }
    else {
      FUN_10bd63f34(lVar3,2,uVar1);
      func_0x00010c2bdf60(param_3);
    }
    FUN_10bd64124(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd64124; end: 10bd64157;  */

void FUN_10bd64124(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_writeSFixed64_value__11268d2e0,param_3,param_2);
    return;
  }
  if (param_4 != 10) {
    if (param_4 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010c2bdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_writeInt64_value__11268d208,param_3,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2be3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writeSInt64_value__11268d310,param_3,param_2)
  ;
  return;
}



/* Entry: 10bd64158; end: 10bd641ab; -[GPBUInt32Int64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd64158(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd641ac; end: 10bd641fb; -[GPBUInt32Int64Dictionary enumerateForTextFormat:] */

void FUN_10bd641ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd641fc;
  puStack_20 = &UNK_110d9f6d8;
  uStack_18 = param_3;
  func_0x00010bf97cc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd641fc; end: 10bd6426b;  */

void FUN_10bd641fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd64268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6426c; end: 10bd642c7; -[GPBUInt32Int64Dictionary getInt64:forKey:] */

bool FUN_10bd6426c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c0b4ca0();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd642c8; end: 10bd6430b; -[GPBUInt32Int64Dictionary addEntriesFromDictionary:] */

long FUN_10bd642c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}



/* Entry: 10bd6430c; end: 10bd6438b; -[GPBUInt32Int64Dictionary setInt64:forKey:] */

long FUN_10bd6430c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd6438c; end: 10bd643bb; -[GPBUInt32Int64Dictionary removeInt64ForKey:] */

void FUN_10bd6438c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd643bc; end: 10bd643c3; -[GPBUInt32Int64Dictionary removeAll] */

void FUN_10bd643bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd643c4; end: 10bd643d3; -[GPBUInt32BoolDictionary init] */

void FUN_10bd643c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd643d4; end: 10bd64497; -[GPBUInt32BoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_10bd643d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e830;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd64498; end: 10bd644df; -[GPBUInt32BoolDictionary initWithDictionary:] */

long FUN_10bd64498(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bff9220(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd644e0; end: 10bd644ef; -[GPBUInt32BoolDictionary initWithCapacity:] */

void FUN_10bd644e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd644f0; end: 10bd64537; -[GPBUInt32BoolDictionary dealloc] */

void FUN_10bd644f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e830;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd64538; end: 10bd64563; -[GPBUInt32BoolDictionary copyWithZone:] */

void FUN_10bd64538(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30d8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd64564; end: 10bd645c7; -[GPBUInt32BoolDictionary isEqual:] */

undefined8 FUN_10bd64564(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30d8;
    _objc_opt_class(PTR_PTR_1126e30d8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd645c8; end: 10bd645cf; -[GPBUInt32BoolDictionary hash] */

void FUN_10bd645c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd645d0; end: 10bd6461b; -[GPBUInt32BoolDictionary description] */

void FUN_10bd645d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6461c; end: 10bd64623; -[GPBUInt32BoolDictionary count] */

void FUN_10bd6461c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd64624; end: 10bd646c3; -[GPBUInt32BoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_10bd64624(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010bf1f3c0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd646c4; end: 10bd6481f; -[GPBUInt32BoolDictionary computeSerializedSizeAsField:] */

void FUN_10bd646c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,lVar1);
      func_0x00010c282760();
      func_0x00010bf1f3c0(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd64820; end: 10bd6497b; -[GPBUInt32BoolDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd64820(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00010c0b92a0();
  iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar4 = uVar8;
  func_0x00010c0865c0();
  uVar5 = uVar4;
  func_0x00010c0d9ba0();
  if (uVar5 != 0) {
    do {
      uVar6 = uVar8;
      func_0x00010c0e00e0(uVar8,param_2,uVar5);
      func_0x00010c2bdf60(param_3,param_2,iVar2 << 3 | 2);
      func_0x00010c282760();
      func_0x00010bf1f3c0(uVar6);
      if ((int)lVar3 == 1) {
        func_0x00010c2bdf60(param_3,param_2,7);
        func_0x00010c2bdd00(param_3,param_2,1,uVar5);
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
        func_0x00010c2bdf60(param_3,param_2,uVar1);
        func_0x00010c2be600(param_3,param_2,1,uVar5);
      }
      else {
        func_0x00010c2bdf60(param_3,param_2,2);
      }
      func_0x00010c2bd900(param_3,param_2,2,uVar6);
      uVar5 = uVar4;
      func_0x00010c0d9ba0();
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10bd6497c; end: 10bd649cf; -[GPBUInt32BoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6497c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd649d0; end: 10bd64a1f; -[GPBUInt32BoolDictionary enumerateForTextFormat:] */

void FUN_10bd649d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd64a20;
  puStack_20 = &UNK_110d9f708;
  uStack_18 = param_3;
  func_0x00010bf97c40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd64a20; end: 10bd64a83;  */

void FUN_10bd64a20(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd64a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2,ppuVar1);
  return;
}



/* Entry: 10bd64a84; end: 10bd64adf; -[GPBUInt32BoolDictionary getBool:forKey:] */

bool FUN_10bd64a84(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined1 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010bf1f3c0();
    *param_3 = (char)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd64ae0; end: 10bd64b23; -[GPBUInt32BoolDictionary addEntriesFromDictionary:] */

long FUN_10bd64ae0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}



/* Entry: 10bd64b24; end: 10bd64ba3; -[GPBUInt32BoolDictionary setBool:forKey:] */

long FUN_10bd64b24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd64ba4; end: 10bd64bd3; -[GPBUInt32BoolDictionary removeBoolForKey:] */

void FUN_10bd64ba4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd64bd4; end: 10bd64bdb; -[GPBUInt32BoolDictionary removeAll] */

void FUN_10bd64bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd64bdc; end: 10bd64beb; -[GPBUInt32FloatDictionary init] */

void FUN_10bd64bdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd64bec; end: 10bd64caf; -[GPBUInt32FloatDictionary initWithFloats:forKeys:count:] */

undefined1 *
FUN_10bd64bec(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e838;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (undefined4 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df740(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd64cb0; end: 10bd64cf7; -[GPBUInt32FloatDictionary initWithDictionary:] */

long FUN_10bd64cb0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0138e0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd64cf8; end: 10bd64d07; -[GPBUInt32FloatDictionary initWithCapacity:] */

void FUN_10bd64cf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd64d08; end: 10bd64d4f; -[GPBUInt32FloatDictionary dealloc] */

void FUN_10bd64d08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd64d50; end: 10bd64d7b; -[GPBUInt32FloatDictionary copyWithZone:] */

void FUN_10bd64d50(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30e0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd64d7c; end: 10bd64ddf; -[GPBUInt32FloatDictionary isEqual:] */

undefined8 FUN_10bd64d7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30e0;
    _objc_opt_class(PTR_PTR_1126e30e0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd64de0; end: 10bd64de7; -[GPBUInt32FloatDictionary hash] */

void FUN_10bd64de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd64de8; end: 10bd64e33; -[GPBUInt32FloatDictionary description] */

void FUN_10bd64de8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd64e34; end: 10bd64e3b; -[GPBUInt32FloatDictionary count] */

void FUN_10bd64e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd64e3c; end: 10bd64ed7; -[GPBUInt32FloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_10bd64e3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010bfb2c80(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd64ed8; end: 10bd65033; -[GPBUInt32FloatDictionary computeSerializedSizeAsField:] */

void FUN_10bd64ed8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,lVar1);
      func_0x00010c282760();
      func_0x00010bfb2c80(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd65034; end: 10bd65197; -[GPBUInt32FloatDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd65034(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

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
  func_0x00010c0b92a0();
  iVar2 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar4 = uVar8;
  func_0x00010c0865c0();
  uVar5 = uVar4;
  func_0x00010c0d9ba0();
  if (uVar5 != 0) {
    do {
      uVar6 = uVar8;
      func_0x00010c0e00e0(uVar8,param_3,uVar5);
      func_0x00010c2bdf60(param_4,param_3,iVar2 << 3 | 2);
      func_0x00010c282760();
      func_0x00010bfb2c80(uVar6);
      if ((int)lVar3 == 1) {
        func_0x00010c2bdf60(param_4,param_3,10);
        func_0x00010c2bdd00(param_4,param_3,1,uVar5);
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
        func_0x00010c2bdf60(param_4,param_3,uVar1);
        func_0x00010c2be600(param_4,param_3,1,uVar5);
      }
      else {
        func_0x00010c2bdf60(param_4,param_3,5);
      }
      func_0x00010c2bddc0(param_1,param_4,param_3,2);
      uVar5 = uVar4;
      func_0x00010c0d9ba0();
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10bd65198; end: 10bd651eb; -[GPBUInt32FloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd65198(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd651ec; end: 10bd6523b; -[GPBUInt32FloatDictionary enumerateForTextFormat:] */

void FUN_10bd651ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6523c;
  puStack_20 = &UNK_110d9f738;
  uStack_18 = param_3;
  func_0x00010bf97c80(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6523c; end: 10bd652bf;  */

void FUN_10bd6523c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd652bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd652c0; end: 10bd6531b; -[GPBUInt32FloatDictionary getFloat:forKey:] */

bool FUN_10bd652c0(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  func_0x00010c0dff20(lVar2,param_3,puVar1);
  if ((param_4 != (undefined4 *)0x0) && (lVar2 != 0)) {
    func_0x00010bfb2c80(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 10bd6531c; end: 10bd6535f; -[GPBUInt32FloatDictionary addEntriesFromDictionary:] */

long FUN_10bd6531c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}



/* Entry: 10bd65360; end: 10bd653df; -[GPBUInt32FloatDictionary setFloat:forKey:] */

long FUN_10bd65360(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd653e0; end: 10bd6540f; -[GPBUInt32FloatDictionary removeFloatForKey:] */

void FUN_10bd653e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd65410; end: 10bd65417; -[GPBUInt32FloatDictionary removeAll] */

void FUN_10bd65410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd65418; end: 10bd65427; -[GPBUInt32DoubleDictionary init] */

void FUN_10bd65418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd65428; end: 10bd654eb; -[GPBUInt32DoubleDictionary initWithDoubles:forKeys:count:] */

undefined1 *
FUN_10bd65428(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e840;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (undefined8 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df720(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd654ec; end: 10bd65533; -[GPBUInt32DoubleDictionary initWithDictionary:] */

long FUN_10bd654ec(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c00e3a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd65534; end: 10bd65543; -[GPBUInt32DoubleDictionary initWithCapacity:] */

void FUN_10bd65534(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd65544; end: 10bd6558b; -[GPBUInt32DoubleDictionary dealloc] */

void FUN_10bd65544(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e840;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6558c; end: 10bd655b7; -[GPBUInt32DoubleDictionary copyWithZone:] */

void FUN_10bd6558c(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30e8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd655b8; end: 10bd6561b; -[GPBUInt32DoubleDictionary isEqual:] */

undefined8 FUN_10bd655b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30e8;
    _objc_opt_class(PTR_PTR_1126e30e8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd6561c; end: 10bd65623; -[GPBUInt32DoubleDictionary hash] */

void FUN_10bd6561c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd65624; end: 10bd6566f; -[GPBUInt32DoubleDictionary description] */

void FUN_10bd65624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd65670; end: 10bd65677; -[GPBUInt32DoubleDictionary count] */

void FUN_10bd65670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd65678; end: 10bd65713; -[GPBUInt32DoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_10bd65678(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010bf885a0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd65714; end: 10bd6586f; -[GPBUInt32DoubleDictionary computeSerializedSizeAsField:] */

void FUN_10bd65714(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,lVar1);
      func_0x00010c282760();
      func_0x00010bf885a0(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd65870; end: 10bd659d3; -[GPBUInt32DoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd65870(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

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
  func_0x00010c0b92a0();
  iVar2 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar4 = uVar8;
  func_0x00010c0865c0();
  uVar5 = uVar4;
  func_0x00010c0d9ba0();
  if (uVar5 != 0) {
    do {
      uVar6 = uVar8;
      func_0x00010c0e00e0(uVar8,param_3,uVar5);
      func_0x00010c2bdf60(param_4,param_3,iVar2 << 3 | 2);
      func_0x00010c282760();
      func_0x00010bf885a0(uVar6);
      if ((int)lVar3 == 1) {
        func_0x00010c2bdf60(param_4,param_3,0xe);
        func_0x00010c2bdd00(param_4,param_3,1,uVar5);
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
        func_0x00010c2bdf60(param_4,param_3,uVar1);
        func_0x00010c2be600(param_4,param_3,1,uVar5);
      }
      else {
        func_0x00010c2bdf60(param_4,param_3,9);
      }
      func_0x00010c2bdbc0(param_1,param_4,param_3,2);
      uVar5 = uVar4;
      func_0x00010c0d9ba0();
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10bd659d4; end: 10bd65a27; -[GPBUInt32DoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd659d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd65a28; end: 10bd65a77; -[GPBUInt32DoubleDictionary enumerateForTextFormat:] */

void FUN_10bd65a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd65a78;
  puStack_20 = &UNK_110d9f768;
  uStack_18 = param_3;
  func_0x00010bf97c60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd65a78; end: 10bd65af7;  */

void FUN_10bd65a78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd65af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd65af8; end: 10bd65b53; -[GPBUInt32DoubleDictionary getDouble:forKey:] */

bool FUN_10bd65af8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  func_0x00010c0dff20(lVar2,param_3,puVar1);
  if ((param_4 != (undefined8 *)0x0) && (lVar2 != 0)) {
    func_0x00010bf885a0(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 10bd65b54; end: 10bd65b97; -[GPBUInt32DoubleDictionary addEntriesFromDictionary:] */

long FUN_10bd65b54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}



/* Entry: 10bd65b98; end: 10bd65c17; -[GPBUInt32DoubleDictionary setDouble:forKey:] */

long FUN_10bd65b98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd65c18; end: 10bd65c47; -[GPBUInt32DoubleDictionary removeDoubleForKey:] */

void FUN_10bd65c18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd65c48; end: 10bd65c4f; -[GPBUInt32DoubleDictionary removeAll] */

void FUN_10bd65c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd65c50; end: 10bd65c63; -[GPBUInt32EnumDictionary init] */

void FUN_10bd65c50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,0,0,0,0);
  return;
}



/* Entry: 10bd65c64; end: 10bd65c73; -[GPBUInt32EnumDictionary initWithValidationFunction:] */

void FUN_10bd65c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd65c74; end: 10bd65d4b; -[GPBUInt32EnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

undefined1 *
FUN_10bd65c74(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,long param_5,
             long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_11270e848;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    pcVar1 = FUN_10bd65d4c;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    *(code **)((long)puVar2 + 0x18) = pcVar1;
    if ((param_5 != 0) && (param_4 != 0)) {
      for (; param_6 != 0; param_6 = param_6 + -1) {
        uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar4);
      }
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10bd65d4c; end: 10bd65d5f;  */

bool FUN_10bd65d4c(int param_1)

{
  return param_1 != -0x4524111;
}



/* Entry: 10bd65d60; end: 10bd65dbb; -[GPBUInt32EnumDictionary initWithDictionary:] */

long FUN_10bd65d60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00010c296c20(param_3);
  func_0x00010c060340(param_1,param_2,lVar1,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd65dbc; end: 10bd65dcb; -[GPBUInt32EnumDictionary initWithValidationFunction:capacity:] */

void FUN_10bd65dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd65dcc; end: 10bd65e13; -[GPBUInt32EnumDictionary dealloc] */

void FUN_10bd65dcc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd65e14; end: 10bd65e3f; -[GPBUInt32EnumDictionary copyWithZone:] */

void FUN_10bd65e14(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30f0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd65e40; end: 10bd65ea3; -[GPBUInt32EnumDictionary isEqual:] */

undefined8 FUN_10bd65e40(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30f0;
    _objc_opt_class(PTR_PTR_1126e30f0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd65ea4; end: 10bd65eab; -[GPBUInt32EnumDictionary hash] */

void FUN_10bd65ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd65eac; end: 10bd65ef7; -[GPBUInt32EnumDictionary description] */

void FUN_10bd65eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}


