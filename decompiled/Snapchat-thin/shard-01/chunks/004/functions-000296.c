/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101038dfc; end: 101038e5b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider sizeWithSticker:] */

void FUN_101038dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101038c20(param_3,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101038e5c; end: 101038ebb; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider imageSizeWithSticker:] */

void FUN_101038e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101038c20(param_3,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101038ebc; end: 101038f2f;  */

void FUN_101038ebc(undefined8 *param_1,double param_2,double param_3,long *param_4)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (*param_4 != 0) {
    func_0x000107c3ab3c();
    if ((param_2 == 0.0) && (param_3 == 0.0)) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126a6240;
      func_0x000107c610f8();
      func_0x000107c495d0(param_2,param_3);
    }
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 101038f30; end: 101038f8b;  */

void FUN_101038f30(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112d55e08,&UNK_10d91cce8);
    lStack_28 = lVar1;
    func_0x000104888f7c(&lStack_28);
  }
  return;
}



/* Entry: 101038f8c; end: 101038f9b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider openPhotoPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101038f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d55d90),PTR_s_showPhotoPickerOptions_11266be78);
  return;
}



/* Entry: 101038f9c; end: 10103901b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider provideOnPhotoSelectedWithOnPhotoSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101038f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  puVar4 = &UNK_110378cb8;
  func_0x000107c613fc(&UNK_110378cb8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d55d98);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_101039900;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  FUN_1010398f0(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10103901c; end: 10103902b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider showErrorDialogWithErrorText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103901c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d55d90),PTR_s_showPhotoPickerErrorText__11266be68);
  return;
}



/* Entry: 10103902c; end: 101039187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103902c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  code *pcStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = (long)&pcStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12;
  func_0x000107c42074(*(undefined8 *)(unaff_x20 + _DAT_112d55d90));
  pcVar6 = *(code **)(unaff_x20 + _DAT_112d55d98);
  if ((pcVar6 != (code *)0x0) && (lVar8 = *(long *)(param_1 + 0x10), lVar8 != 0)) {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d55d98))[1];
    param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
    lStack_68 = *(long *)(lVar7 + 0x48);
    pcStack_70 = *(code **)(lVar7 + 0x10);
    func_0x000107c6157c();
    do {
      (*pcStack_70)(lVar5,param_1,lVar1);
      lVar3 = lVar5;
      (**(code **)(lVar7 + 0x20))(lVar4,lVar5,lVar1);
      func_0x000107c5ed70();
      (*pcVar6)();
      func_0x000107c6142c(lVar3);
      (**(code **)(lVar7 + 8))(lVar4,lVar1);
      param_1 = param_1 + lStack_68;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    FUN_1010398f0(pcVar6,uVar2);
  }
  return;
}



/* Entry: 101039188; end: 1010391df; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider photoPickerFinishedSelectingWithURLs:] */

void FUN_101039188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5ede0(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10103902c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1010391e0; end: 10103927f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010391e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d55db0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3dc50(param_1);
    func_0x000107c61180();
    func_0x000107c5d3d8(lVar1,param_2,param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  lVar1 = unaff_x20 + _DAT_112d55db8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4f110();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101039280; end: 10103928b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidUpdateAltitude:] */

void FUN_101039280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1010391e0(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10103928c; end: 1010392ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103928c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d55db0) != 0) {
    func_0x000107c5d6bc(*(long *)(unaff_x20 + _DAT_112d55db0),param_2,param_1);
  }
  lVar1 = unaff_x20 + _DAT_112d55db8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4f120();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1010392f0; end: 1010393df; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidUpdateWeather:] */

/* WARNING: Possible PIC construction at 0x000101039328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010103932c) */

void FUN_1010392f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10103928c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010393e0; end: 1010393eb; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidUpdateVenues:] */

void FUN_1010393e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101039340)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010393ec; end: 10103943f;  */

void FUN_1010393ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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



