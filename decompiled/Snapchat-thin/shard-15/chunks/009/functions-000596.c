/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd5cc24; end: 10bd5cc4b; -[GPBDoubleArray addValue:] */

void FUN_10bd5cc24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010befc840(param_2,param_3,&uStack_18,1);
  return;
}



/* Entry: 10bd5cc4c; end: 10bd5ccdf; -[GPBDoubleArray addValues:count:] */

void FUN_10bd5cc4c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar5 = *(long *)(param_1 + 0x18);
    uVar1 = lVar5 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x00010c069520(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar5 * 8,param_3,param_4 << 3);
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = lVar5;
      func_0x000107c61158();
      func_0x000107c41800();
      lVar8 = *(long *)(lVar4 + 8);
      lVar4 = lVar8;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      do {
        if (lVar4 == 0) {
code_r0x00010060c364:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
            return;
          }
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(lVar8);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar7 = lVar9;
          func_0x000107c433d8();
          if ((int)lVar7 == 1) {
            lVar7 = 0;
            if (*(long *)(lVar5 + 0x40) != 0) {
              lVar7 = *(long *)(*(long *)(lVar5 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
            }
            if (lVar7 == param_1) {
              piVar2 = (int *)&DAT_112796b30;
              if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
                piVar2 = (int *)&DAT_112796b34;
              }
              *(undefined8 *)(param_1 + *piVar2) = 0;
              func_0x000100109ff0(lVar5);
              goto code_r0x00010060c364;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar8;
        func_0x000107c4080c();
      } while( true );
    }
  }
  return;
}



/* Entry: 10bd5cce0; end: 10bd5cdbf; -[GPBDoubleArray insertValue:atIndex:] */

void FUN_10bd5cce0(long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar8 = *(long *)(param_1 + 0x18);
  uVar7 = lVar8 + 1;
  if (uVar7 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    lVar8 = *(long *)(param_1 + 0x18);
    uVar7 = lVar8 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar7) {
    func_0x00010c069520(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar7;
  if (lVar8 - param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x10) + param_3 * 8;
    _memmove(lVar3 + 8,lVar3,(lVar8 - param_3) * 8);
  }
  *(ulong *)(*(long *)(param_1 + 0x10) + param_3 * 8) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    return;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar8;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar6);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar5 = lVar9;
      func_0x000107c433d8();
      if ((int)lVar5 == 1) {
        lVar5 = 0;
        if (*(long *)(lVar8 + 0x40) != 0) {
          lVar5 = *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18))
          ;
        }
        if (lVar5 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar8);
          goto code_r0x00010060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar6;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5cdc0; end: 10bd5ce2b; -[GPBDoubleArray replaceValueAtIndex:withValue:] */

void FUN_10bd5cdc0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  if (*(ulong *)(param_2 + 0x18) <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined8 *)(*(long *)(param_2 + 0x10) + param_4 * 8) = param_1;
  return;
}



/* Entry: 10bd5ce2c; end: 10bd5ce37; -[GPBDoubleArray addValuesFromArray:] */

void FUN_10bd5ce2c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5ce38; end: 10bd5ceef; -[GPBDoubleArray removeValueAtIndex:] */

void FUN_10bd5ce38(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 8;
    _memmove(lVar1,lVar1 + 8,(uVar3 - param_3) * 8);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_internalResizeToCapacity__1125f7f58,(uVar3 & 0xfffffffffffffff0) + 0x10
              );
    return;
  }
  return;
}



/* Entry: 10bd5cef0; end: 10bd5cf0b; -[GPBDoubleArray removeAll] */

void FUN_10bd5cef0(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalResizeToCapacity__1125f7f58,0x10);
    return;
  }
  return;
}



/* Entry: 10bd5cf0c; end: 10bd5cfaf; -[GPBDoubleArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5cf0c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__NSRangeException_11034aaa0;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar2 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,*(undefined8 *)puVar1,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + param_3 * 8);
  *(undefined8 *)(lVar3 + param_3 * 8) = *(undefined8 *)(lVar3 + param_4 * 8);
  *(undefined8 *)(lVar3 + param_4 * 8) = uVar4;
  return;
}



/* Entry: 10bd5cfb0; end: 10bd5cfb7; -[GPBDoubleArray count] */

undefined8 FUN_10bd5cfb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5cfb8; end: 10bd5cfcb; +[GPBBoolArray array] */

