/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044f88cc; end: 1044f88db; -[SCLensCarouselSessionFlowStateChange changeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f88cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081ba8);
}



/* Entry: 1044f88dc; end: 1044f88eb; -[SCLensCarouselSessionFlowStateChange previousState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f88dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081bb0));
  return;
}



/* Entry: 1044f88ec; end: 1044f8903; -[SCLensCarouselSessionFlowStateChange currentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f88ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081bb8));
  return;
}



/* Entry: 1044f8904; end: 1044f8a73; -[SCLensCarouselSessionFlowStateChange initWithChangeType:previousState:currentState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081ba8) = param_3;
  *(undefined8 *)(param_1 + _DAT_113081bb0) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081bb8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1044f8a74; end: 1044f8a77; -[SCLensCarouselSessionFlowStateChange copyWithZone:] */

void FUN_1044f8a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f8a78; end: 1044f8a93; -[SCLensCarouselSessionFlowStateChange description] */

void FUN_1044f8a78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f8a94; end: 1044f8b0f; -[SCLensCarouselSessionFlowStateChange init] */

void FUN_1044f8a94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/LensCarouselSessionFlowStateChangeWrapper.swift",0x4b,2,
             0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f8adc);
  (*pcVar1)();
}



/* Entry: 1044f8b10; end: 1044f8b47; -[SCLensCarouselSessionFlowStateChange .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8b10(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081bb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081bb8));
  return;
}



/* Entry: 1044f8b48; end: 1044f8b67;  */

void FUN_1044f8b48(void)

{
  _objc_opt_self(&PTR_PTR_1129c6930);
  return;
}



/* Entry: 1044f8b68; end: 1044f8b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081ba8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081bb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081bb8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f8b6c; end: 1044f8c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113081be8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113081be8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113081bf0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113081bf0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1044f5b5c();
  __ss6HasherV8_combineyySuF();
  FUN_1044f63fc();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113081c08));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044f8c54; end: 1044f8e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044f8c54(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  FUN_1044f9640(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001044f9688(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_113081be8);
      if (lVar5 == *(long *)(lStack_88 + _DAT_113081be8) &&
          ((long *)(unaff_x20 + _DAT_113081be8))[1] == ((long *)(lStack_88 + _DAT_113081be8))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar5;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_113081bf0);
      if (lVar5 == *(long *)(lStack_88 + _DAT_113081bf0) &&
          ((long *)(unaff_x20 + _DAT_113081bf0))[1] == ((long *)(lStack_88 + _DAT_113081bf0))[1]) {
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar4 = (uint)lVar5;
      }
      uVar11 = *(undefined8 *)(lStack_88 + _DAT_113081bf8);
      uVar7 = 0;
      FUN_1044f5fd8();
      auStack_80[0] = uVar11;
      lStack_68 = uVar7;
      _objc_retain(uVar11);
      uVar8 = 0;
      FUN_1044f5c14();
      func_0x0001044f9688(auStack_80,0x112d387f8,&UNK_10d902650);
      uVar11 = *(undefined8 *)(lStack_88 + _DAT_113081c00);
      uVar7 = 0;
      FUN_1044f74d0();
      auStack_80[0] = uVar11;
      lStack_68 = uVar7;
      _objc_retain(uVar11);
      puVar9 = auStack_80;
      FUN_1044f65a8(puVar9);
      func_0x0001044f9688(auStack_80,0x112d387f8,&UNK_10d902650);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113081c08);
      bVar2 = *(byte *)(lStack_88 + _DAT_113081c08);
      _objc_release(lStack_88);
      uVar10 = 0;
      if (((uVar3 & uVar4 & 1) != 0) && ((uVar8 & 1) != 0)) {
        uVar10 = (uint)puVar9 & ((bVar1 ^ bVar2) ^ 1);
      }
      goto LAB_1044f8d24;
    }
  }
  uVar10 = 0;
LAB_1044f8d24:
  return uVar10 & 1;
}



/* Entry: 1044f8e54; end: 1044f8e5f; -[SCLensCarouselSessionInfo baseSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8e54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081be8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113081be8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f8e60; end: 1044f8e6b; -[SCLensCarouselSessionInfo sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8e60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081bf0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113081bf0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f8e6c; end: 1044f8eb3;  */

