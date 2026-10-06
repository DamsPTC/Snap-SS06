/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0074f6d0; end: 0074f6ff; -[GPBInt32ObjectDictionary removeObjectForKey:] */

void FUN_0074f6d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 0074f700; end: 0074f707; -[GPBInt32ObjectDictionary removeAll] */

void FUN_0074f700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0074f708; end: 0074f717; -[GPBUInt64UInt32Dictionary init] */

void FUN_0074f708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 0074f718; end: 0074f7db; -[GPBUInt64UInt32Dictionary initWithUInt32s:forKeys:count:] */

undefined1 *
FUN_0074f718(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4790;
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
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0074f7dc; end: 0074f823; -[GPBUInt64UInt32Dictionary initWithDictionary:] */

long FUN_0074f7dc(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b60(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0074f824; end: 0074f833; -[GPBUInt64UInt32Dictionary initWithCapacity:] */

void FUN_0074f824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 0074f834; end: 0074f87b; -[GPBUInt64UInt32Dictionary dealloc] */

void FUN_0074f834(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4790;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0074f87c; end: 0074f8a7; -[GPBUInt64UInt32Dictionary copyWithZone:] */

void FUN_0074f87c(void)

{
  func_0x0077ec40(PTR_PTR_00ac3808);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0074f8a8; end: 0074f90b; -[GPBUInt64UInt32Dictionary isEqual:] */

undefined8 FUN_0074f8a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3808;
    _objc_opt_class(PTR_PTR_00ac3808);
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



/* Entry: 0074f90c; end: 0074f913; -[GPBUInt64UInt32Dictionary hash] */

void FUN_0074f90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0074f914; end: 0074f95f; -[GPBUInt64UInt32Dictionary description] */

void FUN_0074f914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 0074f960; end: 0074f967; -[GPBUInt64UInt32Dictionary count] */

void FUN_0074f960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0074f968; end: 0074fa07; -[GPBUInt64UInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_0074f968(long param_1,undefined8 param_2,long param_3)

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
    func_0x007930e0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0074fa08; end: 0074fb9b; -[GPBUInt64UInt32Dictionary computeSerializedSizeAsField:] */

void FUN_0074fa08(long param_1,undefined8 param_2,int param_3)

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
      func_0x007930e0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0074fb9c; end: 0074fd63; -[GPBUInt64UInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_0074fb9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar4 = lVar11;
  func_0x00788080();
  lVar5 = lVar4;
  func_0x00789980();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar11;
      func_0x00789f00(lVar11,param_2,lVar5);
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x00793120(lVar5);
      func_0x007930e0();
      iVar10 = (int)lVar3;
      if (iVar10 == 4) {
        iVar8 = 9;
      }
      else if (iVar10 == 0xc) {
        lVar7 = lVar5;
        func_0x00742934(lVar5);
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
      func_0x00794020(param_3,param_2,iVar9 + iVar8);
      if (iVar10 == 4) {
        func_0x00793ec0(param_3,param_2,1,lVar5);
      }
      else if (iVar10 == 0xc) {
        func_0x007944a0(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x01') {
        func_0x00793e60(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\v') {
        func_0x00794440(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00789980();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 0074fd64; end: 0074fdb7; -[GPBUInt64UInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0074fd64(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 0074fdb8; end: 0074fe07; -[GPBUInt64UInt32Dictionary enumerateForTextFormat:] */

void FUN_0074fdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0074fe08;
  puStack_20 = &UNK_00a20430;
  uStack_18 = param_3;
  func_0x00782bc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 0074fe08; end: 0074fe77;  */

void FUN_0074fe08(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074fe74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 0074fe78; end: 0074fed3; -[GPBUInt64UInt32Dictionary getUInt32:forKey:] */

bool FUN_0074fe78(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

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
    func_0x007930e0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 0074fed4; end: 0074ff17; -[GPBUInt64UInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0074fed4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 0074ff18; end: 0074ff97; -[GPBUInt64UInt32Dictionary setUInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0074ff18(long param_1)

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



/* Entry: 0074ff98; end: 0074ffc7; -[GPBUInt64UInt32Dictionary removeUInt32ForKey:] */

void FUN_0074ff98(long param_1)

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



/* Entry: 0074ffc8; end: 0074ffcf; -[GPBUInt64UInt32Dictionary removeAll] */

void FUN_0074ffc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0074ffd0; end: 0074ffdf; -[GPBUInt64Int32Dictionary init] */

void FUN_0074ffd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 0074ffe0; end: 007500a3; -[GPBUInt64Int32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_0074ffe0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4798;
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
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007500a4; end: 007500eb; -[GPBUInt64Int32Dictionary initWithDictionary:] */

long FUN_007500a4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785940(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 007500ec; end: 007500fb; -[GPBUInt64Int32Dictionary initWithCapacity:] */

void FUN_007500ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 007500fc; end: 00750143; -[GPBUInt64Int32Dictionary dealloc] */

void FUN_007500fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4798;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00750144; end: 0075016f; -[GPBUInt64Int32Dictionary copyWithZone:] */

void FUN_00750144(void)

{
  func_0x0077ec40(PTR_PTR_00ac3810);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00750170; end: 007501d3; -[GPBUInt64Int32Dictionary isEqual:] */

undefined8 FUN_00750170(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3810;
    _objc_opt_class(PTR_PTR_00ac3810);
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



/* Entry: 007501d4; end: 007501db; -[GPBUInt64Int32Dictionary hash] */

void FUN_007501d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007501dc; end: 00750227; -[GPBUInt64Int32Dictionary description] */

void FUN_007501dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00750228; end: 0075022f; -[GPBUInt64Int32Dictionary count] */

void FUN_00750228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00750230; end: 007502cf; -[GPBUInt64Int32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_00750230(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 007502d0; end: 00750413; -[GPBUInt64Int32Dictionary computeSerializedSizeAsField:] */

void FUN_007502d0(long param_1,undefined8 param_2,int param_3)

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
      func_0x00789f00(lVar4);
      func_0x00793120(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x00742934();
      }
      func_0x007871a0(lVar3);
      FUN_0074670c();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00750414; end: 0075058b; -[GPBUInt64Int32Dictionary writeToCodedOutputStream:asField:] */

void FUN_00750414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x007871a0(lVar4);
    if ((int)param_4 == 4) {
      FUN_0074670c(lVar4,2,uVar1);
      func_0x00794020(param_3);
      func_0x00793ec0(param_3);
    }
    else if ((int)param_4 == 0xc) {
      func_0x00742934(lVar3);
      FUN_0074670c(lVar4,2,uVar1);
      func_0x00794020(param_3);
      func_0x007944a0(param_3);
    }
    else {
      FUN_0074670c(lVar4,2,uVar1);
      func_0x00794020(param_3);
    }
    FUN_007468ec(param_3,lVar4,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 0075058c; end: 007505df; -[GPBUInt64Int32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075058c(long param_1,undefined8 param_2,undefined4 *param_3)

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



/* Entry: 007505e0; end: 0075062f; -[GPBUInt64Int32Dictionary enumerateForTextFormat:] */

void FUN_007505e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00750630;
  puStack_20 = &UNK_00a20460;
  uStack_18 = param_3;
  func_0x00782b20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00750630; end: 0075069f;  */

void FUN_00750630(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0075069c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 007506a0; end: 007506fb; -[GPBUInt64Int32Dictionary getInt32:forKey:] */

bool FUN_007506a0(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

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



/* Entry: 007506fc; end: 0075073f; -[GPBUInt64Int32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007506fc(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00750740; end: 007507bf; -[GPBUInt64Int32Dictionary setInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00750740(long param_1)

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



/* Entry: 007507c0; end: 007507ef; -[GPBUInt64Int32Dictionary removeInt32ForKey:] */

void FUN_007507c0(long param_1)

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



/* Entry: 007507f0; end: 007507f7; -[GPBUInt64Int32Dictionary removeAll] */

void FUN_007507f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 007507f8; end: 00750807; -[GPBUInt64UInt64Dictionary init] */

void FUN_007507f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 00750808; end: 007508cb; -[GPBUInt64UInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_00750808(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47a0;
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
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007508cc; end: 00750913; -[GPBUInt64UInt64Dictionary initWithDictionary:] */

long FUN_007508cc(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b80(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00750914; end: 00750923; -[GPBUInt64UInt64Dictionary initWithCapacity:] */

void FUN_00750914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 00750924; end: 0075096b; -[GPBUInt64UInt64Dictionary dealloc] */

void FUN_00750924(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0075096c; end: 00750997; -[GPBUInt64UInt64Dictionary copyWithZone:] */

void FUN_0075096c(void)

{
  func_0x0077ec40(PTR_PTR_00ac3818);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00750998; end: 007509fb; -[GPBUInt64UInt64Dictionary isEqual:] */

undefined8 FUN_00750998(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3818;
    _objc_opt_class(PTR_PTR_00ac3818);
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



/* Entry: 007509fc; end: 00750a03; -[GPBUInt64UInt64Dictionary hash] */

void FUN_007509fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00750a04; end: 00750a4f; -[GPBUInt64UInt64Dictionary description] */

void FUN_00750a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00750a50; end: 00750a57; -[GPBUInt64UInt64Dictionary count] */

void FUN_00750a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00750a58; end: 00750af7; -[GPBUInt64UInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_00750a58(long param_1,undefined8 param_2,long param_3)

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
    func_0x00793120(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00750af8; end: 00750c57; -[GPBUInt64UInt64Dictionary computeSerializedSizeAsField:] */

void FUN_00750af8(long param_1,undefined8 param_2,long param_3)

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
    func_0x00788e40();
    lVar3 = lVar5;
    func_0x00788080();
    lVar2 = lVar3;
    func_0x00789980();
    while (lVar2 != 0) {
      lVar4 = lVar5;
      func_0x00789f00(lVar5,param_2,lVar2);
      func_0x00793120(lVar2);
      if (((int)param_3 != 4) && ((int)param_3 == 0xc)) {
        func_0x00742934();
      }
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



/* Entry: 00750c58; end: 00750deb; -[GPBUInt64UInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_00750c58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar4 = lVar10;
  func_0x00788080();
  lVar5 = lVar4;
  func_0x00789980();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar10;
      func_0x00789f00(lVar10,param_2,lVar5);
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x00793120(lVar5);
      func_0x00793120(lVar6);
      iVar9 = (int)lVar3;
      if (iVar9 == 4) {
        iVar11 = 9;
      }
      else if (iVar9 == 0xc) {
        lVar7 = lVar5;
        func_0x00742934(lVar5);
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
        func_0x00742934(lVar6);
        iVar8 = (int)lVar7 + 1;
      }
      else {
        iVar8 = 0;
      }
      func_0x00794020(param_3,param_2,iVar8 + iVar11);
      if (iVar9 == 4) {
        func_0x00793ec0(param_3,param_2,1,lVar5);
      }
      else if (iVar9 == 0xc) {
        func_0x007944a0(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x04') {
        func_0x00793ec0(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\f') {
        func_0x007944a0(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00789980();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 00750dec; end: 00750e3f; -[GPBUInt64UInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00750dec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00750e40; end: 00750e8f; -[GPBUInt64UInt64Dictionary enumerateForTextFormat:] */

void FUN_00750e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00750e90;
  puStack_20 = &UNK_00a20490;
  uStack_18 = param_3;
  func_0x00782be0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00750e90; end: 00750f07;  */

void FUN_00750e90(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00750f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00750f08; end: 00750f63; -[GPBUInt64UInt64Dictionary getUInt64:forKey:] */

bool FUN_00750f08(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00793120();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00750f64; end: 00750fa7; -[GPBUInt64UInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00750f64(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 00750fa8; end: 00751027; -[GPBUInt64UInt64Dictionary setUInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00750fa8(long param_1)

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



/* Entry: 00751028; end: 00751057; -[GPBUInt64UInt64Dictionary removeUInt64ForKey:] */

void FUN_00751028(long param_1)

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



/* Entry: 00751058; end: 0075105f; -[GPBUInt64UInt64Dictionary removeAll] */

void FUN_00751058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00751060; end: 0075106f; -[GPBUInt64Int64Dictionary init] */

void FUN_00751060(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 00751070; end: 00751133; -[GPBUInt64Int64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_00751070(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47a8;
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
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00751134; end: 0075117b; -[GPBUInt64Int64Dictionary initWithDictionary:] */

long FUN_00751134(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785960(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 0075117c; end: 0075118b; -[GPBUInt64Int64Dictionary initWithCapacity:] */

void FUN_0075117c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 0075118c; end: 007511d3; -[GPBUInt64Int64Dictionary dealloc] */

void FUN_0075118c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007511d4; end: 007511ff; -[GPBUInt64Int64Dictionary copyWithZone:] */

void FUN_007511d4(void)

{
  func_0x0077ec40(PTR_PTR_00ac3820);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00751200; end: 00751263; -[GPBUInt64Int64Dictionary isEqual:] */

undefined8 FUN_00751200(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3820;
    _objc_opt_class(PTR_PTR_00ac3820);
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



/* Entry: 00751264; end: 0075126b; -[GPBUInt64Int64Dictionary hash] */

void FUN_00751264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 0075126c; end: 007512b7; -[GPBUInt64Int64Dictionary description] */

void FUN_0075126c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007512b8; end: 007512bf; -[GPBUInt64Int64Dictionary count] */

void FUN_007512b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007512c0; end: 0075135f; -[GPBUInt64Int64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_007512c0(long param_1,undefined8 param_2,long param_3)

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
    func_0x00788b40(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00751360; end: 007514a3; -[GPBUInt64Int64Dictionary computeSerializedSizeAsField:] */

void FUN_00751360(long param_1,undefined8 param_2,int param_3)

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
      func_0x00789f00(lVar4);
      func_0x00793120(lVar1);
      if ((param_3 != 4) && (param_3 == 0xc)) {
        func_0x00742934();
      }
      func_0x00788b40(lVar3);
      FUN_007478bc();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007514a4; end: 0075161b; -[GPBUInt64Int64Dictionary writeToCodedOutputStream:asField:] */

void FUN_007514a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00788b40(lVar4);
    if ((int)param_4 == 4) {
      FUN_007478bc(lVar4,2,uVar1);
      func_0x00794020(param_3);
      func_0x00793ec0(param_3);
    }
    else if ((int)param_4 == 0xc) {
      func_0x00742934(lVar3);
      FUN_007478bc(lVar4,2,uVar1);
      func_0x00794020(param_3);
      func_0x007944a0(param_3);
    }
    else {
      FUN_007478bc(lVar4,2,uVar1);
      func_0x00794020(param_3);
    }
    FUN_00747aac(param_3,lVar4,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 0075161c; end: 0075166f; -[GPBUInt64Int64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0075161c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00751670; end: 007516bf; -[GPBUInt64Int64Dictionary enumerateForTextFormat:] */

void FUN_00751670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007516c0;
  puStack_20 = &UNK_00a204c0;
  uStack_18 = param_3;
  func_0x00782b40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007516c0; end: 0075172f;  */

void FUN_007516c0(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0075172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00751730; end: 0075178b; -[GPBUInt64Int64Dictionary getInt64:forKey:] */

bool FUN_00751730(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00788b40();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 0075178c; end: 007517cf; -[GPBUInt64Int64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_0075178c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 007517d0; end: 0075184f; -[GPBUInt64Int64Dictionary setInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007517d0(long param_1)

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



/* Entry: 00751850; end: 0075187f; -[GPBUInt64Int64Dictionary removeInt64ForKey:] */

void FUN_00751850(long param_1)

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



/* Entry: 00751880; end: 00751887; -[GPBUInt64Int64Dictionary removeAll] */

void FUN_00751880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00751888; end: 00751897; -[GPBUInt64BoolDictionary init] */

void FUN_00751888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 00751898; end: 0075195b; -[GPBUInt64BoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_00751898(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac47b0;
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
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0075195c; end: 007519a3; -[GPBUInt64BoolDictionary initWithDictionary:] */

long FUN_0075195c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00784dc0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 007519a4; end: 007519b3; -[GPBUInt64BoolDictionary initWithCapacity:] */

void FUN_007519a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 007519b4; end: 007519fb; -[GPBUInt64BoolDictionary dealloc] */

void FUN_007519b4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac47b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007519fc; end: 00751a27; -[GPBUInt64BoolDictionary copyWithZone:] */

void FUN_007519fc(void)

{
  func_0x0077ec40(PTR_PTR_00ac3828);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00751a28; end: 00751a8b; -[GPBUInt64BoolDictionary isEqual:] */

undefined8 FUN_00751a28(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3828;
    _objc_opt_class(PTR_PTR_00ac3828);
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



/* Entry: 00751a8c; end: 00751a93; -[GPBUInt64BoolDictionary hash] */

void FUN_00751a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00751a94; end: 00751adf; -[GPBUInt64BoolDictionary description] */

void FUN_00751a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00751ae0; end: 00751ae7; -[GPBUInt64BoolDictionary count] */

void FUN_00751ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00751ae8; end: 00751b87; -[GPBUInt64BoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_00751ae8(long param_1,undefined8 param_2,long param_3)

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
    func_0x0077fbc0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00751b88; end: 00751cab; -[GPBUInt64BoolDictionary computeSerializedSizeAsField:] */

void FUN_00751b88(long param_1,undefined8 param_2,int param_3)

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
      func_0x0077fbc0(lVar3);
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00751cac; end: 00751dd7; -[GPBUInt64BoolDictionary writeToCodedOutputStream:asField:] */

void FUN_00751cac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_4;
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar3 = lVar7;
  func_0x00788080();
  lVar4 = lVar3;
  func_0x00789980();
  if (lVar4 != 0) {
    do {
      lVar5 = lVar7;
      func_0x00789f00(lVar7,param_2,lVar4);
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x00793120(lVar4);
      func_0x0077fbc0(lVar5);
      if ((int)lVar2 == 4) {
        func_0x00794020(param_3,param_2,0xb);
        func_0x00793ec0(param_3,param_2,1,lVar4);
      }
      else if ((int)lVar2 == 0xc) {
        lVar6 = lVar4;
        func_0x00742934(lVar4);
        func_0x00794020(param_3,param_2,(int)lVar6 + 3);
        func_0x007944a0(param_3,param_2,1,lVar4);
      }
      else {
        func_0x00794020(param_3,param_2,2);
      }
      func_0x00793c60(param_3,param_2,2,lVar5);
      lVar4 = lVar3;
      func_0x00789980();
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 00751dd8; end: 00751e2b; -[GPBUInt64BoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00751dd8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}


