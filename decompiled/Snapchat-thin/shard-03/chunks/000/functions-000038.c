/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023deae4; end: 1023deb57; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023deae4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e94420,0);
  func_0x000107c61614(param_1 + _DAT_112e94428,0);
  *(undefined8 *)(param_1 + _DAT_112e94430) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023deb58; end: 1023deb8b;  */

void FUN_1023deb58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023deb8c; end: 1023debd3; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023deb8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e94420);
  func_0x000107c61610(param_1 + _DAT_112e94428);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e94430));
  return;
}



/* Entry: 1023debd4; end: 1023debf3;  */

void FUN_1023debd4(void)

{
  func_0x000107c61168(&PTR_PTR_112e94478);
  return;
}



/* Entry: 1023debf4; end: 1023decb7;  */

void FUN_1023debf4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ff810;
  if (lRam0000000112e944e0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e944e0 = param_1;
  }
  return;
}



/* Entry: 1023decb8; end: 1023decc7; -[SCPreviewToolLensLoggingParameters lensSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1023decb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e944f0);
}



/* Entry: 1023decc8; end: 1023decdb; -[SCPreviewToolLensLoggingParameters lensType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1023decc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e944f8);
}



/* Entry: 1023decdc; end: 1023deda3; -[SCPreviewToolLensLoggingParameters initWithLensSource:lensType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023decdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e944f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e944f8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023deda4; end: 1023deda7; -[SCPreviewToolLensLoggingParameters copyWithZone:] */

void FUN_1023deda4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1023deda8; end: 1023dedc3; -[SCPreviewToolLensLoggingParameters description] */

void FUN_1023deda8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023dedc4; end: 1023dee5f; -[SCPreviewToolLensLoggingParameters init] */

void FUN_1023dedc4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PreviewToolLensServices/PreviewToolLensLoggingParametersWrapper.swift",0x45,2
                      ,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dee0c);
  (*pcVar1)();
}



/* Entry: 1023dee60; end: 1023dee63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dee60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e944f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e944f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023dee64; end: 1023deeaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dee64(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e94528) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023deeb0; end: 1023df16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023deeb0(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_88;
  undefined8 auStack_80 [4];
  
  func_0x0001000d224c(auStack_80);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  uVar3 = auStack_80[0];
  func_0x000107c4f0d0();
  func_0x000107c61170(param_1);
  if ((int)uVar3 != 0) {
    if (param_3 >> 0x3e == 0) {
      uVar11 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___sypN_11034f1a8;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar11 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar11 = param_3;
      }
      func_0x000107c60480();
      puVar9 = PTR___sypN_11034f1a8;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___sypN_11034f1a8 = puVar9;
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
    if (uVar11 != 0) {
      if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023df16c);
        (*pcVar2)();
      }
      uVar12 = 0;
      do {
        if ((param_3 & 0xc000000000000001) == 0) {
          uVar13 = *(ulong *)(param_3 + uVar12 * 8 + 0x20);
          func_0x000107c615f0(uVar13);
        }
        else {
          uVar13 = uVar12;
          FUN_1023df5e4(uVar12,param_3);
        }
        uVar4 = uVar13;
        func_0x000107c407ac(uVar13);
        func_0x000107c60234(auStack_80);
        func_0x000107c615e8(uVar4);
        uVar3 = 0x112e94530;
        func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
        puVar5 = &uStack_88;
        func_0x000107c6147c(puVar5,auStack_80,puVar9 + 8,uVar3,6);
        uVar4 = uStack_88;
        if ((int)puVar5 == 0) {
LAB_1023def80:
          func_0x000107c615e8(uVar13);
        }
        else {
          func_0x000107c550d8(uStack_88);
          if (puVar8 == (undefined *)0x0) {
            func_0x000107c615e8(uVar13);
            uVar13 = uVar4;
            goto LAB_1023def80;
          }
          func_0x000107c615f0(uVar4);
          puVar7 = puVar8;
          func_0x000107c61550();
          if (((int)puVar7 == 0) || (puVar7 = puVar8, (ulong)puVar8 >> 0x3e != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)((undefined *)((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = puVar8;
              if (-1 < (long)puVar8) {
                puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_1023df318(0,puVar6 + 1,1,puVar8);
          }
          uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_1023df318(puVar8,uVar1 + 1,1,puVar7);
            uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(ulong *)(uVar10 + uVar1 * 8 + 0x20) = uVar4;
          func_0x000107c615e8(uVar4);
          func_0x000107c615e8(uVar13);
        }
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
      goto LAB_1023df114;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1023df114:
  FUN_1023dfbac(0);
  func_0x000107c610f8();
  puVar9 = puVar8;
  func_0x000107c61434(puVar8);
  func_0x0001023dfa6c();
  func_0x000107c6142c(puVar8);
  func_0x000107c615e8(auStack_80[0]);
  return puVar9;
}



/* Entry: 1023df16c; end: 1023df1eb; -[SCImageLensCaptionFeatureImpl captionBehaviorWithLensId:] */

