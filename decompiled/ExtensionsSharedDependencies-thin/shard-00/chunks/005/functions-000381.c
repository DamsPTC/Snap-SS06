/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0076b58c; end: 0076b5a3; -[GPBUnknownFieldSet hash] */

void FUN_0076b58c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077937c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFHash_00999ac8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_0099ad78)(PTR_PTR_00ac3948);
  return;
}



/* Entry: 0076b5a4; end: 0076b5cb; -[GPBUnknownFieldSet hasField:] */

bool FUN_0076b5a4(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar1 = false;
  if (lVar2 != 0) {
    _CFDictionaryGetValue(lVar2,(long)param_3);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 0076b5cc; end: 0076b5df; -[GPBUnknownFieldSet getField:] */

void FUN_0076b5cc(long param_1,undefined8 param_2,int param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryGetValue_00999a88)(*(long *)(param_1 + 8),(long)param_3);
    return;
  }
  return;
}



/* Entry: 0076b5e0; end: 0076b5ef; -[GPBUnknownFieldSet countOfFields] */

void FUN_0076b5e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007792f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryGetCount_00999a70)();
    return;
  }
  return;
}



/* Entry: 0076b5f0; end: 0076b797; -[GPBUnknownFieldSet sortedFields] */

undefined * FUN_0076b5f0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long extraout_x12;
  long lVar8;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == alStack_50[1]) {
      puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
                    /* WARNING: Could not recover jumptable at 0x0077f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(PTR__OBJC_CLASS___NSArray_00ac2c28,PTR_s_array_00aba940)
      ;
      return puVar2;
    }
  }
  else {
    _CFDictionaryGetCount();
    (*(code *)PTR____chkstk_darwin_00999f48)((long)plVar1 << 3);
    lVar8 = (long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    param_3 = (long *)(lVar8 - extraout_x12);
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 8),lVar8,param_3);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    plVar5 = param_3 + (long)plVar1 * -2;
    if (plVar1 == (long *)0x0) {
      param_2 = (long *)0x0;
      _qsort_b(plVar5,0,0x10,&PTR___NSConcreteGlobalBlock_00a20c28);
    }
    else {
      plVar4 = (long *)0x0;
      plVar6 = plVar5 + 1;
      do {
        lVar7 = param_3[(long)plVar4];
        plVar6[-1] = *(long *)(lVar8 + (long)plVar4 * 8);
        *plVar6 = lVar7;
        plVar4 = (long *)((long)plVar4 + 1);
        plVar6 = plVar6 + 2;
      } while (plVar1 != plVar4);
      param_2 = plVar1;
      _qsort_b(plVar5,plVar1,0x10,&PTR___NSConcreteGlobalBlock_00a20c28);
      plVar5 = plVar5 + 1;
      plVar6 = param_3;
      do {
        *plVar6 = *plVar5;
        plVar1 = (long *)((long)plVar1 + -1);
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 1;
      } while (plVar1 != (long *)0x0);
    }
    puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
    if (*(long *)PTR____stack_chk_guard_00999f88 == alStack_50[1]) {
      return puVar2;
    }
  }
  ___stack_chk_fail();
  uVar3 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar3 = 0xffffffff;
  }
  return (undefined *)(ulong)uVar3;
}



/* Entry: 0076b798; end: 0076b7af;  */

uint FUN_0076b798(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 0076b7b0; end: 0076b913; -[GPBUnknownFieldSet writeToCodedOutputStream:] */

ulong FUN_0076b7b0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long extraout_x8;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  long extraout_x12;
  ulong *puVar7;
  ulong *puVar8;
  ulong auStack_60 [2];
  
  auStack_60[1] = *(ulong *)PTR____stack_chk_guard_00999f88;
  plVar1 = *(long **)(param_1 + 8);
  uVar6 = 0;
  plVar2 = param_3;
  if (plVar1 != (long *)0x0) {
    _CFDictionaryGetCount();
    (*(code *)PTR____chkstk_darwin_00999f48)((long)plVar1 << 3);
    plVar2 = (long *)((long)auStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_00999f48)();
    puVar7 = (ulong *)((long)plVar2 - extraout_x12);
    param_2 = plVar2;
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 8),plVar2,puVar7);
    if (plVar1 < (long *)((long)&MACH_HEADER.magic + 2)) {
      uVar6 = *puVar7;
      func_0x007943e0(uVar6);
      plVar2 = param_3;
    }
    else {
      (*(code *)PTR____chkstk_darwin_00999f48)();
      puVar8 = puVar7 + (long)plVar1 * -2;
      plVar4 = (long *)0x0;
      puVar5 = puVar8 + 1;
      do {
        uVar6 = puVar7[(long)plVar4];
        puVar5[-1] = plVar2[(long)plVar4];
        *puVar5 = uVar6;
        plVar4 = (long *)((long)plVar4 + 1);
        puVar5 = puVar5 + 2;
      } while (plVar1 != plVar4);
      param_2 = plVar1;
      _qsort_b(puVar8,plVar1,0x10,&PTR___NSConcreteGlobalBlock_00a20c48);
      puVar7 = puVar8 + 1;
      do {
        uVar6 = *puVar7;
        plVar2 = param_3;
        func_0x007943e0(uVar6);
        plVar1 = (long *)((long)plVar1 + -1);
        puVar7 = puVar7 + 2;
      } while (plVar1 != (long *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != auStack_60[1]) {
    ___stack_chk_fail();
    uVar3 = (uint)(*plVar2 < *param_2);
    if (*param_2 < *plVar2) {
      uVar3 = 0xffffffff;
    }
    return (ulong)uVar3;
  }
  return uVar6;
}



/* Entry: 0076b914; end: 0076b92b;  */

uint FUN_0076b914(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 0076b92c; end: 0076b9a3; -[GPBUnknownFieldSet description] */

undefined * FUN_0076b92c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  func_0x007921a0(puVar1);
  FUN_0076d640(param_1,&PTR____CFConstantStringClassReference_00a4b420);
  func_0x0077ef80(puVar1);
  func_0x0077ef80(puVar1);
  return puVar1;
}



/* Entry: 0076b9a4; end: 0076b9db; -[GPBUnknownFieldSet serializedSize] */

undefined8 FUN_0076b9a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    _CFDictionaryApplyFunction(*(long *)(param_1 + 8),FUN_0076b9dc,&uStack_18);
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 0076b9dc; end: 0076ba0b;  */

void FUN_0076b9dc(undefined8 param_1,long param_2,long *param_3)

{
  func_0x0078c740();
  *param_3 = *param_3 + param_2;
  return;
}



/* Entry: 0076ba0c; end: 0076ba2b; -[GPBUnknownFieldSet writeAsMessageSetTo:] */

void FUN_0076ba0c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007792c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_00999a50)(*(long *)(param_1 + 8),0x76ba24);
    return;
  }
  return;
}



/* Entry: 0076ba2c; end: 0076ba63; -[GPBUnknownFieldSet serializedSizeAsMessageSet] */

undefined8 FUN_0076ba2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    _CFDictionaryApplyFunction(*(long *)(param_1 + 8),FUN_0076ba64,&uStack_18);
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 0076ba64; end: 0076ba93;  */

void FUN_0076ba64(undefined8 param_1,long param_2,long *param_3)

{
  func_0x0078c780();
  *param_3 = *param_3 + param_2;
  return;
}



/* Entry: 0076ba94; end: 0076bb0b; -[GPBUnknownFieldSet data] */

undefined * FUN_0076ba94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  uVar1 = param_1;
  func_0x0078c740();
  func_0x00781720(puVar2,param_2,uVar1);
  puVar3 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x007851c0();
  func_0x007943a0(param_1,param_2,puVar3);
  func_0x00783860(puVar3);
  _objc_release(puVar3);
  return puVar2;
}



/* Entry: 0076bb0c; end: 0076bb1b; +[GPBUnknownFieldSet isFieldTag:] */

