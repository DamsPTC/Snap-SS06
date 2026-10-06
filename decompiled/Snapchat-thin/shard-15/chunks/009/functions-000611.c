/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd83420; end: 10bd83497; -[GPBUnknownFieldSet description] */

undefined * FUN_10bd83420(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1);
  FUN_10bd844a8(param_1,&PTR____CFConstantStringClassReference_11102fb98);
  func_0x00010bf070e0(puVar1);
  func_0x00010bf070e0(puVar1);
  return puVar1;
}



/* Entry: 10bd83498; end: 10bd834cf; -[GPBUnknownFieldSet serializedSize] */

undefined8 FUN_10bd83498(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    _CFDictionaryApplyFunction(*(long *)(param_1 + 8),FUN_10bd834d0,&uStack_18);
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 10bd834d0; end: 10bd834ff;  */

void FUN_10bd834d0(undefined8 param_1,long param_2,long *param_3)

{
  func_0x00010c15ebe0();
  *param_3 = *param_3 + param_2;
  return;
}



/* Entry: 10bd83500; end: 10bd8351f; -[GPBUnknownFieldSet writeAsMessageSetTo:] */

void FUN_10bd83500(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_11034a5a8)(*(long *)(param_1 + 8),0x10bd83518);
    return;
  }
  return;
}



/* Entry: 10bd83520; end: 10bd83557; -[GPBUnknownFieldSet serializedSizeAsMessageSet] */

undefined8 FUN_10bd83520(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    _CFDictionaryApplyFunction(*(long *)(param_1 + 8),FUN_10bd83558,&uStack_18);
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 10bd83558; end: 10bd83587;  */

void FUN_10bd83558(undefined8 param_1,long param_2,long *param_3)

{
  func_0x00010c15ec20();
  *param_3 = *param_3 + param_2;
  return;
}



/* Entry: 10bd83588; end: 10bd835ff; -[GPBUnknownFieldSet data] */

undefined * FUN_10bd83588(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  uVar1 = param_1;
  func_0x00010c15ebe0();
  func_0x00010bf64b80(puVar2,param_2,uVar1);
  puVar3 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  func_0x00010c2be4c0(param_1,param_2,puVar3);
  func_0x00010bfb2f20(puVar3);
  _objc_release(puVar3);
  return puVar2;
}



/* Entry: 10bd83600; end: 10bd8360f; +[GPBUnknownFieldSet isFieldTag:] */

bool FUN_10bd83600(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return (param_3 & 7) != 4;
}



/* Entry: 10bd83610; end: 10bd8369b; -[GPBUnknownFieldSet addField:] */

void FUN_10bd83610(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0de940();
  if (param_3 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFDictionaryCreateMutable(uVar1,0,0,PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdba37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDictionarySetValue_11034a608)();
  return;
}



/* Entry: 10bd8369c; end: 10bd8371f; -[GPBUnknownFieldSet mutableFieldForNumber:create:] */

undefined * FUN_10bd8369c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    puVar2 = PTR_PTR_1126e3248;
  }
  else {
    _CFDictionaryGetValue(puVar1,(long)param_3);
    puVar2 = PTR_PTR_1126e3248;
  }
  PTR_PTR_1126e3248 = puVar2;
  if ((param_4 != 0) && (puVar1 == (undefined *)0x0)) {
    _objc_alloc(puVar2);
    func_0x00010c0304c0();
    func_0x00010bef8440(param_1);
    _objc_release(puVar2);
    puVar1 = puVar2;
  }
  return puVar1;
}



/* Entry: 10bd83720; end: 10bd83743; -[GPBUnknownFieldSet mergeUnknownFields:] */

void FUN_10bd83720(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionaryApplyFunction_11034a5a8)
              (*(long *)(param_3 + 8),FUN_10bd83744,param_1);
    return;
  }
  return;
}



/* Entry: 10bd83744; end: 10bd837df;  */

void FUN_10bd83744(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x00010c0de940();
  if ((int)uVar1 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  lVar2 = param_3;
  func_0x00010c0d3ce0();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0cac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  func_0x00010bf51e00(param_2);
  func_0x00010bef8440(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bd837e0; end: 10bd83843; -[GPBUnknownFieldSet mergeVarintField:value:] */

void FUN_10bd837e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102fbb8);
  }
  func_0x00010c0d3ce0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befc890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd83844; end: 10bd839df; -[GPBUnknownFieldSet mergeFieldFrom:input:] */

undefined8 FUN_10bd83844(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

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
      func_0x00010c0d3ce0(param_1,param_2,uVar4,1);
      func_0x000107c3aafc(param_4 + 8);
      func_0x00010befc880(param_1);
    }
    else if (uVar1 == 1) {
      uVar3 = 1;
      func_0x00010c0d3ce0(param_1,param_2,uVar4,1);
      func_0x000107c3ab04(param_4 + 8,8);
      *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 8;
      func_0x00010bef8500(param_1);
    }
  }
  else if (uVar1 == 2) {
    param_4 = param_4 + 8;
    func_0x000107c31834(param_4);
    uVar3 = 1;
    func_0x00010c0d3ce0(param_1);
    func_0x00010bef96e0();
    _objc_release(param_4);
  }
  else if (uVar1 == 3) {
    puVar2 = PTR_PTR_1126e3240;
    _objc_alloc_init(PTR_PTR_1126e3240);
    uVar3 = 1;
    func_0x00010c0d3ce0(param_1);
    func_0x00010bef90c0();
    _objc_release(puVar2);
    func_0x00010c121aa0(param_4);
  }
  else if (uVar1 == 5) {
    uVar3 = 1;
    func_0x00010c0d3ce0(param_1,param_2,uVar4,1);
    func_0x000107c3ab04(param_4 + 8,4);
    *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 4;
    func_0x00010bef84e0(param_1);
  }
  return uVar3;
}



/* Entry: 10bd839e0; end: 10bd83a07; -[GPBUnknownFieldSet mergeMessageSetMessage:data:] */

void FUN_10bd839e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0d3ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bef96f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addLengthDelimited__11259bf60,param_4);
  return;
}



/* Entry: 10bd83a08; end: 10bd83a2f; -[GPBUnknownFieldSet addUnknownMapEntry:value:] */

void FUN_10bd83a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0d3ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bef96f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addLengthDelimited__11259bf60,param_4);
  return;
}



/* Entry: 10bd83a30; end: 10bd83a6f; -[GPBUnknownFieldSet mergeFromCodedInputStream:] */

void FUN_10bd83a30(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  do {
    lVar1 = param_3 + 8;
    func_0x000107c3182c();
    if ((int)lVar1 == 0) {
      return;
    }
    uVar2 = param_1;
    func_0x00010c0cab60(param_1,param_2,lVar1,param_3);
  } while ((uVar2 & 1) != 0);
  return;
}



/* Entry: 10bd83a70; end: 10bd83b37; -[GPBUnknownFieldSet getTags:] */

void FUN_10bd83a70(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 *puVar2;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    _CFDictionaryGetCount();
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar1 << 3);
    puVar2 = (undefined8 *)((long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 8),puVar2,0);
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_3 = (int)*puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_50[1]) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  return;
}



/* Entry: 10bd83b38; end: 10bd83b77;  */

void FUN_10bd83b38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                      &PTR____CFConstantStringClassReference_11102fbd8);
  return;
}



/* Entry: 10bd83b78; end: 10bd83c37;  */

void FUN_10bd83b78(long param_1,long param_2)

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



/* Entry: 10bd83c38; end: 10bd83c3b;  */

ulong FUN_10bd83c38(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(param_2);
      return param_2;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 10bd83c3c; end: 10bd83c97;  */

undefined ** FUN_10bd83c3c(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != 0) {
    ppuVar1 = ppuVar2;
    if (param_2 != (undefined **)0x0) {
      ppuVar1 = param_2;
    }
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    FUN_10bd83c98(param_1,ppuVar2,ppuVar1);
  }
  return ppuVar2;
}



/* Entry: 10bd83c98; end: 10bd844a7;  */