void FUN_1023df16c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1023deeb0(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1023df1ec; end: 1023df293; -[SCImageLensCaptionFeatureImpl captionBehaviorWithLensId:captionsState:] */

void FUN_1023df1ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  uVar1 = 0x112e94530;
  func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_1023deeb0(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1023df294; end: 1023df2f3; -[SCImageLensCaptionFeatureImpl init] */

void FUN_1023df294(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPreviewImagineLensServicesImplementation.ImageLensCaptionFeatureImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023df2c0);
  (*pcVar1)();
}



/* Entry: 1023df2f4; end: 1023df317; -[SCImageLensCaptionFeatureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023df2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e94528));
  return;
}



/* Entry: 1023df318; end: 1023df43f;  */

ulong FUN_1023df318(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023df440);
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
  FUN_1023df440(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023df43c);
      (*pcVar1)();
    }
    FUN_1023df4c0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1023df440; end: 1023df4bf;  */

undefined * FUN_1023df440(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x0001023df304();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1023df4c0; end: 1023df5e3;  */

long FUN_1023df4c0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023df5e0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023df5e4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e94530;
        func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e94530;
      func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023df5dc);
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



/* Entry: 1023df5e4; end: 1023df793;  */

ulong FUN_1023df5e4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023df6c0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023df6c4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x6f69747061434353,0xee0065746174536e);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023df794);
  (*pcVar2)();
}



/* Entry: 1023df794; end: 1023df7b3;  */

void FUN_1023df794(void)

{
  func_0x000107c61168(&PTR_PTR_11283b528);
  return;
}



/* Entry: 1023df7b4; end: 1023df7f7;  */

void FUN_1023df7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1023df7f8; end: 1023df807;  */

void FUN_1023df7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1023df808; end: 1023df933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023df808(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113036498);
  func_0x0001000285a8(0x112e94568,&UNK_10da9fc90);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  pcVar1 = FUN_1023df934;
  func_0x0001000bdd8c(FUN_1023df934,uVar3);
  FUN_1023dfd7c(0);
  func_0x000107c610f8();
  pcVar2 = pcVar1;
  func_0x000107c6157c(pcVar1);
  func_0x0001023dfc60();
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 1023df934; end: 1023df93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023df934(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_1023df794();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e94528) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1023df93c; end: 1023df96f;  */

void FUN_1023df93c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023df970; end: 1023df98f;  */

void FUN_1023df970(void)

{
  FUN_1023df808();
  return;
}



/* Entry: 1023df990; end: 1023df997;  */

undefined8 FUN_1023df990(void)

{
  return 0;
}



/* Entry: 1023df998; end: 1023df9b7;  */

void FUN_1023df998(void)

{
  func_0x000107c61168(&PTR_PTR_112e945b0);
  return;
}



/* Entry: 1023df9b8; end: 1023dfab7; -[SCImageLensCaptionResult captionStateForPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023df9b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112e94620);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    uVar1 = 0x112e94530;
    func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1023dfab8; end: 1023dfb3b; -[SCImageLensCaptionResult initWithCaptionStateForPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfab8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar2 = 0x112e94530;
    func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
    func_0x000107c5fc54(param_3,uVar2);
  }
  *(long *)(param_1 + _DAT_112e94620) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023dfb3c; end: 1023dfb9b; -[SCImageLensCaptionResult init] */

void FUN_1023dfb3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPreviewImagineLensServices.ImageLensCaptionResult",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dfb68);
  (*pcVar1)();
}