bool FUN_0076bb0c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return (param_3 & 7) != 4;
}



/* Entry: 0076bb1c; end: 0076bba7; -[GPBUnknownFieldSet addField:] */

void FUN_0076bb1c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00789b40();
  if (param_3 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_00999d30;
    _CFDictionaryCreateMutable(uVar1,0,0,PTR__kCFTypeDictionaryValueCallBacks_00999d88);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00779334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDictionarySetValue_00999a98)();
  return;
}



/* Entry: 0076bba8; end: 0076bc2b; -[GPBUnknownFieldSet mutableFieldForNumber:create:] */

undefined * FUN_0076bba8(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    puVar2 = PTR_PTR_00ac3958;
  }
  else {
    _CFDictionaryGetValue(puVar1,(long)param_3);
    puVar2 = PTR_PTR_00ac3958;
  }
  PTR_PTR_00ac3958 = puVar2;
  if ((param_4 != 0) && (puVar1 == (undefined *)0x0)) {
    _objc_alloc(puVar2);
    func_0x00785dc0();
    func_0x0077e540(param_1);
    _objc_release(puVar2);
    puVar1 = puVar2;
  }
  return puVar1;
}



/* Entry: 0076bc2c; end: 0076bc4f; -[GPBUnknownFieldSet mergeUnknownFields:] */

void FUN_0076bc2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x007792c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_00999a50)(*(long *)(param_3 + 8),FUN_0076bc50,param_1);
    return;
  }
  return;
}



/* Entry: 0076bc50; end: 0076bceb;  */

void FUN_0076bc50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x00789b40();
  if ((int)uVar1 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  lVar2 = param_3;
  func_0x00789740();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007892d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)();
    return;
  }
  func_0x00780e20(param_2);
  func_0x0077e540(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0076bcec; end: 0076bd4f; -[GPBUnknownFieldSet mergeVarintField:value:] */

void FUN_0076bcec(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a4b440);
  }
  func_0x00789740(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0076bd50; end: 0076beeb; -[GPBUnknownFieldSet mergeFieldFrom:input:] */

undefined8 FUN_0076bd50(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = param_3 >> 3 & 0x1fffffff;
  uVar1 = (uint)param_3 & 7;
  if (uVar1 == 1 || (param_3 & 7) == 0) {
    if ((param_3 & 7) == 0) {
      uVar3 = 1;
      func_0x00789740(param_1,param_2,uVar4,1);
      FUN_0073f060(param_4 + 8);
      func_0x0077ea20(param_1);
    }
    else if (uVar1 == 1) {
      uVar3 = 1;
      func_0x00789740(param_1,param_2,uVar4,1);
      func_0x0073f2fc(param_4 + 8,8);
      *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 8;
      func_0x0077e5c0(param_1);
    }
  }
  else if (uVar1 == 2) {
    param_4 = param_4 + 8;
    func_0x0073f358(param_4);
    uVar3 = 1;
    func_0x00789740(param_1);
    func_0x0077e6a0();
    _objc_release(param_4);
  }
  else if (uVar1 == 3) {
    puVar2 = PTR_PTR_00ac3948;
    _objc_alloc_init(PTR_PTR_00ac3948);
    uVar3 = 1;
    func_0x00789740(param_1);
    func_0x0077e600();
    _objc_release(puVar2);
    func_0x0078afa0(param_4);
  }
  else if (uVar1 == 5) {
    uVar3 = 1;
    func_0x00789740(param_1,param_2,uVar4,1);
    func_0x0073f2fc(param_4 + 8,4);
    *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 4;
    func_0x0077e5a0(param_1);
  }
  return uVar3;
}



/* Entry: 0076beec; end: 0076bf13; -[GPBUnknownFieldSet mergeMessageSetMessage:data:] */

void FUN_0076beec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00789740();
                    /* WARNING: Could not recover jumptable at 0x0077e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_addLengthDelimited__00aba6a0,param_4);
  return;
}



/* Entry: 0076bf14; end: 0076bf3b; -[GPBUnknownFieldSet addUnknownMapEntry:value:] */

void FUN_0076bf14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00789740();
                    /* WARNING: Could not recover jumptable at 0x0077e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_addLengthDelimited__00aba6a0,param_4);
  return;
}



/* Entry: 0076bf3c; end: 0076bf7b; -[GPBUnknownFieldSet mergeFromCodedInputStream:] */

void FUN_0076bf3c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  do {
    lVar1 = param_3 + 8;
    FUN_0073f0e4();
    if ((int)lVar1 == 0) {
      return;
    }
    uVar2 = param_1;
    func_0x00789200(param_1,param_2,lVar1,param_3);
  } while ((uVar2 & 1) != 0);
  return;
}



/* Entry: 0076bf7c; end: 0076c043; -[GPBUnknownFieldSet getTags:] */

undefined8 FUN_0076bf7c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *puVar3;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (lVar1 != 0) {
    _CFDictionaryGetCount();
    (*(code *)PTR____chkstk_darwin_00999f48)(lVar1 << 3);
    puVar3 = (undefined8 *)((long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    uVar2 = *(undefined8 *)(param_1 + 8);
    _CFDictionaryGetKeysAndValues(uVar2,puVar3,0);
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_3 = (int)*puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == alStack_50[1]) {
    return uVar2;
  }
  ___stack_chk_fail();
  if (lRam0000000000b646d0 != -1) {
    _dispatch_once(0xb646d0,&PTR___NSConcreteGlobalBlock_00a20c68);
  }
  return uRam0000000000b646d8;
}



/* Entry: 0076c044; end: 0076c0e7;  */

undefined8 FUN_0076c044(void)

{
  if (lRam0000000000b646d0 != -1) {
    _dispatch_once(0xb646d0,&PTR___NSConcreteGlobalBlock_00a20c68);
  }
  return uRam0000000000b646d8;
}



/* Entry: 0076c0e8; end: 0076c257;  */

void FUN_0076c0e8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar2 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar2 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
      return;
    }
  }
  if (((*(ushort *)(lVar3 + 0x1c) & 0xf02) != 0) || (*(byte *)(lVar3 + 0x1e) - 0xd < 4)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    _objc_release(*(undefined8 *)(lVar2 + (ulong)uVar1));
    *(undefined8 *)(lVar2 + (ulong)uVar1) = 0;
    uVar1 = *(uint *)(lVar3 + 0x14);
    lVar2 = *(long *)(param_1 + 0x40);
  }
  if ((int)uVar1 < 0) {
    *(undefined4 *)(lVar2 + (ulong)-uVar1 * 4) = 0;
  }
  else {
    *(uint *)(lVar2 + (ulong)(uVar1 >> 5) * 4) =
         *(uint *)(lVar2 + (ulong)(uVar1 >> 5) * 4) & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
  }
  return;
}



/* Entry: 0076c258; end: 0076c2c3;  */