void FUN_10bd5cfb8(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5cfcc; end: 10bd5cffb; +[GPBBoolArray arrayWithValue:] */

void FUN_10bd5cfcc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  _objc_alloc();
  func_0x00010c060580(param_1,param_2,&uStack_11,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5cffc; end: 10bd5d023; +[GPBBoolArray arrayWithValueArray:] */

void FUN_10bd5cffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5d024; end: 10bd5d04b; +[GPBBoolArray arrayWithCapacity:] */

void FUN_10bd5d024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5d04c; end: 10bd5d07f; -[GPBBoolArray init] */

void FUN_10bd5d04c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e7b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd5d080; end: 10bd5d08b; -[GPBBoolArray initWithValueArray:] */

void FUN_10bd5d080(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5d08c; end: 10bd5d12b; -[GPBBoolArray initWithValues:count:] */

long FUN_10bd5d08c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    }
    else {
      *(long *)(param_1 + 0x20) = param_4;
      _memcpy();
      *(long *)(param_1 + 0x18) = param_4;
    }
  }
  return param_1;
}



/* Entry: 10bd5d12c; end: 10bd5d16f; -[GPBBoolArray initWithCapacity:] */

long FUN_10bd5d12c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5d170; end: 10bd5d19b; -[GPBBoolArray copyWithZone:] */

void FUN_10bd5d170(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30a0);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5d19c; end: 10bd5d1e3; -[GPBBoolArray dealloc] */

void FUN_10bd5d19c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5d1e4; end: 10bd5d25b; -[GPBBoolArray isEqual:] */

bool FUN_10bd5d1e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    return true;
  }
  puVar1 = PTR_PTR_1126e30a0;
  _objc_opt_class(PTR_PTR_1126e30a0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _memcmp(uVar3,*(undefined8 *)(param_3 + 0x10));
    return (int)uVar3 == 0;
  }
  return false;
}



/* Entry: 10bd5d25c; end: 10bd5d263; -[GPBBoolArray hash] */

undefined8 FUN_10bd5d25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5d264; end: 10bd5d313; -[GPBBoolArray description] */

undefined * FUN_10bd5d264(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daf4f8;
      if (lVar4 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102f378;
      }
      func_0x00010bf06ba0(puVar2,param_2,ppuVar1);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar2;
}



/* Entry: 10bd5d314; end: 10bd5d31f; -[GPBBoolArray enumerateValuesWithBlock:] */

void FUN_10bd5d314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5d320; end: 10bd5d3d7; -[GPBBoolArray enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5d320(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  if ((param_3 >> 1 & 1) == 0) {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined1 *)(*(long *)(param_1 + 0x10) + lVar3),lVar3,&bStack_31);
        if ((bStack_31 & 1) != 0) {
          return;
        }
        bVar1 = lVar2 + -1 != lVar3;
        lVar3 = lVar3 + 1;
      } while (bVar1);
    }
  }
  else if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == -1) {
        return;
      }
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5d3d8; end: 10bd5d437; -[GPBBoolArray valueAtIndex:] */

undefined1 FUN_10bd5d3d8(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x10) + param_3);
}



/* Entry: 10bd5d438; end: 10bd5d49f; -[GPBBoolArray internalResizeToCapacity:] */

void FUN_10bd5d438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bd5d4a0; end: 10bd5d4c7; -[GPBBoolArray addValue:] */

void FUN_10bd5d4a0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  func_0x00010befc840(param_1,param_2,&uStack_11,1);
  return;
}



/* Entry: 10bd5d4c8; end: 10bd5d55b; -[GPBBoolArray addValues:count:] */

