/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ccb984; end: 101ccb9bf;  */

void FUN_101ccb984(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ccb9c0; end: 101ccb9f3;  */

undefined1  [16] FUN_101ccb9c0(void)

{
  return ZEXT816(0x11046adc8);
}



/* Entry: 101ccb9f4; end: 101ccba4b;  */

undefined8 FUN_101ccb9f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101ccba4c; end: 101ccbb33;  */

undefined8 FUN_101ccba4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101cccdd4(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101ccbb34; end: 101ccbb6f; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager initWithExperimentService:] */

undefined8 FUN_101ccbb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_101cccdd4();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101ccbb70; end: 101ccbb73;  */

void FUN_101ccbb70(void)

{
  return;
}



/* Entry: 101ccbb74; end: 101ccbc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ccbb74(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  lVar1 = lRam0000000112e17890;
  if (param_1 != 0) {
    func_0x000107c61174();
    if (lVar1 != -1) {
      func_0x000107c61568(0x112e17890,0x101ccba20);
    }
    cStack_31 = '\0';
    pcStack_50 = &cStack_31;
    uStack_48 = uRam0000000112e17898;
    uStack_40 = uRam0000000112e178a0;
    func_0x000104522a44(FUN_101cccf80,auStack_60,FUN_101ccbb70,0);
    if (cStack_31 == '\x01') {
      lVar1 = *(long *)(unaff_x20 + _DAT_112e178b0);
      func_0x000107c5c734();
      func_0x000107c61180();
    }
    else {
      lVar1 = *(long *)(unaff_x20 + _DAT_112e178a8);
      func_0x000107c5c734();
      func_0x000107c61180();
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_1);
    return lVar2;
  }
  return 0;
}



/* Entry: 101ccbc80; end: 101ccbdcf; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager isEnabledForChatIdentifier:] */

uint FUN_101ccbc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ccbb74(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101ccbdd0; end: 101ccbe2f; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager shouldGenerateBotMetadataForChatIdentifier:] */

uint FUN_101ccbdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101ccbce0(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101ccbe30; end: 101ccbe7f; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager hasCachedMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101ccbe30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e178b8;
  func_0x000107c61428(param_1 + _DAT_112e178b8,auStack_38,0,0);
  return *(long *)(*(long *)(param_1 + lVar1) + 0x10) != 0;
}



/* Entry: 101ccbe80; end: 101ccc023;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ccbe80(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uStack_80;
  ulong auStack_78 [3];
  
  lVar4 = 0;
  func_0x00010439332c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar6 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = _DAT_112e178b8;
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112e178b8,auStack_78,0,0);
  if (*(long *)(*(long *)(unaff_x20 + lVar3) + 0x10) == 0) {
    return 0;
  }
  func_0x000107c5eec4(lVar9);
  if (param_2 != 0) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar7 = 2;
      goto LAB_101ccbf88;
    }
  }
  uVar7 = 1;
LAB_101ccbf88:
  (**(code **)(lVar10 + 0x10))(lVar8,lVar9,lVar5);
  *(undefined8 *)(lVar8 + *(int *)(lVar4 + 0x14)) = uVar7;
  puVar1 = (ulong *)(lVar8 + *(int *)(lVar4 + 0x18));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000101cccfc8(lVar8,lVar6);
  func_0x000104394734(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000104394208(lVar6);
  func_0x000101ccd00c(lVar8);
  (**(code **)(lVar10 + 8))(lVar9,lVar5);
  return lVar6;
}



/* Entry: 101ccc024; end: 101ccc09b; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager generateBotGroupMetadataWithTextContent:] */

void FUN_101ccc024(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_101ccbe80(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ccc09c; end: 101ccc1fb; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager addItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccc09c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  
  lVar6 = _DAT_112e178b8;
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130735e8);
  uVar4 = ((undefined8 *)(param_3 + _DAT_1130735e8))[1];
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130735f0);
  uVar5 = ((undefined8 *)(param_3 + _DAT_1130735f0))[1];
  func_0x000107c61428(param_1 + _DAT_112e178b8,auStack_78,0x21,0);
  uVar10 = *(ulong *)(param_1 + lVar6);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(param_3);
  lVar7 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar4);
  uVar8 = uVar10;
  func_0x000107c61558();
  *(ulong *)(param_1 + lVar6) = uVar10;
  uVar9 = uVar10;
  if ((uVar8 & 1) == 0) {
    uVar9 = 0;
    FUN_101ccc9d4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10,PTR__swift_bridgeObjectRelease_11034f258);
    *(ulong *)(param_1 + lVar6) = uVar9;
  }
  uVar8 = *(ulong *)(uVar9 + 0x10);
  uVar10 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_101ccc9d4(uVar10,uVar8 + 1,1,uVar9,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
  lVar1 = uVar10 + uVar8 * 0x20;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(undefined8 *)(lVar1 + 0x38) = uVar5;
  *(ulong *)(param_1 + lVar6) = uVar10;
  func_0x000107c614a8(auStack_78);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 101ccc1fc; end: 101ccc2d7; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager removeItem:] */

