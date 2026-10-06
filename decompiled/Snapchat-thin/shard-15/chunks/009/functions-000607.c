/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd770a4; end: 10bd7722f; -[GPBStringInt64Dictionary computeSerializedSizeAsField:] */

void FUN_10bd770a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0(param_3);
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      func_0x00010c0e00e0();
      func_0x00010c08fac0();
      func_0x00010c0b4ca0();
      FUN_10bd63f34();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd77230; end: 10bd7736f; -[GPBStringInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd77230(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00010c0b92a0(param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00010c0865c0();
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c2bdf60(param_3);
    func_0x00010c0b4ca0(lVar3);
    func_0x00010c08fac0();
    FUN_10bd63f34(lVar3,2,uVar1);
    func_0x00010c2bdf60(param_3);
    func_0x00010c2be420(param_3);
    FUN_10bd64124(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd77370; end: 10bd773ab; -[GPBStringInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd77370(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd773ac; end: 10bd773fb; -[GPBStringInt64Dictionary enumerateForTextFormat:] */

void FUN_10bd773ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd773fc;
  puStack_20 = &UNK_110d9fcd8;
  uStack_18 = param_3;
  func_0x00010bf97cc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd773fc; end: 10bd7744b;  */

void FUN_10bd773fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bd77448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd7744c; end: 10bd77493; -[GPBStringInt64Dictionary getInt64:forKey:] */

bool FUN_10bd7744c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  if ((param_3 != (long *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    *param_3 = lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 10bd77494; end: 10bd774d7; -[GPBStringInt64Dictionary addEntriesFromDictionary:] */

long FUN_10bd77494(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd774d8; end: 10bd77567; -[GPBStringInt64Dictionary setInt64:forKey:] */

long FUN_10bd774d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_4 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f758);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
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
      lVar3 = lVar8;
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



/* Entry: 10bd77568; end: 10bd7756f; -[GPBStringInt64Dictionary removeInt64ForKey:] */

void FUN_10bd77568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd77570; end: 10bd77577; -[GPBStringInt64Dictionary removeAll] */

void FUN_10bd77570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd77578; end: 10bd77587; -[GPBStringBoolDictionary init] */

void FUN_10bd77578(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd77588; end: 10bd77673; -[GPBStringBoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_10bd77588(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e950;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd77674; end: 10bd776bb; -[GPBStringBoolDictionary initWithDictionary:] */

long FUN_10bd77674(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bff9220(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd776bc; end: 10bd776cb; -[GPBStringBoolDictionary initWithCapacity:] */

void FUN_10bd776bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd776cc; end: 10bd77713; -[GPBStringBoolDictionary dealloc] */

void FUN_10bd776cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e950;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd77714; end: 10bd7773f; -[GPBStringBoolDictionary copyWithZone:] */

void FUN_10bd77714(void)

{
  func_0x00010bf00e40(PTR_PTR_1126d9bf8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd77740; end: 10bd777a3; -[GPBStringBoolDictionary isEqual:] */

undefined8 FUN_10bd77740(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d9bf8;
    _objc_opt_class(PTR_PTR_1126d9bf8);
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



/* Entry: 10bd777a4; end: 10bd777ab; -[GPBStringBoolDictionary hash] */

void FUN_10bd777a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd777ac; end: 10bd777f7; -[GPBStringBoolDictionary description] */

void FUN_10bd777ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd777f8; end: 10bd777ff; -[GPBStringBoolDictionary count] */

void FUN_10bd777f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd77800; end: 10bd77883; -[GPBStringBoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_10bd77800(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
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
    func_0x00010bf1f3c0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 10bd77884; end: 10bd779fb; -[GPBStringBoolDictionary computeSerializedSizeAsField:] */

void FUN_10bd77884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0(param_3);
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,lVar1);
      func_0x00010c08fac0(lVar1,param_2,4);
      func_0x00010bf1f3c0(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd779fc; end: 10bd77b1b; -[GPBStringBoolDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd779fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  func_0x00010c0b92a0(param_4);
  iVar3 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar9 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar9;
  func_0x00010c0865c0();
  uVar6 = uVar5;
  func_0x00010c0d9ba0();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar9;
      func_0x00010c0e00e0(uVar9,param_2,uVar6);
      func_0x00010c2bdf60(param_3,param_2,iVar3 << 3 | 2);
      func_0x00010bf1f3c0(uVar7);
      uVar8 = uVar6;
      func_0x00010c08fac0(uVar6,param_2,4);
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
      func_0x00010c2bdf60(param_3,param_2,uVar4 + iVar2 + 3);
      func_0x00010c2be420(param_3,param_2,1,uVar6);
      func_0x00010c2bd900(param_3,param_2,2,uVar7);
      uVar6 = uVar5;
      func_0x00010c0d9ba0();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 10bd77b1c; end: 10bd77b57; -[GPBStringBoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd77b1c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd77b58; end: 10bd77ba7; -[GPBStringBoolDictionary enumerateForTextFormat:] */

void FUN_10bd77b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd77ba8;
  puStack_20 = &UNK_110d9fd08;
  uStack_18 = param_3;
  func_0x00010bf97c40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd77ba8; end: 10bd77bcb;  */

void FUN_10bd77ba8(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd77bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,ppuVar1);
  return;
}



/* Entry: 10bd77bcc; end: 10bd77c13; -[GPBStringBoolDictionary getBool:forKey:] */

bool FUN_10bd77bcc(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  if ((param_3 != (undefined1 *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    *param_3 = (char)lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 10bd77c14; end: 10bd77c57; -[GPBStringBoolDictionary addEntriesFromDictionary:] */

long FUN_10bd77c14(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd77c58; end: 10bd77ce7; -[GPBStringBoolDictionary setBool:forKey:] */

long FUN_10bd77c58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_4 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f758);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
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
      lVar3 = lVar8;
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



/* Entry: 10bd77ce8; end: 10bd77cef; -[GPBStringBoolDictionary removeBoolForKey:] */

void FUN_10bd77ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd77cf0; end: 10bd77cf7; -[GPBStringBoolDictionary removeAll] */

void FUN_10bd77cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd77cf8; end: 10bd77d07; -[GPBStringFloatDictionary init] */

void FUN_10bd77cf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd77d08; end: 10bd77df3; -[GPBStringFloatDictionary initWithFloats:forKeys:count:] */

undefined1 *
FUN_10bd77d08(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e958;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != (undefined4 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df740(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd77df4; end: 10bd77e3b; -[GPBStringFloatDictionary initWithDictionary:] */

long FUN_10bd77df4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0138e0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd77e3c; end: 10bd77e4b; -[GPBStringFloatDictionary initWithCapacity:] */

void FUN_10bd77e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd77e4c; end: 10bd77e93; -[GPBStringFloatDictionary dealloc] */

void FUN_10bd77e4c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e958;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd77e94; end: 10bd77ebf; -[GPBStringFloatDictionary copyWithZone:] */

void FUN_10bd77e94(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31c8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd77ec0; end: 10bd77f23; -[GPBStringFloatDictionary isEqual:] */

undefined8 FUN_10bd77ec0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e31c8;
    _objc_opt_class(PTR_PTR_1126e31c8);
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



/* Entry: 10bd77f24; end: 10bd77f2b; -[GPBStringFloatDictionary hash] */

void FUN_10bd77f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd77f2c; end: 10bd77f77; -[GPBStringFloatDictionary description] */

void FUN_10bd77f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd77f78; end: 10bd77f7f; -[GPBStringFloatDictionary count] */

void FUN_10bd77f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd77f80; end: 10bd77fff; -[GPBStringFloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_10bd77f80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    func_0x00010c0e00e0(lVar3);
    func_0x00010bfb2c80();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 10bd78000; end: 10bd78177; -[GPBStringFloatDictionary computeSerializedSizeAsField:] */

void FUN_10bd78000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0(param_3);
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,lVar1);
      func_0x00010c08fac0(lVar1,param_2,4);
      func_0x00010bfb2c80(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd78178; end: 10bd7829f; -[GPBStringFloatDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd78178(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00010c0b92a0(param_5);
  iVar3 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar5 = uVar8;
  func_0x00010c0865c0();
  uVar6 = uVar5;
  func_0x00010c0d9ba0();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar8;
      func_0x00010c0e00e0(uVar8,param_3,uVar6);
      func_0x00010c2bdf60(param_4,param_3,iVar3 << 3 | 2);
      func_0x00010bfb2c80(uVar7);
      uVar7 = uVar6;
      func_0x00010c08fac0(uVar6,param_3,4);
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
      func_0x00010c2bdf60(param_4,param_3,uVar4 + iVar2 + 6);
      func_0x00010c2be420(param_4,param_3,1,uVar6);
      func_0x00010c2bddc0(param_1,param_4,param_3,2);
      uVar6 = uVar5;
      func_0x00010c0d9ba0();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 10bd782a0; end: 10bd782db; -[GPBStringFloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd782a0(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd782dc; end: 10bd7832b; -[GPBStringFloatDictionary enumerateForTextFormat:] */

void FUN_10bd782dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd7832c;
  puStack_20 = &UNK_110d9fd38;
  uStack_18 = param_3;
  func_0x00010bf97c80(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd7832c; end: 10bd78387;  */

void FUN_10bd7832c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_11102f678);
                    /* WARNING: Could not recover jumptable at 0x00010bd78384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd78388; end: 10bd783cf; -[GPBStringFloatDictionary getFloat:forKey:] */

bool FUN_10bd78388(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0dff20(lVar1,param_3,param_5);
  if ((param_4 != (undefined4 *)0x0) && (lVar1 != 0)) {
    func_0x00010bfb2c80(lVar1);
    *param_4 = param_1;
  }
  return lVar1 != 0;
}



/* Entry: 10bd783d0; end: 10bd78413; -[GPBStringFloatDictionary addEntriesFromDictionary:] */

long FUN_10bd783d0(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd78414; end: 10bd784af; -[GPBStringFloatDictionary setFloat:forKey:] */

long FUN_10bd78414(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  
  if (param_4 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f758);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_2 + 8);
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
          if (lVar6 == param_2) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_2 + *piVar7) = 0;
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



/* Entry: 10bd784b0; end: 10bd784b7; -[GPBStringFloatDictionary removeFloatForKey:] */

void FUN_10bd784b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd784b8; end: 10bd784bf; -[GPBStringFloatDictionary removeAll] */

void FUN_10bd784b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd784c0; end: 10bd784cf; -[GPBStringDoubleDictionary init] */

void FUN_10bd784c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd784d0; end: 10bd785bb; -[GPBStringDoubleDictionary initWithDoubles:forKeys:count:] */

undefined1 *
FUN_10bd784d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e960;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_4 == 0) {
          func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df720(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd785bc; end: 10bd78603; -[GPBStringDoubleDictionary initWithDictionary:] */

long FUN_10bd785bc(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c00e3a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd78604; end: 10bd78613; -[GPBStringDoubleDictionary initWithCapacity:] */

void FUN_10bd78604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd78614; end: 10bd7865b; -[GPBStringDoubleDictionary dealloc] */

void FUN_10bd78614(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e960;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd7865c; end: 10bd78687; -[GPBStringDoubleDictionary copyWithZone:] */

void FUN_10bd7865c(void)

{
  func_0x00010bf00e40(PTR_PTR_1126ded68);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd78688; end: 10bd786eb; -[GPBStringDoubleDictionary isEqual:] */

undefined8 FUN_10bd78688(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ded68;
    _objc_opt_class(PTR_PTR_1126ded68);
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



/* Entry: 10bd786ec; end: 10bd786f3; -[GPBStringDoubleDictionary hash] */

void FUN_10bd786ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd786f4; end: 10bd7873f; -[GPBStringDoubleDictionary description] */

void FUN_10bd786f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd78740; end: 10bd78747; -[GPBStringDoubleDictionary count] */

void FUN_10bd78740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd78748; end: 10bd787c7; -[GPBStringDoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_10bd78748(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    func_0x00010c0e00e0(lVar3);
    func_0x00010bf885a0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 10bd787c8; end: 10bd7893f; -[GPBStringDoubleDictionary computeSerializedSizeAsField:] */

void FUN_10bd787c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0(param_3);
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,lVar1);
      func_0x00010c08fac0(lVar1,param_2,4);
      func_0x00010bf885a0(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd78940; end: 10bd78a67; -[GPBStringDoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd78940(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00010c0b92a0(param_5);
  iVar3 = *(int *)(*(long *)(param_5 + 8) + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x10);
  uVar5 = uVar8;
  func_0x00010c0865c0();
  uVar6 = uVar5;
  func_0x00010c0d9ba0();
  if (uVar6 != 0) {
    do {
      uVar7 = uVar8;
      func_0x00010c0e00e0(uVar8,param_3,uVar6);
      func_0x00010c2bdf60(param_4,param_3,iVar3 << 3 | 2);
      func_0x00010bf885a0(uVar7);
      uVar7 = uVar6;
      func_0x00010c08fac0(uVar6,param_3,4);
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
      func_0x00010c2bdf60(param_4,param_3,uVar4 + iVar2 + 10);
      func_0x00010c2be420(param_4,param_3,1,uVar6);
      func_0x00010c2bdbc0(param_1,param_4,param_3,2);
      uVar6 = uVar5;
      func_0x00010c0d9ba0();
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 10bd78a68; end: 10bd78aa3; -[GPBStringDoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd78a68(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd78aa4; end: 10bd78af3; -[GPBStringDoubleDictionary enumerateForTextFormat:] */

void FUN_10bd78aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd78af4;
  puStack_20 = &UNK_110d9fd68;
  uStack_18 = param_3;
  func_0x00010bf97c60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd78af4; end: 10bd78b4b;  */

void FUN_10bd78af4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_11102f698);
                    /* WARNING: Could not recover jumptable at 0x00010bd78b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd78b4c; end: 10bd78b93; -[GPBStringDoubleDictionary getDouble:forKey:] */

bool FUN_10bd78b4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0dff20(lVar1,param_3,param_5);
  if ((param_4 != (undefined8 *)0x0) && (lVar1 != 0)) {
    func_0x00010bf885a0(lVar1);
    *param_4 = param_1;
  }
  return lVar1 != 0;
}



/* Entry: 10bd78b94; end: 10bd78bd7; -[GPBStringDoubleDictionary addEntriesFromDictionary:] */

long FUN_10bd78b94(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd78bd8; end: 10bd78c73; -[GPBStringDoubleDictionary setDouble:forKey:] */

long FUN_10bd78bd8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  
  if (param_4 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f758);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_2 + 8);
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
          if (lVar6 == param_2) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_2 + *piVar7) = 0;
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



/* Entry: 10bd78c74; end: 10bd78c7b; -[GPBStringDoubleDictionary removeDoubleForKey:] */

void FUN_10bd78c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd78c7c; end: 10bd78c83; -[GPBStringDoubleDictionary removeAll] */

void FUN_10bd78c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd78c84; end: 10bd78c97; -[GPBStringEnumDictionary init] */

void FUN_10bd78c84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,0,0,0,0);
  return;
}



/* Entry: 10bd78c98; end: 10bd78ca7; -[GPBStringEnumDictionary initWithValidationFunction:] */

void FUN_10bd78c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd78ca8; end: 10bd78da7; -[GPBStringEnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

undefined1 *
FUN_10bd78ca8(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,long *param_5,
             long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  puStack_68 = PTR_PTR_11270e968;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    pcVar1 = FUN_10bd65d4c;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    *(code **)((long)puVar2 + 0x18) = pcVar1;
    if ((param_5 != (long *)0x0) && (param_4 != 0)) {
      for (; param_6 != 0; param_6 = param_6 + -1) {
        if (*param_5 == 0) {
          func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        }
        uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_5 = param_5 + 1;
        func_0x00010c1d0560(uVar4);
      }
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10bd78da8; end: 10bd78e03; -[GPBStringEnumDictionary initWithDictionary:] */

long FUN_10bd78da8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd78e04; end: 10bd78e13; -[GPBStringEnumDictionary initWithValidationFunction:capacity:] */

void FUN_10bd78e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd78e14; end: 10bd78e5b; -[GPBStringEnumDictionary dealloc] */

void FUN_10bd78e14(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e968;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd78e5c; end: 10bd78e87; -[GPBStringEnumDictionary copyWithZone:] */

void FUN_10bd78e5c(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31d0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd78e88; end: 10bd78eeb; -[GPBStringEnumDictionary isEqual:] */

undefined8 FUN_10bd78e88(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e31d0;
    _objc_opt_class(PTR_PTR_1126e31d0);
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



/* Entry: 10bd78eec; end: 10bd78ef3; -[GPBStringEnumDictionary hash] */

void FUN_10bd78eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd78ef4; end: 10bd78f3f; -[GPBStringEnumDictionary description] */

void FUN_10bd78ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd78f40; end: 10bd78f47; -[GPBStringEnumDictionary count] */

void FUN_10bd78f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd78f48; end: 10bd78fcb; -[GPBStringEnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_10bd78f48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_31;
  
  cStack_31 = '\0';
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
    func_0x00010c067ec0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 10bd78fcc; end: 10bd79177; -[GPBStringEnumDictionary computeSerializedSizeAsField:] */

void FUN_10bd78fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0(param_3);
    lVar2 = lVar3;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      func_0x00010c0e00e0(lVar3,param_2,lVar1);
      func_0x00010c08fac0(lVar1,param_2,4);
      func_0x00010c067ec0();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd79178; end: 10bd792cf; -[GPBStringEnumDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd79178(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  func_0x00010c0b92a0(param_4);
  iVar4 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar10;
  func_0x00010c0865c0();
  uVar7 = uVar6;
  func_0x00010c0d9ba0();
  if (uVar7 != 0) {
    do {
      uVar8 = uVar10;
      func_0x00010c0e00e0(uVar10,param_2,uVar7);
      func_0x00010c2bdf60(param_3,param_2,iVar4 << 3 | 2);
      func_0x00010c067ec0();
      uVar9 = uVar7;
      func_0x00010c08fac0(uVar7,param_2,4);
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
      func_0x00010c2bdf60(param_3,param_2,uVar5 + iVar1 + 1 + iVar3);
      func_0x00010c2be420(param_3,param_2,1,uVar7);
      func_0x00010c2bdc40(param_3,param_2,2,uVar8);
      uVar7 = uVar6;
      func_0x00010c0d9ba0();
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 10bd792d0; end: 10bd793db; -[GPBStringEnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined * FUN_10bd792d0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar5 = *param_4;
  func_0x00010c08fac0(uVar5,param_2,4);
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
  puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,uVar5 + lVar2 + lVar1 + 1);
  puVar7 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  func_0x00010c2be420();
  func_0x00010c2bdc40(puVar7,param_2,2,param_3);
  func_0x00010bfb2f20(puVar7);
  _objc_release(puVar7);
  return puVar6;
}



/* Entry: 10bd793dc; end: 10bd79417; -[GPBStringEnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd793dc(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd79418; end: 10bd79467; -[GPBStringEnumDictionary enumerateForTextFormat:] */

void FUN_10bd79418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd79468;
  puStack_20 = &UNK_110d9fc78;
  uStack_18 = param_3;
  func_0x00010bf97d20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd79468; end: 10bd794a3;  */

void FUN_10bd79468(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010bd794a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd794a4; end: 10bd79513; -[GPBStringEnumDictionary getEnum:forKey:] */

bool FUN_10bd794a4(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar3,param_2,param_4);
  if ((param_3 != (int *)0x0) && (lVar3 != 0)) {
    lVar4 = lVar3;
    func_0x00010c067ec0();
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



/* Entry: 10bd79514; end: 10bd7955b; -[GPBStringEnumDictionary getRawValue:forKey:] */

bool FUN_10bd79514(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  if ((param_3 != (undefined4 *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00010c067ec0();
    *param_3 = (int)lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 10bd7955c; end: 10bd79603; -[GPBStringEnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_10bd7955c(long param_1,undefined8 param_2,long param_3)

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
  func_0x00010c0865c0();
  do {
    lVar5 = lVar4;
    func_0x00010c0d9ba0();
    if (lVar5 == 0) {
      return;
    }
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e00e0();
    func_0x00010c067ec0();
    iVar3 = iVar2;
    (*pcVar1)();
    if (iVar3 == 0) {
      iVar2 = -0x4524111;
    }
    (**(code **)(param_3 + 0x10))(param_3,lVar5,iVar2,&cStack_51);
  } while (cStack_51 != '\x01');
  return;
}



/* Entry: 10bd79604; end: 10bd79647; -[GPBStringEnumDictionary addRawEntriesFromDictionary:] */

long FUN_10bd79604(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd79648; end: 10bd796d7; -[GPBStringEnumDictionary setRawValue:forKey:] */

long FUN_10bd79648(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_4 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f758);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
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
      lVar3 = lVar8;
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



/* Entry: 10bd796d8; end: 10bd796df; -[GPBStringEnumDictionary removeEnumForKey:] */

void FUN_10bd796d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd796e0; end: 10bd796e7; -[GPBStringEnumDictionary removeAll] */

void FUN_10bd796e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd796e8; end: 10bd797b7; -[GPBStringEnumDictionary setEnum:forKey:] */

long FUN_10bd796e8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_4 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f758);
  }
  (**(code **)(param_1 + 0x18))();
  if ((param_3 & 1) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
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
      lVar3 = lVar8;
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



/* Entry: 10bd797b8; end: 10bd797bf; -[GPBStringEnumDictionary validationFunc] */

undefined8 FUN_10bd797b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