void FUN_10bd5d4c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar5 = *(long *)(param_1 + 0x18);
    uVar1 = lVar5 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x00010c069520(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    _memcpy(*(long *)(param_1 + 0x10) + lVar5,param_3,param_4);
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = lVar5;
      func_0x000107c61158();
      func_0x000107c41800();
      lVar8 = *(long *)(lVar4 + 8);
      lVar4 = lVar8;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      do {
        if (lVar4 == 0) {
code_r0x00010060c364:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
            return;
          }
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(lVar8);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar7 = lVar9;
          func_0x000107c433d8();
          if ((int)lVar7 == 1) {
            lVar7 = 0;
            if (*(long *)(lVar5 + 0x40) != 0) {
              lVar7 = *(long *)(*(long *)(lVar5 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
            }
            if (lVar7 == param_1) {
              piVar2 = (int *)&DAT_112796b30;
              if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
                piVar2 = (int *)&DAT_112796b34;
              }
              *(undefined8 *)(param_1 + *piVar2) = 0;
              func_0x000100109ff0(lVar5);
              goto code_r0x00010060c364;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar8;
        func_0x000107c4080c();
      } while( true );
    }
  }
  return;
}



/* Entry: 10bd5d55c; end: 10bd5d637; -[GPBBoolArray insertValue:atIndex:] */

void FUN_10bd5d55c(long param_1,undefined8 param_2,undefined1 param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + 0x18);
  uVar7 = lVar9 + 1;
  if (uVar7 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    lVar9 = *(long *)(param_1 + 0x18);
    uVar7 = lVar9 + 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar7) {
    func_0x00010c069520(param_1);
  }
  *(ulong *)(param_1 + 0x18) = uVar7;
  if (lVar9 - param_4 != 0) {
    lVar3 = *(long *)(param_1 + 0x10) + param_4;
    _memmove(lVar3 + 1,lVar3,lVar9 - param_4);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_4) = param_3;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    return;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar9;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar6);
      }
      lVar8 = *(long *)(lVar10 * 8);
      lVar5 = lVar8;
      func_0x000107c433d8();
      if ((int)lVar5 == 1) {
        lVar5 = 0;
        if (*(long *)(lVar9 + 0x40) != 0) {
          lVar5 = *(long *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18))
          ;
        }
        if (lVar5 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar9);
          goto code_r0x00010060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar6;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5d638; end: 10bd5d6a3; -[GPBBoolArray replaceValueAtIndex:withValue:] */

void FUN_10bd5d638(long param_1,undefined8 param_2,ulong param_3,undefined1 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_3) = param_4;
  return;
}



/* Entry: 10bd5d6a4; end: 10bd5d6af; -[GPBBoolArray addValuesFromArray:] */

void FUN_10bd5d6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5d6b0; end: 10bd5d763; -[GPBBoolArray removeValueAtIndex:] */

void FUN_10bd5d6b0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + param_3;
    _memmove(lVar1,lVar1 + 1,uVar3 - param_3);
  }
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_internalResizeToCapacity__1125f7f58,(uVar3 & 0xfffffffffffffff0) + 0x10
              );
    return;
  }
  return;
}



/* Entry: 10bd5d764; end: 10bd5d77f; -[GPBBoolArray removeAll] */

void FUN_10bd5d764(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalResizeToCapacity__1125f7f58,0x10);
    return;
  }
  return;
}



/* Entry: 10bd5d780; end: 10bd5d823; -[GPBBoolArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5d780(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__NSRangeException_11034aaa0;
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar3 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar3 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,*(undefined8 *)puVar2,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(lVar4 + param_3);
  *(undefined1 *)(lVar4 + param_3) = *(undefined1 *)(lVar4 + param_4);
  *(undefined1 *)(lVar4 + param_4) = uVar1;
  return;
}



/* Entry: 10bd5d824; end: 10bd5d82b; -[GPBBoolArray count] */

undefined8 FUN_10bd5d824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5d82c; end: 10bd5d847; +[GPBEnumArray array] */

void FUN_10bd5d82c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c0602e0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5d848; end: 10bd5d86f; +[GPBEnumArray arrayWithValidationFunction:] */

void FUN_10bd5d848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c0602e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5d870; end: 10bd5d8af; +[GPBEnumArray arrayWithValidationFunction:rawValue:] */

void FUN_10bd5d870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  _objc_alloc();
  func_0x00010c060320(param_1,param_2,param_3,&uStack_24,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5d8b0; end: 10bd5d8d7; +[GPBEnumArray arrayWithValueArray:] */

void FUN_10bd5d8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5d8d8; end: 10bd5d907; +[GPBEnumArray arrayWithValidationFunction:capacity:] */

void FUN_10bd5d8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00010c060300(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5d908; end: 10bd5d90f; -[GPBEnumArray init] */

void FUN_10bd5d908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0602f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithValidationFunction__1125f5ac8,0);
  return;
}



/* Entry: 10bd5d910; end: 10bd5d933; -[GPBEnumArray initWithValueArray:] */

