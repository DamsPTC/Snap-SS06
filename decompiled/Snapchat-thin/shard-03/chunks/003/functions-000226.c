/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10275bb4c; end: 10275bb87;  */

void FUN_10275bb4c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010275bb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10275bb88; end: 10275bbc7;  */

void FUN_10275bb88(void)

{
  func_0x0001000285a8(0x112ebc408,&UNK_10dad6190);
  func_0x0001000823a8(FUN_10275bbc8,0);
  return;
}



/* Entry: 10275bbc8; end: 10275bc73;  */

void FUN_10275bbc8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_10275d428();
  lVar1 = param_2;
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined **)(lVar1 + 0x18) = puVar4;
  puVar3 = puVar4;
  func_0x00010275d2b4(puVar4,0x112ebc4e0,&UNK_10dad6248);
  *(undefined **)(lVar1 + 0x20) = puVar3;
  func_0x00010275d2b4(puVar4,0x112ebc4f0,&UNK_10dad6258);
  *(undefined **)(lVar1 + 0x28) = puVar4;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110545498;
  *param_1 = lVar1;
  return;
}



/* Entry: 10275bc74; end: 10275bd03;  */

long FUN_10275bc74(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  puVar2 = puVar3;
  func_0x00010275d2b4(puVar3,0x112ebc4e0,&UNK_10dad6248);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x00010275d2b4(puVar3,0x112ebc4f0,&UNK_10dad6258);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  return unaff_x20;
}



/* Entry: 10275bd04; end: 10275c327;  */

/* WARNING: Removing unreachable block (ram,0x00010275c308) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275bd04(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long unaff_x21;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *apuStack_90 [3];
  undefined *apuStack_78 [3];
  
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar13);
  if (param_2 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar16 = param_2;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10275d0f8(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2f8);
      (*pcVar4)();
    }
    puVar8 = apuStack_78[0];
    if ((param_2 & 0xc000000000000001) == 0) {
      plVar17 = (long *)(param_2 + 0x20);
      do {
        lVar14 = *plVar17;
        uVar13 = *(undefined8 *)(lVar14 + _DAT_112ebd968);
        uVar2 = ((undefined8 *)(lVar14 + _DAT_112ebd968))[1];
        uVar11 = *(ulong *)(puVar8 + 0x10);
        uVar6 = *(ulong *)(puVar8 + 0x18);
        apuStack_78[0] = puVar8;
        func_0x000107c61174();
        func_0x000107c61434(uVar2);
        if (uVar6 >> 1 <= uVar11) {
          FUN_10275d0f8(1 < uVar6,uVar11 + 1,1);
          puVar8 = apuStack_78[0];
        }
        *(ulong *)(puVar8 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puVar8 + uVar11 * 0x18 + 0x20) = uVar13;
        *(undefined8 *)(puVar8 + uVar11 * 0x18 + 0x28) = uVar2;
        *(long *)(puVar8 + uVar11 * 0x18 + 0x30) = lVar14;
        uVar16 = uVar16 - 1;
        plVar17 = plVar17 + 1;
      } while (uVar16 != 0);
    }
    else {
      uVar11 = 0;
      do {
        uVar15 = uVar11;
        FUN_10275c620(uVar11,param_2);
        uVar13 = *(undefined8 *)(uVar15 + _DAT_112ebd968);
        uVar2 = ((undefined8 *)(uVar15 + _DAT_112ebd968))[1];
        uVar6 = *(ulong *)(puVar8 + 0x10);
        uVar10 = *(ulong *)(puVar8 + 0x18);
        apuStack_78[0] = puVar8;
        func_0x000107c61434(uVar2);
        if (uVar10 >> 1 <= uVar6) {
          FUN_10275d0f8(1 < uVar10,uVar6 + 1,1);
          puVar8 = apuStack_78[0];
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puVar8 + 0x10) = uVar6 + 1;
        *(undefined8 *)(puVar8 + uVar6 * 0x18 + 0x20) = uVar13;
        *(undefined8 *)(puVar8 + uVar6 * 0x18 + 0x28) = uVar2;
        *(ulong *)(puVar8 + uVar6 * 0x18 + 0x30) = uVar15;
      } while (uVar16 != uVar11);
    }
  }
  puVar12 = *(undefined **)(puVar8 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebc4e0,&UNK_10dad6248);
    func_0x000107c60498();
    puVar9 = puVar12;
  }
  apuStack_78[0] = puVar9;
  func_0x000107c61434(puVar8);
  FUN_10275cd4c();
  if (unaff_x21 != 0) {
    func_0x000107c615e4(unaff_x21,"Swift/arm64e-apple-ios.swiftinterface",0x25,1,0x1cbd);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c328);
    (*pcVar4)();
  }
  func_0x000107c6142c(puVar8);
  puVar8 = apuStack_78[0];
  func_0x000107c61428(param_1 + 0x20,apuStack_78,1,0);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar8;
  func_0x000107c6142c(uVar13);
  if (param_2 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar16 = param_2;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar11 = 0;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2cc);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_2 + 0x20 + uVar11 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar11;
        FUN_10275c620(uVar11,param_2);
      }
      bVar5 = SCARRY8(uVar11,1);
      uVar11 = uVar11 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2c8);
        (*pcVar4)();
      }
      uVar10 = *(ulong *)(uVar6 + _DAT_112ebd970);
      if (uVar10 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        if (uVar15 == 0) goto LAB_10275c134;
LAB_10275c008:
        apuStack_90[0] = puVar9;
        func_0x00010275d134(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2d8);
          (*pcVar4)();
        }
        uVar18 = 0;
        puVar9 = apuStack_90[0];
        do {
          if ((uVar10 & 0xc000000000000001) == 0) {
            uVar7 = *(ulong *)(uVar10 + uVar18 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar18;
            func_0x00010275c7bc();
          }
          uVar13 = *(undefined8 *)(uVar7 + _DAT_112ebd9d0);
          uVar2 = ((undefined8 *)(uVar7 + _DAT_112ebd9d0))[1];
          uVar1 = *(ulong *)(puVar9 + 0x10);
          uVar3 = *(ulong *)(puVar9 + 0x18);
          apuStack_90[0] = puVar9;
          func_0x000107c61434(uVar2);
          if (uVar3 >> 1 <= uVar1) {
            func_0x00010275d134(1 < uVar3,uVar1 + 1,1);
            puVar9 = apuStack_90[0];
          }
          uVar18 = uVar18 + 1;
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x20) = uVar13;
          *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x28) = uVar2;
          *(ulong *)(puVar9 + uVar1 * 0x18 + 0x30) = uVar7;
        } while (uVar15 != uVar18);
        func_0x000107c61170(uVar6);
        puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar15 = uVar10 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar10) {
          uVar15 = uVar10;
        }
        func_0x000107c60480();
        if (uVar15 != 0) goto LAB_10275c008;
LAB_10275c134:
        func_0x000107c61170(uVar6);
        puVar19 = puVar9;
      }
      uVar6 = *(ulong *)(puVar9 + 0x10);
      lVar14 = *(long *)(puVar12 + 0x10);
      if (SCARRY8(lVar14,uVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2d0);
        (*pcVar4)();
      }
      puVar8 = puVar12;
      func_0x000107c61558();
      if (((int)puVar8 == 0) ||
         (uVar10 = *(ulong *)(puVar12 + 0x18) >> 1, (long)uVar10 < (long)(lVar14 + uVar6))) {
        func_0x00010275ea6c();
        uVar10 = *(ulong *)(puVar8 + 0x18) >> 1;
        puVar12 = puVar8;
        if (*(long *)(puVar9 + 0x10) == 0) goto LAB_10275bf98;
LAB_10275c1a0:
        lVar14 = *(long *)(puVar8 + 0x10);
        if (uVar10 - lVar14 < uVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2dc);
          (*pcVar4)();
        }
        uVar13 = 0x112ebc4e8;
        func_0x0001000285a8(0x112ebc4e8,&UNK_10dad6250);
        func_0x000107c6140c(puVar8 + lVar14 * 0x18 + 0x20,puVar9 + 0x20,uVar6,uVar13);
        func_0x000107c6142c(puVar9);
        if (uVar6 != 0) {
          if (SCARRY8(*(long *)(puVar8 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2e0);
            (*pcVar4)();
          }
          *(ulong *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + uVar6;
        }
      }
      else {
        puVar8 = puVar12;
        if (*(long *)(puVar9 + 0x10) != 0) goto LAB_10275c1a0;
LAB_10275bf98:
        func_0x000107c6142c(puVar9);
        puVar8 = puVar12;
        if (uVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10275c2d4);
          (*pcVar4)();
        }
      }
      puVar12 = puVar8;
      puVar9 = puVar19;
    } while (uVar11 != uVar16);
  }
  puVar12 = *(undefined **)(puVar8 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebc4f0,&UNK_10dad6258);
    func_0x000107c60498();
    puVar9 = puVar12;
  }
  apuStack_90[0] = puVar9;
  func_0x000107c61434(puVar8);
  FUN_10275cd4c();
  func_0x000107c6142c(puVar8);
  puVar8 = apuStack_90[0];
  func_0x000107c61428(param_1 + 0x28,apuStack_90,1,0);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar8;
  func_0x000107c6142c(uVar13);
  return;
}



/* Entry: 10275c328; end: 10275c3db;  */

