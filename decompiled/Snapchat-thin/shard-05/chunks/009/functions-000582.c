/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042d3fe8; end: 1042d3ff7; -[SCStoryAdTileInteractionTrackInfo attachmentTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306be28));
  return;
}



/* Entry: 1042d3ff8; end: 1042d4043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3ff8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306be28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d4044; end: 1042d409b; -[SCStoryAdTileInteractionTrackInfo initWithAttachmentTrackInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306be28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1042d409c; end: 1042d4247; -[SCStoryAdTileInteractionTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1042d409c(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = param_1;
  if (*(long *)(param_1 + _DAT_11306be28) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    FUN_1042a3adc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1042d4248; end: 1042d42c7; -[SCStoryAdTileInteractionTrackInfo isEqual:] */

uint FUN_1042d4248(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001042d4138(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042d42c8; end: 1042d42cb; -[SCStoryAdTileInteractionTrackInfo copyWithZone:] */

void FUN_1042d42c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d42cc; end: 1042d431b; -[SCStoryAdTileInteractionTrackInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d42cc(long param_1)

{
  undefined1 auStack_ad8 [2744];
  
  if (*(long *)(param_1 + _DAT_11306be28) != 0) {
    _objc_retain();
    func_0x0001042a6474(auStack_ad8);
    func_0x00010179528c(auStack_ad8);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d431c; end: 1042d4397; -[SCStoryAdTileInteractionTrackInfo init] */

void FUN_1042d431c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/StoryAdTileInteractionTrackInfoWrapper.swift",0x3b,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d4364);
  (*pcVar1)();
}



/* Entry: 1042d4398; end: 1042d43a7; -[SCStoryAdTileInteractionTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306be28));
  return;
}



/* Entry: 1042d43a8; end: 1042d43c7;  */

void FUN_1042d43a8(void)

{
  _objc_opt_self(&PTR_PTR_112995fe8);
  return;
}



/* Entry: 1042d43c8; end: 1042d4443;  */

void FUN_1042d43c8(undefined8 param_1)

{
  undefined1 auStack_b98 [2936];
  
  func_0x0001042d5b90(auStack_b98);
  _memcpy(param_1,auStack_b98,0xb78);
  return;
}



/* Entry: 1042d4444; end: 1042d479f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4444(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  if (((undefined8 *)(unaff_x20 + _DAT_11306be58))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306be58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306be60));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306be68));
  if (((undefined8 *)(unaff_x20 + _DAT_11306be70))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306be70);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306be78));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306be80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306be88));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306be90));
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306be98) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306be98);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306bea0) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306bea0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  lVar4 = *(long *)(unaff_x20 + _DAT_11306bea8);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1042a6cd4(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_11306beb0);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  lVar4 = *(long *)(unaff_x20 + _DAT_11306beb8);
  if (lVar4 == 0) {
    uVar3 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    if (*(long *)(lVar4 + _DAT_11306be28) == 0) {
      uVar3 = 0;
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      FUN_1042a3adc();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar3);
    }
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (*(long *)(unaff_x20 + _DAT_11306bec0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042d3bf8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306bec8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bed0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bed8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bee0));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bee8);
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11306bef0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104817028();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d47a0; end: 1042d4cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042d47a0(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long unaff_x20;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_b4;
  long lStack_b0;
  long alStack_a8 [5];
  
  lVar16 = unaff_x20;
  _swift_getObjectType();
  FUN_1042d6118(param_1,alStack_a8,0x112d387f8,&UNK_10d902650);
  if (alStack_a8[3] == 0) {
    func_0x0001042d6160(alStack_a8,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar13 = &lStack_b0;
    _swift_dynamicCast(plVar13,alStack_a8,PTR___sypN_11034f1a8 + 8,lVar16,6);
    if (((ulong)plVar13 & 1) != 0) {
      lVar16 = ((long *)(unaff_x20 + _DAT_11306be58))[1];
      lVar17 = ((long *)(lStack_b0 + _DAT_11306be58))[1];
      if (lVar16 == 0 || lVar17 == 0) {
        uStack_b4 = (uint)(lVar16 == 0 && lVar17 == 0);
      }
      else {
        lVar18 = *(long *)(unaff_x20 + _DAT_11306be58);
        if (lVar18 == *(long *)(lStack_b0 + _DAT_11306be58) && lVar16 == lVar17) {
          uStack_b4 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_b4 = (uint)lVar18;
        }
      }
      lVar19 = *(long *)(unaff_x20 + _DAT_11306be60);
      lVar18 = *(long *)(lStack_b0 + _DAT_11306be60);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11306be68);
      bVar3 = *(byte *)(lStack_b0 + _DAT_11306be68);
      lVar16 = ((long *)(unaff_x20 + _DAT_11306be70))[1];
      lVar17 = ((long *)(lStack_b0 + _DAT_11306be70))[1];
      uVar25 = (uint)(lVar16 == 0 && lVar17 == 0);
      if ((lVar16 != 0) && (lVar17 != 0)) {
        lVar14 = *(long *)(unaff_x20 + _DAT_11306be70);
        if ((lVar14 == *(long *)(lStack_b0 + _DAT_11306be70)) && (lVar16 == lVar17)) {
          uVar25 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar25 = (uint)lVar14;
        }
      }
      lVar23 = *(long *)(unaff_x20 + _DAT_11306be78);
      lVar24 = *(long *)(lStack_b0 + _DAT_11306be78);
      lVar20 = *(long *)(unaff_x20 + _DAT_11306be80);
      lVar16 = *(long *)(lStack_b0 + _DAT_11306be80);
      lVar21 = *(long *)(unaff_x20 + _DAT_11306be88);
      lVar17 = *(long *)(lStack_b0 + _DAT_11306be88);
      lVar22 = *(long *)(unaff_x20 + _DAT_11306be90);
      lVar14 = *(long *)(lStack_b0 + _DAT_11306be90);
      dVar33 = *(double *)(unaff_x20 + _DAT_11306be98);
      dVar34 = *(double *)(lStack_b0 + _DAT_11306be98);
      dVar35 = *(double *)(unaff_x20 + _DAT_11306bea0);
      dVar36 = *(double *)(lStack_b0 + _DAT_11306bea0);
      lVar31 = *(long *)(unaff_x20 + _DAT_11306bea8);
      lVar26 = *(long *)(lStack_b0 + _DAT_11306bea8);
      uVar29 = (uint)(lVar31 == 0 && lVar26 == 0);
      if ((lVar31 != 0) && (lVar26 != 0)) {
        _swift_bridgeObjectRetain(lVar26);
        lVar30 = lVar31;
        _swift_bridgeObjectRetain();
        uVar29 = (uint)lVar30;
        func_0x00010422a6bc();
        _swift_bridgeObjectRelease(lVar31);
        _swift_bridgeObjectRelease(lVar26);
      }
      bVar4 = *(byte *)(unaff_x20 + _DAT_11306beb0);
      bVar5 = *(byte *)(lStack_b0 + _DAT_11306beb0);
      if (*(long *)(unaff_x20 + _DAT_11306beb8) == 0) {
        uStack_128 = (uint)(*(long *)(lStack_b0 + _DAT_11306beb8) == 0);
      }
      else {
        lVar26 = *(long *)(lStack_b0 + _DAT_11306beb8);
        if (lVar26 == 0) {
          lVar31 = 0;
          alStack_a8[1] = 0;
          alStack_a8[2] = 0;
        }
        else {
          lVar31 = 0;
          FUN_1042d43a8();
        }
        alStack_a8[0] = lVar26;
        alStack_a8[3] = lVar31;
        _objc_retain(lVar26);
        uStack_128 = (uint)alStack_a8;
        func_0x0001042d4138();
        func_0x0001042d6160(alStack_a8,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306bec0) == 0) {
        uStack_12c = (uint)(*(long *)(lStack_b0 + _DAT_11306bec0) == 0);
      }
      else {
        lVar26 = *(long *)(lStack_b0 + _DAT_11306bec0);
        if (lVar26 == 0) {
          lVar31 = 0;
          alStack_a8[1] = 0;
          alStack_a8[2] = 0;
        }
        else {
          lVar31 = 0;
          FUN_1042d3eec();
        }
        alStack_a8[0] = lVar26;
        alStack_a8[3] = lVar31;
        _objc_retain(lVar26);
        uStack_12c = (uint)alStack_a8;
        FUN_1042d3c90();
        func_0x0001042d6160(alStack_a8,0x112d387f8,&UNK_10d902650);
      }
      lVar31 = *(long *)(unaff_x20 + _DAT_11306bec8);
      lVar26 = *(long *)(lStack_b0 + _DAT_11306bec8);
      bVar6 = *(byte *)(unaff_x20 + _DAT_11306bed0);
      bVar7 = *(byte *)(lStack_b0 + _DAT_11306bed0);
      bVar8 = *(byte *)(unaff_x20 + _DAT_11306bed8);
      bVar9 = *(byte *)(lStack_b0 + _DAT_11306bed8);
      bVar10 = *(byte *)(unaff_x20 + _DAT_11306bee0);
      bVar11 = *(byte *)(lStack_b0 + _DAT_11306bee0);
      lVar30 = *(long *)(unaff_x20 + _DAT_11306bee8);
      lVar32 = *(long *)(lStack_b0 + _DAT_11306bee8);
      if (*(long *)(unaff_x20 + _DAT_11306bef0) == 0) {
        lVar28 = *(long *)(lStack_b0 + _DAT_11306bef0);
        lVar27 = lVar28;
        _objc_retain(lVar28);
        _objc_release(lStack_b0);
        if (lVar28 == 0) {
          uVar12 = 1;
        }
        else {
          _objc_release(lVar27);
          uVar12 = 0;
        }
      }
      else {
        lVar27 = *(long *)(lStack_b0 + _DAT_11306bef0);
        if (lVar27 == 0) {
          uVar15 = 0;
          alStack_a8[1] = 0;
          alStack_a8[2] = 0;
        }
        else {
          uVar15 = 0;
          func_0x000104817798();
        }
        alStack_a8[0] = lVar27;
        alStack_a8[3] = uVar15;
        _objc_retain(lVar27);
        plVar13 = alStack_a8;
        func_0x0001048170e0(plVar13);
        uVar12 = (uint)plVar13;
        _objc_release(lStack_b0);
        func_0x0001042d6160(alStack_a8,0x112d387f8,&UNK_10d902650);
      }
      uVar1 = 0;
      if (lVar20 == lVar16) {
        uVar1 = uVar25 & (((uint)(lVar19 != lVar18) | uStack_b4 ^ 0xffffffff | (uint)(bVar2 ^ bVar3)
                          ) ^ 0xffffffff) & (uint)(lVar23 == lVar24);
      }
      uVar25 = 0;
      if (lVar21 == lVar17) {
        uVar25 = uVar1;
      }
      uVar1 = 0;
      if (lVar22 == lVar14) {
        uVar1 = uVar25;
      }
      uVar25 = 0;
      if (dVar33 == dVar34) {
        uVar25 = uVar1;
      }
      uVar1 = 0;
      if (dVar35 == dVar36) {
        uVar1 = uVar25;
      }
      uVar25 = 0;
      if (lVar31 == lVar26) {
        uVar25 = uVar1 & uVar29 & ((bVar4 ^ bVar5) ^ 0xffffffff) & uStack_128 & uStack_12c;
      }
      uVar29 = 0;
      if (lVar30 == lVar32) {
        uVar29 = uVar25 & ((bVar6 ^ bVar7) ^ 0xffffffff) & ((bVar8 ^ bVar9) ^ 0xffffffff) &
                 ((bVar10 ^ bVar11) ^ 0xffffffff);
      }
      return uVar29 & uVar12;
    }
  }
  return 0;
}



/* Entry: 1042d4cd4; end: 1042d4cdf; -[SCStoryAdTrackInfo creativeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4cd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306be58))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306be58);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042d4ce0; end: 1042d4cef; -[SCStoryAdTrackInfo snapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4ce0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306be60);
}



/* Entry: 1042d4cf0; end: 1042d4cff; -[SCStoryAdTrackInfo isAudioOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042d4cf0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306be68);
}



/* Entry: 1042d4d00; end: 1042d4d0b; -[SCStoryAdTrackInfo exitEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4d00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306be70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306be70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042d4d0c; end: 1042d4d63;  */

void FUN_1042d4d0c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042d4d64; end: 1042d4d73; -[SCStoryAdTrackInfo totalSwipeUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306be78);
}



/* Entry: 1042d4d74; end: 1042d4d83; -[SCStoryAdTrackInfo uniqueSwipeUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4d74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306be80);
}



/* Entry: 1042d4d84; end: 1042d4d93; -[SCStoryAdTrackInfo maxViewedSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4d84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306be88);
}



/* Entry: 1042d4d94; end: 1042d4da3; -[SCStoryAdTrackInfo totalTopSnapMediaDurationInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4d94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306be90);
}



/* Entry: 1042d4da4; end: 1042d4db3; -[SCStoryAdTrackInfo totalTimeViewedInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4da4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306be98);
}



/* Entry: 1042d4db4; end: 1042d4dc3; -[SCStoryAdTrackInfo tileTimeViewedInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4db4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bea0);
}



/* Entry: 1042d4dc4; end: 1042d4e1f; -[SCStoryAdTrackInfo adSnapTrackInfoList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4dc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306bea8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042a6cd4(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1042d4e20; end: 1042d4e2f; -[SCStoryAdTrackInfo hasCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042d4e20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306beb0);
}



/* Entry: 1042d4e30; end: 1042d4e3f; -[SCStoryAdTrackInfo tileInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306beb8));
  return;
}



/* Entry: 1042d4e40; end: 1042d4e4f; -[SCStoryAdTrackInfo adHintInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bec0));
  return;
}



/* Entry: 1042d4e50; end: 1042d4e5f; -[SCStoryAdTrackInfo tileIndexPos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4e50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bec8);
}



/* Entry: 1042d4e60; end: 1042d4e6f; -[SCStoryAdTrackInfo containsPlayable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042d4e60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bed0);
}



/* Entry: 1042d4e70; end: 1042d4e7f; -[SCStoryAdTrackInfo tileAutoPlayEligible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042d4e70(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bed8);
}



/* Entry: 1042d4e80; end: 1042d4e8f; -[SCStoryAdTrackInfo tileAutoPlayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042d4e80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bee0);
}



/* Entry: 1042d4e90; end: 1042d4e9f; -[SCStoryAdTrackInfo tileAutoPlayTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d4e90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bee8);
}



/* Entry: 1042d4ea0; end: 1042d4eaf; -[SCStoryAdTrackInfo tileImpressionPromoCodeImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bef0));
  return;
}



/* Entry: 1042d4eb0; end: 1042d529f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d4eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306be58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306be60) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11306be68) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306be70);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306be78) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306be80) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306be88) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306be90) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306be98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bea0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306bea8) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11306beb0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306beb8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11306bec0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11306bec8) = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_11306bed0) = (undefined1)param_19;
  *(undefined1 *)(unaff_x20 + _DAT_11306bed8) = param_19._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11306bee0) = param_19._2_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306bee8) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11306bef0) = param_22;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d52a0; end: 1042d53ef; -[SCStoryAdTrackInfo initWithCreativeId:snapCount:isAudioOn:exitEvent:totalSwipeUp:uniqueSwipeUp:maxViewedSnapIndex:totalTopSnapMediaDurationInMillis:totalTimeViewedInMillis:tileTimeViewedInMillis:adSnapTrackInfoList:hasCta:tileInteraction:adHintInteraction:tileIndexPos:containsPlayable:tileAutoPlayEligible:tileAutoPlayed:tileAutoPlayTimeMs:tileImpressionPromoCodeImpression:] */

void FUN_1042d52a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined4 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined1 param_14)

{
  undefined8 uVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if (param_5 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b0 = param_4;
    uStack_a8 = param_5;
  }
  if (param_8 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c0 = param_4;
    uStack_b8 = param_8;
  }
  if (param_13 != 0) {
    uVar1 = 0;
    FUN_1042a6cd4(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_13,uVar1);
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x0001042d50ac(param_1,param_2,uStack_a8,uStack_b0,param_6,param_7,uStack_b8,uStack_c0,
                      param_9,param_10,param_11,param_12,param_13,param_14);
  return;
}



/* Entry: 1042d53f0; end: 1042d5423; -[SCStoryAdTrackInfo hash] */

undefined8 FUN_1042d53f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042d4444();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042d5424; end: 1042d54b3; -[SCStoryAdTrackInfo isEqual:] */

uint FUN_1042d5424(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042d47a0(&uStack_40);
  _objc_release(param_1);
  func_0x0001042d6160(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042d54b4; end: 1042d54b7; -[SCStoryAdTrackInfo copyWithZone:] */

void FUN_1042d54b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d54b8; end: 1042d54f7; -[SCStoryAdTrackInfo description] */

void FUN_1042d54b8(void)

{
  undefined1 auStack_b98 [2936];
  
  _objc_retain();
  func_0x0001042d5b90(auStack_b98);
  func_0x00010178e444(auStack_b98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d54f8; end: 1042d5573; -[SCStoryAdTrackInfo init] */

void FUN_1042d54f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/StoryAdTrackInfoWrapper.swift"
             ,0x2c,2,0xa8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d5540);
  (*pcVar1)();
}



/* Entry: 1042d5574; end: 1042d55f3; -[SCStoryAdTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d5574(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306be58 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306be70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bea8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306beb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bec0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306bef0));
  return;
}



/* Entry: 1042d55f4; end: 1042d60f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d55f4(undefined8 *param_1)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_4110 [2744];
  undefined1 auStack_3658 [2744];
  long lStack_2ba0;
  long lStack_2b98;
  undefined8 uStack_2b90;
  long lStack_2b88;
  undefined8 uStack_2b80;
  undefined8 uStack_2b78;
  undefined8 uStack_2b70;
  long lStack_20d8;
  long lStack_20d0;
  undefined *apuStack_20b8 [343];
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined1 auStack_15d8 [2744];
  undefined1 auStack_b20 [2752];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  uStack_15e8 = param_1[1];
  uStack_15f0 = *param_1;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11306be58);
  puVar6[1] = uStack_15e8;
  *puVar6 = uStack_15f0;
  *(undefined8 *)(unaff_x20 + _DAT_11306be60) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_11306be68) = *(undefined1 *)(param_1 + 3);
  uStack_15f8 = param_1[5];
  uStack_1600 = param_1[4];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11306be70);
  puVar6[1] = uStack_15f8;
  *puVar6 = uStack_1600;
  uVar10 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306be78) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11306be80) = uVar10;
  uVar10 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11306be88) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306be90) = uVar10;
  uVar10 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11306be98) = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11306bea0) = uVar10;
  lVar9 = param_1[0xc];
  if (lVar9 == 0) {
    FUN_1042d6118(&uStack_15f0,auStack_b20,0x112d35ff8,&UNK_10d900cd0);
    FUN_1042d6118(&uStack_1600,auStack_b20,0x112d35ff8,&UNK_10d900cd0);
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x10);
    if (lVar8 == 0) {
      FUN_1042d6118(&uStack_15f0,auStack_b20,0x112d35ff8,&UNK_10d900cd0);
      FUN_1042d6118(&uStack_1600,auStack_b20,0x112d35ff8,&UNK_10d900cd0);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      FUN_1042d6118(&uStack_15f0,auStack_b20,0x112d35ff8,&UNK_10d900cd0);
      FUN_1042d6118(&uStack_1600,auStack_b20,0x112d35ff8,&UNK_10d900cd0);
      apuStack_20b8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209dc8(0,lVar8,0);
      puVar5 = apuStack_20b8[0];
      lVar9 = lVar9 + 0x20;
      uVar10 = 0;
      FUN_1042a6cd4(0);
      do {
        _memcpy(auStack_b20,lVar9,0xab2);
        _objc_allocWithZone(uVar10);
        func_0x000101795250(auStack_b20,auStack_15d8);
        puVar4 = auStack_b20;
        FUN_1042a5b4c();
        func_0x00010179528c(auStack_b20);
        uVar1 = *(ulong *)(puVar5 + 0x10);
        apuStack_20b8[0] = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          func_0x000104209dc8(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_20b8[0] + 0x10) = uVar1 + 1;
        *(undefined1 **)(apuStack_20b8[0] + uVar1 * 8 + 0x20) = puVar4;
        lVar9 = lVar9 + 0xab8;
        lVar8 = lVar8 + -1;
        puVar5 = apuStack_20b8[0];
      } while (lVar8 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306bea8) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_11306beb0) = *(undefined1 *)(param_1 + 0xd);
  _memcpy(apuStack_20b8,param_1 + 0xe,0xab2);
  iVar3 = (int)apuStack_20b8;
  func_0x00010178e3ec();
  if (iVar3 == 1) {
    plVar7 = (long *)0x0;
  }
  else {
    _memcpy(&uStack_2b90,apuStack_20b8,0xab2);
    lVar8 = 0;
    FUN_1042d43a8();
    lVar9 = lVar8;
    _objc_allocWithZone();
    iVar3 = (int)&uStack_2b90;
    func_0x00010178e478();
    puVar4 = (undefined1 *)0x0;
    if (iVar3 != 1) {
      _memcpy(auStack_15d8,&uStack_2b90,0xab2);
      FUN_1042a6cd4(0);
      _objc_allocWithZone();
      _memcpy(auStack_3658,apuStack_20b8,0xab2);
      func_0x0001018a912c(auStack_3658,auStack_4110);
      puVar4 = auStack_15d8;
      FUN_1042a5b4c();
    }
    *(undefined1 **)(lVar9 + _DAT_11306be28) = puVar4;
    plVar7 = &lStack_2ba0;
    lStack_2ba0 = lVar9;
    lStack_2b98 = lVar8;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
    func_0x0001042d6160(apuStack_20b8,0x112dcbc80,&UNK_10d98ff10);
  }
  *(long **)(unaff_x20 + _DAT_11306beb8) = plVar7;
  uVar2 = *(ushort *)(param_1 + 0x166);
  if ((uVar2 & 0xff00) == 0x200) {
    plVar7 = (long *)0x0;
  }
  else {
    lVar8 = 0;
    FUN_1042d3eec();
    lVar9 = lVar8;
    _objc_allocWithZone();
    puVar5 = (undefined *)0x0;
    if ((uVar2 & 0xff) != 1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      func_0x00010c01e540();
    }
    *(undefined **)(lVar9 + _DAT_11306bdf0) = puVar5;
    *(byte *)(lVar9 + _DAT_11306bdf8) = (byte)(uVar2 >> 8) & 1;
    plVar7 = &lStack_20d8;
    lStack_20d8 = lVar9;
    lStack_20d0 = lVar8;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306bec0) = plVar7;
  *(undefined8 *)(unaff_x20 + _DAT_11306bec8) = param_1[0x167];
  *(undefined1 *)(unaff_x20 + _DAT_11306bed0) = *(undefined1 *)(param_1 + 0x168);
  *(undefined1 *)(unaff_x20 + _DAT_11306bed8) = *(undefined1 *)((long)param_1 + 0xb41);
  *(undefined1 *)(unaff_x20 + _DAT_11306bee0) = *(undefined1 *)((long)param_1 + 0xb42);
  *(undefined8 *)(unaff_x20 + _DAT_11306bee8) = param_1[0x169];
  lVar9 = param_1[0x16b];
  if (lVar9 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uStack_2b70 = param_1[0x16e];
    uVar10 = param_1[0x16d];
    uStack_2b80 = param_1[0x16c];
    uStack_2b90 = param_1[0x16a];
    lStack_2b88 = lVar9;
    uStack_2b78 = uVar10;
    func_0x000104817798(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(uVar10);
    puVar6 = &uStack_2b90;
    func_0x000104816f88();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306bef0) = puVar6;
  _objc_msgSendSuper2(&stack0xffffffffffffdf38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d60f8; end: 1042d6117;  */

void FUN_1042d60f8(void)

{
  _objc_opt_self(&PTR_PTR_1129960b0);
  return;
}



/* Entry: 1042d6118; end: 1042d61cb;  */

undefined8 FUN_1042d6118(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042d61cc; end: 1042d61d7;  */

void FUN_1042d61cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1042d61d8; end: 1042d6283;  */

void FUN_1042d61d8(void)

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



/* Entry: 1042d6284; end: 1042d6297;  */

bool FUN_1042d6284(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042d6298; end: 1042d652b;  */

undefined8 FUN_1042d6298(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0c2a0)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000012,0x800000010f1f3d60,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0c280)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000012,0x800000010f1f3d80,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0xd000000000000013;
          if (((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0e0c260)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000013,0x800000010f1f3da0,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            return 3;
          }
          if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0c240)) {
            uVar1 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000012,0x800000010f1f3dc0,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef0e0c220)) {
                uVar1 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000010,0x800000010f1f3de0,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0xd000000000000011;
                  if (((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffef0e0c200)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000011,0x800000010f1f3e00,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef0e0c1e0)) {
                      uVar1 = 0;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000010,0x800000010f1f3e20,param_1,param_2,0);
                      if ((uVar1 & 1) == 0) {
                        if ((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0e0c1c0)) {
                          uVar1 = 0xd000000000000013;
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0xd000000000000013,0x800000010f1f3e40,param_1,param_2,0);
                          if ((uVar1 & 1) == 0) {
                            if ((param_1 == -0x2ffffffffffffff0) && (param_2 == -0x7ffffffef0e0c1a0)
                               ) {
                              return 9;
                            }
                            uVar1 = 0;
                            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (0xd000000000000010,0x800000010f1f3e60,param_1,param_2,0);
                            if ((uVar1 & 1) != 0) {
                              return 9;
                            }
                            return 0;
                          }
                        }
                        return 8;
                      }
                    }
                    return 7;
                  }
                  return 6;
                }
              }
              return 5;
            }
          }
          return 4;
        }
      }
      return 2;
    }
  }
  return 1;
}



