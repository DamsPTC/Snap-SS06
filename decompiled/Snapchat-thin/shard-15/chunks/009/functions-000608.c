/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd797c0; end: 10bd797cf; -[GPBBoolUInt32Dictionary init] */

void FUN_10bd797c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd797d0; end: 10bd7984b; -[GPBBoolUInt32Dictionary initWithUInt32s:forKeys:count:] */

void FUN_10bd797d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e970;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 10bd7984c; end: 10bd798c3; -[GPBBoolUInt32Dictionary initWithDictionary:] */

void FUN_10bd7984c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010c0576e0(param_1,param_2,0,0,0);
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



/* Entry: 10bd798c4; end: 10bd798d3; -[GPBBoolUInt32Dictionary initWithCapacity:] */

void FUN_10bd798c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd798d4; end: 10bd798ff; -[GPBBoolUInt32Dictionary copyWithZone:] */

void FUN_10bd798d4(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31d8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd79900; end: 10bd7999f; -[GPBBoolUInt32Dictionary isEqual:] */

undefined8 FUN_10bd79900(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e31d8;
    _objc_opt_class(PTR_PTR_1126e31d8);
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



/* Entry: 10bd799a0; end: 10bd799af; -[GPBBoolUInt32Dictionary hash] */

long FUN_10bd799a0(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 10bd799b0; end: 10bd79a53; -[GPBBoolUInt32Dictionary description] */

undefined * FUN_10bd799b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f7b8);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f7d8);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd79a54; end: 10bd79a63; -[GPBBoolUInt32Dictionary count] */

long FUN_10bd79a54(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 10bd79a64; end: 10bd79a8b; -[GPBBoolUInt32Dictionary getUInt32:forKey:] */

void FUN_10bd79a64(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x18) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x10);
  }
  return;
}



/* Entry: 10bd79a8c; end: 10bd79aab; -[GPBBoolUInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd79a8c(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x18) = 1;
  return;
}



/* Entry: 10bd79aac; end: 10bd79b67; -[GPBBoolUInt32Dictionary enumerateForTextFormat:] */

void FUN_10bd79aac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb3938);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd79b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd79b68; end: 10bd79be3; -[GPBBoolUInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_10bd79b68(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd79be4; end: 10bd79cd7; -[GPBBoolUInt32Dictionary computeSerializedSizeAsField:] */

long FUN_10bd79be4(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd79cd8; end: 10bd79e2f; -[GPBBoolUInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd79cd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
      func_0x00010c2bdf60(param_3,param_2,iVar2 << 3 | 2);
      if (cVar4 == '\x01') {
        func_0x00010c2bdf60(param_3,param_2,7);
        func_0x00010c2bd900(param_3,param_2,1,uVar9);
        func_0x00010c2bdd00(param_3,param_2,2,*(undefined4 *)(lVar1 + lVar10 * 4));
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
        func_0x00010c2bdf60(param_3,param_2,uVar6);
        func_0x00010c2bd900(param_3,param_2,1,uVar9);
        func_0x00010c2be600(param_3,param_2,2,*(undefined4 *)(lVar1 + lVar10 * 4));
      }
      else {
        func_0x00010c2bdf60(param_3,param_2,2);
        func_0x00010c2bd900(param_3,param_2,1,uVar9);
      }
    }
    uVar9 = 1;
    lVar10 = 1;
    bVar5 = false;
  } while (bVar7);
  return;
}



/* Entry: 10bd79e30; end: 10bd79e8b; -[GPBBoolUInt32Dictionary addEntriesFromDictionary:] */

long FUN_10bd79e30(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x18 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x18 + lVar8) = 1;
        *(undefined4 *)(param_1 + 0x10 + lVar8 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar8 * 4);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd79e8c; end: 10bd79eb3; -[GPBBoolUInt32Dictionary setUInt32:forKey:] */

long FUN_10bd79e8c(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

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
  
  *(undefined4 *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x10) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x18) = 1;
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



/* Entry: 10bd79eb4; end: 10bd79ebf; -[GPBBoolUInt32Dictionary removeUInt32ForKey:] */

void FUN_10bd79eb4(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x18) = 0;
  return;
}



/* Entry: 10bd79ec0; end: 10bd79ec7; -[GPBBoolUInt32Dictionary removeAll] */