void FUN_10275c328(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x20,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + param_3 * 8);
      func_0x000107c61174(uVar2);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar2;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10275c3dc; end: 10275c48f;  */

void FUN_10275c3dc(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x28,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + 0x28);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + param_3 * 8);
      func_0x000107c61174(uVar2);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar2;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10275c490; end: 10275c4cb;  */

void FUN_10275c490(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10275c4cc; end: 10275c583;  */

void FUN_10275c4cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *unaff_x20;
  uStack_38 = param_1;
  func_0x000100087bd4(0x10275d484,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10275c584; end: 10275c5bb;  */

undefined8 FUN_10275c584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x112ebc418;
  uStack_50 = *unaff_x20;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x0001000285a8(0x112ebc418,&UNK_10dad61a0);
  func_0x000100087bd4(&uStack_38,0x10275d470,auStack_60,uVar1);
  return uStack_38;
}



/* Entry: 10275c5bc; end: 10275c61f;  */

undefined8
FUN_10275c5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x0001000285a8(param_5,param_6);
  func_0x000100087bd4(&uStack_38,param_7,auStack_60,param_5);
  return uStack_38;
}



/* Entry: 10275c620; end: 10275c957;  */

ulong FUN_10275c620(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10275c6f0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10275c6f4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_102787194(0);
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
    FUN_102787194(0);
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
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f0ba850);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10275c7bc);
  (*pcVar2)();
}



/* Entry: 10275c958; end: 10275cab7;  */

void FUN_10275c958(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10275ca24;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_10275ca24:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10275cab8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10275ca90;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10275ca90:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10275cab8; end: 10275cd4b;  */

void FUN_10275cab8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10275cd18:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10275cd48);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10275cd18;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10275cd4c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10275cd4c; end: 10275d0f7;  */

void FUN_10275cd4c(long param_1,uint param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar12 = *(ulong *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *param_3;
    func_0x000107c61434(uVar12);
    func_0x000107c61174();
    uVar15 = uVar13;
    uVar5 = uVar12;
    func_0x000100029284();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_10275d030:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10275d034);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      FUN_10275cab8(lVar1,param_2 & 1,param_4,param_5);
      uVar15 = uVar13;
      uVar8 = uVar12;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_10275d03c:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10275d04c);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_10275c958(param_4,param_5);
    }
    if ((uVar5 & 1) != 0) {
LAB_10275ce24:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar6 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar11);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar13;
      uStack_78 = uVar12;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10275d0f8);
      (*pcVar3)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar15 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar15 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar15 * 0x10);
    *puVar2 = uVar13;
    puVar2[1] = uVar12;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar15 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_10275d034:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10275d038);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar6 != 1) {
      puVar14 = (undefined8 *)(param_1 + 0x48);
      uVar15 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10275d03c);
          (*pcVar3)();
        }
        uVar13 = puVar14[-2];
        uVar12 = puVar14[-1];
        uVar11 = *puVar14;
        lVar10 = *param_3;
        func_0x000107c61434(uVar12);
        func_0x000107c61174();
        uVar5 = uVar13;
        uVar8 = uVar12;
        func_0x000100029284();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_10275d030;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          FUN_10275cab8(lVar1,1,param_4,param_5);
          uVar5 = uVar13;
          uVar9 = uVar12;
          func_0x000100029284();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_10275d03c;
        }
        if ((uVar8 & 1) != 0) goto LAB_10275ce24;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar13;
        puVar2[1] = uVar12;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar11;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_10275d034;
        uVar15 = uVar15 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar14 = puVar14 + 3;
      } while (uVar6 != uVar15);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 10275d0f8; end: 10275d16f;  */

void FUN_10275d0f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10275d170();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10275d170; end: 10275d3ab;  */

undefined *
FUN_10275d170(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10275d2b4);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x18 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 10275d3ac; end: 10275d417;  */

void FUN_10275d3ac(void)

