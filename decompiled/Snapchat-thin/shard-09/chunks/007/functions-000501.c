/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070e2ed0; end: 1070e2ed3; -[PreviewViewController _performerForSnapEditor] */

void FUN_1070e2ed0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbe58 != -1) {
    func_0x00010002a2fc(0x1137fbe58,&PTR___NSConcreteGlobalBlock_110d62f30);
  }
  uVar1 = uRam00000001137fbe50;
  func_0x000107c61174(uRam00000001137fbe50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070e2ed4; end: 1070e3987; -[PreviewViewController _saveTimelineOrDirectorModeVideoGalleryManualSave:captureTimeUtc:createTimeUtc:saveToCameraRoll:showsSavingIndicator:isPrivate:isFromCameraRoll:saveAsSeparateCopy:fromLongPressPrompt:saveSessionId:savedToken:gallerySavingEventId:captureSessionId:customStoryMetadata:location:gallerySnapOverlay:overlayFormat:createTimeOfFirstSnap:deviceFirmwareInfo:deviceId:fromSingleSnap:gallerySnapCompletionHandler:] */

void FUN_1070e2ed4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined1 uStack_24d;
  undefined1 uStack_24c;
  undefined1 uStack_249;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_24);
  lVar20 = param_1;
  func_0x00010c112180();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010c27eaa0();
  if ((int)lVar22 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1;
    func_0x00010bdd5c80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar20);
  lVar20 = param_1;
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1070e3988;
  puStack_c8 = &UNK_11098e018;
  lStack_c0 = param_1;
  _objc_retain(param_11);
  uStack_b8 = param_11;
  _objc_retain(lVar22);
  lStack_b0 = lVar22;
  uStack_90 = param_7;
  uStack_8f = param_6;
  _objc_retain(param_12);
  uStack_a8 = param_12;
  uStack_8e = param_3;
  _objc_retain(param_15);
  uStack_a0 = param_15;
  _objc_retain(param_14);
  uStack_98 = param_14;
  ppuVar6 = &puStack_e0;
  _objc_retainBlock();
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  pcStack_f8 = FUN_1070ced0c;
  uStack_f0 = 0x1070ced1c;
  uStack_e8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1070ced0c;
  uStack_120 = 0x1070ced1c;
  uStack_118 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1070ced0c;
  uStack_150 = 0x1070ced1c;
  uStack_148 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_1070ced0c;
  uStack_180 = 0x1070ced1c;
  uStack_178 = 0;
  ppuVar7 = ppuVar6;
  _dispatch_group_create();
  lVar20 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010c070a20();
  _objc_release(lVar20);
  lVar20 = param_1;
  if ((int)lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0811c0();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar20;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf3d8c0();
      goto LAB_1070e329c;
    }
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar20;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf3d8c0();
LAB_1070e329c:
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar20);
    if (lVar5 != 0) {
      _dispatch_group_enter(ppuVar7);
      lVar20 = param_1;
      func_0x00010c0d2440(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_208 = 0xc2000000;
      pcStack_200 = FUN_1070e3f20;
      puStack_1f8 = &UNK_11098e048;
      puStack_1e8 = &uStack_110;
      puStack_1e0 = &uStack_140;
      _objc_retain(ppuVar7);
      ppuStack_1f0 = ppuVar7;
      func_0x00010bfcd060(lVar20);
      _objc_release(lVar20);
      _dispatch_group_enter(ppuVar7);
      lVar20 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar20;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2702c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar20);
      lVar20 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar20;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0d2180();
      _objc_retainAutoreleasedReturnValue();
      puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_240 = 0xc2000000;
      pcStack_238 = FUN_1070e400c;
      puStack_230 = &UNK_11098d5f8;
      puStack_220 = &uStack_170;
      puStack_218 = &uStack_1a0;
      _objc_retain(ppuVar7);
      ppuStack_228 = ppuVar7;
      func_0x00010be213e0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar20);
      _objc_release(ppuStack_228);
      _objc_release(lVar11);
      ppuVar13 = ppuStack_1f0;
      goto LAB_1070e3658;
    }
  }
  _dispatch_group_enter(ppuVar7);
  lVar20 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010c26fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfc8620();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1070e3e20;
  puStack_1c0 = &UNK_11098d5f8;
  puStack_1b0 = &uStack_110;
  puStack_1a8 = &uStack_140;
  _objc_retain(ppuVar7);
  ppuStack_1b8 = ppuVar7;
  func_0x00010be213e0(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  ppuVar13 = ppuStack_1b8;
LAB_1070e3658:
  _objc_release(ppuVar13);
  puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f8 = 0xc2000000;
  pcStack_2f0 = FUN_1070e409c;
  puStack_2e8 = &UNK_11098e148;
  puStack_270 = &uStack_140;
  puStack_268 = &uStack_110;
  puStack_260 = &uStack_1a0;
  puStack_258 = &uStack_170;
  uStack_2c8 = param_19;
  uStack_24d = param_9;
  uStack_2c0 = param_16;
  uStack_2b8 = param_11;
  uStack_2b0 = param_12;
  uStack_2a8 = param_13;
  uStack_249 = param_22;
  uStack_2a0 = param_14;
  uStack_298 = param_15;
  uStack_290 = param_20;
  uStack_288 = param_21;
  uStack_278 = param_24;
  lStack_2e0 = param_1;
  uStack_2d8 = param_4;
  uStack_2d0 = param_5;
  ppuStack_280 = ppuVar6;
  uStack_250 = param_6;
  uStack_24f = param_7;
  uStack_24e = param_8;
  uStack_24c = param_3;
  _objc_retain();
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(ppuVar6);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_5);
  _objc_retain(param_4);
  ppuVar13 = &puStack_300;
  func_0x000100bc0718(ppuVar7,PTR___dispatch_main_q_11034be20);
  _objc_release(uStack_278);
  _objc_release(uStack_288);
  _objc_release(uStack_290);
  _objc_release(ppuStack_280);
  _objc_release(uStack_298);
  _objc_release(uStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2d8);
  _objc_release(ppuVar7);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  __Block_object_dispose(&uStack_110,8);
  _objc_release(uStack_e8);
  _objc_release(ppuVar6);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_16);
  _objc_release(param_19);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar22);
  _objc_release(param_18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_140,8);
  lVar20 = 8;
  __Block_object_dispose(&uStack_110);
  __Unwind_Resume();
  _objc_retain(lVar20);
  uVar21 = *(undefined8 *)(param_17 + 0x20);
  _objc_retain(ppuVar13);
  func_0x00010be80040(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar21);
  func_0x00010c2558c0(*(undefined8 *)(param_17 + 0x30));
  func_0x00010c12c960(*(undefined8 *)(param_17 + 0x30));
  bVar2 = lVar20 != 0 && ppuVar13 == (undefined **)0x0;
  if (*(char *)(param_17 + 0x50) == '\x01') {
    uVar14 = *(undefined8 *)(param_17 + 0x20);
    func_0x00010be9a5e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_17 + 0x20);
    func_0x00010be80040(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar21);
    uVar15 = *(undefined8 *)(param_17 + 0x20);
    func_0x00010c1122a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar15;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be43740(*(undefined8 *)(param_17 + 0x20));
    func_0x00010bf76ee0(uVar21);
    _objc_release(uVar21);
    _objc_release(uVar15);
    func_0x00010beb9060(*(undefined8 *)(param_17 + 0x20));
    func_0x00010c123520(*(undefined8 *)(param_17 + 0x20));
    _objc_release(uVar14);
  }
  if (bVar2) {
    uVar16 = *(ulong *)(param_17 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c07e920();
    if (((uVar17 & 1) == 0) && ((*(byte *)(param_17 + 0x52) & 1) != 0)) {
      bVar1 = *(byte *)(param_17 + 0x53);
      _objc_release(uVar16);
      if ((bVar1 & 1) == 0) {
        func_0x00010bed8c60(*(undefined8 *)(param_17 + 0x20));
      }
    }
    else {
      _objc_release(uVar16);
    }
  }
  uVar21 = *(undefined8 *)(param_17 + 0x20);
  lVar22 = lVar20;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar20;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bdfcf20(uVar21);
  _objc_release(ppuVar13);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar22);
  if (bVar2) {
    uVar15 = *(undefined8 *)(param_17 + 0x20);
    func_0x00010bfa3600(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar15;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar14);
    _objc_release(uVar21);
    _objc_release(uVar15);
    if (*(char *)(param_17 + 0x52) == '\x01') {
      uVar21 = *(undefined8 *)(param_17 + 0x20);
      func_0x00010bf600c0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b93c0(*(undefined8 *)(param_17 + 0x20));
      _objc_release(uVar21);
      func_0x00010bea5300(*(undefined8 *)(param_17 + 0x20));
      uVar14 = *(undefined8 *)(param_17 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar14;
      func_0x00010c0811c0();
      _objc_release(uVar14);
      if ((int)uVar21 != 0) {
        uVar18 = *(undefined8 *)(param_17 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar18;
        func_0x0001070c5530();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar21;
        func_0x00010c274120();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar15;
        func_0x00010c22fd60();
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar21);
        _objc_release(uVar18);
        if ((int)uVar19 != 0) {
          uVar19 = *(undefined8 *)(param_17 + 0x20);
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar19;
          func_0x00010c26fe40();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar21;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c27cfa0();
          _objc_release(uVar14);
          _objc_release(uVar21);
          _objc_release(uVar19);
          if ((int)uVar15 != 0) {
            uVar19 = *(undefined8 *)(param_17 + 0x20);
            func_0x00010c13b540(uVar19);
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar19;
            func_0x0001070c5530();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar21;
            func_0x00010c274120();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c190800();
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar21);
            _objc_release(uVar19);
          }
        }
      }
    }
  }
  uVar21 = *(undefined8 *)(param_17 + 0x20);
  func_0x00010bf86d00(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d80();
  _objc_release(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar20);
  return;
}



/* Entry: 1070e3988; end: 1070e3e1f;  */

