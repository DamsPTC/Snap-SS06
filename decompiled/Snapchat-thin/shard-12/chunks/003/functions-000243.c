/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109024e6c; end: 109024e73; -[SCMagicMomentServices magicMomentButtonProvider] */

undefined8 FUN_109024e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109024e74; end: 109024e7b; -[SCMagicMomentServices magicMomentControllerProvider] */

undefined8 FUN_109024e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109024e7c; end: 109024e83; -[SCMagicMomentServices magicMomentAlertPresenter] */

undefined8 FUN_109024e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109024e84; end: 109024ebf; -[SCMagicMomentServices .cxx_destruct] */

void FUN_109024e84(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109024ec0; end: 109024f33; +[SCSpectaclesCalibrationFactory calibrationWithNewportData:serialNumber:] */

void FUN_109024ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcf70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008440();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109024f34; end: 109024fa7; +[SCSpectaclesCalibrationFactory calibrationWithHermosaData:serialNumber:] */

void FUN_109024f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcf70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008440();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109024fa8; end: 109025003;  */

void FUN_109024fa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109025004; end: 10902503b;  */

undefined1  [16] FUN_109025004(int param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1 - 3;
  if (uVar1 < 10) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dfb22a0 + (ulong)uVar1 * 8);
    auVar2._8_8_ = *(undefined8 *)(&UNK_10dfb22f0 + (ulong)uVar1 * 8);
    return auVar2;
  }
  auVar3._8_8_ = 0x4086000000000000;
  auVar3._0_8_ = 0x4086000000000000;
  return auVar3;
}



/* Entry: 10902503c; end: 109025077;  */

bool FUN_10902503c(long param_1)

{
  if (1 < (int)param_1 - 9U) {
    return (int)param_1 - 7U < 2;
  }
  func_0x00010b6fc1a4();
  return param_1 != 5;
}



/* Entry: 109025078; end: 109026757;  */

void FUN_109025078(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daf8b8,
                      &PTR____CFConstantStringClassReference_110f19ef8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 109026758; end: 10902685f; -[SCSpectaclesTransferSession fetchContentWithOptions:] */

void FUN_109026758(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c282ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be15fa0(param_1,param_2,uVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280520(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  if (((uint)param_3 >> 1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c27a400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be15fa0(param_1,param_2,uVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280520(puVar1,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  puVar4 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109026860; end: 109026a23; -[SCSpectaclesTransferSession _filterContentDictionary:options:] */

undefined * FUN_109026860(undefined8 param_1,undefined8 param_2,undefined **param_3,uint param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_4 >> 2 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111183758;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  ppuVar4 = ppuVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (ppuVar4 != (undefined **)0x0) {
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar2);
        }
        ppuVar5 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        if ((param_4 & 0x18) != 0) {
          func_0x00010bfaea20(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
        }
        func_0x00010befa160(puVar3);
        _objc_release(ppuVar6);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar4 != ppuVar8);
      ppuVar4 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c23e340(param_2);
    return (undefined *)(ulong)((uint)param_2 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 109026a24; end: 109026a3f;  */

uint FUN_109026a24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c23e340(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 109026a40; end: 109026a47;  */

void FUN_109026a40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_skipPersistToMemories_11266d2f8);
  return;
}



/* Entry: 109026a48; end: 109026a4f; -[SCSpectaclesTransferSession allContent] */

void FUN_109026a48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchContentWithOptions__1125c7138,0);
  return;
}



/* Entry: 109026a50; end: 109026a57; -[SCSpectaclesTransferSession pendingImportContent] */

void FUN_109026a50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchContentWithOptions__1125c7138,0xe);
  return;
}



/* Entry: 109026a58; end: 109026a5f; -[SCSpectaclesTransferSession importedContent] */

void FUN_109026a58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchContentWithOptions__1125c7138,0xd);
  return;
}



/* Entry: 109026a60; end: 109026a67; -[SCSpectaclesTransferSession pendingExportContent] */

void FUN_109026a60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchContentWithOptions__1125c7138,0x16);
  return;
}