{
  long unaff_x20;
  
  FUN_10275bd04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10275d418; end: 10275d427;  */

undefined1  [16] FUN_10275d418(void)

{
  return ZEXT816(0x1105454d0);
}



/* Entry: 10275d428; end: 10275d497;  */

void FUN_10275d428(void)

{
  func_0x000107c61168(&PTR_PTR_112ebc468);
  return;
}



/* Entry: 10275d498; end: 10275d56b;  */

void FUN_10275d498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105454f8;
  func_0x000107c613fc(&UNK_1105454f8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x0001000285a8(0x112ebc510,&UNK_10dad6270);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001002acf1c(FUN_10275dbb4,puVar1);
  return;
}



/* Entry: 10275d56c; end: 10275dbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275d56c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long alStack_120 [5];
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [6];
  long lStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  lVar3 = 0;
  alStack_120[1] = param_3;
  alStack_120[3] = param_5;
  alStack_120[4] = param_6;
  puStack_c8 = param_1;
  func_0x000100371f48();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12;
  lVar4 = 0;
  lStack_c0 = lVar3;
  func_0x000100371f10();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_e0 = puVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar12 - extraout_x12_00;
  lStack_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_02;
  func_0x000100083b20(auStack_70);
  FUN_10275e908();
  lStack_b8 = lVar5;
  func_0x000107c610f8();
  puVar12 = (undefined8 *)(lVar5 + _DAT_112ebc518);
  *puVar12 = 0;
  puVar12[1] = 0;
  lVar3 = _DAT_112ebc520;
  func_0x000107c61614(lVar5 + _DAT_112ebc520,0);
  alStack_120[2] = _DAT_112ebc528;
  func_0x000107c61614(lVar5 + _DAT_112ebc528,0);
  uVar7 = 0x112ebbcf0;
  func_0x0001000285a8(0x112ebbcf0,&UNK_10dad4c00);
  pcVar6 = FUN_10275e21c;
  func_0x00010072927c(FUN_10275e21c,0,uVar7);
  *(code **)(lVar5 + _DAT_112ebc530) = pcVar6;
  *(undefined8 *)(lVar5 + _DAT_112ebc538) = param_4;
  func_0x0001000285a8(0x112ebc540,&UNK_10dad6280);
  func_0x000107c6157c(param_4);
  uStack_d8 = auStack_70[0];
  func_0x000107c6157c(auStack_70[0]);
  pcVar6 = FUN_10275ebb0;
  func_0x0001000823a8(FUN_10275ebb0,auStack_70[0]);
  lVar2 = alStack_120[4];
  *(code **)(lVar5 + _DAT_112ebc548) = pcVar6;
  *(long *)(lVar5 + _DAT_112ebc550) = alStack_120[3];
  *(long *)(lVar5 + _DAT_112ebc558) = alStack_120[4];
  func_0x000107c6157c();
  func_0x000107c6157c(lVar2);
  func_0x000100083b20(lVar14);
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar4 + 0x24));
  uStack_f8 = puVar1[1];
  alStack_120[4] = *puVar1;
  func_0x000107c6157c(puVar1[1]);
  FUN_10275e420(lVar14,&SUB_100371f10);
  uVar7 = *puVar12;
  uVar9 = puVar12[1];
  puVar12[1] = uStack_f8;
  *puVar12 = alStack_120[4];
  func_0x00010058d43c(uVar7,uVar9);
  func_0x000100083b20(lVar14);
  uVar7 = *(undefined8 *)(lVar14 + *(int *)(lVar4 + 0x18));
  func_0x000107c61174(uVar7);
  FUN_10275e420(lVar14,&SUB_100371f10);
  func_0x000107c61604(lVar5 + lVar3,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000100083b20(lVar14);
  uVar7 = *(undefined8 *)(lVar14 + *(int *)(lVar4 + 0x20));
  func_0x000107c61174(uVar7);
  FUN_10275e420(lVar14,&SUB_100371f10);
  func_0x000107c61604(lVar5 + alStack_120[2],uVar7);
  func_0x000107c61170(uVar7);
  lStack_78 = lStack_b8;
  plVar8 = &lStack_80;
  lStack_80 = lVar5;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000100083b20(lVar14);
  lVar2 = lStack_c0;
  FUN_10274364c(lVar14,lStack_c0);
  FUN_10275e420(lVar14,&SUB_100371f10);
  func_0x000100083b20(lVar13);
  uVar7 = *(undefined8 *)(lVar13 + *(int *)(lVar4 + 0x18));
  func_0x000107c61174();
  alStack_120[4] = uVar7;
  FUN_10275e420(lVar13,&SUB_100371f10);
  lVar3 = lStack_e8;
  func_0x000100083b20(lStack_e8);
  alStack_120[3] = *(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x1c));
  func_0x000107c615f0();
  FUN_10275e420(lVar3,&SUB_100371f10);
  puVar12 = puStack_e0;
  func_0x000100083b20(puStack_e0);
  uVar7 = *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar4 + 0x20));
  alStack_120[2] = uVar7;
  func_0x000107c61174();
  lStack_e8 = uVar7;
  FUN_10275e420(puVar12,&SUB_100371f10);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar7 = *puVar12;
  func_0x000107c61174(uVar7);
  uVar9 = 0xd000000000000019;
  func_0x0001000a9a18(0xd000000000000019,0x800000010f0ba870);
  puStack_e0 = (undefined8 *)uVar9;
  func_0x000107c61170(uVar7);
  func_0x000104432eb0(0);
  func_0x000107c610f8();
  *(undefined4 *)(lVar14 + -0xc) = 0;
  *(undefined1 *)(lVar14 + -0x10) = 0;
  uVar10 = 0;
  func_0x000104432720(0,0,0,0,0,1,4,0,0);
  alStack_120[1] = uVar10;
  func_0x000100083b20(auStack_b0);
  uVar7 = auStack_b0[0];
  func_0x000107c4323c(auStack_b0[0]);
  func_0x000107c615e8(uVar7);
  func_0x000100083b20(auStack_b0);
  uVar7 = auStack_b0[0];
  lVar5 = lStack_d0;
  FUN_10274364c(lVar2,lStack_d0);
  func_0x00010442e758(0);
  func_0x000107c610f8();
  func_0x00010442e404();
  func_0x000100083b20(auStack_b0);
  uVar9 = auStack_b0[0];
  uVar11 = 0;
  func_0x00010442bbd4();
  func_0x000107c610f8();
  func_0x00010442ba58(uVar9,uVar11);
  func_0x000100083b20(auStack_b0);
  uVar11 = auStack_b0[0];
  *(undefined8 *)(lVar14 + -0x10) = 0;
  *(undefined8 *)(lVar14 + -8) = 0;
  lVar2 = alStack_120[4];
  lVar3 = alStack_120[3];
  lVar4 = lVar5;
  func_0x00010442d2a0(lVar5,alStack_120[4],alStack_120[3],alStack_120[2],uVar9,uVar10,plVar8,uVar11)
  ;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c6142c(uVar11);
  func_0x000100083b20(auStack_b0);
  func_0x000107c42c1c(auStack_b0[0]);
  func_0x000107c61170(auStack_b0[0]);
  func_0x000107c61428(puVar12,auStack_b0,0,0);
  uVar7 = *puVar12;
  func_0x000107c61174(uVar7);
  func_0x0001000aa0a8(puStack_e0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lStack_e8);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(alStack_120[1]);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar7);
  FUN_10275e420(lStack_c0,&SUB_100371f48);
  puStack_c8[3] = lStack_b8;
  puStack_c8[4] = &PTR_DAT_110545510;
  *puStack_c8 = plVar8;
  return;
}



/* Entry: 10275dbb4; end: 10275dbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275dbb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long alStack_120 [5];
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [6];
  long lStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  alStack_120[1] = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  alStack_120[3] = *(undefined8 *)(unaff_x20 + 0x28);
  alStack_120[4] = *(undefined8 *)(unaff_x20 + 0x30);
  lVar3 = 0;
  puStack_c8 = param_1;
  func_0x000100371f48();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12;
  lVar4 = 0;
  lStack_c0 = lVar3;
  func_0x000100371f10();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_e0 = puVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar12 - extraout_x12_00;
  lStack_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_02;
  func_0x000100083b20(auStack_70);
  FUN_10275e908();
  lStack_b8 = lVar5;
  func_0x000107c610f8();
  puVar12 = (undefined8 *)(lVar5 + _DAT_112ebc518);
  *puVar12 = 0;
  puVar12[1] = 0;
  lVar3 = _DAT_112ebc520;
  func_0x000107c61614(lVar5 + _DAT_112ebc520,0);
  alStack_120[2] = _DAT_112ebc528;
  func_0x000107c61614(lVar5 + _DAT_112ebc528,0);
  uVar7 = 0x112ebbcf0;
  func_0x0001000285a8(0x112ebbcf0,&UNK_10dad4c00);
  pcVar6 = FUN_10275e21c;
  func_0x00010072927c(FUN_10275e21c,0,uVar7);
  *(code **)(lVar5 + _DAT_112ebc530) = pcVar6;
  *(undefined8 *)(lVar5 + _DAT_112ebc538) = uVar9;
  func_0x0001000285a8(0x112ebc540,&UNK_10dad6280);
  func_0x000107c6157c(uVar9);
  uStack_d8 = auStack_70[0];
  func_0x000107c6157c(auStack_70[0]);
  pcVar6 = FUN_10275ebb0;
  func_0x0001000823a8(FUN_10275ebb0,auStack_70[0]);
  lVar2 = alStack_120[4];
  *(code **)(lVar5 + _DAT_112ebc548) = pcVar6;
  *(long *)(lVar5 + _DAT_112ebc550) = alStack_120[3];
  *(long *)(lVar5 + _DAT_112ebc558) = alStack_120[4];
  func_0x000107c6157c();
  func_0x000107c6157c(lVar2);
  func_0x000100083b20(lVar14);
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar4 + 0x24));
  uStack_f8 = puVar1[1];
  alStack_120[4] = *puVar1;
  func_0x000107c6157c(puVar1[1]);
  FUN_10275e420(lVar14,&SUB_100371f10);
  uVar7 = *puVar12;
  uVar9 = puVar12[1];
  puVar12[1] = uStack_f8;
  *puVar12 = alStack_120[4];
  func_0x00010058d43c(uVar7,uVar9);
  func_0x000100083b20(lVar14);
  uVar7 = *(undefined8 *)(lVar14 + *(int *)(lVar4 + 0x18));
  func_0x000107c61174(uVar7);
  FUN_10275e420(lVar14,&SUB_100371f10);
  func_0x000107c61604(lVar5 + lVar3,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000100083b20(lVar14);
  uVar7 = *(undefined8 *)(lVar14 + *(int *)(lVar4 + 0x20));
  func_0x000107c61174(uVar7);
  FUN_10275e420(lVar14,&SUB_100371f10);
  func_0x000107c61604(lVar5 + alStack_120[2],uVar7);
  func_0x000107c61170(uVar7);
  lStack_78 = lStack_b8;
  plVar8 = &lStack_80;
  lStack_80 = lVar5;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000100083b20(lVar14);
  lVar2 = lStack_c0;
  FUN_10274364c(lVar14,lStack_c0);
  FUN_10275e420(lVar14,&SUB_100371f10);
  func_0x000100083b20(lVar13);
  uVar7 = *(undefined8 *)(lVar13 + *(int *)(lVar4 + 0x18));
  func_0x000107c61174();
  alStack_120[4] = uVar7;
  FUN_10275e420(lVar13,&SUB_100371f10);
  lVar3 = lStack_e8;
  func_0x000100083b20(lStack_e8);
  alStack_120[3] = *(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x1c));
  func_0x000107c615f0();
  FUN_10275e420(lVar3,&SUB_100371f10);
  puVar12 = puStack_e0;
  func_0x000100083b20(puStack_e0);
  uVar7 = *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar4 + 0x20));
  alStack_120[2] = uVar7;
  func_0x000107c61174();
  lStack_e8 = uVar7;
  FUN_10275e420(puVar12,&SUB_100371f10);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar7 = *puVar12;
  func_0x000107c61174(uVar7);
  uVar9 = 0xd000000000000019;
  func_0x0001000a9a18(0xd000000000000019,0x800000010f0ba870);
  puStack_e0 = (undefined8 *)uVar9;
  func_0x000107c61170(uVar7);
  func_0x000104432eb0(0);
  func_0x000107c610f8();
  *(undefined4 *)(lVar14 + -0xc) = 0;
  *(undefined1 *)(lVar14 + -0x10) = 0;
  uVar10 = 0;
  func_0x000104432720(0,0,0,0,0,1,4,0,0);
  alStack_120[1] = uVar10;
  func_0x000100083b20(auStack_b0);
  uVar7 = auStack_b0[0];
  func_0x000107c4323c(auStack_b0[0]);
  func_0x000107c615e8(uVar7);
  func_0x000100083b20(auStack_b0);
  uVar7 = auStack_b0[0];
  lVar5 = lStack_d0;
  FUN_10274364c(lVar2,lStack_d0);
  func_0x00010442e758(0);
  func_0x000107c610f8();
  func_0x00010442e404();
  func_0x000100083b20(auStack_b0);
  uVar9 = auStack_b0[0];
  uVar11 = 0;
  func_0x00010442bbd4();
  func_0x000107c610f8();
  func_0x00010442ba58(uVar9,uVar11);
  func_0x000100083b20(auStack_b0);
  uVar11 = auStack_b0[0];
  *(undefined8 *)(lVar14 + -0x10) = 0;
  *(undefined8 *)(lVar14 + -8) = 0;
  lVar2 = alStack_120[4];
  lVar3 = alStack_120[3];
  lVar4 = lVar5;
  func_0x00010442d2a0(lVar5,alStack_120[4],alStack_120[3],alStack_120[2],uVar9,uVar10,plVar8,uVar11)
  ;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c6142c(uVar11);
  func_0x000100083b20(auStack_b0);
  func_0x000107c42c1c(auStack_b0[0]);
  func_0x000107c61170(auStack_b0[0]);
  func_0x000107c61428(puVar12,auStack_b0,0,0);
  uVar7 = *puVar12;
  func_0x000107c61174(uVar7);
  func_0x0001000aa0a8(puStack_e0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lStack_e8);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(alStack_120[1]);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar7);
  FUN_10275e420(lStack_c0,&SUB_100371f48);
  puStack_c8[3] = lStack_b8;
  puStack_c8[4] = &PTR_DAT_110545510;
  *puStack_c8 = plVar8;
  return;
}



/* Entry: 10275dbc4; end: 10275e21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10275dbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined8 *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long alStack_120 [5];
  undefined8 auStack_a8 [6];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000100371f48();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar10 - extraout_x12;
  lVar4 = 0;
  func_0x000100371f10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar14 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar15 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12_02;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebc518);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112ebc520;
  func_0x000107c61614(unaff_x20 + _DAT_112ebc520,0);
  alStack_120[4] = _DAT_112ebc528;
  func_0x000107c61614(unaff_x20 + _DAT_112ebc528,0);
  uVar6 = 0x112ebbcf0;
  func_0x0001000285a8(0x112ebbcf0,&UNK_10dad4c00);
  pcVar5 = FUN_10275e21c;
  func_0x00010072927c(FUN_10275e21c,0,uVar6);
  *(code **)(unaff_x20 + _DAT_112ebc530) = pcVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc538) = param_3;
  func_0x0001000285a8(0x112ebc540,&UNK_10dad6280);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  pcVar5 = FUN_10275e418;
  func_0x0001000823a8(FUN_10275e418,param_6);
  *(code **)(unaff_x20 + _DAT_112ebc548) = pcVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc550) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc558) = param_5;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000100083b20(lVar16);
  puVar2 = (undefined8 *)(lVar16 + *(int *)(lVar4 + 0x24));
  alStack_120[3] = puVar2[1];
  alStack_120[2] = *puVar2;
  func_0x000107c6157c(puVar2[1]);
  FUN_10275e420(lVar16,&SUB_100371f10);
  uVar6 = *puVar1;
  uVar12 = puVar1[1];
  puVar1[1] = alStack_120[3];
  *puVar1 = alStack_120[2];
  func_0x00010058d43c(uVar6,uVar12);
  func_0x000100083b20(lVar16);
  uVar6 = *(undefined8 *)(lVar16 + *(int *)(lVar4 + 0x18));
  func_0x000107c61174(uVar6);
  FUN_10275e420(lVar16,&SUB_100371f10);
  func_0x000107c61604(unaff_x20 + lVar3,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000100083b20(lVar16);
  uVar6 = *(undefined8 *)(lVar16 + *(int *)(lVar4 + 0x20));
  func_0x000107c61174(uVar6);
  FUN_10275e420(lVar16,&SUB_100371f10);
  func_0x000107c61604(unaff_x20 + alStack_120[4],uVar6);
  func_0x000107c61170(uVar6);
  puVar7 = auStack_78;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000100083b20(lVar16);
  FUN_10274364c(lVar16,lVar13);
  FUN_10275e420(lVar16,&SUB_100371f10);
  func_0x000100083b20(lVar17);
  uVar6 = *(undefined8 *)(lVar17 + *(int *)(lVar4 + 0x18));
  func_0x000107c61174();
  alStack_120[4] = uVar6;
  FUN_10275e420(lVar17,&SUB_100371f10);
  func_0x000100083b20(lVar15);
  alStack_120[2] = *(undefined8 *)(lVar15 + *(int *)(lVar4 + 0x1c));
  func_0x000107c615f0();
  FUN_10275e420(lVar15,&SUB_100371f10);
  func_0x000100083b20(puVar14);
  uVar8 = *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar4 + 0x20));
  alStack_120[1] = uVar8;
  func_0x000107c61174();
  FUN_10275e420(puVar14,&SUB_100371f10);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar14;
  func_0x000107c61174(uVar6);
  uVar9 = 0xd000000000000019;
  func_0x0001000a9a18(0xd000000000000019,0x800000010f0ba870);
  func_0x000107c61170(uVar6);
  func_0x000104432eb0(0);
  func_0x000107c610f8();
  *(undefined4 *)(lVar16 + -0xc) = 0;
  *(undefined1 *)(lVar16 + -0x10) = 0;
  lVar17 = 0;
  func_0x000104432720(0,0,0,0,0,1,4,0,0);
  alStack_120[0] = lVar17;
  func_0x000100083b20(auStack_a8);
  uVar6 = auStack_a8[0];
  func_0x000107c4323c(auStack_a8[0]);
  func_0x000107c615e8(uVar6);
  func_0x000100083b20(auStack_a8);
  uVar6 = auStack_a8[0];
  FUN_10274364c(lVar13,lVar10);
  func_0x00010442e758(0);
  func_0x000107c610f8();
  func_0x00010442e404();
  func_0x000100083b20(auStack_a8);
  uVar12 = auStack_a8[0];
  uVar11 = 0;
  func_0x00010442bbd4(0);
  func_0x000107c610f8();
  func_0x00010442ba58(uVar12,uVar11);
  func_0x000100083b20(auStack_a8);
  uVar11 = auStack_a8[0];
  *(undefined8 *)(lVar16 + -0x10) = 0;
  *(undefined8 *)(lVar16 + -8) = 0;
  lVar4 = alStack_120[4];
  lVar3 = alStack_120[2];
  lVar15 = lVar10;
  func_0x00010442d2a0(lVar10,alStack_120[4],alStack_120[2],alStack_120[1],uVar12,lVar17,puVar7,
                      uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c6142c(uVar11);
  func_0x000100083b20(auStack_a8);
  func_0x000107c42c1c(auStack_a8[0]);
  func_0x000107c61170(auStack_a8[0]);
  func_0x000107c61428(puVar14,auStack_a8,0,0);
  uVar6 = *puVar14;
  func_0x000107c61174(uVar6);
  func_0x0001000aa0a8(uVar9);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(alStack_120[0]);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar6);
  FUN_10275e420(lVar13,&SUB_100371f48);
  return puVar7;
}



/* Entry: 10275e21c; end: 10275e297;  */

void FUN_10275e21c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10275e298; end: 10275e417;  */

/* WARNING: Possible PIC construction at 0x00010275e3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275e3d4) */

void FUN_10275e298(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_71;
  long lStack_70;
  long lStack_68;
  
  FUN_102786400();
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    lVar8 = 0x20;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_71 = *(undefined1 *)(param_2 + lVar8);
      func_0x00010008a7c8(&lStack_70,&uStack_71);
      lVar2 = lStack_70;
      if (lStack_70 != 0) {
        func_0x000100083b20(&lStack_68);
        func_0x000107c61574(lVar2);
        lVar2 = lStack_68;
        if (lStack_68 != 0) {
          puVar4 = puVar5;
          func_0x000107c61550();
          if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
             (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar3 = puVar5;
              }
              func_0x000107c60480(puVar3);
            }
            puVar4 = (undefined *)0x0;
            func_0x0001024a29a8(0,puVar3 + 1,1,puVar5);
          }
          uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar6 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x0001024a29a8(puVar5,uVar1 + 1,1,puVar4);
            uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
          *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
          *param_1 = puVar5;
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10275e418; end: 10275e41f;  */

/* WARNING: Possible PIC construction at 0x00010275e3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275e3d4) */

void FUN_10275e418(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 uStack_71;
  long lStack_70;
  long lStack_68;
  
  FUN_102786400();
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 != 0) {
    lVar8 = 0x20;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_71 = *(undefined1 *)(unaff_x20 + lVar8);
      func_0x00010008a7c8(&lStack_70,&uStack_71);
      lVar2 = lStack_70;
      if (lStack_70 != 0) {
        func_0x000100083b20(&lStack_68);
        func_0x000107c61574(lVar2);
        lVar2 = lStack_68;
        if (lStack_68 != 0) {
          puVar4 = puVar5;
          func_0x000107c61550();
          if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
             (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar3 = puVar5;
              }
              func_0x000107c60480(puVar3);
            }
            puVar4 = (undefined *)0x0;
            func_0x0001024a29a8(0,puVar3 + 1,1,puVar5);
          }
          uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar6 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x0001024a29a8(puVar5,uVar1 + 1,1,puVar4);
            uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
          *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
          *param_1 = puVar5;
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x20);
  return;
}



/* Entry: 10275e420; end: 10275e45b;  */

undefined8 FUN_10275e420(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10275e45c; end: 10275e657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275e45c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 *apuStack_48 [3];
  
  func_0x000100083b20(apuStack_48);
  puVar1 = apuStack_48[0];
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(apuStack_48[0]);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61170();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar2 = *puVar1;
    func_0x000107c61174(uVar2);
    func_0x0001008cf6c0(0xd00000000000001c,0x800000010f0ba890);
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&uStack_50);
    uVar2 = uStack_50;
    uVar6 = uStack_50;
    func_0x000107c4ffe8(uStack_50);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar6);
    lVar3 = unaff_x20 + _DAT_112ebc520;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5dee4();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        func_0x000107c61170(lVar5);
        func_0x000100083b20(&uStack_50);
        func_0x000107c4e2ec(lVar3);
        func_0x000107c5bb50(uStack_50);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(uStack_50);
      }
    }
    lVar3 = unaff_x20 + _DAT_112ebc528;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c49eac();
      if ((int)lVar4 != 0) {
        func_0x000107c550d8(lVar3);
      }
      func_0x000107c61170(lVar3);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebc518);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = puVar1[1];
      func_0x000107c6157c(uVar2);
      (*pcVar7)();
      func_0x00010058d43c(pcVar7,uVar2);
      uVar2 = *puVar1;
    }
    uVar6 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar2,uVar6);
  }
  return;
}



