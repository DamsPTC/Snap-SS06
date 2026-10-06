/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016b08b0; end: 1016b0943; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_1016b08b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    func_0x000107c5fc54(param_4,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b1f94(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b0944; end: 1016b09f7; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_1016b0944(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b11f8();
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000103ee3360(0);
    uVar2 = 0;
    func_0x000103edff64(0,0xe000000000000000,0,0xe000000000000000,
                        PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar3 = 0;
    FUN_1016b2b60(0);
    func_0x000107c610f8();
    func_0x0001016b2408(uVar2,uVar3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016b09f8; end: 1016b0b4f; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1016b09f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b1394();
  if (param_3 == 0) {
    func_0x000107c61170(lVar2);
    lVar2 = 0;
  }
  else {
    func_0x000107c61170();
    uVar1 = 0;
    FUN_1016b2b60(0);
    func_0x000107c610f8();
    func_0x0001016b2408(lVar2,uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b0b50; end: 1016b0b83; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl isStickerTypeEnabled] */

uint FUN_1016b0b50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001016b0a84();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016b0b84; end: 1016b0c0b; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016b0b84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_11302ecd0);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  uVar1 = uVar2;
  func_0x000107c4a3e4(uVar2);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1016b0c0c; end: 1016b0c67; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_1016b0c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b2020(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b0c68; end: 1016b0c6f; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1016b0c68(void)

{
  return 1;
}



/* Entry: 1016b0c70; end: 1016b0cd3; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl ctpItemsForTestingInTarget:] */

void FUN_1016b0c70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001016b21c4();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1016b231c(0,0x112d4ede0,&PTR_PTR_1126baa60);
    lVar2 = param_3;
    func_0x000107c5fc48(param_3,uVar1);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b0cd4; end: 1016b0cdb; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl shouldDisplayValdiEditingViewForItemInstance:] */

undefined8 FUN_1016b0cd4(void)

{
  return 1;
}



/* Entry: 1016b0cdc; end: 1016b0d53;  */

void FUN_1016b0cdc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1016b231c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1016b0d54; end: 1016b0e7b;  */

ulong FUN_1016b0d54(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b0e7c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1016b0e7c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b0e78);
      (*pcVar1)();
    }
    FUN_1016b0f1c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1016b0e7c; end: 1016b0f1b;  */

undefined * FUN_1016b0e7c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112dc0130;
    FUN_1016b0cdc(0x112dc0130,&PTR_PTR_1126afad0,0x112dc0138,&UNK_10d97c290);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1016b0f1c; end: 1016b1033;  */

long FUN_1016b0f1c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1030);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1034);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1016b231c(0,0x112dc0130,&PTR_PTR_1126afad0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1016b231c(0,0x112dc0130,&PTR_PTR_1126afad0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b102c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1016b1034; end: 1016b152b;  */

ulong FUN_1016b1034(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b1118);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b111c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126afad0;
    func_0x000107c61168(PTR_PTR_1126afad0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126afad0;
    func_0x000107c61168(PTR_PTR_1126afad0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016b231c(0,0x112dc0130,&PTR_PTR_1126afad0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b11f8);
  (*pcVar2)();
}



/* Entry: 1016b152c; end: 1016b1aef;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1016b152c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined *apuStack_80 [4];
  
  func_0x000107c61174();
  lVar4 = param_1;
  func_0x000107c4a764();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1ae0);
    (*pcVar3)();
  }
  lVar15 = lVar4;
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1ae4);
    (*pcVar3)();
  }
  lVar4 = lVar15;
  func_0x000107c453b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1ae8);
    (*pcVar3)();
  }
  lVar15 = lVar4;
  func_0x000107c5d0f0();
  func_0x000107c61170(lVar4);
  if ((int)lVar15 == 0x1b) {
    lVar4 = param_1;
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1aec);
      (*pcVar3)();
    }
    lVar15 = lVar4;
    func_0x000107c453bc();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1af0);
      (*pcVar3)();
    }
    lVar4 = lVar15;
    func_0x000107c5a9a4();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    func_0x000107c61170(param_1);
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126a7898;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar15 = lVar4;
      func_0x000107c5a998(lVar4);
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c59088(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar15);
      func_0x000107c61170(puVar7);
      lVar15 = lVar4;
      func_0x000107c4f4c8(lVar4);
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c57958(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar15);
      func_0x000107c61170(puVar7);
      lVar15 = lVar4;
      func_0x000107c4f16c();
      func_0x000107c61180();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar13 = PTR___sypN_11034f1a8;
      if (lVar15 == 0) {
        lVar15 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        apuStack_80[0] = (undefined *)0x0;
        func_0x000107c5fc50();
        func_0x000107c61170(lVar15);
        puVar16 = puVar7;
        if (apuStack_80[0] != (undefined *)0x0) {
          puVar16 = apuStack_80[0];
        }
        lVar15 = *(long *)(puVar16 + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      puVar17 = puVar16;
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
      if (lVar15 == 0) {
        func_0x000107c6142c(puVar16);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        do {
          func_0x0001000bb420(puVar17 + 0x20,apuStack_80);
          func_0x000100102924(apuStack_80,auStack_a8);
          uVar8 = 0;
          FUN_1016b231c(0,0x112dc0130,&PTR_PTR_1126afad0);
          plVar9 = &lStack_88;
          func_0x000107c6147c(plVar9,auStack_a8,puVar13 + 8,uVar8,6);
          lVar2 = lStack_88;
          if ((((ulong)plVar9 & 1) != 0) && (lStack_88 != 0)) {
            puVar7 = puVar10;
            func_0x000107c61550();
            if (((int)puVar7 == 0) ||
               (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar10 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar10) {
                  puVar6 = puVar10;
                }
                func_0x000107c60480(puVar6);
              }
              puVar7 = (undefined *)0x0;
              FUN_1016b0d54(0,puVar6 + 1,1,puVar10);
            }
            uVar14 = (ulong)puVar7 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar14 + 0x10);
            puVar10 = puVar7;
            if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
              FUN_1016b0d54(puVar10,uVar1 + 1,1,puVar7);
              uVar14 = (ulong)puVar10 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
            *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar2;
          }
          lVar15 = lVar15 + -1;
          puVar17 = puVar17 + 0x20;
        } while (lVar15 != 0);
        func_0x000107c6142c(puVar16);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar16 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar16 = puVar10;
        }
        func_0x000107c60480();
      }
      if (puVar16 == (undefined *)0x0) {
        func_0x000107c6142c(puVar10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        apuStack_80[0] = puVar7;
        func_0x000100403514(0,(ulong)puVar16 & ((long)puVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016b1adc);
          (*pcVar3)();
        }
        puVar17 = (undefined *)0x0;
        do {
          puVar7 = apuStack_80[0];
          if (((ulong)puVar10 & 0xc000000000000001) == 0) {
            puVar6 = *(undefined **)(puVar10 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar6 = puVar17;
            FUN_1016b1034(puVar17,puVar10);
          }
          puVar11 = puVar6;
          func_0x000107c44e64();
          puVar12 = puVar6;
          func_0x000107c4c0fc();
          func_0x000103ee3894();
          func_0x000107c61170(puVar6);
          uVar1 = *(ulong *)(puVar7 + 0x10);
          apuStack_80[0] = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          puVar7 = apuStack_80[0];
          puVar17 = puVar17 + 1;
          *(ulong *)(apuStack_80[0] + 0x10) = uVar1 + 1;
          *(undefined **)(apuStack_80[0] + uVar1 * 0x10 + 0x20) = puVar11;
          *(undefined **)(apuStack_80[0] + uVar1 * 0x10 + 0x28) = puVar12;
        } while (puVar16 != puVar17);
        func_0x000107c6142c(puVar10);
      }
      puVar16 = puVar7;
      func_0x00010102c3b8(puVar7);
      func_0x000107c6142c(puVar7);
      puVar7 = puVar16;
      func_0x000107c5fc48(puVar16,puVar13 + 8);
      func_0x000107c6142c(puVar16);
      puVar13 = puVar5;
      func_0x000107c57240(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar13);
      puVar7 = PTR_PTR_1126ba8b8;
      func_0x000107c610f8(PTR_PTR_1126ba8b8);
      func_0x000107c453e4();
      puVar13 = puVar5;
      func_0x000107c3ecc8(puVar5);
      func_0x000107c61180();
      puVar16 = puVar7;
      func_0x000107c59080(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar16);
      func_0x000105d0b830(param_1,param_2);
      func_0x000107c61180();
      func_0x000107c553ac();
      func_0x000107c61180();
      func_0x000107c61170();
      puVar13 = puVar7;
      func_0x000107c3ecc8(puVar7);
      func_0x000107c61180();
      lVar15 = param_1;
      func_0x000107c553a8(param_1);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(lVar15);
      lVar15 = param_1;
      func_0x000107c3ecc8(param_1);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(param_1);
      return lVar15;
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 1016b1af0; end: 1016b1cc7;  */

undefined * FUN_1016b1af0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c61174();
  puVar5 = param_3;
  func_0x000107c453d0();
  if (puVar5 == (undefined *)0x18) {
    puVar5 = param_3;
    func_0x000107c4a790();
    func_0x000107c61180();
    puVar1 = puVar5;
    func_0x0001016b1394();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_3);
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    func_0x000107c61170(puVar1);
    puVar1 = param_3;
    func_0x000107c4a790();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    puVar5 = param_3;
    func_0x000107c5ce70();
    func_0x000107c61180();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) {
      uVar2 = 0;
      FUN_1016b231c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
      puVar3 = puVar5;
      func_0x000107c5fc54(puVar5,uVar2);
      func_0x000107c61170(puVar5);
    }
    puVar4 = PTR_PTR_1126ba8a8;
    func_0x000107c61168(PTR_PTR_1126ba8a8);
    uVar2 = 0;
    FUN_1016b231c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
    puVar5 = puVar3;
    func_0x000107c5fc48(puVar3,uVar2);
    func_0x000107c6142c(puVar3);
    func_0x000107c4fd48(param_3);
    uVar2 = param_1;
    uVar8 = param_2;
    func_0x000107c3f74c(param_3);
    uVar6 = uVar2;
    func_0x000107c51820(param_3);
    uVar7 = uVar6;
    func_0x000107c508f4(param_3);
    func_0x000107c5bdd4(param_1,param_2,uVar2,uVar8,uVar6,uVar7,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar1;
    FUN_1016b152c(puVar1,puVar4);
    func_0x000107c61170(puVar1);
    param_3 = puVar4;
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c61170(param_3);
  return puVar5;
}



/* Entry: 1016b1cc8; end: 1016b1e63;  */

undefined * FUN_1016b1cc8(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107c61174();
  puVar2 = param_1;
  func_0x000107c453d4();
  if (puVar2 == (undefined *)0xffffffffcf840e00) {
    puVar2 = param_1;
    func_0x000107c453cc();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5a990();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_1);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x000107c5a998();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b1e60);
        (*pcVar1)();
      }
      puVar4 = puVar2;
      func_0x000107c5faec();
      uVar9 = param_2;
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
      func_0x000107c4f470();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        puVar5 = puVar2;
        func_0x000107c5faec();
        func_0x000107c61170(puVar2);
        puVar6 = puVar3;
        func_0x000107c4e3a4();
        func_0x000107c61180();
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar6 != (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x000107c5fc54();
          func_0x000107c61170(puVar6);
          puVar6 = puVar7;
          func_0x000101158fcc();
          func_0x000107c6142c(puVar7);
          if (puVar6 != (undefined *)0x0) {
            puVar2 = puVar6;
          }
        }
        uVar8 = 0;
        func_0x000103ee3360(0);
        func_0x000103edff64(puVar4,param_2,puVar5,uVar9,puVar2,uVar8);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(puVar2);
        func_0x000107c61170(puVar3);
        return puVar4;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b1e64);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return (undefined *)0x0;
}



/* Entry: 1016b1e64; end: 1016b1f93;  */

void FUN_1016b1e64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c453d4();
  if (lVar1 == -0x307bf200) {
    lVar1 = param_1;
    func_0x000107c453cc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5a990();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      FUN_1016b1cc8();
      if (param_1 != 0) {
        if (param_3 != 0) {
          uVar3 = 0;
          FUN_1016b231c(0,0x112dc0098,&PTR_PTR_1126bf730);
          func_0x000107c5fc48(param_3,uVar3);
        }
        func_0x000107c61168(PTR_PTR_1126ba7d8);
        func_0x000107c453c8();
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_1);
      }
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016b1f94; end: 1016b230b;  */

void FUN_1016b1f94(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c453d0();
  if (lVar1 == 0x18) {
    lVar1 = param_1;
    func_0x000107c4a790();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001016b1394();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c4a790(param_1);
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016b230c; end: 1016b231b;  */

undefined1  [16] FUN_1016b230c(void)

{
  return ZEXT816(0x1103f6910);
}



/* Entry: 1016b231c; end: 1016b235b;  */

void FUN_1016b231c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016b235c; end: 1016b236b;  */

undefined1  [16] FUN_1016b235c(void)

{
  return ZEXT816(0x1103f6930);
}



/* Entry: 1016b236c; end: 1016b239f;  */

void FUN_1016b236c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1016b23a0; end: 1016b246f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b23a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112dc0148;
  lVar2 = unaff_x20;
  FUN_1016b3874();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dc0150) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b2470; end: 1016b24e3; -[SCShareYoursSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b2470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112dc0148;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_1016b3874();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112dc0150) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b24e4; end: 1016b2553; -[SCShareYoursSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b24e4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112dc0148;
  lVar3 = param_1;
  FUN_1016b3874();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ShareYoursSticker/ShareYoursSticker.swift",0x29,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b2554);
  (*pcVar2)();
}



/* Entry: 1016b2554; end: 1016b2633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016b2554(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x0001016b2b20(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dc0150);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112dc0150);
      func_0x000107c61174(uVar3);
      func_0x000107c60118(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      func_0x000107c61170(lStack_58);
      func_0x000107c61170(uVar3);
      goto LAB_1016b261c;
    }
  }
  uVar4 = 0;
LAB_1016b261c:
  return uVar4 & 1;
}



/* Entry: 1016b2634; end: 1016b26b3; -[SCShareYoursSticker isEqual:] */

uint FUN_1016b2634(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1016b2554(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1016b26b4; end: 1016b26df; -[SCShareYoursSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016b26b4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112dc0150);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x2d19dbd;
}



/* Entry: 1016b26e0; end: 1016b26e7; -[SCShareYoursSticker infoType] */

undefined8 FUN_1016b26e0(void)

{
  return 0x18;
}



/* Entry: 1016b26e8; end: 1016b26f3; -[SCShareYoursSticker stickerId] */

void FUN_1016b26e8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4f595f4552414853;
  uVar3 = 0xeb00000000535255;
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b26f4; end: 1016b26ff; -[SCShareYoursSticker shortLoggingName] */

void FUN_1016b26f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4f595f4552414853;
  uVar3 = 0xeb00000000535255;
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b2700; end: 1016b277f;  */

void FUN_1016b2700(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4f595f4552414853;
  uVar3 = 0xeb00000000535255;
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b2780; end: 1016b278f; -[SCShareYoursSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b2780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc0148));
  return;
}



/* Entry: 1016b2790; end: 1016b279f; -[SCShareYoursSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b2790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc0150));
  return;
}



/* Entry: 1016b27a0; end: 1016b27a7; -[SCShareYoursSticker supportedFlows] */

undefined8 FUN_1016b27a0(void)

{
  return 0;
}



/* Entry: 1016b27a8; end: 1016b27b3; -[SCShareYoursSticker intrinsicSize] */

undefined1  [16] FUN_1016b27a8(void)

{
  return ZEXT816(0);
}



/* Entry: 1016b27b4; end: 1016b2963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1016b27b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dc0148);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc0150);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x0001016b2b20(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x0001016b2b20(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 1016b2964; end: 1016b2a87; -[SCShareYoursSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_1016b2964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001016b2b20(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x0001016b2b20(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_1016b27b4(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b2a88; end: 1016b2ae7; -[SCShareYoursSticker init] */

void FUN_1016b2a88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareYoursSticker.ShareYoursSticker",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b2ab4);
  (*pcVar1)();
}



/* Entry: 1016b2ae8; end: 1016b2b5f; -[SCShareYoursSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016b2b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b2b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b2ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0148));
  return;
}



/* Entry: 1016b2b60; end: 1016b2b7f;  */

void FUN_1016b2b60(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5a88);
  return;
}