/* Entry: 109026a68; end: 109026aef; -[SCSpectaclesTransferSession exportedContent] */

void FUN_109026a68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchContentWithOptions__1125c7138,0x15);
  return;
}



/* Entry: 109026af0; end: 109026b63; -[SCSpectaclesAuxiliaryContentPreloadingServices initWithPreloader:] */

undefined1 * FUN_109026af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe98;
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



/* Entry: 109026b64; end: 109026b6b; -[SCSpectaclesAuxiliaryContentPreloadingServices preloader] */

undefined8 FUN_109026b64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109026b6c; end: 109026b77; -[SCSpectaclesAuxiliaryContentPreloadingServices .cxx_destruct] */

void FUN_109026b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109026b78; end: 109026b7f; -[SCSpectaclesAuxiliaryContentServices assetMetadataHandler] */

undefined8 FUN_109026b78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109026b80; end: 109026b87; -[SCSpectaclesAuxiliaryContentServices renderingAvailabilityHandler] */

undefined8 FUN_109026b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109026b88; end: 109026b8f; -[SCSpectaclesAuxiliaryContentServices renderingMetadataProvider] */

undefined8 FUN_109026b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109026b90; end: 109026b97; -[SCSpectaclesAuxiliaryContentServices cacheClearing] */

undefined8 FUN_109026b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109026b98; end: 109026c5b; -[SCSpectaclesAuxiliaryContentServices .cxx_destruct] */

void FUN_109026b98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109026c5c; end: 109026c67;  */

bool FUN_109026c5c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 109026c68; end: 109026ccf; +[SCMinervaMagicCaptionClientConfig descriptor] */

void FUN_109026c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be14e0,
                        &PTR____CFConstantStringClassReference_110f1c178,&PTR_DAT_1132bef18,
                        &PTR_DAT_1132bf0f0,6,0x20,0x1c);
    puRam00000001137306b0 = puVar1;
  }
  return;
}



/* Entry: 109026cd0; end: 109026d4b; +[SCMinervaMagicCaptionMediaMetadata descriptor] */

undefined * FUN_109026cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be1530,
                        &PTR____CFConstantStringClassReference_110f1c198,&PTR_DAT_1132bef18,
                        &PTR_DAT_1132bf1b0,7,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137306b8 = puVar1;
  }
  return puRam00000001137306b8;
}



/* Entry: 109026d4c; end: 109026db3; +[SCMinervaMagicCaption descriptor] */

void FUN_109026d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be1580,
                        &PTR____CFConstantStringClassReference_110f1c1b8,&PTR_DAT_1132bef18,
                        &PTR_DAT_1132befd0,4,0x28,0x1c);
    puRam00000001137306c0 = puVar1;
  }
  return;
}



/* Entry: 109026db4; end: 109026e1b; +[SCMinervaMagicCaptionTone descriptor] */

void FUN_109026db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be15d0,
                        &PTR____CFConstantStringClassReference_110f1c1d8,&PTR_DAT_1132bef18,
                        &PTR_s_id_p_1132bef50,2,0x10,0x1c);
    puRam00000001137306c8 = puVar1;
  }
  return;
}



/* Entry: 109026e1c; end: 109026eb7; +[SCGenerateTextRequestContext descriptor] */

undefined * FUN_109026e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be1620,
                        &PTR____CFConstantStringClassReference_110f1c1f8,&PTR_DAT_1132bef18,
                        &PTR_DAT_1132bf050,5,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfb239f);
    puRam00000001137306d0 = puVar1;
  }
  return puRam00000001137306d0;
}



/* Entry: 109026eb8; end: 109026f1f; +[SCStoryReplyRequestContext descriptor] */