void FUN_10bd79ec0(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10bd79ec8; end: 10bd79ed7; -[GPBBoolInt32Dictionary init] */

void FUN_10bd79ec8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd79ed8; end: 10bd79f53; -[GPBBoolInt32Dictionary initWithInt32s:forKeys:count:] */

void FUN_10bd79ed8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e978;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 10bd79f54; end: 10bd79fcb; -[GPBBoolInt32Dictionary initWithDictionary:] */

void FUN_10bd79f54(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010c01e4c0(param_1,param_2,0,0,0);
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



/* Entry: 10bd79fcc; end: 10bd79fdb; -[GPBBoolInt32Dictionary initWithCapacity:] */

void FUN_10bd79fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd79fdc; end: 10bd7a007; -[GPBBoolInt32Dictionary copyWithZone:] */

void FUN_10bd79fdc(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31e0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7a008; end: 10bd7a0a7; -[GPBBoolInt32Dictionary isEqual:] */

undefined8 FUN_10bd7a008(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e31e0;
    _objc_opt_class(PTR_PTR_1126e31e0);
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



/* Entry: 10bd7a0a8; end: 10bd7a0b7; -[GPBBoolInt32Dictionary hash] */

long FUN_10bd7a0a8(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 10bd7a0b8; end: 10bd7a15b; -[GPBBoolInt32Dictionary description] */

undefined * FUN_10bd7a0b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f7f8);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f818);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7a15c; end: 10bd7a16b; -[GPBBoolInt32Dictionary count] */

long FUN_10bd7a15c(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 10bd7a16c; end: 10bd7a193; -[GPBBoolInt32Dictionary getInt32:forKey:] */

void FUN_10bd7a16c(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x18) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x10);
  }
  return;
}



/* Entry: 10bd7a194; end: 10bd7a1b3; -[GPBBoolInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7a194(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x18) = 1;
  return;
}



/* Entry: 10bd7a1b4; end: 10bd7a26f; -[GPBBoolInt32Dictionary enumerateForTextFormat:] */

void FUN_10bd7a1b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daf4f8);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd7a258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd7a270; end: 10bd7a2eb; -[GPBBoolInt32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_10bd7a270(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10bd7a2ec; end: 10bd7a3bb; -[GPBBoolInt32Dictionary computeSerializedSizeAsField:] */

long FUN_10bd7a2ec(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar10 = *(long *)(param_3 + 8);
  uVar2 = *(undefined1 *)(lVar10 + 0x1e);
  bVar4 = true;
  do {
    bVar7 = bVar4;
    if (*(char *)(param_1 + 0x18 + lVar6) == '\x01') {
      lVar8 = lVar8 + 1;
      uVar5 = (ulong)*(uint *)(param_1 + 0x10 + lVar6 * 4);
      FUN_10bd62d84(uVar5,2,uVar2);
      lVar9 = lVar9 + uVar5 + 3;
    }
    lVar6 = 1;
    bVar4 = false;
  } while (bVar7);
  uVar1 = *(uint *)(lVar10 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar10 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar10 = 2;
  }
  else {
    lVar6 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar6 = 5;
    }
    lVar10 = 3;
    if (0x1fffff < uVar3) {
      lVar10 = lVar6;
    }
  }
  return lVar9 + lVar10 * lVar8;
}



/* Entry: 10bd7a3bc; end: 10bd7a483; -[GPBBoolInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7a3bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x18 + lVar4) == '\x01') {
      func_0x00010c2bdf60(param_3);
      FUN_10bd62d84(*(undefined4 *)(param_1 + 0x10 + lVar4 * 4),2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bd900(param_3);
      FUN_10bd62f64(param_3,*(undefined4 *)(param_1 + 0x10 + lVar4 * 4),2,uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7a484; end: 10bd7a4df; -[GPBBoolInt32Dictionary addEntriesFromDictionary:] */

long FUN_10bd7a484(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x18 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x18 + lVar8) = 1;
        *(undefined4 *)(param_1 + 0x10 + lVar8 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar8 * 4);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7a4e0; end: 10bd7a507; -[GPBBoolInt32Dictionary setInt32:forKey:] */

long FUN_10bd7a4e0(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

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
  
  *(undefined4 *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x10) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x18) = 1;
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



/* Entry: 10bd7a508; end: 10bd7a513; -[GPBBoolInt32Dictionary removeInt32ForKey:] */

void FUN_10bd7a508(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x18) = 0;
  return;
}



