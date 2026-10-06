/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ce8458; end: 105ce849f;  */

void FUN_105ce8458(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be25b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ce84a0; end: 105ce8743; -[SCPreviewFeatureCustomSticker _pasteImagesFromPasteboard:] */

void FUN_105ce84a0(undefined **param_1,undefined1 *param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *unaff_x20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  uVar5 = SUB81(puVar1,0);
  func_0x00010c0f5b20(param_1[0xd]);
  puVar1 = param_3;
  func_0x00010bf34de0();
  param_1[0xc] = puVar1;
  puVar1 = param_3;
  func_0x00010c0849e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = param_3;
  puStack_1a8 = puVar1;
  func_0x00010c0deea0();
  func_0x00010c13d1c0(param_1[0xd]);
  if (0 < (long)param_3) {
    _objc_initWeak(auStack_108,param_1);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105ce8744;
    puStack_118 = &UNK_1108e4df0;
    param_2 = auStack_108;
    _objc_copyWeak(auStack_110);
    param_1 = &puStack_130;
    _objc_retainBlock();
    puVar1 = puStack_1a8;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    _objc_retain(puStack_1a8);
    uVar5 = SUB81(&uStack_170,0);
    param_4 = auStack_100;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar6 = *plStack_160;
      unaff_x23 = *(undefined8 *)PTR__kUTTypeImage_11034b1d0;
      unaff_x24 = *(undefined8 *)PTR__kUTTypeGIF_11034b1c0;
      do {
        unaff_x20 = (undefined *)0x0;
        do {
          if (*plStack_160 != lVar6) {
            _objc_enumerationMutation(puStack_1a8);
          }
          uVar7 = *(undefined8 *)(lStack_168 + (long)unaff_x20 * 8);
          _objc_retain(unaff_x23);
          uVar2 = uVar7;
          func_0x00010bfd8240();
          uVar8 = unaff_x23;
          if ((int)uVar2 != 0) {
            _objc_retain(unaff_x24);
            _objc_release(unaff_x23);
            uVar8 = unaff_x24;
          }
          puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_198 = 0xc2000000;
          pcStack_190 = FUN_105ce8870;
          puStack_188 = &UNK_1108e4d00;
          uStack_178 = (undefined1)uVar2;
          ppuStack_180 = param_1;
          func_0x00010c09b300(uVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar8);
          unaff_x20 = unaff_x20 + 1;
        } while (puVar1 != unaff_x20);
        uVar5 = SUB81(&uStack_170,0);
        param_4 = auStack_100;
        puVar1 = puStack_1a8;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    param_3 = (undefined *)0x0;
    _objc_release(puStack_1a8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(puStack_1a8);
  puVar1 = puStack_1b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  puVar3 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_1b8 = FUN_105ce8744;
  uStack_1f0 = unaff_x24;
  uStack_1e8 = unaff_x23;
  puStack_1e0 = param_3;
  ppuStack_1d8 = param_1;
  puStack_1d0 = unaff_x20;
  puStack_1c8 = puVar1;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar4 = param_2;
  func_0x00010c08fa60();
  if ((param_4 == (undefined1 *)0x0) && (puVar4 != (undefined1 *)0x0)) {
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_105ce8834;
    puStack_210 = &UNK_1108488f8;
    _objc_copyWeak(auStack_200,puVar3 + 0x20);
    _objc_retain(param_2);
    puStack_208 = param_2;
    uStack_1f8 = uVar5;
    func_0x0001000d76cc("APPSTORE",&puStack_228);
    _objc_release(puStack_208);
    _objc_destroyWeak(auStack_200);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105ce8744; end: 105ce8833;  */

void FUN_105ce8744(long param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_4 == 0) && (lVar1 != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105ce8834;
    puStack_60 = &UNK_1108488f8;
    _objc_copyWeak(auStack_50,param_1 + 0x20);
    _objc_retain(param_2);
    lStack_58 = param_2;
    uStack_48 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105ce8834; end: 105ce886f;  */

void FUN_105ce8834(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf54820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce8870; end: 105ce8887;  */

void FUN_105ce8870(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105ce8884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28),param_3);
  return;
}



/* Entry: 105ce8888; end: 105ce896f; -[SCPreviewFeatureCustomSticker _canPasteImagesFromPasteboard:] */

bool FUN_105ce8888(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c0f5b20(uVar6);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c083820();
    iVar5 = (int)uVar6;
    _objc_release(uVar3);
  }
  else {
    iVar5 = 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfd7de0();
  lVar4 = param_3;
  func_0x00010bf34de0(param_3);
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c13d1c0(*(undefined8 *)(param_1 + 0x68));
  return iVar5 != 0 && ((int)lVar1 != 0 && lVar2 < lVar4);
}



/* Entry: 105ce8970; end: 105ce89fb; -[SCPreviewFeatureCustomSticker _handleAppForeground] */

void FUN_105ce8970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdd9ca0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be70b00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105ce89fc; end: 105ce8a53; -[SCPreviewFeatureCustomSticker _updateStickerToolbarButtonWithImage:] */

void FUN_105ce89fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b300();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ce8a54; end: 105ce8bdf; -[SCPreviewFeatureCustomSticker _displayCustomSticker:atPosition:isFromCutout:isAnimated:] */

void FUN_105ce8a54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29cde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_68,param_3);
    uVar1 = uVar2;
    func_0x00010c0e0460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_68);
    _objc_retain(param_5);
    uVar3 = uVar1;
    uStack_80 = param_1;
    uStack_78 = param_2;
    uStack_70 = param_6;
    uStack_6f = param_7;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105ce8be0; end: 105ce8c9b;  */

void FUN_105ce8be0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ce8c9c; end: 105ce8e4f;  */

void FUN_105ce8c9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2721e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ba960;
  _objc_alloc(PTR_PTR_1126ba960);
  func_0x00010c04c640();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c252ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51200(uVar7,uVar8);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c3d58;
  _objc_opt_new(PTR_PTR_1126c3d58);
  func_0x00010c2aa4a0(uVar7,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b04e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b08e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1340(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0ec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b01a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e80(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105ce8e50; end: 105ce8e53;  */

void FUN_105ce8e50(void)

{
  return;
}



/* Entry: 105ce8e54; end: 105ce8eb3; -[SCPreviewFeatureCustomSticker _setupDropInteraction] */

void FUN_105ce8e54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIDropInteraction_1126c3d60;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef9450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_addInteraction__11259beb8,
               *(undefined8 *)(param_1 + 0x48));
    return;
  }
  return;
}



/* Entry: 105ce8eb4; end: 105ce8f73; -[SCPreviewFeatureCustomSticker .cxx_destruct] */

void FUN_105ce8eb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ce8f74; end: 105ce9333; -[SCPreviewFeatureDrawingImpl initWithConfiguration:previewScopeServices:previewABServices:snapCrop:userInteractionStateLogger:commonLoggingParamsBuilder:emojiBrushResourceProvider:preferences:simpleContentFetcher:filterUIContainer:] */

undefined8 *
FUN_105ce8f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ecd28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_storeWeak(puVar1 + 4,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c112020();
    puVar1[0xe] = uVar3;
    _objc_release(uVar2);
    uVar4 = puVar1[6];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar7 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar4);
    uVar6 = uVar7;
    func_0x00010c0d3c80();
    _objc_release(uVar7);
    if (uVar6 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puVar1[7];
      puVar1[7] = puVar5;
    }
    else {
      _objc_retain(uVar6);
      uVar7 = puVar1[7];
      puVar1[7] = uVar6;
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c020360();
    func_0x00010c216fa0(puVar1);
    _objc_release(puVar5);
    lVar8 = puVar1[7];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 == 0) {
      func_0x00010c1d0640(puVar1[7]);
    }
    puVar9 = puVar1 + 4;
    _objc_loadWeakRetained(puVar9);
    func_0x00010c2aca80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar1 + 4;
    _objc_loadWeakRetained(puVar9);
    func_0x00010c2acac0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ce9334; end: 105ce934f; -[SCPreviewFeatureDrawingImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105ce9334(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  if ((param_4 == 1) && (*(char *)(param_1 + 0x78) = (char)param_5, param_5 != 0)) {
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
  return;
}



/* Entry: 105ce9350; end: 105ce9373; -[SCPreviewFeatureDrawingImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105ce9350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2ac9a0(param_4,param_2,*(undefined1 *)(param_1 + 0x69));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105ce9374; end: 105ce9377; -[SCPreviewFeatureDrawingImpl editCount] */

void FUN_105ce9374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_strokeCount_112675120);
  return;
}



/* Entry: 105ce9378; end: 105ce9417; -[SCPreviewFeatureDrawingImpl setToolbarItemViewModel:] */

void FUN_105ce9378(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xb8);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce9418; end: 105ce943f; -[SCPreviewFeatureDrawingImpl toolbarItemViewModelObservable] */

void FUN_105ce9418(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ce9440; end: 105ce976b; -[SCPreviewFeatureDrawingImpl createDrawingViewWithFrame:] */

void FUN_105ce9440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010c078120();
  if ((int)lVar8 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c3d68;
    _objc_opt_new(PTR_PTR_1126c3d68);
  }
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126c3d70;
  _objc_alloc();
  puVar9 = puVar1;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c240000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_5 + 0x40);
  func_0x00010c240640(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014960(param_1,param_2,param_3,param_4,puVar1,param_6,puVar10,puVar2,uVar3,lVar4,
                      *(undefined8 *)(param_5 + 0x48));
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  uVar5 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf926c0();
  if ((int)uVar3 == 0) {
    lVar8 = param_5 + 8;
    _objc_loadWeakRetained();
    lVar6 = lVar8;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    _objc_release(uVar5);
    if (lVar6 != 0) {
      lVar8 = param_5 + 8;
      _objc_loadWeakRetained(lVar8);
      lVar6 = lVar8;
      func_0x00010bf89f40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c23ef60();
      func_0x00010c2037c0(puVar1,param_6,lVar7);
      _objc_release(lVar6);
      _objc_release(lVar8);
      goto LAB_105ce95fc;
    }
  }
  else {
    _objc_release(uVar5);
  }
  func_0x00010c2037c0(puVar1,param_6,1);
LAB_105ce95fc:
  func_0x00010c21e900(puVar1,param_6,0);
  func_0x00010c18b200(0x4018000000000000,puVar1);
  lVar8 = *(long *)(param_5 + 0x38);
  func_0x00010c0e00e0(lVar8,param_6,&PTR____CFConstantStringClassReference_110e27ff8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = *(undefined **)(param_5 + 0x38);
    func_0x00010c0e00e0(puVar9,param_6,&PTR____CFConstantStringClassReference_110e27ff8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar8);
  func_0x00010c284660(puVar1,param_6,puVar9);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(puVar1,param_6,&uStack_a0);
  lVar8 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar8;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar4 = *(long *)(param_5 + 0x58);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c0ef5c0();
    dVar11 = (double)lVar7 + 10.0;
  }
  else {
    dVar11 = 14.0;
  }
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(dVar11);
  _objc_release(puVar2);
  if (lVar6 == 0) {
    _objc_release(lVar4);
  }
  _objc_release(lVar6);
  _objc_release(lVar8);
  uVar3 = *(undefined8 *)(param_5 + 0x88);
  *(undefined **)(param_5 + 0x88) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(puVar10);
  return;
}



/* Entry: 105ce976c; end: 105ce9787; -[SCPreviewFeatureDrawingImpl hasStroke] */

bool FUN_105ce976c(long param_1)

{
  func_0x00010c25dbe0();
  return 0 < param_1;
}



/* Entry: 105ce9788; end: 105ce978f; -[SCPreviewFeatureDrawingImpl strokeCount] */

void FUN_105ce9788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_strokeCount_112675120);
  return;
}



/* Entry: 105ce9790; end: 105ce9797; -[SCPreviewFeatureDrawingImpl pointCount] */

void FUN_105ce9790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_pointCount_11261e4d0)
  ;
  return;
}