/* Entry: 101039440; end: 10103948b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidReceiveNewMixerOrderingFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039440(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f10c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10103948c; end: 1010394d7; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidUpdateVenueFilter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103948c(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f118();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1010394d8; end: 101039523; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidUpdateGeoFilterImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010394d8(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f114();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101039524; end: 101039567; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderWillStartUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039524(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f138();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101039568; end: 1010395c7; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidCompleteUpdates:succeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039568(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f108();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1010395c8; end: 101039627; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderDidCompleteUpdates:isGeoFilterListUpdatedDuringLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010395c8(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f104();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101039628; end: 101039673; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderInsertPromptFilterInVenueFilterPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039628(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f12c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101039674; end: 1010396bf; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderInsertBroadLocationPromptFilterInVenueFilterPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039674(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f128();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1010396c0; end: 101039703; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderCanUseUCO] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010396c0(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f100();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101039704; end: 101039747; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderShouldUseVenueFilterInsteadOfLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039704(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f134();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101039748; end: 10103978b; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider previewFilterDataProviderCanUseColorLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039748(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f0fc();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10103978c; end: 1010397cf; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider shouldDisableMotionFilters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103978c(long param_1)

{
  param_1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5aba8();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1010397d0; end: 10103982f; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider cacheCurrentFilterSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010397d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c3ef04(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 101039830; end: 10103988f; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider restoreFilterSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039830(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c50694(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 101039890; end: 1010398ef; -[_TtC33SnapEditorStickerPluginEntryPoint21StickerPluginProvider stopPreviewCarouselUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101039890(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112d55db8;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c5be64(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1010398f0; end: 1010398ff;  */

void FUN_1010398f0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101039900; end: 101039937;  */

void FUN_101039900(undefined8 param_1)

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



/* Entry: 101039938; end: 101039a8b;  */

undefined8 FUN_101039938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar6 + 0x30))(param_1,1,lVar1);
  uVar4 = 0;
  if ((int)uVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar6 + 8))(param_1,lVar1);
    uVar4 = uVar2;
  }
  lVar1 = 0;
  func_0x000107c5ef14();
  lVar6 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar1);
  uVar5 = 0;
  if ((int)uVar2 != 1) {
    func_0x000107c5ef00();
    (**(code **)(lVar6 + 8))(param_2,lVar1);
    uVar5 = uVar2;
  }
  lVar1 = 0;
  func_0x000107c5efa8();
  lVar6 = *(long *)(lVar1 + -8);
  uVar2 = param_3;
  (**(code **)(lVar6 + 0x30))(param_3,1,lVar1);
  uVar3 = 0;
  if ((int)uVar2 != 1) {
    func_0x000107c5ef9c();
    (**(code **)(lVar6 + 8))(param_3,lVar1);
    uVar3 = uVar2;
  }
  func_0x000107c463f8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 101039a8c; end: 101039bfb;  */

void FUN_101039a8c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10103b750(0,param_1,param_2);
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



/* Entry: 101039bfc; end: 101039d5b;  */

ulong FUN_101039bfc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101039d5c);
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
  FUN_101039ea4(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101039d58);
      (*pcVar1)();
    }
    FUN_101039f34(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 101039d5c; end: 101039ea3;  */

ulong FUN_101039d5c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101039ea4);
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
  FUN_101039ea4(uVar2,uVar4,0x112d55bf8,&PTR_PTR_1126c5040,0x112d55e40,&UNK_10d931950);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101039ea0);
      (*pcVar1)();
    }
    FUN_10103a050(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101039ea4; end: 101039f33;  */

undefined *
FUN_101039ea4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101039a8c(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101039f34; end: 10103a04f;  */

long FUN_101039f34(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10103a04c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10103a050);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10103b750(0,param_5,param_6);
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
      FUN_10103b750(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10103a048);
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



/* Entry: 10103a050; end: 10103a167;  */

long FUN_10103a050(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10103a164);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10103a168);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10103b750(0,0x112d55bf8,&PTR_PTR_1126c5040);
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
      FUN_10103b750(0,0x112d55bf8,&PTR_PTR_1126c5040);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10103a160);
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



/* Entry: 10103a168; end: 10103a2d7;  */

void FUN_10103a168(void)

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
  
  func_0x0001000285a8(0x112d55e60,&UNK_10d91cd58);
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
    if (uVar8 == 0) goto LAB_10103a244;
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
LAB_10103a244:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10103a2d8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10103a2b0;
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
LAB_10103a2b0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10103a2d8; end: 10103b253;  */

void FUN_10103a2d8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
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
  uVar6 = 0x112d55e60;
  func_0x0001000285a8(0x112d55e60,&UNK_10d91cd58);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10103a540:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10103a570);
          (*pcVar5)();
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
          goto LAB_10103a540;
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
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10103a574);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
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
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10103b254; end: 10103b353;  */

undefined * FUN_10103b254(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d55e60,&UNK_10d91cd58);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10103b350);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10103b354);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10103b354; end: 10103b413;  */

long FUN_10103b354(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_40;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uStack_40 = 0;
  uVar1 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uStack_40);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  lStack_80 = 0;
  func_0x000107c46370(unaff_x20,param_2,uStack_40,uVar1,&lStack_80);
  func_0x000107c61170(uStack_40);
  lVar2 = lStack_80;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar2);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000107c61610();
  return lVar2;
}