void FUN_109026eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be1670,
                        &PTR____CFConstantStringClassReference_110f1c218,&PTR_DAT_1132bef18,
                        &PTR_s_storyId_1132bef30,1,0x10,0x1c);
    puRam00000001137306d8 = puVar1;
  }
  return;
}



/* Entry: 109026f20; end: 109027017; +[SCGenerateTextRequestParams descriptor] */

void FUN_109026f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be16c0,
                        &PTR____CFConstantStringClassReference_110f1c238,&PTR_DAT_1132bef18,
                        &PTR_DAT_1132bef90,2,0xc,0x1c);
    puRam00000001137306e0 = puVar1;
  }
  return;
}



/* Entry: 109027018; end: 109027023;  */

bool FUN_109027018(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 109027024; end: 10902708b; +[SCCTCLapsedCaptionUsageConfig descriptor] */

void FUN_109027024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be17b0,
                        &PTR____CFConstantStringClassReference_110f1c278,&PTR_DAT_1132bf290,
                        &PTR_DAT_1132bf2a8,3,0x18,0x1c);
    puRam00000001137306f0 = puVar1;
  }
  return;
}



/* Entry: 10902708c; end: 1090270f3; +[SCPreviewDiscardAlertConfig descriptor] */

void FUN_10902708c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be1850,
                        &PTR____CFConstantStringClassReference_110f1c298,&PTR_DAT_1132bf308,
                        &PTR_s_isEnabled_1132bf320,7,0x14,0x1c);
    puRam00000001137306f8 = puVar1;
  }
  return;
}



/* Entry: 1090270f4; end: 1090270fb; -[SCUcoServices ucoDependencyFactory] */

undefined8 FUN_1090270f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090270fc; end: 109027103; -[SCUcoServices remoteAssetsLoader] */

undefined8 FUN_1090270fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109027104; end: 10902710b; -[SCUcoServices lensMetadataRepository] */

undefined8 FUN_109027104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10902710c; end: 109027113; -[SCUcoServices ucoLogger] */

undefined8 FUN_10902710c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109027114; end: 10902715b; -[SCUcoServices .cxx_destruct] */