/* Entry: 105ce9798; end: 105ce979f; -[SCPreviewFeatureDrawingImpl updateVersion] */

void FUN_105ce9798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_updateVersion_1126809a8);
  return;
}



/* Entry: 105ce97a0; end: 105ce97a7; -[SCPreviewFeatureDrawingImpl drawingMetadata] */

void FUN_105ce97a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_drawingMetadata_1125c0178);
  return;
}



/* Entry: 105ce97a8; end: 105ce9833; -[SCPreviewFeatureDrawingImpl multiSnapDrawingCache] */

void FUN_105ce97a8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x88);
  puVar1 = PTR_PTR_1126c3d70;
  _objc_opt_class(PTR_PTR_1126c3d70);
  _objc_opt_isKindOfClass(uVar4,puVar1);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x88);
    func_0x00010c0d2180();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c3d68;
    _objc_opt_class(PTR_PTR_1126c3d68);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar4 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105ce9834; end: 105ce983b; -[SCPreviewFeatureDrawingImpl emojiBrushListVersion] */

void FUN_105ce9834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_currentAvailableEmojiBrushListVe_1125b51f0);
  return;
}



/* Entry: 105ce983c; end: 105ce9857; -[SCPreviewFeatureDrawingImpl shouldDisplayEmojiBrushOnboardingAnimation] */