/* Entry: 10275e658; end: 10275e69f; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterWillBeginPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275e658(long param_1)

{
  param_1 = param_1 + _DAT_112ebc528;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10275e6a0; end: 10275e6a3; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_10275e6a0(void)

{
  return;
}



/* Entry: 10275e6a4; end: 10275e6a7; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_10275e6a4(void)

{
  return;
}



/* Entry: 10275e6a8; end: 10275e6ab; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterDidCancelDismissing:] */

void FUN_10275e6a8(void)

{
  return;
}



/* Entry: 10275e6ac; end: 10275e6af; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_10275e6ac(void)

{
  return;
}



/* Entry: 10275e6b0; end: 10275e6b3; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterDidFailToPresent:] */

void FUN_10275e6b0(void)

{
  return;
}



/* Entry: 10275e6b4; end: 10275e6fb; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275e6b4(long param_1)

{
  param_1 = param_1 + _DAT_112ebc528;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10275e6fc; end: 10275e723; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenterDidTearDown:] */

void FUN_10275e6fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10275e45c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10275e724; end: 10275e76b; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_10275e724(void)

{
  undefined8 in_x3;
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(in_x3);
  func_0x000107c60234(auStack_40,in_x3);
  func_0x000107c615e8(in_x3);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 10275e76c; end: 10275e7db; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10275e76c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(in_x3);
  func_0x000107c615f0(in_x4);
  func_0x000107c60234(auStack_40,in_x3);
  func_0x000107c615e8(in_x3);
  func_0x000107c60234(auStack_60,in_x4);
  func_0x000107c615e8(in_x4);
  func_0x000100183ab8(auStack_60);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 10275e7dc; end: 10275e83b; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter init] */