/* Entry: 1016b2b80; end: 1016b2b93;  */

void FUN_1016b2b80(void)

{
  uRam0000000113802c28 = 0x406f400000000000;
  uRam0000000113802c20 = 0x406c200000000000;
  return;
}



/* Entry: 1016b2b94; end: 1016b304f;  */

/* WARNING: Possible PIC construction at 0x0001016b2c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b2d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b3000) */
/* WARNING: Removing unreachable block (ram,0x0001016b2ff0) */
/* WARNING: Removing unreachable block (ram,0x0001016b2fe0) */
/* WARNING: Removing unreachable block (ram,0x0001016b2ed8) */
/* WARNING: Removing unreachable block (ram,0x0001016b2e04) */
/* WARNING: Removing unreachable block (ram,0x0001016b2dc8) */
/* WARNING: Removing unreachable block (ram,0x0001016b2d1c) */
/* WARNING: Removing unreachable block (ram,0x0001016b2cfc) */
/* WARNING: Removing unreachable block (ram,0x0001016b2d78) */
/* WARNING: Removing unreachable block (ram,0x0001016b2d04) */
/* WARNING: Removing unreachable block (ram,0x0001016b2cdc) */
/* WARNING: Removing unreachable block (ram,0x0001016b304c) */
/* WARNING: Removing unreachable block (ram,0x0001016b2ce0) */
/* WARNING: Removing unreachable block (ram,0x0001016b2cbc) */
/* WARNING: Removing unreachable block (ram,0x0001016b3048) */
/* WARNING: Removing unreachable block (ram,0x0001016b2cc0) */
/* WARNING: Removing unreachable block (ram,0x0001016b2c84) */
/* WARNING: Removing unreachable block (ram,0x0001016b3044) */
/* WARNING: Removing unreachable block (ram,0x0001016b2ca0) */
/* WARNING: Removing unreachable block (ram,0x0001016b2d80) */
/* WARNING: Removing unreachable block (ram,0x0001016b2d88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b2b94(undefined *param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [24];
  
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    param_1 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    (*param_3)();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    FUN_1016b3874();
    lVar4 = 0;
    func_0x0001016b48d0();
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dc01b8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dc01c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000103ede3d8(lVar4,param_1,param_2);
    lVar4 = lRam0000000112dc0188;
    func_0x000107c61174();
    if (lVar4 != -1) {
      func_0x000107c61568(0x112dc0188,FUN_1016b2b80);
    }
    uVar3 = uRam0000000113802c28;
    uVar2 = uRam0000000113802c20;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302c858);
    func_0x000107c61428(puVar1,auStack_88,1,0);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b3050; end: 1016b316f;  */

