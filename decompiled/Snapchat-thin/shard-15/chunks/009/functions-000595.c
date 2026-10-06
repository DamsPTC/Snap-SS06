/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd5abac; end: 10bd5abb7; -[GPBUInt32Array addValuesFromArray:] */

void FUN_10bd5abac(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5abb8; end: 10bd5ac6f; -[GPBUInt32Array removeValueAtIndex:] */

void FUN_10bd5abb8(long param_1,undefined8 param_2,ulong param_3)

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
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 4;
    _memmove(lVar1,lVar1 + 4,(uVar3 - param_3) * 4);
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



/* Entry: 10bd5ac70; end: 10bd5ac8b; -[GPBUInt32Array removeAll] */

void FUN_10bd5ac70(long param_1)

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



/* Entry: 10bd5ac8c; end: 10bd5ad2f; -[GPBUInt32Array exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5ac8c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
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
  uVar1 = *(undefined4 *)(lVar4 + param_3 * 4);
  *(undefined4 *)(lVar4 + param_3 * 4) = *(undefined4 *)(lVar4 + param_4 * 4);
  *(undefined4 *)(lVar4 + param_4 * 4) = uVar1;
  return;
}



/* Entry: 10bd5ad30; end: 10bd5ad37; -[GPBUInt32Array count] */

undefined8 FUN_10bd5ad30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5ad38; end: 10bd5ad4b; +[GPBInt64Array array] */

void FUN_10bd5ad38(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5ad4c; end: 10bd5ad7b; +[GPBInt64Array arrayWithValue:] */

void FUN_10bd5ad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  _objc_alloc();
  func_0x00010c060580(param_1,param_2,&uStack_18,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5ad7c; end: 10bd5ada3; +[GPBInt64Array arrayWithValueArray:] */

void FUN_10bd5ad7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5ada4; end: 10bd5adcb; +[GPBInt64Array arrayWithCapacity:] */

void FUN_10bd5ada4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5adcc; end: 10bd5adff; -[GPBInt64Array init] */

void FUN_10bd5adcc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e798;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd5ae00; end: 10bd5ae0b; -[GPBInt64Array initWithValueArray:] */

void FUN_10bd5ae00(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5ae0c; end: 10bd5aeaf; -[GPBInt64Array initWithValues:count:] */

long FUN_10bd5ae0c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 3);
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



/* Entry: 10bd5aeb0; end: 10bd5aef3; -[GPBInt64Array initWithCapacity:] */

long FUN_10bd5aeb0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5aef4; end: 10bd5af1f; -[GPBInt64Array copyWithZone:] */

void FUN_10bd5aef4(void)

{
  func_0x00010bf00e40(PTR_PTR_1126c8ba8);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5af20; end: 10bd5af67; -[GPBInt64Array dealloc] */

void FUN_10bd5af20(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e798;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5af68; end: 10bd5afe3; -[GPBInt64Array isEqual:] */

bool FUN_10bd5af68(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126c8ba8;
    _objc_opt_class(PTR_PTR_1126c8ba8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 3);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5afe4; end: 10bd5afeb; -[GPBInt64Array hash] */

undefined8 FUN_10bd5afe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5afec; end: 10bd5b0af; -[GPBInt64Array description] */

undefined * FUN_10bd5afec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db3bb8;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_11102f3f8;
      }
      func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd5b0b0; end: 10bd5b0bb; -[GPBInt64Array enumerateValuesWithBlock:] */

void FUN_10bd5b0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5b0bc; end: 10bd5b173; -[GPBInt64Array enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5b0bc(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (param_4,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),lVar3,&bStack_31);
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
                (param_4,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5b174; end: 10bd5b1d3; -[GPBInt64Array valueAtIndex:] */

undefined8 FUN_10bd5b174(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8);
}



/* Entry: 10bd5b1d4; end: 10bd5b247; -[GPBInt64Array internalResizeToCapacity:] */

void FUN_10bd5b1d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bd5b248; end: 10bd5b26f; -[GPBInt64Array addValue:] */

void FUN_10bd5b248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x00010befc840(param_1,param_2,&uStack_18,1);
  return;
}



/* Entry: 10bd5b270; end: 10bd5b303; -[GPBInt64Array addValues:count:] */

void FUN_10bd5b270(long param_1,undefined8 param_2,long param_3,long param_4)

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



/* Entry: 10bd5b304; end: 10bd5b3e3; -[GPBInt64Array insertValue:atIndex:] */

void FUN_10bd5b304(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
    lVar3 = *(long *)(param_1 + 0x10) + param_4 * 8;
    _memmove(lVar3 + 8,lVar3,(lVar9 - param_4) * 8);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_4 * 8) = param_3;
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



/* Entry: 10bd5b3e4; end: 10bd5b44f; -[GPBInt64Array replaceValueAtIndex:withValue:] */

void FUN_10bd5b3e4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_4;
  return;
}



/* Entry: 10bd5b450; end: 10bd5b45b; -[GPBInt64Array addValuesFromArray:] */

void FUN_10bd5b450(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5b45c; end: 10bd5b513; -[GPBInt64Array removeValueAtIndex:] */

void FUN_10bd5b45c(long param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10bd5b514; end: 10bd5b52f; -[GPBInt64Array removeAll] */

void FUN_10bd5b514(long param_1)

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



/* Entry: 10bd5b530; end: 10bd5b5d3; -[GPBInt64Array exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5b530(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

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



/* Entry: 10bd5b5d4; end: 10bd5b5db; -[GPBInt64Array count] */

undefined8 FUN_10bd5b5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5b5dc; end: 10bd5b5ef; +[GPBUInt64Array array] */

void FUN_10bd5b5dc(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5b5f0; end: 10bd5b61f; +[GPBUInt64Array arrayWithValue:] */

void FUN_10bd5b5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  _objc_alloc();
  func_0x00010c060580(param_1,param_2,&uStack_18,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5b620; end: 10bd5b647; +[GPBUInt64Array arrayWithValueArray:] */

void FUN_10bd5b620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5b648; end: 10bd5b66f; +[GPBUInt64Array arrayWithCapacity:] */

void FUN_10bd5b648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5b670; end: 10bd5b6a3; -[GPBUInt64Array init] */

void FUN_10bd5b670(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e7a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd5b6a4; end: 10bd5b6af; -[GPBUInt64Array initWithValueArray:] */

void FUN_10bd5b6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5b6b0; end: 10bd5b753; -[GPBUInt64Array initWithValues:count:] */

long FUN_10bd5b6b0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 3);
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



/* Entry: 10bd5b754; end: 10bd5b797; -[GPBUInt64Array initWithCapacity:] */

long FUN_10bd5b754(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5b798; end: 10bd5b7c3; -[GPBUInt64Array copyWithZone:] */

void FUN_10bd5b798(void)

{
  func_0x00010bf00e40(PTR_PTR_1126baf88);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5b7c4; end: 10bd5b80b; -[GPBUInt64Array dealloc] */

void FUN_10bd5b7c4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5b80c; end: 10bd5b887; -[GPBUInt64Array isEqual:] */

bool FUN_10bd5b80c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126baf88;
    _objc_opt_class(PTR_PTR_1126baf88);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 3);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5b888; end: 10bd5b88f; -[GPBUInt64Array hash] */

undefined8 FUN_10bd5b888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5b890; end: 10bd5b953; -[GPBUInt64Array description] */

undefined * FUN_10bd5b890(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1798;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_11102f418;
      }
      func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd5b954; end: 10bd5b95f; -[GPBUInt64Array enumerateValuesWithBlock:] */

void FUN_10bd5b954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5b960; end: 10bd5ba17; -[GPBUInt64Array enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5b960(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (param_4,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),lVar3,&bStack_31);
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
                (param_4,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5ba18; end: 10bd5ba77; -[GPBUInt64Array valueAtIndex:] */

undefined8 FUN_10bd5ba18(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8);
}



/* Entry: 10bd5ba78; end: 10bd5baeb; -[GPBUInt64Array internalResizeToCapacity:] */

void FUN_10bd5ba78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bd5baec; end: 10bd5bb13; -[GPBUInt64Array addValue:] */

void FUN_10bd5baec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x00010befc840(param_1,param_2,&uStack_18,1);
  return;
}



/* Entry: 10bd5bb14; end: 10bd5bba7; -[GPBUInt64Array addValues:count:] */

void FUN_10bd5bb14(long param_1,undefined8 param_2,long param_3,long param_4)

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



/* Entry: 10bd5bba8; end: 10bd5bc87; -[GPBUInt64Array insertValue:atIndex:] */

void FUN_10bd5bba8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
    lVar3 = *(long *)(param_1 + 0x10) + param_4 * 8;
    _memmove(lVar3 + 8,lVar3,(lVar9 - param_4) * 8);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_4 * 8) = param_3;
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



/* Entry: 10bd5bc88; end: 10bd5bcf3; -[GPBUInt64Array replaceValueAtIndex:withValue:] */

void FUN_10bd5bc88(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8) = param_4;
  return;
}



/* Entry: 10bd5bcf4; end: 10bd5bcff; -[GPBUInt64Array addValuesFromArray:] */

void FUN_10bd5bcf4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5bd00; end: 10bd5bdb7; -[GPBUInt64Array removeValueAtIndex:] */

void FUN_10bd5bd00(long param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10bd5bdb8; end: 10bd5bdd3; -[GPBUInt64Array removeAll] */

void FUN_10bd5bdb8(long param_1)

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



/* Entry: 10bd5bdd4; end: 10bd5be77; -[GPBUInt64Array exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5bdd4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

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



/* Entry: 10bd5be78; end: 10bd5be7f; -[GPBUInt64Array count] */

undefined8 FUN_10bd5be78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5be80; end: 10bd5be93; +[GPBFloatArray array] */

void FUN_10bd5be80(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5be94; end: 10bd5bec3; +[GPBFloatArray arrayWithValue:] */

void FUN_10bd5be94(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  _objc_alloc();
  func_0x00010c060580(param_2,param_3,&uStack_14,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5bec4; end: 10bd5beeb; +[GPBFloatArray arrayWithValueArray:] */

void FUN_10bd5bec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5beec; end: 10bd5bf13; +[GPBFloatArray arrayWithCapacity:] */

void FUN_10bd5beec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5bf14; end: 10bd5bf47; -[GPBFloatArray init] */

void FUN_10bd5bf14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e7a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd5bf48; end: 10bd5bf53; -[GPBFloatArray initWithValueArray:] */

void FUN_10bd5bf48(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5bf54; end: 10bd5bff7; -[GPBFloatArray initWithValues:count:] */

long FUN_10bd5bf54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 2);
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



/* Entry: 10bd5bff8; end: 10bd5c03b; -[GPBFloatArray initWithCapacity:] */

long FUN_10bd5bff8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5c03c; end: 10bd5c067; -[GPBFloatArray copyWithZone:] */

void FUN_10bd5c03c(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3090);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5c068; end: 10bd5c0af; -[GPBFloatArray dealloc] */

void FUN_10bd5c068(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5c0b0; end: 10bd5c12b; -[GPBFloatArray isEqual:] */

bool FUN_10bd5c0b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126e3090;
    _objc_opt_class(PTR_PTR_1126e3090);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 2);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5c12c; end: 10bd5c133; -[GPBFloatArray hash] */

undefined8 FUN_10bd5c12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5c134; end: 10bd5c1e7; -[GPBFloatArray description] */

undefined * FUN_10bd5c134(long param_1,undefined8 param_2)

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
      ppuVar1 = &PTR____CFConstantStringClassReference_110df3b58;
      if (lVar4 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102f438;
      }
      func_0x00010bf06ba0(puVar2,param_2,ppuVar1);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar2;
}



/* Entry: 10bd5c1e8; end: 10bd5c1f3; -[GPBFloatArray enumerateValuesWithBlock:] */

void FUN_10bd5c1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5c1f4; end: 10bd5c2ab; -[GPBFloatArray enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5c1f4(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar3 * 4),param_4,lVar3,&bStack_31);
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
                (*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar2 * 4),param_4,lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5c2ac; end: 10bd5c30b; -[GPBFloatArray valueAtIndex:] */

undefined4 FUN_10bd5c2ac(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + param_3 * 4);
}



/* Entry: 10bd5c30c; end: 10bd5c37f; -[GPBFloatArray internalResizeToCapacity:] */

void FUN_10bd5c30c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 2);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bd5c380; end: 10bd5c3a7; -[GPBFloatArray addValue:] */

void FUN_10bd5c380(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  func_0x00010befc840(param_2,param_3,&uStack_14,1);
  return;
}



/* Entry: 10bd5c3a8; end: 10bd5c43b; -[GPBFloatArray addValues:count:] */

void FUN_10bd5c3a8(long param_1,undefined8 param_2,long param_3,long param_4)

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
    _memcpy(*(long *)(param_1 + 0x10) + lVar5 * 4,param_3,param_4 << 2);
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



/* Entry: 10bd5c43c; end: 10bd5c51b; -[GPBFloatArray insertValue:atIndex:] */

void FUN_10bd5c43c(long param_1,undefined8 param_2,ulong param_3)

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
    lVar3 = *(long *)(param_1 + 0x10) + param_3 * 4;
    _memmove(lVar3 + 4,lVar3,(lVar8 - param_3) * 4);
  }
  *(uint *)(*(long *)(param_1 + 0x10) + param_3 * 4) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
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



/* Entry: 10bd5c51c; end: 10bd5c587; -[GPBFloatArray replaceValueAtIndex:withValue:] */

void FUN_10bd5c51c(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  if (*(ulong *)(param_2 + 0x18) <= param_4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  *(undefined4 *)(*(long *)(param_2 + 0x10) + param_4 * 4) = param_1;
  return;
}



/* Entry: 10bd5c588; end: 10bd5c593; -[GPBFloatArray addValuesFromArray:] */

void FUN_10bd5c588(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addValues_count__11259cbb8,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5c594; end: 10bd5c64b; -[GPBFloatArray removeValueAtIndex:] */

void FUN_10bd5c594(long param_1,undefined8 param_2,ulong param_3)

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
    lVar1 = *(long *)(param_1 + 0x10) + param_3 * 4;
    _memmove(lVar1,lVar1 + 4,(uVar3 - param_3) * 4);
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



/* Entry: 10bd5c64c; end: 10bd5c667; -[GPBFloatArray removeAll] */

void FUN_10bd5c64c(long param_1)

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



/* Entry: 10bd5c668; end: 10bd5c70b; -[GPBFloatArray exchangeValueAtIndex:withValueAtIndex:] */

void FUN_10bd5c668(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  
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
  uVar4 = *(undefined4 *)(lVar3 + param_3 * 4);
  *(undefined4 *)(lVar3 + param_3 * 4) = *(undefined4 *)(lVar3 + param_4 * 4);
  *(undefined4 *)(lVar3 + param_4 * 4) = uVar4;
  return;
}



/* Entry: 10bd5c70c; end: 10bd5c713; -[GPBFloatArray count] */

undefined8 FUN_10bd5c70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5c714; end: 10bd5c727; +[GPBDoubleArray array] */

void FUN_10bd5c714(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5c728; end: 10bd5c757; +[GPBDoubleArray arrayWithValue:] */

void FUN_10bd5c728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  _objc_alloc();
  func_0x00010c060580(param_2,param_3,&uStack_18,1);
  _objc_autorelease();
  return;
}



/* Entry: 10bd5c758; end: 10bd5c77f; +[GPBDoubleArray arrayWithValueArray:] */

void FUN_10bd5c758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c060500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5c780; end: 10bd5c7a7; +[GPBDoubleArray arrayWithCapacity:] */

void FUN_10bd5c780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffc4a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5c7a8; end: 10bd5c7db; -[GPBDoubleArray init] */

void FUN_10bd5c7a8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e7b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10bd5c7dc; end: 10bd5c7e7; -[GPBDoubleArray initWithValueArray:] */

void FUN_10bd5c7dc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValues_count__1125f5b70,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10bd5c7e8; end: 10bd5c88b; -[GPBDoubleArray initWithValues:count:] */

long FUN_10bd5c7e8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bfee200();
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    _reallocf(lVar1,param_4 << 3);
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



/* Entry: 10bd5c88c; end: 10bd5c8cf; -[GPBDoubleArray initWithCapacity:] */

long FUN_10bd5c88c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c060580(param_1,param_2,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010c069520(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10bd5c8d0; end: 10bd5c8fb; -[GPBDoubleArray copyWithZone:] */

void FUN_10bd5c8d0(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3098);
                    /* WARNING: Could not recover jumptable at 0x00010c060590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd5c8fc; end: 10bd5c943; -[GPBDoubleArray dealloc] */

void FUN_10bd5c8fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd5c944; end: 10bd5c9bf; -[GPBDoubleArray isEqual:] */

bool FUN_10bd5c944(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_3) {
    puVar2 = PTR_PTR_1126e3098;
    _objc_opt_class(PTR_PTR_1126e3098);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _memcmp(uVar4,*(undefined8 *)(param_3 + 0x10),*(long *)(param_1 + 0x18) << 3);
      bVar1 = (int)uVar4 == 0;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10bd5c9c0; end: 10bd5c9c7; -[GPBDoubleArray hash] */

undefined8 FUN_10bd5c9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd5c9c8; end: 10bd5ca8b; -[GPBDoubleArray description] */

undefined * FUN_10bd5c9c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f358);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2d498;
      if (lVar4 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_11102f458;
      }
      func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd5ca8c; end: 10bd5ca97; -[GPBDoubleArray enumerateValuesWithBlock:] */

void FUN_10bd5ca8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 10bd5ca98; end: 10bd5cb4f; -[GPBDoubleArray enumerateValuesWithOptions:usingBlock:] */

void FUN_10bd5ca98(long param_1,undefined8 param_2,uint param_3,long param_4)

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
                  (*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),param_4,lVar3,&bStack_31);
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
                (*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),param_4,lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 10bd5cb50; end: 10bd5cbaf; -[GPBDoubleArray valueAtIndex:] */

undefined8 FUN_10bd5cb50(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8);
}



/* Entry: 10bd5cbb0; end: 10bd5cc23; -[GPBDoubleArray internalResizeToCapacity:] */

void FUN_10bd5cbb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _reallocf(lVar1,param_3 << 3);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}