void FUN_109027114(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902715c; end: 1090271ff; -[SCUcoCompositRequiredDataLoader initWithRequiredDataLoaders:performer:] */

undefined1 *
FUN_10902715c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffeb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109027200; end: 10902729b; -[SCUcoCompositRequiredDataLoader initWithRequiredDataLoaders:] */

undefined8 FUN_109027200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x19,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c03f700(param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 10902729c; end: 1090273e7; -[SCUcoCompositRequiredDataLoader loadRequiredDataForLensMetadata:] */

void FUN_10902729c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1090273e8;
  puStack_60 = &UNK_110ad54e0;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar5,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar3;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1090273f4;
  puStack_88 = &UNK_11085c638;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(puVar2,param_2,&puStack_a0,uVar4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_80);
  _objc_release(uVar5);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090273e8; end: 10902740b;  */

void FUN_1090273e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadRequiredDataForLensMetadata__112604a30,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10902740c; end: 10902743b; -[SCUcoCompositRequiredDataLoader .cxx_destruct] */

void FUN_10902740c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902743c; end: 1090274e3; -[SCUcoRemoteAssetsAvalabilityProvider initWithRequiredDataLoader:] */

undefined8 FUN_10902743c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,uVar2,0x19,0,0xe);
  _objc_release(uVar2);
  func_0x00010c03f6c0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1090274e4; end: 1090275bf; -[SCUcoRemoteAssetsAvalabilityProvider initWithRequiredDataLoader:performer:] */

undefined1 *
FUN_1090274e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffeb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090275c0; end: 109027713; -[SCUcoRemoteAssetsAvalabilityProvider prepareRemoteAssetsForLens:completion:] */

void FUN_1090275c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109027714;
  puStack_60 = &UNK_110842508;
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_58 = param_4;
  _objc_retainBlock();
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109027714; end: 109027727;  */

void FUN_109027714(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109027720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 109027728; end: 10902775b;  */

void FUN_109027728(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10902775c; end: 10902786f; -[SCUcoRemoteAssetsAvalabilityProvider _prepareRemoteAssetsForLens:completion:] */

void FUN_10902775c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if (iVar2 == 0) {
    func_0x00010be4d580(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c297260(param_1);
    _objc_release(param_4);
    _objc_release(param_1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109027870; end: 10902789f;  */

void FUN_109027870(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010902789c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 1090278a0; end: 109027a07; -[SCUcoRemoteAssetsAvalabilityProvider _loadFutureForLens:] */

void FUN_1090278a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c09c080(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c297260(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109027a08; end: 109027a5b;  */

void FUN_109027a08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109027a5c; end: 109027b17; -[SCUcoRemoteAssetsAvalabilityProvider _handleLoadedFutureResult:lens:] */

void FUN_109027a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,0,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109027b18; end: 109027b5f; -[SCUcoRemoteAssetsAvalabilityProvider .cxx_destruct] */

void FUN_109027b18(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109027b60; end: 109027bcf; +[SCUcoRemoteAssetsLoadErrors errorForEmptyContentForAssetId:] */

void FUN_109027b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f1c2d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0b260(param_1,param_2,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109027bd0; end: 109027bdf; +[SCUcoRemoteAssetsLoadErrors errorForDeallocatedLoader] */

void FUN_109027bd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__errorWithCode_description__112560638,1,
             &PTR____CFConstantStringClassReference_110f1c2f8);
  return;
}



/* Entry: 109027be0; end: 109027ccb; +[SCUcoRemoteAssetsLoadErrors _errorWithCode:description:] */

undefined1 * FUN_109027be0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **in_x3;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110daafd8;
  if (in_x3 != (undefined **)0x0) {
    ppuStack_40 = in_x3;
  }
  _objc_retain(in_x3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f1c2b8;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_80;
  pcStack_58 = FUN_109027ccc;
  ppuStack_70 = in_x3;
  puStack_68 = puVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  puStack_78 = PTR_PTR_1126ffec0;
  puStack_80 = puVar1;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(ppuVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined ***)((long)ppuVar3 + 8) = ppuVar5;
    _objc_release(uVar4);
  }
  _objc_release(ppuVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 109027ccc; end: 109027d3f; -[SCUcoReqiredRemoteAssetsLoader initWithRemoteAssetPrefetcher:] */

undefined1 * FUN_109027ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffec0;
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



/* Entry: 109027d40; end: 109027ed7; -[SCUcoReqiredRemoteAssetsLoader loadRequiredDataForLensMetadata:] */

void FUN_109027d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_109027ed8;
  uStack_60 = 0x109027ee8;
  uStack_58 = 0;
  _objc_initWeak(auStack_88,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar1);
  func_0x00010bfa50a0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109027ed8; end: 109027eef;  */

void FUN_109027ed8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109027ef0; end: 109027fbf;  */

void FUN_109027ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010be45420();
    _objc_retain(0);
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      lVar1 = 0;
      if (*(long *)(lVar5 + 0x28) != 0) {
        lVar1 = *(long *)(lVar5 + 0x28);
      }
      _objc_retain(lVar1);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(long *)(lVar5 + 0x28) = lVar1;
      _objc_release(uVar4);
    }
    _objc_release(0);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 109027fc0; end: 109027fdf;  */

void FUN_109027fc0(long param_1)

{
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 109027fe0; end: 1090280a3; -[SCUcoReqiredRemoteAssetsLoader _isValidLensAsset:contentPath:error:] */

undefined8
FUN_109027fe0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    if (param_4 != 0) {
      uVar3 = 1;
      goto LAB_10902807c;
    }
    lVar1 = param_3;
    func_0x00010c27dd80();
    puVar2 = PTR_PTR_1126dcf78;
    uVar3 = 0;
    if ((param_5 == (undefined8 *)0x0) || (lVar1 == 1)) goto LAB_10902807c;
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98ae0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar2;
    _objc_release(lVar1);
  }
  uVar3 = 0;
LAB_10902807c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1090280a4; end: 1090280af; -[SCUcoReqiredRemoteAssetsLoader .cxx_destruct] */

void FUN_1090280a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090280b0; end: 109028153; -[SCUcoRequiredDataFetcher initWithUcoDataFetching:requiredDataLoader:] */

undefined1 *
FUN_1090280b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109028154; end: 10902815b; -[SCUcoRequiredDataFetcher fetchedUCOObservable] */

void FUN_109028154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_fetchedUCOObservable_1125c8818);
  return;
}



/* Entry: 10902815c; end: 10902816b; -[SCUcoRequiredDataFetcher fetchUcoWithFilterId:completion:completionPerformer:] */

void FUN_10902815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchUcoWithFilterId_requestTimi_1125c85e0,param_3,6,param_4,param_5);
  return;
}



/* Entry: 10902816c; end: 109028297; -[SCUcoRequiredDataFetcher fetchUcoWithFilterId:requestTiming:completion:completionPerformer:] */

void FUN_10902816c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfab0e0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 109028298; end: 10902832b;  */

void FUN_109028298(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_2 == 0) || (lVar1 == 0)) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
  }
  else {
    func_0x00010be13a20(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10902832c; end: 1090284a7; -[SCUcoRequiredDataFetcher fetchUcoIconWithFilterId:completion:completionPerformer:] */

void FUN_10902832c(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_4 == (undefined *)0x0) goto LAB_1090283d0;
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,puVar2);
    }
    else {
      _objc_retain(param_4);
      _objc_retain(puVar2);
      func_0x00010c0f7fc0(param_5);
      _objc_release(puVar2);
      _objc_release(param_4);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    func_0x00010bfab0a0(uVar3);
    puVar2 = param_4;
  }
  _objc_release(puVar2);
LAB_1090283d0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1090284a8; end: 1090284cf;  */

void FUN_1090284a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090284b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1090284d0; end: 1090285f3; -[SCUcoRequiredDataFetcher fetchUcoWithLens:completion:completionPerformer:] */

void FUN_1090284d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfab100(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1090285f4; end: 109028687;  */

void FUN_1090285f4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_2 == 0) || (lVar1 == 0)) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
  }
  else {
    func_0x00010be13a20(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109028688; end: 109028693; -[SCUcoRequiredDataFetcher startUpdatingWithMode:] */

void FUN_109028688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_startUpdatingWithMode__112671fc0,0);
  return;
}



/* Entry: 109028694; end: 10902869b; -[SCUcoRequiredDataFetcher stopUpdating] */

void FUN_109028694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_stopUpdating_112673578);
  return;
}