void FUN_1070e3988(long param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010be80040(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar13);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  bVar2 = param_2 != 0 && param_3 == 0;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be9a5e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be80040(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar13);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1122a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be43740(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf76ee0(uVar13);
    _objc_release(uVar13);
    _objc_release(uVar4);
    func_0x00010beb9060(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c123520(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
  }
  if (bVar2) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07e920();
    if (((uVar6 & 1) == 0) && ((*(byte *)(param_1 + 0x52) & 1) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x53);
      _objc_release(uVar5);
      if ((bVar1 & 1) == 0) {
        func_0x00010bed8c60(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      _objc_release(uVar5);
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_2;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bdfcf20(uVar13);
  _objc_release(param_3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (bVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar3);
    _objc_release(uVar13);
    _objc_release(uVar4);
    if (*(char *)(param_1 + 0x52) == '\x01') {
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf600c0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b93c0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar13);
      func_0x00010bea5300(*(undefined8 *)(param_1 + 0x20));
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010c0811c0();
      _objc_release(uVar3);
      if ((int)uVar13 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar11;
        func_0x0001070c5530();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar13;
        func_0x00010c274120();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar4;
        func_0x00010c22fd60();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar13);
        _objc_release(uVar11);
        if ((int)uVar12 != 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c26fe40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c27cfa0();
          _objc_release(uVar3);
          _objc_release(uVar13);
          _objc_release(uVar12);
          if ((int)uVar4 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c13b540(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x0001070c5530();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar13;
            func_0x00010c274120();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c190800();
            _objc_release(uVar4);
            _objc_release(uVar3);
            _objc_release(uVar13);
            _objc_release(uVar12);
          }
        }
      }
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf86d00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d80();
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e3e20; end: 1070e3f1f;  */

void FUN_1070e3e20(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar3;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(lVar3);
  }
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar3;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(lVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e3f20; end: 1070e3faf;  */

void FUN_1070e3f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e3fb0; end: 1070e400b;  */

void FUN_1070e3fb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070e400c; end: 1070e409b;  */

void FUN_1070e400c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e409c; end: 1070e46bb;  */

void FUN_1070e409c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined2 uStack_87;
  undefined4 uStack_85;
  undefined1 uStack_81;
  undefined1 auStack_80 [16];
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb57e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar2 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be6ea60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar5);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar11);
    NEON_ext(*(undefined1 (*) [16])(param_1 + 0x90),*(undefined1 (*) [16])(param_1 + 0x90),8,1);
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar15);
    uVar16 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar16);
    uVar17 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar17);
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    uVar8 = uVar7;
    _objc_retain(uVar7);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar4);
    return;
  }
  _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1070e46bc;
  puStack_108 = &UNK_11098e098;
  _objc_copyWeak(auStack_90,auStack_80);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uStack_100 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = uVar8;
  _objc_retain(uVar9);
  uStack_88 = *(undefined1 *)(param_1 + 0xb0);
  uStack_87 = *(undefined2 *)(param_1 + 0xb1);
  uStack_85 = *(undefined4 *)(param_1 + 0xb3);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = uVar8;
  _objc_retain(uVar9);
  uStack_81 = *(undefined1 *)(param_1 + 0xb7);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = uVar8;
  _objc_retain(uVar9);
  ppuVar3 = &puStack_120;
  uStack_b8 = uVar9;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x000108ec0eb0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if ((int)uVar7 == 0) {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf926c0();
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    if ((int)uVar4 != 0) {
      (*(code *)ppuVar3[2])(ppuVar3,0,0);
      goto LAB_1070e460c;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be6ea60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar8);
    ppuVar6 = ppuVar3;
    _objc_retain(ppuVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar9);
    _objc_release(ppuVar6);
    _objc_release(uVar9);
    _objc_release(ppuVar3);
  }
  else {
    uVar9 = uVar8;
    func_0x00010bfa3600(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be705c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar9);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar5);
    (*(code *)ppuVar3[2])(ppuVar3,uVar4,uVar8);
    _objc_release(uVar4);
  }
  _objc_release(uVar8);
LAB_1070e460c:
  _objc_release(ppuVar3);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1070e46bc; end: 1070e4867;  */

void FUN_1070e46bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be9d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfc76c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99ac0(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070e4868; end: 1070e49c7;  */

void FUN_1070e4868(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x90,param_2 + 0x90);
  return;
}



/* Entry: 1070e49c8; end: 1070e49cf;  */

void FUN_1070e49c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetURL_1125a07a0);
  return;
}



/* Entry: 1070e49d0; end: 1070e4a73;  */

void FUN_1070e49d0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010bfb0d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c154b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e4a74; end: 1070e4c1b;  */

void FUN_1070e4a74(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x70) + 0x10))(*(long *)(param_1 + 0x70),0,param_3);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bfb0d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c29af00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be62760();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_2;
    func_0x00010c154b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be999a0(uVar2);
    _objc_release(lVar4);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e4c1c; end: 1070e4daf;  */

void FUN_1070e4c1c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),7);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),7);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),8);
  return;
}



/* Entry: 1070e4db0; end: 1070e5133; -[PreviewViewController _outputUrlsAndTimeRanges] */

void FUN_1070e4db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar11 = &puStack_130;
  ppuVar8 = &puStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c078120();
  _objc_release(uVar2);
  puVar9 = puVar1;
  if ((int)uVar12 == 0) {
    _objc_initWeak(&uStack_b0,param_1);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1070e5134;
    puStack_118 = &UNK_11098e1b8;
    iVar10 = (int)&uStack_b0;
    _objc_copyWeak(auStack_108);
    _objc_retain(puVar1);
    puStack_110 = puVar1;
    func_0x00010bf9d280(uVar12);
    _objc_release(uVar12);
    _objc_release(uVar2);
    _objc_release(param_1);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(&uStack_b0);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010c2bd7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar2);
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299d80();
    _CMTimeMakeWithSeconds(&uStack_80,600);
    _objc_release(uVar2);
    _objc_release(param_1);
    uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    iVar10 = (int)&uStack_d0;
    _CMTimeRangeMake(&uStack_b0,&uStack_100);
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bf730;
    _objc_alloc();
    func_0x00010c055780();
    ppuVar8 = (undefined **)PTR_PTR_1126b60f8;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar7;
    func_0x00010c0f2b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar8;
    func_0x00010bf43d60(puVar1);
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar8 + 0x28));
  _objc_destroyWeak(&uStack_b0);
  __Unwind_Resume();
  _objc_retain(ppuVar11);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = puVar1 + 0x28;
  _objc_loadWeakRetained();
  if (((ppuVar11 == (undefined **)0x0) && (iVar10 != 0)) && (puVar9 != (undefined *)0x0)) {
    uVar2 = param_5;
    func_0x00010c0b8600(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar1 + 0x20);
    puVar1 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar12);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(puVar1 + 0x20));
  }
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1070e5134; end: 1070e522f;  */

void FUN_1070e5134(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_2 != 0)) && (lVar1 != 0)) {
    uVar2 = param_5;
    func_0x00010c0b8600(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070e5230; end: 1070e527f;  */

void FUN_1070e5230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf730;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c055780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070e5280; end: 1070e54ef; -[PreviewViewController _saveTimelineOrDirectorModeSnapToCameraRollManualSave:saveSessionId:error:] */

void FUN_1070e5280(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x000107ffa0b8();
  if (param_5 == 0) {
    uVar3 = param_1;
    func_0x00010be5f2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7240();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010be5f2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250660();
    _objc_release(uVar3);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_4);
    func_0x00010c14b440(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(param_4);
    uVar3 = param_4;
  }
  else {
    uVar3 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a71c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010beff600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x0001070c535c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 & 1) == 0) {
      func_0x000107dfff94(uVar3,uVar1);
    }
    else {
      func_0x000107e001b8();
    }
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1070e54f0; end: 1070e5567;  */

void FUN_1070e54f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be5f2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar1);
  func_0x00010be0ca60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e5568; end: 1070e5577;  */

void FUN_1070e5568(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__savingToSnapAlbumCompletedWithS_112584330,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1070e5578; end: 1070e56ef; -[PreviewViewController _saveToGalleryWithOverrideToMemories:withOverrideToCameraRoll:isPrivate:fromLongPressPrompt:] */

void FUN_1070e5578(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  
  uVar1 = param_1;
  func_0x00010be5f420();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1070e56f0;
  puStack_78 = &UNK_110868698;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_6;
  uStack_67 = param_3;
  uStack_66 = param_4;
  uStack_65 = param_5;
  _objc_retainBlock();
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1070ced0c;
  uStack_a0 = 0x1070ced1c;
  _objc_retain(param_1);
  uStack_98 = param_1;
  _objc_retain(ppuVar2);
  _objc_retain(uVar1);
  func_0x00010be98ae0(param_1);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070e56f0; end: 1070e60b3;  */

void FUN_1070e56f0(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  undefined1 uStack_65;
  byte bStack_64;
  undefined1 uStack_63;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar23 = (uint)*(byte *)(param_1 + 0x29);
    uVar22 = (uint)*(byte *)(param_1 + 0x2a);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c14c0e0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar7;
        func_0x0001070c4694();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010bfa2b80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000108e00d3c();
        uVar23 = (uint)uVar6;
        _objc_release(uVar5);
        _objc_release(uVar11);
        _objc_release(uVar13);
        _objc_release(uVar7);
      }
      else {
        uVar23 = 1;
      }
      if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar7;
        func_0x0001070c4694();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010bfa2b80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000108e00cf8();
        uVar22 = (uint)uVar6;
        _objc_release(uVar5);
        _objc_release(uVar11);
        _objc_release(uVar13);
        _objc_release(uVar7);
        goto LAB_1070e5858;
      }
    }
    else {
      uVar23 = 0;
    }
    uVar22 = 1;
  }
LAB_1070e5858:
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfbd880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5d00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5d20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar8);
  func_0x00010bf7be00(*(undefined8 *)(param_1 + 0x20));
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010c06d080();
  _objc_release(uVar11);
  if ((int)uVar13 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf0e0();
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar7);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010c14bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf16ce0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f6a0();
    _objc_release(uVar13);
    lVar14 = *(long *)(param_1 + 0x20);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar14;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf16da0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf8c7e0();
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar9);
    _objc_release(lVar14);
    lVar9 = *(long *)(param_1 + 0x20);
    if (lVar17 == 0x7fffffffffffffff) {
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar9;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar15;
      func_0x00010bfbcc00();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar10;
      lVar17 = lVar9;
      lVar10 = lVar18;
    }
    else {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar9;
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar9);
      lVar14 = *(long *)(param_1 + 0x20);
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar16;
      func_0x00010bfbcc20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar10 = lVar9;
    }
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar17);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205d00();
    _objc_release(uVar13);
    _objc_release(uVar7);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c233600();
  _objc_release(uVar13);
  _objc_release(uVar7);
  uVar21 = 1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    lVar9 = lVar10;
    func_0x00010c232dc0();
    uVar21 = (uint)lVar9 | (uint)uVar11;
  }
  bVar2 = lVar10 == 0;
  uVar1 = uVar21 | (uint)uVar11;
  if ((uVar23 & (uVar22 ^ 0xffffffff) & 1) == 0) {
    puVar19 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar19 == (undefined *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b540(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x0001070c547c();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c0fb4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1070e60b4;
      puStack_78 = &UNK_11098e218;
      bStack_68 = (byte)uVar23 & 1;
      uStack_70 = *(undefined8 *)(param_1 + 0x20);
      bStack_66 = (byte)uVar22 & 1;
      uStack_65 = *(undefined1 *)(param_1 + 0x2b);
      uStack_63 = *(undefined1 *)(param_1 + 0x28);
      bStack_67 = ((bVar2 | (byte)uVar1) ^ 0xff) & 1;
      bStack_64 = (byte)uVar21 & 1;
      func_0x00010c134a40();
      _objc_release(uVar7);
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar12);
      goto LAB_1070e6044;
    }
    puVar19 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if ((puVar19 == (undefined *)0x2) ||
       (puVar19 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
       puVar19 == (undefined *)0x1)) {
      _objc_initWeak(auStack_98,*(undefined8 *)(param_1 + 0x20));
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1070e6258;
      puStack_a8 = &UNK_1108434b0;
      _objc_copyWeak(auStack_a0,auStack_98);
      ppuVar20 = &puStack_c0;
      _objc_retainBlock();
      if (((uVar22 | uVar23 ^ 0xffffffff) & 1) == 0) {
        if (bVar2 || (uVar1 & 1) != 0) {
          func_0x00010be502a0();
        }
        else {
          func_0x00010be99a60(*(undefined8 *)(param_1 + 0x20));
        }
      }
      else {
        (*(code *)ppuVar20[2])(ppuVar20);
      }
      _objc_release(ppuVar20);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_98);
      goto LAB_1070e6044;
    }
    puVar19 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar19 != (undefined *)0x3) goto LAB_1070e6044;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    if ((uVar23 & 1) == 0) {
      func_0x00010be9a1c0(uVar13);
      goto LAB_1070e6044;
    }
    if (!bVar2 && (uVar1 & 1) == 0) goto LAB_1070e5eb0;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    if ((!bVar2 && (uVar1 & 1) == 0) && (uVar21 & 1) == 0) {
LAB_1070e5eb0:
      func_0x00010be99a60(uVar13);
      goto LAB_1070e6044;
    }
  }
  func_0x00010be502a0();