/* Entry: 10bd7a514; end: 10bd7a51b; -[GPBBoolInt32Dictionary removeAll] */

void FUN_10bd7a514(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10bd7a51c; end: 10bd7a52b; -[GPBBoolUInt64Dictionary init] */

void FUN_10bd7a51c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd7a52c; end: 10bd7a5a7; -[GPBBoolUInt64Dictionary initWithUInt64s:forKeys:count:] */

void FUN_10bd7a52c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x20) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 10bd7a5a8; end: 10bd7a61f; -[GPBBoolUInt64Dictionary initWithDictionary:] */

void FUN_10bd7a5a8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010c057700(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar2 * 8);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 10bd7a620; end: 10bd7a62f; -[GPBBoolUInt64Dictionary initWithCapacity:] */

void FUN_10bd7a620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd7a630; end: 10bd7a65b; -[GPBBoolUInt64Dictionary copyWithZone:] */

void FUN_10bd7a630(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31e8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7a65c; end: 10bd7a6fb; -[GPBBoolUInt64Dictionary isEqual:] */

undefined8 FUN_10bd7a65c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e31e8;
    _objc_opt_class(PTR_PTR_1126e31e8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 10bd7a6fc; end: 10bd7a70b; -[GPBBoolUInt64Dictionary hash] */

long FUN_10bd7a6fc(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7a70c; end: 10bd7a7af; -[GPBBoolUInt64Dictionary description] */

undefined * FUN_10bd7a70c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f838);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f858);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7a7b0; end: 10bd7a7bf; -[GPBBoolUInt64Dictionary count] */

long FUN_10bd7a7b0(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7a7c0; end: 10bd7a7e7; -[GPBBoolUInt64Dictionary getUInt64:forKey:] */

void FUN_10bd7a7c0(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  if ((param_3 != (undefined8 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined8 *)(param_1 + (ulong)param_4 * 8 + 0x10);
  }
  return;
}



/* Entry: 10bd7a7e8; end: 10bd7a807; -[GPBBoolUInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7a7e8(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 10bd7a808; end: 10bd7a8c3; -[GPBBoolUInt64Dictionary enumerateForTextFormat:] */

void FUN_10bd7a808(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db1798);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd7a8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd7a8c4; end: 10bd7a93f; -[GPBBoolUInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_10bd7a8c4(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined8 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined8 *)(param_1 + 0x18),&bStack_21);
  }
  return;
}



/* Entry: 10bd7a940; end: 10bd7aa2f; -[GPBBoolUInt64Dictionary computeSerializedSizeAsField:] */

long FUN_10bd7a940(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = *(long *)(param_3 + 8);
  cVar2 = *(char *)(lVar9 + 0x1e);
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar5) == '\x01') {
      if (cVar2 == '\f') {
        lVar5 = *(long *)(param_1 + 0x10 + lVar5 * 8);
        func_0x000107c3184c(lVar5);
        lVar5 = lVar5 + 3;
      }
      else {
        lVar5 = 2;
        if (cVar2 == '\x04') {
          lVar5 = 0xb;
        }
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + lVar5 + 1;
    }
    lVar5 = 1;
    bVar4 = false;
  } while (bVar6);
  uVar1 = *(uint *)(lVar9 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar9 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar9 = 2;
  }
  else {
    lVar5 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar5 = 5;
    }
    lVar9 = 3;
    if (0x1fffff < uVar3) {
      lVar9 = lVar5;
    }
  }
  return lVar8 + lVar9 * lVar7;
}



/* Entry: 10bd7aa30; end: 10bd7ab4b; -[GPBBoolUInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7aa30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  
  uVar7 = 0;
  lVar8 = 0;
  cVar3 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar1 = param_1 + 0x10;
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar8) == '\x01') {
      func_0x00010c2bdf60(param_3,param_2,iVar2 << 3 | 2);
      if (cVar3 == '\x04') {
        func_0x00010c2bdf60(param_3,param_2,0xb);
        func_0x00010c2bd900(param_3,param_2,1,uVar7);
        func_0x00010c2bdd60(param_3,param_2,2,*(undefined8 *)(lVar1 + lVar8 * 8));
      }
      else if (cVar3 == '\f') {
        uVar5 = *(undefined8 *)(lVar1 + lVar8 * 8);
        func_0x000107c3184c(uVar5);
        func_0x00010c2bdf60(param_3,param_2,(int)uVar5 + 3);
        func_0x00010c2bd900(param_3,param_2,1,uVar7);
        func_0x00010c2be660(param_3,param_2,2,*(undefined8 *)(lVar1 + lVar8 * 8));
      }
      else {
        func_0x00010c2bdf60(param_3,param_2,2);
        func_0x00010c2bd900(param_3,param_2,1,uVar7);
      }
    }
    uVar7 = 1;
    lVar8 = 1;
    bVar4 = false;
  } while (bVar6);
  return;
}



/* Entry: 10bd7ab4c; end: 10bd7aba7; -[GPBBoolUInt64Dictionary addEntriesFromDictionary:] */