void FUN_10275e7dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionImplementation.MemTwoOperaSessionPresenter",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10275e808);
  (*pcVar1)();
}



/* Entry: 10275e83c; end: 10275e8f7; -[_TtC32MemTwoOperaSessionImplementation27MemTwoOperaSessionPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275e83c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc530));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc538));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc548));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc550));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc558));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112ebc518),
                      ((undefined8 *)(param_1 + _DAT_112ebc518))[1]);
  func_0x0001012a9c58(param_1 + _DAT_112ebc520);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ebc528);
  return;
}



/* Entry: 10275e8f8; end: 10275e907;  */

undefined1  [16] FUN_10275e8f8(void)

{
  return ZEXT816(0x110545530);
}



/* Entry: 10275e908; end: 10275e927;  */

void FUN_10275e908(void)

{
  func_0x000107c61168(&PTR_PTR_11285f930);
  return;
}



/* Entry: 10275e928; end: 10275ebaf;  */

undefined * FUN_10275e928(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10275ea6c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112ebc588;
    func_0x0001000285a8(0x112ebc588,&UNK_10dad6300);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ebc590;
    func_0x0001000285a8(0x112ebc590,&UNK_10dad6308);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10275ebb0; end: 10275ebb3;  */

/* WARNING: Possible PIC construction at 0x00010275e3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275e3d4) */

void FUN_10275ebb0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 uStack_71;
  long lStack_70;
  long lStack_68;
  
  FUN_102786400();
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 != 0) {
    lVar8 = 0x20;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_71 = *(undefined1 *)(unaff_x20 + lVar8);
      func_0x00010008a7c8(&lStack_70,&uStack_71);
      lVar2 = lStack_70;
      if (lStack_70 != 0) {
        func_0x000100083b20(&lStack_68);
        func_0x000107c61574(lVar2);
        lVar2 = lStack_68;
        if (lStack_68 != 0) {
          puVar4 = puVar5;
          func_0x000107c61550();
          if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
             (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar3 = puVar5;
              }
              func_0x000107c60480(puVar3);
            }
            puVar4 = (undefined *)0x0;
            func_0x0001024a29a8(0,puVar3 + 1,1,puVar5);
          }
          uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar6 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x0001024a29a8(puVar5,uVar1 + 1,1,puVar4);
            uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
          *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
          *param_1 = puVar5;
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x20);
  return;
}



/* Entry: 10275ebb4; end: 10275ebff;  */

void FUN_10275ebb4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc598,&UNK_10dad6310);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10275ec00,param_1);
  return;
}



/* Entry: 10275ec00; end: 10275eca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275ec00(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_1130781a8);
  lVar1 = lVar2;
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c40988();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      goto LAB_10275ec90;
    }
  }
  lVar1 = 0;
LAB_10275ec90:
  *param_1 = lVar1;
  return;
}



/* Entry: 10275eca8; end: 10275ecb7;  */

undefined1  [16] FUN_10275eca8(void)

{
  return ZEXT816(0x110545600);
}