/* Entry: 10902869c; end: 1090287bb; -[SCUcoRequiredDataFetcher _fetchRequiredDataForLens:completion:completionPerformer:] */

void FUN_10902869c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c09c080(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1090287bc;
  puStack_58 = &UNK_11096f980;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  if (param_5 == 0) {
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar1,param_2,&puStack_70,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c297260(uVar1,param_2,&puStack_70,param_5);
  }
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1090287bc; end: 10902883f;  */

void FUN_1090287bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    lVar2 = *(long *)(param_1 + 0x28);
    if ((int)uVar1 == 0) {
      pcVar4 = *(code **)(lVar2 + 0x10);
      uVar3 = 0;
      uVar1 = param_3;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      pcVar4 = *(code **)(lVar2 + 0x10);
      uVar1 = 0;
    }
    (*pcVar4)(lVar2,uVar3,uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109028840; end: 10902886f; -[SCUcoRequiredDataFetcher .cxx_destruct] */

void FUN_109028840(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109028870; end: 109028963; -[SCUcoThrottleDataFetcher initWithThrottledDataFetching:timeProvider:] */

undefined1 *
FUN_109028870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109028964; end: 10902896b; -[SCUcoThrottleDataFetcher fetchedUCOObservable] */

void FUN_109028964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchedUCOObservable_1125c8818);
  return;
}



/* Entry: 10902896c; end: 10902897b; -[SCUcoThrottleDataFetcher fetchUcoWithFilterId:completion:completionPerformer:] */

void FUN_10902896c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchUcoWithFilterId_requestTimi_1125c85e0,param_3,6,param_4,param_5);
  return;
}