void FUN_10bd83c98(ulong param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010bf6e760();
  uVar16 = *(ulong *)(uVar5 + 8);
  uVar6 = uVar16;
  func_0x00010bf529e0();
  uVar7 = uVar5;
  func_0x00010bf9dd60();
  func_0x00010bf9dd80();
  uVar8 = param_1;
  func_0x00010bf9de00();
  func_0x00010c246d00();
  if (uVar6 != 0 || (int)uVar5 != 0) {
    uVar17 = 0;
    uVar15 = 0;
    do {
      if (uVar15 == uVar6) {
        FUN_10bd84db4(param_1,uVar8,*(undefined8 *)(uVar7 + uVar17 * 8),param_2,param_3);
        uVar9 = uVar6;
        uVar17 = uVar17 + 1;
      }
      else {
        if (uVar17 != (uVar5 & 0xffffffff)) {
          uVar9 = uVar16;
          func_0x00010c0dfd40();
          puVar1 = (uint *)(uVar7 + uVar17 * 8);
          if (*puVar1 <= *(uint *)(*(long *)(uVar9 + 8) + 0x10)) {
            uVar17 = uVar17 + 1;
            FUN_10bd84db4(param_1,uVar8,*(undefined8 *)puVar1,param_2,param_3);
            uVar9 = uVar15;
            goto LAB_10bd8441c;
          }
        }
        uVar9 = uVar15 + 1;
        uVar10 = uVar16;
        func_0x00010c0dfd40();
        uVar18 = uVar10;
        func_0x00010bfac840();
        iVar4 = (int)uVar18;
        if (iVar4 == 2) {
          lVar14 = *(long *)(param_1 + 0x40);
          if (lVar14 != 0) goto LAB_10bd83e38;
LAB_10bd83e60:
          uVar18 = 0;
LAB_10bd83e64:
          uVar15 = uVar18;
          func_0x00010bf529e0();
joined_r0x00010bd83e70:
          if (uVar15 == 0) goto LAB_10bd8441c;
        }
        else {
          if (iVar4 == 1) {
            lVar14 = *(long *)(param_1 + 0x40);
            if (lVar14 == 0) goto LAB_10bd83e60;
LAB_10bd83e38:
            uVar18 = *(ulong *)(lVar14 + (ulong)*(uint *)(*(long *)(uVar10 + 8) + 0x18));
            goto LAB_10bd83e64;
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
            goto joined_r0x00010bd83e70;
          }
        }
        uVar19 = uVar10;
        func_0x00010c26c060();
        func_0x00010c08fa60();
        if (uVar19 == 0) {
          func_0x00010c25d9e0();
          if (uVar15 == 1) {
            func_0x00010c0d4f60();
            func_0x00010c25d9e0();
          }
          else {
            func_0x00010c0d4f60();
            func_0x00010bf06ba0(param_2);
          }
        }
        if (iVar4 == 2) {
          uVar15 = uVar10;
          func_0x00010c0b92a0();
          bVar2 = *(byte *)(*(long *)(uVar10 + 8) + 0x1e);
          func_0x00010c25d9e0();
          func_0x00010c25d9e0();
          func_0x00010c25d9e0();
          func_0x00010c25d9e0();
          func_0x00010c25d9e0();
          puStack_90 = &uStack_98;
          uStack_98 = 0;
          uStack_88 = 0x2020000000;
          uStack_80 = 1;
          if (((int)uVar15 == 0xe) && (bVar2 - 0xd < 4)) {
            func_0x00010bf97ce0(uVar18);
          }
          else {
            func_0x00010bf97ba0(uVar18);
          }
          __Block_object_dispose(&uStack_98,8);
        }
        else {
          uVar19 = 0;
          uVar3 = *(undefined1 *)(*(long *)(uVar10 + 8) + 0x1e);
          do {
            func_0x00010bf06ba0(param_2);
            switch(uVar3) {
            case 0:
              if (uVar18 == 0) {
                func_0x000107c318b4(param_1,uVar10);
              }
              else {
                func_0x00010c296de0();
              }
              func_0x00010bf070e0(param_2);
              break;
            case 1:
            case 0xb:
              if (uVar18 == 0) {
                func_0x000107c318bc(param_1,uVar10);
              }
              else {
                func_0x00010c296de0();
              }
              goto code_r0x00010bd842dc;
            case 2:
            case 7:
            case 9:
              if (uVar18 == 0) {
                func_0x000107c318a8(param_1,uVar10);
              }
              else {
                func_0x00010c296de0();
              }
              goto code_r0x00010bd842dc;
            case 3:
              if (uVar18 == 0) {
                func_0x000107c318d4(param_1,uVar10);
              }
              else {
                func_0x00010c296de0(uVar18);
              }
              goto code_r0x00010bd842dc;
            case 4:
            case 0xc:
              if (uVar18 == 0) {
                func_0x000107c318cc(param_1,uVar10);
              }
              else {
                func_0x00010c296de0();
              }
              goto code_r0x00010bd842dc;
            case 5:
            case 8:
            case 10:
              if (uVar18 == 0) {
                func_0x000107c318c4(param_1,uVar10);
              }
              else {
                func_0x00010c296de0();
              }
              goto code_r0x00010bd842dc;
            case 6:
              if (uVar18 == 0) {
                func_0x000107c318dc(param_1,uVar10);
              }
              else {
                func_0x00010c296de0(uVar18);
              }
code_r0x00010bd842dc:
              func_0x00010bf06ba0(param_2);
              break;
            case 0xd:
              if (uVar18 == 0) {
                func_0x000107c3188c(param_1,uVar10);
              }
              else {
                func_0x00010c0dfd20(uVar18);
              }
              FUN_10bd848cc();
              break;
            case 0xe:
              if (uVar18 == 0) {
                func_0x000107c3188c(param_1,uVar10);
              }
              else {
                func_0x00010c0dfd20(uVar18);
              }
              func_0x00010bd851a0();
              break;
            case 0xf:
            case 0x10:
              if (uVar18 == 0) {
                uVar12 = param_1;
                func_0x000107c3188c(param_1,uVar10);
              }
              else {
                uVar12 = uVar18;
                func_0x00010c0dfd20(uVar18);
              }
              func_0x00010bf06ba0(param_2);
              uVar11 = param_3;
              func_0x00010c25ce40(param_3);
              FUN_10bd83c98(uVar12,param_2,uVar11);
              func_0x00010bf06ba0(param_2);
              break;
            case 0x11:
              if (uVar18 == 0) {
                func_0x000107c318a8(param_1,uVar10);
              }
              else {
                func_0x00010c120440();
              }
              uVar12 = uVar10;
              func_0x00010bf979c0();
              if ((uVar12 == 0) || (func_0x00010c26c080(), uVar12 == 0)) {
                func_0x00010bf06ba0(param_2);
              }
              else {
                func_0x00010bf070e0(param_2);
              }
            }
            func_0x00010bf06ba0(param_2);
            uVar19 = uVar19 + 1;
          } while (uVar15 != uVar19);
        }
      }
LAB_10bd8441c:
      uVar15 = uVar9;
    } while ((uVar9 < uVar6) || (uVar17 < (uVar5 & 0xffffffff)));
  }
  func_0x00010c280920();
  FUN_10bd844a8();
  func_0x00010c08fa60();
  if (param_1 != 0) {
    func_0x00010bf06ba0(param_2);
    func_0x00010bf070e0(param_2);
  }
  return;
}



/* Entry: 10bd844a8; end: 10bd84823;  */

undefined ** FUN_10bd844a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != 0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    func_0x00010c246e00();
    lVar4 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lVar7 * 8);
        func_0x00010c0de940();
        func_0x00010c297940(lVar8);
        func_0x00010bf980c0();
        func_0x00010bfb21a0(lVar8);
        func_0x00010bf980c0();
        func_0x00010bfb21c0(lVar8);
        func_0x00010bf980c0();
        lVar11 = lVar8;
        func_0x00010c08faa0();
        lVar5 = lVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar11);
            }
            uVar9 = *(undefined8 *)(lVar10 * 8);
            func_0x00010bf06ba0(ppuVar3);
            FUN_10bd848cc(uVar9);
            func_0x00010bf070e0(ppuVar3);
            lVar10 = lVar10 + 1;
          } while (lVar5 != lVar10);
          lVar5 = lVar11;
          func_0x00010bf52a60();
        }
        func_0x00010bfced60();
        lVar5 = lVar8;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            uVar9 = *(undefined8 *)(lVar11 * 8);
            func_0x00010bf06ba0(ppuVar3);
            func_0x00010c25ce40();
            FUN_10bd844a8(uVar9);
            func_0x00010bf070e0(ppuVar3);
            func_0x00010bf06ba0(ppuVar3);
            lVar11 = lVar11 + 1;
          } while (lVar5 != lVar11);
          lVar5 = lVar8;
          func_0x00010bf52a60();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar4);
      lVar4 = param_1;
      func_0x00010bf52a60();
    }
  }
  lVar4 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar3 = *(undefined ***)(lVar4 + 0x20);
  func_0x00010bf06ba0(ppuVar3);
  return ppuVar3;
}



/* Entry: 10bd84824; end: 10bd848cb;  */

void FUN_10bd84824(long param_1,undefined8 param_2)

{
  func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_11102fc18);
  return;
}



/* Entry: 10bd848cc; end: 10bd84c4f;  */

/* WARNING: Possible PIC construction at 0x00010bd84914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd84918) */
/* WARNING: Removing unreachable block (ram,0x00010bd8491c) */
/* WARNING: Removing unreachable block (ram,0x00010bd84950) */
/* WARNING: Removing unreachable block (ram,0x00010bd84980) */
/* WARNING: Removing unreachable block (ram,0x00010bd849b0) */
/* WARNING: Removing unreachable block (ram,0x00010bd84988) */
/* WARNING: Removing unreachable block (ram,0x00010bd849fc) */
/* WARNING: Removing unreachable block (ram,0x00010bd84990) */
/* WARNING: Removing unreachable block (ram,0x00010bd84998) */
/* WARNING: Removing unreachable block (ram,0x00010bd8495c) */
/* WARNING: Removing unreachable block (ram,0x00010bd849a4) */
/* WARNING: Removing unreachable block (ram,0x00010bd84964) */
/* WARNING: Removing unreachable block (ram,0x00010bd849f0) */
/* WARNING: Removing unreachable block (ram,0x00010bd8496c) */
/* WARNING: Removing unreachable block (ram,0x00010bd849bc) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a18) */
/* WARNING: Removing unreachable block (ram,0x00010bd849c4) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a28) */
/* WARNING: Removing unreachable block (ram,0x00010bd849dc) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a3c) */
/* WARNING: Removing unreachable block (ram,0x00010bd84974) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a04) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a08) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a14) */
/* WARNING: Removing unreachable block (ram,0x00010bd84a44) */

void FUN_10bd848cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf25f00();
  func_0x00010c08fa60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_appendString__11259f5e0,&PTR____CFConstantStringClassReference_110e86758)
  ;
  return;
}



/* Entry: 10bd84c50; end: 10bd84d33;  */

/* WARNING: Removing unreachable block (ram,0x00010bd84d04) */
/* WARNING: Removing unreachable block (ram,0x00010bd84d10) */

ulong FUN_10bd84c50(long *param_1)

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



/* Entry: 10bd84d34; end: 10bd84db3;  */

bool FUN_10bd84d34(long param_1,long param_2)

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



/* Entry: 10bd84db4; end: 10bd85323;  */