void FUN_0076c258(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_0076c294;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_0076c294:
      uVar4 = *(undefined8 *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
      *(undefined8 *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18)) = 0;
      FUN_007627b0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_0099ada0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 0076c2c4; end: 0076c4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c2c4(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  
  do {
    lVar4 = param_1;
    lVar10 = *(long *)(param_2 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) == 0) {
      if (*(long *)(param_2 + 0x10) != 0) {
        func_0x0076c1a8(lVar4,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                        *(undefined4 *)(lVar10 + 0x10));
        uVar2 = *(ushort *)(lVar10 + 0x1c);
      }
      if (((uVar2 >> 5 & 1) == 0) || (lVar7 = param_3, func_0x007882e0(), lVar7 != 0)) {
        uVar8 = *(uint *)(lVar10 + 0x14);
        lVar7 = *(long *)(lVar4 + 0x40);
        if ((int)uVar8 < 0) {
          uVar9 = 0;
          if (param_3 != 0) {
            uVar9 = *(undefined4 *)(lVar10 + 0x10);
          }
          goto LAB_0076c41c;
        }
        uVar11 = (ulong)(uVar8 >> 5);
        uVar8 = 1 << (ulong)(uVar8 & 0x1f);
        if (param_3 == 0) goto LAB_0076c448;
        *(uint *)(lVar7 + uVar11 * 4) = *(uint *)(lVar7 + uVar11 * 4) | uVar8;
      }
      else {
        _objc_release(param_3);
        uVar8 = *(uint *)(lVar10 + 0x14);
        lVar7 = *(long *)(lVar4 + 0x40);
        if ((int)uVar8 < 0) {
          param_3 = 0;
          uVar9 = 0;
LAB_0076c41c:
          *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
        }
        else {
          uVar11 = (ulong)(uVar8 >> 5);
          uVar8 = 1 << (ulong)(uVar8 & 0x1f);
LAB_0076c448:
          param_3 = 0;
          *(uint *)(lVar7 + uVar11 * 4) = *(uint *)(lVar7 + uVar11 * 4) & (uVar8 ^ 0xffffffff);
        }
      }
      uVar11 = *(ulong *)(lVar7 + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(lVar7 + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar4)) {
          FUN_007627b0(uVar11);
        }
        goto LAB_0076c488;
      }
    }
    else {
      uVar11 = *(ulong *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        lVar10 = param_2;
        func_0x00783280();
        uVar6 = uVar11;
        if ((int)lVar10 == 1) {
          if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
            if (*(long *)(uVar11 + 8) == lVar4) {
              *(undefined8 *)(uVar11 + 8) = 0;
            }
            goto LAB_0076c488;
          }
          puVar5 = PTR_PTR_00ac3930;
          _objc_opt_class(PTR_PTR_00ac3930);
          _objc_opt_isKindOfClass(uVar11,puVar5);
          iVar3 = _DAT_00ac6014;
        }
        else {
          func_0x00788e40();
          if (((int)param_2 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
          puVar5 = PTR_PTR_00ac3938;
          _objc_opt_class(PTR_PTR_00ac3938);
          _objc_opt_isKindOfClass(uVar11,puVar5);
          iVar3 = _DAT_00ac6294;
        }
        if (((uVar6 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar4)) {
          *(undefined8 *)(uVar11 + (long)iVar3) = 0;
        }
LAB_0076c488:
        _objc_release(uVar11);
      }
    }
    param_1 = *(long *)(lVar4 + 0x20);
    if (param_1 == 0) {
      return;
    }
    param_2 = *(long *)(lVar4 + 0x28);
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_1,PTR_s_setExtension_value__00abe490,*(undefined8 *)(lVar4 + 0x30));
      return;
    }
    _objc_retain();
    param_3 = lVar4;
  } while( true );
}



/* Entry: 0076c4b4; end: 0076c503;  */

ulong FUN_0076c4b4(ulong param_1,long param_2)

