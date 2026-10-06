/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd6ada8; end: 10bd6aee7; -[GPBInt32EnumDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6ada8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0b92a0(param_4);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0865c0();
  lVar1 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar1 != 0) {
    func_0x00010c0e00e0();
    func_0x00010c2bdf60(param_3);
    func_0x00010c067ec0(lVar1);
    func_0x00010c067ec0();
    FUN_10bd62d84(lVar1,1,param_4);
    func_0x00010c2bdf60(param_3);
    FUN_10bd62f64(param_3,lVar1,1,param_4);
    func_0x00010c2bdc40(param_3);
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd6aee8; end: 10bd6afcf; -[GPBInt32EnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined * FUN_10bd6aee8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *in_x3;
  undefined8 in_x4;
  
  FUN_10bd62d84(*in_x3,1,in_x4);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  puVar2 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  FUN_10bd62f64();
  func_0x00010c2bdc40(puVar2);
  func_0x00010bfb2f20(puVar2);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 10bd6afd0; end: 10bd6b023; -[GPBInt32EnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6afd0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd6b024; end: 10bd6b073; -[GPBInt32EnumDictionary enumerateForTextFormat:] */

void FUN_10bd6b024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6b074;
  puStack_20 = &UNK_110d9f7f8;
  uStack_18 = param_3;
  func_0x00010bf97d20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6b074; end: 10bd6b0df;  */

void FUN_10bd6b074(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010bd6b0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6b0e0; end: 10bd6b163; -[GPBInt32EnumDictionary getEnum:forKey:] */

bool FUN_10bd6b0e0(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar5,param_2,puVar3);
  if ((param_3 != (int *)0x0) && (lVar5 != 0)) {
    lVar4 = lVar5;
    func_0x00010c067ec0();
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



/* Entry: 10bd6b164; end: 10bd6b1bf; -[GPBInt32EnumDictionary getRawValue:forKey:] */

bool FUN_10bd6b164(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c067ec0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd6b1c0; end: 10bd6b273; -[GPBInt32EnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_10bd6b1c0(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c067ec0(lVar5);
    (**(code **)(param_3 + 0x10))(param_3,lVar5,iVar2,&cStack_51);
  } while (cStack_51 != '\x01');
  return;
}



/* Entry: 10bd6b274; end: 10bd6b2b7; -[GPBInt32EnumDictionary addRawEntriesFromDictionary:] */

long FUN_10bd6b274(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6b2b8; end: 10bd6b337; -[GPBInt32EnumDictionary setRawValue:forKey:] */

long FUN_10bd6b2b8(long param_1)

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
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd6b338; end: 10bd6b367; -[GPBInt32EnumDictionary removeEnumForKey:] */

void FUN_10bd6b338(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd6b368; end: 10bd6b36f; -[GPBInt32EnumDictionary removeAll] */

void FUN_10bd6b368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6b370; end: 10bd6b437; -[GPBInt32EnumDictionary setEnum:forKey:] */

long FUN_10bd6b370(long param_1,undefined8 param_2,ulong param_3)

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
  
  (**(code **)(param_1 + 0x18))();
  if ((param_3 & 1) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd6b438; end: 10bd6b43f; -[GPBInt32EnumDictionary validationFunc] */

undefined8 FUN_10bd6b438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd6b440; end: 10bd6b487; -[GPBInt32ObjectDictionary initWithDictionary:] */

long FUN_10bd6b440(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c030a00(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd6b488; end: 10bd6b497; -[GPBInt32ObjectDictionary initWithCapacity:] */

void FUN_10bd6b488(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObjects_forKeys_count__1125e9c78,0,0,0);
  return;
}



/* Entry: 10bd6b498; end: 10bd6b4c3; -[GPBInt32ObjectDictionary copyWithZone:] */

void FUN_10bd6b498(void)

{
  func_0x00010bf00e40(PTR_PTR_1126b7708);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6b4c4; end: 10bd6b527; -[GPBInt32ObjectDictionary isEqual:] */

undefined8 FUN_10bd6b4c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126b7708;
    _objc_opt_class(PTR_PTR_1126b7708);
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



/* Entry: 10bd6b528; end: 10bd6b52f; -[GPBInt32ObjectDictionary hash] */

void FUN_10bd6b528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6b530; end: 10bd6b57b; -[GPBInt32ObjectDictionary description] */

void FUN_10bd6b530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6b57c; end: 10bd6b583; -[GPBInt32ObjectDictionary count] */

void FUN_10bd6b57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6b584; end: 10bd6b66f; -[GPBInt32ObjectDictionary isInitialized] */

undefined * FUN_10bd6b584(long param_1,undefined8 param_2)

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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dfe00();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = *(undefined **)(lStack_108 + lVar7 * 8);
        func_0x00010c0758e0();
        if ((int)puVar3 == 0) goto LAB_10bd6b63c;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  puVar3 = (undefined *)0x1;
LAB_10bd6b63c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b7708;
  _objc_alloc_init();
  lVar1 = *(long *)(puVar3 + 0x10);
  func_0x00010c0865c0();
  uVar8 = *(undefined8 *)(puVar4 + 0x10);
  lVar2 = lVar1;
  func_0x00010c0d9ba0();
  while (lVar2 != 0) {
    uVar5 = *(undefined8 *)(puVar3 + 0x10);
    func_0x00010c0e00e0(uVar5,param_2,lVar2);
    func_0x00010bf52240();
    func_0x00010c1d0560(uVar8,param_2,uVar5,lVar2);
    _objc_release(uVar5);
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
  }
  return puVar4;
}



/* Entry: 10bd6b670; end: 10bd6b717; -[GPBInt32ObjectDictionary deepCopyWithZone:] */

undefined * FUN_10bd6b670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7708;
  _objc_alloc_init();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0865c0();
  uVar5 = *(undefined8 *)(puVar1 + 0x10);
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar4,param_2,lVar3);
    func_0x00010bf52240();
    func_0x00010c1d0560(uVar5,param_2,uVar4,lVar3);
    _objc_release(uVar4);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return puVar1;
}



/* Entry: 10bd6b718; end: 10bd6b87f; -[GPBInt32ObjectDictionary computeSerializedSizeAsField:] */

void FUN_10bd6b718(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar1 = *(undefined1 *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00010c0b92a0(param_3);
    lVar2 = lVar4;
    func_0x00010c0865c0();
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar3 != 0) {
      lVar3 = lVar4;
      func_0x00010c0e00e0();
      func_0x00010c067ec0();
      FUN_10bd62d84();
      FUN_10bd61e10(lVar3,uVar1);
      lVar3 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd6b880; end: 10bd6b987; -[GPBInt32ObjectDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6b880(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00010c0b92a0(param_4);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00010c0865c0();
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    lVar4 = lVar5;
    func_0x00010c0e00e0(lVar5);
    func_0x00010c2bdf60(param_3);
    func_0x00010c067ec0(lVar3);
    FUN_10bd62d84();
    FUN_10bd61e10(lVar4,uVar1);
    func_0x00010c2bdf60(param_3);
    FUN_10bd62f64(param_3,lVar3,1,param_4);
    FUN_10bd61fac(param_3,lVar4,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd6b988; end: 10bd6b9d7; -[GPBInt32ObjectDictionary enumerateForTextFormat:] */

void FUN_10bd6b988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6b9d8;
  puStack_20 = &UNK_110d9f918;
  uStack_18 = param_3;
  func_0x00010bf97ce0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6b9d8; end: 10bd6ba27;  */

void FUN_10bd6b9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
                    /* WARNING: Could not recover jumptable at 0x00010bd6ba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,param_3);
  return;
}



/* Entry: 10bd6ba28; end: 10bd6ba57; -[GPBInt32ObjectDictionary objectForKey:] */

void FUN_10bd6ba28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_objectForKey__1126159e0,puVar1);
  return;
}



/* Entry: 10bd6ba58; end: 10bd6ba9b; -[GPBInt32ObjectDictionary addEntriesFromDictionary:] */

long FUN_10bd6ba58(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6ba9c; end: 10bd6bb2b; -[GPBInt32ObjectDictionary setObject:forKey:] */

long FUN_10bd6ba9c(long param_1,undefined8 param_2,long param_3)

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
  
  if (param_3 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f6d8);
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



/* Entry: 10bd6bb2c; end: 10bd6bb5b; -[GPBInt32ObjectDictionary removeObjectForKey:] */

void FUN_10bd6bb2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd6bb5c; end: 10bd6bb63; -[GPBInt32ObjectDictionary removeAll] */

void FUN_10bd6bb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6bb64; end: 10bd6bb73; -[GPBUInt64UInt32Dictionary init] */

void FUN_10bd6bb64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd6bb74; end: 10bd6bc37; -[GPBUInt64UInt32Dictionary initWithUInt32s:forKeys:count:] */

undefined1 *
FUN_10bd6bb74(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e8a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd6bc38; end: 10bd6bc7f; -[GPBUInt64UInt32Dictionary initWithDictionary:] */

long FUN_10bd6bc38(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0576e0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd6bc80; end: 10bd6bc8f; -[GPBUInt64UInt32Dictionary initWithCapacity:] */

void FUN_10bd6bc80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd6bc90; end: 10bd6bcd7; -[GPBUInt64UInt32Dictionary dealloc] */

void FUN_10bd6bc90(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e8a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6bcd8; end: 10bd6bd03; -[GPBUInt64UInt32Dictionary copyWithZone:] */

void FUN_10bd6bcd8(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3128);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6bd04; end: 10bd6bd67; -[GPBUInt64UInt32Dictionary isEqual:] */

undefined8 FUN_10bd6bd04(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3128;
    _objc_opt_class(PTR_PTR_1126e3128);
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



/* Entry: 10bd6bd68; end: 10bd6bd6f; -[GPBUInt64UInt32Dictionary hash] */

void FUN_10bd6bd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6bd70; end: 10bd6bdbb; -[GPBUInt64UInt32Dictionary description] */

void FUN_10bd6bd70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6bdbc; end: 10bd6bdc3; -[GPBUInt64UInt32Dictionary count] */

void FUN_10bd6bdbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6bdc4; end: 10bd6be63; -[GPBUInt64UInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_10bd6bdc4(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c282800(lVar2);
    func_0x00010c282760(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd6be64; end: 10bd6bff7; -[GPBUInt64UInt32Dictionary computeSerializedSizeAsField:] */

void FUN_10bd6be64(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar2 = lVar3;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      func_0x00010c0e00e0(lVar3,param_2,lVar1);
      func_0x00010c282800(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x000107c3184c();
      }
      func_0x00010c282760();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd6bff8; end: 10bd6c1bf; -[GPBUInt64UInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6bff8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  lVar3 = param_4;
  func_0x00010c0b92a0();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar4 = lVar11;
  func_0x00010c0865c0();
  lVar5 = lVar4;
  func_0x00010c0d9ba0();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar11;
      func_0x00010c0e00e0(lVar11,param_2,lVar5);
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c282800(lVar5);
      func_0x00010c282760();
      iVar10 = (int)lVar3;
      if (iVar10 == 4) {
        iVar8 = 9;
      }
      else if (iVar10 == 0xc) {
        lVar7 = lVar5;
        func_0x000107c3184c(lVar5);
        iVar8 = (int)lVar7 + 1;
      }
      else {
        iVar8 = 0;
      }
      if (cVar2 == '\x01') {
        iVar9 = 5;
      }
      else if (cVar2 == '\v') {
        uVar12 = (uint)lVar6;
        if (uVar12 < 0x80) {
          iVar9 = 2;
        }
        else if (uVar12 < 0x4000) {
          iVar9 = 3;
        }
        else if (uVar12 < 0x200000) {
          iVar9 = 4;
        }
        else {
          iVar9 = 5;
          if (uVar12 >> 0x1c != 0) {
            iVar9 = 6;
          }
        }
      }
      else {
        iVar9 = 0;
      }
      func_0x00010c2bdf60(param_3,param_2,iVar9 + iVar8);
      if (iVar10 == 4) {
        func_0x00010c2bdd60(param_3,param_2,1,lVar5);
      }
      else if (iVar10 == 0xc) {
        func_0x00010c2be660(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x01') {
        func_0x00010c2bdd00(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\v') {
        func_0x00010c2be600(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00010c0d9ba0();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10bd6c1c0; end: 10bd6c213; -[GPBUInt64UInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6c1c0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd6c214; end: 10bd6c263; -[GPBUInt64UInt32Dictionary enumerateForTextFormat:] */

void FUN_10bd6c214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6c264;
  puStack_20 = &UNK_110d9f948;
  uStack_18 = param_3;
  func_0x00010bf97d40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6c264; end: 10bd6c2d3;  */

void FUN_10bd6c264(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd6c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6c2d4; end: 10bd6c32f; -[GPBUInt64UInt32Dictionary getUInt32:forKey:] */

bool FUN_10bd6c2d4(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c282760();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd6c330; end: 10bd6c373; -[GPBUInt64UInt32Dictionary addEntriesFromDictionary:] */

long FUN_10bd6c330(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6c374; end: 10bd6c3f3; -[GPBUInt64UInt32Dictionary setUInt32:forKey:] */

long FUN_10bd6c374(long param_1)

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
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd6c3f4; end: 10bd6c423; -[GPBUInt64UInt32Dictionary removeUInt32ForKey:] */

void FUN_10bd6c3f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd6c424; end: 10bd6c42b; -[GPBUInt64UInt32Dictionary removeAll] */

void FUN_10bd6c424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6c42c; end: 10bd6c43b; -[GPBUInt64Int32Dictionary init] */

void FUN_10bd6c42c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd6c43c; end: 10bd6c4ff; -[GPBUInt64Int32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_10bd6c43c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e8a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd6c500; end: 10bd6c547; -[GPBUInt64Int32Dictionary initWithDictionary:] */

long FUN_10bd6c500(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e4c0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd6c548; end: 10bd6c557; -[GPBUInt64Int32Dictionary initWithCapacity:] */

void FUN_10bd6c548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd6c558; end: 10bd6c59f; -[GPBUInt64Int32Dictionary dealloc] */

void FUN_10bd6c558(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e8a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6c5a0; end: 10bd6c5cb; -[GPBUInt64Int32Dictionary copyWithZone:] */

void FUN_10bd6c5a0(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3130);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6c5cc; end: 10bd6c62f; -[GPBUInt64Int32Dictionary isEqual:] */

undefined8 FUN_10bd6c5cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3130;
    _objc_opt_class(PTR_PTR_1126e3130);
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



/* Entry: 10bd6c630; end: 10bd6c637; -[GPBUInt64Int32Dictionary hash] */

void FUN_10bd6c630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6c638; end: 10bd6c683; -[GPBUInt64Int32Dictionary description] */

void FUN_10bd6c638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6c684; end: 10bd6c68b; -[GPBUInt64Int32Dictionary count] */

void FUN_10bd6c684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6c68c; end: 10bd6c72b; -[GPBUInt64Int32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_10bd6c68c(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c282800(lVar2);
    func_0x00010c067ec0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd6c72c; end: 10bd6c86f; -[GPBUInt64Int32Dictionary computeSerializedSizeAsField:] */

void FUN_10bd6c72c(long param_1,undefined8 param_2,int param_3)

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
      func_0x00010c0e00e0(lVar4);
      func_0x00010c282800(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x000107c3184c();
      }
      func_0x00010c067ec0(lVar3);
      FUN_10bd62d84();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd6c870; end: 10bd6c9e7; -[GPBUInt64Int32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6c870(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00010c0b92a0();
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00010c0865c0();
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    lVar4 = lVar5;
    func_0x00010c0e00e0(lVar5);
    func_0x00010c2bdf60(param_3);
    func_0x00010c282800(lVar3);
    func_0x00010c067ec0(lVar4);
    if ((int)param_4 == 4) {
      FUN_10bd62d84(lVar4,2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bdd60(param_3);
    }
    else if ((int)param_4 == 0xc) {
      func_0x000107c3184c(lVar3);
      FUN_10bd62d84(lVar4,2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2be660(param_3);
    }
    else {
      FUN_10bd62d84(lVar4,2,uVar1);
      func_0x00010c2bdf60(param_3);
    }
    FUN_10bd62f64(param_3,lVar4,2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd6c9e8; end: 10bd6ca3b; -[GPBUInt64Int32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6c9e8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd6ca3c; end: 10bd6ca8b; -[GPBUInt64Int32Dictionary enumerateForTextFormat:] */

void FUN_10bd6ca3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6ca8c;
  puStack_20 = &UNK_110d9f978;
  uStack_18 = param_3;
  func_0x00010bf97ca0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6ca8c; end: 10bd6cafb;  */

void FUN_10bd6ca8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd6caf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6cafc; end: 10bd6cb57; -[GPBUInt64Int32Dictionary getInt32:forKey:] */

bool FUN_10bd6cafc(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c067ec0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd6cb58; end: 10bd6cb9b; -[GPBUInt64Int32Dictionary addEntriesFromDictionary:] */

long FUN_10bd6cb58(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6cb9c; end: 10bd6cc1b; -[GPBUInt64Int32Dictionary setInt32:forKey:] */

long FUN_10bd6cb9c(long param_1)

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
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd6cc1c; end: 10bd6cc4b; -[GPBUInt64Int32Dictionary removeInt32ForKey:] */

void FUN_10bd6cc1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd6cc4c; end: 10bd6cc53; -[GPBUInt64Int32Dictionary removeAll] */

void FUN_10bd6cc4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6cc54; end: 10bd6cc63; -[GPBUInt64UInt64Dictionary init] */

void FUN_10bd6cc54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd6cc64; end: 10bd6cd27; -[GPBUInt64UInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_10bd6cc64(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e8b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd6cd28; end: 10bd6cd6f; -[GPBUInt64UInt64Dictionary initWithDictionary:] */

long FUN_10bd6cd28(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c057700(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd6cd70; end: 10bd6cd7f; -[GPBUInt64UInt64Dictionary initWithCapacity:] */

void FUN_10bd6cd70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd6cd80; end: 10bd6cdc7; -[GPBUInt64UInt64Dictionary dealloc] */

void FUN_10bd6cd80(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e8b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6cdc8; end: 10bd6cdf3; -[GPBUInt64UInt64Dictionary copyWithZone:] */

void FUN_10bd6cdc8(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3138);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6cdf4; end: 10bd6ce57; -[GPBUInt64UInt64Dictionary isEqual:] */

undefined8 FUN_10bd6cdf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3138;
    _objc_opt_class(PTR_PTR_1126e3138);
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



/* Entry: 10bd6ce58; end: 10bd6ce5f; -[GPBUInt64UInt64Dictionary hash] */

void FUN_10bd6ce58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6ce60; end: 10bd6ceab; -[GPBUInt64UInt64Dictionary description] */

void FUN_10bd6ce60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6ceac; end: 10bd6ceb3; -[GPBUInt64UInt64Dictionary count] */

void FUN_10bd6ceac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6ceb4; end: 10bd6cf53; -[GPBUInt64UInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_10bd6ceb4(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c282800(lVar2);
    func_0x00010c282800(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd6cf54; end: 10bd6d0b3; -[GPBUInt64UInt64Dictionary computeSerializedSizeAsField:] */

void FUN_10bd6cf54(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00010c0b92a0();
    lVar3 = lVar5;
    func_0x00010c0865c0();
    lVar2 = lVar3;
    func_0x00010c0d9ba0();
    while (lVar2 != 0) {
      lVar4 = lVar5;
      func_0x00010c0e00e0(lVar5,param_2,lVar2);
      func_0x00010c282800(lVar2);
      if (((int)param_3 != 4) && ((int)param_3 == 0xc)) {
        func_0x000107c3184c();
      }
      func_0x00010c282800(lVar4);
      if ((cVar1 != '\x04') && (cVar1 == '\f')) {
        func_0x000107c3184c();
      }
      lVar2 = lVar3;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd6d0b4; end: 10bd6d247; -[GPBUInt64UInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6d0b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  lVar3 = param_4;
  func_0x00010c0b92a0();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar4 = lVar10;
  func_0x00010c0865c0();
  lVar5 = lVar4;
  func_0x00010c0d9ba0();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar10;
      func_0x00010c0e00e0(lVar10,param_2,lVar5);
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c282800(lVar5);
      func_0x00010c282800(lVar6);
      iVar9 = (int)lVar3;
      if (iVar9 == 4) {
        iVar11 = 9;
      }
      else if (iVar9 == 0xc) {
        lVar7 = lVar5;
        func_0x000107c3184c(lVar5);
        iVar11 = (int)lVar7 + 1;
      }
      else {
        iVar11 = 0;
      }
      if (cVar2 == '\x04') {
        iVar8 = 9;
      }
      else if (cVar2 == '\f') {
        lVar7 = lVar6;
        func_0x000107c3184c(lVar6);
        iVar8 = (int)lVar7 + 1;
      }
      else {
        iVar8 = 0;
      }
      func_0x00010c2bdf60(param_3,param_2,iVar8 + iVar11);
      if (iVar9 == 4) {
        func_0x00010c2bdd60(param_3,param_2,1,lVar5);
      }
      else if (iVar9 == 0xc) {
        func_0x00010c2be660(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x04') {
        func_0x00010c2bdd60(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\f') {
        func_0x00010c2be660(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00010c0d9ba0();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10bd6d248; end: 10bd6d29b; -[GPBUInt64UInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6d248(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd6d29c; end: 10bd6d2eb; -[GPBUInt64UInt64Dictionary enumerateForTextFormat:] */

void FUN_10bd6d29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6d2ec;
  puStack_20 = &UNK_110d9f9a8;
  uStack_18 = param_3;
  func_0x00010bf97d60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6d2ec; end: 10bd6d363;  */

void FUN_10bd6d2ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd6d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6d364; end: 10bd6d3bf; -[GPBUInt64UInt64Dictionary getUInt64:forKey:] */

bool FUN_10bd6d364(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c282800();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd6d3c0; end: 10bd6d403; -[GPBUInt64UInt64Dictionary addEntriesFromDictionary:] */

long FUN_10bd6d3c0(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6d404; end: 10bd6d483; -[GPBUInt64UInt64Dictionary setUInt64:forKey:] */

long FUN_10bd6d404(long param_1)

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
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd6d484; end: 10bd6d4b3; -[GPBUInt64UInt64Dictionary removeUInt64ForKey:] */

void FUN_10bd6d484(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd6d4b4; end: 10bd6d4bb; -[GPBUInt64UInt64Dictionary removeAll] */

void FUN_10bd6d4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6d4bc; end: 10bd6d4cb; -[GPBUInt64Int64Dictionary init] */

void FUN_10bd6d4bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd6d4cc; end: 10bd6d58f; -[GPBUInt64Int64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_10bd6d4cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e8b8;
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
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd6d590; end: 10bd6d5d7; -[GPBUInt64Int64Dictionary initWithDictionary:] */

long FUN_10bd6d590(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e500(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd6d5d8; end: 10bd6d5e7; -[GPBUInt64Int64Dictionary initWithCapacity:] */

void FUN_10bd6d5d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd6d5e8; end: 10bd6d62f; -[GPBUInt64Int64Dictionary dealloc] */

void FUN_10bd6d5e8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e8b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