/* WARNING: Possible PIC construction at 0x00010bd851d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd852cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd850a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd850f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd850a4) */
/* WARNING: Removing unreachable block (ram,0x00010bd851d8) */
/* WARNING: Removing unreachable block (ram,0x00010bd851e4) */
/* WARNING: Removing unreachable block (ram,0x00010bd8521c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85254) */
/* WARNING: Removing unreachable block (ram,0x00010bd85284) */
/* WARNING: Removing unreachable block (ram,0x00010bd8525c) */
/* WARNING: Removing unreachable block (ram,0x00010bd852c4) */
/* WARNING: Removing unreachable block (ram,0x00010bd85264) */
/* WARNING: Removing unreachable block (ram,0x00010bd8526c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85230) */
/* WARNING: Removing unreachable block (ram,0x00010bd85278) */
/* WARNING: Removing unreachable block (ram,0x00010bd85238) */
/* WARNING: Removing unreachable block (ram,0x00010bd852b8) */
/* WARNING: Removing unreachable block (ram,0x00010bd85240) */
/* WARNING: Removing unreachable block (ram,0x00010bd85290) */
/* WARNING: Removing unreachable block (ram,0x00010bd852e0) */
/* WARNING: Removing unreachable block (ram,0x00010bd85298) */
/* WARNING: Removing unreachable block (ram,0x00010bd852f0) */
/* WARNING: Removing unreachable block (ram,0x00010bd852d0) */
/* WARNING: Removing unreachable block (ram,0x00010bd852dc) */
/* WARNING: Removing unreachable block (ram,0x00010bd852f8) */
/* WARNING: Removing unreachable block (ram,0x00010bd85248) */
/* WARNING: Removing unreachable block (ram,0x00010bd852cc) */
/* WARNING: Removing unreachable block (ram,0x00010bd850f4) */

void FUN_10bd84db4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  func_0x00010bf52a60(param_2,param_2,&uStack_130,auStack_f0,0x10);
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
        func_0x00010bfac760();
        if ((uint)param_3 <= uVar9) {
          if ((uint)((ulong)param_3 >> 0x20) <= uVar9) goto LAB_10bd85164;
          lVar1 = param_1;
          func_0x00010bfc5480();
          uVar2 = uVar10;
          func_0x00010c07c3e0();
          if ((uVar2 & 1) == 0) {
            func_0x00010c23cfc0();
LAB_10bd84f00:
            func_0x00010c25d9e0();
            func_0x00010bf64880();
            lVar11 = 1;
          }
          else {
            lVar11 = lVar1;
            func_0x00010bf529e0();
            func_0x00010c23cfc0();
            if (lVar11 == 1) goto LAB_10bd84f00;
            func_0x00010bf06ba0(param_4);
            func_0x00010bf64880();
            if (lVar11 == 0) goto LAB_10bd85134;
          }
          lVar12 = 0;
          do {
            lVar3 = lVar1;
            if ((int)uVar2 != 0) {
              func_0x00010c0dfd20();
            }
            func_0x00010bf06ba0(param_4);
            switch(uVar10 & 0xffffffff) {
            case 0:
              func_0x00010bf1f3c0();
              ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
              if ((int)lVar3 == 0) {
                ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
              }
              goto code_r0x00010bf070e0;
            case 1:
            case 0xb:
              func_0x00010c282760();
              break;
            case 2:
              func_0x00010c282760();
              break;
            case 3:
              func_0x00010bfb2c80(lVar3);
              break;
            case 4:
            case 0xc:
              func_0x00010c282800();
              break;
            case 5:
            case 8:
            case 10:
              func_0x00010c0b4ca0();
              break;
            case 6:
              func_0x00010bf885a0(lVar3);
              break;
            case 7:
            case 9:
            case 0x11:
              func_0x00010c067ec0();
              break;
            case 0xd:
              lVar5 = param_4;
              FUN_10bd848cc(lVar3,param_4);
              goto LAB_10bd85114;
            case 0xe:
              goto SUB_10bd851a0;
            case 0xf:
            case 0x10:
              func_0x00010bf06ba0(param_4);
              uVar4 = param_5;
              func_0x00010c25ce40(param_5);
              lVar5 = param_4;
              FUN_10bd83c98(lVar3,param_4,uVar4);
              func_0x00010bf06ba0(param_4);
            default:
              goto LAB_10bd85114;
            }
            func_0x00010bf06ba0(param_4);
LAB_10bd85114:
            func_0x00010bf06ba0(param_4);
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
        }
LAB_10bd85134:
        lVar8 = lVar8 + 1;
      } while (lVar8 != lStack_150);
      lStack_150 = param_2;
      func_0x00010bf52a60();
    } while (lStack_150 != 0);
  }
LAB_10bd85164:
  param_4 = lVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
SUB_10bd851a0:
  ppuVar6 = &PTR____CFConstantStringClassReference_110e86758;
code_r0x00010bf070e0:
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_appendString__11259f5e0,ppuVar6);
  return;
}



/* Entry: 10bd85324; end: 10bd8545b;  */

/* WARNING: Possible PIC construction at 0x00010bd85368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd8539c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd8543c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd853a0) */
/* WARNING: Removing unreachable block (ram,0x00010bd85424) */
/* WARNING: Removing unreachable block (ram,0x00010bd853b8) */
/* WARNING: Removing unreachable block (ram,0x00010bd853d8) */
/* WARNING: Removing unreachable block (ram,0x00010bd853c0) */
/* WARNING: Removing unreachable block (ram,0x00010bd853c8) */
/* WARNING: Removing unreachable block (ram,0x00010bd85430) */
/* WARNING: Removing unreachable block (ram,0x00010bd8536c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85440) */

void FUN_10bd85324(long param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) == '\0') {
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__11259f5e0,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10bd8545c; end: 10bd8556f;  */

void FUN_10bd8545c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),3);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),3);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),3);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),3);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),3);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 10bd85570; end: 10bd8572b;  */

/* WARNING: Possible PIC construction at 0x00010bd855b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd855f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd8570c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd856b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd85710) */
/* WARNING: Removing unreachable block (ram,0x00010bd855f8) */
/* WARNING: Removing unreachable block (ram,0x00010bd855b8) */
/* WARNING: Removing unreachable block (ram,0x00010bd855fc) */
/* WARNING: Removing unreachable block (ram,0x00010bd8560c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85644) */
/* WARNING: Removing unreachable block (ram,0x00010bd856a4) */
/* WARNING: Removing unreachable block (ram,0x00010bd8564c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85654) */
/* WARNING: Removing unreachable block (ram,0x00010bd8566c) */
/* WARNING: Removing unreachable block (ram,0x00010bd856ec) */
/* WARNING: Removing unreachable block (ram,0x00010bd85678) */
/* WARNING: Removing unreachable block (ram,0x00010bd85624) */
/* WARNING: Removing unreachable block (ram,0x00010bd85694) */
/* WARNING: Removing unreachable block (ram,0x00010bd8562c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85684) */
/* WARNING: Removing unreachable block (ram,0x00010bd8568c) */
/* WARNING: Removing unreachable block (ram,0x00010bd85634) */
/* WARNING: Removing unreachable block (ram,0x00010bd855d8) */
/* WARNING: Removing unreachable block (ram,0x00010bd856b4) */
/* WARNING: Removing unreachable block (ram,0x00010bd856fc) */
/* WARNING: Removing unreachable block (ram,0x00010bd85700) */

void FUN_10bd85570(long param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) == '\0') {
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__11259f5e0,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10bd8572c; end: 10bd8585b;  */

void FUN_10bd8572c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),3);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),3);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),3);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),3);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),3);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),3);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 10bd8585c; end: 10bd85883; -[GPBTimestamp initWithDate:] */

void FUN_10bd8585c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26f320(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c052390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTimeIntervalSince1970__1125f22e8);
  return;
}



/* Entry: 10bd85884; end: 10bd8592b; -[GPBTimestamp initWithTimeIntervalSince1970:] */

undefined8 * FUN_10bd85884(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270e9f0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _modf(auStack_48);
    func_0x00010c1f90c0(puVar1);
    func_0x00010c1cb180(puVar1);
  }
  return puVar1;
}



/* Entry: 10bd8592c; end: 10bd85953; -[GPBTimestamp date] */

void FUN_10bd8592c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c26f320();
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10bd85954; end: 10bd8597b; -[GPBTimestamp setDate:] */

void FUN_10bd85954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26f320(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c214d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTimeIntervalSince1970__112662d70);
  return;
}



/* Entry: 10bd8597c; end: 10bd859bf; -[GPBTimestamp timeIntervalSince1970] */

double FUN_10bd8597c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c1552c0();
  func_0x00010c0d55a0(param_1);
  return (double)(int)param_1 / 1000000000.0 + (double)lVar1;
}



/* Entry: 10bd859c0; end: 10bd85a2f; -[GPBTimestamp setTimeIntervalSince1970:] */

void FUN_10bd859c0(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auStack_28 [8];
  
  _modf(auStack_28);
  dVar1 = param_1 + 1.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  func_0x00010c1f90c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setNanos__112650688,(int)(dVar1 * 1000000000.0));
  return;
}



/* Entry: 10bd85a30; end: 10bd85abb; -[GPBDuration initWithTimeInterval:] */

undefined8 * FUN_10bd85a30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270e9f8;
  puVar1 = &uStack_40;
  uStack_40 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _modf(param_1,auStack_48);
    func_0x00010c1f90c0(puVar1);
    func_0x00010c1cb180(puVar1);
  }
  return puVar1;
}



/* Entry: 10bd85abc; end: 10bd85abf; -[GPBDuration initWithTimeIntervalSince1970:] */

void FUN_10bd85abc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0522d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTimeInterval__1125f22b8);
  return;
}



/* Entry: 10bd85ac0; end: 10bd85b03; -[GPBDuration timeInterval] */

double FUN_10bd85ac0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c1552c0();
  func_0x00010c0d55a0(param_1);
  return (double)(int)param_1 / 1000000000.0 + (double)lVar1;
}



/* Entry: 10bd85b04; end: 10bd85b57; -[GPBDuration setTimeInterval:] */

void FUN_10bd85b04(double param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  _modf(auStack_28);
  func_0x00010c1f90c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setNanos__112650688,(int)(param_1 * 1000000000.0));
  return;
}



/* Entry: 10bd85b58; end: 10bd85b5b; -[GPBDuration timeIntervalSince1970] */