uint FUN_105ce983c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfdba20(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105ce9858; end: 105ce9a57; -[SCPreviewFeatureDrawingImpl toolbarButtonItem] */

void FUN_105ce9858(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uStack_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x90);
    func_0x00010bf5e100();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf529e0();
    if (uVar10 < 9) {
      uVar10 = 0;
      uStack_68 = 0;
    }
    else {
      uStack_68 = uVar2;
      func_0x00010c25e980(uVar2,param_2,0,8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0(uVar2);
      uVar10 = uVar2;
      func_0x00010c25e980(uVar2,param_2,8,uVar3 - 8);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e27fd8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c067fc0();
    _objc_release(uVar4);
    lVar9 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar9,param_2,&PTR____CFConstantStringClassReference_110e27ff8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x38);
      func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e27ff8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar9);
    puVar6 = PTR_PTR_1126c3d78;
    _objc_alloc();
    puVar1 = PTR_s__toolbarButtonTapped__11252d108;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    lVar7 = param_1;
    func_0x00010c22f640();
    lVar9 = param_1 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010bff6a20(puVar6,param_2,1,uVar4,param_1,puVar1,puVar5,uVar8,(char)lVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar6;
    _objc_release(uVar8);
    _objc_release(lVar9);
    func_0x00010c191b20(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x88));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x88),param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(uStack_68);
    lVar9 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 105ce9a58; end: 105ce9a5f; -[SCPreviewFeatureDrawingImpl setHidden:] */