/* Entry: 1042d652c; end: 1042d653f;  */

undefined1  [16] FUN_1042d652c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 10) {
    uVar1 = param_1;
  }
  auVar2[8] = 9 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1042d6540; end: 1042d657f;  */

void FUN_1042d6540(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6338;
  _swift_getWitnessTable(&UNK_10dce6338,&UNK_1107551f0);
  puRam000000011306bf20 = puVar1;
  return;
}



/* Entry: 1042d6580; end: 1042d658f;  */

undefined1  [16] FUN_1042d6580(void)

{
  return ZEXT816(0x1107551f0);
}



/* Entry: 1042d6590; end: 1042d65af; -[SponsoredLensEngagementServices lensEngagementStateSetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d6590(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306bf30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d65b0; end: 1042d6613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d65b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306bf28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bf30) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d6614; end: 1042d6673; -[SponsoredLensEngagementServices init] */

void FUN_1042d6614(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensEngagementServices.SponsoredLensEngagementServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d6640);
  (*pcVar1)();
}



/* Entry: 1042d6674; end: 1042d66d7; -[SponsoredLensEngagementServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d6674(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bf28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306bf30));
  return;
}



/* Entry: 1042d66d8; end: 1042d66e3;  */

void FUN_1042d66d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1042d66e4; end: 1042d678f;  */