long FUN_10bd7ab4c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x20 + lVar8) = 1;
        *(undefined8 *)(param_1 + 0x10 + lVar8 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar8 * 8);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7aba8; end: 10bd7abcf; -[GPBBoolUInt64Dictionary setUInt64:forKey:] */

long FUN_10bd7aba8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  
  *(undefined8 *)(param_1 + (param_4 & 0xffffffff) * 8 + 0x10) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x20) = 1;
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



/* Entry: 10bd7abd0; end: 10bd7abdb; -[GPBBoolUInt64Dictionary removeUInt64ForKey:] */

void FUN_10bd7abd0(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 10bd7abdc; end: 10bd7abe3; -[GPBBoolUInt64Dictionary removeAll] */

void FUN_10bd7abdc(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10bd7abe4; end: 10bd7abf3; -[GPBBoolInt64Dictionary init] */

void FUN_10bd7abe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd7abf4; end: 10bd7ac6f; -[GPBBoolInt64Dictionary initWithInt64s:forKeys:count:] */

void FUN_10bd7abf4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e988;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x20) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 10bd7ac70; end: 10bd7ace7; -[GPBBoolInt64Dictionary initWithDictionary:] */

void FUN_10bd7ac70(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010c01e500(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar2 * 8);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 10bd7ace8; end: 10bd7acf7; -[GPBBoolInt64Dictionary initWithCapacity:] */

void FUN_10bd7ace8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt64s_forKeys_count__1125e5328,0,0,0);
  return;
}



/* Entry: 10bd7acf8; end: 10bd7ad23; -[GPBBoolInt64Dictionary copyWithZone:] */

void FUN_10bd7acf8(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31f0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7ad24; end: 10bd7adc3; -[GPBBoolInt64Dictionary isEqual:] */

undefined8 FUN_10bd7ad24(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e31f0;
    _objc_opt_class(PTR_PTR_1126e31f0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 10bd7adc4; end: 10bd7add3; -[GPBBoolInt64Dictionary hash] */

long FUN_10bd7adc4(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7add4; end: 10bd7ae77; -[GPBBoolInt64Dictionary description] */

undefined * FUN_10bd7add4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f878);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f898);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7ae78; end: 10bd7ae87; -[GPBBoolInt64Dictionary count] */

long FUN_10bd7ae78(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7ae88; end: 10bd7aeaf; -[GPBBoolInt64Dictionary getInt64:forKey:] */

void FUN_10bd7ae88(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  if ((param_3 != (undefined8 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined8 *)(param_1 + (ulong)param_4 * 8 + 0x10);
  }
  return;
}



/* Entry: 10bd7aeb0; end: 10bd7aecf; -[GPBBoolInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7aeb0(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 10bd7aed0; end: 10bd7af8b; -[GPBBoolInt64Dictionary enumerateForTextFormat:] */

void FUN_10bd7aed0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3bb8);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd7af74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd7af8c; end: 10bd7b007; -[GPBBoolInt64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_10bd7af8c(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined8 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined8 *)(param_1 + 0x18),&bStack_21);
  }
  return;
}



/* Entry: 10bd7b008; end: 10bd7b0d7; -[GPBBoolInt64Dictionary computeSerializedSizeAsField:] */

long FUN_10bd7b008(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = *(long *)(param_3 + 8);
  uVar2 = *(undefined1 *)(lVar9 + 0x1e);
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar5) == '\x01') {
      lVar7 = lVar7 + 1;
      lVar5 = *(long *)(param_1 + 0x10 + lVar5 * 8);
      FUN_10bd63f34(lVar5,2,uVar2);
      lVar8 = lVar8 + lVar5 + 3;
    }
    lVar5 = 1;
    bVar4 = false;
  } while (bVar6);
  uVar1 = *(uint *)(lVar9 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar9 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar9 = 2;
  }
  else {
    lVar5 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar5 = 5;
    }
    lVar9 = 3;
    if (0x1fffff < uVar3) {
      lVar9 = lVar5;
    }
  }
  return lVar8 + lVar9 * lVar7;
}