void FUN_105ce9a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_setHidden__1126479f8)
  ;
  return;
}



/* Entry: 105ce9a60; end: 105ce9a67; -[SCPreviewFeatureDrawingImpl setAlpha:] */

void FUN_105ce9a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105ce9a68; end: 105ce9a9b; -[SCPreviewFeatureDrawingImpl setTransform:] */

void FUN_105ce9a68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  uStack_18 = param_3[5];
  uStack_20 = param_3[4];
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x88),param_2,&uStack_40);
  return;
}



/* Entry: 105ce9a9c; end: 105ce9aa3; -[SCPreviewFeatureDrawingImpl convertPoint:toView:] */

void FUN_105ce9a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf512b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_convertPoint_toView__1125b1e50);
  return;
}



/* Entry: 105ce9aa4; end: 105ce9aab; -[SCPreviewFeatureDrawingImpl addAnimation:forKey:] */

void FUN_105ce9aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c103a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_pop_addAnimation_forKey__11261e8b0);
  return;
}



/* Entry: 105ce9aac; end: 105ce9ab3; -[SCPreviewFeatureDrawingImpl removeAnimationForKey:] */

void FUN_105ce9aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c103b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_pop_removeAnimationForKey__11261e8f0);
  return;
}



/* Entry: 105ce9ab4; end: 105ce9b03; -[SCPreviewFeatureDrawingImpl _updateStrokeColor:] */

void FUN_105ce9ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf8a2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284660();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce9b04; end: 105ce9ba3; -[SCPreviewFeatureDrawingImpl _updateUserPreferencesWithColor:paletteType:] */

void FUN_105ce9b04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,param_3,
                        &PTR____CFConstantStringClassReference_110e27ff8);
  }
  if (param_4 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,param_4,
                        &PTR____CFConstantStringClassReference_110e27fd8);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1d0560(uVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e27fb8);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce9ba4; end: 105ce9cc3; -[SCPreviewFeatureDrawingImpl _updateUIWithUserAction:dataDict:] */

void FUN_105ce9ba4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e28038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee30e0(param_1,param_2,0,uVar1);
    _objc_release(uVar1);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010bf21f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf8a260();
    func_0x00010c2aca80(lVar2,param_2,lVar4 + 1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar2);
    if ((*(long *)(param_1 + 0xa8) != 0) || (*(long *)(param_1 + 0xb0) != 0)) goto LAB_105ce9ca4;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e28058;
  }
  else {
    if (param_3 != 0) goto LAB_105ce9ca4;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e28018;
  }
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1200(param_1,param_2,uVar1);
  _objc_release(uVar1);
LAB_105ce9ca4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ce9cc4; end: 105ce9e97; -[SCPreviewFeatureDrawingImpl drawingColorsHexString] */