void FUN_10bd5d910(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ad8,
             *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 10bd5d934; end: 10bd5d9d7; -[GPBEnumArray initWithValidationFunction:rawValues:count:] */

long FUN_10bd5d934(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  
  func_0x00010c0602e0();
  if (((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    lVar1 = *(long *)(param_1 + 0x18);
    _reallocf(lVar1,param_5 << 2);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      _objc_release(param_1);
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    }
    else {
      *(long *)(param_1 + 0x28) = param_5;
      _memcpy();
      *(long *)(param_1 + 0x20) = param_5;
    }
  }
  return param_1;
}



/* Entry: 10bd5d9d8; end: 10bd5da13; -[GPBEnumArray initWithValidationFunction:capacity:] */

long FUN_10bd5d9d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c0602e0();
  if ((param_4 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_4);
  }
  return param_1;
}



/* Entry: 10bd5da14; end: 10bd5da43; -[GPBEnumArray copyWithZone:] */

void FUN_10bd5da14(void)

{
  func_0x00010bf00e40(PTR_PTR_1126ae740);
                    /* WARNING: Could not recover jumptable at 0x00010c060330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5da44; end: 10bd5da8b; -[GPBEnumArray dealloc] */

void FUN_10bd5da44(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_11270e7c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5da8c; end: 10bd5db07; -[GPBEnumArray isEqual:] */

bool FUN_10bd5da8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126ae740;
    _objc_opt_class(PTR_PTR_1126ae740);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x18),*(long *)(param_1 + 0x20) << 2);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5db08; end: 10bd5db0f; -[GPBEnumArray hash] */

undefined8 FUN_10bd5db08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bd5db10; end: 10bd5dbd3; -[GPBEnumArray description] */

undefined * FUN_10bd5db10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daf4f8;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_11102f378;
      }
      func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd5dbd4; end: 10bd5dbdf; -[GPBEnumArray enumerateRawValuesWithBlock:] */

void FUN_10bd5dbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateRawValuesWithOptions_us_1125c39a0,0,param_3);
  return;
}



/* Entry: 10bd5dbe0; end: 10bd5dc97; -[GPBEnumArray enumerateRawValuesWithOptions:usingBlock:] */

void FUN_10bd5dbe0(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_3 >> 1 & 1) == 0) {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined4 *)(*(long *)(param_1 + 0x18) + lVar3 * 4),lVar3,&bStack_31);
        if ((bStack_31 & 1) != 0) {
          return;
        }
        bVar1 = lVar2 + -1 != lVar3;
        lVar3 = lVar3 + 1;
      } while (bVar1);
    }
  }
  else if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == -1) {
        return;
      }
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined4 *)(*(long *)(param_1 + 0x18) + lVar2 * 4),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5dc98; end: 10bd5dd0f; -[GPBEnumArray valueAtIndex:] */

int FUN_10bd5dc98(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + param_3 * 4);
  iVar2 = iVar1;
  (**(code **)(param_1 + 0x10))();
  if (iVar2 == 0) {
    iVar1 = -0x4524111;
  }
  return iVar1;
}



/* Entry: 10bd5dd10; end: 10bd5dd6f; -[GPBEnumArray rawValueAtIndex:] */

undefined4 FUN_10bd5dd10(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + param_3 * 4);
}



/* Entry: 10bd5dd70; end: 10bd5dd7b; -[GPBEnumArray enumerateValuesWithBlock:] */