/* WARNING: Removing unreachable block (ram,0x000101ccc2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccc1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112e178b8;
  func_0x000107c61428(param_1 + _DAT_112e178b8,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  lVar3 = param_1;
  func_0x000107c61174(param_1);
  lVar4 = param_1 + lVar1;
  FUN_101ccd27c(lVar4,param_3);
  func_0x000107c61170(param_3);
  if (*(long *)(*(long *)(param_1 + lVar1) + 0x10) < lVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ccc2cc);
    (*pcVar2)();
  }
  func_0x000101ccd104(lVar4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101ccc2d8; end: 101ccc4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccc2d8(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *apuStack_78 [3];
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101ccc994(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ccc4f8);
      (*pcVar6)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      plVar9 = (long *)(param_1 + 0x20);
      puVar12 = apuStack_78[0];
      do {
        puVar1 = (undefined8 *)(*plVar9 + _DAT_1130735e8);
        uVar8 = *puVar1;
        uVar3 = puVar1[1];
        puVar1 = (undefined8 *)(*plVar9 + _DAT_1130735f0);
        uVar2 = *puVar1;
        uVar4 = puVar1[1];
        uVar11 = *(ulong *)(puVar12 + 0x10);
        uVar7 = *(ulong *)(puVar12 + 0x18);
        apuStack_78[0] = puVar12;
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar4);
        if (uVar7 >> 1 <= uVar11) {
          func_0x000101ccc994(1 < uVar7,uVar11 + 1,1);
          puVar12 = apuStack_78[0];
        }
        *(ulong *)(puVar12 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puVar12 + uVar11 * 0x20 + 0x20) = uVar8;
        *(undefined8 *)(puVar12 + uVar11 * 0x20 + 0x28) = uVar3;
        *(undefined8 *)(puVar12 + uVar11 * 0x20 + 0x30) = uVar2;
        *(undefined8 *)(puVar12 + uVar11 * 0x20 + 0x38) = uVar4;
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
    else {
      uVar11 = 0;
      do {
        puVar12 = apuStack_78[0];
        uVar7 = uVar11;
        FUN_101cccc0c(uVar11,param_1);
        uVar8 = *(undefined8 *)(uVar7 + _DAT_1130735e8);
        uVar3 = ((undefined8 *)(uVar7 + _DAT_1130735e8))[1];
        uVar2 = *(undefined8 *)(uVar7 + _DAT_1130735f0);
        uVar4 = ((undefined8 *)(uVar7 + _DAT_1130735f0))[1];
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar3);
        func_0x000107c615e8(uVar7);
        uVar7 = *(ulong *)(puVar12 + 0x10);
        apuStack_78[0] = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar7) {
          func_0x000101ccc994(1 < *(ulong *)(puVar12 + 0x18),uVar7 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar7 + 1;
        *(undefined8 *)(apuStack_78[0] + uVar7 * 0x20 + 0x20) = uVar8;
        *(undefined8 *)(apuStack_78[0] + uVar7 * 0x20 + 0x28) = uVar3;
        *(undefined8 *)(apuStack_78[0] + uVar7 * 0x20 + 0x30) = uVar2;
        *(undefined8 *)(apuStack_78[0] + uVar7 * 0x20 + 0x38) = uVar4;
        puVar12 = apuStack_78[0];
      } while (uVar10 != uVar11);
    }
  }
  lVar5 = _DAT_112e178b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e178b8,apuStack_78,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined **)(unaff_x20 + lVar5) = puVar12;
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 101ccc4f8; end: 101ccc54f; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager updateSelection:] */

void FUN_101ccc4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000104393e34(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_101ccc2d8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101ccc550; end: 101ccc697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ccc550(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_112e178b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e178b8,auStack_78,0,0);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = *(long *)(unaff_x20 + lVar9);
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 != 0) {
    func_0x000107c61434(lVar8);
    func_0x000101ccc9b8(0,lVar9,0);
    uVar6 = 0;
    func_0x000104393e34(0);
    puVar10 = (undefined8 *)(lVar8 + 0x38);
    do {
      uVar7 = puVar10[-3];
      uVar3 = puVar10[-2];
      uVar1 = puVar10[-1];
      uVar4 = *puVar10;
      func_0x000107c610f8(uVar6);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar3);
      func_0x000104393e58(uVar7,uVar3,uVar1,uVar4);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x000101ccc9b8(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puVar10 + 4;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 8 + 0x20) = uVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    func_0x000107c6142c(lVar8);
  }
  return puVar5;
}



/* Entry: 101ccc698; end: 101ccc6eb; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager getCurrentItems] */

void FUN_101ccc698(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ccc550();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000104393e34(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ccc6ec; end: 101ccc7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ccc6ec(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [24];
  
  lVar7 = _DAT_112e178b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e178b8,auStack_78,0,0);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x20 + lVar7);
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 != 0) {
    func_0x000107c61434(lVar6);
    func_0x000100403514(0,lVar7,0);
    puVar8 = (undefined8 *)(lVar6 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        func_0x000100403514(1 < uVar4,uVar2 + 1,1);
      }
      puVar8 = puVar8 + 4;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(lVar6);
  }
  return puVar5;
}



/* Entry: 101ccc7ec; end: 101ccc83b; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager allItemIds] */

void FUN_101ccc7ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ccc6ec();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101ccc83c; end: 101ccc88f; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager clear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccc83c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e178b8;
  func_0x000107c61428(param_1 + _DAT_112e178b8,auStack_38,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 101ccc890; end: 101ccc8ef; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager init] */

void FUN_101ccc890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMediaPreviewServiceProvider.ChatMediaPreviewDataManager",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ccc8bc);
  (*pcVar1)();
}



/* Entry: 101ccc8f0; end: 101ccc937; -[_TtC31ChatMediaPreviewServiceProvider27ChatMediaPreviewDataManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ccc91c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ccc920) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccc8f0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e178b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e178b0));
  return;
}



/* Entry: 101ccc938; end: 101ccc9d3;  */

void FUN_101ccc938(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000104393e34();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e178e8;
  plVar5 = (long *)&UNK_10d9f6018;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101ccc9d4; end: 101cccc0b;  */

undefined *
FUN_101ccc9d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101cccae8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e178f0;
    func_0x0001000285a8(0x112e178f0,&UNK_10d9f6028);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1107629a8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101cccc0c; end: 101cccda7;  */

ulong FUN_101cccc0c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ccccdc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cccce0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104393e34(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000104393e34(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010f00a860);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101cccda8);
  (*pcVar2)();
}



/* Entry: 101cccda8; end: 101cccdd3;  */

void FUN_101cccda8(long param_1)

{
  FUN_101ccc9d4(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_bridgeObjectRelease_11034f258
               );
  return;
}



/* Entry: 101cccdd4; end: 101cccf7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cccdd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112e178b8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_11046aee0;
  func_0x000107c613fc(&UNK_11046aee0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_101ccd460;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100619acc;
  puStack_78 = &UNK_11046aef8;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + _DAT_112e178b0) = puVar3;
  puVar3 = &UNK_11046af30;
  func_0x000107c613fc(&UNK_11046af30,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_70 = (code *)0x101ccd484;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100619acc;
  puStack_78 = &UNK_11046af48;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + _DAT_112e178a8) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cccf80; end: 101cccf83;  */

void FUN_101cccf80(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  long unaff_x20;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x10);
  if (param_1 == *(long *)(unaff_x20 + 0x18) && param_2 == *(long *)(unaff_x20 + 0x20)) {
    bVar2 = 1;
  }
  else {
    func_0x000107c605b8();
    bVar2 = (byte)param_1;
  }
  *pbVar1 = bVar2 & 1;
  return;
}



/* Entry: 101cccf84; end: 101ccd047;  */