LAB_1070e6044:
  _objc_release(lVar10);
  _objc_release(uVar5);
  _objc_release(uVar6);
  return;
}



/* Entry: 1070e60b4; end: 1070e614b;  */

void FUN_1070e60b4(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1070e614c; end: 1070e6257;  */

void FUN_1070e614c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  puVar1 = PTR_PTR_1126d4bb8;
  if (*(char *)(param_1 + 0x28) != '\x01') {
    if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__saveToCameraRollOnlyWithSavingS_112584210,1)
      ;
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075080();
    func_0x00010c2390a0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    if (*(char *)(param_1 + 0x2a) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(param_1 + 0x2b);
    }
                    /* WARNING: Could not recover jumptable at 0x00010be99a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__saveSnapChangesAndDismiss_shoul_112584038,0,0,
               uVar3,1);
    return;
  }
  if (*(char *)(param_1 + 0x2a) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x2b);
  }
  func_0x00010be502a0(*(undefined8 *)(param_1 + 0x20),param_2,1,0,uVar3,1,
                      *(undefined1 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2d),
                      *(undefined1 *)(param_1 + 0x2e));
  return;
}



/* Entry: 1070e6258; end: 1070e633f;  */

void FUN_1070e6258(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c547c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000108edede0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108edeab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1184e0(lVar4,param_2,lVar5,lVar6,0,0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070e6340; end: 1070e691b;  */

void FUN_1070e6340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070a20();
  if ((int)uVar2 == 0) {
LAB_1070e656c:
    _objc_release(uVar1);
LAB_1070e6574:
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14c0e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar12;
      func_0x0001070c4694();
      _objc_retainAutoreleasedReturnValue();
      lVar32 = lVar17;
      func_0x00010bfa2b80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar32;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfbd880();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x000108e00c34();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar32);
      _objc_release(lVar17);
      _objc_release(lVar12);
      if (lVar4 == 0) {
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          uVar13 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x0001070c4694();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar3;
          func_0x00010bfa2b80();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010bfbd540();
          if ((uVar16 & 1) == 0) {
            uVar16 = *(ulong *)(param_1 + 0x20);
            func_0x00010bf86b60();
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar3);
            _objc_release(uVar13);
            if ((uVar16 & 1) == 0) {
              uVar18 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar18;
              func_0x0001070c5b60();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar2;
              func_0x00010c0ca000();
              _objc_retainAutoreleasedReturnValue();
              uVar19 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar20 = uVar19;
              func_0x0001070c4604();
              _objc_retainAutoreleasedReturnValue();
              uVar30 = uVar20;
              func_0x00010c293fc0();
              _objc_retainAutoreleasedReturnValue();
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar22 = uVar21;
              func_0x0001070c4694();
              _objc_retainAutoreleasedReturnValue();
              uVar23 = uVar22;
              func_0x00010bfa2b80();
              _objc_retainAutoreleasedReturnValue();
              uVar33 = *(undefined8 *)(param_1 + 0x28);
              uVar24 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar25 = uVar24;
              func_0x0001070c5890();
              _objc_retainAutoreleasedReturnValue();
              uVar26 = uVar25;
              func_0x00010bf5f860();
              _objc_retainAutoreleasedReturnValue();
              uVar27 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar28 = uVar27;
              func_0x0001070c5188();
              _objc_retainAutoreleasedReturnValue();
              uVar29 = uVar28;
              func_0x00010bf398e0();
              _objc_retainAutoreleasedReturnValue();
              param_2 = uVar30;
              func_0x000108d3bc94(uVar1,uVar30,uVar23,uVar33,uVar26,uVar29,
                                  *(undefined8 *)(param_1 + 0x30));
              _objc_release(uVar29);
              _objc_release(uVar28);
              _objc_release(uVar27);
              _objc_release(uVar26);
              _objc_release(uVar25);
              _objc_release(uVar24);
              _objc_release(uVar23);
              _objc_release(uVar22);
              _objc_release(uVar21);
              _objc_release(uVar30);
              _objc_release(uVar20);
              _objc_release(uVar19);
              _objc_release(uVar1);
              _objc_release(uVar2);
              goto LAB_1070e6564;
            }
          }
          else {
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar3);
            _objc_release(uVar13);
          }
        }
      }
      else {
        func_0x00010c1906a0(*(undefined8 *)(param_1 + 0x20));
      }
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  else {
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010c149f40();
    if ((uVar3 & 1) == 0) goto LAB_1070e656c;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar4;
    func_0x0001070c4694();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar17;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar32;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf7f380();
    _objc_release(lVar5);
    _objc_release(lVar32);
    _objc_release(lVar17);
    _objc_release(lVar4);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126aed70;
    if (0 < lVar6) goto LAB_1070e6574;
    func_0x000108edf350();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar18);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar9 = puVar8;
    func_0x000108edee40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x000108edf338();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c10eda0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    _objc_release(puVar8);
    _objc_release(puVar7);
LAB_1070e6564:
    _objc_release(uVar18);
  }
  lVar32 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  lVar17 = *(long *)(lVar32 + 0x28);
  *(undefined8 *)(lVar32 + 0x28) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  uVar30 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x28) + 8) + 0x28);
  func_0x00010c13b540(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar30;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f380();
  _objc_release(uVar20);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar30);
  uVar30 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x28) + 8) + 0x28);
  func_0x00010c13b540(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar30;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e360();
  _objc_release(uVar20);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar30);
                    /* WARNING: Could not recover jumptable at 0x0001070e6a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar17 + 0x20) + 0x10))();
  return;
}



/* Entry: 1070e691c; end: 1070e6a47;  */

void FUN_1070e691c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f380();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e360();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001070e6a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1070e6a48; end: 1070e6bd3; -[PreviewViewController _saveLongPressed:] */

void FUN_1070e6a48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c233600();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    if (uVar2 != param_3) goto LAB_1070e6b68;
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07e8c0();
    if ((int)uVar2 != 0) {
      _objc_release(uVar1);
      goto LAB_1070e6b68;
    }
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07e920();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_1070e6b68;
  }
  else if (uVar2 != param_3) goto LAB_1070e6b68;
  uVar1 = param_3;
  func_0x00010c252440();
  if (uVar1 == 1) {
    func_0x00010be552a0(param_1,param_2,1,2);
  }
LAB_1070e6b68:
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070e6bd4;
  puStack_58 = &UNK_110848bd8;
  uStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bdde120(param_1,param_2,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1070e6bd4; end: 1070e6be7;  */

void FUN_1070e6bd4(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__startSaveLongPressedFlow__11258df68,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1070e6be8; end: 1070e6ebb; -[PreviewViewController _startSaveLongPressedFlow:] */

void FUN_1070e6be8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 != param_3) goto LAB_1070e6e9c;
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c233600();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07e8c0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07e920();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1070e6e9c;
      goto LAB_1070e6c88;
    }
  }
  else {
LAB_1070e6c88:
    uVar1 = param_3;
    func_0x00010c252440();
    if (uVar1 != 1) goto LAB_1070e6e9c;
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071800();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar4);
    uVar2 = param_1;
    func_0x00010be436a0();
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x1070e6ed4;
      puStack_78 = &UNK_110853ba0;
      uStack_70 = param_1;
      func_0x000108df7d2c(param_1,uVar5,&puStack_90);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1070e6ebc;
      puStack_50 = &UNK_11098e2a8;
      uStack_48 = param_1;
      func_0x000108df7880(param_1,uVar5,&puStack_68);
    }
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_1070e6e9c:
  _objc_release(param_3);
  return;
}



/* Entry: 1070e6ebc; end: 1070e6eeb;  */

void FUN_1070e6ebc(long param_1,int param_2,uint param_3,undefined8 param_4,uint param_5)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__saveToGalleryWithOverrideToMemo_112584250,
               param_3 | param_5,param_4,param_5,1);
    return;
  }
  return;
}



/* Entry: 1070e6eec; end: 1070e6f3b; -[PreviewViewController _savePressed] */

void FUN_1070e6eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1070e6f3c;
  puStack_20 = &UNK_110841f20;
  uStack_18 = param_1;
  func_0x00010bdde120(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1070e6f3c; end: 1070e6f4b;  */

void FUN_1070e6f3c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__startSavePressedFlow_11258df70);
    return;
  }
  return;
}



/* Entry: 1070e6f4c; end: 1070e71c7; -[PreviewViewController _checkSaveActionGuardsWithCompletion:] */