void FUN_10bd5dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5dd7c; end: 10bd5de87; -[GPBEnumArray enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5dd7c(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  byte bStack_51;
  
  bStack_51 = 0;
  pcVar8 = *(code **)(param_1 + 0x10);
  if ((param_3 >> 1 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      lVar7 = 0;
      piVar6 = *(int **)(param_1 + 0x18);
      piVar2 = piVar6;
      do {
        piVar10 = piVar2 + 1;
        iVar1 = *piVar2;
        iVar4 = iVar1;
        (*pcVar8)();
        if (iVar4 == 0) {
          iVar1 = -0x4524111;
        }
        (**(code **)(param_4 + 0x10))(param_4,iVar1,lVar7,&bStack_51);
      } while (((bStack_51 & 1) == 0) &&
              (lVar7 = lVar7 + 1, piVar2 = piVar10, piVar10 < piVar6 + lVar5));
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar9 = *(ulong *)(param_1 + 0x18);
      uVar11 = (uVar9 + lVar5 * 4) - 8;
      do {
        lVar5 = lVar5 + -1;
        iVar1 = *(int *)(uVar11 + 4);
        iVar4 = iVar1;
        (*pcVar8)();
        if (iVar4 == 0) {
          iVar1 = -0x4524111;
        }
        (**(code **)(param_4 + 0x10))(param_4,iVar1,lVar5,&bStack_51);
      } while (((bStack_51 & 1) == 0) && (bVar3 = uVar9 <= uVar11, uVar11 = uVar11 - 4, bVar3));
    }
  }
  return;
}



/* Entry: 10bd5de88; end: 10bd5deaf; -[GPBEnumArray addRawValue:] */

void FUN_10bd5de88(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  func_0x00010befad00(param_1,param_2,&uStack_14,1);
  return;
}



/* Entry: 10bd5deb0; end: 10bd5df43; -[GPBEnumArray addRawValues:count:] */

void FUN_10bd5deb0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar1 = lVar5 + param_4;
    if (*(ulong *)(param_1 + 0x28) < uVar1) {
      func_0x00010c069520(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    _memcpy(*(long *)(param_1 + 0x18) + lVar5 * 4,param_3,param_4 << 2);
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = lVar5;
      func_0x000107c61158();
      func_0x000107c41800();
      lVar8 = *(long *)(lVar4 + 8);
      lVar4 = lVar8;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      do {
        if (lVar4 == 0) {
code_r0x00010060c364:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
            return;
          }
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(lVar8);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar7 = lVar9;
          func_0x000107c433d8();
          if ((int)lVar7 == 1) {
            lVar7 = 0;
            if (*(long *)(lVar5 + 0x40) != 0) {
              lVar7 = *(long *)(*(long *)(lVar5 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
            }
            if (lVar7 == param_1) {
              piVar2 = (int *)&DAT_112796b30;
              if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
                piVar2 = (int *)&DAT_112796b34;
              }
              *(undefined8 *)(param_1 + *piVar2) = 0;
              func_0x000100109ff0(lVar5);
              goto code_r0x00010060c364;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar8;
        func_0x000107c4080c();
      } while( true );
    }
  }
  return;
}



/* Entry: 10bd5df44; end: 10bd5e023; -[GPBEnumArray insertRawValue:atIndex:] */

void FUN_10bd5df44(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + 0x20);
  uVar7 = lVar9 + 1;
  if (uVar7 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    lVar9 = *(long *)(param_1 + 0x20);
    uVar7 = lVar9 + 1;
  }
  if (*(ulong *)(param_1 + 0x28) < uVar7) {
    func_0x00010c069520(param_1);
  }
  *(ulong *)(param_1 + 0x20) = uVar7;
  if (lVar9 - param_4 != 0) {
    lVar3 = *(long *)(param_1 + 0x18) + param_4 * 4;
    _memmove(lVar3 + 4,lVar3,(lVar9 - param_4) * 4);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + param_4 * 4) = param_3;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    return;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar9;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar6);
      }
      lVar8 = *(long *)(lVar10 * 8);
      lVar5 = lVar8;
      func_0x000107c433d8();
      if ((int)lVar5 == 1) {
        lVar5 = 0;
        if (*(long *)(lVar9 + 0x40) != 0) {
          lVar5 = *(long *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18))
          ;
        }
        if (lVar5 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar9);
          goto code_r0x00010060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar6;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5e024; end: 10bd5e08f; -[GPBEnumArray replaceValueAtIndex:withRawValue:] */

void FUN_10bd5e024(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + param_3 * 4) = param_4;
  return;
}



/* Entry: 10bd5e090; end: 10bd5e09b; -[GPBEnumArray addRawValuesFromArray:] */

void FUN_10bd5e090(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addRawValues_count__11259c4e8,*(undefined8 *)(param_3 + 0x18),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 10bd5e09c; end: 10bd5e153; -[GPBEnumArray removeValueAtIndex:] */

void FUN_10bd5e09c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  uVar3 = uVar2 - 1;
  if (uVar3 - param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x18) + param_3 * 4;
    _memmove(lVar1,lVar1 + 4,(uVar3 - param_3) * 4);
  }
  *(ulong *)(param_1 + 0x20) = uVar3;
  if (uVar2 + 0x1f < *(ulong *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_internalResizeToCapacity__1125f7f58,(uVar3 & 0xfffffffffffffff0) + 0x10
              );
    return;
  }
  return;
}



/* Entry: 10bd5e154; end: 10bd5e16f; -[GPBEnumArray removeAll] */

void FUN_10bd5e154(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0x20 < *(ulong *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00010c069530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalResizeToCapacity__1125f7f58,0x10);
    return;
  }
  return;
}



/* Entry: 10bd5e170; end: 10bd5e213; -[GPBEnumArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5e170(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__NSRangeException_11034aaa0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  if (uVar3 <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,*(undefined8 *)puVar2,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(lVar4 + param_3 * 4);
  *(undefined4 *)(lVar4 + param_3 * 4) = *(undefined4 *)(lVar4 + param_4 * 4);
  *(undefined4 *)(lVar4 + param_4 * 4) = uVar1;
  return;
}



/* Entry: 10bd5e214; end: 10bd5e32f; -[GPBEnumArray insertValue:atIndex:] */