void FUN_10bd85b58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26f2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_timeInterval_1126796d8);
  return;
}



/* Entry: 10bd85b5c; end: 10bd85b5f; -[GPBDuration setTimeIntervalSince1970:] */

void FUN_10bd85b5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c214d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTimeInterval__112662d68);
  return;
}



/* Entry: 10bd85b60; end: 10bd85b6f; +[GPBAny anyWithMessage:error:] */

void FUN_10bd85b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_anyWithMessage_typeURLPrefix_err_11259ec50,param_3,
             &PTR____CFConstantStringClassReference_11102fff8,param_4);
  return;
}



/* Entry: 10bd85b70; end: 10bd85baf; +[GPBAny anyWithMessage:typeURLPrefix:error:] */

void FUN_10bd85b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_alloc();
  func_0x00010c02b500(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd85bb0; end: 10bd85bbf; -[GPBAny initWithMessage:error:] */

void FUN_10bd85bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithMessage_typeURLPrefix_er_1125e8728,param_3,
             &PTR____CFConstantStringClassReference_11102fff8,param_4);
  return;
}



/* Entry: 10bd85bc0; end: 10bd85c1f; -[GPBAny initWithMessage:typeURLPrefix:error:] */

ulong FUN_10bd85bc0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  
  func_0x00010bfee200();
  if ((param_1 != 0) &&
     (uVar1 = param_1, func_0x00010c0f0a80(param_1,param_2,param_3,param_4,param_5),
     (uVar1 & 1) == 0)) {
    _objc_release(param_1);
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10bd85c20; end: 10bd85c2f; -[GPBAny packWithMessage:error:] */

void FUN_10bd85c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_packWithMessage_typeURLPrefix_er_112619cb8,param_3,
             &PTR____CFConstantStringClassReference_11102fff8,param_4);
  return;
}



/* Entry: 10bd85c30; end: 10bd85d2f; -[GPBAny packWithMessage:typeURLPrefix:error:] */

bool FUN_10bd85c30(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_3;
  func_0x00010bf6e760();
  func_0x00010bfbba80();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    if (param_5 != (undefined8 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_11102ffd8,0xffffffffffffff9c,0);
      *param_5 = puVar1;
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    puVar3 = param_4;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = param_4;
      func_0x00010bfdcf80(param_4,param_2,&PTR____CFConstantStringClassReference_110dacf38);
      if ((int)puVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110db2d78);
      }
      else {
        func_0x00010c25ce40(param_4,param_2,puVar1);
        puVar1 = param_4;
      }
    }
    func_0x00010c21ad40(param_1,param_2,puVar1);
    func_0x00010bf63640(param_3);
    func_0x00010c220160(param_1,param_2,param_3);
  }
  return puVar2 != (undefined *)0x0;
}



/* Entry: 10bd85d30; end: 10bd85d3b; -[GPBAny unpackMessageClass:error:] */

void FUN_10bd85d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_unpackMessageClass_extensionRegi_11267e138,param_3,0,param_4);
  return;
}



/* Entry: 10bd85d3c; end: 10bd85e63; -[GPBAny unpackMessageClass:extensionRegistry:error:] */

long FUN_10bd85d3c(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  lVar1 = param_3;
  func_0x00010bf6e760();
  func_0x00010bfbba80();
  func_0x00010c08fa60();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c27e040();
    uVar3 = uVar2;
    func_0x00010c11f440();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((((uVar3 != 0x7fffffffffffffff) &&
         (uVar4 = uVar2, func_0x00010c08fa60(), puVar5 = PTR__OBJC_CLASS___NSError_1126ae858,
         uVar3 + param_2 != uVar4)) &&
        (func_0x00010c260c00(), puVar5 = PTR__OBJC_CLASS___NSError_1126ae858, uVar2 != 0)) &&
       (func_0x00010c071ae0(), puVar5 = PTR__OBJC_CLASS___NSError_1126ae858, (uVar2 & 1) != 0)) {
      func_0x00010c296d80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f4110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s_parseFromData_extensionRegistry__11261aa58,param_1,param_4,param_5);
      return param_3;
    }
  }
  PTR__OBJC_CLASS___NSError_1126ae858 = puVar5;
  if (param_5 != (undefined8 *)0x0) {
    func_0x00010bf99240();
    *param_5 = puVar5;
  }
  return 0;
}



/* Entry: 10bd85e64; end: 10bd85e6f; -[SCAssertTracker lastAssertFuseKey] */

void FUN_10bd85e64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10bd85e70; end: 10bd85e77; -[SCAssertTracker setLastAssertFuseKey:] */

void FUN_10bd85e70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10bd85e78; end: 10bd85e83; -[SCAssertTracker .cxx_destruct] */

void FUN_10bd85e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd85e84; end: 10bd85faf;  */

bool FUN_10bd85e84(ulong param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long alStack_50 [2];
  
  FUN_10bd860c0();
  if ((param_1 & 1) == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_111030038);
    bVar2 = false;
  }
  else {
    if (lRam00000001137fe8b8 != -1) {
      func_0x000107c27d9c(0x1137fe8b8,&PTR___NSConcreteGlobalBlock_110da0248);
    }
    lVar1 = lRam00000001137fe8b0;
    _objc_retain(lRam00000001137fe8b0);
    lVar3 = lVar1;
    func_0x00010c088300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    bVar2 = lVar3 != 0;
    if (lVar3 == 0) {
      _NSLog(&PTR____CFConstantStringClassReference_111030058);
    }
    else {
      _clock_gettime(6,alStack_50);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bd85fdc((double)alStack_50[0]);
      FUN_10bd85fdc((double)alStack_50[0],lVar3);
      _NSLog(&PTR____CFConstantStringClassReference_111030078);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  return bVar2;
}



/* Entry: 10bd85fb0; end: 10bd85fdb;  */

void FUN_10bd85fb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e3250;
  _objc_alloc_init();
  uVar1 = puRam00000001137fe8b0;
  puRam00000001137fe8b0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd85fdc; end: 10bd8609b;  */

void FUN_10bd85fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_retain();
  func_0x00010c24d8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_111030098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c191020(param_1,puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bd8609c; end: 10bd860bf;  */

undefined8 FUN_10bd8609c(void)

{
  return 0x11381b4fa;
}



/* Entry: 10bd860c0; end: 10bd86157;  */

undefined8 *
FUN_10bd860c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [32];
  uint uStack_2a0;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2a0 = 0;
  uVar12 = 0xe00000001;
  uStack_38 = 0xe00000001;
  uStack_30 = 1;
  uStack_2c = param_5;
  _getpid();
  uStack_2c8 = 0x288;
  puVar2 = &uStack_38;
  _sysctl(puVar2,4,auStack_2c0,&uStack_2c8,0,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)(ulong)(uStack_2a0 >> 0xb & 1);
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar12 = 0;
    _objc_retain(puVar5);
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar8 = puVar5, puVar4 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        puVar6 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        puVar10 = *(undefined **)((long)puVar11 * 8);
        _objc_retain(puVar10);
        _objc_opt_class(puVar6);
        puVar7 = puVar10;
        _objc_opt_isKindOfClass(puVar10,puVar6);
        puVar6 = puVar10;
        if (((ulong)puVar7 & 1) == 0) {
          puVar6 = (undefined *)0x0;
        }
        _objc_retain(puVar6);
        _objc_release(puVar10);
        if ((puVar6 != (undefined *)0x0) &&
           (puVar7 = puVar10, func_0x00010bef0360(), puVar7 == (undefined *)0x0))
        goto LAB_10bd862fc;
        _objc_release(puVar6);
        puVar11 = puVar11 + 1;
      } while (puVar4 != puVar11);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    puVar11 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar4);
    puVar10 = puVar8;
    if (((ulong)puVar11 & 1) == 0) {
      puVar10 = (undefined *)0x0;
    }
    _objc_retain(puVar10);
LAB_10bd862fc:
    _objc_release(puVar8);
    _objc_release(puVar5);
    func_0x00010c225b20(puVar2);
    _objc_release(puVar10);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___UIWindow_1126c3e70;
  _objc_alloc(PTR__OBJC_CLASS___UIWindow_1126c3e70);
  func_0x00010c013de0(uVar12,param_2,param_3,param_4);
  FUN_10bd86158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10bd86158; end: 10bd86363;  */