void FUN_101cccf84(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  long unaff_x20;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x10);
  if (param_1 == *(long *)(unaff_x20 + 0x18) && param_2 == *(long *)(unaff_x20 + 0x20)) {
    bVar2 = 1;
  }
  else {
    func_0x000107c605b8();
    bVar2 = (byte)param_1;
  }
  *pbVar1 = bVar2 & 1;
  return;
}



/* Entry: 101ccd048; end: 101ccd1c7;  */

void FUN_101ccd048(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101ccd0f4);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 0x20;
  func_0x000107c61408(lVar1,lVar4,&UNK_1107629a8);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101ccd0f8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ccd0fc);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x20;
    uVar3 = lVar7 + 0x20 + param_2 * 0x20;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 0x20 <= uVar2) {
      func_0x000107c610b8(uVar2,uVar3,lVar4 * 0x20);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ccd100);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101ccd104);
  (*pcVar6)();
}



/* Entry: 101ccd1c8; end: 101ccd1e7;  */

void FUN_101ccd1c8(void)

{
  func_0x000107c61168(&PTR_PTR_112800cc8);
  return;
}



/* Entry: 101ccd1e8; end: 101ccd27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101ccd1e8(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined1 auVar7 [16];
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar4 = 0;
    puVar1 = (ulong *)(param_2 + _DAT_1130735e8);
    puVar6 = (ulong *)(param_1 + 0x28);
    do {
      uVar2 = puVar6[-1];
      if ((uVar2 == *puVar1 && *puVar6 == puVar1[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar3 = 0;
        goto LAB_101ccd260;
      }
      puVar6 = puVar6 + 4;
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  lVar4 = 0;
  uVar3 = 1;
LAB_101ccd260:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* Entry: 101ccd27c; end: 101ccd45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101ccd27c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long unaff_x21;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  
  uVar21 = *param_1;
  uVar17 = uVar21;
  lVar16 = param_2;
  FUN_101ccd1e8();
  if (unaff_x21 == 0) {
    if (((uint)lVar16 & 0xff) == 1) {
      uVar17 = *(ulong *)(uVar21 + 0x10);
    }
    else {
      uVar22 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101ccd460);
        (*pcVar12)();
      }
      uVar18 = *(ulong *)(uVar21 + 0x10);
      if (uVar22 != uVar18) {
        puVar1 = (ulong *)(param_2 + _DAT_1130735e8);
        lVar16 = uVar17 * 0x20 + 0x58;
        do {
          if (uVar18 <= uVar22) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x101ccd454);
            (*pcVar12)();
          }
          uVar4 = *(ulong *)(uVar21 + lVar16 + -0x18);
          uVar8 = *(ulong *)(uVar21 + lVar16 + -0x10);
          uVar5 = *puVar1;
          uVar9 = puVar1[1];
          if ((uVar4 != uVar5 || uVar8 != uVar9) &&
             (uVar14 = uVar4, func_0x000107c605b8(uVar4,uVar8,uVar5,uVar9,0), (uVar14 & 1) == 0)) {
            if (uVar22 != uVar17) {
              if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x101ccd458);
                (*pcVar12)();
              }
              puVar2 = (undefined8 *)(uVar21 + 0x20 + uVar17 * 0x20);
              uVar6 = *puVar2;
              uVar10 = puVar2[1];
              uVar7 = puVar2[2];
              uVar11 = puVar2[3];
              uVar13 = ((undefined8 *)(uVar21 + lVar16))[-1];
              uVar19 = *(undefined8 *)(uVar21 + lVar16);
              func_0x000107c61434(uVar19);
              func_0x000107c61434(uVar10);
              func_0x000107c61434(uVar11);
              func_0x000107c61434(uVar8);
              uVar18 = uVar21;
              func_0x000107c61558();
              if ((uVar18 & 1) == 0) {
                FUN_101cccda8();
              }
              lVar3 = uVar21 + uVar17 * 0x20;
              uVar15 = *(undefined8 *)(lVar3 + 0x28);
              uVar20 = *(undefined8 *)(lVar3 + 0x38);
              *(ulong *)(lVar3 + 0x20) = uVar4;
              *(ulong *)(lVar3 + 0x28) = uVar8;
              *(undefined8 *)(lVar3 + 0x30) = uVar13;
              *(undefined8 *)(lVar3 + 0x38) = uVar19;
              func_0x000107c6142c(uVar15);
              func_0x000107c6142c(uVar20);
              if (*(ulong *)(uVar21 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x101ccd45c);
                (*pcVar12)();
              }
              puVar2 = (undefined8 *)(uVar21 + lVar16);
              uVar13 = puVar2[-2];
              uVar19 = *puVar2;
              puVar2[-3] = uVar6;
              puVar2[-2] = uVar10;
              puVar2[-1] = uVar7;
              *puVar2 = uVar11;
              func_0x000107c6142c(uVar13);
              func_0x000107c6142c(uVar19);
              *param_1 = uVar21;
            }
            uVar17 = uVar17 + 1;
          }
          uVar22 = uVar22 + 1;
          uVar18 = *(ulong *)(uVar21 + 0x10);
          lVar16 = lVar16 + 0x20;
        } while (uVar22 != uVar18);
      }
    }
  }
  return uVar17;
}



/* Entry: 101ccd460; end: 101ccd497;  */