/* Entry: 10275ecb8; end: 10275ed4f;  */

void FUN_10275ecb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc5a0,&UNK_10dad6380);
  puVar1 = &UNK_1105456c8;
  func_0x000107c613fc(&UNK_1105456c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10275ee48,puVar1);
  return;
}



/* Entry: 10275ed50; end: 10275ee47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275ed50(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar2 = param_2;
  FUN_102763470();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ebc5a8) = 0;
  lVar1 = _DAT_112ebc5b0;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  func_0x000107c61614(lVar3 + _DAT_112ebc5b8,0);
  func_0x000107c61614(lVar3 + _DAT_112ebc5c0,0);
  *(long *)(lVar3 + _DAT_112ebc5c8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ebc5d0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ebc5d8) = param_4;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 10275ee48; end: 10275ee53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275ee48(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar7 = &lStack_60;
  lVar4 = lVar1;
  FUN_102763470();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ebc5a8) = 0;
  lVar3 = _DAT_112ebc5b0;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar8);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(lVar5 + lVar3) = puVar6;
  func_0x000107c61614(lVar5 + _DAT_112ebc5b8,0);
  func_0x000107c61614(lVar5 + _DAT_112ebc5c0,0);
  *(long *)(lVar5 + _DAT_112ebc5c8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ebc5d0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ebc5d8) = uVar8;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 10275ee54; end: 10275ef1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275ee54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebc5a8) = 0;
  lVar1 = _DAT_112ebc5b0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61614(unaff_x20 + _DAT_112ebc5b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ebc5c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebc5c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc5d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc5d8) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10275ef20; end: 10275f1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275ef20(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long alStack_b0 [2];
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0x112ebc640;
  func_0x0001000285a8(0x112ebc640,&UNK_10dad6460);
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)auStack_80 + (-0x20 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar19 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  lVar17 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar19 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar15 - extraout_x12;
  lVar4 = unaff_x20 + _DAT_112ebc5b8;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c615e8();
    lVar4 = _DAT_112ebc5a8;
    if (*(long *)(unaff_x20 + _DAT_112ebc5a8) == 0) {
      func_0x0001048580f8(auStack_80);
      func_0x000107c5eec4(lVar19);
      uStack_70 = auStack_80[0];
      lStack_68 = lVar19;
      (**(code **)(lVar13 + 0x68))
                (lVar18,*(undefined4 *)
                         PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
                 ,lVar1);
      func_0x000107c5fd48(lVar9,PTR___sSSN_11034da80,lVar18,FUN_102763518,auStack_80,
                          PTR___sSSN_11034da80);
      func_0x000107c61574(auStack_80[0]);
      (**(code **)(lVar11 + 8))(lVar19,lVar2);
      puVar5 = &UNK_110545780;
      func_0x000107c613fc(&UNK_110545780,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,unaff_x20);
      (**(code **)(lVar17 + 0x10))(lVar15,lVar9,lVar3);
      uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
      uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
      uVar14 = lVar16 + uVar12 + 7 & 0xfffffffffffffff8;
      puVar6 = &UNK_1105457a8;
      func_0x000107c613fc(&UNK_1105457a8,uVar14 + 8,uVar10 | 7);
      (**(code **)(lVar17 + 0x20))(puVar6 + uVar12,lVar15,lVar3);
      *(undefined **)(puVar6 + uVar14) = puVar5;
      *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar7 = 0xc1;
      func_0x000100859150(0xc1,0,0x48,4,0,0,&UNK_10dad6478,puVar6);
      func_0x000107c61574(puVar6);
      (**(code **)(lVar17 + 8))(lVar9,lVar3);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
      *(undefined8 *)(unaff_x20 + lVar4) = uVar7;
      func_0x000107c61574(uVar8);
    }
  }
  return;
}



/* Entry: 10275f1dc; end: 10275f277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275f1dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebc5a8);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar2,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10275f278; end: 10275f327; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275f278(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112ebc5a8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar3);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,PTR___sytN_11034f1b0 + 8,uVar2,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10275f328; end: 10275f3af; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010275f394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275f398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10275f328(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc5d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc5c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc5d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc5a8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebc5b0));
  param_1 = param_1 + _DAT_112ebc5b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10275f3b0; end: 10275f3b7; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_10275f3b0(void)

{
  return 1;
}



/* Entry: 10275f3b8; end: 10275f48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10275f3b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c615f0();
    func_0x000100083b20(auStack_78);
    uVar2 = uStack_60;
    func_0x0001000a8868(auStack_78,uStack_60);
    lVar1 = param_1;
    func_0x000107c3b9ac(param_1);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    (**(code **)(lStack_58 + 0x20))(lVar3,uVar2,uStack_60,lStack_58);
    func_0x000107c6142c(uVar2);
    func_0x000107c615e8(param_1);
    FUN_102763490(auStack_78);
  }
  return lVar3;
}



/* Entry: 10275f48c; end: 10275f497; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource dataModelFor:] */

void FUN_10275f48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10275f3b8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10275f498; end: 10275f56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10275f498(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c615f0();
    func_0x000100083b20(auStack_78);
    uVar2 = uStack_60;
    func_0x0001000a8868(auStack_78,uStack_60);
    lVar1 = param_1;
    func_0x000107c3b9ac(param_1);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    (**(code **)(lStack_58 + 0x18))(lVar3,uVar2,uStack_60,lStack_58);
    func_0x000107c6142c(uVar2);
    func_0x000107c615e8(param_1);
    FUN_102763490(auStack_78);
  }
  return lVar3;
}



/* Entry: 10275f56c; end: 10275f577; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource dataModelForGroup:] */