void FUN_1044f8e6c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f8eb4; end: 1044f8ec3; -[SCLensCarouselSessionInfo sessionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081bf8));
  return;
}



/* Entry: 1044f8ec4; end: 1044f8ed3; -[SCLensCarouselSessionInfo carouselData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081c00));
  return;
}



/* Entry: 1044f8ed4; end: 1044f8ee3; -[SCLensCarouselSessionInfo isUserInteracted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044f8ed4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113081c08);
}



/* Entry: 1044f8ee4; end: 1044f904b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081be8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081bf0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113081bf8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113081c00) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113081c08) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f904c; end: 1044f9127; -[SCLensCarouselSessionInfo initWithBaseSessionId:sessionId:sessionInfo:carouselData:isUserInteracted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f904c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113081be8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113081bf0);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_113081bf8) = param_5;
  *(undefined8 *)(param_1 + _DAT_113081c00) = param_6;
  *(undefined1 *)(param_1 + _DAT_113081c08) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1044f9128; end: 1044f9167;  */

undefined8 FUN_1044f9128(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1044f9358(param_1);
  FUN_1044f94fc(param_1);
  return uVar1;
}



/* Entry: 1044f9168; end: 1044f919b; -[SCLensCarouselSessionInfo hash] */

undefined8 FUN_1044f9168(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f8b6c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044f919c; end: 1044f922b; -[SCLensCarouselSessionInfo isEqual:] */

uint FUN_1044f919c(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044f8c54(&uStack_40);
  _objc_release(param_1);
  func_0x0001044f9688(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1044f922c; end: 1044f922f; -[SCLensCarouselSessionInfo copyWithZone:] */

void FUN_1044f922c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f9230; end: 1044f927b; -[SCLensCarouselSessionInfo description] */

void FUN_1044f9230(undefined8 param_1)

{
  undefined1 auStack_c0 [160];
  
  _objc_retain();
  FUN_1044f9530(auStack_c0);
  _objc_release(param_1);
  FUN_1044f94fc(auStack_c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f927c; end: 1044f92f7; -[SCLensCarouselSessionInfo init] */

void FUN_1044f927c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/LensCarouselSessionInfoWrapper.swift",0x40,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f92c4);
  (*pcVar1)();
}



/* Entry: 1044f92f8; end: 1044f9357; -[SCLensCarouselSessionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f92f8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081be8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081bf0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081bf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081c00));
  return;
}



/* Entry: 1044f9358; end: 1044f94fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f9358(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081be8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081bf0);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  FUN_1044f5fd8(0);
  _objc_allocWithZone();
  func_0x000100402194(&uStack_70,&uStack_110);
  func_0x000100402194(&uStack_80,&uStack_110);
  FUN_1044f3980(&uStack_c0,&uStack_110);
  puVar1 = &uStack_c0;
  FUN_1044f59f4();
  *(undefined8 **)(unaff_x20 + _DAT_113081bf8) = puVar1;
  uStack_108 = param_1[0xd];
  uStack_110 = param_1[0xc];
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  uStack_f0 = param_1[0x10];
  uStack_e8 = (undefined1)param_1[0x11];
  uStack_df = *(undefined8 *)((long)param_1 + 0x91);
  uStack_e7 = (undefined7)*(undefined8 *)((long)param_1 + 0x89);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x89) >> 0x38);
  uStack_d0 = uStack_108;
  uStack_c8 = uStack_110;
  FUN_1044f74d0(0);
  _objc_allocWithZone();
  FUN_1044f9640(&uStack_c8,auStack_118,0x112d3b7d8,&UNK_10d920690);
  FUN_1044f9640(&uStack_d0,auStack_118,0x113081a88,&UNK_10dd0f6d8);
  puVar1 = &uStack_110;
  FUN_1044f7074();
  func_0x0001044f9688(&uStack_c8,0x112d3b7d8,&UNK_10d920690);
  func_0x0001044f9688(&uStack_d0,0x113081a88,&UNK_10dd0f6d8);
  *(undefined8 **)(unaff_x20 + _DAT_113081c00) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_113081c08) = *(undefined1 *)((long)param_1 + 0x99);
  _objc_msgSendSuper2(&stack0xfffffffffffffed8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f94fc; end: 1044f952f;  */

undefined8 FUN_1044f94fc(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044f4c64)();
  return param_1;
}



/* Entry: 1044f9530; end: 1044f961f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f9530(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113081be8);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113081be8))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113081bf0);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113081bf0))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_113081bf8);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar6);
  FUN_1044f5ea8(&uStack_90);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113081c00);
  _objc_retain(uVar6);
  FUN_1044f7288(&uStack_d0);
  _objc_release(uVar6);
  uVar5 = *(undefined1 *)(param_2 + _DAT_113081c08);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[9] = uStack_68;
  param_1[8] = uStack_70;
  param_1[0xb] = uStack_58;
  param_1[10] = uStack_60;
  *(undefined8 *)((long)param_1 + 0x91) = uStack_9f;
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_a0,uStack_a7);
  param_1[0xf] = uStack_b8;
  param_1[0xe] = uStack_c0;
  param_1[0x11] = CONCAT71(uStack_a7,uStack_a8);
  param_1[0x10] = uStack_b0;
  param_1[0xd] = uStack_c8;
  param_1[0xc] = uStack_d0;
  *(undefined1 *)((long)param_1 + 0x99) = uVar5;
  return;
}



/* Entry: 1044f9620; end: 1044f963f;  */

void FUN_1044f9620(void)

{
  _objc_opt_self(&PTR_PTR_1129c6a08);
  return;
}



/* Entry: 1044f9640; end: 1044f96c7;  */

undefined8 FUN_1044f9640(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044f96c8; end: 1044f9ccb;  */

long FUN_1044f96c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044f9ccc; end: 1044f9d6b;  */

void FUN_1044f9ccc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044f9d6c; end: 1044f9d6f;  */

void FUN_1044f9d6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0f9d0;
  _swift_getWitnessTable(&UNK_10dd0f9d0,&UNK_11077fd40);
  puRam0000000113081c38 = puVar1;
  return;
}



/* Entry: 1044f9d70; end: 1044f9daf;  */

void FUN_1044f9d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0f9d0;
  _swift_getWitnessTable(&UNK_10dd0f9d0,&UNK_11077fd40);
  puRam0000000113081c38 = puVar1;
  return;
}



/* Entry: 1044f9db0; end: 1044f9ebb;  */

undefined8 FUN_1044f9db0(void)

{
  return 1;
}



/* Entry: 1044f9ebc; end: 1044f9efb;  */

void FUN_1044f9ebc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0fa20;
  _swift_getWitnessTable(&UNK_10dd0fa20,&UNK_11077fd98);
  puRam0000000113081c40 = puVar1;
  return;
}



/* Entry: 1044f9efc; end: 1044f9fa7;  */

void FUN_1044f9efc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044f9fa8; end: 1044f9fdf;  */

void FUN_1044f9fa8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044f9fe0; end: 1044f9fef; -[SCLensCarouselActivationParameters activationSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f9fe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081c48);
}