void FUN_1016b3050(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1103f69f8;
  func_0x000107c613fc(&UNK_1103f69f8,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1103f6b88;
  func_0x000107c613fc(&UNK_1103f6b88,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1103f6bb0;
  func_0x000107c613fc(&UNK_1103f6bb0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d97c390;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c398,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1016b3170; end: 1016b31df;  */

void FUN_1016b3170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b31e0,uVar1,uVar2);
  return;
}



/* Entry: 1016b31e0; end: 1016b329f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b31e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar1 = (undefined8 *)(lVar6 + _DAT_11302c880);
    func_0x000107c61428(puVar1,unaff_x22 + 0x28,1,0);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    func_0x000107c6157c(uVar4);
    FUN_1016b3d9c(uVar3,uVar5);
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016b329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6 == 0);
  return;
}



/* Entry: 1016b32a0; end: 1016b32e3;  */

void FUN_1016b32a0(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001016b32e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1016b32e4; end: 1016b3353;  */

/* WARNING: Possible PIC construction at 0x0001016b333c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b3340) */

void FUN_1016b32e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_1103f6b60;
  func_0x000107c613fc(&UNK_1103f6b60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(FUN_1016b3cac,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1016b3354; end: 1016b346b;  */

void FUN_1016b3354(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1103f69f8;
  func_0x000107c613fc(&UNK_1103f69f8,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1103f6b10;
  func_0x000107c613fc(&UNK_1103f6b10,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1103f6b38;
  func_0x000107c613fc(&UNK_1103f6b38,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d97c368;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c378,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1016b346c; end: 1016b34db;  */

void FUN_1016b346c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b34dc,uVar1,uVar2);
  return;
}



/* Entry: 1016b34dc; end: 1016b35f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b34dc(void)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uVar4 = 1;
  }
  else {
    dVar9 = *(double *)(unaff_x22 + 0x48);
    dVar8 = *(double *)(unaff_x22 + 0x50);
    pdVar1 = (double *)(lVar5 + _DAT_11302c858);
    func_0x000107c61428(pdVar1,unaff_x22 + 0x28,1,0);
    dVar6 = *pdVar1;
    dVar7 = pdVar1[1];
    bVar2 = false;
    if ((dVar9 == dVar6) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
      bVar2 = dVar8 == dVar7;
    }
    if (!bVar2) {
      dVar8 = *(double *)(unaff_x22 + 0x50);
      *pdVar1 = *(double *)(unaff_x22 + 0x48);
      pdVar1[1] = dVar8;
      func_0x000107c3f74c(lVar5);
      func_0x000107c3ec60(lVar5);
      func_0x000107c52e44(lVar5);
      func_0x000107c532b4(dVar6,dVar7,lVar5);
      lVar3 = lVar5;
      func_0x000107c5b07c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4f1b4();
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170(lVar5);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001016b35f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 1016b35f8; end: 1016b36db;  */

/* WARNING: Possible PIC construction at 0x0001016b36bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b36c0) */

void FUN_1016b35f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1103f6ac0;
  func_0x000107c613fc(&UNK_1103f6ac0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_1103f6ae8;
  func_0x000107c613fc(&UNK_1103f6ae8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d97c348;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c358,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1016b36dc; end: 1016b374b;  */

void FUN_1016b36dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b374c,uVar1,uVar2);
  return;
}



/* Entry: 1016b374c; end: 1016b37c7;  */

void FUN_1016b374c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000103ede508(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcVar2)();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001016b37c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016b37c8; end: 1016b3803;  */

void FUN_1016b37c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016b3800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016b3804; end: 1016b383f; -[_TtC17ShareYoursSticker24ShareYoursStickerHelpers init] */

void FUN_1016b3804(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b3840; end: 1016b3873;  */

void FUN_1016b3840(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016b3874; end: 1016b39fb;  */

undefined * FUN_1016b3874(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    FUN_1016b3dac(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x4f595f4552414853;
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b39fc);
  (*pcVar1)();
}



/* Entry: 1016b39fc; end: 1016b3a33;  */

void FUN_1016b39fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1103f69f8;
  func_0x000107c613fc(&UNK_1103f69f8,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_1103f6b88;
  func_0x000107c613fc(&UNK_1103f6b88,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar1 = &UNK_1103f6bb0;
  func_0x000107c613fc(&UNK_1103f6bb0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d97c390;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c6157c(param_2);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c398,puVar1,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 1016b3a34; end: 1016b3a87;  */

void FUN_1016b3a34(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5b50);
  return;
}



/* Entry: 1016b3a88; end: 1016b3aeb;  */

void FUN_1016b3a88(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1016b3aec;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b374c,lVar3,lVar4);
  return;
}



/* Entry: 1016b3aec; end: 1016b3b27;  */

void FUN_1016b3aec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016b3b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016b3b28; end: 1016b3b97;  */

void FUN_1016b3b28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b3e00;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016b3b98; end: 1016b3bf7;  */

void FUN_1016b3b98(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016b3bf8;
  plVar1[9] = lVar3;
  plVar1[10] = lVar4;
  plVar1[8] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[0xb] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b34dc,lVar3,lVar2);
  return;
}



/* Entry: 1016b3bf8; end: 1016b3c3b;  */

void FUN_1016b3bf8(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016b3c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016b3c3c; end: 1016b3cab;  */

void FUN_1016b3c3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b3e04;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016b3cac; end: 1016b3ccb;  */

void FUN_1016b3cac(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1016b3ccc; end: 1016b3d2b;  */

void FUN_1016b3ccc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b3dfc;
  plVar3[9] = lVar1;
  plVar3[10] = lVar4;
  plVar3[8] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xb] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b31e0,lVar1,lVar2);
  return;
}



/* Entry: 1016b3d2c; end: 1016b3d9b;  */

void FUN_1016b3d2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b3e08;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016b3d9c; end: 1016b3dab;  */

void FUN_1016b3d9c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1016b3dac; end: 1016b3deb;  */

void FUN_1016b3dac(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016b3dec; end: 1016b3e0b;  */

void FUN_1016b3dec(long param_1,long param_2)

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



/* Entry: 1016b3e0c; end: 1016b3e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b3e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc01b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc01c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103ede3d8(param_1,param_2);
  return;
}



/* Entry: 1016b3e6c; end: 1016b3e87; -[_TtC17ShareYoursSticker21ShareYoursStickerView textInputDidChangeBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b3e6c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112dc01b8);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100c75f50;
    puStack_60 = &UNK_1103f6c40;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1016b3e88; end: 1016b3f43; -[_TtC17ShareYoursSticker21ShareYoursStickerView setTextInputDidChangeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b3e88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1103f6c28;
    func_0x000107c613fc(&UNK_1103f6c28,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1016b4958;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc01b8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100cb9370(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1016b3f44; end: 1016b3f5f; -[_TtC17ShareYoursSticker21ShareYoursStickerView textInputDidReturnBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b3f44(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112dc01c0);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1103f6bf0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1016b3f60; end: 1016b4003;  */

void FUN_1016b3f60(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    ppuVar3 = &puStack_78;
    uStack_68 = param_4;
    uStack_60 = param_5;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1016b4004; end: 1016b40bf; -[_TtC17ShareYoursSticker21ShareYoursStickerView setTextInputDidReturnBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b4004(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1103f6bd8;
    func_0x000107c613fc(&UNK_1103f6bd8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1016b4930;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc01c0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100cb9370(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1016b40c0; end: 1016b41f3; -[_TtC17ShareYoursSticker21ShareYoursStickerView text] */

void FUN_1016b40c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001016b4118();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b41f4; end: 1016b424f; -[_TtC17ShareYoursSticker21ShareYoursStickerView setText:] */

void FUN_1016b41f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1016b4250(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b4250; end: 1016b454b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b4250(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar6 = _DAT_11302c890;
  func_0x000107c61428(unaff_x20 + _DAT_11302c890,auStack_58,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (lVar6 != 0) {
    puVar2 = PTR_PTR_1126a78b0;
    func_0x000107c61168(PTR_PTR_1126a78b0);
    lVar3 = lVar6;
    func_0x000107c6148c(lVar6,puVar2);
    if (lVar3 != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_11302c868);
      if (lVar7 == 0) {
        func_0x000107c61174(lVar6);
      }
      else {
        func_0x000107c61174(lVar6);
        func_0x000107c4ce20();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b440c);
          (*pcVar1)();
        }
        lVar4 = lVar7;
        func_0x000107c453bc();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b4410);
          (*pcVar1)();
        }
        lVar7 = lVar4;
        func_0x000107c5a9a4();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b4414);
          (*pcVar1)();
        }
        uVar5 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c57988(lVar7);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar5);
      }
      puVar2 = PTR_PTR_1126a78a0;
      func_0x000107c610f8(PTR_PTR_1126a78a0);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c48190(puVar2);
      func_0x000107c61170(param_1);
      FUN_1016b48f0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = 1;
      func_0x000107c6010c(1);
      func_0x000107c557dc(puVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c5a588(lVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1016b454c; end: 1016b459b; -[_TtC17ShareYoursSticker21ShareYoursStickerView updateWithInfoFromStickerView:] */

/* WARNING: Possible PIC construction at 0x0001016b4584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b4588) */

void FUN_1016b454c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b4414(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1016b459c; end: 1016b45a3; -[_TtC17ShareYoursSticker21ShareYoursStickerView infoType] */

undefined8 FUN_1016b459c(void)

{
  return 0x18;
}



/* Entry: 1016b45a4; end: 1016b45eb; -[_TtC17ShareYoursSticker21ShareYoursStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1016b45a4(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_11302c858);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 1016b45ec; end: 1016b45f3; -[_TtC17ShareYoursSticker21ShareYoursStickerView type] */

undefined8 FUN_1016b45ec(void)

{
  return 6;
}



/* Entry: 1016b45f4; end: 1016b46e3; -[_TtC17ShareYoursSticker21ShareYoursStickerView loggingParameters] */

void FUN_1016b45f4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR___sSSN_11034da80;
  uStack_98 = 0x65707974;
  uStack_90 = 0xe400000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0x4f595f4552414853;
  *(undefined8 *)(lVar2 + 0x50) = 0xeb00000000535255;
  lVar3 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b46e4; end: 1016b46f7; -[_TtC17ShareYoursSticker21ShareYoursStickerView toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b46e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c860));
  return;
}



/* Entry: 1016b46f8; end: 1016b470b; -[_TtC17ShareYoursSticker21ShareYoursStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b46f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c868));
  return;
}



/* Entry: 1016b470c; end: 1016b4713; -[_TtC17ShareYoursSticker21ShareYoursStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_1016b470c(void)

{
  return 0;
}



/* Entry: 1016b4714; end: 1016b47b7; -[_TtC17ShareYoursSticker21ShareYoursStickerView tappableElementBounds] */

void FUN_1016b4714(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1016b4864();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  puVar1 = PTR_PTR_1126d91a8;
  func_0x000107c610f8();
  func_0x000107c461f0(0,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,0x3fe0000000000000)
  ;
  *(undefined **)(param_1 + 0x20) = puVar1;
  uVar2 = 0;
  FUN_1016b48f0(0,0x112dc0158,&PTR_PTR_1126d91a8);
  lVar3 = param_1;
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1016b47b8; end: 1016b481f;  */

/* WARNING: Possible PIC construction at 0x0001016b47d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b47d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b47b8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112dc01b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(unaff_x20 + _DAT_112dc01b8))[1]);
    return;
  }
  return;
}



/* Entry: 1016b4820; end: 1016b485f; -[_TtC17ShareYoursSticker21ShareYoursStickerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016b4840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b4844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b4820(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dc01b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112dc01b8))[1]);
    return;
  }
  return;
}



/* Entry: 1016b4860; end: 1016b4863; -[_TtC17ShareYoursSticker21ShareYoursStickerView copyWithZone:] */

void FUN_1016b4860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1016b4864; end: 1016b48ef;  */

void FUN_1016b4864(void)

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
    FUN_1016b48f0(0,0x112dc0158,&PTR_PTR_1126d91a8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc01f0;
  plVar5 = (long *)&UNK_10dca7bd0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1016b48f0; end: 1016b492f;  */

void FUN_1016b48f0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016b4930; end: 1016b4957;  */

void FUN_1016b4930(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001016b4938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1016b4958; end: 1016b498f;  */

void FUN_1016b4958(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b4990; end: 1016b4997;  */

void FUN_1016b4990(long param_1,long param_2)

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



/* Entry: 1016b4998; end: 1016b499b; -[_TtC17ShareYoursSticker21ShareYoursStickerView stickerId] */

void FUN_1016b4998(void)

{
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