void FUN_10bd86158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

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
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_5;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    param_1 = 0;
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar6 = puVar3, puVar2 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar4 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
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
           (puVar5 = puVar8, func_0x00010bef0360(), puVar5 == (undefined *)0x0)) goto LAB_10bd862fc;
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    puVar9 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar2);
    puVar8 = puVar6;
    if (((ulong)puVar9 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
LAB_10bd862fc:
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010c225b20(param_5);
    _objc_release(puVar8);
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  _objc_alloc(PTR__OBJC_CLASS___UIWindow_1126c3e70);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  FUN_10bd86158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd86364; end: 10bd863c7;  */

void FUN_10bd86364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  _objc_alloc(PTR__OBJC_CLASS___UIWindow_1126c3e70);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  FUN_10bd86158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd863c8; end: 10bd86417;  */

void FUN_10bd863c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf20c00();
  FUN_10bd86364();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd86418; end: 10bd8641f;  */

undefined8 FUN_10bd86418(void)

{
  return 0;
}



/* Entry: 10bd86420; end: 10bd86bb3;  */

undefined * FUN_10bd86420(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (param_2 != 0) {
    _objc_retain(param_1);
    uVar11 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (uVar11 != 0) {
      lVar10 = 0;
      do {
        uVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_1);
          }
          uVar7 = *(ulong *)(uVar12 * 8);
          uVar13 = param_2;
          (**(code **)(param_2 + 0x10))(param_2,uVar7,lVar10);
          _objc_retainAutoreleasedReturnValue();
          if (uVar13 != 0) {
            func_0x00010befa120(puVar2);
          }
          lVar10 = lVar10 + 1;
          _objc_release(uVar13);
          uVar12 = uVar12 + 1;
        } while (uVar11 != uVar12);
        uVar11 = param_1;
        func_0x00010bf52a60();
      } while (uVar11 != 0);
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = uVar7;
  _objc_retain();
  _objc_retain(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(param_1);
  uVar11 = param_1;
  func_0x00010bf52a60();
  if (uVar11 != 0) {
    lVar9 = *plStack_250;
    do {
      uVar13 = 0;
      do {
        if (*plStack_250 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar12 = *(ulong *)(lStack_258 + uVar13 * 8);
        uVar4 = uVar7;
        (**(code **)(uVar7 + 0x10))();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar4 != 0) && (puVar5 = puVar3, func_0x00010bf4b900(), ((ulong)puVar5 & 1) == 0)) {
          func_0x00010befa120(puVar2);
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar4);
        uVar13 = uVar13 + 1;
      } while (uVar11 != uVar13);
      uVar11 = param_1;
      puVar8 = &uStack_260;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar12);
  _objc_retain(puVar8);
  uVar7 = param_1;
  func_0x00010bf529e0();
  uVar11 = uVar12;
  func_0x00010bf529e0();
  if (uVar11 <= uVar7) {
    uVar7 = uVar11;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  if ((puVar8 != (undefined8 *)0x0) && (uVar7 != 0)) {
    uVar11 = 0;
    do {
      uVar13 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar12;
      func_0x00010c0dfd40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)puVar8;
      (**(code **)((long)puVar8 + 0x10))(puVar8,uVar13,uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined1 *)0x0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(uVar13);
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  _objc_release(puVar8);
  _objc_release(uVar12);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10bd86bb4; end: 10bd86c67;  */

undefined * FUN_10bd86bb4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_1 == 0x7fffffffffffffff) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if (param_3 != 0) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        lVar1 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,param_1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(lVar1);
        param_1 = param_1 + 1;
      }
    }
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10bd86c68; end: 10bd86de7;  */

undefined * FUN_10bd86c68(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar6 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  puVar6 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar4 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      puVar7 = puVar7 + 1;
    } while (puVar6 != puVar7);
    puVar6 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == param_2) {
    puVar6 = (undefined *)0x1;
  }
  else if (param_2 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_1;
    func_0x00010c071ae0(param_1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar6;
}



/* Entry: 10bd86de8; end: 10bd86f43;  */

long FUN_10bd86de8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == param_2) {
    lVar1 = 1;
  }
  else if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c071ae0(param_1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10bd86f44; end: 10bd87063;  */

double * FUN_10bd86f44(int param_1,undefined8 param_2,double *param_3)

{
  bool bVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  double adStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar2 = param_3;
  _objc_retain(param_3);
  if (param_3 != (double *)0x0) {
    pdVar2 = adStack_68 + 4;
    func_0x00010bfc9760();
    if (param_1 != 0) {
      pdVar2 = adStack_68;
      pdVar4 = param_3;
      func_0x00010bfc9760();
      if ((int)pdVar4 != 0) {
        lVar3 = 0;
        do {
          lVar5 = -(ulong)((long)(*(double *)((long)adStack_68 + lVar3 + 0x20) * 255.0) ==
                          (long)(*(double *)((long)adStack_68 + lVar3) * 255.0));
          lVar6 = -(ulong)((long)(*(double *)((long)adStack_68 + lVar3 + 0x28) * 255.0) ==
                          (long)(*(double *)((long)adStack_68 + lVar3 + 8) * 255.0));
          uVar7 = CONCAT44(CONCAT13(~(byte)((ulong)lVar6 >> 0x18),
                                    CONCAT12(~(byte)((ulong)lVar6 >> 0x10),
                                             CONCAT11(~(byte)((ulong)lVar6 >> 8),~(byte)lVar6))),
                           CONCAT13(~(byte)((ulong)lVar5 >> 0x18),
                                    CONCAT12(~(byte)((ulong)lVar5 >> 0x10),
                                             CONCAT11(~(byte)((ulong)lVar5 >> 8),~(byte)lVar5))));
          uVar8 = NEON_umaxp(uVar7,uVar7,4);
          if ((uVar8 & 1) != 0) break;
          bVar1 = lVar3 != 0x10;
          lVar3 = lVar3 + 0x10;
        } while (bVar1);
        pdVar4 = (double *)(ulong)((byte)((~(byte)lVar5 & 1) + (~(byte)lVar6 & 2)) == '\0');
        goto LAB_10bd8702c;
      }
    }
  }
  pdVar4 = (double *)0x0;
LAB_10bd8702c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pdVar4;
  }
  ___stack_chk_fail();
  if (lRam00000001137fe8d8 != -1) {
    FUN_10bd87174();
  }
  do {
    pdVar4 = param_3;
    (*(code *)pdVar2)(param_3,param_2);
    if (pdVar4 != (double *)0x0) {
      return pdVar4;
    }
    FUN_10bd8718c();
  } while (param_3 != (double *)0x0);
  return (double *)0x0;
}



/* Entry: 10bd87064; end: 10bd870cf;  */

long FUN_10bd87064(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  if (lRam00000001137fe8d8 != -1) {
    FUN_10bd87174();
  }
  do {
    lVar1 = param_1;
    (*param_3)(param_1,param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
    FUN_10bd8718c();
  } while (param_1 != 0);
  return 0;
}



/* Entry: 10bd870d0; end: 10bd870db;  */

void FUN_10bd870d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbda3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_register_func_for_add_image_11034be68)(FUN_10bd870dc);
  return;
}



/* Entry: 10bd870dc; end: 10bd87173;  */

void FUN_10bd870dc(int *param_1)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long lStack_18;
  
  _getsectiondata(param_1,&UNK_10f3b2cbe,&UNK_10e60e0f8,&lStack_18);
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    for (; lStack_18 != 0; lStack_18 = lStack_18 + -4) {
      if ((((*(uint *)((long)piVar3 + (long)*param_1 + 0xc) & 0x38) == 8) &&
          (piVar4 = (int *)((long)piVar3 + (long)*param_1 + 4), iVar2 = *piVar4,
          plVar1 = (long *)((long)iVar2 + (long)piVar4), iVar2 != 0 && plVar1 != (long *)0x0)) &&
         (*plVar1 == 0)) {
        *plVar1 = 0x11340aff0;
      }
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  return;
}



/* Entry: 10bd87174; end: 10bd8718b;  */