void FUN_101ccd460(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c42578();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010bff91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101ccd498; end: 101ccd627;  */

long FUN_101ccd498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11046af80;
  func_0x000107c613fc(&UNK_11046af80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uVar2 = 0x112e178f8;
  func_0x0001000285a8(0x112e178f8,&UNK_10d9f6030);
  func_0x000107c613fc();
  pcVar3 = FUN_101ccd628;
  func_0x0001000bdd8c(FUN_101ccd628,puVar1,uVar2);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 101ccd628; end: 101ccd62f;  */

void FUN_101ccd628(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  FUN_101ccd1c8(0);
  func_0x000107c610f8();
  uVar1 = uVar2;
  FUN_101cccdd4();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ccd630; end: 101ccd6bb;  */

long FUN_101ccd630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11046afd0;
  func_0x000107c613fc(&UNK_11046afd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112e178f8,&UNK_10d9f6030);
  func_0x000107c613fc();
  func_0x000107c61174(param_4);
  uVar2 = 0x101ccd870;
  func_0x0001000bdd8c(0x101ccd870,puVar1);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return param_1;
}



/* Entry: 101ccd6bc; end: 101ccd74f;  */

void FUN_101ccd6bc(undefined8 param_1)

{
  func_0x0001003a5b88();
  func_0x0001002841e0(0);
  func_0x000107c610f8();
  func_0x0001043937a0(param_1);
  return;
}



/* Entry: 101ccd750; end: 101ccd77b;  */

void FUN_101ccd750(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMediaPreviewServiceProvider.ChatMediaPreviewServiceProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ccd77c);
  (*pcVar1)();
}



/* Entry: 101ccd77c; end: 101ccd783;  */

void FUN_101ccd77c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ccd784; end: 101ccd823;  */

void FUN_101ccd784(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ccd824; end: 101ccd86b;  */

void FUN_101ccd824(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001003a5b88();
  uVar1 = 0;
  func_0x0001002841e0(0);
  func_0x000107c610f8();
  func_0x0001043937a0(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 101ccd86c; end: 101ccd873;  */

void FUN_101ccd86c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  FUN_101ccd1c8(0);
  func_0x000107c610f8();
  uVar1 = uVar2;
  FUN_101cccdd4();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ccd874; end: 101ccd8a3;  */

void FUN_101ccd874(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101ccd8a4; end: 101ccd90b;  */

void FUN_101ccd8a4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126d2e60;
  func_0x000107c61168(PTR_PTR_1126d2e60);
  if (0.5 <= param_1) {
    func_0x000107c5ba38();
  }
  else {
    func_0x000107c427dc();
  }
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101ccd90c; end: 101ccd943; -[_TtC32SCChatPeekServicesImplementation17ChatPeekProcessor didPeekWithPercentage:] */

void FUN_101ccd90c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  FUN_101ccd8a4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101ccd944; end: 101ccd9af; -[_TtC32SCChatPeekServicesImplementation17ChatPeekProcessor didEndPeek] */

void FUN_101ccd944(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126d2e60;
  func_0x000107c61168(PTR_PTR_1126d2e60);
  func_0x000107c6157c(param_1);
  func_0x000107c427dc(puVar1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101ccd9b0; end: 101ccda13;  */

void FUN_101ccd9b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ccda14; end: 101ccdbef;  */

undefined * FUN_101ccda14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_11046b090;
  func_0x000107c613fc(&UNK_11046b090,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_11046b0b8;
  func_0x000107c613fc(&UNK_11046b0b8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_101ccdcb0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x101ccde04;
  puStack_68 = &UNK_11046b0d0;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_11046b108;
  func_0x000107c613fc(&UNK_11046b108,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  pcStack_60 = FUN_101ccdd18;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  uStack_70 = 0x101ccde00;
  puStack_68 = &UNK_11046b120;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar4 = PTR_PTR_1126a8fe8;
  func_0x000107c610f8(PTR_PTR_1126a8fe8);
  func_0x000107c47dd8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 101ccdbf0; end: 101ccdcaf;  */

undefined8 FUN_101ccdbf0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c421ac(param_2);
    func_0x000107c61180();
    pcVar1 = "makeObservable(subject:)";
    func_0x0001000c10c0("makeObservable(subject:)");
    func_0x000107c61180();
    uVar2 = param_2;
    func_0x000107c413c0(0x3fd0000000000000,param_2);
    func_0x000107c61180();
    func_0x000107c61574(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return uVar2;
}



/* Entry: 101ccdcb0; end: 101ccdcd3;  */

undefined8 FUN_101ccdcb0(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c421ac(uVar2);
    func_0x000107c61180();
    pcVar3 = "makeObservable(subject:)";
    func_0x0001000c10c0("makeObservable(subject:)");
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c413c0(0x3fd0000000000000,uVar2);
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(pcVar3);
  }
  return uVar4;
}



/* Entry: 101ccdcd4; end: 101ccdd17;  */

long FUN_101ccdcd4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000101ccd9d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  return lVar1;
}



/* Entry: 101ccdd18; end: 101ccdd1f;  */

long FUN_101ccdd18(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000101ccd9d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c61174(uVar2);
  return lVar1;
}



/* Entry: 101ccdd20; end: 101ccdd57;  */

void FUN_101ccdd20(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ccdd58; end: 101ccdd67;  */

void FUN_101ccdd58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ccdd68; end: 101ccddd3;  */

void FUN_101ccdd68(undefined8 param_1)

{
  if (lRam0000000112e17a98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e683df0);
  return;
}



/* Entry: 101ccddd4; end: 101ccddf7;  */

void FUN_101ccddd4(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ccda14();
  *param_1 = param_2;
  return;
}



/* Entry: 101ccddf8; end: 101ccde07;  */

void FUN_101ccddf8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101ccde08; end: 101ccde53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccde08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e17b38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ccde54; end: 101ccdeab; -[_TtC29SCSendObservabilityLoggerImpl25SCSendObservabilityLogger initWithUserTrackedLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccde54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e17b38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101ccdeac; end: 101cce0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_101ccdeac(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  lVar4 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_1;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c31250();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar9 = 0;
    lVar7 = 0;
    lVar6 = lVar4;
  }
  else {
    lVar9 = param_2;
    func_0x000107c5faec();
    lVar6 = lVar4;
    func_0x000107c61170(param_2);
    lVar7 = lVar4;
  }
  func_0x000107c5eec4(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar2 = PTR_PTR_1126a8ff0;
  func_0x000107c610f8(PTR_PTR_1126a8ff0);
  func_0x000107c453e4();
  lVar4 = param_2;
  func_0x000107c5fadc(param_2,lVar6);
  func_0x000107c5a2dc(puVar2);
  func_0x000107c61170(lVar4);
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c58f1c(puVar2);
    func_0x000107c61170(param_5);
  }
  if (lVar7 != 0) {
    func_0x000107c61434(lVar7);
    func_0x000107c5fadc(lVar9,lVar7);
    func_0x000107c6142c(lVar7);
    func_0x000107c56498(puVar2);
    func_0x000107c61170(lVar9);
  }
  if (param_4 != 0) {
    uVar3 = uStack_78;
    func_0x000107c5fadc(uStack_78,param_4);
    func_0x000107c56420(puVar2);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c54920(puVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112e17b38);
  if (lVar4 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar5 = puVar2;
      func_0x000107c61174(puVar2);
      func_0x000107c4bfb0(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c61170(puVar2);
  func_0x000107c6142c(lVar7);
  auVar10._8_8_ = lVar6;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Entry: 101cce0cc; end: 101cce1af; -[_TtC29SCSendObservabilityLoggerImpl25SCSendObservabilityLogger logSendTappedWithFeatureSource:mediaType:mediaId:sendToSessionId:] */

void FUN_101cce0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_1);
  FUN_101ccdeac(param_3,param_4,param_5,uVar1,param_6,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101cce1b0; end: 101cce247;  */

/* WARNING: Possible PIC construction at 0x000101cce1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cce200) */
/* WARNING: Removing unreachable block (ram,0x000101cce210) */
/* WARNING: Removing unreachable block (ram,0x000101cce220) */
/* WARNING: Removing unreachable block (ram,0x000101cce234) */

void FUN_101cce1b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8ff8;
  func_0x000107c610f8(PTR_PTR_1126a8ff8);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53464(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cce248; end: 101cce2a3; -[_TtC29SCSendObservabilityLoggerImpl25SCSendObservabilityLogger logSendPersistedWithClientMessageId:] */

void FUN_101cce248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cce1b0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101cce2a4; end: 101cce303; -[_TtC29SCSendObservabilityLoggerImpl25SCSendObservabilityLogger init] */

void FUN_101cce2a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendObservabilityLoggerImpl.SCSendObservabilityLogger",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cce2d0);
  (*pcVar1)();
}



/* Entry: 101cce304; end: 101cce313; -[_TtC29SCSendObservabilityLoggerImpl25SCSendObservabilityLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cce304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e17b38));
  return;
}



/* Entry: 101cce314; end: 101cce333;  */

void FUN_101cce314(void)

{
  func_0x000107c61168(&PTR_PTR_112800de8);
  return;
}



/* Entry: 101cce334; end: 101cce367;  */

void FUN_101cce334(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101cce368; end: 101cce3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cce368(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_2 + _DAT_113083868);
  lVar2 = 0;
  FUN_101cce314();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e17b38) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101cce3e4; end: 101cce3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cce3e4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  lVar2 = 0;
  FUN_101cce314();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e17b38) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101cce3f4; end: 101cce417;  */

void FUN_101cce3f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cce418; end: 101cce4d7;  */

void FUN_101cce418(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11046b218;
  func_0x000107c613fc(&UNK_11046b218,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112e17b68,&UNK_10d9f6120);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_101cce4d8;
  func_0x0001000bdd8c(FUN_101cce4d8,puVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  uVar4 = 0;
  func_0x0001002a3734(0);
  func_0x000107c610f8();
  func_0x0001004632b8(pcVar3,uVar4);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101cce4d8; end: 101cce4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cce4d8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  lVar2 = 0;
  FUN_101cce314();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e17b38) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101cce4dc; end: 101cce533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cce4dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  func_0x00010099732c(param_2 + _DAT_112e18038,unaff_x20 + 0x10);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 101cce534; end: 101cce57b;  */

undefined8 FUN_101cce534(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return 0;
}



/* Entry: 101cce57c; end: 101cce59f;  */

void FUN_101cce57c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cce5a0; end: 101cce5a3;  */

void FUN_101cce5a0(void)

{
  return;
}



/* Entry: 101cce5a4; end: 101cce5ef;  */

undefined8 FUN_101cce5a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  lVar2 = *(long *)(lVar3 + 0x30);
  func_0x0001000a8868(lVar3 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return 0;
}



/* Entry: 101cce5f0; end: 101cce997;  */

/* WARNING: Possible PIC construction at 0x000101cce644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cce974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cce914) */
/* WARNING: Removing unreachable block (ram,0x000101cce86c) */
/* WARNING: Removing unreachable block (ram,0x000101cce744) */
/* WARNING: Removing unreachable block (ram,0x000101cce748) */
/* WARNING: Removing unreachable block (ram,0x000101cce734) */
/* WARNING: Removing unreachable block (ram,0x000101cce6c8) */
/* WARNING: Removing unreachable block (ram,0x000101cce970) */
/* WARNING: Removing unreachable block (ram,0x000101cce6e4) */
/* WARNING: Removing unreachable block (ram,0x000101cce648) */
/* WARNING: Removing unreachable block (ram,0x000101cce64c) */
/* WARNING: Removing unreachable block (ram,0x000101cce658) */
/* WARNING: Removing unreachable block (ram,0x000101cce664) */
/* WARNING: Removing unreachable block (ram,0x000101cce978) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000101cce684) */
/* WARNING: Removing unreachable block (ram,0x000101cce924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cce5f0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e17cf8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c507e8();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101cce998; end: 101ccea47;  */

undefined * FUN_101cce998(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_38;
  
  puVar2 = param_1;
  func_0x000100f630bc();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puStack_38 = (undefined *)0x0;
  uVar3 = 0;
  FUN_101994830(0);
  func_0x000107c61174(param_2);
  func_0x000107c5fc50(param_1,&puStack_38,uVar3);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_38 != (undefined *)0x0) {
    puVar1 = puStack_38;
  }
  puStack_38 = puVar2;
  FUN_10193fb8c(puVar1);
  return puStack_38;
}



/* Entry: 101ccea48; end: 101ccea73;  */

void FUN_101ccea48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_101cce998(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ccea74; end: 101cceeeb;  */

void FUN_101ccea74(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined *apuStack_b8 [6];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar5 = 0x112e17d80;
  puVar11 = &UNK_10d9f6210;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  puVar13 = (undefined8 *)((long)&uStack_d0 + lVar5);
  lVar6 = 0;
  FUN_101cd1ba4();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lStack_88 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined *)*param_2;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar15 = puVar12;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (puVar15 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    uStack_68 = (ulong)puVar12 & 0xc000000000000001;
    uStack_70 = (ulong)puVar12 & 0xffffffffffffff8;
    puStack_c8 = param_1;
    lStack_c0 = lVar6;
    apuStack_b8[0] = puVar15;
    apuStack_b8[1] = puVar12;
    do {
      if (uStack_68 == 0) {
        if (*(undefined **)(uStack_70 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101cceeb4);
          (*pcVar4)();
        }
        puVar7 = *(undefined **)(puVar12 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar17;
        puVar11 = puVar12;
        func_0x00010103193c();
      }
      puVar1 = puVar17 + 1;
      if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cceeb0);
        (*pcVar4)();
      }
      puVar8 = puVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
LAB_101cceb6c:
        func_0x000107c61170(puVar7);
        (**(code **)(lVar18 + 0x38))(puVar13,1,1,lVar6);
        puVar11 = (undefined *)0x112e17d80;
        func_0x000101ccf908(puVar13,0x112e17d80,&UNK_10d9f6210);
      }
      else {
        puVar12 = puVar8;
        func_0x000107c5faec();
        puVar15 = puVar11;
        puStack_78 = puVar12;
        func_0x000107c61170(puVar8);
        puVar12 = puVar7;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          func_0x000107c6142c(puVar11);
          puVar12 = apuStack_b8[1];
          puVar15 = apuStack_b8[0];
          goto LAB_101cceb6c;
        }
        puVar8 = puVar12;
        func_0x000107c5faec();
        apuStack_b8[4] = puVar15;
        apuStack_b8[5] = puVar8;
        func_0x000107c61170(puVar12);
        puVar12 = puVar7;
        func_0x00010901d7c4();
        func_0x000107c61180();
        puVar8 = puVar12;
        func_0x000107c5faec();
        apuStack_b8[2] = puVar15;
        apuStack_b8[3] = puVar8;
        func_0x000107c61170(puVar12);
        lStack_80 = (long)*(int *)(lVar6 + 0x1c);
        puVar12 = puVar7;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          uVar16 = 1;
        }
        else {
          puVar15 = puVar12;
          func_0x000107c3e978();
          func_0x000107c61180();
          func_0x000107c61170(puVar12);
          if (puVar15 == (undefined *)0x0) {
            uVar16 = 1;
            lVar6 = lStack_c0;
          }
          else {
            puVar12 = puVar7;
            func_0x000107c3e9e8();
            func_0x000107c61180();
            if (puVar12 == (undefined *)0x0) {
LAB_101cced5c:
              uVar16 = 1;
            }
            else {
              puVar8 = puVar12;
              func_0x000107c3ea1c();
              func_0x000107c61180();
              func_0x000107c61170(puVar12);
              if (puVar8 == (undefined *)0x0) goto LAB_101cced5c;
              puVar12 = PTR_PTR_1126af5d8;
              func_0x000107c610f8(PTR_PTR_1126af5d8);
              func_0x000107c458cc();
              func_0x000107c61170(puVar15);
              func_0x000107c61170(puVar8);
              puVar15 = PTR_PTR_1126b9600;
              func_0x000107c61168(PTR_PTR_1126b9600);
              func_0x000107c402c8();
              func_0x000107c61180();
              func_0x000107c5edb4((long)puVar13 + lStack_80);
              func_0x000107c61170(puVar15);
              uVar16 = 0;
              puVar15 = puVar12;
            }
            param_1 = puStack_c8;
            func_0x000107c61170(puVar15);
            lVar6 = lStack_c0;
          }
        }
        lVar9 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar9 + -8) + 0x38))((long)puVar13 + lStack_80,uVar16,1,lVar9);
        puVar12 = puVar7;
        func_0x00010901d924();
        func_0x000107c61170(puVar7);
        uVar14 = (uint)puVar12;
        *puVar13 = puStack_78;
        *(undefined **)((long)&puStack_c8 + lVar5) = puVar11;
        puVar11 = apuStack_b8[2];
        *(undefined **)((long)&lStack_c0 + lVar5) = apuStack_b8[3];
        *(undefined **)((long)apuStack_b8 + lVar5) = puVar11;
        puVar11 = apuStack_b8[4];
        *(undefined **)((long)apuStack_b8 + lVar5 + 8) = apuStack_b8[5];
        *(undefined **)((long)apuStack_b8 + lVar5 + 0x10) = puVar11;
        puVar2 = (ulong *)((long)puVar13 + (long)*(int *)(lVar6 + 0x20));
        *puVar2 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU));
        *(bool *)(puVar2 + 1) = (int)uVar14 < 1;
        (**(code **)(lVar18 + 0x38))(puVar13,0,1,lVar6);
        func_0x000101ccf948(puVar13,lStack_88);
        puVar11 = puVar10;
        func_0x000107c61558();
        puVar12 = puVar10;
        if (((ulong)puVar11 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_101ccf5a4(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
        }
        uVar3 = *(ulong *)(puVar12 + 0x10);
        puVar10 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_101ccf5a4(puVar10,uVar3 + 1,1,puVar12);
        }
        *(ulong *)(puVar10 + 0x10) = uVar3 + 1;
        puVar11 = puVar10 + *(long *)(lVar18 + 0x48) * uVar3 +
                            ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
        func_0x000101ccf948(lStack_88);
        *param_1 = puVar10;
        puVar12 = apuStack_b8[1];
        puVar15 = apuStack_b8[0];
      }
      puVar17 = puVar17 + 1;
    } while (puVar1 != puVar15);
  }
  return;
}



/* Entry: 101cceeec; end: 101ccef5b;  */

void FUN_101cceeec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101ccef5c(uVar1,param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ccef5c; end: 101ccf4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccef5c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined8 auStack_90 [4];
  long lStack_70;
  long lVar15;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112e17d08));
  func_0x000100bc7fa4();
  uVar7 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  ppuVar8 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  uVar9 = 0x112e17d48;
  auStack_90[0] = param_1;
  func_0x0001000285a8(0x112e17d48,&UNK_10d9f61f8);
  uVar18 = 0x112e17d50;
  FUN_101ccf83c(0x112e17d50,0x112e17d58,&UNK_10d9f65f0,PTR___sSayxGSEsSERzlMc_11034dce0);
  ppuVar10 = (undefined **)auStack_90;
  func_0x000107c5eb4c(ppuVar10,uVar9,uVar18);
  ppuVar12 = ppuVar10;
  func_0x000101cd1af4();
  puVar1 = *ppuVar12;
  puVar11 = (undefined8 *)ppuVar12[1];
  puStack_98 = PTR___s10Foundation4DataVN_110350ae0;
  ppuStack_b0 = ppuVar10;
  uStack_a8 = uVar9;
  func_0x000100102924(&ppuStack_b0,auStack_90);
  func_0x000107c61434(puVar11);
  func_0x00010006c00c(ppuVar10,uVar9);
  ppuVar12 = ppuVar8;
  func_0x000107c61558(ppuVar8);
  ppuStack_b0 = ppuVar8;
  func_0x0001001029e8(auStack_90,puVar1,puVar11,ppuVar12);
  func_0x000107c6142c();
  ppuVar8 = ppuStack_b0;
  func_0x000101cd1ae8();
  puVar1 = PTR___sSSN_11034da80;
  uVar18 = *puVar11;
  uVar17 = puVar11[1];
  ppuStack_b0 = *(undefined ***)(unaff_x20 + _DAT_112e17ce0);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e17ce0))[1];
  puStack_98 = PTR___sSSN_11034da80;
  uStack_a8 = uVar3;
  func_0x000100102924(&ppuStack_b0,auStack_90);
  func_0x000107c61434(uVar17);
  func_0x000107c61434(uVar3);
  ppuVar12 = ppuVar8;
  func_0x000107c61558(ppuVar8);
  ppuStack_b0 = ppuVar8;
  func_0x0001001029e8(auStack_90,uVar18,uVar17,ppuVar12);
  func_0x000107c6142c(uVar17);
  ppuVar8 = ppuStack_b0;
  ppuVar12 = *(undefined ***)(unaff_x20 + _DAT_112e17cf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar13 = ppuVar12;
    func_0x000107c42504();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar12);
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar12 = ppuVar13;
      func_0x000107c5faec();
      func_0x000107c61170();
      goto LAB_101ccf1a8;
    }
  }
  ppuVar13 = &PTR____CFConstantStringClassReference_110dcb2f8;
  func_0x000107c5faec();
  ppuVar12 = ppuVar13;