{
  uint uVar1;
  
  FUN_0076c504();
  if ((*(ushort *)(*(long *)(param_2 + 8) + 0x1c) >> 0xc & 1) == 0) {
    func_0x00787f40();
    uVar1 = (uint)param_1;
    if ((int)param_2 == 0) {
      uVar1 = 0xfbadbeef;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 0076c504; end: 0076c55f;  */

ulong FUN_0076c504(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_0076c548;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_0076c548:
      func_0x00781ce0(param_2);
      return param_2;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 0076c560; end: 0076c5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c560(long param_1,ulong param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar9 = param_2;
  func_0x00787f40();
  puVar4 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if ((uVar9 & 1) == 0) {
    _objc_opt_class();
    func_0x00789760();
    func_0x0078ad40(puVar4);
  }
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x0076c1a8(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076c694;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076c694:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_1 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076c5f8; end: 0076c6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c5f8(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x0076c1a8(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076c694;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076c694:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_1 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076c6c0; end: 0076c73f;  */

uint FUN_0076c6c0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_0076c710;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_0076c710:
      func_0x00781ce0(param_2);
      uVar1 = (uint)param_2;
      goto LAB_0076c738;
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if ((int)uVar1 < 0) {
    uVar1 = (uint)(*(int *)(lVar3 + (ulong)-uVar1 * 4) == *(int *)(lVar2 + 0x10));
  }
  else {
    uVar1 = *(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
  }
LAB_0076c738:
  return uVar1 & 1;
}



/* Entry: 0076c740; end: 0076c82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c740(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x0076c1a8(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  uVar8 = *(uint *)(lVar11 + 0x18);
  lVar7 = *(long *)(param_1 + 0x40);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (param_3 == 0) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
    if ((param_3 & 1) == 0) goto LAB_0076c7c4;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (param_3 == 0) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
LAB_0076c7c4:
      bVar4 = (*(ushort *)(lVar11 + 0x1c) & 0x20) == 0;
      goto LAB_0076c7d0;
    }
    *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
  }
  bVar4 = true;
LAB_0076c7d0:
  uVar8 = *(uint *)(lVar11 + 0x14);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (!bVar4) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (bVar4) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
    }
  }
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar12 = *(long *)(lVar7 + 8);
    bVar1 = *(byte *)(lVar12 + 0x1e);
    uVar2 = *(ushort *)(lVar12 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar7 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                      *(undefined4 *)(lVar12 + 0x10));
      uVar2 = *(ushort *)(lVar12 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar7 = param_1, func_0x007882e0(), lVar7 != 0)) {
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = *(undefined4 *)(lVar12 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar10 = (ulong)(uVar8 >> 5);
      uVar8 = 1 << (ulong)(uVar8 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      _objc_release(param_1);
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        param_1 = 0;
        uVar9 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
      }
      else {
        uVar10 = (ulong)(uVar8 >> 5);
        uVar8 = 1 << (ulong)(uVar8 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18));
    *(long *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar11)) {
    FUN_007627b0(uVar10);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar10 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar10 == 0) goto FUN_0076248c;
  lVar12 = lVar7;
  func_0x00783280();
  uVar6 = uVar10;
  if ((int)lVar12 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar10 + 8) == lVar11) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar5 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar10,puVar5);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar7 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar5 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar10,puVar5);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar6 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar10);
  param_1 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076c830; end: 0076c88b;  */

ulong FUN_0076c830(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_0076c874;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_0076c874:
      func_0x00781ce0(param_2);
      return param_2;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 0076c88c; end: 0076c953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c88c(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x0076c1a8(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076c928;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076c928:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_1 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076c954; end: 0076c99f;  */

long FUN_0076c954(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto SUB_00781ce0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
SUB_00781ce0:
                    /* WARNING: Could not recover jumptable at 0x00781cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_2,PTR_s_defaultValue_00abb430);
      return param_2;
    }
  }
  return *(long *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 0076c9a0; end: 0076ca67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c9a0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x0076c1a8(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(long *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076ca3c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076ca3c:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_1 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076ca68; end: 0076cab3;  */

long FUN_0076ca68(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto SUB_00781ce0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
SUB_00781ce0:
                    /* WARNING: Could not recover jumptable at 0x00781cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_2,PTR_s_defaultValue_00abb430);
      return param_2;
    }
  }
  return *(long *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 0076cab4; end: 0076cb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076cab4(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x0076c1a8(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(long *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076cb50;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076cb50:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_1 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076cb7c; end: 0076cbdb;  */

ulong FUN_0076cb7c(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_0076cbc0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_0076cbc0:
      func_0x00781ce0(param_2);
      return param_2 & 0xffffffff;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 0076cbdc; end: 0076cca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076cbdc(float param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_3 + 8);
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x0076c1a8(param_2,*(long *)(param_3 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(float *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_1;
  if (param_1 == 0.0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076cc7c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076cc7c:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_2, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_2 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_2 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076cca8; end: 0076cd07;  */

long FUN_0076cca8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_0076ccec;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_0076ccec:
      func_0x00781ce0(param_2);
      return param_2;
    }
  }
  return *(long *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 0076cd08; end: 0076cdd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076cd08(double param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_3 + 8);
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x0076c1a8(param_2,*(long *)(param_3 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(double *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_1;
  if (param_1 == 0.0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076cda8;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076cda8:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_2, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_2 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_2 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076cdd4; end: 0076ce2f;  */

undefined ** FUN_0076cdd4(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_00a212a0;
  if (param_1 != 0) {
    ppuVar1 = ppuVar2;
    if (param_2 != (undefined **)0x0) {
      ppuVar1 = param_2;
    }
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
    func_0x00791e20(PTR__OBJC_CLASS___NSMutableString_00ac2cc0);
    FUN_0076ce30(param_1,ppuVar2,ppuVar1);
  }
  return ppuVar2;
}



/* Entry: 0076ce30; end: 0076d63f;  */

void FUN_0076ce30(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  uVar5 = param_1;
  func_0x00781ea0();
  uVar16 = *(ulong *)(uVar5 + 8);
  uVar6 = uVar16;
  func_0x00780e80();
  uVar7 = uVar5;
  func_0x00783000();
  func_0x00783020();
  uVar8 = param_1;
  func_0x00783060();
  func_0x00791a80();
  if (uVar6 != 0 || (int)uVar5 != 0) {
    uVar17 = 0;
    uVar15 = 0;
    do {
      if (uVar15 == uVar6) {
        FUN_0076dfb8(param_1,uVar8,*(undefined8 *)(uVar7 + uVar17 * 8),param_2,param_3);
        uVar9 = uVar6;
        uVar17 = uVar17 + 1;
      }
      else {
        if (uVar17 != (uVar5 & 0xffffffff)) {
          uVar9 = uVar16;
          func_0x00789e20();
          puVar1 = (uint *)(uVar7 + uVar17 * 8);
          if (*puVar1 <= *(uint *)(*(long *)(uVar9 + 8) + 0x10)) {
            uVar17 = uVar17 + 1;
            FUN_0076dfb8(param_1,uVar8,*(undefined8 *)puVar1,param_2,param_3);
            uVar9 = uVar15;
            goto LAB_0076d5b4;
          }
        }
        uVar9 = uVar15 + 1;
        uVar10 = uVar16;
        func_0x00789e20();
        uVar18 = uVar10;
        func_0x00783280();
        iVar4 = (int)uVar18;
        if (iVar4 == 2) {
          lVar14 = *(long *)(param_1 + 0x40);
          if (lVar14 != 0) goto LAB_0076cfd0;
LAB_0076cff8:
          uVar18 = 0;
LAB_0076cffc:
          uVar15 = uVar18;
          func_0x00780e80();
joined_r0x0076d008:
          if (uVar15 == 0) goto LAB_0076d5b4;
        }
        else {
          if (iVar4 == 1) {
            lVar14 = *(long *)(param_1 + 0x40);
            if (lVar14 == 0) goto LAB_0076cff8;
LAB_0076cfd0:
            uVar18 = *(ulong *)(lVar14 + (ulong)*(uint *)(*(long *)(uVar10 + 8) + 0x18));
            goto LAB_0076cffc;
          }
          uVar18 = uVar17;
          if (iVar4 == 0) {
            uVar13 = *(uint *)(*(long *)(uVar10 + 8) + 0x14);
            if ((int)uVar13 < 0) {
              uVar13 = (uint)(*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar13 * 4) ==
                             *(int *)(*(long *)(uVar10 + 8) + 0x10));
            }
            else {
              uVar13 = *(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar13 >> 5) * 4) >>
                       (ulong)(uVar13 & 0x1f) & 1;
            }
            uVar18 = 0;
            uVar15 = (ulong)uVar13;
            goto joined_r0x0076d008;
          }
        }
        uVar19 = uVar10;
        func_0x007927a0();
        func_0x007882e0();
        if (uVar19 == 0) {
          func_0x007921a0();
          if (uVar15 == 1) {
            func_0x00789760();
            func_0x007921a0();
          }
          else {
            func_0x00789760();
            func_0x0077eec0(param_2);
          }
        }
        if (iVar4 == 2) {
          uVar15 = uVar10;
          func_0x00788e40();
          bVar2 = *(byte *)(*(long *)(uVar10 + 8) + 0x1e);
          func_0x007921a0();
          func_0x007921a0();
          func_0x007921a0();
          func_0x007921a0();
          func_0x007921a0();
          puStack_90 = &uStack_98;
          uStack_98 = 0;
          uStack_88 = 0x2020000000;
          uStack_80 = 1;
          if (((int)uVar15 == 0xe) && (bVar2 - 0xd < 4)) {
            func_0x00782b60(uVar18);
          }
          else {
            func_0x00782aa0(uVar18);
          }
          __Block_object_dispose(&uStack_98,8);
        }
        else {
          uVar19 = 0;
          uVar3 = *(undefined1 *)(*(long *)(uVar10 + 8) + 0x1e);
          do {
            func_0x0077eec0(param_2);
            switch(uVar3) {
            case 0:
              if (uVar18 == 0) {
                FUN_0076c6c0(param_1,uVar10);
              }
              else {
                func_0x007935a0();
              }
              func_0x0077ef80(param_2);
              break;
            case 1:
            case 0xb:
              if (uVar18 == 0) {
                FUN_0076c830(param_1,uVar10);
              }
              else {
                func_0x007935a0();
              }
              goto code_r0x0076d474;
            case 2:
            case 7:
            case 9:
              if (uVar18 == 0) {
                FUN_0076c504(param_1,uVar10);
              }
              else {
                func_0x007935a0();
              }
              goto code_r0x0076d474;
            case 3:
              if (uVar18 == 0) {
                FUN_0076cb7c(param_1,uVar10);
              }
              else {
                func_0x007935a0(uVar18);
              }
              goto code_r0x0076d474;
            case 4:
            case 0xc:
              if (uVar18 == 0) {
                FUN_0076ca68(param_1,uVar10);
              }
              else {
                func_0x007935a0();
              }
              goto code_r0x0076d474;
            case 5:
            case 8:
            case 10:
              if (uVar18 == 0) {
                FUN_0076c954(param_1,uVar10);
              }
              else {
                func_0x007935a0();
              }
              goto code_r0x0076d474;
            case 6:
              if (uVar18 == 0) {
                FUN_0076cca8(param_1,uVar10);
              }
              else {
                func_0x007935a0(uVar18);
              }
code_r0x0076d474:
              func_0x0077eec0(param_2);
              break;
            case 0xd:
              if (uVar18 == 0) {
                FUN_007636e0(param_1,uVar10);
              }
              else {
                func_0x00789e00(uVar18);
              }
              FUN_0076dad0();
              break;
            case 0xe:
              if (uVar18 == 0) {
                FUN_007636e0(param_1,uVar10);
              }
              else {
                func_0x00789e00(uVar18);
              }
              func_0x0076e3a4();
              break;
            case 0xf:
            case 0x10:
              if (uVar18 == 0) {
                uVar12 = param_1;
                FUN_007636e0(param_1,uVar10);
              }
              else {
                uVar12 = uVar18;
                func_0x00789e00(uVar18);
              }
              func_0x0077eec0(param_2);
              uVar11 = param_3;
              func_0x00791ec0(param_3);
              FUN_0076ce30(uVar12,param_2,uVar11);
              func_0x0077eec0(param_2);
              break;
            case 0x11:
              if (uVar18 == 0) {
                FUN_0076c504(param_1,uVar10);
              }
              else {
                func_0x0078aea0();
              }
              uVar12 = uVar10;
              func_0x00782a40();
              if ((uVar12 == 0) || (func_0x007927c0(), uVar12 == 0)) {
                func_0x0077eec0(param_2);
              }
              else {
                func_0x0077ef80(param_2);
              }
            }
            func_0x0077eec0(param_2);
            uVar19 = uVar19 + 1;
          } while (uVar15 != uVar19);
        }
      }
LAB_0076d5b4:
      uVar15 = uVar9;
    } while ((uVar9 < uVar6) || (uVar17 < (uVar5 & 0xffffffff)));
  }
  func_0x00792fe0();
  FUN_0076d640();
  func_0x007882e0();
  if (param_1 != 0) {
    func_0x0077eec0(param_2);
    func_0x0077ef80(param_2);
  }
  return;
}



/* Entry: 0076d640; end: 0076d9bb;  */

/* WARNING: Removing unreachable block (ram,0x0076d814) */
/* WARNING: Removing unreachable block (ram,0x0076d708) */
/* WARNING: Removing unreachable block (ram,0x0076d8c0) */

undefined ** FUN_0076d640(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
  if (param_1 != 0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
    func_0x00791e20();
    func_0x00791aa0();
    lVar2 = param_1;
    func_0x00780ea0();
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        lVar6 = *(long *)(lVar5 * 8);
        func_0x00789b40();
        func_0x007937a0(lVar6);
        func_0x00782cc0();
        func_0x007837c0(lVar6);
        func_0x00782cc0();
        func_0x007837e0(lVar6);
        func_0x00782cc0();
        lVar9 = lVar6;
        func_0x00788300();
        lVar3 = lVar9;
        func_0x00780ea0();
        while (lVar3 != 0) {
          lVar8 = 0;
          do {
            uVar7 = *(undefined8 *)(lVar8 * 8);
            func_0x0077eec0(ppuVar1);
            FUN_0076dad0(uVar7);
            func_0x0077ef80(ppuVar1);
            lVar8 = lVar8 + 1;
          } while (lVar3 != lVar8);
          lVar3 = lVar9;
          func_0x00780ea0();
        }
        func_0x007841a0();
        lVar3 = lVar6;
        func_0x00780ea0();
        while (lVar3 != 0) {
          lVar9 = 0;
          do {
            uVar7 = *(undefined8 *)(lVar9 * 8);
            func_0x0077eec0(ppuVar1);
            func_0x00791ec0();
            FUN_0076d640(uVar7);
            func_0x0077ef80(ppuVar1);
            func_0x0077eec0(ppuVar1);
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = lVar6;
          func_0x00780ea0();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar2);
      lVar2 = param_1;
      func_0x00780ea0();
    }
  }
  lVar2 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    ppuVar1 = *(undefined ***)(lVar2 + 0x20);
    func_0x0077eec0(ppuVar1);
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 0076d9bc; end: 0076d9f3;  */

void FUN_0076d9bc(long param_1,undefined8 param_2)

{
  func_0x0077eec0(*(undefined8 *)(param_1 + 0x20),param_2,
                  &PTR____CFConstantStringClassReference_00a4b4a0);
  return;
}



/* Entry: 0076d9f4; end: 0076da5f;  */

void FUN_0076d9f4(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),3);
  return;
}



/* Entry: 0076da60; end: 0076dacf;  */

void FUN_0076da60(long param_1,undefined8 param_2)

{
  func_0x0077eec0(*(undefined8 *)(param_1 + 0x20),param_2,
                  &PTR____CFConstantStringClassReference_00a4b4c0);
  return;
}



/* Entry: 0076dad0; end: 0076de53;  */

/* WARNING: Possible PIC construction at 0x0076db18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076db1c) */
/* WARNING: Removing unreachable block (ram,0x0076db20) */
/* WARNING: Removing unreachable block (ram,0x0076db54) */
/* WARNING: Removing unreachable block (ram,0x0076db84) */
/* WARNING: Removing unreachable block (ram,0x0076dbb4) */
/* WARNING: Removing unreachable block (ram,0x0076db8c) */
/* WARNING: Removing unreachable block (ram,0x0076dc00) */
/* WARNING: Removing unreachable block (ram,0x0076db94) */
/* WARNING: Removing unreachable block (ram,0x0076db9c) */
/* WARNING: Removing unreachable block (ram,0x0076db60) */
/* WARNING: Removing unreachable block (ram,0x0076dba8) */
/* WARNING: Removing unreachable block (ram,0x0076db68) */
/* WARNING: Removing unreachable block (ram,0x0076dbf4) */
/* WARNING: Removing unreachable block (ram,0x0076db70) */
/* WARNING: Removing unreachable block (ram,0x0076dbc0) */
/* WARNING: Removing unreachable block (ram,0x0076dc1c) */
/* WARNING: Removing unreachable block (ram,0x0076dbc8) */
/* WARNING: Removing unreachable block (ram,0x0076dc2c) */
/* WARNING: Removing unreachable block (ram,0x0076dbe0) */
/* WARNING: Removing unreachable block (ram,0x0076dc40) */
/* WARNING: Removing unreachable block (ram,0x0076db78) */
/* WARNING: Removing unreachable block (ram,0x0076dc08) */
/* WARNING: Removing unreachable block (ram,0x0076dc0c) */
/* WARNING: Removing unreachable block (ram,0x0076dc18) */
/* WARNING: Removing unreachable block (ram,0x0076dc48) */

void FUN_0076dad0(undefined8 param_1,undefined8 param_2)

{
  func_0x0077fde0();
  func_0x007882e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_2,PTR_s_appendString__00aba8d8,&PTR____CFConstantStringClassReference_00a4b620);
  return;
}



/* Entry: 0076de54; end: 0076df37;  */

/* WARNING: Removing unreachable block (ram,0x0076df08) */
/* WARNING: Removing unreachable block (ram,0x0076df14) */

ulong FUN_0076de54(long *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  uVar5 = (ulong)cVar1;
  *param_1 = (long)(pcVar2 + 1);
  if (cVar1 < 0) {
    uVar3 = (int)cVar1 & 0x7f;
    cVar1 = pcVar2[1];
    *param_1 = (long)(pcVar2 + 2);
    uVar4 = (int)cVar1 << 7;
    if (cVar1 < 0) {
      uVar3 = uVar4 & 0x3f80 | uVar3;
      cVar1 = pcVar2[2];
      *param_1 = (long)(pcVar2 + 3);
      uVar4 = (int)cVar1 << 0xe;
      if (cVar1 < 0) {
        uVar3 = uVar4 & 0x1fc000 | uVar3;
        cVar1 = pcVar2[3];
        *param_1 = (long)(pcVar2 + 4);
        uVar4 = (int)cVar1 << 0x15;
        if (cVar1 < 0) {
          cVar1 = pcVar2[4];
          *param_1 = (long)(pcVar2 + 5);
          uVar5 = (ulong)(uVar4 & 0xfe00000 | (int)cVar1 << 0x1c | uVar3);
          if (-1 < cVar1) {
            return uVar5;
          }
          *param_1 = (long)(pcVar2 + 6);
          return uVar5;
        }
      }
    }
    uVar5 = (ulong)(uVar4 | uVar3);
  }
  return uVar5;
}



/* Entry: 0076df38; end: 0076dfb7;  */

bool FUN_0076df38(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uStack_34;
  
  uStack_34 = 0;
  _class_copyMethodList(param_1,&uStack_34);
  if (uStack_34 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + uVar3 * 8);
      _method_getName();
      bVar1 = lVar2 == param_2;
      if (bVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_34);
  }
  _free(param_1);
  return bVar1;
}



/* Entry: 0076dfb8; end: 0076e527;  */

/* WARNING: Possible PIC construction at 0x0076e3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076e2a8) */
/* WARNING: Removing unreachable block (ram,0x0076e3dc) */
/* WARNING: Removing unreachable block (ram,0x0076e3e8) */
/* WARNING: Removing unreachable block (ram,0x0076e420) */
/* WARNING: Removing unreachable block (ram,0x0076e458) */
/* WARNING: Removing unreachable block (ram,0x0076e488) */
/* WARNING: Removing unreachable block (ram,0x0076e460) */
/* WARNING: Removing unreachable block (ram,0x0076e4c8) */
/* WARNING: Removing unreachable block (ram,0x0076e468) */
/* WARNING: Removing unreachable block (ram,0x0076e470) */
/* WARNING: Removing unreachable block (ram,0x0076e434) */
/* WARNING: Removing unreachable block (ram,0x0076e47c) */
/* WARNING: Removing unreachable block (ram,0x0076e43c) */
/* WARNING: Removing unreachable block (ram,0x0076e4bc) */
/* WARNING: Removing unreachable block (ram,0x0076e444) */
/* WARNING: Removing unreachable block (ram,0x0076e494) */
/* WARNING: Removing unreachable block (ram,0x0076e4e4) */
/* WARNING: Removing unreachable block (ram,0x0076e49c) */
/* WARNING: Removing unreachable block (ram,0x0076e4f4) */
/* WARNING: Removing unreachable block (ram,0x0076e4d4) */
/* WARNING: Removing unreachable block (ram,0x0076e4e0) */
/* WARNING: Removing unreachable block (ram,0x0076e4fc) */
/* WARNING: Removing unreachable block (ram,0x0076e44c) */
/* WARNING: Removing unreachable block (ram,0x0076e4d0) */
/* WARNING: Removing unreachable block (ram,0x0076e2f8) */

void FUN_0076dfb8(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar11;
  long lVar12;
  long lStack_150;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  ulong uVar10;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_150 = param_2;
  lVar5 = param_2;
  func_0x00780ea0(param_2,param_2,&uStack_130,auStack_f0,0x10);
  if (lStack_150 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar10 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar9 = (uint)uVar10;
        func_0x00783260();
        if ((uint)param_3 <= uVar9) {
          if ((uint)((ulong)param_3 >> 0x20) <= uVar9) goto LAB_0076e368;
          lVar1 = param_1;
          func_0x00783ee0();
          uVar2 = uVar10;
          func_0x00787c60();
          if ((uVar2 & 1) == 0) {
            func_0x00791840();
LAB_0076e104:
            func_0x007921a0();
            func_0x00781580();
            lVar11 = 1;
          }
          else {
            lVar11 = lVar1;
            func_0x00780e80();
            func_0x00791840();
            if (lVar11 == 1) goto LAB_0076e104;
            func_0x0077eec0(param_4);
            func_0x00781580();
            if (lVar11 == 0) goto LAB_0076e338;
          }
          lVar12 = 0;
          do {
            lVar3 = lVar1;
            if ((int)uVar2 != 0) {
              func_0x00789e00();
            }
            func_0x0077eec0(param_4);
            switch(uVar10 & 0xffffffff) {
            case 0:
              func_0x0077fbc0();
              ppuVar6 = &PTR____CFConstantStringClassReference_00a21460;
              if ((int)lVar3 == 0) {
                ppuVar6 = &PTR____CFConstantStringClassReference_00a21500;
              }
              goto code_r0x0077ef80;
            case 1:
            case 0xb:
              func_0x007930e0();
              break;
            case 2:
              func_0x007930e0();
              break;
            case 3:
              func_0x00783840(lVar3);
              break;
            case 4:
            case 0xc:
              func_0x00793120();
              break;
            case 5:
            case 8:
            case 10:
              func_0x00788b40();
              break;
            case 6:
              func_0x00782440(lVar3);
              break;
            case 7:
            case 9:
            case 0x11:
              func_0x007871a0();
              break;
            case 0xd:
              lVar5 = param_4;
              FUN_0076dad0(lVar3,param_4);
              goto LAB_0076e318;
            case 0xe:
              goto SUB_0076e3a4;
            case 0xf:
            case 0x10:
              func_0x0077eec0(param_4);
              uVar4 = param_5;
              func_0x00791ec0(param_5);
              lVar5 = param_4;
              FUN_0076ce30(lVar3,param_4,uVar4);
              func_0x0077eec0(param_4);
            default:
              goto LAB_0076e318;
            }
            func_0x0077eec0(param_4);
LAB_0076e318:
            func_0x0077eec0(param_4);
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
        }
LAB_0076e338:
        lVar8 = lVar8 + 1;
      } while (lVar8 != lStack_150);
      lStack_150 = param_2;
      func_0x00780ea0();
    } while (lStack_150 != 0);
  }
LAB_0076e368:
  param_4 = lVar5;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
SUB_0076e3a4:
  ppuVar6 = &PTR____CFConstantStringClassReference_00a4b620;
code_r0x0077ef80:
                    /* WARNING: Could not recover jumptable at 0x0077ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_appendString__00aba8d8,ppuVar6);
  return;
}



/* Entry: 0076e528; end: 0076e65f;  */

/* WARNING: Possible PIC construction at 0x0076e56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076e5a4) */
/* WARNING: Removing unreachable block (ram,0x0076e628) */
/* WARNING: Removing unreachable block (ram,0x0076e5bc) */
/* WARNING: Removing unreachable block (ram,0x0076e5dc) */
/* WARNING: Removing unreachable block (ram,0x0076e5c4) */
/* WARNING: Removing unreachable block (ram,0x0076e5cc) */
/* WARNING: Removing unreachable block (ram,0x0076e634) */
/* WARNING: Removing unreachable block (ram,0x0076e570) */
/* WARNING: Removing unreachable block (ram,0x0076e644) */

void FUN_0076e528(long param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) == '\0') {
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x0077ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__00aba8d8,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 0076e660; end: 0076e773;  */

void FUN_0076e660(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),3);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),3);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),3);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),3);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),3);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),3);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 0076e774; end: 0076e92f;  */

/* WARNING: Possible PIC construction at 0x0076e7b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e7f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076e8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076e914) */
/* WARNING: Removing unreachable block (ram,0x0076e7fc) */
/* WARNING: Removing unreachable block (ram,0x0076e7bc) */
/* WARNING: Removing unreachable block (ram,0x0076e800) */
/* WARNING: Removing unreachable block (ram,0x0076e810) */
/* WARNING: Removing unreachable block (ram,0x0076e848) */
/* WARNING: Removing unreachable block (ram,0x0076e8a8) */
/* WARNING: Removing unreachable block (ram,0x0076e850) */
/* WARNING: Removing unreachable block (ram,0x0076e858) */
/* WARNING: Removing unreachable block (ram,0x0076e870) */
/* WARNING: Removing unreachable block (ram,0x0076e8f0) */
/* WARNING: Removing unreachable block (ram,0x0076e87c) */
/* WARNING: Removing unreachable block (ram,0x0076e828) */
/* WARNING: Removing unreachable block (ram,0x0076e898) */
/* WARNING: Removing unreachable block (ram,0x0076e830) */
/* WARNING: Removing unreachable block (ram,0x0076e888) */
/* WARNING: Removing unreachable block (ram,0x0076e890) */
/* WARNING: Removing unreachable block (ram,0x0076e838) */
/* WARNING: Removing unreachable block (ram,0x0076e7dc) */
/* WARNING: Removing unreachable block (ram,0x0076e8b8) */
/* WARNING: Removing unreachable block (ram,0x0076e900) */
/* WARNING: Removing unreachable block (ram,0x0076e904) */

void FUN_0076e774(long param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) == '\0') {
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x0077ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__00aba8d8,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 0076e930; end: 0076ea5f;  */

void FUN_0076e930(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),3);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),3);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),3);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),3);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),3);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),3);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),3);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 0076ea60; end: 0076ea87; -[GPBTimestamp initWithDate:] */