void FUN_10bd87174(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  code *pcStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0;
  pcStack_38 = FUN_10bd870d0;
  (*pcRam00000001136b8688)(0x1137fe8d8,&uStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 10bd8718c; end: 10bd8723f;  */

ulong FUN_10bd8718c(ulong *param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  uVar3 = *param_1;
  iVar2 = 0;
  if (uVar3 < 0x800) {
    iVar2 = (int)uVar3;
  }
  puVar4 = param_1;
  if (((iVar2 == 0) || ((iVar2 == 0x305 && (puVar4 = (ulong *)param_1[1], puVar4 != (ulong *)0x0))))
     && (puVar5 = (ulong *)puVar4[1], puVar5 != (ulong *)0x0)) {
    puVar1 = param_1;
    FUN_10bd87240();
    if (puVar5 != puVar1) {
      uVar3 = puVar4[1];
      if (lRam00000001137fe978 != -1) {
        func_0x00010bd88038(uVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bd87200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001137fe970)(uVar3);
      return uVar3;
    }
    uVar3 = *param_1;
  }
  if (uVar3 == 0x203) {
    uVar3 = param_1[2];
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd87240; end: 10bd8726f;  */

undefined8 FUN_10bd87240(void)

{
  if (lRam00000001137fe988 != -1) {
    func_0x00010bd8803c();
  }
  return uRam00000001137fe980;
}



/* Entry: 10bd87270; end: 10bd87767;  */

undefined8 FUN_10bd87270(ulong *param_1,ulong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  int *piVar20;
  ulong *puStack_98;
  byte abStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  if (lRam00000001137fe968 != -1) {
    func_0x00010bd88054();
  }
  puVar9 = param_1;
  FUN_10bd877c8(abStack_80,param_1,param_2);
  if (abStack_80[0] == 1) {
    return uStack_78;
  }
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x1137fe900,0x10);
    if (bVar8) {
      cVar6 = ExclusiveMonitorsStatus();
      lRam00000001137fe900 = lRam00000001137fe900 + 1;
    }
  } while (cVar6 != '\0');
  if (puRam00000001137fe908 == (ulong *)0x0) {
    puStack_98 = (ulong *)0x0;
    uVar15 = 0;
    if (lStack_70 == 0) goto LAB_10bd87334;
LAB_10bd87304:
    uVar14 = *(ulong *)(lStack_70 + 0x18);
    bVar8 = uVar15 <= uVar14;
    uVar13 = uVar15;
    if (uVar14 != uVar15) {
LAB_10bd87340:
      if (!bVar8) {
        do {
          piVar20 = (int *)puStack_98[uVar14 * 2];
          piVar4 = (int *)(puStack_98 + uVar14 * 2)[1];
joined_r0x00010bd8737c:
          if (piVar20 != piVar4) {
            do {
              puVar2 = (uint *)((long)*piVar20 + (long)piVar20);
              uVar5 = *puVar2;
              puVar17 = puRam00000001137fe8f0;
              if (uVar5 == 0) {
                if (param_2 != (ulong *)0x0) goto LAB_10bd8738c;
              }
              else {
                puVar12 = (ulong *)((long)puVar2 + ((long)(int)uVar5 & 0xfffffffffffffffeU));
                if ((uVar5 & 1) != 0) {
                  puVar12 = (ulong *)*puVar12;
                }
                if (puVar12 != param_2) goto LAB_10bd8738c;
              }
              puVar1 = puVar2 + 1;
              uVar5 = puVar2[3] >> 3 & 7;
              puVar12 = param_1;
              if (uVar5 < 2) {
                if (uVar5 == 0) {
                  if (*puVar1 == 0) goto LAB_10bd87494;
                  puVar16 = (ulong *)((long)(int)*puVar1 + (long)puVar1);
                }
                else {
                  if (uVar5 != 1) {
LAB_10bd87764:
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x10bd87768);
                    (*pcVar7)();
                  }
                  puVar16 = *(ulong **)((long)(int)*puVar1 + (long)puVar1);
                }
                if (puVar16 == (ulong *)0x0) goto LAB_10bd87494;
                bVar8 = false;
              }
              else {
                if (uVar5 == 2) {
                  puVar9 = (ulong *)0x0;
                  if (*puVar1 != 0) {
                    puVar9 = (ulong *)((long)(int)*puVar1 + (long)puVar1);
                  }
                  _objc_lookUpClass();
                  if (puVar9 != (ulong *)0x0) {
                    if (lRam00000001137fe978 != -1) {
                      func_0x00010bd88058();
                    }
LAB_10bd87470:
                    (*pcRam00000001137fe970)();
                    bVar8 = puVar9 != (ulong *)0x0;
                    puVar16 = puVar9;
                    goto joined_r0x00010bd8748c;
                  }
                }
                else {
                  if (uVar5 != 3) goto LAB_10bd87764;
                  puVar9 = *(ulong **)((long)(int)*puVar1 + (long)puVar1);
                  if (puVar9 != (ulong *)0x0) {
                    if (lRam00000001137fe978 != -1) {
                      func_0x00010bd8806c();
                    }
                    goto LAB_10bd87470;
                  }
                }
LAB_10bd87494:
                bVar8 = false;
                puVar16 = (ulong *)0x0;
              }
joined_r0x00010bd8748c:
              puVar17 = puRam00000001137fe8f0;
              if (puVar12 == (ulong *)0x0) goto LAB_10bd8738c;
              if (bVar8) {
                if (puVar12 == puVar16) goto LAB_10bd875c8;
LAB_10bd87530:
                uVar13 = *puVar12;
                iVar11 = 0;
                if (uVar13 < 0x800) {
                  iVar11 = (int)uVar13;
                }
                puVar17 = puVar12;
                if (((iVar11 == 0) ||
                    ((iVar11 == 0x305 && (puVar17 = (ulong *)puVar12[1], puVar17 != (ulong *)0x0))))
                   && (puVar19 = (ulong *)puVar17[1], puVar19 != (ulong *)0x0)) {
                  FUN_10bd87240();
                  if (puVar19 == puVar9) {
                    uVar13 = *puVar12;
                    goto LAB_10bd87598;
                  }
                  puVar12 = (ulong *)puVar17[1];
                  if (lRam00000001137fe978 != -1) {
                    func_0x00010bd880a8();
                  }
                  (*pcRam00000001137fe970)();
                  puVar9 = puVar12;
                }
                else {
LAB_10bd87598:
                  puVar17 = puRam00000001137fe8f0;
                  if (uVar13 != 0x203) goto LAB_10bd8738c;
                  puVar12 = (ulong *)puVar12[2];
                }
                goto joined_r0x00010bd8748c;
              }
              if (lRam00000001137fe998 != -1) {
                func_0x00010bd88080();
              }
              puVar9 = puVar12;
              (*pcRam00000001137fe990)();
              if (puVar9 == (ulong *)0x0) {
                if ((*puVar12 == 0x303) && (*(int *)((long)puVar12 + 0xc) == 1)) {
                  if (((((uint)puVar12[1] >> 0x1e & 1) == 0) || (puVar12[2] == 0)) &&
                     (puVar9 = (ulong *)(puVar12 + 2)[(ulong)((uint)puVar12[1] >> 0x1e) & 1],
                     puVar9 != (ulong *)0x0 && ((ulong)puVar9 & 1) == 0)) goto LAB_10bd874dc;
                }
                goto LAB_10bd87530;
              }
LAB_10bd874dc:
              FUN_10bd87c18();
              if (((ulong)puVar9 & 1) == 0) goto LAB_10bd87530;
              puVar16 = (ulong *)0x0;
LAB_10bd875c8:
              puVar12 = param_1;
              if (puVar16 != (ulong *)0x0) {
                puVar12 = puVar16;
              }
              if (((puRam00000001137fe8f0 == (ulong *)0x0) ||
                  (puVar12 != (ulong *)puRam00000001137fe8f0[2])) ||
                 (puVar17 = puRam00000001137fe8f0, param_2 != (ulong *)puRam00000001137fe8f0[3])) {
                puVar9 = (ulong *)0x0;
                puVar18 = (undefined8 *)0x1137fe8e8;
                while( true ) {
                  puVar17 = (ulong *)*puVar18;
                  if (puVar17 == (ulong *)0x0) {
                    if (puVar9 == (ulong *)0x0) {
                      ppuVar10 = &puStack_68;
                      _posix_memalign(ppuVar10,8,0x30);
                      if ((int)ppuVar10 != 0) {
                        _abort();
                        goto LAB_10bd87764;
                      }
                      *puStack_68 = 0;
                      puStack_68[1] = 0;
                      puStack_68[2] = (ulong)puVar12;
                      puStack_68[3] = (ulong)param_2;
                      puStack_68[4] = (ulong)puVar2;
                      puStack_68[5] = 0;
                      puVar9 = puStack_68;
                    }
                    while (puVar17 = (ulong *)*puVar18, puVar17 == (ulong *)0x0) {
                      cVar6 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(puVar18,0x10);
                      if (bVar8) {
                        *puVar18 = puVar9;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      puVar17 = puVar9;
                      if (cVar6 == '\0') goto LAB_10bd8738c;
                    }
                    ClearExclusiveLocal();
                  }
                  bVar8 = (ulong *)puVar17[2] <= puVar12;
                  if ((puVar12 == (ulong *)puVar17[2]) &&
                     (bVar8 = (ulong *)puVar17[3] <= param_2, param_2 == (ulong *)puVar17[3]))
                  break;
                  lVar3 = 0;
                  if (bVar8) {
                    lVar3 = 8;
                  }
                  puVar18 = (undefined8 *)((long)puVar17 + lVar3);
                }
                if (puVar9 != (ulong *)0x0) {
                  _free();
                }
              }
              puRam00000001137fe8f0 = puVar17;
              puRam00000001137fe8f0[4] = (ulong)puVar2;
              piVar20 = piVar20 + 1;
              if (piVar20 == piVar4) break;
            } while( true );
          }
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar15) break;
        } while( true );
      }
      FUN_10bd877c8(abStack_80,param_1,param_2);
      if ((abStack_80[0] & 1) == 0) {
        FUN_10bd87a70(param_1,param_2,uVar15);
        uStack_78 = 0;
      }
      goto LAB_10bd87728;
    }
  }
  else {
    uVar15 = *puRam00000001137fe908;
    puStack_98 = puRam00000001137fe908 + 1;
    if (lStack_70 != 0) goto LAB_10bd87304;
LAB_10bd87334:
    uVar14 = 0;
    bVar8 = uVar15 == 0;
    uVar13 = 0;
    if (uVar15 != 0) goto LAB_10bd87340;
  }
  FUN_10bd87a70(param_1,param_2,uVar13);
  uStack_78 = 0;
LAB_10bd87728:
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x1137fe900,0x10);
    if (bVar8) {
      cVar6 = ExclusiveMonitorsStatus();
      lRam00000001137fe900 = lRam00000001137fe900 + -1;
    }
  } while (cVar6 != '\0');
  return uStack_78;
LAB_10bd8738c:
  puRam00000001137fe8f0 = puVar17;
  piVar20 = piVar20 + 1;
  goto joined_r0x00010bd8737c;
}



/* Entry: 10bd87768; end: 10bd877c7;  */

void FUN_10bd87768(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  _pthread_mutex_init(param_1 + 5,0);
  UNRECOVERED_JUMPTABLE = (code *)0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,&UNK_10f838251);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd877b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(FUN_10bd87e28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbda3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_register_func_for_add_image_11034be68)(FUN_10bd87fec);
  return;
}