LAB_101ccf1a8:
  func_0x000101cd1b00();
  puVar2 = *ppuVar13;
  puVar4 = ppuVar13[1];
  puStack_98 = puVar1;
  ppuStack_b0 = ppuVar12;
  uStack_a8 = uVar18;
  func_0x000100102924(&ppuStack_b0,auStack_90);
  func_0x000107c61434(puVar4);
  ppuVar12 = ppuVar8;
  func_0x000107c61558(ppuVar8);
  ppuStack_b0 = ppuVar8;
  func_0x0001001029e8(auStack_90,puVar2,puVar4,ppuVar12);
  func_0x000107c6142c(puVar4);
  ppuVar8 = ppuStack_b0;
  lVar14 = *(long *)(unaff_x20 + _DAT_112e17d00);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar14 == 0) {
    uVar6 = 0;
  }
  else {
    lVar15 = lVar14;
    func_0x000107c5e128();
    uVar6 = (undefined1)lVar15;
    func_0x000107c615e8(lVar14);
  }
  ppuVar12 = (undefined **)0x112d7e658;
  func_0x0001000285a8(0x112d7e658,&UNK_10db0fbd0);
  func_0x000107c61534();
  ppuVar12[3] = (undefined *)0x2;
  ppuVar12[2] = (undefined *)0x1;
  ppuVar13 = ppuVar12;
  func_0x000101cd1b50();
  puVar1 = ppuVar13[1];
  ppuVar16 = ppuVar12 + 4;
  *ppuVar16 = *ppuVar13;
  ppuVar12[5] = puVar1;
  *(undefined1 *)(ppuVar12 + 6) = uVar6;
  func_0x000107c61434();
  ppuVar13 = ppuVar12;
  func_0x0001003d8468();
  func_0x000107c61588(ppuVar12);
  FUN_101ccf908(ppuVar16,0x112d7e660,&UNK_10d93c760);
  func_0x000101cd1b0c();
  puVar1 = *ppuVar16;
  puVar2 = ppuVar16[1];
  lVar14 = 0x112e17d60;
  func_0x0001000285a8(0x112e17d60,&UNK_10dbc2660);
  ppuStack_b0 = ppuVar13;
  puStack_98 = (undefined *)lVar14;
  if (lVar14 == 0) {
    func_0x000107c61434(puVar2);
    FUN_101ccf908(&ppuStack_b0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(auStack_90,puVar1,puVar2);
    func_0x000107c6142c(puVar2);
    FUN_101ccf908(auStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&ppuStack_b0,auStack_90);
    func_0x000107c61434(puVar2);
    ppuVar12 = ppuVar8;
    func_0x000107c61558(ppuVar8);
    ppuStack_b0 = ppuVar8;
    func_0x0001001029e8(auStack_90,puVar1,puVar2,ppuVar12);
    func_0x000107c6142c(puVar2);
    ppuVar8 = ppuStack_b0;
  }
  ppuVar12 = ppuVar8;
  func_0x000107c5f9dc(ppuVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  auStack_90[0] = 0;
  func_0x000107c5d3ec();
  func_0x000107c61170(ppuVar12);
  uVar18 = auStack_90[0];
  if (param_2 == 0) {
    uVar17 = auStack_90[0];
    func_0x000107c61174(auStack_90[0]);
    func_0x000107c5ed30(uVar18);
    func_0x000107c61170(uVar17);
    func_0x000107c61654();
    func_0x00010006c090(ppuVar10,uVar9);
    func_0x0001057e6cf8(*(undefined8 *)(unaff_x20 + _DAT_112e17d10),1);
    func_0x000107c61574(uVar7);
    func_0x000107c614ac(uVar18);
    func_0x000107c6142c(ppuVar8);
  }
  else {
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112e17d10);
    func_0x000107c61174(auStack_90[0]);
    func_0x0001057e6c80(uVar18,1);
    func_0x00010006c090(ppuVar10,uVar9);
    func_0x000107c6142c(ppuVar8);
    func_0x000107c61574(uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x000107c60eb0("WatchApplicationContextPersister.WatchApplicationContextPersister",0x41,
                        "init()",6,0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101ccf4d8);
    (*pcVar5)();
  }
  return;
}



/* Entry: 101ccf4ac; end: 101ccf507; -[_TtC32WatchApplicationContextPersister32WatchApplicationContextPersister init] */

void FUN_101ccf4ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WatchApplicationContextPersister.WatchApplicationContextPersister",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ccf4d8);
  (*pcVar1)();
}