void FUN_1042d66e4(void)

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



/* Entry: 1042d6790; end: 1042d67a3;  */

bool FUN_1042d6790(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042d67a4; end: 1042d69b7;  */

undefined8 FUN_1042d67a4(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = 0x776e6f6e6b6e75;
  __sSS10lowercasedSSyF();
  if (((param_1 == 0x776e6f6e6b6e75) && (param_2 == -0x1900000000000000)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x776e6f6e6b6e75,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x65636166727573;
    if (((param_1 == 0x65636166727573) && (param_2 == -0x1900000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x65636166727573,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0x6165777473697277;
      if (((param_1 == 0x6165777473697277) && (param_2 == -0x16ffffffffffff8e)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6165777473697277,0xe900000000000072,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0;
        if (((param_1 == 0x72616577746f6f66) && (param_2 == -0x1800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x72616577746f6f66,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar1 = 3;
        }
        else {
          uVar2 = 0x72616577657965;
          if (((param_1 == 0x72616577657965) && (param_2 == -0x1900000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x72616577657965,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
          {
            _swift_bridgeObjectRelease(param_2);
            uVar1 = 4;
          }
          else {
            uVar2 = 0x746e656d726167;
            if ((param_1 == 0x746e656d726167) && (param_2 == -0x1900000000000000)) {
              _swift_bridgeObjectRelease(0xe700000000000000);
              uVar1 = 5;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x746e656d726167,0xe700000000000000,param_1,param_2,0);
              _swift_bridgeObjectRelease(param_2);
              uVar1 = 5;
              if ((uVar2 & 1) == 0) {
                uVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 1042d69b8; end: 1042d69cb;  */

undefined1  [16] FUN_1042d69b8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1042d69cc; end: 1042d6a0b;  */

void FUN_1042d69cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6448;
  _swift_getWitnessTable(&UNK_10dce6448,&UNK_110755268);
  puRam000000011306bf60 = puVar1;
  return;
}



/* Entry: 1042d6a0c; end: 1042d6a1b;  */

undefined1  [16] FUN_1042d6a0c(void)

{
  return ZEXT816(0x110755268);
}



/* Entry: 1042d6a1c; end: 1042d6b0b;  */

void FUN_1042d6a1c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined4 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042d6b0c; end: 1042d6b0f;  */

void FUN_1042d6b0c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce64e0;
  _swift_getWitnessTable(&UNK_10dce64e0,&UNK_110755338);
  puRam000000011306bf68 = puVar1;
  return;
}



/* Entry: 1042d6b10; end: 1042d6b4f;  */

void FUN_1042d6b10(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce64e0;
  _swift_getWitnessTable(&UNK_10dce64e0,&UNK_110755338);
  puRam000000011306bf68 = puVar1;
  return;
}



/* Entry: 1042d6b50; end: 1042d6bd7;  */

bool FUN_1042d6b50(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[2] == param_2[2];
  }
  return false;
}



/* Entry: 1042d6bd8; end: 1042d6d0b;  */

void FUN_1042d6bd8(void)

{
  double *unaff_x20;
  double dVar1;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar1 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[2] != 0.0) {
    dVar1 = unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar1 = unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyys6UInt64VF(unaff_x20[4]);
  return;
}



/* Entry: 1042d6d0c; end: 1042d6d13;  */

void FUN_1042d6d0c(void)

{
  double *unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar1 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[2] != 0.0) {
    dVar1 = unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar1 = unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyys6UInt64VF(unaff_x20[4]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042d6d14; end: 1042d6d4b;  */

void FUN_1042d6d14(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1042d6bd8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042d6d4c; end: 1042d6d4f;  */

void FUN_1042d6d4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6570;
  _swift_getWitnessTable(&UNK_10dce6570,&UNK_1107553f0);
  puRam000000011306bf70 = puVar1;
  return;
}



/* Entry: 1042d6d50; end: 1042d6d8f;  */

void FUN_1042d6d50(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6570;
  _swift_getWitnessTable(&UNK_10dce6570,&UNK_1107553f0);
  puRam000000011306bf70 = puVar1;
  return;
}



/* Entry: 1042d6d90; end: 1042d6dcf;  */

bool FUN_1042d6d90(double *param_1,double *param_2)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(param_1[3] == param_2[3]),
                              CONCAT24(-(ushort)(param_1[2] == param_2[2]),
                                       CONCAT22(-(ushort)(param_1[1] == param_2[1]),
                                                -(ushort)(*param_1 == *param_2)))),2);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return param_1[4] == param_2[4];
}



/* Entry: 1042d6dd0; end: 1042d6dfb;  */

long FUN_1042d6dd0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1042d6dfc; end: 1042d6e5f;  */

int FUN_1042d6dfc(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1042d6e60; end: 1042d6f4f;  */

void FUN_1042d6e60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined4 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042d6f50; end: 1042d6f53;  */

void FUN_1042d6f50(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6600;
  _swift_getWitnessTable(&UNK_10dce6600,&UNK_1107554b8);
  puRam000000011306bf78 = puVar1;
  return;
}



/* Entry: 1042d6f54; end: 1042d6f93;  */

void FUN_1042d6f54(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6600;
  _swift_getWitnessTable(&UNK_10dce6600,&UNK_1107554b8);
  puRam000000011306bf78 = puVar1;
  return;
}



/* Entry: 1042d6f94; end: 1042d701b;  */

bool FUN_1042d6f94(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[2] == param_2[2];
  }
  return false;
}



/* Entry: 1042d701c; end: 1042d702b; -[SCSponsoredLensCreatorInteraction interactionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d701c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bf80);
}



/* Entry: 1042d702c; end: 1042d7043; -[SCSponsoredLensCreatorInteraction totalCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1042d702c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306bf88);
}



/* Entry: 1042d7044; end: 1042d716f; -[SCSponsoredLensCreatorInteraction initWithInteractionType:totalCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7044(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306bf80) = param_3;
  *(undefined4 *)(param_1 + _DAT_11306bf88) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d7170; end: 1042d71cb; -[SCSponsoredLensCreatorInteraction hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7170(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11306bf80));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(param_1 + _DAT_11306bf88));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d71cc; end: 1042d727f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042d71cc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar6 = &lStack_58;
    _swift_dynamicCast(plVar6,auStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306bf80);
      iVar2 = *(int *)(lStack_58 + _DAT_11306bf80);
      iVar3 = *(int *)(unaff_x20 + _DAT_11306bf88);
      iVar4 = *(int *)(lStack_58 + _DAT_11306bf88);
      _objc_release();
      return iVar1 == iVar2 && iVar3 == iVar4;
    }
  }
  return false;
}



/* Entry: 1042d7280; end: 1042d72ff; -[SCSponsoredLensCreatorInteraction isEqual:] */

uint FUN_1042d7280(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042d71cc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042d7300; end: 1042d7303; -[SCSponsoredLensCreatorInteraction copyWithZone:] */

void FUN_1042d7300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d7304; end: 1042d73d7; -[SCSponsoredLensCreatorInteraction encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3ec0);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = 0x4f435f4c41544f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4c41544f54,0xeb00000000544e55);
  func_0x00010bf92f80(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d73d8; end: 1042d7407;  */

void FUN_1042d73d8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042d7408(param_1);
  return;
}



/* Entry: 1042d7408; end: 1042d750b;  */

undefined8 FUN_1042d7408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar3 = 0xf1f3ec0;
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
  uVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  FUN_1042d652c(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0x4f435f4c41544f54;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4c41544f54,0xeb00000000544e55);
    func_0x00010bf66ee0(param_1);
    _objc_release(uVar2);
    func_0x00010c01e7c0();
    _objc_release(param_1);
  }
  return unaff_x20;
}



/* Entry: 1042d750c; end: 1042d7533; -[SCSponsoredLensCreatorInteraction initWithCoder:] */

void FUN_1042d750c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042d7408();
  return;
}



/* Entry: 1042d7534; end: 1042d754f; -[SCSponsoredLensCreatorInteraction description] */

void FUN_1042d7534(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d7550; end: 1042d75cb; -[SCSponsoredLensCreatorInteraction init] */

void FUN_1042d7550(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensEngagementServices/SponsoredLensCreatorInteractionWrapper.swift",0x4c,2,
             0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d7598);
  (*pcVar1)();
}



/* Entry: 1042d75cc; end: 1042d75cf; -[SCSponsoredLensCreatorInteraction .cxx_destruct] */

void FUN_1042d75cc(void)

{
  return;
}



/* Entry: 1042d75d0; end: 1042d75ef;  */

void FUN_1042d75d0(void)

{
  _objc_opt_self(&PTR_PTR_1129962d8);
  return;
}



/* Entry: 1042d75f0; end: 1042d75f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d75f0(undefined8 param_1,undefined4 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306bf80) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11306bf88) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d75f4; end: 1042d7603; -[SCSponsoredLensEngagedClick coordinateX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d75f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bfb8);
}



/* Entry: 1042d7604; end: 1042d7613; -[SCSponsoredLensEngagedClick coordinateY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d7604(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bfc0);
}



/* Entry: 1042d7614; end: 1042d7623; -[SCSponsoredLensEngagedClick screenRatioX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d7614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bfc8);
}



/* Entry: 1042d7624; end: 1042d7633; -[SCSponsoredLensEngagedClick screenRatioY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d7624(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bfd0);
}



/* Entry: 1042d7634; end: 1042d7643; -[SCSponsoredLensEngagedClick tapTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d7634(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bfd8);
}