/* Entry: 10103b414; end: 10103b4db;  */

long FUN_10103b414(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c46370();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000107c61610();
  return lVar1;
}



/* Entry: 10103b4dc; end: 10103b4ff;  */

undefined8 FUN_10103b4dc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10103b500; end: 10103b55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10103b500(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar4 = puVar1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    puVar3 = puVar1;
    FUN_10103259c();
    puVar4 = &UNK_110379398;
    func_0x000107c613fc(&UNK_110379398,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    puVar4[0x20] = param_2 & 1;
    *(undefined8 *)(puVar4 + 0x28) = param_3;
    uStack_68 = 0x10103b820;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1103793b0;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar2);
    puVar4 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61434(param_1);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(puVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(puVar3);
    puVar3 = *(undefined **)(puVar1 + _DAT_112d55d50);
    func_0x000107c61174(puVar3);
    puVar4 = puVar3;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 10103b55c; end: 10103b5c7;  */

void FUN_10103b55c(void)

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
  plVar3 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10103b5c8;
  plVar3[0x27] = lVar1;
  plVar3[0x28] = lVar4;
  plVar3[0x26] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x29] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x2a] = lVar1;
  plVar3[0x2b] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101037794,lVar1,lVar2);
  return;
}



/* Entry: 10103b5c8; end: 10103b603;  */

void FUN_10103b5c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010103b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10103b604; end: 10103b613;  */

/* WARNING: Possible PIC construction at 0x000101037258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010372cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103736c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101037390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101037370) */
/* WARNING: Removing unreachable block (ram,0x0001010372d0) */
/* WARNING: Removing unreachable block (ram,0x000101037280) */
/* WARNING: Removing unreachable block (ram,0x0001010372e4) */
/* WARNING: Removing unreachable block (ram,0x00010103725c) */
/* WARNING: Removing unreachable block (ram,0x000101037394) */

void FUN_10103b604(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    if (param_2 == 0) {
      param_1 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010d91cc90);
      func_0x000107c5fadc(0xd00000000000003e,0x800000010ef20fd0);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
    }
    else {
      puVar3 = PTR_PTR_1126a6290;
      func_0x000107c610f8(PTR_PTR_1126a6290);
      func_0x000107c453e4();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c575cc(puVar3);
    }
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x31);
    func_0x000107c5fb78(0xd00000000000002f,0x800000010ef21010);
    uVar2 = 0x112d511f8;
    lStack_48 = param_4;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c603d0(&lStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_38;
    uVar2 = uStack_40;
    param_1 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010d91cc90);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10103b614; end: 10103b693;  */

void FUN_10103b614(void)

{
  FUN_101035f7c();
  return;
}



/* Entry: 10103b694; end: 10103b6bb;  */