void FUN_10275f56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10275f498(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10275f578; end: 10275f5d7;  */

void FUN_10275f578(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10275f5d8; end: 10275f8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275f5d8(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c444d0();
  func_0x000107c61180();
  func_0x000100083b20(&uStack_88);
  lVar11 = lStack_68;
  uVar8 = uStack_70;
  uVar10 = uStack_70;
  func_0x0001000a8868(&uStack_88,uStack_70);
  lVar4 = lVar3;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  (**(code **)(lVar11 + 0x18))(lVar5,uVar10,uVar8,lVar11);
  func_0x000107c6142c(uVar10);
  if (lVar5 == 0) {
    FUN_102763490(&uStack_88);
    func_0x000107c5d364(param_1);
    func_0x000107c615e8(lVar3);
  }
  else {
    FUN_102763490(&uStack_88);
    uVar12 = *(ulong *)(lVar5 + _DAT_112ebd970);
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar14 = uVar12;
      }
      func_0x000107c60480();
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 != 0) {
      func_0x000107c61434(uVar12);
      FUN_102761580(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10275f8f8);
        (*pcVar2)();
      }
      uVar15 = 0;
      do {
        if ((uVar12 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar12 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar15;
          func_0x00010275c7bc(uVar15,uVar12);
        }
        uStack_78 = *(undefined8 *)(uVar6 + _DAT_112ebd9d0);
        uVar8 = ((undefined8 *)(uVar6 + _DAT_112ebd9d0))[1];
        uStack_88 = 0xd000000000000017;
        uStack_80 = 0x800000010f0ba8f0;
        lStack_68 = 0;
        uStack_70 = uVar8;
        func_0x0001044443ac(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar8);
        puVar7 = &uStack_88;
        func_0x000104443a10();
        func_0x000107c61170(uVar6);
        uVar6 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
          FUN_102761580(1 < *(ulong *)(puVar1 + 0x18),uVar6 + 1,1);
        }
        uVar15 = uVar15 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar6 + 1;
        *(undefined8 **)(puVar1 + uVar6 * 8 + 0x20) = puVar7;
      } while (uVar14 != uVar15);
      func_0x000107c6142c(uVar12);
    }
    lVar11 = ((undefined8 *)(lVar5 + _DAT_112ebd9a0))[1];
    if (lVar11 == 0) {
      uVar8 = 0;
      func_0x0001044443ac(0);
      puVar13 = puVar1;
      func_0x000107c5fc48(puVar1,uVar8);
      func_0x000107c6142c(puVar1);
      func_0x000107c505d4(param_1);
    }
    else {
      puVar13 = *(undefined **)(lVar5 + _DAT_112ebd9a0);
      uVar8 = 0;
      func_0x0001044443ac(0);
      func_0x000107c61434(lVar11);
      puVar9 = puVar1;
      func_0x000107c5fc48(puVar1,uVar8);
      func_0x000107c6142c(puVar1);
      func_0x000107c5fadc(puVar13,lVar11);
      func_0x000107c6142c(lVar11);
      func_0x000107c505d8(param_1);
      func_0x000107c61170(puVar9);
    }
    func_0x000107c61170(puVar13);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 10275f8f8; end: 10275f903; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_10275f8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10275f5d8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10275f904; end: 10275f9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275f904(long param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000102788508(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 == 0) {
    (*param_2)();
  }
  else {
    func_0x000107c61174(param_1);
    func_0x0001048580f8(&uStack_48);
    FUN_1027643d4(lVar2);
    func_0x000107c61574(uStack_48);
    func_0x000104445474(0);
    func_0x000107c610f8();
    func_0x000104445498(lVar2,0);
    (*param_2)();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10275f9d8; end: 10275fa43; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource pageDataForDataModel:completion:] */

void FUN_10275f9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10275f904(param_3,0x1027634c4,auStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10275fa44; end: 10275fd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275fa44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(auStack_88);
  uVar2 = uStack_70;
  func_0x0001000a8868(auStack_88,uStack_70);
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  (**(code **)(lStack_68 + 0x20))(lVar1,uVar2,uStack_70,lStack_68);
  func_0x000107c6142c(uVar2);
  if (lVar1 == 0) {
    FUN_102763490(auStack_88);
  }
  else {
    FUN_102763490(auStack_88);
    if (*(long *)(lVar1 + _DAT_112ebd9f0 + 8) == 0) {
      FUN_10275fd98(lVar1,param_2,param_3,param_4,param_5);
    }
    else {
      func_0x00010275fb78(lVar1,param_4,param_5);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10275fd98; end: 10276004b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275fd98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  undefined8 auStack_d8 [5];
  undefined8 auStack_b0 [8];
  
  lVar4 = _DAT_112ebc5b0;
  plVar1 = (long *)(param_2 + _DAT_112ebd9d0);
  func_0x000107c61428(unaff_x20 + _DAT_112ebc5b0,auStack_b0,0x20,0);
  lVar11 = *(long *)(unaff_x20 + lVar4);
  lVar2 = *plVar1;
  uVar3 = plVar1[1];
  if (*(long *)(lVar11 + 0x10) != 0) {
    func_0x000107c61434(lVar11);
    lVar5 = lVar2;
    uVar10 = uVar3;
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
      puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x38) + lVar5 * 8);
      func_0x000107c6157c(puVar12);
      func_0x000107c614a8(auStack_b0);
      func_0x000107c6142c(lVar11);
      func_0x000107c5fd50(puVar12,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                          PTR___ss5NeverOs5ErrorsWP_11034ee90);
      func_0x000107c61574();
      goto LAB_10275fe8c;
    }
    func_0x000107c6142c(lVar11);
  }
  puVar12 = auStack_b0;
  func_0x000107c614a8();
LAB_10275fe8c:
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar12;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000021;
  func_0x000100029b28(0xd000000000000021,0x800000010f0ba960);
  func_0x000107c61170(uVar6);
  func_0x000107c60734();
  puVar8 = &UNK_110545780;
  func_0x000107c613fc(&UNK_110545780,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  func_0x000107c61434(uVar3);
  func_0x000100083b20(auStack_b0);
  FUN_102753424(auStack_b0,auStack_d8);
  puVar9 = &UNK_110545820;
  func_0x000107c613fc(&UNK_110545820,0x78,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar7;
  *(long *)(puVar9 + 0x18) = param_2;
  FUN_102753424(auStack_d8,puVar9 + 0x20);
  *(undefined8 *)(puVar9 + 0x48) = param_3;
  *(undefined8 *)(puVar9 + 0x50) = param_4;
  *(undefined8 *)(puVar9 + 0x58) = param_5;
  *(undefined8 *)(puVar9 + 0x60) = param_6;
  *(undefined **)(puVar9 + 0x68) = puVar8;
  *(undefined8 *)(puVar9 + 0x70) = param_1;
  func_0x000107c61174(param_2);
  func_0x000100d043a4(param_3,param_4);
  func_0x000100d043a4(param_5,param_6);
  uVar6 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad64c0,puVar9,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar9);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_b0,0x21,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61558(uVar7);
  auStack_d8[0] = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
  func_0x000102768548(uVar6,lVar2,uVar3,uVar7);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + lVar4) = auStack_d8[0];
  func_0x000107c614a8(auStack_b0);
  return;
}



/* Entry: 10276004c; end: 102760147; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_10276004c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_110545758;
    func_0x000107c613fc(&UNK_110545758,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x1027634b8;
  }
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar4 = &UNK_110545730;
    func_0x000107c613fc(&UNK_110545730,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    uVar3 = 0x1027634b0;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10275fa44(param_3,uVar1,puVar2,uVar3,puVar4);
  func_0x000100d04250(uVar3,puVar4);
  func_0x000100d04250(uVar1,puVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102760148; end: 1027601a7;  */

void FUN_102760148(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1027601a8; end: 10276023b;  */

void FUN_1027601a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027635f4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276023c,uVar2,uVar3);
  return;
}



/* Entry: 10276023c; end: 1027602f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10276023c(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  uVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5fd5c();
    if ((uVar2 & 1) == 0) {
      pcVar5 = *(code **)(unaff_x22 + 0x38);
      if (pcVar5 != (code *)0x0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
        FUN_1027631cc(uVar4);
        (*pcVar5)(0,0,uVar4);
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x0001048580f8(unaff_x22 + 0x28);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      FUN_102764664(uVar6);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61170(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027602f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027602f8; end: 102760333;  */

void FUN_1027602f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102760330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102760334; end: 1027603d3;  */

void FUN_102760334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined8 *)(unaff_x22 + 0x138) = param_9;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  *(undefined8 *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x100) = param_2;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027635f4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x148) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027603d4,uVar2,uVar3);
  return;
}



/* Entry: 1027603d4; end: 102760497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027603d4(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x110);
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x108) + _DAT_112ebd9d0);
  uVar8 = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar8;
  uVar9 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x160) = uVar9;
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar3);
  FUN_102787314();
  *(long *)(unaff_x22 + 0x168) = lVar5;
  piVar7 = *(int **)(lVar4 + 8);
  iVar2 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x170) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102760498;
                    /* WARNING: Could not recover jumptable at 0x000102760494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar7))(lVar5,uVar8,uVar9,0,uVar3,lVar4);
  return;
}



/* Entry: 102760498; end: 1027604eb;  */

void FUN_102760498(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0xf0) = param_1;
  *(long **)(lVar2 + 0xe8) = unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x168);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1027604ec,*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
  return;
}



/* Entry: 1027604ec; end: 10276077f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027604ec(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if (((ulong)param_1 & 1) == 0) {
    if (*(char *)(unaff_x22 + 0xf0) == '\x01') {
      if (*(code **)(unaff_x22 + 0x118) != (code *)0x0) {
        (**(code **)(unaff_x22 + 0x118))();
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar11 = *(long *)(unaff_x22 + 0x110);
      func_0x0001000298f0();
      *(undefined8 **)(unaff_x22 + 0x178) = param_1;
      func_0x000107c61428();
      uVar8 = *param_1;
      func_0x000107c61174(uVar8);
      uVar12 = 0xd000000000000029;
      func_0x000100029b28(0xd000000000000029,0x800000010f0ba990);
      *(undefined8 *)(unaff_x22 + 0x180) = uVar12;
      func_0x000107c61170(uVar8);
      uVar12 = *(undefined8 *)(lVar11 + 0x18);
      lVar3 = *(long *)(lVar11 + 0x20);
      func_0x0001000a8868(lVar11,uVar12);
      FUN_102787314();
      *(long *)(unaff_x22 + 0x188) = lVar11;
      uVar8 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      puVar5 = PTR_PTR_1126b1060;
      func_0x000107c610f8();
      func_0x000107c5fc48(uVar8,PTR___sSSN_11034da80);
      func_0x000107c47d08();
      *(undefined **)(unaff_x22 + 400) = puVar5;
      func_0x000107c61170(uVar8);
      piVar9 = *(int **)(lVar3 + 0x10);
      iVar1 = *piVar9;
      plVar6 = (long *)(ulong)(uint)piVar9[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x198) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_102760780;
                    /* WARNING: Could not recover jumptable at 0x000102760688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar9))
                (lVar11,*(undefined8 *)(unaff_x22 + 0x158),uVar10,0,puVar5,uVar12,lVar3);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
    lVar11 = *(long *)(unaff_x22 + 0x138);
    func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x88,0,0);
    puVar4 = (undefined8 *)(lVar11 + 0x10);
    func_0x000107c61618();
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = puVar4;
      func_0x000107c5fd5c();
      if (((ulong)puVar7 & 1) == 0) {
        lVar11 = *(long *)(unaff_x22 + 0x128);
        func_0x000107c60734();
        if (lVar11 != 0) {
          pcVar2 = *(code **)(unaff_x22 + 0x128);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
          FUN_1027631cc(uVar8);
          (*pcVar2)(0,0,uVar8);
        }
        uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
        func_0x0001048580f8(unaff_x22 + 0xf8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
        FUN_102764664(uVar12);
        func_0x000107c61574(uVar8);
      }
      func_0x000107c61170();
    }
  }
  else {
    puVar4 = *(undefined8 **)(unaff_x22 + 0x140);
    func_0x000107c61574();
  }
  func_0x0001000298f0();
  uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61428();
  uVar8 = *puVar4;
  func_0x000107c61174(uVar8);
  func_0x000100069b5c(uVar12);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010276077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102760780; end: 1027607f3;  */

