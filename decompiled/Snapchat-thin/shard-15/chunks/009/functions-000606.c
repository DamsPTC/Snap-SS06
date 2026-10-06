/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd74abc; end: 10bd74ac3; -[GPBInt64EnumDictionary removeAll] */

void FUN_10bd74abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd74ac4; end: 10bd74b8b; -[GPBInt64EnumDictionary setEnum:forKey:] */

long FUN_10bd74ac4(long param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10bd74b8c; end: 10bd74b93; -[GPBInt64EnumDictionary validationFunc] */

undefined8 FUN_10bd74b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd74b94; end: 10bd74ba3; -[GPBInt64ObjectDictionary init] */

void FUN_10bd74b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObjects_forKeys_count__1125e9c78,0,0,0);
  return;
}



/* Entry: 10bd74ba4; end: 10bd74c97; -[GPBInt64ObjectDictionary initWithObjects:forKeys:count:] */

undefined1 *
FUN_10bd74ba4(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e928;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (long *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_3 == 0) {
          func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd74c98; end: 10bd74cdf; -[GPBInt64ObjectDictionary initWithDictionary:] */

long FUN_10bd74c98(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c030a00(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd74ce0; end: 10bd74cef; -[GPBInt64ObjectDictionary initWithCapacity:] */

void FUN_10bd74ce0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObjects_forKeys_count__1125e9c78,0,0,0);
  return;
}



/* Entry: 10bd74cf0; end: 10bd74d37; -[GPBInt64ObjectDictionary dealloc] */

void FUN_10bd74cf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e928;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd74d38; end: 10bd74d63; -[GPBInt64ObjectDictionary copyWithZone:] */

void FUN_10bd74d38(void)

{
  func_0x00010bf00e40(PTR_PTR_1126bbfd0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd74d64; end: 10bd74dc7; -[GPBInt64ObjectDictionary isEqual:] */

undefined8 FUN_10bd74d64(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126bbfd0;
    _objc_opt_class(PTR_PTR_1126bbfd0);
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



/* Entry: 10bd74dc8; end: 10bd74dcf; -[GPBInt64ObjectDictionary hash] */

void FUN_10bd74dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd74dd0; end: 10bd74e1b; -[GPBInt64ObjectDictionary description] */

void FUN_10bd74dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd74e1c; end: 10bd74e23; -[GPBInt64ObjectDictionary count] */

void FUN_10bd74e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd74e24; end: 10bd74eb7; -[GPBInt64ObjectDictionary enumerateKeysAndObjectsUsingBlock:] */

void FUN_10bd74e24(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c0b4ca0(lVar2);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd74eb8; end: 10bd74fa3; -[GPBInt64ObjectDictionary isInitialized] */

undefined * FUN_10bd74eb8(long param_1,undefined8 param_2)

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
        if ((int)puVar3 == 0) goto LAB_10bd74f70;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  puVar3 = (undefined *)0x1;
LAB_10bd74f70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126bbfd0;
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



/* Entry: 10bd74fa4; end: 10bd7504b; -[GPBInt64ObjectDictionary deepCopyWithZone:] */

undefined * FUN_10bd74fa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbfd0;
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



/* Entry: 10bd7504c; end: 10bd751b3; -[GPBInt64ObjectDictionary computeSerializedSizeAsField:] */

void FUN_10bd7504c(long param_1,undefined8 param_2,long param_3)

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
      func_0x00010c0b4ca0();
      FUN_10bd63f34();
      FUN_10bd61e10(lVar3,uVar1);
      lVar3 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd751b4; end: 10bd752bb; -[GPBInt64ObjectDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd751b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010c0b4ca0(lVar3);
    FUN_10bd63f34();
    FUN_10bd61e10(lVar4,uVar1);
    func_0x00010c2bdf60(param_3);
    FUN_10bd64124(param_3,lVar3,1,param_4);
    FUN_10bd61fac(param_3,lVar4,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd752bc; end: 10bd752f7; -[GPBInt64ObjectDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd752bc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,uVar3,puVar1);
  return;
}



/* Entry: 10bd752f8; end: 10bd75347; -[GPBInt64ObjectDictionary enumerateForTextFormat:] */

void FUN_10bd752f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd75348;
  puStack_20 = &UNK_110d9fc18;
  uStack_18 = param_3;
  func_0x00010bf97ce0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd75348; end: 10bd75397;  */

void FUN_10bd75348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bd75394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,param_3);
  return;
}



/* Entry: 10bd75398; end: 10bd753c7; -[GPBInt64ObjectDictionary objectForKey:] */

void FUN_10bd75398(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_objectForKey__1126159e0,puVar1);
  return;
}



/* Entry: 10bd753c8; end: 10bd7540b; -[GPBInt64ObjectDictionary addEntriesFromDictionary:] */

long FUN_10bd753c8(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd7540c; end: 10bd7549b; -[GPBInt64ObjectDictionary setObject:forKey:] */

long FUN_10bd7540c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd7549c; end: 10bd754cb; -[GPBInt64ObjectDictionary removeObjectForKey:] */

void FUN_10bd7549c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd754cc; end: 10bd754d3; -[GPBInt64ObjectDictionary removeAll] */

void FUN_10bd754cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd754d4; end: 10bd754e3; -[GPBStringUInt32Dictionary init] */

void FUN_10bd754d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd754e4; end: 10bd755cf; -[GPBStringUInt32Dictionary initWithUInt32s:forKeys:count:] */

undefined1 *
FUN_10bd754e4(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e930;
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
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd755d0; end: 10bd75617; -[GPBStringUInt32Dictionary initWithDictionary:] */

long FUN_10bd755d0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0576e0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd75618; end: 10bd75627; -[GPBStringUInt32Dictionary initWithCapacity:] */

void FUN_10bd75618(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd75628; end: 10bd7566f; -[GPBStringUInt32Dictionary dealloc] */

void FUN_10bd75628(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e930;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd75670; end: 10bd7569b; -[GPBStringUInt32Dictionary copyWithZone:] */

void FUN_10bd75670(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31b0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7569c; end: 10bd756ff; -[GPBStringUInt32Dictionary isEqual:] */

undefined8 FUN_10bd7569c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e31b0;
    _objc_opt_class(PTR_PTR_1126e31b0);
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



/* Entry: 10bd75700; end: 10bd75707; -[GPBStringUInt32Dictionary hash] */

void FUN_10bd75700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd75708; end: 10bd75753; -[GPBStringUInt32Dictionary description] */

void FUN_10bd75708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd75754; end: 10bd7575b; -[GPBStringUInt32Dictionary count] */

void FUN_10bd75754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd7575c; end: 10bd757df; -[GPBStringUInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_10bd7575c(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c282760();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 10bd757e0; end: 10bd7599f; -[GPBStringUInt32Dictionary computeSerializedSizeAsField:] */

void FUN_10bd757e0(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c282760();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd759a0; end: 10bd75b4f; -[GPBStringUInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd759a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00010c0b92a0(param_4);
  iVar5 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar13 = *(ulong *)(param_1 + 0x10);
  uVar8 = uVar13;
  func_0x00010c0865c0();
  uVar9 = uVar8;
  func_0x00010c0d9ba0();
  if (uVar9 != 0) {
    do {
      uVar10 = uVar13;
      func_0x00010c0e00e0(uVar13,param_2,uVar9);
      func_0x00010c2bdf60(param_3,param_2,iVar5 << 3 | 2);
      func_0x00010c282760();
      uVar11 = uVar9;
      func_0x00010c08fac0(uVar9,param_2,4);
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
        func_0x00010c2bdf60(param_3,param_2,iVar12 + 5);
        func_0x00010c2be420(param_3,param_2,1,uVar9);
        func_0x00010c2bdd00(param_3,param_2,2,uVar10);
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
        func_0x00010c2bdf60(param_3,param_2,iVar3 + iVar12);
        func_0x00010c2be420(param_3,param_2,1,uVar9);
        func_0x00010c2be600(param_3,param_2,2,uVar10);
      }
      else {
        func_0x00010c2bdf60(param_3,param_2,lVar1);
        func_0x00010c2be420(param_3,param_2,1,uVar9);
      }
      uVar9 = uVar8;
      func_0x00010c0d9ba0();
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 10bd75b50; end: 10bd75b8b; -[GPBStringUInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd75b50(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd75b8c; end: 10bd75bdb; -[GPBStringUInt32Dictionary enumerateForTextFormat:] */

void FUN_10bd75b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd75bdc;
  puStack_20 = &UNK_110d9fc48;
  uStack_18 = param_3;
  func_0x00010bf97d40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd75bdc; end: 10bd75c2b;  */

void FUN_10bd75bdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
                    /* WARNING: Could not recover jumptable at 0x00010bd75c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd75c2c; end: 10bd75c73; -[GPBStringUInt32Dictionary getUInt32:forKey:] */

bool FUN_10bd75c2c(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  if ((param_3 != (undefined4 *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00010c282760();
    *param_3 = (int)lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 10bd75c74; end: 10bd75cb7; -[GPBStringUInt32Dictionary addEntriesFromDictionary:] */

long FUN_10bd75c74(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd75cb8; end: 10bd75d47; -[GPBStringUInt32Dictionary setUInt32:forKey:] */

long FUN_10bd75cb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd75d48; end: 10bd75d4f; -[GPBStringUInt32Dictionary removeUInt32ForKey:] */

void FUN_10bd75d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd75d50; end: 10bd75d57; -[GPBStringUInt32Dictionary removeAll] */

void FUN_10bd75d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd75d58; end: 10bd75d67; -[GPBStringInt32Dictionary init] */

void FUN_10bd75d58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd75d68; end: 10bd75e53; -[GPBStringInt32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_10bd75d68(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e938;
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
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd75e54; end: 10bd75e9b; -[GPBStringInt32Dictionary initWithDictionary:] */

long FUN_10bd75e54(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e4c0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd75e9c; end: 10bd75eab; -[GPBStringInt32Dictionary initWithCapacity:] */

void FUN_10bd75e9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd75eac; end: 10bd75ef3; -[GPBStringInt32Dictionary dealloc] */

void FUN_10bd75eac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e938;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd75ef4; end: 10bd75f1f; -[GPBStringInt32Dictionary copyWithZone:] */

void FUN_10bd75ef4(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31b8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd75f20; end: 10bd75f83; -[GPBStringInt32Dictionary isEqual:] */

undefined8 FUN_10bd75f20(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e31b8;
    _objc_opt_class(PTR_PTR_1126e31b8);
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



/* Entry: 10bd75f84; end: 10bd75f8b; -[GPBStringInt32Dictionary hash] */

void FUN_10bd75f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd75f8c; end: 10bd75fd7; -[GPBStringInt32Dictionary description] */

void FUN_10bd75f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd75fd8; end: 10bd75fdf; -[GPBStringInt32Dictionary count] */

void FUN_10bd75fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd75fe0; end: 10bd76063; -[GPBStringInt32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_10bd75fe0(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd76064; end: 10bd761ef; -[GPBStringInt32Dictionary computeSerializedSizeAsField:] */

void FUN_10bd76064(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c067ec0();
      FUN_10bd62d84();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd761f0; end: 10bd7632f; -[GPBStringInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd761f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010c067ec0(lVar3);
    func_0x00010c08fac0();
    FUN_10bd62d84(lVar3,2,uVar1);
    func_0x00010c2bdf60(param_3);
    func_0x00010c2be420(param_3);
    FUN_10bd62f64(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd76330; end: 10bd7636b; -[GPBStringInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd76330(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

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



/* Entry: 10bd7636c; end: 10bd763bb; -[GPBStringInt32Dictionary enumerateForTextFormat:] */

void FUN_10bd7636c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd763bc;
  puStack_20 = &UNK_110d9fc78;
  uStack_18 = param_3;
  func_0x00010bf97ca0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd763bc; end: 10bd7640b;  */

void FUN_10bd763bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
                    /* WARNING: Could not recover jumptable at 0x00010bd76408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd7640c; end: 10bd76453; -[GPBStringInt32Dictionary getInt32:forKey:] */

bool FUN_10bd7640c(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

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



/* Entry: 10bd76454; end: 10bd76497; -[GPBStringInt32Dictionary addEntriesFromDictionary:] */

long FUN_10bd76454(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd76498; end: 10bd76527; -[GPBStringInt32Dictionary setInt32:forKey:] */

long FUN_10bd76498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10bd76528; end: 10bd7652f; -[GPBStringInt32Dictionary removeInt32ForKey:] */

void FUN_10bd76528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd76530; end: 10bd76537; -[GPBStringInt32Dictionary removeAll] */

void FUN_10bd76530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd76538; end: 10bd76547; -[GPBStringUInt64Dictionary init] */

void FUN_10bd76538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd76548; end: 10bd76633; -[GPBStringUInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_10bd76548(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e940;
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
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd76634; end: 10bd7667b; -[GPBStringUInt64Dictionary initWithDictionary:] */

long FUN_10bd76634(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c057700(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd7667c; end: 10bd7668b; -[GPBStringUInt64Dictionary initWithCapacity:] */

void FUN_10bd7667c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd7668c; end: 10bd766d3; -[GPBStringUInt64Dictionary dealloc] */

void FUN_10bd7668c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e940;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd766d4; end: 10bd766ff; -[GPBStringUInt64Dictionary copyWithZone:] */

void FUN_10bd766d4(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31c0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd76700; end: 10bd76763; -[GPBStringUInt64Dictionary isEqual:] */

undefined8 FUN_10bd76700(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e31c0;
    _objc_opt_class(PTR_PTR_1126e31c0);
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



/* Entry: 10bd76764; end: 10bd7676b; -[GPBStringUInt64Dictionary hash] */

void FUN_10bd76764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd7676c; end: 10bd767b7; -[GPBStringUInt64Dictionary description] */

void FUN_10bd7676c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd767b8; end: 10bd767bf; -[GPBStringUInt64Dictionary count] */

void FUN_10bd767b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd767c0; end: 10bd76843; -[GPBStringUInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_10bd767c0(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c282800();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}



/* Entry: 10bd76844; end: 10bd769f7; -[GPBStringUInt64Dictionary computeSerializedSizeAsField:] */

void FUN_10bd76844(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00010c0b92a0(param_3);
    lVar3 = lVar4;
    func_0x00010c0865c0();
    lVar2 = lVar3;
    func_0x00010c0d9ba0();
    while (lVar2 != 0) {
      func_0x00010c0e00e0(lVar4,param_2,lVar2);
      func_0x00010c08fac0(lVar2,param_2,4);
      func_0x00010c282800();
      if ((cVar1 != '\x04') && (cVar1 == '\f')) {
        func_0x000107c3184c();
      }
      lVar2 = lVar3;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd769f8; end: 10bd76b8f; -[GPBStringUInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd769f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00010c0b92a0(param_4);
  iVar3 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar10;
  func_0x00010c0865c0();
  uVar7 = uVar6;
  func_0x00010c0d9ba0();
  if (uVar7 != 0) {
    do {
      uVar8 = uVar10;
      func_0x00010c0e00e0(uVar10,param_2,uVar7);
      func_0x00010c2bdf60(param_3,param_2,iVar3 << 3 | 2);
      func_0x00010c282800(uVar8);
      uVar9 = uVar7;
      func_0x00010c08fac0(uVar7,param_2,4);
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
        func_0x00010c2bdf60(param_3,param_2,iVar11 + 9);
        func_0x00010c2be420(param_3,param_2,1,uVar7);
        func_0x00010c2bdd60(param_3,param_2,2,uVar8);
      }
      else if (cVar4 == '\f') {
        uVar9 = uVar8;
        func_0x000107c3184c(uVar8);
        func_0x00010c2bdf60(param_3,param_2,iVar11 + (int)uVar9 + 1);
        func_0x00010c2be420(param_3,param_2,1,uVar7);
        func_0x00010c2be660(param_3,param_2,2,uVar8);
      }
      else {
        func_0x00010c2bdf60(param_3,param_2,lVar1);
        func_0x00010c2be420(param_3,param_2,1,uVar7);
      }
      uVar7 = uVar6;
      func_0x00010c0d9ba0();
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 10bd76b90; end: 10bd76bcb; -[GPBStringUInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd76b90(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,puVar1,*param_4);
  return;
}



/* Entry: 10bd76bcc; end: 10bd76c1b; -[GPBStringUInt64Dictionary enumerateForTextFormat:] */

void FUN_10bd76bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd76c1c;
  puStack_20 = &UNK_110d9fca8;
  uStack_18 = param_3;
  func_0x00010bf97d60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd76c1c; end: 10bd76c6b;  */

void FUN_10bd76c1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
                    /* WARNING: Could not recover jumptable at 0x00010bd76c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
  return;
}



/* Entry: 10bd76c6c; end: 10bd76cb3; -[GPBStringUInt64Dictionary getUInt64:forKey:] */

bool FUN_10bd76c6c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  if ((param_3 != (long *)0x0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00010c282800();
    *param_3 = lVar2;
  }
  return lVar1 != 0;
}



/* Entry: 10bd76cb4; end: 10bd76cf7; -[GPBStringUInt64Dictionary addEntriesFromDictionary:] */

long FUN_10bd76cb4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd76cf8; end: 10bd76d87; -[GPBStringUInt64Dictionary setUInt64:forKey:] */

long FUN_10bd76cf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10bd76d88; end: 10bd76d8f; -[GPBStringUInt64Dictionary removeUInt64ForKey:] */

void FUN_10bd76d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd76d90; end: 10bd76d97; -[GPBStringUInt64Dictionary removeAll] */

void FUN_10bd76d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd76d98; end: 10bd76da7; -[GPBStringInt64Dictionary init] */

void FUN_10bd76d98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd76da8; end: 10bd76e93; -[GPBStringInt64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_10bd76da8(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e948;
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
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        param_4 = param_4 + 1;
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd76e94; end: 10bd76edb; -[GPBStringInt64Dictionary initWithDictionary:] */

long FUN_10bd76e94(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e500(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd76edc; end: 10bd76eeb; -[GPBStringInt64Dictionary initWithCapacity:] */

void FUN_10bd76edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd76eec; end: 10bd76f33; -[GPBStringInt64Dictionary dealloc] */

void FUN_10bd76eec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e948;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd76f34; end: 10bd76f5f; -[GPBStringInt64Dictionary copyWithZone:] */

void FUN_10bd76f34(void)

{
  func_0x00010bf00e40(PTR_PTR_1126db040);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd76f60; end: 10bd76fc3; -[GPBStringInt64Dictionary isEqual:] */

undefined8 FUN_10bd76f60(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126db040;
    _objc_opt_class(PTR_PTR_1126db040);
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



/* Entry: 10bd76fc4; end: 10bd76fcb; -[GPBStringInt64Dictionary hash] */

void FUN_10bd76fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd76fcc; end: 10bd77017; -[GPBStringInt64Dictionary description] */

void FUN_10bd76fcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd77018; end: 10bd7701f; -[GPBStringInt64Dictionary count] */

void FUN_10bd77018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd77020; end: 10bd770a3; -[GPBStringInt64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_10bd77020(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c0b4ca0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_31);
  } while (cStack_31 != '\x01');
  return;
}