/* Entry: 1044f9ff0; end: 1044f9fff; -[SCLensCarouselActivationParameters selection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f9ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081c50));
  return;
}



/* Entry: 1044fa000; end: 1044fa00f; -[SCLensCarouselActivationParameters lensToInject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081c58));
  return;
}



/* Entry: 1044fa010; end: 1044fa01f; -[SCLensCarouselActivationParameters lensCarouselUIConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081c60));
  return;
}



/* Entry: 1044fa020; end: 1044fa02b; -[SCLensCarouselActivationParameters initWithActivationSource:selection:] */

void FUN_1044fa020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff0c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithActivationSource_selecti_1125d9ce0,param_3,param_4,0,0);
  return;
}



/* Entry: 1044fa02c; end: 1044fa0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081c50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081c58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081c60) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044fa0b8; end: 1044fa137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113081c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081c50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081c58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081c60) = param_4;
  func_0x0001044fa118();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044fa138; end: 1044fa1d3; -[SCLensCarouselActivationParameters initWithActivationSource:selection:lensToInject:lensCarouselUIConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_113081c48) = param_3;
  *(undefined8 *)(param_1 + _DAT_113081c50) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081c58) = param_5;
  *(undefined8 *)(param_1 + _DAT_113081c60) = param_6;
  lVar2 = param_1;
  func_0x0001044fa118();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1044fa1d4; end: 1044fa22f; -[SCLensCarouselActivationParameters init] */