void FUN_1070e6f4c(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_1070e71c8;
    puStack_110 = &UNK_11098e2d8;
    _objc_retain(puVar1);
    lVar2 = param_1;
    puStack_108 = puVar1;
    func_0x000100504554(param_1,&puStack_128);
    lVar3 = lVar2;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    puStack_150 = puVar6;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_1070e7324;
    puStack_138 = &UNK_110842508;
    _objc_retain(param_3);
    ppuVar4 = &puStack_150;
    lStack_130 = param_3;
    _objc_retainBlock();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lVar2 = lVar3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar11 = *plStack_180;
      do {
        lVar9 = 0;
        ppuVar10 = ppuVar4;
        do {
          if (*plStack_180 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(undefined8 *)(lStack_188 + lVar9 * 8);
          puStack_1c8 = puVar6;
          uStack_1c0 = 0xc2000000;
          uStack_1b8 = 0x1070e7330;
          puStack_1b0 = &UNK_1108cbf30;
          _objc_retain(param_3);
          ppuVar4 = &puStack_1c8;
          uStack_1a8 = uVar7;
          lStack_1a0 = param_3;
          ppuStack_198 = ppuVar10;
          _objc_retainBlock();
          _objc_release(ppuStack_198);
          _objc_release(lStack_1a0);
          lVar9 = lVar9 + 1;
          ppuVar10 = ppuVar4;
        } while (lVar5 != lVar9);
        lVar5 = lVar2;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar2);
    param_2 = 1;
    (*(code *)ppuVar4[2])(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(lStack_130);
    _objc_release(lVar3);
    _objc_release(puStack_108);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar8 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_saveActionGuard_1126301c0);
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_2;
    func_0x00010c149e80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar8 != 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c113c80(uVar8);
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1070e71c8; end: 1070e7323;  */

void FUN_1070e71c8(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_saveActionGuard_1126301c0);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c149e80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c113c80(uVar2);
      func_0x00010c0df840(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070e7324; end: 1070e7353;  */

void FUN_1070e7324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070e732c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1070e7354; end: 1070e7767; -[PreviewViewController _startSavePressedFlow] */

void FUN_1070e7354(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  func_0x00010bdddee0();
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf926c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar5 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1070e7768;
    puStack_70 = &UNK_11098e348;
    ppuVar6 = &puStack_88;
    uStack_68 = param_1;
    _objc_retainBlock(ppuVar6);
    func_0x00010be462e0(param_1);
    _objc_release(ppuVar6);
  }
  uVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07d080();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar7 != 0) {
      uVar2 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c14a120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar2 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108faa7c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x0001070c5de8();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c110c00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar1;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x1070e7778;
      puStack_98 = &UNK_110841f20;
      uStack_90 = uVar3;
      func_0x00010bf180a0(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(param_1);
      _objc_release(uVar7);
      _objc_release(puVar8);
      _objc_release(uVar3);
      return;
    }
  }
  _objc_initWeak(auStack_b8,param_1);
  uVar2 = param_1;
  func_0x00010beff600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001070c46dc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1070e7784;
  puStack_c8 = &UNK_110849200;
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x000107e003a4(uVar2,uVar4,&puStack_e0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  return;
}



/* Entry: 1070e7768; end: 1070e7783;  */

void FUN_1070e7768(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_willInitiateExportWit_11266dc00,
             *(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1070e7784; end: 1070e77bf;  */

void FUN_1070e7784(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c14b720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070e77c0; end: 1070e7a7f; -[PreviewViewController saveWithLowDiskPass] */

void FUN_1070e77c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x0001070c4694();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c157ce0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar7 & 1) != 0) goto LAB_1070e78f4;
    func_0x000108df8c90(param_1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c4694();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa460();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_1070e78f4:
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad880();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfbd540();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be9a2c0(param_1,param_2,0,0,uVar5,0);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c57dc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf61e80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c2c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070e7a80; end: 1070e7deb; -[PreviewViewController _getSaveSessionIdWithSavingSource:manualSave:saveToGallery:saveToCameraRoll:] */

void FUN_1070e7a80(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284180(uVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284120(uVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c149f40();
  uVar2 = param_1;
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c2440a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c07e6a0();
  uVar11 = param_1;
  func_0x00010be9a600();
  uVar12 = uVar11;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf0db80(uVar2,param_2,uVar8,param_5,param_6,uVar1 & 0xffffffff,uVar10,param_3,uVar11,1
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7820();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  return;
}



/* Entry: 1070e7dec; end: 1070e7e8f; -[PreviewViewController _savingGallerySnapCount] */

long FUN_1070e7dec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c233c60();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010becbfc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bf529e0();
      _objc_release(param_1);
      return lVar1;
    }
  }
  return 1;
}



/* Entry: 1070e7e90; end: 1070e805f; -[PreviewViewController _shouldSaveAsTimelineDraft] */

ulong FUN_1070e7e90(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c07f160();
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c270320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uVar1 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06c920();
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bdca5e0();
      uVar4 = 1;
      if (((uVar1 & 1) == 0) && ((uVar3 & 1) == 0)) {
        uVar1 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar1);
        uVar1 = uVar2;
        func_0x00010bf3d240();
        if ((uVar1 & 0xffff) == 0) {
          func_0x00010bf46560(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_1;
          func_0x00010c26fea0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010bf09aa0();
          _objc_release(uVar1);
          _objc_release(param_1);
        }
        else {
          uVar4 = 1;
        }
        _objc_release(uVar2);
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1070e8060; end: 1070e8143; -[PreviewViewController _alwaysSaveAsSnapDoc] */

uint FUN_1070e8060(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c232f20();
  }
  else {
    if (lVar2 != 0) goto LAB_1070e8130;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c232e20();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
LAB_1070e8130:
  return (uint)lVar1 & 1;
}



/* Entry: 1070e8144; end: 1070e81b7; -[PreviewViewController _showPlusPostSaveUpsellFromDialog] */

undefined8 FUN_1070e8144(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c111980();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1070e81b8; end: 1070e824b; -[PreviewViewController _isSaveToMEOEnabled] */

undefined8 FUN_1070e81b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbd4e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1070e824c; end: 1070e824f; -[PreviewViewController _needsLongVideoTranscoding] */

void FUN_1070e824c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__ucoLensApplied_112591c68);
  return;
}



/* Entry: 1070e8250; end: 1070e82ff; -[PreviewViewController _ucoLensApplied] */

bool FUN_1070e8250(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf08000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar5 != 0;
}



/* Entry: 1070e8300; end: 1070e8387; -[PreviewViewController _timeRangesForMultiSnapSaving] */

void FUN_1070e8300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bdd9f00();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if ((int)uVar1 == 0) {
    func_0x00010bfb4f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070e8388; end: 1070e847f; -[PreviewViewController _canSaveSingleSegment] */

bool FUN_1070e8388(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07f160();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0d2400();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_1);
      return lVar3 == 1;
    }
  }
  return true;
}



/* Entry: 1070e8480; end: 1070e84db; -[PreviewViewController _shouldForceReencode] */

undefined8 FUN_1070e8480(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078ae0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070e84dc; end: 1070e88af; -[PreviewViewController autoSaveStoriesToGallery:] */

void FUN_1070e84dc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c14bf20();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07e8c0();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c07e920();
      if ((uVar7 & 1) == 0) {
        uVar7 = param_1;
        func_0x00010c07c2a0();
        uVar14 = (uint)uVar7 ^ 1;
      }
      else {
        uVar14 = 0;
      }
      _objc_release(uVar6);
    }
    else {
      uVar14 = 0;
    }
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07e920();
    if ((int)uVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar6 = param_1;
      func_0x00010c149f40();
      uVar2 = (uint)uVar6;
    }
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07e920();
    if ((int)uVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar6 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c073ea0();
      uVar3 = (uint)uVar8;
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar7;
    func_0x00010bf3d240();
    iVar4 = (int)uVar5;
    func_0x00010b5faba4();
    if (iVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar5 = uVar7;
      func_0x00010bfbdda0();
      bVar1 = (int)uVar5 == 5;
    }
    if ((((uVar14 | uVar2 | uVar3) & 1) != 0) || (bVar1)) {
      uVar9 = param_3;
      func_0x00010bf12240();
      uVar10 = param_3;
      func_0x00010bf62040(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bf62100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (bVar1) {
        puVar11 = PTR_PTR_1126ae790;
        func_0x00010bfcd0e0(PTR_PTR_1126ae790);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_68,param_1);
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010c0f7fc0(puVar11);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(puVar11);
      }
      uVar6 = uVar5;
      func_0x00010bf529e0();
      if (((uint)(uVar6 == 0) & ((uint)uVar9 ^ 0xffffffff)) == 0 && !bVar1) {
        func_0x00010bf7be00(param_1);
        uVar6 = param_1;
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x0001070c4694();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar8;
        func_0x00010bfa2b80();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfbd540();
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar8);
        _objc_release(uVar6);
        func_0x00010be502a0(param_1);
      }
      _objc_release(uVar5);
    }
    _objc_release(uVar7);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1070e88b0; end: 1070e88e3;  */

void FUN_1070e88b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be99ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070e88e4; end: 1070e8c5f; -[PreviewViewController _saveSnapFeedSnapIfNeeded] */

void FUN_1070e88e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfbdda0();
  if ((int)uVar1 == 5) {
    uVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c5aac();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x000107dfde50(uVar5,uVar1);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar6 = PTR_PTR_1126b25c0;
      _objc_alloc();
      uVar1 = uVar4;
      func_0x00010c23ff80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0c96a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c0c9680();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((puVar6 != (undefined *)0x0) && (uVar8 != 0)) {
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x0001070c5e78();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfbe800();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(param_1);
        func_0x00010bf977c0(uVar3);
        puVar9 = puVar6;
        func_0x00010bf31200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3d2a0();
        uVar1 = uVar8;
        func_0x00010c14aa40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar5);
        _objc_retain(uVar4);
        _objc_retain(uVar7);
        func_0x00010c297260(uVar1);
        _objc_release(uVar1);
        _objc_release(puVar9);
        _objc_release(uVar7);
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar7);
      }
      _objc_release(uVar8);
      _objc_release(puVar6);
    }
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 1070e8c60; end: 1070e8d53;  */

void FUN_1070e8c60(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f8500(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1070e8d54; end: 1070e8def;  */

void FUN_1070e8d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dfdeb0(param_2,uVar1,1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070e8df0; end: 1070e8fb7; -[PreviewViewController customStoriesToAutosaveForPostingMetadata:] */

undefined * FUN_1070e8df0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  uVar9 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107d6fa04();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar11 = auStack_e8;
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar11,0x10);
  uVar10 = (uint)puVar11;
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf625c0(puVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar6 = puVar2;
        func_0x00010bf608e0();
        if (((int)puVar6 != 0) && (puVar6 = puVar2, func_0x00010bf608c0(), (int)puVar6 != 0)) {
          func_0x00010befa120(puVar1,param_2,puVar2);
        }
        _objc_release(puVar2);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      puVar11 = auStack_e8;
      lVar4 = param_3;
      uVar9 = 0;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar11,0x10);
      uVar10 = (uint)puVar11;
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  lVar4 = param_3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x0001070c535c();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfbda60();
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar4);
  func_0x00010c13b540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x0001070c535c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010c11a9c0();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(param_3);
  return (undefined *)(ulong)((uVar9 & (uint)lVar8 | uVar10 & (uint)lVar7) & 1);
}



/* Entry: 1070e8fb8; end: 1070e90cf; -[PreviewViewController shouldAutosaveToMyStoryGalleryEntryForPostToMyStory:postToPublicStory:] */

uint FUN_1070e8fb8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c535c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfbda60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c535c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11a9c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (param_3 & (uint)uVar5 | param_4 & (uint)uVar4) & 1;
}



/* Entry: 1070e90d0; end: 1070e911f; -[PreviewViewController cacheSnapToGalleryMediaStore] */

void FUN_1070e90d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1070e9120;
  puStack_20 = &UNK_11098e378;
  uStack_18 = param_1;
  func_0x00010bfbf0c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1070e9120; end: 1070e91cf;  */

void FUN_1070e9120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1070e91d0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1070e91d0; end: 1070e9343;  */

void FUN_1070e91d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x0001070c5458();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c130580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ef8a0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1070e9344;
  puStack_70 = &UNK_110848ba8;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  uStack_58 = uVar5;
  _objc_retain(uVar5);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar5);
  return;
}



/* Entry: 1070e9344; end: 1070e93db;  */

void FUN_1070e9344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1070e93dc;
  puStack_50 = &UNK_110848ba8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010be98ae0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1070e93dc; end: 1070e93eb;  */

void FUN_1070e93dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cacheToGalleryMediaStoreWithPre_112553910,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1070e93ec; end: 1070e98cf; -[PreviewViewController didPostToStory] */