/* Entry: 10bd7b0d8; end: 10bd7b19f; -[GPBBoolInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7b0d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x20 + lVar4) == '\x01') {
      func_0x00010c2bdf60(param_3);
      FUN_10bd63f34(*(undefined8 *)(param_1 + 0x10 + lVar4 * 8),2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bd900(param_3);
      FUN_10bd64124(param_3,*(undefined8 *)(param_1 + 0x10 + lVar4 * 8),2,uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7b1a0; end: 10bd7b1fb; -[GPBBoolInt64Dictionary addEntriesFromDictionary:] */

long FUN_10bd7b1a0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x20 + lVar8) = 1;
        *(undefined8 *)(param_1 + 0x10 + lVar8 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar8 * 8);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7b1fc; end: 10bd7b223; -[GPBBoolInt64Dictionary setInt64:forKey:] */

long FUN_10bd7b1fc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  
  *(undefined8 *)(param_1 + (param_4 & 0xffffffff) * 8 + 0x10) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x20) = 1;
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



/* Entry: 10bd7b224; end: 10bd7b22f; -[GPBBoolInt64Dictionary removeInt64ForKey:] */

void FUN_10bd7b224(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 10bd7b230; end: 10bd7b237; -[GPBBoolInt64Dictionary removeAll] */

void FUN_10bd7b230(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10bd7b238; end: 10bd7b247; -[GPBBoolBoolDictionary init] */

void FUN_10bd7b238(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd7b248; end: 10bd7b2c3; -[GPBBoolBoolDictionary initWithBools:forKeys:count:] */

void FUN_10bd7b248(undefined8 param_1,undefined8 param_2,undefined1 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e990;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x12) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 10bd7b2c4; end: 10bd7b33b; -[GPBBoolBoolDictionary initWithDictionary:] */

void FUN_10bd7b2c4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010bff9220(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x12 + lVar2) == '\x01') {
        *(undefined1 *)(param_1 + 0x10 + lVar2) = *(undefined1 *)(param_3 + 0x10 + lVar2);
        *(undefined1 *)(param_1 + 0x12 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 10bd7b33c; end: 10bd7b34b; -[GPBBoolBoolDictionary initWithCapacity:] */

void FUN_10bd7b33c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBools_forKeys_count__1125dbe50,0,0,0)
  ;
  return;
}



/* Entry: 10bd7b34c; end: 10bd7b377; -[GPBBoolBoolDictionary copyWithZone:] */

void FUN_10bd7b34c(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e31f8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7b378; end: 10bd7b417; -[GPBBoolBoolDictionary isEqual:] */

undefined8 FUN_10bd7b378(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e31f8;
    _objc_opt_class(PTR_PTR_1126e31f8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x12) != *(char *)(param_3 + 0x12))) ||
        (*(char *)(param_1 + 0x13) != *(char *)(param_3 + 0x13))) ||
       (((*(char *)(param_1 + 0x12) != '\0' &&
         (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x13) != '\0' &&
         (*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 10bd7b418; end: 10bd7b427; -[GPBBoolBoolDictionary hash] */

long FUN_10bd7b418(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x13) + (ulong)*(byte *)(param_1 + 0x12);
}



/* Entry: 10bd7b428; end: 10bd7b4cb; -[GPBBoolBoolDictionary description] */

undefined * FUN_10bd7b428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x12) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f7f8);
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f818);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7b4cc; end: 10bd7b4db; -[GPBBoolBoolDictionary count] */

long FUN_10bd7b4cc(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x13) + (ulong)*(byte *)(param_1 + 0x12);
}



/* Entry: 10bd7b4dc; end: 10bd7b503; -[GPBBoolBoolDictionary getBool:forKey:] */

void FUN_10bd7b4dc(long param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  if ((param_3 != (undefined1 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x12) != '\0')) {
    *param_3 = *(undefined1 *)(param_1 + (ulong)param_4 + 0x10);
  }
  return;
}



/* Entry: 10bd7b504; end: 10bd7b51f; -[GPBBoolBoolDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7b504(long param_1,undefined8 param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x12) = 1;
  return;
}



/* Entry: 10bd7b520; end: 10bd7b5b3; -[GPBBoolBoolDictionary enumerateForTextFormat:] */