/* Entry: 1023dfb9c; end: 1023dfbab; -[SCImageLensCaptionResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfb9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e94620));
  return;
}



/* Entry: 1023dfbac; end: 1023dfbcb;  */

void FUN_1023dfbac(void)

{
  func_0x000107c61168(&PTR_PTR_11283b5e8);
  return;
}



/* Entry: 1023dfbcc; end: 1023dfbdb; -[SCPreviewImagineLensServices imageLensCaptionProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e94658));
  return;
}



/* Entry: 1023dfbdc; end: 1023dfce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1023dfbdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e94650) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112e94658) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1023dfce4; end: 1023dfd43; -[SCPreviewImagineLensServices init] */

void FUN_1023dfce4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPreviewImagineLensServices.SCPreviewImagineLensServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dfd10);
  (*pcVar1)();
}



/* Entry: 1023dfd44; end: 1023dfd7b; -[SCPreviewImagineLensServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfd44(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e94650));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e94658));
  return;
}



/* Entry: 1023dfd7c; end: 1023dfd9b;  */

void FUN_1023dfd7c(void)

{
  func_0x000107c61168(&PTR_PTR_11283b6a8);
  return;
}



/* Entry: 1023dfd9c; end: 1023dfde3; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl parentViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfd9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e94688;
  func_0x000107c61428(param_1 + _DAT_112e94688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023dfde4; end: 1023dfe3b; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl setParentViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e94688;
  func_0x000107c61428(param_1 + _DAT_112e94688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023dfe3c; end: 1023dff8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dfe3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e94690;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112e94688,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e94698,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e946a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e946a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e946b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e946b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e946c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e946c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e946d0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e946d8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e946e0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023dff8c; end: 1023dffeb; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl init] */

void FUN_1023dff8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureCustomojiImpl.PreviewFeatureCustomojiImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dffb8);
  (*pcVar1)();
}



/* Entry: 1023dffec; end: 1023e00cb; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dffec(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e946b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e946b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e946a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e946c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e946c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e946d0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e946d8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e946e0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e94690));
  func_0x000100cf01bc(param_1 + _DAT_112e94688);
  func_0x000100cf01bc(param_1 + _DAT_112e94698);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112e946a0);
  return;
}



/* Entry: 1023e00cc; end: 1023e028f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023e00cc(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e946c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x000107c5fae8(lVar4,&uStack_40);
      func_0x000107c61170(lVar4);
      uVar2 = uStack_38;
      uVar6 = uStack_40;
      if (uStack_38 != 0) {
        uVar1 = uStack_40 & 0xffffffffffff;
        if ((uStack_38 & 0x2000000000000000) != 0) {
          uVar1 = uStack_38 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          puVar5 = *(undefined **)(unaff_x20 + _DAT_112e946c8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (puVar5 != (undefined *)0x0) {
            puVar9 = PTR_PTR_1126af5d8;
            func_0x000107c610f8(PTR_PTR_1126af5d8);
            func_0x000107c5fadc(uVar6,uVar2);
            func_0x000107c6142c(uVar2);
            uVar7 = 0x3637303737323533;
            func_0x000107c5fadc(0x3637303737323533,0xe800000000000000);
            func_0x000107c458c8(0,0,puVar9);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar7);
            puVar8 = puVar5;
            func_0x000107c432c0(puVar5);
            func_0x000107c61180();
            func_0x000107c615e8(puVar5);
            goto LAB_1023e0270;
          }
        }
        func_0x000107c6142c(uVar2);
      }
    }
  }
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar9 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c42d78();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar8);
  func_0x000107c61180();
LAB_1023e0270:
  func_0x000107c61170(puVar9);
  return puVar8;
}



/* Entry: 1023e0290; end: 1023e02c3; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl fetchCustomojiIcon] */