void FUN_1070e93ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uStack_64;
  
  lVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_1070e9870;
  lVar5 = lVar8;
  func_0x00010bfbdda0();
  if ((int)lVar5 == 5) {
    lVar5 = lVar7;
    func_0x00010bf3d2a0();
    if (0x10 < (uint)lVar5) goto LAB_1070e94d0;
    uStack_64 = 0x1f7c0 >> (ulong)((uint)lVar5 & 0x1f);
  }
  else {
LAB_1070e94d0:
    uStack_64 = 0;
  }
  lVar5 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001070c5e9c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf8a8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08fa60();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if ((lVar12 == 0) && (lVar5 = lVar8, func_0x00010bf977c0(), (int)lVar5 != 0x4e)) {
    lVar5 = lVar8;
    func_0x00010bf977c0();
    iVar4 = (int)lVar5;
    bVar3 = iVar4 == 0x4d || iVar4 == 0x39;
    if ((((uStack_64 & 1) == 0) && (iVar4 != 0x4d)) && (iVar4 != 0x39)) goto LAB_1070e9870;
  }
  else {
    bVar3 = true;
  }
  lVar5 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001070c5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c27fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar13 = PTR_PTR_1126c4608;
  _objc_alloc_init(PTR_PTR_1126c4608);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001070c46b8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c0755c0();
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  uVar1 = 0xd4;
  if ((uStack_64 & 1) == 0) {
    uVar1 = 9;
  }
  uVar2 = 0xd3;
  if (!bVar3) {
    uVar2 = uVar1;
  }
  uVar1 = 0xd5;
  if ((int)lVar11 == 0) {
    uVar1 = uVar2;
  }
  func_0x00010c206c40(puVar13,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar8;
    func_0x00010bf9e140(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar13,param_2,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = lVar8;
  func_0x00010bf3f9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar8;
    func_0x00010bf3f9e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar13,param_2,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = lVar7;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar9 != 0) {
    lVar6 = lVar5;
    func_0x00010c094540(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar13,param_2,lVar6);
    _objc_release(lVar6);
  }
  lVar6 = lVar8;
  func_0x00010bf977c0(lVar8);
  func_0x00010c206740(puVar13,param_2,(long)(int)lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c4610;
  _objc_alloc(PTR_PTR_1126c4610);
  lVar6 = lVar7;
  func_0x00010c241220(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf97200(lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf21f60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0a80(puVar14,param_2,2,lVar6,lVar9,0,0,puVar15);
  _objc_release(puVar15);
  _objc_release(lVar9);
  _objc_release(lVar6);
  if (bVar3) {
    func_0x00010bf8e260(lVar10,param_2,puVar14);
  }
  else if ((uStack_64 & 1) != 0) {
    func_0x00010c0b3560(lVar10,param_2,puVar14);
  }
  _objc_release(puVar14);
  _objc_release(lVar5);
  _objc_release(puVar13);
  _objc_release(lVar10);
LAB_1070e9870:
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1070e98d0; end: 1070e9ff3; -[PreviewViewController _cacheToGalleryMediaStoreWithPreviewBlob:overlayFormat:] */

void FUN_1070e98d0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf4dde0(param_1);
  uVar1 = param_1;
  func_0x00010bde9360(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x00010c1111c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf00140();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1070e9ff4;
  puStack_78 = &UNK_11098e418;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x00010bf97ce0(uVar5,param_2,&puStack_90);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c6c20();
  _objc_release(uVar3);
  uVar3 = param_1;
  if (uVar4 == 1) {
    uVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06d080();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      uVar4 = param_1;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c078120();
      _objc_release(uVar4);
      uVar4 = param_1;
      if ((int)uVar5 == 0) {
        if (param_3 == 0) goto LAB_1070e9d70;
        uVar5 = param_3;
        func_0x00010bf20900();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        if (uVar5 == 0) {
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0edb40();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar5);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x0001070c5e30();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bfbdac0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_1;
        func_0x00010c15e020();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bfb1160();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar2;
        func_0x00010bf51e00();
        uVar13 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        FUN_107101180();
        uVar15 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c07e920();
        if ((uVar16 & 1) == 0) {
          param_1 = uVar3;
          func_0x00010bf3f040();
          func_0x00010b5fbca8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c257c60(uVar8,param_2,uVar11,uVar3,param_4,uVar1,puVar12,uVar14,param_1,0);
        }
        else {
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = param_1;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010c15fa20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c257c60(uVar8,param_2,uVar11,uVar3,param_4,uVar1,puVar12,uVar14,uVar18,0);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
        }
        _objc_release(param_1);
        _objc_release(uVar15);
        _objc_release(uVar13);
        _objc_release(puVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
      else {
        func_0x00010c15e020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d2440(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15e020(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c26f640();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010bfbd860(uVar4,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8f800(uVar3,param_2,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(param_1);
      }
    }
    else {
      uVar4 = param_1;
      func_0x00010bf16ce0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfbd840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8f7e0();
      uVar4 = param_1;
    }
  }
  else {
    if (uVar4 != 0) goto LAB_1070e9d70;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x0001070c5e30();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfbdac0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    func_0x00010bdf61e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf51e00();
    uVar14 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    FUN_107101180();
    uVar16 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c07e920();
    if ((uVar17 & 1) == 0) {
      param_1 = 0xffffffffa9fc90cc;
      func_0x00010b77c6b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257c40(uVar7,param_2,uVar10,uVar13,param_4,uVar1,puVar12,uVar15,param_1,0);
    }
    else {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = param_1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar18;
      func_0x00010c15fa20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257c40(uVar7,param_2,uVar10,uVar13,param_4,uVar1,puVar12,uVar15,uVar6,0);
      _objc_release(uVar6);
      _objc_release(uVar18);
      _objc_release(uVar17);
    }
    _objc_release(param_1);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(puVar12);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_1070e9d70:
  _objc_release(puStack_70);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070e9ff4; end: 1070ea06b;  */

void FUN_1070e9ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070ea06c;
  puStack_30 = &UNK_11098e3a8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010c0bc920(param_3,param_2,&puStack_48,&PTR___NSConcreteGlobalBlock_11098e3f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_28);
  return;
}



/* Entry: 1070ea06c; end: 1070ea07b;  */

void FUN_1070ea06c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_sc_addObjectIfNotNil__112630be8,param_2);
  return;
}



/* Entry: 1070ea07c; end: 1070ea433; -[PreviewViewController _handleSavingSnapToAlbumError:] */

void FUN_1070ea07c(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110f53438;
  ppuVar2 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if ((int)ppuVar2 == 0) {
    puVar3 = PTR_PTR_1126b24e8;
    func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,0);
    if (((ulong)puVar3 >> 0x18 < 0x19) ||
       (ppuVar1 = param_3, func_0x000107ffa0b8(), puVar3 = PTR_PTR_1126afca8, (int)ppuVar1 != 0)) {
      ppuVar1 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x0001070c46b8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c08f100();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_110ea0cb8;
      func_0x00010c0a71c0();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      ppuVar1 = param_1;
      func_0x00010beff600(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
      func_0x0001070c535c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c0c7e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e001b8(ppuVar1);
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      _objc_release(param_1);
    }
    else {
      func_0x000108edef00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar1;
      func_0x00010c237520(puVar3,param_2,ppuVar1);
    }
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf3ec40();
    if (((ppuVar1 == (undefined **)0xffffffffffffd8fa) ||
        (ppuVar1 = param_3, func_0x00010bf3ec40(), ppuVar1 == (undefined **)0xffffffffffffd8f8)) ||
       (ppuVar1 = param_3, func_0x00010bf3ec40(), ppuVar1 == (undefined **)0xffffffffffffd8f2)) {
      ppuVar1 = (undefined **)PTR_PTR_1126af178;
      func_0x00010c22b900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      func_0x000108eded50();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x000108edf038();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af180;
      ppuVar6 = ppuVar5;
      func_0x000108edeaf8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320(puVar3,param_2,ppuVar6,3,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR___NSConcreteGlobalBlock_11098e448;
    }
    else {
      ppuVar1 = param_3;
      func_0x00010bf3ec40();
      if (ppuVar1 != (undefined **)0xffffffffffffd8f9) goto LAB_1070ea340;
      ppuVar1 = (undefined **)PTR_PTR_1126af178;
      func_0x00010c22b900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      func_0x000108ede888();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x000108edf020();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af180;
      ppuVar6 = ppuVar5;
      func_0x000108edeaf8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320(puVar3,param_2,ppuVar6,3,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_68 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR___NSConcreteGlobalBlock_11098e468;
    }
    ppuVar8 = ppuVar4;
    func_0x00010c235c40(ppuVar1,param_2,ppuVar4,ppuVar5,puVar7,ppuVar2,0);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar1);
LAB_1070ea340:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    func_0x00010c18f620(ppuVar8,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return;
  }
  return;
}



/* Entry: 1070ea434; end: 1070ea49b;  */

void FUN_1070ea434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1070ea49c; end: 1070ea5cb; -[PreviewViewController didFinishSavingSnapToAlbumWithError:saveButtonControllerToken:saveSessionId:] */

void FUN_1070ea49c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be80040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acc80();
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108edee28();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be43740(param_1);
  func_0x00010bf76ee0(uVar2,param_2,param_3 == 0,uVar3,uVar4,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 == 0) {
    func_0x00010c123520(param_1);
  }
  else {
    func_0x00010be2f900(param_1,param_2,param_3);
  }
  func_0x00010beb9060(param_1,param_2,param_3 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070ea5cc; end: 1070ea67f; -[PreviewViewController saveSnapChangesWithExitPreview:] */

void FUN_1070ea5cc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bdde120(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1070ea680; end: 1070ea723;  */

void FUN_1070ea680(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c232dc0();
    func_0x00010be99a60(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010beba580();
    if ((int)lVar1 != 0) {
      func_0x00010bdddee0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070ea724; end: 1070ea737; -[PreviewViewController exitPreviewAndSaveTimelineDraftAsCopy] */

void FUN_1070ea724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__saveSnapChangesAndDismiss_shoul_112584038,1,1,0,5);
  return;
}



/* Entry: 1070ea738; end: 1070ea9c7; -[PreviewViewController exitPreviewAndDeleteTimelineDraft] */

void FUN_1070ea738(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar8);
  if (lVar2 == 0) {
    func_0x00010c244100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a2e0();
    _objc_release(param_1);
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1070ced0c;
    uStack_70 = 0x1070ced1c;
    _objc_retain(param_1);
    lStack_68 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010bf6d080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar5);
    func_0x00010bf6bbc0(lVar3);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(lStack_68);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_90,8);
  __Unwind_Resume();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 0x28);
  func_0x00010c244100(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a2e0();
  _objc_release(uVar7);
  lVar8 = *(long *)(*(long *)(lVar2 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1070ea9c8; end: 1070eaa2b;  */

void FUN_1070ea9c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c244100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a2e0();
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070eaa2c; end: 1070eacaf; -[PreviewViewController _buildAndShowVideoTranscodingIndicator] */

void FUN_1070eaa2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010c1a8560(puVar1,param_2,1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_98 = puVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_90 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_88 = puVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar13);
  puVar12 = puVar1;
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar13 = puVar12;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf926c0();
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar13);
  if ((int)puVar6 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar12;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = puVar6;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c08fa60();
    _objc_release(puVar13);
    if (puVar14 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = puVar6;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
  }
  puVar14 = puVar13;
  func_0x00010c08fa60();
  if (puVar14 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126bcf68;
    _objc_alloc(PTR_PTR_1126bcf68);
    func_0x00010bffa140();
  }
  puVar4 = puVar12;
  func_0x00010c11eae0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar12;
  func_0x00010c243400();
  uVar2 = 9;
  if (puVar6 != (undefined *)0x7) {
    uVar2 = 1;
  }
  func_0x00010bf381c0(puVar4,param_2,puVar1,puVar14,uVar2);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070eacb0; end: 1070eae97; -[PreviewViewController _checkMemoryQuotaAndUpsell] */

void FUN_1070eacb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar6 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf926c0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  if ((int)lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar6);
    lVar6 = lVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar5);
  }
  lVar3 = lVar6;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126bcf68;
    _objc_alloc(PTR_PTR_1126bcf68);
    func_0x00010bffa140();
  }
  lVar3 = param_1;
  func_0x00010c11eae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c243400();
  uVar1 = 9;
  if (lVar4 != 7) {
    uVar1 = 1;
  }
  func_0x00010bf381c0(lVar3,param_2,puVar2,puVar7,uVar1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1070eae98; end: 1070eaf3f; -[PreviewViewController _saveSnapChangesAndDismiss:shouldSaveAsNewCopy:shouldSaveToCameraRoll:savingSource:] */

void FUN_1070eae98(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1070eaf40;
  puStack_68 = &UNK_11098e6e8;
  uStack_60 = param_1;
  uStack_58 = uVar1;
  uStack_50 = param_6;
  uStack_48 = param_3;
  uStack_47 = param_5;
  uStack_46 = param_4;
  func_0x00010be98ae0(param_1,param_2,&puStack_80);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070eaf40; end: 1070eb46b;  */

void FUN_1070eaf40(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined1 uStack_bf;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar3);
  }
  func_0x00010bf4dde0(*(undefined8 *)(param_1 + 0x20));
  bVar1 = *(byte *)(param_1 + 0x38);
  func_0x00010beb57e0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) == 1) {
    ppuVar4 = *(undefined ***)(param_1 + 0x20);
    func_0x00010be22440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
    func_0x00010be5f2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c14c000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar6;
    func_0x00010c14c0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar7 = ppuVar5;
    ppuVar4 = ppuVar5;
  }
  uStack_b8 = 0;
  uVar13 = 0x3032000000;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1070ced0c;
  uStack_98 = 0x1070ced1c;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  puStack_b0 = &uStack_b8;
  _objc_retain(uVar12);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1070eb46c;
  puStack_e8 = &UNK_11098e488;
  puStack_d0 = &uStack_b8;
  bStack_c0 = (bVar1 ^ 0xff) & 1;
  uStack_90 = uVar12;
  _objc_retain(ppuVar4);
  uStack_bf = *(undefined1 *)(param_1 + 0x39);
  uStack_c8 = *(undefined8 *)(param_1 + 0x30);
  ppuStack_e0 = ppuVar4;
  _objc_retain(ppuVar7);
  ppuVar8 = &puStack_100;
  ppuStack_d8 = ppuVar7;
  _objc_retainBlock();
  puStack_130 = puVar2;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1070ebcd4;
  puStack_118 = &UNK_11098e4b8;
  uStack_110 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  ppuVar6 = &puStack_130;
  ppuStack_108 = ppuVar8;
  _objc_retainBlock();
  puStack_160 = puVar2;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1070ebe40;
  puStack_148 = &UNK_11098e4e8;
  uStack_140 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(ppuVar8);
  ppuVar9 = &puStack_160;
  ppuStack_138 = ppuVar8;
  _objc_retainBlock();
  _objc_initWeak(auStack_168,*(undefined8 *)(param_1 + 0x20));
  puStack_1a0 = puVar2;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1070ec00c;
  puStack_188 = &UNK_11098e518;
  uStack_180 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(ppuVar8);
  ppuVar10 = &puStack_1a0;
  ppuStack_178 = ppuVar8;
  _objc_retainBlock();
  puStack_1d0 = puVar2;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_1070ec3ec;
  puStack_1b8 = &UNK_11098e548;
  _objc_copyWeak(auStack_1a8,auStack_168);
  _objc_retain(ppuVar8);
  ppuVar11 = &puStack_1d0;
  ppuStack_1b0 = ppuVar8;
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc43e0(uVar12);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar10);
  _objc_retain(uVar3);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar8);
  func_0x00010bfbf0e0(uVar13,uVar12);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  _objc_release(uVar3);
  _objc_release(ppuVar10);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar11);
  _objc_release(ppuStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(ppuVar10);
  _objc_release(ppuStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(ppuVar9);
  _objc_release(ppuStack_138);
  _objc_release(ppuVar6);
  _objc_release(ppuStack_108);
  _objc_release(ppuVar8);
  _objc_release(ppuStack_d8);
  _objc_release(ppuStack_e0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 1070eb46c; end: 1070ebcd3;  */

void FUN_1070eb46c(long param_1,undefined **param_2,long param_3,undefined **param_4,
                  undefined **param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined **unaff_x20;
  undefined *puVar20;
  undefined **unaff_x24;
  undefined **ppuVar21;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a0;
  uint uStack_94;
  undefined *puStack_90;
  int iStack_84;
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = param_2;
  ppuVar18 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar2 = param_5;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR____CFConstantStringClassReference_110ed3b58;
  ppuVar10 = ppuVar2;
  func_0x00010c0720c0();
  if ((int)ppuVar10 == 0) {
    _objc_release(ppuVar2);
  }
  else {
    unaff_x24 = param_5;
    func_0x00010bf3ec40();
    _objc_release(ppuVar2);
    if (unaff_x24 == (undefined **)0x1) {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        param_2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        func_0x00010c1122a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_2;
        func_0x00010c14a120();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = (undefined **)0x0;
        param_4 = (undefined **)0x0;
        ppuVar18 = (undefined **)0x0;
        func_0x00010bf76ee0();
        _objc_release(ppuVar2);
        _objc_release(param_2);
      }
      goto LAB_1070ebafc;
    }
  }
  ppuVar2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010be80040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = *(undefined ***)(param_1 + 0x20);
  param_4 = (undefined **)0x1;
  func_0x00010c0acca0();
  _objc_release(ppuVar2);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    ppuVar2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010be9a5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010be80040(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar11);
    unaff_x24 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = unaff_x24;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010be43740();
    param_4 = ppuVar2;
    func_0x00010bf76ee0(ppuVar17);
    _objc_release(ppuVar17);
    _objc_release(unaff_x24);
    func_0x00010c1236a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    ppuVar17 = param_2;
    func_0x00010beb9060(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    _objc_release(ppuVar2);
  }
  ppuVar10 = param_5;
  func_0x000107ffa0b8();
  if (*(char *)(param_1 + 0x41) == '\x01') {
    lVar19 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    unaff_x24 = *(undefined ***)(param_1 + 0x20);
    ppuVar17 = unaff_x24;
    if (lVar19 == 0) {
      ppuVar4 = ppuVar2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar4;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar10;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = (undefined **)0x0;
      param_4 = ppuVar21;
      func_0x00010be99b80(ppuVar2);
      _objc_release(ppuVar21);
      _objc_release(ppuVar5);
      _objc_release(ppuVar10);
      unaff_x20 = param_5;
LAB_1070eb858:
      _objc_release(ppuVar4);
    }
    else {
      param_4 = (undefined **)0x0;
      func_0x00010be99b60(ppuVar2);
    }
  }
  else if ((int)ppuVar10 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c13b540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = &PTR____CFConstantStringClassReference_110ea0138;
    func_0x00010c0a71c0();
    _objc_release(uVar15);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar3);
    ppuVar4 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010beff600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = unaff_x24;
    func_0x0001070c535c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar2;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e001b8(ppuVar4);
    _objc_release(ppuVar10);
    _objc_release(ppuVar2);
    _objc_release(unaff_x24);
    ppuVar2 = ppuVar4;
    goto LAB_1070eb858;
  }
  if (*(long *)(param_1 + 0x38) != 1) goto LAB_1070ebafc;
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010be44a20();
  iStack_84 = (int)param_2;
  ppuStack_80 = param_5;
  lStack_78 = param_3;
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar7;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar19;
    func_0x00010c270320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar19);
    _objc_release(lVar7);
    if (lVar8 != 0) goto LAB_1070eb8d8;
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c06d080();
    _objc_release(uVar12);
    puVar9 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar11 != 0) {
      puVar20 = puVar13;
      func_0x00010bf16cc0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1070eb910;
    }
    puVar14 = puVar13;
    func_0x00010c077140();
    _objc_release(puVar13);
    _objc_release(puVar9);
    puVar9 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar14 != 0) {
      puVar20 = puVar13;
      func_0x00010c0d2400();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1070eb910;
    }
    puVar14 = puVar13;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar15;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar12;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar15);
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar9);
  }
  else {
LAB_1070eb8d8:
    puVar9 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar13;
    func_0x00010c270320();
    _objc_retainAutoreleasedReturnValue();
LAB_1070eb910:
    _objc_release(puVar13);
    _objc_release(puVar9);
  }
  ppuVar21 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  ppuStack_a0 = *(undefined ***)(param_1 + 0x20);
  uStack_94 = (uint)*(byte *)(param_1 + 0x41);
  unaff_x24 = ppuVar21;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = unaff_x24;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar10;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  unaff_x20 = ppuVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  param_2 = unaff_x20;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = param_2;
  func_0x00010bfbdda0();
  param_5 = ppuStack_80;
  iVar1 = iStack_84;
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = 2;
  uStack_c0 = SUB84(ppuVar17,0);
  param_4 = (undefined **)0x1;
  ppuVar18 = (undefined **)(ulong)uStack_94;
  ppuVar17 = ppuStack_a0;
  puStack_d0 = puVar20;
  ppuStack_c8 = ppuVar5;
  puStack_90 = puVar20;
  func_0x00010bdfcf20(ppuVar21);
  _objc_release(param_2);
  _objc_release(unaff_x20);
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar10);
  _objc_release(unaff_x24);
  if (iVar1 != 0) {
    ppuVar17 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = ppuVar17;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = unaff_x20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(param_2);
    _objc_release(unaff_x20);
    _objc_release(ppuVar17);
    func_0x00010c123520(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    ppuVar10 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf600c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar10;
    func_0x00010c1b93c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    _objc_release(ppuVar10);
    func_0x00010bea5300(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  }
  _objc_release(puStack_90);
  param_3 = lStack_78;
LAB_1070ebafc:
  lVar19 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar11 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined8 *)(lVar19 + 0x28) = 0;
  _objc_release(uVar11);
  _objc_release(param_5);
  lVar19 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1070ebcd4;
  ppuStack_110 = unaff_x24;
  ppuStack_108 = ppuVar2;
  ppuStack_100 = param_2;
  lStack_f8 = param_1;
  ppuStack_f0 = unaff_x20;
  lStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar17);
  _objc_retain(param_4);
  _objc_retain(ppuVar18);
  if ((ppuVar16 != (undefined **)0x0) && (ppuVar18 == (undefined **)0x0)) {
    uVar11 = *(undefined8 *)(lVar19 + 0x20);
    func_0x00010c2440e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203860();
    _objc_release(uVar11);
  }
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1070ebe20;
  puStack_140 = &UNK_110852488;
  uVar11 = *(undefined8 *)(lVar19 + 0x28);
  _objc_retain(uVar11);
  ppuStack_138 = ppuVar16;
  ppuStack_130 = ppuVar17;
  ppuStack_128 = param_4;
  ppuStack_120 = ppuVar18;
  uStack_118 = uVar11;
  _objc_retain(ppuVar18);
  _objc_retain(param_4);
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar16);
  func_0x000100162d98("APPSTORE",&puStack_158);
  _objc_release(ppuStack_120);
  _objc_release(ppuStack_128);
  _objc_release(ppuStack_130);
  _objc_release(ppuStack_138);
  _objc_release(uStack_118);
  _objc_release(ppuVar18);
  _objc_release(param_4);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  return;
}