void FUN_0076ea60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x007928e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00786a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithTimeIntervalSince1970__00abc7a0);
  return;
}



/* Entry: 0076ea88; end: 0076eb2f; -[GPBTimestamp initWithTimeIntervalSince1970:] */

undefined8 * FUN_0076ea88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR__OBJC_CLASS___GPBTimestamp_00ac48e0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _modf(auStack_48);
    func_0x00790320(puVar1);
    func_0x0078f180(puVar1);
  }
  return puVar1;
}



/* Entry: 0076eb30; end: 0076eb57; -[GPBTimestamp date] */

void FUN_0076eb30(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007928e0();
                    /* WARNING: Could not recover jumptable at 0x00781930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(puVar1,PTR_s_dateWithTimeIntervalSince1970__00abb340);
  return;
}



/* Entry: 0076eb58; end: 0076eb7f; -[GPBTimestamp setDate:] */

void FUN_0076eb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x007928e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00790a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setTimeIntervalSince1970__00abefa0);
  return;
}



/* Entry: 0076eb80; end: 0076ebc3; -[GPBTimestamp timeIntervalSince1970] */

double FUN_0076eb80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0078c440();
  func_0x007897a0(param_1);
  return (double)(int)param_1 / 1000000000.0 + (double)lVar1;
}