void FUN_10103b694(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010103b6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10103b6bc; end: 10103b6db;  */

void FUN_10103b6bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10103b6dc; end: 10103b71f;  */

void FUN_10103b6dc(void)

{
  FUN_101036a14();
  return;
}



/* Entry: 10103b720; end: 10103b74f;  */

undefined * FUN_10103b720(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_50;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
    FUN_10103b750(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    puStack_50 = puVar2;
    func_0x000104888f7c(&puStack_50);
    func_0x000107c61170(puVar2);
    func_0x000103edf0bc();
  }
  else {
    ppuVar3 = (undefined **)puVar1;
    FUN_101034c60();
    puVar2 = (undefined *)ppuVar3;
    func_0x000103edf0bc();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61574(ppuVar3);
  return puVar2;
}



/* Entry: 10103b750; end: 10103b78f;  */

void FUN_10103b750(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10103b790; end: 10103b797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b790(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101032a14();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d55da8);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112d55d40);
      func_0x000107c61174(lVar2);
      func_0x000107c3e534(uVar3);
      func_0x000107c61180();
      func_0x000107c4d664(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10103b798; end: 10103b84b;  */

undefined8 FUN_10103b798(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10103b84c; end: 10103b95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b84c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d55da8);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112d55d40);
      func_0x000107c61174(lVar2);
      func_0x000107c3e534(uVar3);
      func_0x000107c61180();
      func_0x000107c4d664(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10103b95c; end: 10103b967; -[SCSnapEditorStickerPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b95c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55eb0;
  func_0x000107c61428(param_1 + _DAT_112d55eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b968; end: 10103b973; -[SCSnapEditorStickerPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55eb0;
  func_0x000107c61428(param_1 + _DAT_112d55eb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103b974; end: 10103b97f; -[SCSnapEditorStickerPluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b974(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55eb8;
  func_0x000107c61428(param_1 + _DAT_112d55eb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b980; end: 10103b98b; -[SCSnapEditorStickerPluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55eb8;
  func_0x000107c61428(param_1 + _DAT_112d55eb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103b98c; end: 10103b997; -[SCSnapEditorStickerPluginEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b98c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ec0;
  func_0x000107c61428(param_1 + _DAT_112d55ec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b998; end: 10103b9a3; -[SCSnapEditorStickerPluginEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ec0;
  func_0x000107c61428(param_1 + _DAT_112d55ec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103b9a4; end: 10103b9af; -[SCSnapEditorStickerPluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ec8;
  func_0x000107c61428(param_1 + _DAT_112d55ec8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b9b0; end: 10103b9bb; -[SCSnapEditorStickerPluginEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ec8;
  func_0x000107c61428(param_1 + _DAT_112d55ec8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103b9bc; end: 10103b9c7; -[SCSnapEditorStickerPluginEntryPoint ctpItemViewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ed0;
  func_0x000107c61428(param_1 + _DAT_112d55ed0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b9c8; end: 10103b9d3; -[SCSnapEditorStickerPluginEntryPoint setCtpItemViewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ed0;
  func_0x000107c61428(param_1 + _DAT_112d55ed0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103b9d4; end: 10103b9df; -[SCSnapEditorStickerPluginEntryPoint previewABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ed8;
  func_0x000107c61428(param_1 + _DAT_112d55ed8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b9e0; end: 10103b9eb; -[SCSnapEditorStickerPluginEntryPoint setPreviewABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ed8;
  func_0x000107c61428(param_1 + _DAT_112d55ed8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103b9ec; end: 10103b9f7; -[SCSnapEditorStickerPluginEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ee0;
  func_0x000107c61428(param_1 + _DAT_112d55ee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103b9f8; end: 10103ba03; -[SCSnapEditorStickerPluginEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103b9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ee0;
  func_0x000107c61428(param_1 + _DAT_112d55ee0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba04; end: 10103ba0f; -[SCSnapEditorStickerPluginEntryPoint storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ee8;
  func_0x000107c61428(param_1 + _DAT_112d55ee8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103ba10; end: 10103ba1b; -[SCSnapEditorStickerPluginEntryPoint setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ee8;
  func_0x000107c61428(param_1 + _DAT_112d55ee8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba1c; end: 10103ba27; -[SCSnapEditorStickerPluginEntryPoint userTaggingFriendsProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ef0;
  func_0x000107c61428(param_1 + _DAT_112d55ef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103ba28; end: 10103ba33; -[SCSnapEditorStickerPluginEntryPoint setUserTaggingFriendsProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ef0;
  func_0x000107c61428(param_1 + _DAT_112d55ef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba34; end: 10103ba3f; -[SCSnapEditorStickerPluginEntryPoint venuePickerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55ef8;
  func_0x000107c61428(param_1 + _DAT_112d55ef8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103ba40; end: 10103ba4b; -[SCSnapEditorStickerPluginEntryPoint setVenuePickerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55ef8;
  func_0x000107c61428(param_1 + _DAT_112d55ef8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba4c; end: 10103ba57; -[SCSnapEditorStickerPluginEntryPoint pollServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f00;
  func_0x000107c61428(param_1 + _DAT_112d55f00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103ba58; end: 10103ba63; -[SCSnapEditorStickerPluginEntryPoint setPollServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f00;
  func_0x000107c61428(param_1 + _DAT_112d55f00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba64; end: 10103ba6f; -[SCSnapEditorStickerPluginEntryPoint activeUserSessionSharedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f08;
  func_0x000107c61428(param_1 + _DAT_112d55f08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103ba70; end: 10103ba7b; -[SCSnapEditorStickerPluginEntryPoint setActiveUserSessionSharedServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f08;
  func_0x000107c61428(param_1 + _DAT_112d55f08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba7c; end: 10103ba87; -[SCSnapEditorStickerPluginEntryPoint bitmojiAppServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f10;
  func_0x000107c61428(param_1 + _DAT_112d55f10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103ba88; end: 10103ba93; -[SCSnapEditorStickerPluginEntryPoint setBitmojiAppServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f10;
  func_0x000107c61428(param_1 + _DAT_112d55f10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103ba94; end: 10103ba9f; -[SCSnapEditorStickerPluginEntryPoint snapEditorFilterDataProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ba94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f18;
  func_0x000107c61428(param_1 + _DAT_112d55f18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103baa0; end: 10103baab; -[SCSnapEditorStickerPluginEntryPoint setSnapEditorFilterDataProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103baa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f18;
  func_0x000107c61428(param_1 + _DAT_112d55f18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103baac; end: 10103bab7; -[SCSnapEditorStickerPluginEntryPoint captionStickerSuggestionsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103baac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f20;
  func_0x000107c61428(param_1 + _DAT_112d55f20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103bab8; end: 10103bac3; -[SCSnapEditorStickerPluginEntryPoint setCaptionStickerSuggestionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103bab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f20;
  func_0x000107c61428(param_1 + _DAT_112d55f20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103bac4; end: 10103bacf; -[SCSnapEditorStickerPluginEntryPoint ctpNetworkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103bac4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f28;
  func_0x000107c61428(param_1 + _DAT_112d55f28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103bad0; end: 10103bb13;  */

void FUN_10103bad0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10103bb14; end: 10103bb1f; -[SCSnapEditorStickerPluginEntryPoint setCtpNetworkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103bb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f28;
  func_0x000107c61428(param_1 + _DAT_112d55f28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103bb20; end: 10103bb73;  */

void FUN_10103bb20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10103bb74; end: 10103bbbb; -[SCSnapEditorStickerPluginEntryPoint previewStickerPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103bb74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55f30;
  func_0x000107c61428(param_1 + _DAT_112d55f30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10103bbbc; end: 10103bc1f; -[SCSnapEditorStickerPluginEntryPoint setPreviewStickerPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103bbbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55f30;
  func_0x000107c61428(param_1 + _DAT_112d55f30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10103bc20; end: 10103c5c3;  */

/* WARNING: Possible PIC construction at 0x00010103c090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c32c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010103c18c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010103c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010103c1a0) */
/* WARNING: Removing unreachable block (ram,0x00010103c1d0) */
/* WARNING: Removing unreachable block (ram,0x00010103c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010103c200) */
/* WARNING: Removing unreachable block (ram,0x00010103c1f0) */
/* WARNING: Removing unreachable block (ram,0x00010103c240) */
/* WARNING: Removing unreachable block (ram,0x00010103c230) */
/* WARNING: Removing unreachable block (ram,0x00010103c220) */
/* WARNING: Removing unreachable block (ram,0x00010103c280) */
/* WARNING: Removing unreachable block (ram,0x00010103c270) */
/* WARNING: Removing unreachable block (ram,0x00010103c260) */
/* WARNING: Removing unreachable block (ram,0x00010103c250) */
/* WARNING: Removing unreachable block (ram,0x00010103c2c0) */
/* WARNING: Removing unreachable block (ram,0x00010103c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010103c2a0) */
/* WARNING: Removing unreachable block (ram,0x00010103c290) */
/* WARNING: Removing unreachable block (ram,0x00010103c310) */
/* WARNING: Removing unreachable block (ram,0x00010103c300) */
/* WARNING: Removing unreachable block (ram,0x00010103c2f0) */
/* WARNING: Removing unreachable block (ram,0x00010103c2e0) */
/* WARNING: Removing unreachable block (ram,0x00010103c370) */
/* WARNING: Removing unreachable block (ram,0x00010103c360) */
/* WARNING: Removing unreachable block (ram,0x00010103c350) */
/* WARNING: Removing unreachable block (ram,0x00010103c340) */
/* WARNING: Removing unreachable block (ram,0x00010103c330) */
/* WARNING: Removing unreachable block (ram,0x00010103c3d0) */
/* WARNING: Removing unreachable block (ram,0x00010103c3c0) */
/* WARNING: Removing unreachable block (ram,0x00010103c3b0) */
/* WARNING: Removing unreachable block (ram,0x00010103c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010103c390) */
/* WARNING: Removing unreachable block (ram,0x00010103c380) */
/* WARNING: Removing unreachable block (ram,0x00010103c430) */
/* WARNING: Removing unreachable block (ram,0x00010103c420) */
/* WARNING: Removing unreachable block (ram,0x00010103c410) */
/* WARNING: Removing unreachable block (ram,0x00010103c400) */
/* WARNING: Removing unreachable block (ram,0x00010103c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010103c3e0) */
/* WARNING: Removing unreachable block (ram,0x00010103c4a0) */
/* WARNING: Removing unreachable block (ram,0x00010103c490) */
/* WARNING: Removing unreachable block (ram,0x00010103c480) */
/* WARNING: Removing unreachable block (ram,0x00010103c470) */
/* WARNING: Removing unreachable block (ram,0x00010103c460) */
/* WARNING: Removing unreachable block (ram,0x00010103c450) */
/* WARNING: Removing unreachable block (ram,0x00010103c520) */
/* WARNING: Removing unreachable block (ram,0x00010103c510) */
/* WARNING: Removing unreachable block (ram,0x00010103c500) */
/* WARNING: Removing unreachable block (ram,0x00010103c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010103c4e0) */
/* WARNING: Removing unreachable block (ram,0x00010103c4d0) */
/* WARNING: Removing unreachable block (ram,0x00010103c4c0) */
/* WARNING: Removing unreachable block (ram,0x00010103c5a0) */
/* WARNING: Removing unreachable block (ram,0x00010103c590) */
/* WARNING: Removing unreachable block (ram,0x00010103c580) */
/* WARNING: Removing unreachable block (ram,0x00010103c570) */
/* WARNING: Removing unreachable block (ram,0x00010103c560) */
/* WARNING: Removing unreachable block (ram,0x00010103c550) */
/* WARNING: Removing unreachable block (ram,0x00010103c540) */
/* WARNING: Removing unreachable block (ram,0x00010103c530) */
/* WARNING: Removing unreachable block (ram,0x00010103c134) */
/* WARNING: Removing unreachable block (ram,0x00010103c124) */
/* WARNING: Removing unreachable block (ram,0x00010103c114) */
/* WARNING: Removing unreachable block (ram,0x00010103c104) */
/* WARNING: Removing unreachable block (ram,0x00010103c0f4) */
/* WARNING: Removing unreachable block (ram,0x00010103c0e4) */
/* WARNING: Removing unreachable block (ram,0x00010103c0d4) */
/* WARNING: Removing unreachable block (ram,0x00010103c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010103c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010103c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010103c094) */
/* WARNING: Removing unreachable block (ram,0x00010103c190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103bc20(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *unaff_x20;
  undefined8 uVar21;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (plVar2 != (long *)0x0) {
    plVar3 = unaff_x20;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (plVar3 != (long *)0x0) {
      plVar4 = unaff_x20;
      func_0x000107c3df78();
      func_0x000107c61180();
      if (plVar4 == (long *)0x0) {
        func_0x000107c61170(plVar2);
        plVar2 = plVar3;
      }
      else {
        plVar5 = unaff_x20;
        func_0x000107c40014();
        func_0x000107c61180();
        if (plVar5 == (long *)0x0) {
          func_0x000107c61170(plVar2);
          plVar2 = plVar3;
        }
        else {
          plVar6 = unaff_x20;
          func_0x000107c40e2c();
          func_0x000107c61180();
          if (plVar6 != (long *)0x0) {
            plVar7 = unaff_x20;
            func_0x000107c4f0b0();
            func_0x000107c61180();
            if (plVar7 != (long *)0x0) {
              plVar8 = unaff_x20;
              func_0x000107c4f1b0();
              func_0x000107c61180();
              if (plVar8 == (long *)0x0) {
                func_0x000107c61170(plVar2);
                plVar2 = plVar3;
              }
              else {
                plVar9 = unaff_x20;
                func_0x000107c5b490();
                func_0x000107c61180();
                if (plVar9 == (long *)0x0) {
                  func_0x000107c61170(plVar2);
                  plVar2 = plVar3;
                }
                else {
                  plVar10 = unaff_x20;
                  func_0x000107c5bf88();
                  func_0x000107c61180();
                  if (plVar10 != (long *)0x0) {
                    plVar11 = unaff_x20;
                    func_0x000107c5dab4();
                    func_0x000107c61180();
                    if (plVar11 != (long *)0x0) {
                      plVar12 = unaff_x20;
                      func_0x000107c5dcd4();
                      func_0x000107c61180();
                      if (plVar12 == (long *)0x0) {
                        func_0x000107c61170(plVar2);
                        plVar2 = plVar3;
                      }
                      else {
                        plVar13 = unaff_x20;
                        func_0x000107c4eb24();
                        func_0x000107c61180();
                        if (plVar13 == (long *)0x0) {
                          func_0x000107c61170(plVar2);
                          plVar2 = plVar3;
                        }
                        else {
                          plVar14 = unaff_x20;
                          func_0x000107c3d1d0();
                          func_0x000107c61180();
                          if (plVar14 != (long *)0x0) {
                            plVar15 = unaff_x20;
                            func_0x000107c3e95c();
                            func_0x000107c61180();
                            if (plVar15 != (long *)0x0) {
                              plVar16 = unaff_x20;
                              func_0x000107c5b228();
                              func_0x000107c61180();
                              if (plVar16 == (long *)0x0) {
                                func_0x000107c61170(plVar2);
                                plVar2 = plVar3;
                              }
                              else {
                                plVar17 = unaff_x20;
                                func_0x000107c3f554();
                                func_0x000107c61180();
                                if (plVar17 == (long *)0x0) {
                                  func_0x000107c61170(plVar2);
                                  plVar2 = plVar3;
                                }
                                else {
                                  func_0x000107c40e30();
                                  func_0x000107c61180();
                                  if (unaff_x20 != (long *)0x0) {
                                    lVar18 = 0;
                                    FUN_1010322f8();
                                    lVar19 = lVar18;
                                    func_0x000107c610f8();
                                    *(long **)(lVar19 + _DAT_112d55c38) = plVar2;
                                    *(long **)(lVar19 + _DAT_112d55c40) = plVar3;
                                    *(long **)(lVar19 + _DAT_112d55c48) = plVar4;
                                    *(long **)(lVar19 + _DAT_112d55c50) = plVar5;
                                    *(long **)(lVar19 + _DAT_112d55c58) = plVar6;
                                    *(long **)(lVar19 + _DAT_112d55c60) = plVar7;
                                    *(long **)(lVar19 + _DAT_112d55c68) = plVar8;
                                    *(long **)(lVar19 + _DAT_112d55c70) = plVar9;
                                    *(long **)(lVar19 + _DAT_112d55c78) = plVar10;
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c5dab4();
                                    func_0x000107c61180();
                                    *(long **)(lVar19 + _DAT_112d55c80) = plVar11;
                                    *(long **)(lVar19 + _DAT_112d55c88) = plVar12;
                                    *(long **)(lVar19 + _DAT_112d55c90) = plVar13;
                                    *(long **)(lVar19 + _DAT_112d55c98) = plVar14;
                                    *(long **)(lVar19 + _DAT_112d55ca0) = plVar15;
                                    *(long **)(lVar19 + _DAT_112d55ca8) = plVar16;
                                    *(long **)(lVar19 + _DAT_112d55cb0) = plVar17;
                                    *(long **)(lVar19 + _DAT_112d55cb8) = unaff_x20;
                                    puVar1 = PTR_s_init_1125d9248;
                                    lStack_78 = lVar19;
                                    lStack_70 = lVar18;
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174(unaff_x20);
                                    plVar3 = &lStack_78;
                                    func_0x000107c61154(plVar3,puVar1);
                                    uVar21 = *(undefined8 *)((long)plVar2 + _DAT_11302ba70);
                                    lVar20 = 0;
                                    FUN_1010316d8();
                                    lVar18 = lVar20;
                                    func_0x000107c610f8();
                                    lVar19 = _DAT_112d55bc0;
                                    func_0x000107c61614(lVar18 + _DAT_112d55bc0,0);
                                    func_0x000107c61604(lVar18 + lVar19,plVar3);
                                    puVar1 = PTR_s_init_1125d9248;
                                    lStack_88 = lVar18;
                                    lStack_80 = lVar20;
                                    func_0x000107c61174(plVar3);
                                    func_0x000107c61174();
                                    func_0x000107c61174(uVar21);
                                    func_0x000107c61154(&lStack_88,puVar1);
                                    func_0x000107c4fba8(uVar21);
                                    plVar2 = plVar3;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(plVar2);
    return;
  }
  return;
}



/* Entry: 10103c5c4; end: 10103c5eb; -[SCSnapEditorStickerPluginEntryPoint begin] */

void FUN_10103c5c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10103bc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10103c5ec; end: 10103c62f; -[SCSnapEditorStickerPluginEntryPoint end] */

void FUN_10103c5ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10103c630; end: 10103cde3;  */

void FUN_10103c630(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar3 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar3 = 0x65706f6373;
    if (((param_2 == 0x65706f6373) && (param_3 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x65706f6373,0xe500000000000000,param_2,param_3,0), (uVar3 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58c58();
    }
    else {
      uVar3 = 0xd000000000000025;
      if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef10f0340)) ||
         (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
         (uVar3 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52844();
      }
      else {
        uVar3 = 0;
        if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
           (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
           (uVar3 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c536e0();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3760)) {
            uVar3 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef1c8a0,param_2,param_3,0);
            if ((uVar3 & 1) == 0) {
              uVar3 = 0xd000000000000011;
              if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10dfd20)) ||
                 (func_0x000107c605b8(0xd000000000000011,0x800000010ef202e0,param_2,param_3,0),
                 (uVar3 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57768();
                goto LAB_10103c6bc;
              }
              if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
                uVar3 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
                if ((uVar3 & 1) == 0) {
                  uVar3 = 0x53736569726f7473;
                  if (((param_2 == 0x53736569726f7473) && (param_3 == -0x108c9a9c96898d9b)) ||
                     (func_0x000107c605b8(0x53736569726f7473,0xef73656369767265,param_2,param_3,0),
                     (uVar3 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c59924();
                  }
                  else {
                    uVar3 = 0;
                    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10defc0)) ||
                       (func_0x000107c605b8(0xd000000000000022,0x800000010ef21040,param_2,param_3,0)
                       , (uVar3 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c5a410();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10def90)) {
                        uVar3 = 0xd000000000000013;
                        func_0x000107c605b8(0xd000000000000013,0x800000010ef21070,param_2,param_3,0)
                        ;
                        if ((uVar3 & 1) == 0) {
                          uVar3 = 0;
                          if (((param_2 == 0x767265536c6c6f70) && (param_3 == -0x13ffffff8c9a9c97))
                             || (func_0x000107c605b8(0x767265536c6c6f70,0xec00000073656369,param_2,
                                                     param_3,0), (uVar3 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c575d4();
                          }
                          else {
                            uVar3 = 0xd00000000000001f;
                            if (((param_2 == -0x2fffffffffffffe1) &&
                                (param_3 == -0x7ffffffef10def70)) ||
                               (func_0x000107c605b8(0xd00000000000001f,0x800000010ef21090,param_2,
                                                    param_3,0), (uVar3 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c52234();
                            }
                            else {
                              uVar3 = 0;
                              if (((param_2 == -0x2fffffffffffffee) &&
                                  (param_3 == -0x7ffffffef10e5d30)) ||
                                 (uVar2 = uVar3,
                                 func_0x000107c605b8(0xd000000000000012,0x800000010ef1a2d0,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c52c90();
                              }
                              else {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffdc) &&
                                    (param_3 == -0x7ffffffef10e37d0)) ||
                                   (func_0x000107c605b8(0xd000000000000024,0x800000010ef1c830,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c593a8();
                                }
                                else {
                                  uVar2 = 0xd000000000000021;
                                  if (((param_2 == -0x2fffffffffffffdf) &&
                                      (param_3 == -0x7ffffffef10def50)) ||
                                     (func_0x000107c605b8(0xd000000000000021,0x800000010ef210b0,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c531a4();
                                  }
                                  else if (((param_2 == -0x2fffffffffffffee) &&
                                           (param_3 == -0x7ffffffef10def20)) ||
                                          (func_0x000107c605b8(0xd000000000000012,0x800000010ef210e0
                                                               ,param_2,param_3,0), (uVar3 & 1) != 0
                                          )) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c53bbc();
                                  }
                                  else {
                                    uVar3 = 0;
                                    if (((param_2 != -0x2fffffffffffffe0) ||
                                        (param_3 != -0x7ffffffef10def00)) &&
                                       (func_0x000107c605b8(0xd000000000000020,0x800000010ef21100,
                                                            param_2,param_3,0), (uVar3 & 1) == 0)) {
                                      func_0x000107c602fc(0x15);
                                      func_0x000107c6142c(0xe000000000000000);
                                      func_0x000107c5fb78(param_2,param_3);
                                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                          0x800000010ef0fc20,
                                                                                                                    
                                                  "SnapEditorStickerPluginEntryPoint/SCSnapEditorStickerPluginEntryPoint.swift"
                                                  ,0x4b,2,0x72,0);
                    /* WARNING: Does not return */
                                      pcVar1 = (code *)SoftwareBreakpoint(1,0x10103cde4);
                                      (*pcVar1)();
                                    }
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c577f0();
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_10103c6bc;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c5a4d0();
                    }
                  }
                  goto LAB_10103c6bc;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c594bc();
              goto LAB_10103c6bc;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53bb8();
        }
      }
    }
  }
LAB_10103c6bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10103cde4; end: 10103ce8f; -[SCSnapEditorStickerPluginEntryPoint setValue:forIvarName:] */

void FUN_10103cde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10103c630(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10103ce90; end: 10103d027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103ce90(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d55eb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55eb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ec0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ec8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ed0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ed8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ee0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ee8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ef0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55ef8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55f00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55f08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55f10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55f18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55f20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55f28,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d55f30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d55f38) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}