/* Entry: 10bd877c8; end: 10bd87a6f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd877c8(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  long *plVar10;
  
  if (lRam00000001137fe968 != -1) {
    func_0x00010bd880bc();
  }
  puVar4 = param_2;
  plVar7 = (long *)0x0;
  do {
    plVar6 = plRam00000001137fe8e8;
    if (((plRam00000001137fe8f0 == (long *)0x0) ||
        (plVar10 = plRam00000001137fe8f0 + 2, puVar4 != (ulong *)*plVar10)) ||
       (param_3 != plRam00000001137fe8f0[3])) {
      for (; plVar14 = plVar7, plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        bVar2 = (ulong *)plVar6[2] <= puVar4;
        if ((puVar4 == (ulong *)plVar6[2]) &&
           (bVar2 = (ulong)plVar6[3] <= param_3, param_3 == plVar6[3])) {
          plVar10 = plVar6 + 2;
          plRam00000001137fe8f0 = plVar6;
          goto LAB_10bd8788c;
        }
        if (bVar2) {
          plVar6 = plVar6 + 1;
        }
      }
    }
    else {
LAB_10bd8788c:
      if (plVar10[2] != 0) {
        plVar10 = plVar10 + 2;
        goto LAB_10bd87a1c;
      }
      plVar14 = plVar10;
      if (puVar4 != param_2) {
        plVar14 = plVar7;
      }
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1137fe900,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          lRam00000001137fe900 = lRam00000001137fe900 + 1;
        }
      } while (cVar1 != '\0');
      puVar11 = puRam00000001137fe908;
      if (puRam00000001137fe908 != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)*puRam00000001137fe908;
      }
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1137fe900,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          lRam00000001137fe900 = lRam00000001137fe900 + -1;
        }
      } while (cVar1 != '\0');
      if ((undefined8 *)plVar10[3] == puVar11) {
        *(bool *)param_1 = puVar4 == param_2;
        param_1[1] = 0;
        param_1[2] = plVar14;
        return;
      }
    }
    if (lRam00000001137fe998 != -1) {
      func_0x00010bd880c0();
    }
    puVar3 = puVar4;
    (*pcRam00000001137fe990)();
    puVar12 = puVar4;
    if (puVar3 != (ulong *)0x0) {
      puVar12 = puVar3;
    }
    plVar7 = plRam00000001137fe8e8;
    if (((plRam00000001137fe8f0 == (long *)0x0) || (puVar12 != (ulong *)plRam00000001137fe8f0[2]))
       || (plVar6 = plRam00000001137fe8f0, param_3 != plRam00000001137fe8f0[3])) {
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        bVar2 = (ulong *)plVar7[2] <= puVar12;
        if ((puVar12 == (ulong *)plVar7[2]) &&
           (bVar2 = (ulong)plVar7[3] <= param_3, plVar6 = plVar7, param_3 == plVar7[3]))
        goto LAB_10bd87958;
        if (bVar2) {
          plVar7 = plVar7 + 1;
        }
      }
    }
    else {
LAB_10bd87958:
      plRam00000001137fe8f0 = plVar6;
      plVar10 = plRam00000001137fe8f0 + 4;
      if (*plVar10 != 0) {
LAB_10bd87a1c:
        lVar9 = *plVar10;
        *(undefined1 *)param_1 = 1;
        param_1[1] = lVar9;
        param_1[2] = 0;
        return;
      }
    }
    uVar8 = *puVar4;
    iVar5 = 0;
    if (uVar8 < 0x800) {
      iVar5 = (int)uVar8;
    }
    puVar12 = puVar4;
    if (((iVar5 == 0) ||
        ((iVar5 == 0x305 && (puVar12 = (ulong *)puVar4[1], puVar12 != (ulong *)0x0)))) &&
       (puVar13 = (ulong *)puVar12[1], puVar13 != (ulong *)0x0)) {
      FUN_10bd87240();
      if (puVar13 == puVar3) {
        uVar8 = *puVar4;
        goto LAB_10bd879c8;
      }
      puVar4 = (ulong *)puVar12[1];
      if (lRam00000001137fe978 != -1) {
        func_0x00010bd880d8();
      }
      (*pcRam00000001137fe970)();
    }
    else {
LAB_10bd879c8:
      if (uVar8 != 0x203) break;
      puVar4 = (ulong *)puVar4[2];
    }
    plVar7 = plVar14;
  } while (puVar4 != (ulong *)0x0);
  if (plVar14 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *(undefined1 *)param_1 = 0;
    param_1[1] = 0;
    param_1[2] = plVar14;
  }
  return;
}



/* Entry: 10bd87a70; end: 10bd87b8b;  */

void FUN_10bd87a70(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_58;
  
  if (((puRam00000001137fe8f0 == (undefined8 *)0x0) ||
      (param_1 != *(ulong *)((long)puRam00000001137fe8f0 + 0x10))) ||
     (lVar6 = (long)puRam00000001137fe8f0, param_2 != *(ulong *)((long)puRam00000001137fe8f0 + 0x18)
     )) {
    puVar4 = (undefined8 *)0x0;
    plVar7 = (long *)0x1137fe8e8;
    while( true ) {
      lVar6 = *plVar7;
      if (lVar6 == 0) {
        if (puVar4 == (undefined8 *)0x0) {
          ppuVar5 = &puStack_58;
          _posix_memalign(ppuVar5,8,0x30);
          if ((int)ppuVar5 != 0) {
            _abort();
            puVar4 = (undefined8 *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,&UNK_10f838203);
            *ppuVar5 = puVar4;
            return;
          }
          *puStack_58 = 0;
          puStack_58[1] = 0;
          puStack_58[2] = param_1;
          puStack_58[3] = param_2;
          puStack_58[4] = 0;
          puStack_58[5] = param_3;
          puVar4 = puStack_58;
        }
        while (lVar6 = *plVar7, lVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = (long)puVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puRam00000001137fe8f0 = puVar4;
            return;
          }
        }
        ClearExclusiveLocal();
      }
      bVar3 = *(ulong *)(lVar6 + 0x10) <= param_1;
      if ((param_1 == *(ulong *)(lVar6 + 0x10)) &&
         (bVar3 = *(ulong *)(lVar6 + 0x18) <= param_2, param_2 == *(ulong *)(lVar6 + 0x18))) break;
      lVar1 = 0;
      if (bVar3) {
        lVar1 = 8;
      }
      plVar7 = (long *)(lVar6 + lVar1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      _free();
    }
  }
  puRam00000001137fe8f0 = (undefined8 *)lVar6;
  *(undefined8 *)((long)puRam00000001137fe8f0 + 0x28) = param_3;
  return;
}



/* Entry: 10bd87b8c; end: 10bd87c17;  */

void FUN_10bd87b8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,&UNK_10f838203);
  *param_1 = uVar1;
  return;
}



/* Entry: 10bd87c18; end: 10bd87d5b;  */

bool FUN_10bd87c18(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar6;
  long lVar5;
  
  if (param_1 == param_2) {
    return true;
  }
  if (param_1 == (uint *)0x0) {
    return false;
  }
  if (param_2 == (uint *)0x0) {
    return false;
  }
  uVar2 = *param_1;
  if ((((uVar2 >> 6 & 1) == 0) && ((*param_2 >> 6 & 1) == 0)) &&
     (uVar1 = uVar2 & 0x1f, uVar1 == (*param_2 & 0x1f))) {
    uVar3 = param_1[1];
    if (uVar3 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(((long)(int)uVar3 & 0xfffffffffffffffeU) + (long)(param_1 + 1));
      if ((uVar3 & 1) != 0) {
        plVar6 = (long *)*plVar6;
      }
    }
    iVar4 = (int)plVar6;
    uVar3 = param_2[1];
    if (uVar3 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(((long)(int)uVar3 & 0xfffffffffffffffeU) + (long)(param_2 + 1));
      if ((uVar3 & 1) != 0) {
        plVar6 = (long *)*plVar6;
      }
    }
    FUN_10bd87c18();
    if ((iVar4 != 0) && (1 < uVar1 - 1)) {
      if (uVar1 == 0) {
        lVar5 = (long)(int)param_1[2] + (long)(param_1 + 2);
        _strcmp(lVar5,(long)(int)param_2[2] + (long)(param_2 + 2));
        iVar4 = (int)lVar5;
LAB_10bd87d08:
        return iVar4 == 0;
      }
      if (((uVar2 & 0xff) >> 4 & 1) != 0) {
        FUN_10bd87d5c(param_1);
        lVar5 = (long)plVar6;
        FUN_10bd87d5c(param_2);
        if (plVar6 == (long *)lVar5) {
          if (plVar6 == (long *)0x0) {
            return true;
          }
          _memcmp(param_1,param_2,plVar6);
          iVar4 = (int)param_1;
          goto LAB_10bd87d08;
        }
      }
    }
  }
  return false;
}



/* Entry: 10bd87d5c; end: 10bd87e27;  */

undefined1  [16] FUN_10bd87d5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = (long)*(int *)(param_1 + 8) + param_1 + 8;
  if (lVar8 == 0) {
    lVar7 = 0;
    bVar4 = *(byte *)(param_1 + 2);
  }
  else {
    lVar7 = lVar8;
    _strlen();
    bVar4 = *(byte *)(param_1 + 2);
  }
  if ((bVar4 >> 2 & 1) != 0) {
    lVar7 = lVar8 + lVar7;
    lVar1 = lVar7 + 1;
    lVar6 = lVar1;
    _strlen();
    lVar3 = lVar7;
    while (lVar6 != 0) {
      cVar5 = *(char *)(lVar3 + 1);
      lVar2 = lVar1 + lVar6;
      lVar1 = lVar8;
      if (cVar5 == 'N') {
        lVar7 = lVar2;
        lVar1 = lVar3 + 2;
      }
      lVar3 = lVar2;
      lVar6 = lVar8;
      if (cVar5 != 'R') {
        lVar3 = lVar7;
        lVar6 = lVar1;
      }
      lVar7 = lVar2;
      if (cVar5 != 'S') {
        lVar7 = lVar3;
        lVar8 = lVar6;
      }
      lVar1 = lVar2 + 1;
      lVar6 = lVar1;
      _strlen();
      lVar3 = lVar2;
    }
    lVar7 = lVar7 - lVar8;
  }
  auVar9._8_8_ = lVar7;
  auVar9._0_8_ = lVar8;
  return auVar9;
}



/* Entry: 10bd87e28; end: 10bd87feb;  */

void FUN_10bd87e28(ulong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x19;
  undefined8 *puVar6;
  ulong *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    _getsectiondata();
    if (uVar5 == 0) {
      return;
    }
    unaff_x21 = *(long *)((long)register0x00000008 + -0x58);
    _pthread_mutex_lock(0x1137fe910);
    unaff_x23 = puRam00000001137fe908;
    if (puRam00000001137fe908 == (ulong *)0x0) {
      unaff_x22 = 0;
    }
    else {
      unaff_x22 = *puRam00000001137fe908;
    }
    uVar4 = uRam00000001137fe8f8;
    puVar3 = puRam00000001137fe908;
    if (unaff_x22 < uRam00000001137fe8f8) goto LAB_10bd87f48;
    unaff_x24 = unaff_x22 * 2;
    if (unaff_x24 < 0x11) {
      unaff_x24 = 0x10;
    }
    puVar3 = (ulong *)((unaff_x24 >> 1) << 5 | 8);
    _malloc();
    unaff_x20 = unaff_x23;
    if (puVar3 != (ulong *)0x0) break;
LAB_10bd87fe8:
    param_1 = 0;
    unaff_x30 = FUN_10bd87fec;
    _abort();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = uVar5;
  }
  *puVar3 = 0;
  uVar4 = unaff_x24;
  if (unaff_x23 == (ulong *)0x0) goto LAB_10bd87f48;
  if (unaff_x22 != 0) {
    _memmove(puVar3 + 1,unaff_x23 + 1,unaff_x22 << 4);
  }
  unaff_x26 = 0x1137fe950;
  *puVar3 = unaff_x22;
  unaff_x25 = 0x1137fe000;
  if (uRam00000001137fe960 <= uRam00000001137fe958) {
    uVar4 = uRam00000001137fe960 << 1;
    bVar2 = uRam00000001137fe960 != 0;
    uRam00000001137fe960 = 8;
    if (bVar2) {
      uRam00000001137fe960 = uVar4;
    }
    _realloc(puRam00000001137fe950,uRam00000001137fe960 << 3);
    unaff_x20 = puVar3;
    if (puRam00000001137fe950 == (undefined8 *)0x0) goto LAB_10bd87fe8;
  }
  puVar6 = puRam00000001137fe950 + uRam00000001137fe958;
  uRam00000001137fe958 = uRam00000001137fe958 + 1;
  *puVar6 = unaff_x23;
  uVar4 = unaff_x24;