/* Entry: 0076ebc4; end: 0076ec33; -[GPBTimestamp setTimeIntervalSince1970:] */

void FUN_0076ebc4(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auStack_28 [8];
  
  _modf(auStack_28);
  dVar1 = param_1 + 1.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  func_0x00790320(param_2);
                    /* WARNING: Could not recover jumptable at 0x0078f190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_2,PTR_s_setNanos__00abe970,(int)(dVar1 * 1000000000.0));
  return;
}



/* Entry: 0076ec34; end: 0076ecbf; -[GPBDuration initWithTimeInterval:] */

undefined8 * FUN_0076ec34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR__OBJC_CLASS___GPBDuration_00ac48e8;
  puVar1 = &uStack_40;
  uStack_40 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _modf(param_1,auStack_48);
    func_0x00790320(puVar1);
    func_0x0078f180(puVar1);
  }
  return puVar1;
}



/* Entry: 0076ecc0; end: 0076ecc3; -[GPBDuration initWithTimeIntervalSince1970:] */

void FUN_0076ecc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithTimeInterval__00abc798);
  return;
}



/* Entry: 0076ecc4; end: 0076ed07; -[GPBDuration timeInterval] */

double FUN_0076ecc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0078c440();
  func_0x007897a0(param_1);
  return (double)(int)param_1 / 1000000000.0 + (double)lVar1;
}