void FUN_10bd5e214(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x20) + 1U <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  uVar5 = param_3;
  (**(code **)(param_1 + 0x10))();
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  if ((uVar5 & 1) == 0) {
    _objc_opt_class();
    func_0x00010c11f020(puVar3);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar5 = lVar6 + 1;
  if (*(ulong *)(param_1 + 0x28) < uVar5) {
    func_0x00010c069520(param_1);
  }
  *(ulong *)(param_1 + 0x20) = uVar5;
  lVar6 = lVar6 - param_4;
  if (lVar6 != 0) {
    lVar4 = *(long *)(param_1 + 0x18) + param_4 * 4;
    _memmove(lVar4 + 4,lVar4,lVar6 * 4);
  }
  *(int *)(*(long *)(param_1 + 0x18) + param_4 * 4) = (int)param_3;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar6;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar9 = *(long *)(lVar4 + 8);
  lVar4 = lVar9;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar9);
      }
      lVar10 = *(long *)(lVar11 * 8);
      lVar8 = lVar10;
      func_0x000107c433d8();
      if ((int)lVar8 == 1) {
        lVar8 = 0;
        if (*(long *)(lVar6 + 0x40) != 0) {
          lVar8 = *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18)
                           );
        }
        if (lVar8 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar6);
          goto code_r0x00010060c364;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar9;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5e330; end: 10bd5e3e3; -[GPBEnumArray replaceValueAtIndex:withValue:] */

void FUN_10bd5e330(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(ulong *)(param_1 + 0x20) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  uVar2 = param_4;
  (**(code **)(param_1 + 0x10))();
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50;
    _objc_opt_class();
    func_0x00010c11f020(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_11102f478);
  }
  *(int *)(*(long *)(param_1 + 0x18) + param_3 * 4) = (int)param_4;
  return;
}



/* Entry: 10bd5e3e4; end: 10bd5e3eb; -[GPBEnumArray validationFunc] */

undefined8 FUN_10bd5e3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd5e3ec; end: 10bd5e3fb; -[GPBAutocreatedArray objectAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),PTR_s_objectAtIndex__112615960);
  return;
}



/* Entry: 10bd5e3fc; end: 10bd5e40b; -[GPBAutocreatedArray removeObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 10bd5e40c; end: 10bd5e41b; -[GPBAutocreatedArray removeObjectAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e40c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),PTR_s_removeObjectAtIndex__112628f10);
  return;
}



/* Entry: 10bd5e41c; end: 10bd5e48f; -[GPBAutocreatedArray addObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e41c(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = (long)_DAT_112796b2c;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar8) = puVar4;
  }
  func_0x00010befa120();
  lVar8 = *(long *)(param_1 + _DAT_112796b30);
  if (lVar8 == 0) {
    return;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar8;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar7 = *(long *)(lVar3 + 8);
  lVar3 = lVar7;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
code_r0x00010060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar7);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar6 = lVar9;
      func_0x000107c433d8();
      if ((int)lVar6 == 1) {
        lVar6 = 0;
        if (*(long *)(lVar8 + 0x40) != 0) {
          lVar6 = *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18))
          ;
        }
        if (lVar6 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          func_0x000100109ff0(lVar8);
          goto code_r0x00010060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar7;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10bd5e490; end: 10bd5e49f; -[GPBAutocreatedArray removeLastObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),PTR_s_removeLastObject_112628d78);
  return;
}



/* Entry: 10bd5e4a0; end: 10bd5e4af; -[GPBAutocreatedArray replaceObjectAtIndex:withObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c130f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),
             PTR_s_replaceObjectAtIndex_withObject__112629df0);
  return;
}



/* Entry: 10bd5e4b0; end: 10bd5e4df; -[GPBAutocreatedArray mutableCopyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e4b0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112796b2c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d3cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112796b2c),PTR_s_mutableCopyWithZone__112612940);
    return;
  }
  func_0x00010bf00e40(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5e4e0; end: 10bd5e4ef; -[GPBAutocreatedArray enumerateObjectsUsingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e4e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),PTR_s_enumerateObjectsUsingBlock__1125c3948);
  return;
}



/* Entry: 10bd5e4f0; end: 10bd5e4ff; -[GPBAutocreatedArray enumerateObjectsWithOptions:usingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd5e4f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),
             PTR_s_enumerateObjectsWithOptions_usin_1125c3968);
  return;
}



/* Entry: 10bd5e500; end: 10bd5e5f3;  */