LAB_10bd87f48:
  puRam00000001137fe908 = puVar3;
  uRam00000001137fe8f8 = uVar4;
  puVar3 = puRam00000001137fe908;
  puRam00000001137fe908[unaff_x22 * 2 + 1] = uVar5;
  puVar3[unaff_x22 * 2 + 2] = uVar5 + unaff_x21;
  *puVar3 = unaff_x22 + 1;
  if (lRam00000001137fe900 == 0) {
    if (uRam00000001137fe958 != 0) {
      puVar1 = puRam00000001137fe950 + uRam00000001137fe958;
      puVar6 = puRam00000001137fe950;
      do {
        uVar5 = 0xffffffffffffffff;
        do {
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulong *)*puVar6);
        _free();
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    _free(puRam00000001137fe950);
    puRam00000001137fe950 = (undefined8 *)0x0;
    uRam00000001137fe958 = 0;
    uRam00000001137fe960 = 0;
  }
  _pthread_mutex_unlock(0x1137fe910);
  return;
}



/* Entry: 10bd87fec; end: 10bd88057;  */

void FUN_10bd87fec(ulong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    _getsectiondata();
    if (uVar5 == 0) {
      return;
    }
    unaff_x21 = *(long *)((long)register0x00000008 + -0x58);
    _pthread_mutex_lock(0x1137fe910);
    unaff_x23 = puRam00000001137fe908;
    if (puRam00000001137fe908 == (ulong *)0x0) {
      unaff_x22 = 0;
    }
    else {
      unaff_x22 = *puRam00000001137fe908;
    }
    uVar4 = uRam00000001137fe8f8;
    puVar3 = puRam00000001137fe908;
    if (unaff_x22 < uRam00000001137fe8f8) goto LAB_10bd87f48;
    unaff_x24 = unaff_x22 * 2;
    if (unaff_x24 < 0x11) {
      unaff_x24 = 0x10;
    }
    puVar3 = (ulong *)((unaff_x24 >> 1) << 5 | 8);
    _malloc();
    unaff_x20 = unaff_x23;
    if (puVar3 != (ulong *)0x0) break;
LAB_10bd87fe8:
    param_1 = 0;
    unaff_x30 = FUN_10bd87fec;
    _abort();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = uVar5;
  }
  *puVar3 = 0;
  uVar4 = unaff_x24;
  if (unaff_x23 == (ulong *)0x0) goto LAB_10bd87f48;
  if (unaff_x22 != 0) {
    _memmove(puVar3 + 1,unaff_x23 + 1,unaff_x22 << 4);
  }
  unaff_x26 = 0x1137fe950;
  *puVar3 = unaff_x22;
  unaff_x25 = 0x1137fe000;
  if (uRam00000001137fe960 <= uRam00000001137fe958) {
    uVar4 = uRam00000001137fe960 << 1;
    bVar2 = uRam00000001137fe960 != 0;
    uRam00000001137fe960 = 8;
    if (bVar2) {
      uRam00000001137fe960 = uVar4;
    }
    _realloc(puRam00000001137fe950,uRam00000001137fe960 << 3);
    unaff_x20 = puVar3;
    if (puRam00000001137fe950 == (undefined8 *)0x0) goto LAB_10bd87fe8;
  }
  puVar6 = puRam00000001137fe950 + uRam00000001137fe958;
  uRam00000001137fe958 = uRam00000001137fe958 + 1;
  *puVar6 = unaff_x23;
  uVar4 = unaff_x24;
LAB_10bd87f48:
  puRam00000001137fe908 = puVar3;
  uRam00000001137fe8f8 = uVar4;
  puVar3 = puRam00000001137fe908;
  puRam00000001137fe908[unaff_x22 * 2 + 1] = uVar5;
  puVar3[unaff_x22 * 2 + 2] = uVar5 + unaff_x21;
  *puVar3 = unaff_x22 + 1;
  if (lRam00000001137fe900 == 0) {
    if (uRam00000001137fe958 != 0) {
      puVar1 = puRam00000001137fe950 + uRam00000001137fe958;
      puVar6 = puRam00000001137fe950;
      do {
        uVar5 = 0xffffffffffffffff;
        do {
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulong *)*puVar6);
        _free();
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    _free(puRam00000001137fe950);
    puRam00000001137fe950 = (undefined8 *)0x0;
    uRam00000001137fe958 = 0;
    uRam00000001137fe960 = 0;
  }
  _pthread_mutex_unlock(0x1137fe910);
  return;
}



/* Entry: 10bd88058; end: 10bd880bb;  */

void FUN_10bd88058(void)

{
  FUN_10bd87fec();
  return;
}



/* Entry: 10bd880bc; end: 10bd880db;  */

void FUN_10bd880bc(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  code *pcStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0x1137fe8e8;
  pcStack_38 = FUN_10bd87768;
  (*pcRam00000001136b8688)(0x1137fe968,&uStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 10bd880dc; end: 10bd8831f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10bd880dc(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_10bd88160:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x00010bd88c18(param_2);
  }
  else if (uVar12 != 3) {
    FUN_10bd88bd0(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10bd882bc;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10bd882bc:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_10bd882e0;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x00010bd88540(param_2);
LAB_10bd882e0:
    func_0x00010bd889a8(param_2);
    func_0x00010bd88d24(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10bd881e4;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10bd881e4:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_10bd88208;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x00010bd886a0(param_2);
LAB_10bd88208:
    func_0x00010bd88d6c(param_2 + 0x80);
    func_0x00010bd889d4(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_10bd88800(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x00010bd88974();
    return 0;
  }
  goto LAB_10bd88160;
}



/* Entry: 10bd88320; end: 10bd88407;  */

void FUN_10bd88320(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010bd8896c();
  *(code **)(lVar1 + 0x38) = FUN_10bd88408;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10bd880dc(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bd883f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_10bdb43f8(0,&UNK_10f838267);
                    /* WARNING: Could not recover jumptable at 0x00010bd8840c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10bd88408; end: 10bd8840f;  */

void FUN_10bd88408(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bd8840c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10bd88410; end: 10bd8851f;  */

void FUN_10bd88410(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010bd8896c();
  *(code **)(lVar1 + 0x38) = FUN_10bd88520;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10bd880dc(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd88508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10bd88520; end: 10bd8853f;  */

void FUN_10bd88520(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bd8852c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 10bd88540; end: 10bd887ff;  */

/* WARNING: Possible PIC construction at 0x00010bd88654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd88658) */
/* WARNING: Removing unreachable block (ram,0x00010bd88678) */
/* WARNING: Removing unreachable block (ram,0x00010bd88664) */
/* WARNING: Removing unreachable block (ram,0x00010bd8867c) */

void FUN_10bd88540(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_10bd88880(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x00010bd88cf0(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_10bd88cfc(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_10bd88604;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10bd88604:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_10bd88cfc(0x1137fe9b0);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 10bd88800; end: 10bd8887f;  */

void FUN_10bd88800(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe9a8 != -1) {
    FUN_10bd88954();
  }
  if (pcRam00000001137fe9a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd88830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001137fe9a0)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,&UNK_10f838297);
  *param_1 = uVar1;
  return;
}



/* Entry: 10bd88880; end: 10bd88953;  */

/* WARNING: Possible PIC construction at 0x00010bd888d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd888e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd88914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd88918) */
/* WARNING: Removing unreachable block (ram,0x00010bd8891c) */
/* WARNING: Removing unreachable block (ram,0x00010bd88924) */
/* WARNING: Removing unreachable block (ram,0x00010bd8892c) */
/* WARNING: Removing unreachable block (ram,0x00010bd888d4) */
/* WARNING: Removing unreachable block (ram,0x00010bd888e4) */
/* WARNING: Removing unreachable block (ram,0x00010bd8890c) */
/* WARNING: Removing unreachable block (ram,0x00010bd888f8) */
/* WARNING: Removing unreachable block (ram,0x00010bd88910) */

void FUN_10bd88880(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_10bd88cfc(0x1137fe9b0);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x10bd888d4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x1137fe9b0);
  return;
}



/* Entry: 10bd88954; end: 10bd88973;  */

void FUN_10bd88954(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0x1137fe9a0;
  uStack_38 = 0x10bd88850;
  (*pcRam00000001136b8688)(0x1137fe9a8,&uStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 10bd88974; end: 10bd88a83;  */

undefined8 FUN_10bd88974(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 10bd88a84; end: 10bd88abb;  */

void FUN_10bd88a84(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam00000001137fe9c0 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 10bd88abc; end: 10bd88baf;  */

void FUN_10bd88abc(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x1137fe9b8,FUN_10bd88a84,0);
  if ((bRam00000001137fe9c0 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam00000001137fe9d0 != -1) {
      func_0x00010bd88bcc();
    }
    iVar1 = (int)uVar2;
    if ((pcRam00000001137fe9c8 == (code *)0x0) || ((*pcRam00000001137fe9c8)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 10bd88bb0; end: 10bd88bcf;  */

void FUN_10bd88bb0(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0x1137fe9c8;
  uStack_38 = 0x10bd88b80;
  (*pcRam00000001136b8688)(0x1137fe9d0,&uStack_40,&UNK_100029ddc);
  return;
}