void FUN_105ce9cc4(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar9 = param_1;
  func_0x00010c25dbe0();
  if (lVar9 < 1) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c25dbe0();
    if (0 < lVar9) {
      lVar9 = 0;
      do {
        uVar2 = *(ulong *)(param_1 + 0x88);
        func_0x00010bf89f40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar5 = PTR_PTR_1126bcf08;
        _objc_opt_class(PTR_PTR_1126bcf08);
        uVar2 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar4);
        uVar4 = uVar3;
        func_0x00010bf89e60();
        if (uVar4 == 0) {
          uVar4 = uVar3;
          func_0x00010bf40c40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          func_0x00010bf09c40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          if (uVar2 != 0) {
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar1);
            _objc_release(puVar5);
          }
          _objc_release(uVar2);
        }
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
        lVar6 = param_1;
        func_0x00010c25dbe0();
      } while (lVar9 < lVar6);
    }
    ppuVar7 = ppuVar1;
    func_0x00010bf51e00(ppuVar1);
    ppuVar8 = ppuVar7;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 105ce9e98; end: 105cea09b; -[SCPreviewFeatureDrawingImpl drawingStartPositions] */

void FUN_105ce9e98(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar9 = param_1;
  func_0x00010c25dbe0();
  if (lVar9 < 1) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c25dbe0();
    if (0 < lVar9) {
      lVar9 = 0;
      do {
        uVar2 = *(ulong *)(param_1 + 0x88);
        func_0x00010bf89f40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar5 = PTR_PTR_1126bcf08;
        _objc_opt_class(PTR_PTR_1126bcf08);
        uVar2 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar4);
        uVar4 = uVar3;
        func_0x00010c102f00(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar4;
        func_0x00010bfb1920(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c09ea00(uVar3);
        func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x88));
        func_0x00010c09ea00(uVar3);
        func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x88));
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1);
        _objc_release(puVar5);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
        lVar6 = param_1;
        func_0x00010c25dbe0();
      } while (lVar9 < lVar6);
    }
    ppuVar7 = ppuVar1;
    func_0x00010bf51e00(ppuVar1);
    ppuVar8 = ppuVar7;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 105cea09c; end: 105cea0a3; -[SCPreviewFeatureDrawingImpl drawingV1DidChangeColor:] */

void FUN_105cea09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateUserPreferencesWithColor__1125965e0,param_3,0);
  return;
}



/* Entry: 105cea0a4; end: 105cea0eb; -[SCPreviewFeatureDrawingImpl drawingDidChangePaletteType:] */

void FUN_105cea0a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee30e0(param_1,param_2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cea0ec; end: 105cea1df; -[SCPreviewFeatureDrawingImpl updateForDrawItem:] */

void FUN_105cea0ec(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_hide_1125d5f18);
    return;
  }
  uVar2 = param_1 + 0x80;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bfa2360();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
    func_0x00010c22e6e0();
    if (iVar1 == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    puVar4 = PTR_PTR_1126c3d80;
    _objc_alloc();
    func_0x00010be73f80(param_1);
    func_0x00010c014d60();
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar4;
    _objc_release(uVar6);
  }
  lVar5 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar5);
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c235840(*(undefined8 *)(param_1 + 0x98));
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa2340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cea1e0; end: 105cea20f; -[SCPreviewFeatureDrawingImpl updatePinchResizeTooltipFrame] */

void FUN_105cea1e0(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010be73f80();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x98),PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 105cea210; end: 105cea217; -[SCPreviewFeatureDrawingImpl hideTooltip] */

void FUN_105cea210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 105cea218; end: 105cea223; -[SCPreviewFeatureDrawingImpl setTooltipDidResize] */

void FUN_105cea218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_setDidResizeBrush__112641120,1);
  return;
}



/* Entry: 105cea224; end: 105cea22b; -[SCPreviewFeatureDrawingImpl setMultiSnapDelegate:] */

void FUN_105cea224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_setMultiSnapDelegate__112650000);
  return;
}



/* Entry: 105cea22c; end: 105cea233; -[SCPreviewFeatureDrawingImpl replaceDrawingStrokeHistory:forSegmentIndex:] */

void FUN_105cea22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c130df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_replaceDrawingStrokeHistory_forS_112629d98);
  return;
}



/* Entry: 105cea234; end: 105cea3a3; -[SCPreviewFeatureDrawingImpl configureWithView:] */