void FUN_102760780(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 400);
  uVar3 = *(undefined8 *)(lVar4 + 0x188);
  *(long *)(lVar4 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x198));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1027607f4;
  }
  else {
    pcVar2 = FUN_102760930;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar4 + 0x148),*(undefined8 *)(lVar4 + 0x150));
  return;
}



/* Entry: 1027607f4; end: 10276092f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027607f4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61428(puVar3,unaff_x22 + 0x70,0,0);
  uVar2 = *puVar3;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar2);
  lVar6 = *(long *)(unaff_x22 + 0x138);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x88,0,0);
  puVar3 = (undefined8 *)(lVar6 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5fd5c();
    if (((ulong)puVar4 & 1) == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x128);
      func_0x000107c60734();
      if (lVar6 != 0) {
        pcVar1 = *(code **)(unaff_x22 + 0x128);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
        FUN_1027631cc(uVar5);
        (*pcVar1)(0,0,uVar5);
      }
      uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
      func_0x0001048580f8(unaff_x22 + 0xf8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
      FUN_102764664(uVar2);
      func_0x000107c61574(uVar5);
    }
    func_0x000107c61170();
  }
  func_0x0001000298f0();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61428();
  uVar5 = *puVar3;
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010276092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102760930; end: 102760a23;  */

void FUN_102760930(void)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  puVar1 = *(ulong **)(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174();
  func_0x000100069b5c(uVar3);
  func_0x000107c61170();
  func_0x000107c5fd5c();
  if ((uVar2 & 1) == 0) {
    lVar4 = unaff_x22 + 0x40;
    pcVar7 = *(code **)(unaff_x22 + 0x128);
    if (pcVar7 != (code *)0x0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
      func_0x000107c614b0(uVar3);
      (*pcVar7)(2,uVar3,0);
      func_0x000107c614ac(uVar3);
    }
  }
  else {
    lVar4 = unaff_x22 + 0x58;
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a0));
  puVar5 = *(undefined8 **)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61428(puVar5,lVar4,0,0);
  uVar3 = *puVar5;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar6);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102760a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102760a24; end: 102760baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102760a24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c61428(unaff_x20 + _DAT_112ebc5b0,auStack_78,0x21,0);
  FUN_1027617d4(lVar2,param_2);
  func_0x000107c614a8(auStack_78);
  func_0x000107c6142c(param_2);
  if (lVar2 != 0) {
    func_0x000107c5fd50(lVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(lVar2);
  }
  func_0x000100083b20(auStack_78);
  uVar3 = uStack_60;
  func_0x0001000a8868(auStack_78,uStack_60);
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  (**(code **)(lStack_58 + 0x20))(lVar1,uVar3,uStack_60,lStack_58);
  func_0x000107c6142c(uVar3);
  if (lVar1 == 0) {
    FUN_102763490(auStack_78);
  }
  else {
    FUN_102763490(auStack_78);
    func_0x0001048580f8(auStack_78);
    FUN_102764da0(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(auStack_78[0]);
  }
  return;
}



/* Entry: 102760bb0; end: 102760bbb; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource removeMediaForItem:] */

void FUN_102760bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102760a24(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102760bbc; end: 102760c0f;  */

void FUN_102760bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102760c10; end: 102760c9b; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource canResolvePlaylistItemGroupDataModel:] */

void FUN_102760c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  func_0x000100102924(auStack_40,auStack_60);
  uVar1 = 0;
  FUN_102787194(0);
  puVar2 = &uStack_68;
  func_0x000107c6147c(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if ((int)puVar2 != 0) {
    func_0x000107c61170(uStack_68);
  }
  return;
}



/* Entry: 102760c9c; end: 102760d0b; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource playlistItemGroupModelForDataModel:] */

void FUN_102760c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [32];
  
  puVar1 = auStack_40;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  FUN_102763380(auStack_40);
  func_0x000107c61170(param_1);
  FUN_102763490(auStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102760d0c; end: 102760dcf;  */

void FUN_102760d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  lVar5 = 0x112ebc650;
  func_0x0001000285a8(0x112ebc650,&UNK_10dad6480);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  uVar4 = 0x112d45220;
  FUN_1027635f4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102760dd0,uVar3,uVar4);
  return;
}



/* Entry: 102760dd0; end: 102760e67;  */

void FUN_102760dd0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102760e68;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x28,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 102760e68; end: 102760eab;  */

void FUN_102760e68(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102760eac,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Entry: 102760eac; end: 10276102b;  */

/* WARNING: Removing unreachable block (ram,0x000102760ee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102760eac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102760f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  lVar3 = *(long *)(unaff_x22 + 0x40) + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3 + _DAT_112ebc5b8;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5fadc(uVar5,lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c4e9d0(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(lVar4);
      goto LAB_102760fdc;
    }
  }
  func_0x000107c6142c(lVar1);
LAB_102760fdc:
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10276102c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 10276102c; end: 10276106f;  */

void FUN_10276102c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102761070,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Entry: 102761070; end: 1027611ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102761070(void)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_102761110:
                    /* WARNING: Could not recover jumptable at 0x000102761128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c5fd64();
  *(long *)(unaff_x22 + 0x80) = lVar6;
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c6142c(lVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_102761110;
  }
  lVar6 = *(long *)(unaff_x22 + 0x40) + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar3 = lVar6 + _DAT_112ebc5b8;
    func_0x000107c61618();
    func_0x000107c61170(lVar6);
    if (lVar3 != 0) {
      func_0x000107c5fadc(uVar4,lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c4e9d0(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(lVar3);
      goto LAB_1027611a0;
    }
  }
  func_0x000107c6142c(lVar1);
LAB_1027611a0:
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10276102c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 1027611f0; end: 10276121b; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation28MemTwoOperaSessionDataSource init] */

void FUN_1027611f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionDataSourcePluginImplementation.MemTwoOperaSessionDataSource"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10276121c);
  (*pcVar1)();
}



/* Entry: 10276121c; end: 10276135f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10276121c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ebc5c0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5d1b4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102761360; end: 1027613a7;  */

void FUN_102761360(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1027613a8);
  (*pcVar3)();
}



/* Entry: 1027613a8; end: 10276142f;  */

void FUN_1027613a8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  FUN_10276adc8();
  FUN_1027634d4(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102761430);
  (*pcVar2)();
}



/* Entry: 102761430; end: 1027614f3;  */

void FUN_102761430(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0x112ebc618;
  func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_3,lVar2);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027614f4);
  (*pcVar1)();
}



/* Entry: 1027614f4; end: 10276157f;  */

void FUN_1027614f4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10276153c);
  (*pcVar3)();
}



/* Entry: 102761580; end: 10276159b;  */

void FUN_102761580(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10276159c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10276159c; end: 1027616bf;  */

undefined * FUN_10276159c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027616c0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102763dc4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001044443ac(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1027616c0; end: 1027617bf;  */

undefined * FUN_1027616c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027617c0);
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
    puVar3 = (undefined *)0x112ebc660;
    func_0x0001000285a8(0x112ebc660,&UNK_10dad6540);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}