/* Entry: 101ccf508; end: 101ccf5a3; -[_TtC32WatchApplicationContextPersister32WatchApplicationContextPersister .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccf508(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e17ce0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17ce8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17cf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17cf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17d00));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e17d08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17d10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e17d18));
  return;
}



/* Entry: 101ccf5a4; end: 101ccf71f;  */

undefined * FUN_101ccf5a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ccf720);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112e17d88;
    func_0x0001000285a8(0x112e17d88,&UNK_10d9f6218);
    lVar5 = 0;
    FUN_101cd1ba4();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ccf718);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ccf71c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_101cd1ba4();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 101ccf720; end: 101ccf83b;  */

void FUN_101ccf720(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long **pplVar8;
  undefined *puStack_98;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)PTR__OBJC_CLASS___WCSession_1126a7298;
  func_0x000107c61168();
  func_0x000107c41614();
  func_0x000107c61180();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puVar3 = puVar2;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar2);
  plStack_40 = (long *)0x0;
  pplVar8 = &plStack_40;
  plVar4 = plVar1;
  puVar2 = puVar3;
  func_0x000107c5d3ec();
  func_0x000107c61170(puVar3);
  plVar5 = plStack_40;
  if ((int)plVar4 == 0) {
    plVar4 = plStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(plVar4);
    func_0x000107c61654();
    func_0x000107c61170(plVar1);
    func_0x000107c614ac();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61170();
    plVar5 = plVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (*plVar5 == 0) {
    uVar6 = 0x112e17d48;
    func_0x00010002969c(0x112e17d48,&UNK_10d9f61f8);
    FUN_101ccf8c0(puVar7,puVar2);
    puStack_98 = puVar7;
    func_0x000107c61520(pplVar8,uVar6,&puStack_98);
    *plVar5 = (long)pplVar8;
  }
  return;
}