void FUN_1044fa1d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselScope.LensCarouselActivationParameters",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044fa200);
  (*pcVar1)();
}



/* Entry: 1044fa230; end: 1044fa277; -[SCLensCarouselActivationParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa230(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081c50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081c58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081c60));
  return;
}



/* Entry: 1044fa278; end: 1044fa28b;  */

bool FUN_1044fa278(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044fa28c; end: 1044fa363;  */

void FUN_1044fa28c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044fa364; end: 1044fa383;  */

void FUN_1044fa364(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044fa384; end: 1044fa3c3;  */

void FUN_1044fa384(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0fb10;
  _swift_getWitnessTable(&UNK_10dd0fb10,&UNK_11077fe10);
  puRam0000000113081c90 = puVar1;
  return;
}



/* Entry: 1044fa3c4; end: 1044fa3e7;  */

undefined1  [16] FUN_1044fa3c4(void)

{
  return ZEXT816(0x11077fe10);
}



/* Entry: 1044fa3e8; end: 1044fa4bf;  */

void FUN_1044fa3e8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044fa4c0; end: 1044fa4df;  */

void FUN_1044fa4c0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044fa4e0; end: 1044fa51f;  */

void FUN_1044fa4e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0fbd0;
  _swift_getWitnessTable(&UNK_10dd0fbd0,&UNK_11077fe88);
  puRam0000000113081c98 = puVar1;
  return;
}



/* Entry: 1044fa520; end: 1044fa52f;  */

undefined1  [16] FUN_1044fa520(void)

{
  return ZEXT816(0x11077fe88);
}



/* Entry: 1044fa530; end: 1044fa54f; -[_TtC19SCLensCarouselScope19SCLensCarouselScope featureContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa530(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113081ca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fa550; end: 1044fa55f; -[_TtC19SCLensCarouselScope19SCLensCarouselScope lensCarouselScopedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081ca8));
  return;
}



/* Entry: 1044fa560; end: 1044fa56f; -[_TtC19SCLensCarouselScope19SCLensCarouselScope opaqueLensCarouselServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081cb0));
  return;
}



/* Entry: 1044fa570; end: 1044fa57b; -[_TtC19SCLensCarouselScope19SCLensCarouselScope opaqueLensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa570(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113081cb8;
  _swift_beginAccess(param_1 + _DAT_113081cb8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fa57c; end: 1044fa587; -[_TtC19SCLensCarouselScope19SCLensCarouselScope setOpaqueLensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113081cb8;
  _swift_beginAccess(param_1 + _DAT_113081cb8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1044fa588; end: 1044fa593; -[_TtC19SCLensCarouselScope19SCLensCarouselScope scopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa588(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113081cc0;
  _swift_beginAccess(param_1 + _DAT_113081cc0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fa594; end: 1044fa5d7;  */

void FUN_1044fa594(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fa5d8; end: 1044fa5e3; -[_TtC19SCLensCarouselScope19SCLensCarouselScope setScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113081cc0;
  _swift_beginAccess(param_1 + _DAT_113081cc0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1044fa5e4; end: 1044fa637;  */

void FUN_1044fa5e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1044fa638; end: 1044fa647; -[_TtC19SCLensCarouselScope19SCLensCarouselScope lensCarouselDataUpdatingEventsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081cc8));
  return;
}



/* Entry: 1044fa648; end: 1044fa657; -[_TtC19SCLensCarouselScope19SCLensCarouselScope lensCarouselSelectionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081cd0));
  return;
}



/* Entry: 1044fa658; end: 1044fa667; -[_TtC19SCLensCarouselScope19SCLensCarouselScope lensCarouselPresentationEventsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081cd8));
  return;
}



/* Entry: 1044fa668; end: 1044fa693; -[_TtC19SCLensCarouselScope19SCLensCarouselScope init] */

void FUN_1044fa668(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselScope.SCLensCarouselScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044fa694);
  (*pcVar1)();
}



/* Entry: 1044fa694; end: 1044fa777; -[_TtC19SCLensCarouselScope19SCLensCarouselScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fa694(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113081ca0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081ca8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081cb0));
  func_0x000100dba104(param_1 + _DAT_113081cb8);
  func_0x000100dba104(param_1 + _DAT_113081cc0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081cc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081cd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081cd8));
  return;
}



/* Entry: 1044fa778; end: 1044fa927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1044fa778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x0001003511c8();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113081cb8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113081cb8,0);
  lVar3 = _DAT_113081cc0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113081cc0,0);
  *(undefined8 *)(lVar5 + _DAT_113081ca0) = param_5;
  *(undefined8 *)(lVar5 + _DAT_113081cb0) = param_7;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_1);
  *(undefined8 *)(lVar5 + _DAT_113081cc8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113081cd0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113081cd8) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113081ca8) = param_6;
  _swift_beginAccess(lVar5 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_8);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 1044fa928; end: 1044faa53; -[_TtC19SCLensCarouselScope32SCLensCarouselScopeSaberServices buildWithScopeDelegate:lensCarouselDataUpdatingEventsObservable:lensCarouselSelectionObservable:lensCarouselPresentationEventsObservable:featureContainerView:lensCarouselScopedServices:opaqueLensCarouselServices:opaqueLensCarouselManager:] */

void FUN_1044fa928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _swift_unknownObjectRetain(param_10);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1044fa778(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _swift_unknownObjectRelease(param_10);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044faa54; end: 1044faa7f; -[_TtC19SCLensCarouselScope32SCLensCarouselScopeSaberServices init] */

void FUN_1044faa54(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselScope.SCLensCarouselScopeSaberServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044faa80);
  (*pcVar1)();
}



/* Entry: 1044faa80; end: 1044faa83;  */

void FUN_1044faa80(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044faa84; end: 1044faab7;  */

void FUN_1044faa84(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044faab8; end: 1044faaf3; -[_TtC19SCLensCarouselScope32SCLensCarouselScopeSaberServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044faab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113081ce8));
  return;
}



/* Entry: 1044faaf4; end: 1044fab33;  */

void FUN_1044faaf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0fd50;
  _swift_getWitnessTable(&UNK_10dd0fd50,&UNK_11077ff30);
  puRam0000000113081d40 = puVar1;
  return;
}