/* Entry: 10902897c; end: 10902898f; -[SCUcoThrottleDataFetcher fetchUcoWithFilterId:requestTiming:completion:completionPerformer:] */

void FUN_10902897c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchUcoWithFilterId_lens_reque_112562df8,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 109028990; end: 109028a2b; -[SCUcoThrottleDataFetcher fetchUcoWithLens:completion:completionPerformer:] */

void FUN_109028990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15160(param_1,param_2,uVar1,param_3,6,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109028a2c; end: 109028ba3; -[SCUcoThrottleDataFetcher fetchUcoIconWithFilterId:completion:completionPerformer:] */

void FUN_109028a2c(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      _objc_retain(param_4);
      _objc_retain(puVar2);
      func_0x00010c0f7fc0(param_5);
      _objc_release(puVar2);
      _objc_release(param_4);
    }
    if (param_4 != (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,0,puVar2);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010bfab0a0(uVar3);
    puVar2 = param_4;
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109028ba4; end: 109028bd7;  */

void FUN_109028ba4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109028bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 109028bd8; end: 109028f6b; -[SCUcoThrottleDataFetcher _fetchUcoWithFilterId:lens:requestTiming:completion:completionPerformer:] */

void FUN_109028bd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf433a0();
  _objc_release(lVar3);
  if (lVar4 == -1) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18));
    _objc_release(lVar2);
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
    if (lVar2 != 0) {
      if (param_7 == 0) {
        lVar3 = lVar2;
        func_0x00010c08fb40(lVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,lVar3,0);
      }
      else {
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_109028f6c;
        puStack_80 = &UNK_11084aaa8;
        _objc_retain(param_6);
        lStack_78 = lVar2;
        lStack_70 = param_6;
        _objc_retain(lVar2);
        func_0x00010c0f88c0(param_7);
        _objc_release(lStack_78);
        lVar3 = lStack_70;
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_109028f04;
    }
  }
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  puVar5 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10));
    _objc_initWeak(auStack_a0,param_1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    if (param_4 == 0) {
      puVar7 = auStack_d8;
      _objc_copyWeak(puVar7,auStack_a0);
      _objc_retain(param_3);
      func_0x00010bfab0e0(uVar8);
      uVar8 = param_3;
    }
    else {
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_109028fb0;
      puStack_b8 = &UNK_110ad55a0;
      puVar7 = auStack_a8;
      _objc_copyWeak(puVar7,auStack_a0);
      _objc_retain(param_3);
      uStack_b0 = param_3;
      func_0x00010bfab100(uVar8);
      uVar8 = uStack_b0;
    }
    _objc_release(uVar8);
    _objc_destroyWeak(puVar7);
    _objc_destroyWeak(auStack_a0);
  }
  puVar6 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c297260(puVar6);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(puVar5);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
LAB_109028f04:
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109028f6c; end: 109028faf;  */

void FUN_109028f6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c08fb40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109028fb0; end: 109029087;  */

void FUN_109028fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be112c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109029088; end: 10902909b;  */

void FUN_109029088(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109029094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10902909c; end: 1090290a3; -[SCUcoThrottleDataFetcher startUpdatingWithMode:] */

void FUN_10902909c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startUpdatingWithMode__112671fc0);
  return;
}



/* Entry: 1090290a4; end: 1090290ab; -[SCUcoThrottleDataFetcher stopUpdating] */