void FUN_10bd5e500(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c08fa60();
  if (param_2 != 0) {
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  }
  func_0x00010bf99240();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60();
  func_0x00010c11f000();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x000107c3aafc();
    if ((ulong)puVar2 >> 0x1f != 0) {
      FUN_10bd5e500(0xffffffffffffff9c,0);
    }
    func_0x000107c3ab04(puVar1,puVar2);
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bffa1e0();
    *(undefined **)(puVar1 + 0x10) = puVar2 + *(long *)(puVar1 + 0x10);
    return;
  }
  return;
}



/* Entry: 10bd5e5f4; end: 10bd5e667;  */

void FUN_10bd5e5f4(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c3aafc();
  if (uVar1 >> 0x1f != 0) {
    FUN_10bd5e500(0xffffffffffffff9c,0);
  }
  func_0x000107c3ab04(param_1,uVar1);
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bffa1e0();
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar1;
  return;
}



/* Entry: 10bd5e668; end: 10bd5e68f; +[GPBCodedInputStream streamWithData:] */

void FUN_10bd5e668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c008240(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5e690; end: 10bd5e697; -[GPBCodedInputStream readTag] */

void FUN_10bd5e690(long param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 + 8;
  if ((*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) ||
     (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    func_0x000100109638();
    *(uint *)(param_1 + 0x28) = uVar1;
    if (((uVar1 ^ 0xffffffff) & 6) == 0) {
      func_0x000107c3ab00(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f4f8);
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    if (uVar1 < 8) {
      func_0x000107c3ab00(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f518);
    }
  }
  return;
}



/* Entry: 10bd5e698; end: 10bd5e793; -[GPBCodedInputStream skipField:] */

undefined8 FUN_10bd5e698(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_3 & 7;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      func_0x000107c3aafc(param_1 + 8);
      return 1;
    }
    if (uVar1 != 1) {
      return 0;
    }
    func_0x000107c3ab04(param_1 + 8,8);
    lVar3 = *(long *)(param_1 + 0x18) + 8;
  }
  else if (uVar1 == 2) {
    uVar2 = param_1 + 8;
    func_0x000107c3aafc();
    if (uVar2 >> 0x1f != 0) {
      FUN_10bd5e500(0xffffffffffffff9c,0);
    }
    func_0x000107c3ab04(param_1 + 8,uVar2);
    lVar3 = *(long *)(param_1 + 0x18) + uVar2;
  }
  else {
    if (uVar1 == 3) {
      func_0x00010c23e2a0(param_1);
      if (*(uint *)(param_1 + 0x28) == (param_3 & 0xfffffff8 | 4)) {
        return 1;
      }
      FUN_10bd5e500(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f538);
      return 1;
    }
    if (uVar1 != 5) {
      return 0;
    }
    func_0x000107c3ab04(param_1 + 8,4);
    lVar3 = *(long *)(param_1 + 0x18) + 4;
  }
  *(long *)(param_1 + 0x18) = lVar3;
  return 1;
}



/* Entry: 10bd5e794; end: 10bd5e7cb; -[GPBCodedInputStream skipMessage] */

void FUN_10bd5e794(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  do {
    lVar1 = param_1 + 8;
    func_0x000107c3182c();
    if ((int)lVar1 == 0) {
      return;
    }
    uVar2 = param_1;
    func_0x00010c23e160(param_1,param_2,lVar1);
  } while ((uVar2 & 1) != 0);
  return;
}



/* Entry: 10bd5e7cc; end: 10bd5e7ef; -[GPBCodedInputStream isAtEnd] */

bool FUN_10bd5e7cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) {
    return true;
  }
  return *(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20);
}



/* Entry: 10bd5e7f0; end: 10bd5e7f7; -[GPBCodedInputStream position] */

undefined8 FUN_10bd5e7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5e7f8; end: 10bd5e83f; -[GPBCodedInputStream pushLimit:] */

ulong FUN_10bd5e7f8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(long *)(param_1 + 0x18) + param_3;
  if (uVar2 < uVar1) {
    FUN_10bd5e500(0xffffffffffffff9a,0);
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
  return uVar2;
}



/* Entry: 10bd5e840; end: 10bd5e847; -[GPBCodedInputStream popLimit:] */

