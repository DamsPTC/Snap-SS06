/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd68a18; end: 10bd68a97; -[GPBInt32UInt64Dictionary setUInt64:forKey:] */

long FUN_10bd68a18(long param_1)

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



/* Entry: 10bd68a98; end: 10bd68ac7; -[GPBInt32UInt64Dictionary removeUInt64ForKey:] */

void FUN_10bd68a98(long param_1)

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



/* Entry: 10bd68ac8; end: 10bd68acf; -[GPBInt32UInt64Dictionary removeAll] */

void FUN_10bd68ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd68ad0; end: 10bd68adf; -[GPBInt32Int64Dictionary init] */

void FUN_10bd68ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd68ae0; end: 10bd68ba3; -[GPBInt32Int64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_10bd68ae0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e870;
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
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd68ba4; end: 10bd68beb; -[GPBInt32Int64Dictionary initWithDictionary:] */

long FUN_10bd68ba4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e500(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd68bec; end: 10bd68bfb; -[GPBInt32Int64Dictionary initWithCapacity:] */

void FUN_10bd68bec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd68bfc; end: 10bd68c43; -[GPBInt32Int64Dictionary dealloc] */

void FUN_10bd68bfc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e870;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd68c44; end: 10bd68c6f; -[GPBInt32Int64Dictionary copyWithZone:] */

void FUN_10bd68c44(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3108);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd68c70; end: 10bd68cd3; -[GPBInt32Int64Dictionary isEqual:] */

undefined8 FUN_10bd68c70(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3108;
    _objc_opt_class(PTR_PTR_1126e3108);
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



/* Entry: 10bd68cd4; end: 10bd68cdb; -[GPBInt32Int64Dictionary hash] */

void FUN_10bd68cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd68cdc; end: 10bd68d27; -[GPBInt32Int64Dictionary description] */

void FUN_10bd68cdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd68d28; end: 10bd68d2f; -[GPBInt32Int64Dictionary count] */

void FUN_10bd68d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd68d30; end: 10bd68dcf; -[GPBInt32Int64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_10bd68d30(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c067ec0(lVar2);
    func_0x00010c0b4ca0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd68dd0; end: 10bd68efb; -[GPBInt32Int64Dictionary computeSerializedSizeAsField:] */

void FUN_10bd68dd0(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c0e00e0(lVar4);
      func_0x00010c067ec0(lVar1);
      FUN_10bd62d84();
      func_0x00010c0b4ca0(lVar3);
      FUN_10bd63f34();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd68efc; end: 10bd6901b; -[GPBInt32Int64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd68efc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010c0b4ca0(lVar4);
    FUN_10bd62d84(lVar3,1,param_4);
    FUN_10bd63f34(lVar4,2,uVar1);
    func_0x00010c2bdf60(param_3);
    FUN_10bd62f64(param_3,lVar3,1,param_4);
    FUN_10bd64124(param_3,lVar4,2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd6901c; end: 10bd6906f; -[GPBInt32Int64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6901c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd69070; end: 10bd690bf; -[GPBInt32Int64Dictionary enumerateForTextFormat:] */

void FUN_10bd69070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd690c0;
  puStack_20 = &UNK_110d9f858;
  uStack_18 = param_3;
  func_0x00010bf97cc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd690c0; end: 10bd6912f;  */

void FUN_10bd690c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd6912c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd69130; end: 10bd6918b; -[GPBInt32Int64Dictionary getInt64:forKey:] */

bool FUN_10bd69130(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c0b4ca0();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd6918c; end: 10bd691cf; -[GPBInt32Int64Dictionary addEntriesFromDictionary:] */

long FUN_10bd6918c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd691d0; end: 10bd6924f; -[GPBInt32Int64Dictionary setInt64:forKey:] */

long FUN_10bd691d0(long param_1)

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



/* Entry: 10bd69250; end: 10bd6927f; -[GPBInt32Int64Dictionary removeInt64ForKey:] */

void FUN_10bd69250(long param_1)

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



/* Entry: 10bd69280; end: 10bd69287; -[GPBInt32Int64Dictionary removeAll] */

void FUN_10bd69280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd69288; end: 10bd69297; -[GPBInt32BoolDictionary init] */

void FUN_10bd69288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd69298; end: 10bd6935b; -[GPBInt32BoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_10bd69298(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e878;
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
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd6935c; end: 10bd693a3; -[GPBInt32BoolDictionary initWithDictionary:] */

long FUN_10bd6935c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bff9220(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd693a4; end: 10bd693b3; -[GPBInt32BoolDictionary initWithCapacity:] */

void FUN_10bd693a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd693b4; end: 10bd693fb; -[GPBInt32BoolDictionary dealloc] */

void FUN_10bd693b4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e878;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd693fc; end: 10bd69427; -[GPBInt32BoolDictionary copyWithZone:] */

void FUN_10bd693fc(void)

{
  func_0x00010bf00e40(PTR_PTR_1126d7248);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd69428; end: 10bd6948b; -[GPBInt32BoolDictionary isEqual:] */

undefined8 FUN_10bd69428(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d7248;
    _objc_opt_class(PTR_PTR_1126d7248);
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



/* Entry: 10bd6948c; end: 10bd69493; -[GPBInt32BoolDictionary hash] */

void FUN_10bd6948c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd69494; end: 10bd694df; -[GPBInt32BoolDictionary description] */

void FUN_10bd69494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd694e0; end: 10bd694e7; -[GPBInt32BoolDictionary count] */

void FUN_10bd694e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd694e8; end: 10bd69587; -[GPBInt32BoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_10bd694e8(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c067ec0(lVar2);
    func_0x00010bf1f3c0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd69588; end: 10bd69697; -[GPBInt32BoolDictionary computeSerializedSizeAsField:] */

void FUN_10bd69588(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c0e00e0(lVar4);
      func_0x00010c067ec0(lVar1);
      FUN_10bd62d84();
      func_0x00010bf1f3c0(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd69698; end: 10bd6978f; -[GPBInt32BoolDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd69698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c0b92a0(param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  lVar2 = lVar1;
  func_0x00010c0d9ba0();
  while (lVar2 != 0) {
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c2bdf60(param_3);
    func_0x00010c067ec0(lVar2);
    func_0x00010bf1f3c0(lVar3);
    FUN_10bd62d84(lVar2,1,param_4);
    func_0x00010c2bdf60(param_3);
    FUN_10bd62f64(param_3,lVar2,1,param_4);
    func_0x00010c2bd900(param_3);
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd69790; end: 10bd697e3; -[GPBInt32BoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd69790(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd697e4; end: 10bd69833; -[GPBInt32BoolDictionary enumerateForTextFormat:] */

void FUN_10bd697e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd69834;
  puStack_20 = &UNK_110d9f888;
  uStack_18 = param_3;
  func_0x00010bf97c40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd69834; end: 10bd69897;  */

void FUN_10bd69834(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd69894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2,ppuVar1);
  return;
}



/* Entry: 10bd69898; end: 10bd698f3; -[GPBInt32BoolDictionary getBool:forKey:] */

bool FUN_10bd69898(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined1 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010bf1f3c0();
    *param_3 = (char)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd698f4; end: 10bd69937; -[GPBInt32BoolDictionary addEntriesFromDictionary:] */

long FUN_10bd698f4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd69938; end: 10bd699b7; -[GPBInt32BoolDictionary setBool:forKey:] */

long FUN_10bd69938(long param_1)

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



/* Entry: 10bd699b8; end: 10bd699e7; -[GPBInt32BoolDictionary removeBoolForKey:] */

void FUN_10bd699b8(long param_1)

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



/* Entry: 10bd699e8; end: 10bd699ef; -[GPBInt32BoolDictionary removeAll] */

void FUN_10bd699e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd699f0; end: 10bd699ff; -[GPBInt32FloatDictionary init] */

void FUN_10bd699f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd69a00; end: 10bd69ac3; -[GPBInt32FloatDictionary initWithFloats:forKeys:count:] */

undefined1 *
FUN_10bd69a00(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e880;
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
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd69ac4; end: 10bd69b0b; -[GPBInt32FloatDictionary initWithDictionary:] */

long FUN_10bd69ac4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0138e0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd69b0c; end: 10bd69b1b; -[GPBInt32FloatDictionary initWithCapacity:] */

void FUN_10bd69b0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd69b1c; end: 10bd69b63; -[GPBInt32FloatDictionary dealloc] */

void FUN_10bd69b1c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e880;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd69b64; end: 10bd69b8f; -[GPBInt32FloatDictionary copyWithZone:] */

void FUN_10bd69b64(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3110);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd69b90; end: 10bd69bf3; -[GPBInt32FloatDictionary isEqual:] */

undefined8 FUN_10bd69b90(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3110;
    _objc_opt_class(PTR_PTR_1126e3110);
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



/* Entry: 10bd69bf4; end: 10bd69bfb; -[GPBInt32FloatDictionary hash] */

void FUN_10bd69bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd69bfc; end: 10bd69c47; -[GPBInt32FloatDictionary description] */

void FUN_10bd69bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd69c48; end: 10bd69c4f; -[GPBInt32FloatDictionary count] */

void FUN_10bd69c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd69c50; end: 10bd69ceb; -[GPBInt32FloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_10bd69c50(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c067ec0(lVar2);
    func_0x00010bfb2c80(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd69cec; end: 10bd69dfb; -[GPBInt32FloatDictionary computeSerializedSizeAsField:] */

void FUN_10bd69cec(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c0e00e0(lVar4);
      func_0x00010c067ec0(lVar1);
      FUN_10bd62d84();
      func_0x00010bfb2c80(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd69dfc; end: 10bd69efb; -[GPBInt32FloatDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd69dfc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c0b92a0(param_5);
  lVar4 = *(long *)(param_2 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  lVar2 = lVar1;
  func_0x00010c0d9ba0();
  while (lVar2 != 0) {
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c2bdf60(param_4);
    func_0x00010c067ec0(lVar2);
    func_0x00010bfb2c80(lVar3);
    FUN_10bd62d84(lVar2,1,param_5);
    func_0x00010c2bdf60(param_4);
    FUN_10bd62f64(param_4,lVar2,1,param_5);
    func_0x00010c2bddc0(param_1,param_4);
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd69efc; end: 10bd69f4f; -[GPBInt32FloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd69efc(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd69f50; end: 10bd69f9f; -[GPBInt32FloatDictionary enumerateForTextFormat:] */

void FUN_10bd69f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd69fa0;
  puStack_20 = &UNK_110d9f8b8;
  uStack_18 = param_3;
  func_0x00010bf97c80(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd69fa0; end: 10bd6a023;  */

void FUN_10bd69fa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd6a020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6a024; end: 10bd6a07f; -[GPBInt32FloatDictionary getFloat:forKey:] */

bool FUN_10bd6a024(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  func_0x00010c0dff20(lVar2,param_3,puVar1);
  if ((param_4 != (undefined4 *)0x0) && (lVar2 != 0)) {
    func_0x00010bfb2c80(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 10bd6a080; end: 10bd6a0c3; -[GPBInt32FloatDictionary addEntriesFromDictionary:] */

long FUN_10bd6a080(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6a0c4; end: 10bd6a143; -[GPBInt32FloatDictionary setFloat:forKey:] */

long FUN_10bd6a0c4(long param_1)

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



/* Entry: 10bd6a144; end: 10bd6a173; -[GPBInt32FloatDictionary removeFloatForKey:] */

void FUN_10bd6a144(long param_1)

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



/* Entry: 10bd6a174; end: 10bd6a17b; -[GPBInt32FloatDictionary removeAll] */

void FUN_10bd6a174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6a17c; end: 10bd6a18b; -[GPBInt32DoubleDictionary init] */

void FUN_10bd6a17c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd6a18c; end: 10bd6a24f; -[GPBInt32DoubleDictionary initWithDoubles:forKeys:count:] */

undefined1 *
FUN_10bd6a18c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e888;
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
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd6a250; end: 10bd6a297; -[GPBInt32DoubleDictionary initWithDictionary:] */

long FUN_10bd6a250(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c00e3a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd6a298; end: 10bd6a2a7; -[GPBInt32DoubleDictionary initWithCapacity:] */

void FUN_10bd6a298(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd6a2a8; end: 10bd6a2ef; -[GPBInt32DoubleDictionary dealloc] */

void FUN_10bd6a2a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e888;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6a2f0; end: 10bd6a31b; -[GPBInt32DoubleDictionary copyWithZone:] */

void FUN_10bd6a2f0(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3118);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6a31c; end: 10bd6a37f; -[GPBInt32DoubleDictionary isEqual:] */

undefined8 FUN_10bd6a31c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3118;
    _objc_opt_class(PTR_PTR_1126e3118);
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



/* Entry: 10bd6a380; end: 10bd6a387; -[GPBInt32DoubleDictionary hash] */

void FUN_10bd6a380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6a388; end: 10bd6a3d3; -[GPBInt32DoubleDictionary description] */

void FUN_10bd6a388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6a3d4; end: 10bd6a3db; -[GPBInt32DoubleDictionary count] */

void FUN_10bd6a3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6a3dc; end: 10bd6a477; -[GPBInt32DoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_10bd6a3dc(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c067ec0(lVar2);
    func_0x00010bf885a0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd6a478; end: 10bd6a587; -[GPBInt32DoubleDictionary computeSerializedSizeAsField:] */

void FUN_10bd6a478(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c0e00e0(lVar4);
      func_0x00010c067ec0(lVar1);
      FUN_10bd62d84();
      func_0x00010bf885a0(lVar3);
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd6a588; end: 10bd6a687; -[GPBInt32DoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6a588(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c0b92a0(param_5);
  lVar4 = *(long *)(param_2 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  lVar2 = lVar1;
  func_0x00010c0d9ba0();
  while (lVar2 != 0) {
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c2bdf60(param_4);
    func_0x00010c067ec0(lVar2);
    func_0x00010bf885a0(lVar3);
    FUN_10bd62d84(lVar2,1,param_5);
    func_0x00010c2bdf60(param_4);
    FUN_10bd62f64(param_4,lVar2,1,param_5);
    func_0x00010c2bdbc0(param_1,param_4);
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd6a688; end: 10bd6a6db; -[GPBInt32DoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd6a688(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd6a6dc; end: 10bd6a72b; -[GPBInt32DoubleDictionary enumerateForTextFormat:] */

void FUN_10bd6a6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6a72c;
  puStack_20 = &UNK_110d9f8e8;
  uStack_18 = param_3;
  func_0x00010bf97c60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6a72c; end: 10bd6a7ab;  */

void FUN_10bd6a72c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd6a7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6a7ac; end: 10bd6a807; -[GPBInt32DoubleDictionary getDouble:forKey:] */

bool FUN_10bd6a7ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  func_0x00010c0dff20(lVar2,param_3,puVar1);
  if ((param_4 != (undefined8 *)0x0) && (lVar2 != 0)) {
    func_0x00010bf885a0(lVar2);
    *param_4 = param_1;
  }
  return lVar2 != 0;
}



/* Entry: 10bd6a808; end: 10bd6a84b; -[GPBInt32DoubleDictionary addEntriesFromDictionary:] */

long FUN_10bd6a808(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6a84c; end: 10bd6a8cb; -[GPBInt32DoubleDictionary setDouble:forKey:] */

long FUN_10bd6a84c(long param_1)

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



/* Entry: 10bd6a8cc; end: 10bd6a8fb; -[GPBInt32DoubleDictionary removeDoubleForKey:] */

void FUN_10bd6a8cc(long param_1)

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



/* Entry: 10bd6a8fc; end: 10bd6a903; -[GPBInt32DoubleDictionary removeAll] */

void FUN_10bd6a8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd6a904; end: 10bd6a917; -[GPBInt32EnumDictionary init] */

void FUN_10bd6a904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,0,0,0,0);
  return;
}



/* Entry: 10bd6a918; end: 10bd6a927; -[GPBInt32EnumDictionary initWithValidationFunction:] */

void FUN_10bd6a918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd6a928; end: 10bd6a9ff; -[GPBInt32EnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

undefined1 *
FUN_10bd6a928(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,long param_5,
             long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_11270e890;
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
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar4);
      }
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10bd6aa00; end: 10bd6aa5b; -[GPBInt32EnumDictionary initWithDictionary:] */

long FUN_10bd6aa00(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd6aa5c; end: 10bd6aa6b; -[GPBInt32EnumDictionary initWithValidationFunction:capacity:] */

void FUN_10bd6aa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd6aa6c; end: 10bd6aab3; -[GPBInt32EnumDictionary dealloc] */

void FUN_10bd6aa6c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e890;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6aab4; end: 10bd6aadf; -[GPBInt32EnumDictionary copyWithZone:] */

void FUN_10bd6aab4(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3120);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6aae0; end: 10bd6ab43; -[GPBInt32EnumDictionary isEqual:] */

undefined8 FUN_10bd6aae0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e3120;
    _objc_opt_class(PTR_PTR_1126e3120);
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



/* Entry: 10bd6ab44; end: 10bd6ab4b; -[GPBInt32EnumDictionary hash] */

void FUN_10bd6ab44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6ab4c; end: 10bd6ab97; -[GPBInt32EnumDictionary description] */

void FUN_10bd6ab4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6ab98; end: 10bd6ab9f; -[GPBInt32EnumDictionary count] */

void FUN_10bd6ab98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6aba0; end: 10bd6ac3f; -[GPBInt32EnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_10bd6aba0(long param_1,undefined8 param_2,long param_3)

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
    func_0x00010c067ec0(lVar2);
    func_0x00010c067ec0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd6ac40; end: 10bd6ada7; -[GPBInt32EnumDictionary computeSerializedSizeAsField:] */

void FUN_10bd6ac40(long param_1,undefined8 param_2,undefined8 param_3)

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
      func_0x00010c067ec0(lVar1);
      FUN_10bd62d84();
      func_0x00010c067ec0();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}