/* Entry: 0076ed08; end: 0076ed5b; -[GPBDuration setTimeInterval:] */

void FUN_0076ed08(double param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  _modf(auStack_28);
  func_0x00790320(param_2);
                    /* WARNING: Could not recover jumptable at 0x0078f190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_2,PTR_s_setNanos__00abe970,(int)(param_1 * 1000000000.0));
  return;
}



/* Entry: 0076ed5c; end: 0076ed5f; -[GPBDuration timeIntervalSince1970] */

void FUN_0076ed5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007928d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_timeInterval_00abf740);
  return;
}



/* Entry: 0076ed60; end: 0076ed63; -[GPBDuration setTimeIntervalSince1970:] */

void FUN_0076ed60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00790a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setTimeInterval__00abef98);
  return;
}



/* Entry: 0076ed64; end: 0076ed73; +[GPBAny anyWithMessage:error:] */

void FUN_0076ed64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_anyWithMessage_typeURLPrefix_err_00aba838,param_3,
             &PTR____CFConstantStringClassReference_00a4b8c0,param_4);
  return;
}



/* Entry: 0076ed74; end: 0076edb3; +[GPBAny anyWithMessage:typeURLPrefix:error:] */

void FUN_0076ed74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _objc_alloc();
  func_0x00785ba0(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0076edb4; end: 0076edc3; -[GPBAny initWithMessage:error:] */

void FUN_0076edb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00785bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithMessage_typeURLPrefix_er_00abc3f0,param_3,
             &PTR____CFConstantStringClassReference_00a4b8c0,param_4);
  return;
}



/* Entry: 0076edc4; end: 0076ee23; -[GPBAny initWithMessage:typeURLPrefix:error:] */

ulong FUN_0076edc4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  func_0x007849a0();
  if ((param_1 != 0) &&
     (uVar1 = param_1, func_0x0078a240(param_1,param_2,param_3,param_4,param_5), (uVar1 & 1) == 0))
  {
    _objc_release(param_1);
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0076ee24; end: 0076ee33; -[GPBAny packWithMessage:error:] */

void FUN_0076ee24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0078a250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_packWithMessage_typeURLPrefix_er_00abd5a0,param_3,
             &PTR____CFConstantStringClassReference_00a4b8c0,param_4);
  return;
}



/* Entry: 0076ee34; end: 0076ef33; -[GPBAny packWithMessage:typeURLPrefix:error:] */

bool FUN_0076ee34(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_3;
  func_0x00781ea0();
  func_0x00783bc0();
  puVar2 = puVar1;
  func_0x007882e0();
  if (puVar2 == (undefined *)0x0) {
    if (param_5 != (undefined8 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
      func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,
                      &PTR____CFConstantStringClassReference_00a4b8a0,0xffffffffffffff9c,0);
      *param_5 = puVar1;
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    puVar3 = param_4;
    func_0x007882e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = param_4;
      func_0x00784380(param_4,param_2,&PTR____CFConstantStringClassReference_00a24b80);
      if ((int)puVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
        func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                        &PTR____CFConstantStringClassReference_00a29260);
      }
      else {
        func_0x00791ec0(param_4,param_2,puVar1);
        puVar1 = param_4;
      }
    }
    func_0x00790d40(param_1,param_2,puVar1);
    func_0x007814c0(param_3);
    func_0x00791140(param_1,param_2,param_3);
  }
  return puVar2 != (undefined *)0x0;
}



/* Entry: 0076ef34; end: 0076ef3f; -[GPBAny unpackMessageClass:error:] */

void FUN_0076ef34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x007930b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_unpackMessageClass_extensionRegi_00abf938,param_3,0,param_4);
  return;
}



/* Entry: 0076ef40; end: 0076f067; -[GPBAny unpackMessageClass:extensionRegistry:error:] */

long FUN_0076ef40(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  lVar1 = param_3;
  func_0x00781ea0();
  func_0x00783bc0();
  func_0x007882e0();
  puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00;
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00792f60();
    uVar3 = uVar2;
    func_0x0078ae20();
    puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if ((((uVar3 != 0x7fffffffffffffff) &&
         (uVar4 = uVar2, func_0x007882e0(), puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00,
         uVar3 + param_2 != uVar4)) &&
        (func_0x00792440(), puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00, uVar2 != 0)) &&
       (func_0x007877e0(), puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00, (uVar2 & 1) != 0)) {
      func_0x00793580(param_1);
                    /* WARNING: Could not recover jumptable at 0x0078a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_3,PTR_s_parseFromData_extensionRegistry__00abd5e0,param_1,param_4,param_5);
      return param_3;
    }
  }
  PTR__OBJC_CLASS___NSError_00ac2b00 = puVar5;
  if (param_5 != (undefined8 *)0x0) {
    func_0x00782e40();
    *param_5 = puVar5;
  }
  return 0;
}



/* Entry: 0076f068; end: 0076f073; -[SCAssertTracker lastAssertFuseKey] */

void FUN_0076f068(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,8,1);
  return;
}



/* Entry: 0076f074; end: 0076f07b; -[SCAssertTracker setLastAssertFuseKey:] */

void FUN_0076f074(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_0099ade0)();
  return;
}



/* Entry: 0076f07c; end: 0076f087; -[SCAssertTracker .cxx_destruct] */

void FUN_0076f07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0076f088; end: 0076f1b3;  */