void FUN_1023e0290(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023e00cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023e02c4; end: 1023e02df;  */

void FUN_1023e02c4(long param_1,long param_2)

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



/* Entry: 1023e02e0; end: 1023e0367; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl textSupportsCustomoji:completion:] */

void FUN_1023e02e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_1023e10d0(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023e0368; end: 1023e05d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e0368(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112e94688;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112e94688,auStack_80,0,0);
    lVar3 = param_1 + lVar3;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar1 = lVar3;
      func_0x000107c4e364();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61604(param_1 + _DAT_112e94698,param_2);
      puVar2 = PTR_PTR_1126aa750;
      func_0x000107c610f8(PTR_PTR_1126aa750);
      func_0x000107c453e4();
      lVar3 = ((undefined8 *)(param_1 + _DAT_112e946e0))[1];
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + _DAT_112e946e0);
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar4,lVar3);
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c59478(puVar2);
      func_0x000107c61170(uVar4);
      lVar3 = ((undefined8 *)(param_1 + _DAT_112e946d8))[1];
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + _DAT_112e946d8);
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar4,lVar3);
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c53200(puVar2);
      func_0x000107c61170(uVar4);
      func_0x0001003345b4(0);
      func_0x000107c610f8();
      func_0x000107c61434(param_4);
      func_0x000107c61174(puVar2);
      lVar3 = param_1;
      func_0x000107c61174();
      FUN_10246b5fc(param_3,param_4,puVar2,param_1);
      lStack_90 = param_3;
      func_0x00010008a7c8(&uStack_88,&lStack_90);
      func_0x000100083b20(&lStack_90);
      func_0x000107c61574(uStack_88);
      param_1 = lStack_90;
      func_0x000107c5677c(lStack_90);
      func_0x000107c61604(lVar3 + _DAT_112e946a0,param_1);
      func_0x000107c4f018(lVar1);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1023e05d4; end: 1023e05df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e05d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112e94688;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112e94688,auStack_80,0,0);
    lVar6 = lVar2 + lVar6;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar3 = lVar6;
      func_0x000107c4e364();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      func_0x000107c61604(lVar2 + _DAT_112e94698,uVar7);
      puVar4 = PTR_PTR_1126aa750;
      func_0x000107c610f8(PTR_PTR_1126aa750);
      func_0x000107c453e4();
      lVar6 = ((undefined8 *)(lVar2 + _DAT_112e946e0))[1];
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + _DAT_112e946e0);
        func_0x000107c61434(lVar6);
        func_0x000107c5fadc(uVar7,lVar6);
        func_0x000107c6142c(lVar6);
      }
      func_0x000107c59478(puVar4);
      func_0x000107c61170(uVar7);
      lVar6 = ((undefined8 *)(lVar2 + _DAT_112e946d8))[1];
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + _DAT_112e946d8);
        func_0x000107c61434(lVar6);
        func_0x000107c5fadc(uVar7,lVar6);
        func_0x000107c6142c(lVar6);
      }
      func_0x000107c53200(puVar4);
      func_0x000107c61170(uVar7);
      func_0x0001003345b4(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      func_0x000107c61174(puVar4);
      lVar6 = lVar2;
      func_0x000107c61174();
      FUN_10246b5fc(lVar5,uVar1,puVar4,lVar2);
      lStack_90 = lVar5;
      func_0x00010008a7c8(&uStack_88,&lStack_90);
      func_0x000100083b20(&lStack_90);
      func_0x000107c61574(uStack_88);
      lVar2 = lStack_90;
      func_0x000107c5677c(lStack_90);
      func_0x000107c61604(lVar6 + _DAT_112e946a0,lVar2);
      func_0x000107c4f018(lVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1023e05e0; end: 1023e0707; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl presentCustomojiPickerWithText:delegate:] */

void FUN_1023e05e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5faec();
  puVar1 = &UNK_1104ffb48;
  func_0x000107c613fc(&UNK_1104ffb48,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1104ffbe8;
  func_0x000107c613fc(&UNK_1104ffbe8,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  uStack_50 = 0x1023e12a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104ffc00;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10da9fd50,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1023e0708; end: 1023e07ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e0708(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e946a0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c420a8();
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_1 + _DAT_112e94698;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c411c0();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1023e07ac; end: 1023e07b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e07ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112e946a0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c420a8();
      func_0x000107c61170(lVar2);
    }
    lVar2 = lVar1 + _DAT_112e94698;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c411c0();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1023e07b4; end: 1023e0937; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl customojiPickerDidDismiss] */

void FUN_1023e07b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1104ffb48;
  func_0x000107c613fc(&UNK_1104ffb48,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_40 = 0x1023e12c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104ffbb0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10da9fd50,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023e0938; end: 1023e093f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e0938(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112e946a0;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c420a8();
      func_0x000107c61170(lVar3);
    }
    FUN_1023e0940(uVar1);
    lVar3 = lVar2 + _DAT_112e94698;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c411c0();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1023e0940; end: 1023e0ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e0940(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b0cc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b0cb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b37c0;
  func_0x000107c610f8(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126ba7e0;
  func_0x000107c610f8(PTR_PTR_1126ba7e0);
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126ba7f8;
  func_0x000107c610f8(PTR_PTR_1126ba7f8);
  func_0x000107c453e4();
  lVar9 = param_1;
  func_0x000107c50110();
  func_0x000107c61180();
  uVar7 = param_2;
  if (lVar9 == 0) {
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c57d1c(puVar6);
  func_0x000107c61170(lVar9);
  lVar9 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c59c6c(puVar6);
  func_0x000107c61170(lVar9);
  lVar9 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  uVar7 = 1;
  *(undefined8 *)(lVar9 + 0x18) = 2;
  *(undefined8 *)(lVar9 + 0x10) = 1;
  func_0x000107c5bd8c(param_1);
  puVar8 = PTR___sSds7CVarArgsWP_11034ddc0;
  *(undefined **)(lVar9 + 0x38) = PTR___sSdN_11034dd90;
  *(undefined **)(lVar9 + 0x40) = puVar8;
  *(undefined8 *)(lVar9 + 0x20) = uVar7;
  uVar7 = 0x66302e25;
  uVar15 = 0xe400000000000000;
  func_0x000107c5fb00(0x66302e25,0xe400000000000000,lVar9);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar15);
  func_0x000107c535b4(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c49df8(param_1);
  func_0x000107c5a0f8(puVar5);
  func_0x000107c53db8(puVar5);
  func_0x000107c52d40(puVar4);
  func_0x000107c545cc(puVar3);
  func_0x000107c55900(puVar2);
  puVar8 = PTR_PTR_1126bc960;
  func_0x000107c61168(PTR_PTR_1126bc960);
  func_0x000107c5d83c();
  func_0x000107c61180();
  lVar9 = *(long *)(unaff_x20 + _DAT_112e946b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
  }
  else {
    lVar10 = lVar9;
    func_0x000107c5ded4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    lVar9 = lVar10;
    func_0x000107c4da04();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023e0cec);
      (*pcVar1)();
    }
    puVar11 = &UNK_1104ffb48;
    func_0x000107c613fc(&UNK_1104ffb48,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    puVar12 = &UNK_1104ffc88;
    func_0x000107c613fc(&UNK_1104ffc88,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar11;
    *(undefined **)(puVar12 + 0x18) = puVar2;
    pcStack_70 = FUN_1023e1260;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101d1793c;
    puStack_78 = &UNK_1104ffca0;
    ppuVar13 = &puStack_90;
    puStack_68 = puVar12;
    func_0x000107c60bc4(ppuVar13);
    puVar11 = puStack_68;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar11);
    lVar14 = lVar9;
    func_0x000107c5c320(lVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(lVar9);
    func_0x000107c3e924(lVar14);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar14);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1023e0cec; end: 1023e0deb; -[_TtC27PreviewFeatureCustomojiImpl27PreviewFeatureCustomojiImpl customojiPickerDidSelectStickerWithMetadata:] */

void FUN_1023e0cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = &UNK_1104ffb48;
  func_0x000107c613fc(&UNK_1104ffb48,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1104ffb70;
  func_0x000107c613fc(&UNK_1104ffb70,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_40 = 0x1023e12c4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104ffb88;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10da9fd50,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023e0dec; end: 1023e107b;  */

void FUN_1023e0dec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1104ffcd8;
    func_0x000107c613fc(&UNK_1104ffcd8,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_2;
    puVar2 = &UNK_1104ffd00;
    func_0x000107c613fc(&UNK_1104ffd00,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x1023e1268;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_68 = FUN_1023e1270;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101ac64d4;
    puStack_70 = &UNK_1104ffd18;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1023e107c; end: 1023e10cf;  */

void FUN_1023e107c(void)

{
  func_0x000107c61168(&PTR_PTR_11283b770);
  return;
}



/* Entry: 1023e10d0; end: 1023e121f;  */

/* WARNING: Possible PIC construction at 0x0001023e11a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e11c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e11a8) */
/* WARNING: Removing unreachable block (ram,0x0001023e11cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e10d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar2 = &UNK_1104ffc38;
  func_0x000107c613fc(&UNK_1104ffc38,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  lVar3 = *(long *)(param_3 + _DAT_112e946d0);
  func_0x000107c60bc4(param_4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    pcStack_50 = FUN_1023e1220;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f3aa0;
    puStack_58 = &UNK_1104ffc50;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(puVar2);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1023e1220; end: 1023e1233;  */

void FUN_1023e1220(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001023e1230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1023e1234; end: 1023e125f;  */

void FUN_1023e1234(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023e1260; end: 1023e126f;  */

void FUN_1023e1260(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_1104ffcd8;
    func_0x000107c613fc(&UNK_1104ffcd8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(long *)(puVar3 + 0x18) = lVar2;
    puVar4 = &UNK_1104ffd00;
    func_0x000107c613fc(&UNK_1104ffd00,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x1023e1268;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_68 = FUN_1023e1270;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101ac64d4;
    puStack_70 = &UNK_1104ffd18;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1023e1270; end: 1023e128f;  */

void FUN_1023e1270(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1023e1290; end: 1023e12cb;  */

void FUN_1023e1290(long param_1,long param_2)

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



/* Entry: 1023e12cc; end: 1023e195b;  */

void FUN_1023e12cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104ffd50;
  func_0x000107c613fc(&UNK_1104ffd50,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_1;
  *(undefined8 *)(puVar2 + 0x48) = param_2;
  pcStack_70 = FUN_1023e195c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1023e1960;
  puStack_78 = &UNK_1104ffd68;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x000103eda6c8(0);
  func_0x000107c610f8();
  func_0x000103eda5e0(puVar1,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1023e195c; end: 1023e195f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e195c(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar15 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  lStack_88 = lVar4;
  func_0x000107c5bd6c();
  func_0x000107c61180();
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c40454();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(lVar15 + _DAT_11302c560);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  lVar15 = lStack_88;
  if (lVar12 == 0) {
LAB_1023e176c:
    lVar12 = 0;
    lStack_88 = 0;
  }
  else {
    lVar14 = lVar12;
    func_0x000107c3f5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    lVar15 = lStack_88;
    if (lVar14 == 0) goto LAB_1023e176c;
    lVar12 = lVar14;
    func_0x000107c5faec();
    lVar15 = lStack_88;
    func_0x000107c61170(lVar14);
  }
  func_0x000107c4bff8();
  func_0x000107c61180();
  lVar14 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar14 != 0) {
    lVar8 = lVar14;
    func_0x000107c4e340();
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
    lVar14 = lVar8;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e195c);
      (*pcVar3)();
    }
    lVar8 = lVar14;
    func_0x000107c5b3e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    if (lVar8 != 0) {
      lVar14 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      goto LAB_1023e1834;
    }
  }
  lVar14 = 0;
  lVar15 = 0;
LAB_1023e1834:
  lVar9 = 0;
  FUN_1023e107c();
  lVar10 = lVar9;
  func_0x000107c610f8();
  lVar8 = _DAT_112e94690;
  puVar11 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + lVar8) = puVar11;
  func_0x000107c61614(lVar10 + _DAT_112e94688,0);
  func_0x000107c61614(lVar10 + _DAT_112e94698,0);
  func_0x000107c61614(lVar10 + _DAT_112e946a0,0);
  *(undefined8 *)(lVar10 + _DAT_112e946a8) = uVar2;
  *(long *)(lVar10 + _DAT_112e946b0) = lVar4;
  *(undefined8 *)(lVar10 + _DAT_112e946b8) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112e946c0) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112e946c8) = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112e946d0) = uVar13;
  plVar1 = (long *)(lVar10 + _DAT_112e946d8);
  *plVar1 = lVar12;
  plVar1[1] = lStack_88;
  plVar1 = (long *)(lVar10 + _DAT_112e946e0);
  *plVar1 = lVar14;
  plVar1[1] = lVar15;
  puVar11 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  func_0x000107c61154(&lStack_70,puVar11);
  return;
}



/* Entry: 1023e1960; end: 1023e1997;  */

void FUN_1023e1960(long param_1)

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



/* Entry: 1023e1998; end: 1023e19b3;  */

void FUN_1023e1998(long param_1,long param_2)

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



/* Entry: 1023e19b4; end: 1023e1a0f;  */

void FUN_1023e19b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023e1a10; end: 1023e1a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1a10(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar15 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  lStack_88 = lVar4;
  func_0x000107c5bd6c();
  func_0x000107c61180();
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c40454();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(lVar15 + _DAT_11302c560);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  lVar15 = lStack_88;
  if (lVar12 == 0) {
LAB_1023e176c:
    lVar12 = 0;
    lStack_88 = 0;
  }
  else {
    lVar14 = lVar12;
    func_0x000107c3f5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    lVar15 = lStack_88;
    if (lVar14 == 0) goto LAB_1023e176c;
    lVar12 = lVar14;
    func_0x000107c5faec();
    lVar15 = lStack_88;
    func_0x000107c61170(lVar14);
  }
  func_0x000107c4bff8();
  func_0x000107c61180();
  lVar14 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar14 != 0) {
    lVar8 = lVar14;
    func_0x000107c4e340();
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
    lVar14 = lVar8;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e195c);
      (*pcVar3)();
    }
    lVar8 = lVar14;
    func_0x000107c5b3e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    if (lVar8 != 0) {
      lVar14 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      goto LAB_1023e1834;
    }
  }
  lVar14 = 0;
  lVar15 = 0;
LAB_1023e1834:
  lVar9 = 0;
  FUN_1023e107c();
  lVar10 = lVar9;
  func_0x000107c610f8();
  lVar8 = _DAT_112e94690;
  puVar11 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + lVar8) = puVar11;
  func_0x000107c61614(lVar10 + _DAT_112e94688,0);
  func_0x000107c61614(lVar10 + _DAT_112e94698,0);
  func_0x000107c61614(lVar10 + _DAT_112e946a0,0);
  *(undefined8 *)(lVar10 + _DAT_112e946a8) = uVar2;
  *(long *)(lVar10 + _DAT_112e946b0) = lVar4;
  *(undefined8 *)(lVar10 + _DAT_112e946b8) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112e946c0) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112e946c8) = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112e946d0) = uVar13;
  plVar1 = (long *)(lVar10 + _DAT_112e946d8);
  *plVar1 = lVar12;
  plVar1[1] = lStack_88;
  plVar1 = (long *)(lVar10 + _DAT_112e946e0);
  *plVar1 = lVar14;
  plVar1[1] = lVar15;
  puVar11 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  func_0x000107c61154(&lStack_70,puVar11);
  return;
}



/* Entry: 1023e1a34; end: 1023e1ad3;  */

void FUN_1023e1a34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023e1ad4; end: 1023e1aeb;  */

void FUN_1023e1ad4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1023e1aec; end: 1023e1b37;  */

void FUN_1023e1aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1023e1b38; end: 1023e1b6b;  */

void FUN_1023e1b38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023e1b6c; end: 1023e1c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1b6c(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar1);
  func_0x000107c61180();
  func_0x000107c4fba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023e1c18; end: 1023e1c37;  */

void FUN_1023e1c18(void)

{
  func_0x000107c61168(&PTR_PTR_112e94820);
  return;
}



/* Entry: 1023e1c38; end: 1023e1c43; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e94890;
  func_0x000107c61428(param_1 + _DAT_112e94890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023e1c44; end: 1023e1c4f; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e94890;
  func_0x000107c61428(param_1 + _DAT_112e94890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023e1c50; end: 1023e1c5b; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint previewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e94898;
  func_0x000107c61428(param_1 + _DAT_112e94898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023e1c5c; end: 1023e1c67; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint setPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e94898;
  func_0x000107c61428(param_1 + _DAT_112e94898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023e1c68; end: 1023e1c73; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint customojiServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e948a0;
  func_0x000107c61428(param_1 + _DAT_112e948a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023e1c74; end: 1023e1c7f; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint setCustomojiServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e948a0;
  func_0x000107c61428(param_1 + _DAT_112e948a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023e1c80; end: 1023e1c8b; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint batchContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1c80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e948a8;
  func_0x000107c61428(param_1 + _DAT_112e948a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023e1c8c; end: 1023e1ccf;  */

void FUN_1023e1c8c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023e1cd0; end: 1023e1cdb; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint setBatchContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e948a8;
  func_0x000107c61428(param_1 + _DAT_112e948a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023e1cdc; end: 1023e1d2f;  */

void FUN_1023e1cdc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023e1d30; end: 1023e1ebf;  */

/* WARNING: Possible PIC construction at 0x0001023e1e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e1e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e1e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e1ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e1e3c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001023e1e2c) */
/* WARNING: Removing unreachable block (ram,0x0001023e1e1c) */
/* WARNING: Removing unreachable block (ram,0x0001023e1ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1d30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f180();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c411c8();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar3;
      }
      else {
        func_0x000107c3e6e0();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar3;
        }
        else {
          lVar3 = 0;
          FUN_1023e1c18();
          func_0x000107c613fc();
          *(long *)(lVar3 + 0x10) = lVar1;
          *(long *)(lVar3 + 0x18) = lVar2;
          *(long *)(lVar3 + 0x20) = unaff_x20;
          func_0x000107c61174(lVar1);
          func_0x000107c61174();
          func_0x000107c61174(unaff_x20);
          func_0x000107c4e9e4(lVar1);
          func_0x000107c61180();
          func_0x000107c4fba8();
          lVar1 = unaff_x20;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1023e1ec0; end: 1023e1ee7; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint begin] */

void FUN_1023e1ec0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023e1d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023e1ee8; end: 1023e1f9f;  */

/* WARNING: Possible PIC construction at 0x0001023e1f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e1f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e1f38) */
/* WARNING: Removing unreachable block (ram,0x0001023e1f48) */
/* WARNING: Removing unreachable block (ram,0x0001023e1f58) */
/* WARNING: Removing unreachable block (ram,0x0001023e1f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e1ee8(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112e948b0);
  if (lVar1 == 0) {
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_end_1125c29d0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(lVar1);
    func_0x000107c3fbbc(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1023e1fa0; end: 1023e1fd3; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint end] */

void FUN_1023e1fa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023e1ee8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023e1fd4; end: 1023e224b;  */

void FUN_1023e1fd4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x5377656976657270) && (param_3 == -0x13ffffff9a8f909d)) ||
       (func_0x000107c605b8(0x5377656976657270,0xec00000065706f63,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c577c8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10d4ee0)) {
        uVar2 = 0xd000000000000011;
        func_0x000107c605b8(0xd000000000000011,0x800000010ef2b120,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e6050)) &&
             (func_0x000107c605b8(0xd000000000000014,0x800000010ef19fb0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PreviewFeatureCustomojiImpl/SCPreviewFeatureCustomojiServicesPluginEntryPoint.swift"
                                ,0x53,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023e224c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52c08();
          goto LAB_1023e2060;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53dbc();
    }
  }
LAB_1023e2060:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1023e224c; end: 1023e22f7; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint setValue:forIvarName:] */

void FUN_1023e224c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1023e1fd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1023e22f8; end: 1023e2393; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e22f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e94890,0);
  func_0x000107c61614(param_1 + _DAT_112e94898,0);
  func_0x000107c61614(param_1 + _DAT_112e948a0,0);
  func_0x000107c61614(param_1 + _DAT_112e948a8,0);
  *(undefined8 *)(param_1 + _DAT_112e948b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023e2394; end: 1023e23c7;  */

void FUN_1023e2394(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023e23c8; end: 1023e242f; -[SCPreviewFeatureCustomojiServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023e23c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e94890);
  func_0x000107c61610(param_1 + _DAT_112e94898);
  func_0x000107c61610(param_1 + _DAT_112e948a0);
  func_0x000107c61610(param_1 + _DAT_112e948a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e948b0));
  return;
}



/* Entry: 1023e2430; end: 1023e244f;  */

void FUN_1023e2430(void)

{
  func_0x000107c61168(&PTR_PTR_11283b888);
  return;
}



/* Entry: 1023e2450; end: 1023e25f3;  */

void FUN_1023e2450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  puVar1 = &UNK_1104fff00;
  func_0x000107c613fc(&UNK_1104fff00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1023e24e8,puVar1);
  return;
}