void FUN_10bd5e840(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bd5e848; end: 10bd5e883; -[GPBCodedInputStream readDouble] */

undefined8 FUN_10bd5e848(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3ab04(param_1 + 8,8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return uVar1;
}



/* Entry: 10bd5e884; end: 10bd5e8bf; -[GPBCodedInputStream readFloat] */

undefined4 FUN_10bd5e884(long param_1)

{
  undefined4 uVar1;
  
  func_0x000107c3ab04(param_1 + 8,4);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  return uVar1;
}



/* Entry: 10bd5e8c0; end: 10bd5e8c7; -[GPBCodedInputStream readUInt64] */

ulong FUN_10bd5e8c0(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      func_0x000107c3ab00(0xffffffffffffff97,&PTR____CFConstantStringClassReference_11102f558);
      return 0;
    }
    func_0x0001001095dc((long *)(param_1 + 8),1);
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2 + 1;
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + lVar2);
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((char)bVar1 < '\0');
  return uVar3;
}



/* Entry: 10bd5e8c8; end: 10bd5e8cf; -[GPBCodedInputStream readInt64] */

ulong FUN_10bd5e8c8(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      func_0x000107c3ab00(0xffffffffffffff97,&PTR____CFConstantStringClassReference_11102f558);
      return 0;
    }
    func_0x0001001095dc((long *)(param_1 + 8),1);
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2 + 1;
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + lVar2);
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((char)bVar1 < '\0');
  return uVar3;
}



/* Entry: 10bd5e8d0; end: 10bd5e8e7; -[GPBCodedInputStream readInt32] */

void FUN_10bd5e8d0(long param_1)

{
  func_0x000107c3aafc(param_1 + 8);
  return;
}



/* Entry: 10bd5e8e8; end: 10bd5e923; -[GPBCodedInputStream readFixed64] */

undefined8 FUN_10bd5e8e8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3ab04(param_1 + 8,8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return uVar1;
}



/* Entry: 10bd5e924; end: 10bd5e95f; -[GPBCodedInputStream readFixed32] */

undefined4 FUN_10bd5e924(long param_1)

{
  undefined4 uVar1;
  
  func_0x000107c3ab04(param_1 + 8,4);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  return uVar1;
}



/* Entry: 10bd5e960; end: 10bd5e97f; -[GPBCodedInputStream readBool] */

bool FUN_10bd5e960(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c3aafc(param_1);
  return param_1 != 0;
}



/* Entry: 10bd5e980; end: 10bd5e997; -[GPBCodedInputStream readString] */

void FUN_10bd5e980(long param_1)

{
  func_0x000107c31830(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5e998; end: 10bd5ea2b; -[GPBCodedInputStream readGroup:message:extensionRegistry:] */

void FUN_10bd5e998(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (99 < uVar1) {
    FUN_10bd5e500(0xffffffffffffff96,0);
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar1 + 1;
  func_0x00010c0cabe0(param_4);
  if (*(uint *)(param_1 + 0x28) != (param_3 << 3 | 4U)) {
    FUN_10bd5e500(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f538);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  return;
}



/* Entry: 10bd5ea2c; end: 10bd5eab7; -[GPBCodedInputStream readUnknownGroup:message:] */

void FUN_10bd5ea2c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (99 < uVar1) {
    FUN_10bd5e500(0xffffffffffffff96,0);
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar1 + 1;
  func_0x00010c0cabc0(param_4);
  if (*(uint *)(param_1 + 0x28) != (param_3 << 3 | 4U)) {
    FUN_10bd5e500(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f538);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  return;
}



/* Entry: 10bd5eab8; end: 10bd5eacf; -[GPBCodedInputStream readBytes] */

void FUN_10bd5eab8(long param_1)

{
  func_0x000107c31834(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5ead0; end: 10bd5eae7; -[GPBCodedInputStream readUInt32] */

void FUN_10bd5ead0(long param_1)

{
  func_0x000107c3aafc(param_1 + 8);
  return;
}



/* Entry: 10bd5eae8; end: 10bd5eaff; -[GPBCodedInputStream readEnum] */

void FUN_10bd5eae8(long param_1)

{
  func_0x000107c3aafc(param_1 + 8);
  return;
}



/* Entry: 10bd5eb00; end: 10bd5eb3b; -[GPBCodedInputStream readSFixed32] */

undefined4 FUN_10bd5eb00(long param_1)

{
  undefined4 uVar1;
  
  func_0x000107c3ab04(param_1 + 8,4);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
  return uVar1;
}