void FUN_1090290a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stopUpdating_112673578);
  return;
}



/* Entry: 1090290ac; end: 109029207; -[SCUcoThrottleDataFetcher dealloc] */

void FUN_1090290ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        puVar2 = PTR_PTR_1126bccb8;
        func_0x00010bdf7ba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(uVar9);
        _objc_release(puVar2);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = lVar1;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_1126ffed0;
  lStack_140 = param_1;
  _objc_msgSendSuper2(&lStack_140,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f1c338;
  lVar7 = -1;
  puVar8 = puVar3;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(lVar7);
  _objc_retain(puVar8);
  func_0x00010c09faa0(*(undefined8 *)(puVar3 + 0x20));
  if (lVar7 != 0) {
    lVar1 = lVar7;
    func_0x00010c07f200();
    uVar9 = 0x409c200000000000;
    if ((int)lVar1 == 0) {
      uVar9 = 0x40ac200000000000;
    }
    uVar4 = *(undefined8 *)(puVar3 + 0x28);
    func_0x00010bf5e5e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf64e40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126dcf80;
    _objc_alloc(PTR_PTR_1126dcf80);
    func_0x00010c0227a0();
    func_0x00010c1d0560(*(undefined8 *)(puVar3 + 0x18));
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  uVar9 = *(undefined8 *)(puVar3 + 0x10);
  func_0x00010c0dff20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(puVar3 + 0x10));
  func_0x00010c280b40(*(undefined8 *)(puVar3 + 0x20));
  if (lVar7 == 0) {
    func_0x00010bf43ca0(uVar9);
  }
  else {
    func_0x00010bf43d60();
  }
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 109029208; end: 1090292c7; +[SCUcoThrottleDataFetcher _dataFetcherDeallocatedError] */

void FUN_109029208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f1c358;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f1c338;
  lVar8 = -1;
  puVar9 = puVar1;
  func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110f1c338,
                      0xffffffffffffffff,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(lVar8);
  _objc_retain(puVar9);
  func_0x00010c09faa0(*(undefined8 *)(puVar1 + 0x20));
  if (lVar8 != 0) {
    lVar3 = lVar8;
    func_0x00010c07f200();
    uVar6 = 0x409c200000000000;
    if ((int)lVar3 == 0) {
      uVar6 = 0x40ac200000000000;
    }
    uVar4 = *(undefined8 *)(puVar1 + 0x28);
    func_0x00010bf5e5e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf64e40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126dcf80;
    _objc_alloc(PTR_PTR_1126dcf80);
    func_0x00010c0227a0();
    func_0x00010c1d0560(*(undefined8 *)(puVar1 + 0x18),param_2,puVar2,ppuVar7);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  uVar6 = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010c0dff20(uVar6,param_2,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(puVar1 + 0x10),param_2,ppuVar7);
  func_0x00010c280b40(*(undefined8 *)(puVar1 + 0x20));
  if (lVar8 == 0) {
    func_0x00010bf43ca0(uVar6,param_2,puVar9);
  }
  else {
    func_0x00010bf43d60(uVar6,param_2,lVar8);
  }
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 1090292c8; end: 10902941b; -[SCUcoThrottleDataFetcher _fetchFinishedForUcoWithFilterId:lens:error:] */

void FUN_1090292c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c07f200();
    uVar5 = 0x409c200000000000;
    if ((int)lVar1 == 0) {
      uVar5 = 0x40ac200000000000;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf5e5e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf64e40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126dcf80;
    _objc_alloc(PTR_PTR_1126dcf80);
    func_0x00010c0227a0();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,param_3);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dff20(uVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  if (param_4 == 0) {
    func_0x00010bf43ca0(uVar5,param_2,param_5);
  }
  else {
    func_0x00010bf43d60(uVar5,param_2,param_4);
  }
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10902941c; end: 10902946f; -[SCUcoThrottleDataFetcher .cxx_destruct] */

void FUN_10902941c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