/* Entry: 101ccf83c; end: 101ccf8bf;  */

void FUN_101ccf83c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  if (*param_1 == 0) {
    uVar1 = 0x112e17d48;
    func_0x00010002969c(0x112e17d48,&UNK_10d9f61f8);
    FUN_101ccf8c0(param_2,param_3);
    uStack_48 = param_2;
    func_0x000107c61520(param_4,uVar1,&uStack_48);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101ccf8c0; end: 101ccf8ff;  */

void FUN_101ccf8c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_101cd1ba4(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101ccf900; end: 101ccf907;  */

void FUN_101ccf900(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_101ccef5c(uVar3,uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101ccf908; end: 101ccf98b;  */

undefined8 FUN_101ccf908(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101ccf98c; end: 101ccfd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ccf98c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  long *plVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  lStack_78 = param_4;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  uVar4 = 0;
  func_0x0001000c6560();
  uVar11 = 0x20;
  uStack_98 = uVar4;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + _DAT_113083f78);
  lStack_90 = unaff_x20;
  lStack_88 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c5faec();
  uStack_a8 = uVar11;
  uStack_a0 = uVar4;
  func_0x000107c61170(uVar5);
  lStack_80 = param_2;
  func_0x000107c5b478();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar4 = param_3;
    func_0x000107c43a58();
    func_0x000107c61180();
    uVar5 = param_5;
    uStack_b0 = param_3;
    func_0x000107c5e12c();
    func_0x000107c61180();
    uVar11 = param_6;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    uStack_b8 = param_6;
    (**(code **)(lVar14 + 0x68))
              (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar3);
    puVar6 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar7 = 0xd000000000000018;
    uStack_c0 = param_5;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f00aa00);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar7);
    (**(code **)(lVar14 + 8))(lVar8,lVar3);
    lVar14 = 0;
    func_0x000100997a94();
    lVar8 = lVar14;
    func_0x000107c610f8();
    lVar3 = _DAT_112e17d18;
    uVar7 = uStack_98;
    func_0x000107c613fc(uStack_98,0x20,7);
    func_0x0001000c6580();
    *(undefined8 *)(lVar8 + lVar3) = uVar7;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112e17ce0);
    *puVar1 = uStack_a0;
    puVar1[1] = uStack_a8;
    *(long *)(lVar8 + _DAT_112e17ce8) = param_2;
    *(undefined8 *)(lVar8 + _DAT_112e17cf0) = uVar4;
    *(undefined8 *)(lVar8 + _DAT_112e17cf8) = uVar5;
    *(undefined8 *)(lVar8 + _DAT_112e17d00) = uVar11;
    *(undefined **)(lVar8 + _DAT_112e17d08) = puVar6;
    puVar9 = PTR_PTR_1126a9000;
    func_0x000107c610f8();
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar11);
    func_0x000107c61174(puVar6);
    func_0x000107c453e4();
    *(undefined **)(lVar8 + _DAT_112e17d10) = puVar9;
    plVar10 = &lStack_70;
    lStack_70 = lVar8;
    lStack_68 = lVar14;
    func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar6);
    lVar3 = lStack_78;
    plVar13 = *(long **)(lStack_78 + _DAT_112e18028);
    *(long **)(lStack_90 + 0x10) = plVar10;
    *(long **)(lStack_90 + 0x18) = plVar13;
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    func_0x000107c61174();
    func_0x0001000b637c();
    puVar6 = &UNK_11046b3f0;
    func_0x000107c613fc(&UNK_11046b3f0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lStack_90);
    puVar9 = &UNK_100997b2c;
    puVar12 = puVar6;
    (**(code **)(*plVar13 + 0x60))(&UNK_100997b2c);
    func_0x000107c61574(plVar13);
    func_0x000107c61574(puVar6);
    puVar6 = puVar9;
    func_0x000107c614f0(puVar9);
    (**(code **)(puVar12 + 0x10))(*(undefined8 *)(lStack_90 + 0x20),puVar6,puVar12);
    func_0x000107c61170(lStack_88);
    func_0x000107c61170(lStack_80);
    func_0x000107c61170(uStack_b0);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_b8);
    func_0x000107c615e8(puVar9);
    return lStack_90;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ccfd9c);
  (*pcVar2)();
}