bool FUN_0076f088(ulong param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long alStack_50 [2];
  
  FUN_0076f60c();
  if ((param_1 & 1) == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_00a4b900);
    bVar2 = false;
  }
  else {
    if (lRam0000000000b646e8 != -1) {
      _dispatch_once(0xb646e8,&PTR___NSConcreteGlobalBlock_00a20d50);
    }
    lVar1 = lRam0000000000b646e0;
    _objc_retain(lRam0000000000b646e0);
    lVar3 = lVar1;
    func_0x00788180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    bVar2 = lVar3 != 0;
    if (lVar3 == 0) {
      _NSLog(&PTR____CFConstantStringClassReference_00a4b920);
    }
    else {
      _clock_gettime(6,alStack_50);
      puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      FUN_0076f1e0((double)alStack_50[0]);
      FUN_0076f1e0((double)alStack_50[0],lVar3);
      _NSLog(&PTR____CFConstantStringClassReference_00a4b940);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  return bVar2;
}



/* Entry: 0076f1b4; end: 0076f1df;  */

void FUN_0076f1b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac3960;
  _objc_alloc_init();
  uVar1 = puRam0000000000b646e0;
  puRam0000000000b646e0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0076f1e0; end: 0076f29f;  */

void FUN_0076f1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  _objc_retain();
  func_0x00791b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_3,
                  &PTR____CFConstantStringClassReference_00a4b960);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x0078db40(param_1,puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  func_0x00791b60(PTR__OBJC_CLASS___NSUserDefaults_00ac3018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792660();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0076f2a0; end: 0076f2bb;  */

undefined8 FUN_0076f2a0(void)

{
  return 0xb6620a;
}



/* Entry: 0076f2bc; end: 0076f2fb;  */

undefined1 FUN_0076f2bc(void)

{
  if (lRam0000000000b646f8 != -1) {
    _dispatch_once(0xb646f8,&PTR___NSConcreteGlobalBlock_00a20d70);
  }
  return uRam0000000000b646f0;
}



/* Entry: 0076f2fc; end: 0076f4e7;  */

void FUN_0076f2fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_0091f553;
  _dispatch_queue_create(&UNK_0091f553,0);
  puVar2 = puVar1;
  _dispatch_group_create();
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_0076f4e8;
  uStack_40 = 0x76f4f8;
  uStack_38 = 0;
  puStack_58 = &uStack_60;
  _dispatch_group_enter();
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_0076f500;
  puStack_78 = &UNK_009e4400;
  puStack_68 = &uStack_60;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  _dispatch_async(puVar1,&puStack_90);
  uVar3 = 0;
  _dispatch_time(0,50000000);
  puVar6 = puVar2;
  _dispatch_group_wait(puVar2,uVar3);
  puVar5 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)puStack_58[5];
    if (puVar6 != (undefined *)0x0) {
      _objc_retain(puVar6);
      goto LAB_0076f40c;
    }
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0077ee40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0077ee40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
LAB_0076f40c:
  puVar5 = puVar6;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    uRam0000000000b646f0 = false;
  }
  else {
    puVar4 = puVar5;
    func_0x0078ae00();
    uRam0000000000b646f0 = puVar4 != (undefined *)0x7fffffffffffffff;
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puStack_70);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 0076f4e8; end: 0076f4ff;  */

void FUN_0076f4e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 0076f500; end: 0076f563;  */

void FUN_0076f500(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_00ac3968;
  func_0x007914e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_0099a128)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0076f564; end: 0076f56b;  */

undefined8 FUN_0076f564(void)

{
  return 1;
}



/* Entry: 0076f56c; end: 0076f5ab;  */

undefined1 FUN_0076f56c(void)

{
  if (lRam0000000000b64700 != -1) {
    _dispatch_once(0xb64700,&PTR___NSConcreteGlobalBlock_00a20d90);
  }
  return uRam0000000000b646f1;
}



/* Entry: 0076f5ac; end: 0076f60b;  */

void FUN_0076f5ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077fd60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00784380();
  uRam0000000000b646f1 = SUB81(puVar3,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0076f60c; end: 0076f6a3;  */

ulong FUN_0076f60c(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [32];
  uint uStack_2a0;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_2a0 = 0;
  uStack_38 = 0xe00000001;
  uStack_30 = 1;
  uStack_2c = param_1;
  _getpid();
  uStack_2c8 = 0x288;
  _sysctl(&uStack_38,4,auStack_2c0,&uStack_2c8,0,0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (ulong)(uStack_2a0 >> 0xb & 1);
  }
  ___stack_chk_fail();
  uVar1 = 0;
  _CFDictionaryCreateMutable(0,0x800,&UNK_00a20db0,PTR__kCFTypeDictionaryValueCallBacks_00999d88);
  uRam0000000000b6ce40 = uVar1;
  uRam0000000000b6ce48 = 0;
  uRam0000000000b6ce4c = 0;
  return uVar1;
}



/* Entry: 0076f6a4; end: 0076f6e7;  */

void FUN_0076f6a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _CFDictionaryCreateMutable(0,0x800,&UNK_00a20db0,PTR__kCFTypeDictionaryValueCallBacks_00999d88);
  uRam0000000000b6ce40 = uVar1;
  uRam0000000000b6ce48 = 0;
  uRam0000000000b6ce4c = 0;
  return;
}



/* Entry: 0076f6e8; end: 0076f84b;  */

ulong FUN_0076f6e8(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x00787c00();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      _object_getClass(param_1);
      _os_unfair_lock_lock(0xb6ce48);
      lVar3 = lRam0000000000b6ce40;
      _CFDictionaryGetValue(lRam0000000000b6ce40,uVar2);
      if (lVar3 == 0) {
        _CFDictionaryCreateMutable();
        _CFDictionarySetValue(lRam0000000000b6ce40,uVar2,lVar3);
      }
      _os_unfair_lock_unlock(0xb6ce48);
      _os_unfair_lock_lock(0xb6ce4c);
      lVar4 = lVar3;
      _CFDictionaryGetValue(lVar3,param_2);
      _os_unfair_lock_unlock(0xb6ce4c);
      if (lVar4 == 0) {
        func_0x007809e0();
        _os_unfair_lock_lock(0xb6ce4c);
        puVar1 = (undefined8 *)PTR__kCFBooleanTrue_00999d40;
        if ((int)param_1 == 0) {
          puVar1 = (undefined8 *)PTR__kCFBooleanFalse_00999d38;
        }
        _CFDictionarySetValue(lVar3,param_2,*puVar1);
        _os_unfair_lock_unlock(0xb6ce4c);
      }
      else {
        param_1 = (ulong)(*(long *)PTR__kCFBooleanTrue_00999d40 == lVar4);
      }
    }
    else {
      func_0x007809e0(param_1);
    }
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 0076f84c; end: 0076f84f;  */

void FUN_0076f84c(void)

{
  return;
}



/* Entry: 0076f850; end: 0076fa5b;  */

/* WARNING: Removing unreachable block (ram,0x0076f924) */

void FUN_0076f850(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  lVar1 = param_1;
  func_0x00793bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_00ac2df8;
    func_0x00791500();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00780a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00780ea0();
    while (puVar6 = puVar3, puVar2 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        puVar4 = PTR__OBJC_CLASS___UIWindowScene_00ac3970;
        puVar8 = *(undefined **)((long)puVar9 * 8);
        _objc_retain(puVar8);
        _objc_opt_class(puVar4);
        puVar5 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar4);
        puVar4 = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          puVar4 = (undefined *)0x0;
        }
        _objc_retain(puVar4);
        _objc_release(puVar8);
        if ((puVar4 != (undefined *)0x0) &&
           (puVar5 = puVar8, func_0x0077e3a0(), puVar5 == (undefined *)0x0)) goto LAB_0076f9f4;
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar3;
      func_0x00780ea0();
    }
    _objc_release(puVar3);
    func_0x0077ece0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIWindowScene_00ac3970;
    _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_00ac3970);
    puVar9 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar2);
    puVar8 = puVar6;
    if (((ulong)puVar9 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
LAB_0076f9f4:
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00791340(param_1);
    _objc_release(puVar8);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00782790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)();
    return;
  }
  return;
}



/* Entry: 0076fa5c; end: 0076fa5f;  */

void FUN_0076fa5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_encodeObject_forKey__00abb6d8);
  return;
}