void FUN_105cea234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_storeWeak(param_5 + 0xa0,param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_5 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_5 + 0xa0;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf20c00();
      lVar2 = param_5 + 8;
      uVar4 = param_1;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0c4080();
      func_0x00010b69097c(param_1,param_2,param_3,param_4,uVar4);
      _CGRectIntegral();
      _objc_release(lVar2);
      goto LAB_105cea2e4;
    }
  }
  else {
    _objc_release();
    _objc_release(lVar1);
  }
  lVar1 = param_5 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4cf40();
LAB_105cea2e4:
  _objc_release(lVar1);
  func_0x00010bf55ee0(param_1,param_2,param_3,param_4,param_5);
  uVar4 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105cea3a4; end: 105cea3df; -[SCPreviewFeatureDrawingImpl activate] */

void FUN_105cea3a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf8e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37de0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be955b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreDrawingState_112582f08);
  return;
}



/* Entry: 105cea3e0; end: 105cea3e7; -[SCPreviewFeatureDrawingImpl responderChainPriority] */

undefined8 FUN_105cea3e0(void)

{
  return 0x7fffffff;
}



/* Entry: 105cea3e8; end: 105cea647; -[SCPreviewFeatureDrawingImpl _restoreDrawingState] */

void FUN_105cea3e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf926c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_105cea648;
    uStack_50 = 0x105cea658;
    puStack_48 = (undefined *)0x0;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c240640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be120();
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar6 = puStack_68[5];
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c240000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8a040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_68[5];
    puStack_68[5] = uVar6;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126c3d88;
    _objc_alloc();
    func_0x00010c00e5c0();
    __Block_object_dispose(&uStack_70,8);
    puVar4 = puStack_48;
  }
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c28c700(*(undefined8 *)(param_1 + 0x88));
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 105cea648; end: 105cea65f;  */