/* Entry: 101ccfd9c; end: 101ccfdb3;  */

undefined8 FUN_101ccfd9c(void)

{
  FUN_101ccf720();
  return 0;
}



/* Entry: 101ccfdb4; end: 101ccff2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ccfdb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112e18070);
    if ((lVar3 != 0) && (*(long *)(param_1 + _DAT_112e18078) == 2)) {
      puVar1 = &UNK_11046b3f0;
      func_0x000107c613fc(&UNK_11046b3f0,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,param_2);
      puVar2 = &UNK_11046b458;
      func_0x000107c613fc(&UNK_11046b458,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(long *)(puVar2 + 0x18) = lVar3;
      func_0x000107c615f4(lVar3,2);
      func_0x0001001ca524(0x11,0,0x28,1,0,0,&UNK_10d9f6288,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61574(puVar2);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101ccff2c; end: 101ccff43;  */

void FUN_101ccff2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ccff44,0,0);
  return;
}



/* Entry: 101ccff44; end: 101ccffcb;  */

void FUN_101ccff44(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174(uVar1);
    FUN_101cce5f0(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101ccffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ccffcc; end: 101ccffff;  */

void FUN_101ccffcc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cd0000; end: 101cd0003;  */

void FUN_101cd0000(void)

{
  return;
}