/* Entry: 1044fab34; end: 1044fabdf;  */

void FUN_1044fab34(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044fabe0; end: 1044fac13;  */

void FUN_1044fabe0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 1044fac14; end: 1044fac5b;  */

uint FUN_1044fac14(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1044fac5c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044fac5c; end: 1044fadb7;  */

undefined8 FUN_1044fac5c(int *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 4);
  lVar1 = *(long *)(param_2 + 4);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 2);
    if ((uVar3 != *(ulong *)(param_2 + 2) || lVar2 != lVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,*(ulong *)(param_2 + 2),lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 6);
    if ((uVar3 == *(ulong *)(param_2 + 6)) && (lVar2 == lVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar2,*(ulong *)(param_2 + 6),lVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1044fadb8; end: 1044fae2b;  */

undefined8 * FUN_1044fadb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1044fae2c; end: 1044fae77;  */

undefined8 * FUN_1044fae2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1044fae78; end: 1044faf3f;  */

int FUN_1044fae78(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044faf40; end: 1044faf97;  */

uint FUN_1044faf40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_1044faf98(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1044faf98; end: 1044fb0d3;  */

uint FUN_1044faf98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar8 = *param_1;
  bVar3 = (byte)param_1[6];
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      if ((char)param_2[6] != '\0') goto LAB_1044fb0b0;
    }
    else if ((char)param_2[6] != '\x01') goto LAB_1044fb0b0;
    bVar4 = (int)uVar8 == (int)*param_2;
LAB_1044fb0a8:
    uVar5 = (uint)bVar4;
  }
  else {
    uStack_a0 = param_1[1];
    uVar1 = param_1[2];
    if (bVar3 == 2) {
      if ((char)param_2[6] == '\x02') {
        uVar10 = param_1[3];
        uVar2 = param_1[4];
        uVar11 = param_1[5];
        uVar16 = param_2[4];
        uVar15 = param_2[3];
        uVar14 = param_2[2];
        uVar13 = param_2[1];
        uVar12 = param_2[5];
        uVar9 = *param_2;
        uVar6 = 0;
        func_0x0001007bbbf8(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar9,uVar6);
        if ((uVar8 & 1) != 0) {
          puVar7 = &uStack_a0;
          uStack_98 = uVar1;
          uStack_90 = uVar10;
          uStack_88 = uVar2;
          uStack_80 = uVar11;
          uStack_78 = uVar13;
          uStack_70 = uVar14;
          uStack_68 = uVar15;
          uStack_60 = uVar16;
          uStack_58 = uVar12;
          FUN_1044fac5c(puVar7,&uStack_78);
          uVar5 = (uint)puVar7;
          goto LAB_1044fb0b4;
        }
      }
    }
    else if ((char)param_2[6] == '\x03') {
      uVar10 = param_2[2];
      if (((uVar8 == *param_2) && (uStack_a0 == param_2[1])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar8,uStack_a0,*param_2,param_2[1],0), (uVar8 & 1) != 0)) {
        bVar4 = (int)uVar1 == (int)uVar10;
        goto LAB_1044fb0a8;
      }
    }
LAB_1044fb0b0:
    uVar5 = 0;
  }
LAB_1044fb0b4:
  return uVar5 & 1;
}



/* Entry: 1044fb0d4; end: 1044fb0ff;  */

long FUN_1044fb0d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044fb100; end: 1044fb117;  */

void FUN_1044fb100(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[3];
  uVar2 = param_1[5];
  uVar3 = param_1[1];
  if (*(char *)(param_1 + 6) != '\x03') {
    if (*(char *)(param_1 + 6) != '\x02') {
      return;
    }
    _objc_release(*param_1,param_1[1],param_1[2],uVar1,param_1[4]);
    _swift_bridgeObjectRelease(uVar1);
    uVar3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1044fb118; end: 1044fb21b;  */

undefined8 * FUN_1044fb118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  func_0x000103f68ed0(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 1044fb21c; end: 1044fb26f;  */

undefined8 * FUN_1044fb21c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  func_0x000103f69184(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 1044fb270; end: 1044fb333;  */

int FUN_1044fb270(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044fb334; end: 1044fb3b3;  */

uint FUN_1044fb334(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  uStack_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_1044fb3b4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1044fb3b4; end: 1044fb807;  */

undefined8 FUN_1044fb3b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  byte bStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  
  uVar1 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  uVar3 = param_1[4];
  uVar9 = param_1[5];
  cVar13 = *(char *)(param_1 + 6);
  uVar4 = *param_2;
  uVar10 = param_2[1];
  uVar5 = param_2[2];
  uVar11 = param_2[3];
  uVar6 = param_2[4];
  uVar12 = param_2[5];
  cVar14 = *(char *)(param_2 + 6);
  if (cVar13 == -1) {
    if (cVar14 == -1) goto LAB_1044fb5a4;
  }
  else if (cVar14 != -1) {
    uStack_d8 = uVar1;
    uStack_d0 = uVar7;
    uStack_c8 = uVar2;
    uStack_c0 = uVar8;
    uStack_b8 = uVar3;
    uStack_b0 = uVar9;
    cStack_a8 = cVar13;
    uStack_a0 = uVar4;
    uStack_98 = uVar10;
    uStack_90 = uVar5;
    uStack_88 = uVar11;
    uStack_80 = uVar6;
    uStack_78 = uVar12;
    cStack_70 = cVar14;
    func_0x000103f68ebc(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,cVar14);
    func_0x000103f68ebc(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,cVar13);
    puVar18 = &uStack_d8;
    FUN_1044faf98(puVar18,&uStack_a0);
    func_0x000103f69170(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,cVar14);
    func_0x000103f69170(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,cVar13);
    if (((ulong)puVar18 & 1) == 0) {
      return 0;
    }
LAB_1044fb5a4:
    uVar20 = param_1[7];
    lVar21 = param_2[7];
    if (uVar20 == 1) {
      if (lVar21 != 1) {
        return 0;
      }
    }
    else {
      if (lVar21 == 1) {
        return 0;
      }
      if (uVar20 == 0) {
        if (lVar21 != 0) {
          return 0;
        }
      }
      else {
        if (lVar21 == 0) {
          return 0;
        }
        FUN_1044fbf68(0,0x112d4d630,&PTR_PTR_1126ae6a8);
        func_0x000103f68f20(lVar21);
        func_0x000103f68f20(uVar20);
        uVar19 = uVar20;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar20,lVar21);
        func_0x000103f691d0(lVar21);
        func_0x000103f691d0(uVar20);
        if ((uVar19 & 1) == 0) {
          return 0;
        }
      }
    }
    uVar20 = param_1[9];
    lVar21 = param_2[9];
    if (uVar20 == 0) {
      if (lVar21 != 0) {
        return 0;
      }
    }
    else {
      if (lVar21 == 0) {
        return 0;
      }
      if ((((uint)param_2[8] ^ (uint)param_1[8]) & 1) != 0) {
        return 0;
      }
      bVar15 = *(byte *)(param_1 + 10);
      bVar16 = *(byte *)(param_2 + 10);
      FUN_1044fbf68(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      _objc_retain(lVar21);
      _objc_retain();
      uVar19 = uVar20;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      if ((uVar19 & 1) == 0) {
        _objc_release(uVar20);
        _objc_release(lVar21);
        return 0;
      }
      _objc_release(lVar21);
      _objc_release(uVar20);
      if (((bVar16 ^ bVar15) & 1) != 0) {
        return 0;
      }
    }
    uVar1 = param_1[0xb];
    uVar3 = param_1[0xc];
    uVar20 = param_1[0xd];
    uVar4 = param_1[0xe];
    bVar15 = *(byte *)(param_1 + 0xf);
    uVar2 = param_2[0xb];
    uVar5 = param_2[0xc];
    uVar19 = param_2[0xd];
    uVar6 = param_2[0xe];
    bVar16 = *(byte *)(param_2 + 0xf);
    bVar17 = uVar19 >> 1 == 0xffffffff;
    if ((uVar20 >> 1 == 0xffffffff) && (bVar15 < 2)) {
      if (bVar17 && bVar16 < 2) {
        return 1;
      }
    }
    else if (!bVar17 || bVar16 >= 2) {
      uStack_128 = uVar1;
      uStack_120 = uVar3;
      uStack_118 = uVar20;
      uStack_110 = uVar4;
      bStack_108 = bVar15;
      uStack_100 = uVar2;
      uStack_f8 = uVar5;
      uStack_f0 = uVar19;
      uStack_e8 = uVar6;
      bStack_e0 = bVar16;
      func_0x000103f68f30(uVar2,uVar5,uVar19,uVar6,bVar16);
      func_0x000103f68f30(uVar1,uVar3,uVar20,uVar4,bVar15);
      puVar18 = &uStack_128;
      FUN_1044fc558(puVar18,&uStack_100);
      func_0x000103f691e0(uVar2,uVar5,uVar19,uVar6,bVar16);
      func_0x000103f691e0(uVar1,uVar3,uVar20,uVar4,bVar15);
      if (((ulong)puVar18 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x000103f68f30(uVar2,uVar5,uVar19,uVar6,bVar16);
    func_0x000103f68f30(uVar1,uVar3,uVar20,uVar4,bVar15);
    func_0x000103f691e0(uVar1,uVar3,uVar20,uVar4,bVar15);
    func_0x000103f691e0(uVar2,uVar5,uVar19,uVar6,bVar16);
    return 0;
  }
  func_0x000103f68ebc(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,cVar14);
  func_0x000103f68ebc(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,cVar13);
  func_0x000103f69170(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,cVar13);
  func_0x000103f69170(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,cVar14);
  return 0;
}



/* Entry: 1044fb808; end: 1044fb8af;  */

long FUN_1044fb808(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044fb8b0; end: 1044fbc8b;  */

undefined8 * FUN_1044fb8b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar4 = *(char *)(param_2 + 6);
  if (cVar4 == -1) {
    uVar9 = *param_2;
    uVar6 = param_2[3];
    uVar10 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[3] = uVar6;
    param_1[2] = uVar10;
    uVar9 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar9;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    uVar9 = *param_2;
    uVar1 = param_2[1];
    uVar10 = param_2[2];
    uVar2 = param_2[3];
    uVar6 = param_2[4];
    uVar3 = param_2[5];
    func_0x000103f68ed0(uVar9,uVar1,uVar10,uVar2,uVar6,uVar3,cVar4);
    *param_1 = uVar9;
    param_1[1] = uVar1;
    param_1[2] = uVar10;
    param_1[3] = uVar2;
    param_1[4] = uVar6;
    param_1[5] = uVar3;
    *(char *)(param_1 + 6) = cVar4;
  }
  lVar7 = param_2[7];
  if (lVar7 != 1) {
    _objc_retain(lVar7);
  }
  param_1[7] = lVar7;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar8 = param_2[0xd];
  bVar5 = *(byte *)(param_2 + 0xf);
  _objc_retain();
  if ((uVar8 >> 1 == 0xffffffff) && (bVar5 < 2)) {
    uVar9 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar9;
    uVar9 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar9;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  }
  else {
    uVar9 = param_2[0xb];
    uVar10 = param_2[0xc];
    uVar6 = param_2[0xe];
    func_0x000103f68f50(uVar9,uVar10,uVar8,uVar6,bVar5);
    param_1[0xb] = uVar9;
    param_1[0xc] = uVar10;
    param_1[0xd] = uVar8;
    param_1[0xe] = uVar6;
    *(byte *)(param_1 + 0xf) = bVar5;
  }
  return param_1;
}



/* Entry: 1044fbc8c; end: 1044fbd27;  */

undefined8 FUN_1044fbc8c(undefined8 param_1)

{
  FUN_1044fb100();
  return param_1;
}



/* Entry: 1044fbd28; end: 1044fbe87;  */

undefined8 * FUN_1044fbd28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (*(char *)(param_1 + 6) == -1) {
LAB_1044fbd88:
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar14 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar14;
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    cVar2 = *(char *)(param_2 + 6);
    if (cVar2 == -1) {
      func_0x0001044fbc8c(param_1);
      goto LAB_1044fbd88;
    }
    uVar4 = *param_1;
    uVar9 = param_1[1];
    uVar14 = param_1[2];
    uVar12 = param_1[3];
    uVar6 = param_1[4];
    uVar1 = param_1[5];
    uVar11 = *param_2;
    uVar15 = param_2[3];
    uVar13 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    param_1[3] = uVar15;
    param_1[2] = uVar13;
    uVar11 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    *(char *)(param_1 + 6) = cVar2;
    func_0x000103f69184(uVar4,uVar9,uVar14,uVar12,uVar6,uVar1);
  }
  plVar10 = param_1 + 7;
  lVar7 = param_2[7];
  if (*plVar10 != 1) {
    if (lVar7 != 1) {
      *plVar10 = lVar7;
      _objc_release();
      goto LAB_1044fbdd8;
    }
    func_0x0001044fbcc0(plVar10);
    lVar7 = 1;
  }
  *plVar10 = lVar7;
LAB_1044fbdd8:
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar5 = param_1[0xd];
  if ((uVar5 >> 1 != 0xffffffff) || (1 < *(byte *)(param_1 + 0xf))) {
    uVar8 = param_2[0xd];
    bVar3 = *(byte *)(param_2 + 0xf);
    if ((uVar8 >> 1 != 0xffffffff) || (1 < bVar3)) {
      uVar9 = param_2[0xe];
      uVar4 = param_1[0xb];
      uVar14 = param_1[0xc];
      uVar6 = param_1[0xe];
      uVar12 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar12;
      param_1[0xd] = uVar8;
      param_1[0xe] = uVar9;
      *(byte *)(param_1 + 0xf) = bVar3;
      func_0x000103f69200(uVar4,uVar14,uVar5,uVar6);
      return param_1;
    }
    func_0x0001044fbcf4(param_1 + 0xb);
  }
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar4;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}