void FUN_10bd7b520(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (*(char *)(param_1 + 0x12) == '\x01') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if (*(char *)(param_1 + 0x10) == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,ppuVar1);
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if (*(char *)(param_1 + 0x11) == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bd7b5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,ppuVar1);
    return;
  }
  return;
}



/* Entry: 10bd7b5b4; end: 10bd7b62f; -[GPBBoolBoolDictionary enumerateKeysAndBoolsUsingBlock:] */

void FUN_10bd7b5b4(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x12) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined1 *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x13) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined1 *)(param_1 + 0x11),&bStack_21);
  }
  return;
}



/* Entry: 10bd7b630; end: 10bd7b6af; -[GPBBoolBoolDictionary computeSerializedSizeAsField:] */

long FUN_10bd7b630(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 0;
  lVar6 = 0;
  lVar7 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    bVar3 = *(byte *)(param_1 + 0x12 + lVar8);
    lVar1 = lVar7 + 5;
    if (bVar3 == 0) {
      lVar1 = lVar7;
    }
    lVar6 = lVar6 + (ulong)bVar3;
    lVar8 = 1;
    lVar7 = lVar1;
    bVar5 = false;
  } while (bVar9);
  uVar2 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar4 = uVar2 << 3;
  lVar7 = 4;
  if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
    lVar7 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < uVar4) {
    lVar8 = lVar7;
  }
  lVar7 = 2;
  if (0x3fff < uVar4) {
    lVar7 = lVar8;
  }
  lVar8 = 1;
  if (0x7f < uVar4) {
    lVar8 = lVar7;
  }
  return lVar1 + lVar8 * lVar6;
}



/* Entry: 10bd7b6b0; end: 10bd7b75f; -[GPBBoolBoolDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7b6b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x12 + lVar5) == '\x01') {
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c2bdf60(param_3,param_2,4);
      func_0x00010c2bd900(param_3,param_2,1,uVar4);
      func_0x00010c2bd900(param_3,param_2,2,*(undefined1 *)(param_1 + 0x10 + lVar5));
    }
    uVar4 = 1;
    lVar5 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7b760; end: 10bd7b7bb; -[GPBBoolBoolDictionary addEntriesFromDictionary:] */

long FUN_10bd7b760(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x12 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x12 + lVar8) = 1;
        *(undefined1 *)(param_1 + 0x10 + lVar8) = *(undefined1 *)(param_3 + 0x10 + lVar8);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7b7bc; end: 10bd7b7df; -[GPBBoolBoolDictionary setBool:forKey:] */

long FUN_10bd7b7bc(long param_1,undefined8 param_2,undefined1 param_3,ulong param_4)

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
  
  lVar1 = param_1 + (param_4 & 0xffffffff);
  *(undefined1 *)(lVar1 + 0x10) = param_3;
  *(undefined1 *)(lVar1 + 0x12) = 1;
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



/* Entry: 10bd7b7e0; end: 10bd7b7eb; -[GPBBoolBoolDictionary removeBoolForKey:] */

void FUN_10bd7b7e0(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x12) = 0;
  return;
}



/* Entry: 10bd7b7ec; end: 10bd7b7f3; -[GPBBoolBoolDictionary removeAll] */

void FUN_10bd7b7ec(long param_1)

{
  *(undefined2 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 10bd7b7f4; end: 10bd7b803; -[GPBBoolFloatDictionary init] */

void FUN_10bd7b7f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd7b804; end: 10bd7b87f; -[GPBBoolFloatDictionary initWithFloats:forKeys:count:] */

void FUN_10bd7b804(undefined8 param_1,undefined8 param_2,undefined4 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e998;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 10bd7b880; end: 10bd7b8f7; -[GPBBoolFloatDictionary initWithDictionary:] */

void FUN_10bd7b880(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010c0138e0(param_1,param_2,0,0,0);
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



/* Entry: 10bd7b8f8; end: 10bd7b907; -[GPBBoolFloatDictionary initWithCapacity:] */

void FUN_10bd7b8f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFloats_forKeys_count__1125e2808,0,0,0);
  return;
}



/* Entry: 10bd7b908; end: 10bd7b933; -[GPBBoolFloatDictionary copyWithZone:] */

void FUN_10bd7b908(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3200);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