/* Entry: 1070ebcd4; end: 1070ebe1f;  */

void FUN_1070ebcd4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_2 != 0) && (param_5 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2440e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203860();
    _objc_release(uVar1);
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1070ebe20;
  puStack_70 = &UNK_110852488;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  lStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  lStack_50 = param_5;
  uStack_48 = uVar1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070ebe20; end: 1070ebe3f;  */

void FUN_1070ebe20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070ebe3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x20) != 0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1070ebe40; end: 1070ebfcb;  */

void FUN_1070ebe40(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1070cb180(uVar1,param_6,&PTR____CFConstantStringClassReference_110ea02d8,param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    FUN_1070cb010(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_7);
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1070ebfcc;
  puStack_80 = &UNK_110852488;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  lStack_78 = param_2;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = uVar1;
  uStack_58 = uVar3;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1070ebfcc; end: 1070ec00b;  */

void FUN_1070ebfcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001070ec008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))
            (lVar2,lVar1 != 0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1070ec00c; end: 1070ec3ab;  */

void FUN_1070ec00c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_retain(param_5);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010bfb27a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    lVar3 = lVar2;
    FUN_1070cb180(lVar2,param_4,&PTR____CFConstantStringClassReference_110ea02d8,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar12);
    _objc_release(lVar2);
    if (lVar3 == 0) {
      func_0x00010bea52e0(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c14bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = lVar6;
    func_0x00010c07d220();
    lVar4 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    if ((int)lVar2 == 0) {
      lVar2 = lVar5;
      func_0x00010c1585e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1583c0(lVar6);
      lVar7 = lVar2;
      func_0x00010c0dfd40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bfbcca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed8c20(lVar1);
      _objc_release(lVar11);
      _objc_release(lVar10);
    }
    else {
      lVar2 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfbcca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed8c00(lVar1);
    }
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1070ec3ac;
    puStack_88 = &UNK_1108465d0;
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar12);
    uStack_68 = uVar12;
    _objc_retain(param_2);
    lStack_80 = param_2;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(lVar3);
    lStack_70 = lVar3;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_68);
    _objc_release(lVar6);
    _objc_release(lVar1);
    param_4 = lVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070ec3ac; end: 1070ec3eb;  */

void FUN_1070ec3ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001070ec3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))
            (lVar2,lVar1 != 0,*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1070ec3ec; end: 1070ec5eb;  */

void FUN_1070ec3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_1070cb180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(lVar2);
    if (param_8 == 0) {
      func_0x00010bed8c80(lVar1);
    }
    else {
      func_0x00010bed8c60();
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1070ec5ec;
    puStack_90 = &UNK_110852488;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_68 = uVar4;
    _objc_retain(param_2);
    uStack_88 = param_2;
    _objc_retain(param_4);
    uStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(lVar3);
    lStack_70 = lVar3;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_68);
    param_6 = lVar3;
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070ec5ec; end: 1070ec62b;  */

void FUN_1070ec5ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001070ec628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))
            (lVar2,lVar1 != 0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1070ec62c; end: 1070ee3a7;  */

void FUN_1070ec62c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int iVar41;
  int iVar42;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3f7;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined2 uStack_330;
  undefined1 uStack_32e;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [48];
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar37 = param_3;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010be80040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar3);
  cVar1 = *(char *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    uVar5 = uVar3;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bfc12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2048a0();
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c10a100(*(undefined8 *)(param_2 + 0x20));
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c13b540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7700();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c15df80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5140();
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c15df80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afc20();
  }
  else {
    uVar5 = uVar3;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c13b540(uVar30);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar30;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar21;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar38;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a280();
    func_0x00010c2b7700(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar38);
    _objc_release(uVar21);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar30);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar13);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (param_3 == (undefined8 *)0x0) {
    uStack_478 = 0;
  }
  else {
    uStack_478 = *(undefined8 *)(param_2 + 0x20);
    param_1 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010bde9360(param_1,*(undefined8 *)(param_2 + 0x78));
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = param_3;
  func_0x00010c0c5d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = param_3;
    func_0x00010c130580();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (puVar9 != (undefined8 *)0x0) goto LAB_1070ec9c0;
    puStack_480 = (undefined *)0x0;
  }
  else {
    _objc_release(puVar7);
LAB_1070ec9c0:
    puVar10 = *(undefined **)(param_2 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x0001070c5458();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar11;
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar35;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010c0c5d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c130580(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0x3ff0000000000000;
    puStack_480 = puVar12;
    func_0x00010c0ef8a0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar35);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  if (*(char *)(param_2 + 0x81) == '\x01') {
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c14c100(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c1122a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf7be20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5780(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar14);
    uStack_488 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c14a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
  }
  else {
    uStack_488 = 0;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c06d080();
  _objc_release(uVar5);
  uVar15 = *(ulong *)(param_2 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c079fe0();
  if ((uVar17 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c07f120();
    iVar42 = (int)uVar13;
    _objc_release(uVar5);
    _objc_release(uVar14);
  }
  else {
    iVar42 = 1;
  }
  _objc_release(uVar16);
  _objc_release(uVar15);
  uVar15 = *(ulong *)(param_2 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c083340();
  if ((uVar17 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c07f1a0();
    iVar41 = (int)uVar13;
    _objc_release(uVar5);
    _objc_release(uVar14);
  }
  else {
    iVar41 = 1;
  }
  _objc_release(uVar16);
  _objc_release(uVar15);
  if ((int)uVar3 != 0) {
    puVar11 = *(undefined **)(param_2 + 0x38);
    func_0x00010be98b80(*(undefined8 *)(param_2 + 0x20));
    goto LAB_1070ee228;
  }
  puVar11 = puStack_480;
  if (iVar42 == 0) {
    if (*(byte *)(param_2 + 0x82) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c077140();
      _objc_release(uVar3);
      _objc_release(uVar13);
      if ((int)uVar5 == 0) {
        if (iVar41 == 0) {
          puVar35 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          puVar37 = (undefined8 *)0x0;
          puVar11 = puVar35;
          (**(code **)(*(long *)(param_2 + 0x68) + 0x10))(*(long *)(param_2 + 0x68),0,0,0,puVar35);
          _objc_release(puVar35);
        }
        else {
          uVar5 = *(undefined8 *)(param_2 + 0x20);
          func_0x00010c112180();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010c27eaa0();
          if ((int)uVar3 == 0) {
            puVar35 = (undefined *)0x0;
          }
          else {
            puVar35 = *(undefined **)(param_2 + 0x20);
            func_0x00010bdd5c80();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(uVar5);
          uVar14 = *(undefined8 *)(param_2 + 0x20);
          uVar3 = uVar14;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar5;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar35;
          func_0x00010be999e0(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(puVar35);
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010becbfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfa3600(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar18;
        func_0x00010c0d20c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfa3600(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar19;
        func_0x00010c29a960();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5fac0();
        func_0x00010c14a2a0(uVar5);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar19);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar18);
        uVar18 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c0d2440();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c13b420(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar13;
        func_0x00010bfaeca0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bfaee80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2839e0(uVar18);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar13);
        _objc_release();
        puStack_188 = &uStack_190;
        uStack_190 = 0;
        uStack_180 = 0x3032000000;
        pcStack_178 = FUN_1070ced0c;
        uStack_170 = 0x1070ced1c;
        uStack_168 = 0;
        puStack_1b8 = &uStack_1c0;
        uStack_1c0 = 0;
        uStack_1b0 = 0x3032000000;
        pcStack_1a8 = FUN_1070ced0c;
        uStack_1a0 = 0x1070ced1c;
        uStack_198 = 0;
        _dispatch_group_create();
        _dispatch_group_enter();
        uVar19 = *(undefined8 *)(param_2 + 0x20);
        uVar3 = uVar19;
        func_0x00010bfa3600(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf89ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c0d2180();
        _objc_retainAutoreleasedReturnValue();
        puVar35 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3e8 = 0xc2000000;
        pcStack_3e0 = FUN_1070eed74;
        puStack_3d8 = &UNK_11098d5f8;
        puStack_3c8 = &uStack_190;
        puStack_3c0 = &uStack_1c0;
        _objc_retain(uVar18);
        uStack_3d0 = uVar18;
        func_0x00010be213e0(uVar19);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar5);
        _objc_release(uVar3);
        uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
        func_0x00010be62760();
        uVar3 = 0x15;
        func_0x0001000819a8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_468 = puVar35;
        uStack_460 = 0xc2000000;
        pcStack_458 = FUN_1070eee04;
        puStack_450 = &UNK_11098e688;
        uStack_3f8 = *(undefined1 *)(param_2 + 0x80);
        uStack_448 = *(undefined8 *)(param_2 + 0x20);
        uVar5 = *(undefined8 *)(param_2 + 0x60);
        _objc_retain(uVar5);
        uStack_410 = uVar5;
        _objc_retain(uStack_488);
        uStack_440 = uStack_488;
        _objc_retain(param_3);
        puStack_408 = &uStack_190;
        puStack_400 = &uStack_1c0;
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        puStack_438 = param_3;
        uStack_430 = uVar4;
        uStack_3f7 = uVar2;
        _objc_retain(uVar5);
        uVar13 = *(undefined8 *)(param_2 + 0x38);
        uStack_428 = uVar5;
        _objc_retain(uVar13);
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        uStack_420 = uVar13;
        _objc_retain(uVar5);
        uStack_418 = uVar5;
        _objc_retain(uVar4);
        func_0x000100bc0718(uVar18,uVar3,&puStack_468);
        _objc_release(uVar3);
        _objc_release(uStack_418);
        _objc_release(uStack_420);
        _objc_release(uStack_428);
        _objc_release(uStack_430);
        _objc_release(puStack_438);
        _objc_release(uStack_440);
        _objc_release(uStack_410);
        _objc_release(uStack_3d0);
        _objc_release(uVar18);
        __Block_object_dispose(&uStack_1c0,8);
        _objc_release(uStack_198);
        puVar37 = (undefined8 *)0x8;
        __Block_object_dispose(&uStack_190,8);
        _objc_release(uStack_168);
        _objc_release(uVar4);
      }
      goto LAB_1070ee228;
    }
  }
  else if ((*(byte *)(param_2 + 0x82) & 1) == 0) {
    puVar11 = PTR_PTR_1126bfb98;
    func_0x00010bf4b580();
    uVar18 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar18;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar18);
    iVar42 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bde7900();
    if ((iVar42 == 0) || ((int)puVar11 == 0)) {
LAB_1070ed80c:
      iVar42 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010bde7900();
      if (iVar42 == 0) {
        uVar32 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar32;
        func_0x0001070c5a88();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf8c440();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar33;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar14;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uVar34 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar34;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar19;
        func_0x00010bf3e220();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = *(undefined **)(param_2 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar35 = puVar20;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar35;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4ba0(param_3);
        func_0x00010bfed740();
        uVar39 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c1111c0();
        _objc_retainAutoreleasedReturnValue();
        uVar38 = uVar39;
        func_0x00010c127e00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar38;
        func_0x00010bf008e0();
        _objc_retainAutoreleasedReturnValue();
        uVar36 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c1111c0();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar36;
        func_0x00010c127e00();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar30;
        func_0x00010bf00140();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b2220;
        _objc_alloc();
        puVar26 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560();
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        uStack_150 = 0x1070ee4d8;
        puStack_148 = &UNK_11098e5a8;
        uStack_120 = *(undefined1 *)(param_2 + 0x80);
        uStack_140 = *(undefined8 *)(param_2 + 0x20);
        uVar40 = *(undefined8 *)(param_2 + 0x50);
        _objc_retain(uVar40);
        uStack_128 = uVar40;
        _objc_retain(uStack_488);
        uStack_138 = uStack_488;
        _objc_retain(param_3);
        puVar11 = puVar12;
        puStack_130 = param_3;
        func_0x00010c131020(param_1,uVar13);
        _objc_release(puVar10);
        _objc_release(puVar26);
        _objc_release(uVar31);
        _objc_release(uVar30);
        _objc_release(uVar36);
        _objc_release(uVar6);
        _objc_release(uVar38);
        _objc_release(uVar39);
        _objc_release(puVar12);
        _objc_release(puVar35);
        _objc_release(puVar20);
        _objc_release(uVar21);
        _objc_release(uVar19);
        _objc_release(uVar34);
        _objc_release(uVar18);
        _objc_release(uVar14);
        _objc_release(uVar33);
        _objc_release(uVar13);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar32);
        _objc_release(puStack_130);
        _objc_release(uStack_138);
        _objc_release(uStack_128);
      }
      else {
        puVar7 = param_3;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010be1f740();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar31;
        func_0x0001070c5a88();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf8c440();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar32 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar32;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar14;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = *(undefined **)(param_2 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar35 = puVar20;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar35;
        func_0x00010bf3e220();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar33;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar19;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4ba0(param_3);
        func_0x00010bfed740();
        uVar34 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c1111c0();
        _objc_retainAutoreleasedReturnValue();
        uVar38 = uVar34;
        func_0x00010c127e00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar38;
        func_0x00010bf008e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b2220;
        _objc_alloc();
        puVar26 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560();
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_110 = 0xc2000000;
        uStack_108 = 0x1070ee45c;
        puStack_100 = &UNK_11098e5a8;
        uStack_d8 = *(undefined1 *)(param_2 + 0x80);
        uStack_f8 = *(undefined8 *)(param_2 + 0x20);
        uVar39 = *(undefined8 *)(param_2 + 0x50);
        _objc_retain(uVar39);
        uStack_e0 = uVar39;
        _objc_retain(uStack_488);
        uStack_f0 = uStack_488;
        _objc_retain(param_3);
        puVar11 = puVar12;
        puStack_e8 = param_3;
        func_0x00010c131040(param_1,uVar13);
        _objc_release(puVar10);
        _objc_release(puVar26);
        _objc_release(uVar6);
        _objc_release(uVar38);
        _objc_release(uVar34);
        _objc_release(uVar21);
        _objc_release(uVar19);
        _objc_release(uVar33);
        _objc_release(puVar12);
        _objc_release(puVar35);
        _objc_release(puVar20);
        _objc_release(uVar18);
        _objc_release(uVar14);
        _objc_release(uVar32);
        _objc_release(uVar13);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar31);
        _objc_release(puStack_e8);
        _objc_release(uStack_f0);
        _objc_release(uStack_e0);
        _objc_release(uVar30);
        _objc_release(puVar7);
      }
    }
    else {
      iVar42 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010be3e0a0();
      if (iVar42 == 0) goto LAB_1070ed80c;
      _objc_initWeak(&uStack_190,*(undefined8 *)(param_2 + 0x20));
      uVar19 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = uVar19;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = *(undefined **)(param_2 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar20;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar35;
      func_0x00010bf3e220(puVar35);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf46560(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar21;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar14;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar26 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_1070ee3a8;
      puStack_b8 = &UNK_11098e578;
      puVar37 = &uStack_190;
      _objc_copyWeak(auStack_98,puVar37);
      uStack_90 = *(undefined1 *)(param_2 + 0x80);
      uVar38 = *(undefined8 *)(param_2 + 0x50);
      _objc_retain(uVar38);
      uStack_a0 = uVar38;
      _objc_retain(uStack_488);
      uStack_b0 = uStack_488;
      _objc_retain(param_3);
      puVar11 = puVar12;
      puStack_a8 = param_3;
      func_0x00010be8eb60(uVar19);
      _objc_release(puVar10);
      _objc_release(puVar26);
      _objc_release(uVar18);
      _objc_release(uVar14);
      _objc_release(uVar21);
      _objc_release(puVar12);
      _objc_release(puVar35);
      _objc_release(puVar20);
      _objc_release(uVar13);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(&uStack_190);
    }
    _objc_release(uVar4);
    goto LAB_1070ee228;
  }
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release();
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_1070ced0c;
  uStack_170 = 0x1070ced1c;
  uStack_168 = 0;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_1070ced0c;
  uStack_1a0 = 0x1070ced1c;
  uStack_198 = 0;
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_1070ced0c;
  uStack_1d0 = 0x1070ced1c;
  uStack_1c8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_1070ced0c;
  uStack_200 = 0x1070ced1c;
  uStack_1f8 = 0;
  _dispatch_group_create();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c070a20();
  _objc_release(uVar5);
  lVar22 = *(long *)(param_2 + 0x20);
  if ((int)uVar3 == 0) {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar22;
    func_0x00010c0811c0();
    _objc_release(lVar22);
    if ((int)lVar29 != 0) {
      lVar22 = *(long *)(param_2 + 0x20);
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar22;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar29;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar23;
      func_0x00010bf3d8c0();
      goto LAB_1070ed580;
    }
LAB_1070ed7c0:
    _dispatch_group_enter(uVar14);
    puVar35 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    lVar29 = *(long *)(param_2 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar29;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar22 == 0) {
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_258 = 0;
    }
    else {
      func_0x00010c276460(&uStack_268,lVar22);
    }
    uStack_278 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_280 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_270 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(auStack_250,&uStack_280,&uStack_268);
    func_0x00010c297240();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar35;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar35);
    _objc_release(lVar22);
    _objc_release(lVar29);
    uVar18 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = uVar18;
    func_0x00010bfa3600(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010c0d2180();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b0 = 0xc2000000;
    pcStack_2a8 = FUN_1070ee554;
    puStack_2a0 = &UNK_11098d5f8;
    puStack_290 = &uStack_190;
    puStack_288 = &uStack_1c0;
    _objc_retain(uVar14);
    uStack_298 = uVar14;
    func_0x00010be213e0(uVar18);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uStack_298;
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar22;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar29;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010bf3d8c0();
LAB_1070ed580:
    _objc_release(lVar23);
    _objc_release(lVar29);
    _objc_release(lVar22);
    if (lVar24 == 0) goto LAB_1070ed7c0;
    _dispatch_group_enter(uVar14);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0d2440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar35 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e8 = 0xc2000000;
    pcStack_2e0 = FUN_1070ee654;
    puStack_2d8 = &UNK_11098e048;
    puStack_2c8 = &uStack_190;
    puStack_2c0 = &uStack_1c0;
    _objc_retain(uVar14);
    uStack_2d0 = uVar14;
    func_0x00010bfcd060(uVar3);
    _objc_release(uVar3);
    _dispatch_group_enter(uVar14);
    puVar25 = *(undefined **)(param_2 + 0x20);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar26;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar20;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar27;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar28;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar20);
    _objc_release(puVar26);
    _objc_release(puVar10);
    _objc_release(puVar25);
    uVar19 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = uVar19;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar4;
    func_0x00010c0d2180();
    _objc_retainAutoreleasedReturnValue();
    puStack_328 = puVar35;
    uStack_320 = 0xc2000000;
    pcStack_318 = FUN_1070ee740;
    puStack_310 = &UNK_11098d5f8;
    puStack_300 = &uStack_1f0;
    puStack_2f8 = &uStack_220;
    _objc_retain(uVar14);
    uStack_308 = uVar14;
    func_0x00010be213e0(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uStack_308);
    uVar3 = uStack_2d0;
  }
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfc76c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3b0 = 0xc2000000;
  pcStack_3a8 = FUN_1070ee7d0;
  puStack_3a0 = &UNK_11098e658;
  uStack_330 = *(undefined2 *)(param_2 + 0x82);
  uStack_398 = *(undefined8 *)(param_2 + 0x20);
  puStack_350 = &uStack_1c0;
  puStack_348 = &uStack_190;
  puStack_340 = &uStack_220;
  puStack_338 = &uStack_1f0;
  _objc_retain(uStack_488);
  uStack_390 = uStack_488;
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar13);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uStack_388 = uVar13;
  _objc_retain(uVar4);
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  uStack_380 = uVar4;
  _objc_retain(uVar13);
  uStack_32e = *(undefined1 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uStack_378 = uVar13;
  uStack_370 = uVar3;
  _objc_retain(uVar4);
  uStack_358 = uVar4;
  _objc_retain(param_3);
  puStack_368 = param_3;
  puStack_360 = puVar12;
  _objc_retain(puVar12);
  _objc_retain(uVar3);
  func_0x000100bc0718(uVar14,uVar5,&puStack_3b8);
  _objc_release(uVar5);
  _objc_release(puStack_360);
  _objc_release(puStack_368);
  _objc_release(uStack_358);
  _objc_release(uStack_370);
  _objc_release(uStack_378);
  _objc_release(uStack_380);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_release(puVar12);
  _objc_release(uVar3);
  _objc_release(uVar14);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uStack_1c8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(uStack_198);
  puVar37 = (undefined8 *)0x8;
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
LAB_1070ee228:
  _objc_release(uStack_488);
  _objc_release(puStack_480);
  _objc_release(uStack_478);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(&uStack_190);
    __Unwind_Resume();
    _objc_retain(puVar37);
    _objc_retain(puVar11);
    puVar7 = param_3 + 7;
    _objc_loadWeakRetained();
    if (puVar7 != (undefined8 *)0x0) {
      if (*(char *)(param_3 + 8) == '\x01') {
        puVar8 = puVar7;
        func_0x00010c244100(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7a2e0();
        _objc_release(puVar8);
      }
      else {
        (**(code **)(param_3[6] + 0x10))(param_3[6],puVar37,param_3[4],param_3[5],puVar11);
      }
    }
    _objc_release(puVar7);
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar37);
    return;
  }
  return;
}



/* Entry: 1070ee3a8; end: 1070ee553;  */

void FUN_1070ee3a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      lVar2 = lVar1;
      func_0x00010c244100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7a2e0();
      _objc_release(lVar2);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28),param_5);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ee554; end: 1070ee653;  */

void FUN_1070ee554(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar3;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(lVar3);
  }
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar3;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(lVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ee654; end: 1070ee6e3;  */

void FUN_1070ee654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ee6e4; end: 1070ee73f;  */

void FUN_1070ee6e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070ee740; end: 1070ee7cf;  */

void FUN_1070ee740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ee7d0; end: 1070eea53;  */

void FUN_1070ee7d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_80,auStack_70);
    uStack_78 = *(undefined1 *)(param_1 + 0x8a);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar2);
    func_0x00010be86000(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar3);
    func_0x00010be8ed20(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1070eea54; end: 1070eec37;  */

void FUN_1070eea54(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar2 = lVar1;
      func_0x00010c244100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7a2e0();
    }
    else {
      lVar4 = *(long *)(param_1 + 0x38);
      lVar2 = param_2;
      func_0x00010bfbd940(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bfbcca0(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))
                (lVar4,lVar2,lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 param_3,*(undefined8 *)(param_1 + 0x30),param_2);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070eec38; end: 1070eed73;  */

void FUN_1070eec38(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 1070eed74; end: 1070eee03;  */

void FUN_1070eed74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070eee04; end: 1070ef0fb;  */

void FUN_1070eee04(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1070eefa4;
  puStack_78 = &UNK_11098e628;
  uStack_48 = *(undefined1 *)(param_1 + 0x70);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar4;
  _objc_retain(uVar5);
  ppuVar1 = &puStack_90;
  uStack_58 = uVar5;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
  if (*(char *)(param_1 + 0x71) == '\x01') {
    func_0x00010bfb1920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8ebc0(uVar5,param_2,uVar4,uVar2,uVar3,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),ppuVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c130f00(uVar5,param_2,uVar4,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_50);
  return;
}



/* Entry: 1070ef0fc; end: 1070ef257;  */

void FUN_1070ef0fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c23ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showVideoIfNecessary_11266c538);
  return;
}