void FUN_105cea648(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105cea660; end: 105cea783;  */

void FUN_105cea660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf8a040(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cea784; end: 105cea80b; -[SCPreviewFeatureDrawingImpl _pinchResizeTooltipFrame] */

double FUN_105cea784(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_4 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  param_4 = param_4 + 0xa0;
  _objc_loadWeakRetained(param_4);
  func_0x00010bf20c00();
  _objc_release(param_4);
  _objc_release(lVar1);
  return (param_3 + -162.0) * 0.5;
}



/* Entry: 105cea80c; end: 105cea907; -[SCPreviewFeatureDrawingImpl _toolbarButtonTapped:] */

void FUN_105cea80c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010c273820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191b20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c273820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x88),param_2,lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa2320();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c3cc8;
  func_0x00010bf89ec0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cea908; end: 105cea9ef; -[SCPreviewFeatureDrawingImpl toolbarColorPickerView:didChangeColor:] */

void FUN_105cea908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2ac9c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bee30e0(param_1,param_2,param_4,0);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e28018;
  uVar6 = 1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = puVar2;
  func_0x00010bee2b80(param_1,param_2,0,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e28038;
  _objc_retain(uVar6);
  func_0x00010c0df840(puVar3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e28058;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar3;
  uStack_a0 = uVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a8,&ppuStack_b8,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bee2b80(puVar2,param_2,1,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee30e0(puVar2,param_2,uVar6,puVar3);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105cea9f0; end: 105ceab17; -[SCPreviewFeatureDrawingImpl toolbarColorPickerView:didTogglePaletteToType:selectedColor:] */

void FUN_105cea9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e28038;
  _objc_retain(param_5);
  func_0x00010c0df840(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e28058;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar1;
  uStack_50 = param_5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bee2b80(param_1,param_2,1,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee30e0(param_1,param_2,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105ceab18; end: 105ceab1b; -[SCPreviewFeatureDrawingImpl drawingViewDidStartDrawing:] */

void FUN_105ceab18(void)

{
  return;
}



/* Entry: 105ceab1c; end: 105ceab1f; -[SCPreviewFeatureDrawingImpl drawingView:didEndDrawingWithStrokeSize:isResized:] */

void FUN_105ceab1c(void)

{
  return;
}



/* Entry: 105ceab20; end: 105ceab23; -[SCPreviewFeatureDrawingImpl drawingViewDidStartPinchResize:] */

void FUN_105ceab20(void)

{
  return;
}



/* Entry: 105ceab24; end: 105ceab27; -[SCPreviewFeatureDrawingImpl drawingViewDidFinishPinchResize:] */

void FUN_105ceab24(void)

{
  return;
}



/* Entry: 105ceab28; end: 105ceab2b; -[SCPreviewFeatureDrawingImpl drawingView:didMoveToPoint:] */

void FUN_105ceab28(void)

{
  return;
}



/* Entry: 105ceab2c; end: 105ceab43; -[SCPreviewFeatureDrawingImpl delegate] */

void FUN_105ceab2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ceab44; end: 105ceab4f; -[SCPreviewFeatureDrawingImpl setDelegate:] */

void FUN_105ceab44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 105ceab50; end: 105ceab57; -[SCPreviewFeatureDrawingImpl isEditing] */

undefined1 FUN_105ceab50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 105ceab58; end: 105ceab5f; -[SCPreviewFeatureDrawingImpl drawingView] */

undefined8 FUN_105ceab58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105ceab60; end: 105ceab67; -[SCPreviewFeatureDrawingImpl emojiBrushResourceProvider] */

undefined8 FUN_105ceab60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105ceab68; end: 105ceab6f; -[SCPreviewFeatureDrawingImpl pinchResizeTooltipView] */

undefined8 FUN_105ceab68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105ceab70; end: 105ceab9f; -[SCPreviewFeatureDrawingImpl setPinchResizeTooltipView:] */

void FUN_105ceab70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ceaba0; end: 105ceabb7; -[SCPreviewFeatureDrawingImpl previewView] */

void FUN_105ceaba0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ceabb8; end: 105ceabc3; -[SCPreviewFeatureDrawingImpl setPreviewView:] */

void FUN_105ceabb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 105ceabc4; end: 105ceabcb; -[SCPreviewFeatureDrawingImpl drawingV2UIState] */

undefined8 FUN_105ceabc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105ceabcc; end: 105ceabd3; -[SCPreviewFeatureDrawingImpl setDrawingV2UIState:] */

void FUN_105ceabcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 105ceabd4; end: 105ceabdb; -[SCPreviewFeatureDrawingImpl colorPickerV2State] */

undefined8 FUN_105ceabd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105ceabdc; end: 105ceabe3; -[SCPreviewFeatureDrawingImpl setColorPickerV2State:] */

void FUN_105ceabdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 105ceabe4; end: 105ceabeb; -[SCPreviewFeatureDrawingImpl toolbarItemViewModel] */

undefined8 FUN_105ceabe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105ceabec; end: 105ceacc7; -[SCPreviewFeatureDrawingImpl .cxx_destruct] */

void FUN_105ceabec(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ceacc8; end: 105ceb0bb; -[SCPreviewFeatureDrawingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceacc8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = param_1 + _DAT_112734334;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar13;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar13 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain();
  _objc_release(uVar1);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112734340;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar15;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112734348;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar15;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112734344;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11273434c;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010bf8e360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x00010bf8e340();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112734350;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar16 = 0;
    lVar15 = 0;
    lVar14 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112734338;
    _objc_loadWeakRetained();
    lVar16 = param_1 + _DAT_11273433c;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_112734354;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar14;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112734358;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar14;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c3d98;
  _objc_alloc(PTR_PTR_1126c3d98);
  func_0x00010c00e5a0();
  if (param_1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + _DAT_11273435c);
  }
  func_0x00010bf9d660(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar13);
  return;
}



/* Entry: 105ceb0bc; end: 105ceb10b;  */

void FUN_105ceb0bc(void)

{
  _objc_alloc(PTR_PTR_1126c3d90);
  func_0x00010c001d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ceb10c; end: 105ceb1b3; -[SCPreviewFeatureDrawingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb10c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273435c,0);
  _objc_destroyWeak(param_1 + _DAT_112734358);
  _objc_destroyWeak(param_1 + _DAT_112734354);
  _objc_destroyWeak(param_1 + _DAT_112734350);
  _objc_destroyWeak(param_1 + _DAT_11273434c);
  _objc_destroyWeak(param_1 + _DAT_112734348);
  _objc_destroyWeak(param_1 + _DAT_112734344);
  _objc_destroyWeak(param_1 + _DAT_112734340);
  _objc_destroyWeak(param_1 + _DAT_11273433c);
  _objc_destroyWeak(param_1 + _DAT_112734338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734334);
  return;
}



/* Entry: 105ceb1b4; end: 105ceb25f; -[SCPreviewFeatureDrawingServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb1b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734360;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734368;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf89ea0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ceb260; end: 105ceb2a3; -[SCPreviewFeatureDrawingServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb260(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734368);
  _objc_destroyWeak(param_1 + _DAT_112734364);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734360);
  return;
}



/* Entry: 105ceb2a4; end: 105ceb34f; -[SCPreviewFeatureDrawingToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb2a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273436c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734374;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf89ea0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ceb350; end: 105ceb393; -[SCPreviewFeatureDrawingToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb350(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734374);
  _objc_destroyWeak(param_1 + _DAT_112734370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273436c);
  return;
}



/* Entry: 105ceb394; end: 105ceb497; -[SCCreativeToolsHintManagerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb394(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_112734378;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ceb498;
  puStack_50 = &UNK_1108e4ed0;
  lStack_48 = lVar2;
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3da8;
  _objc_alloc(PTR_PTR_1126c3da8);
  func_0x00010c01a820();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273437c),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 105ceb498; end: 105ceb4c7;  */

void FUN_105ceb498(void)

{
  _objc_alloc(PTR_PTR_1126c3da0);
  func_0x00010c039d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ceb4c8; end: 105ceb50f; -[SCCreativeToolsHintManagerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceb4c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273437c,0);
  _objc_destroyWeak(param_1 + _DAT_112734378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734380);
  return;
}



/* Entry: 105ceb510; end: 105ceb583; -[SCCreativeToolsHintManagerImpl initWithPreviewTooltipsProvider:] */

undefined1 * FUN_105ceb510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecd30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ceb584; end: 105ceb5fb; -[SCCreativeToolsHintManagerImpl canShowHintForKey:] */

undefined8 FUN_105ceb584(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22f800();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105ceb5fc; end: 105ceb74b; -[SCCreativeToolsHintManagerImpl showHint:forKey:anchoredOnView:] */

void FUN_105ceb5fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) &&
     (lVar1 = param_1, func_0x00010bf2d6e0(param_1,param_2,param_4), (int)lVar1 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105ceb74c;
    puStack_58 = &UNK_110841f80;
    uStack_50 = uVar3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    _objc_retain(uVar3);
    lVar1 = param_1;
    func_0x00010beb95c0(param_1,param_2,param_3,param_5,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,lVar1,param_4);
    _objc_release(lVar1);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ceb74c; end: 105ceb787;  */

void FUN_105ceb74c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ceb788; end: 105ceb7ef; -[SCCreativeToolsHintManagerImpl canShowHintOnceForKey:] */

bool FUN_105ceb788(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105ceb7f0; end: 105ceb8cb; -[SCCreativeToolsHintManagerImpl showHintOnce:forKey:anchoredOnView:] */

void FUN_105ceb7f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) &&
     (lVar1 = param_1, func_0x00010bf2d700(param_1,param_2,param_4), (int)lVar1 != 0)) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar3);
    }
    lVar1 = param_1;
    func_0x00010beb95c0(param_1,param_2,param_3,param_5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,param_4);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ceb8cc; end: 105ceb907; -[SCCreativeToolsHintManagerImpl removeHintForKey:] */

void FUN_105ceb8cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12c960(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ceb908; end: 105ceb943; -[SCCreativeToolsHintManagerImpl removeDisplayOnceHintsForKey:] */

void FUN_105ceb908(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12c960(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ceb944; end: 105cebcbb; -[SCCreativeToolsHintManagerImpl _showHint:anchoredOnView:completion:] */

/* WARNING: Possible PIC construction at 0x000105ceba44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ceba48) */

void FUN_105ceb944(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aea58;
  if (lVar1 == 0) {
    _objc_release(0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
      return;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(param_3 + 0x20);
    uVar6 = 0x3ff0000000000000;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_new(puVar4);
    func_0x00010c212f20();
    _objc_release(param_3);
    func_0x00010c21ad00(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,puVar4,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105cebcbc; end: 105cebcc7;  */

void FUN_105cebcbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105cebcc8; end: 105cebdaf;  */

void FUN_105cebcc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105cebdb0;
    puStack_50 = &UNK_110842e18;
    _objc_retain(lVar4);
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105cebdbc;
    puStack_80 = &UNK_110858070;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar4;
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = uVar5;
    _objc_retain(uVar3);
    uStack_70 = uVar3;
    func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_68,&puStack_98);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(lStack_48);
  }
  return;
}


