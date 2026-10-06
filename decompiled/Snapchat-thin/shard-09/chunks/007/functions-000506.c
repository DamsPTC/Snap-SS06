/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10711809c; end: 107118297; -[PreviewViewController _postSingleStoryUsingSendToLoadingOverlay:storiesPostingConfig:lensAssetsUploadOperation:lensMetadataFuture:businessIds:captureSessionId:] */

void FUN_10711809c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beb9a40(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2431e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c5e30();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfdc300();
  func_0x00010c105300(uVar1,param_2,param_3,param_4,param_5,param_6,uVar3,param_7,param_8,0x1000100,
                      (char)uVar6,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107118298; end: 107118383; -[PreviewViewController _showLoadingSpinnerOverlay:] */

void FUN_107118298(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_48 = &uStack_50;
  func_0x00010c08f5a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107118384;
  puStack_70 = &UNK_11098f1f8;
  puStack_60 = &uStack_50;
  uStack_58 = param_3;
  _objc_retain();
  ppuVar1 = &puStack_88;
  uStack_68 = param_1;
  _objc_retainBlock();
  (*(code *)ppuVar1[2])();
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 107118384; end: 1071183df;  */

void FUN_107118384(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    uVar1 = param_2;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010c2381a0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071183e0; end: 1071189d3; -[PreviewViewController _handleRequestAndInviteFeaturesAndSendSnap:sendToRecipients:showSendToLoadingOverlay:recipientUsernames:mischiefs:] */

void FUN_1071183e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar2 = param_1;
  puStack_90 = &uStack_98;
  func_0x00010c08f5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1071189d4;
  puStack_b8 = &UNK_11098f1f8;
  puStack_a8 = &uStack_98;
  uStack_a0 = param_5;
  _objc_retain();
  ppuVar3 = &puStack_d0;
  uStack_b0 = uVar2;
  _objc_retainBlock();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107118a30;
  puStack_e8 = &UNK_11098f228;
  uStack_d8 = param_5;
  _objc_retain(uVar2);
  ppuVar4 = &puStack_100;
  uStack_e0 = uVar2;
  _objc_retainBlock();
  ppuVar5 = ppuVar4;
  _dispatch_group_create();
  uVar6 = param_1;
  func_0x00010bebc8e0();
  if ((int)uVar6 != 0) {
    (*(code *)ppuVar3[2])(ppuVar3,param_1);
    uVar6 = param_1;
    func_0x00010c15ba80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd21c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c103780();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = uVar8;
  func_0x00010bfda620();
  if ((int)uVar6 != 0) {
    uVar6 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = uVar8;
    func_0x00010bf9b3c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1deb80(uVar8);
    uVar7 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dea00();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  uVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfd7f00();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((int)uVar10 != 0) {
    uVar6 = param_1;
    func_0x00010c15ba80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd22e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfd7f00();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((int)uVar10 != 0) {
    uVar6 = param_1;
    func_0x00010c15ba80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2800();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfd7f00();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((int)uVar10 != 0) {
    (*(code *)ppuVar3[2])(ppuVar3,param_1);
    uVar6 = param_1;
    func_0x00010c15ba80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2760();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c11ee60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c15e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6d60();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_initWeak(auStack_108,param_1);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107118a48;
  puStack_130 = &UNK_11098f258;
  _objc_copyWeak(auStack_110,auStack_108);
  puStack_118 = &uStack_98;
  uStack_128 = param_3;
  ppuStack_120 = ppuVar4;
  _objc_retain(ppuVar4);
  _objc_retain(param_3);
  func_0x000100bc0718(ppuVar5,PTR___dispatch_main_q_11034be20,&puStack_148);
  _objc_release(ppuStack_120);
  _objc_release(uStack_128);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uVar8);
  _objc_release(ppuVar5);
  _objc_release(uStack_e0);
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(param_3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1071189d4; end: 107118a2f;  */

void FUN_1071189d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    uVar1 = param_2;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010c2381a0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107118a30; end: 107118a47;  */

void FUN_107118a30(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_2 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeLoadingOverlay_112628e18);
  return;
}



/* Entry: 107118a48; end: 107118b47;  */

void FUN_107118a48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfbb9e0();
  func_0x00010c15ba60(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    lVar5 = *(long *)(param_1 + 0x28);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    (**(code **)(lVar5 + 0x10))(lVar5,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107118b48; end: 107118b9f;  */

void FUN_107118b48(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 107118ba0; end: 107118c57; -[PreviewViewController _shouldFireGallerySnapSend] */

uint FUN_107118ba0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07e920();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
    uVar1 = (uint)uVar4 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107118c58; end: 107118deb; -[PreviewViewController _interceptSendingPossiblyWithBusinessProfileIds:completion:] */

void FUN_107118c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22e3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    func_0x00010c28a0e0(param_1);
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    puVar5 = auStack_58;
    _objc_initWeak(puVar5,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(puVar5);
    _objc_release(puVar5);
    (**(code **)(param_4 + 0x10))(param_4,0);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107118dec; end: 107118e4f;  */

void FUN_107118dec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107e328d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20),param_2,lVar2,1,0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107118e50; end: 1071190f3; -[PreviewViewController _sendViewControllerWillCancel] */

void FUN_107118e50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29f420();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18faa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f2e0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c0a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfae100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3360();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acc20(lVar3,param_2,2,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071190f4; end: 1071192d3; -[PreviewViewController _sendToRecipients:massSnapRecipients:storiesPostingConfig:phoneNumbers:businessIds:groups:additionalText:] */

void FUN_1071190f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be3d320(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071192d4; end: 10711932f;  */

void FUN_1071192d4(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bea0c80(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107119330; end: 107119657; -[PreviewViewController _sendToRecipientsWithCrossPosting:massSnapRecipients:storiesPostingConfig:phoneNumbers:businessIds:groups:additionalText:] */

void FUN_107119330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010bf529e0(param_7);
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  uVar4 = param_8;
  func_0x00010bf529e0(param_8);
  uVar5 = param_5;
  func_0x000108469fc8(param_5,uVar1,uVar2,uVar4,uVar3);
  func_0x00010c184760(param_1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5824();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c24b000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c071400();
  if ((int)uVar4 == 0) {
    if (((int)uVar5 == 0) || (uVar4 = param_1, func_0x00010be09000(), (int)uVar4 == 0)) {
      func_0x00010bea0c60(param_1);
    }
    else {
      uVar4 = param_5;
      func_0x0001084694d8(param_5,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c13bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea0c60(param_1);
      _objc_release(uVar5);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107119658;
      puStack_88 = &UNK_11084c4a0;
      uStack_80 = param_1;
      uStack_78 = uVar4;
      _objc_retain(param_6);
      uStack_70 = param_6;
      _objc_retain(param_9);
      uStack_68 = param_9;
      _objc_retain(uVar4);
      ppuVar6 = &puStack_a0;
      _objc_retainBlock(ppuVar6);
      func_0x00010c1862a0(param_1);
      _objc_release(ppuVar6);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uVar4);
    }
  }
  else {
    func_0x00010bea0ca0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107119658; end: 1071196cb;  */

void FUN_107119658(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c24af80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0c60(uVar1,param_2,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48,uVar2,*(undefined8 *)(param_1 + 0x30),
                      PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                      *(undefined8 *)(param_1 + 0x38),1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071196cc; end: 1071198eb; -[PreviewViewController _sendToRecipientsWithCrossPostingSpotlightToStories:massSnapRecipients:storiesPostingConfig:phoneNumbers:businessIds:groups:additionalText:eligibility:] */

void FUN_1071196cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,long param_10)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_10;
  func_0x00010c0dac00();
  _objc_retainAutoreleasedReturnValue();
  if ((((lVar1 == 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) &&
      (lVar2 = param_8, func_0x00010bf529e0(), lVar2 == 0)) &&
     (lVar2 = param_4, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar1 = param_6;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = param_10;
      func_0x00010bf8d5a0(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea0c60(param_1,param_2,param_3,param_4,lVar1,param_6,param_7,param_8,param_9,
                          0x100);
      goto LAB_10711983c;
    }
  }
  else {
    _objc_release(lVar1);
  }
  lVar1 = param_10;
  func_0x00010c0dac00(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0c60(param_1,param_2,param_3,param_4,lVar1,param_6,param_7,param_8,param_9,0);
  _objc_release(lVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1071198ec;
  puStack_80 = &UNK_110848ba8;
  uStack_78 = param_1;
  _objc_retain(param_10);
  lStack_70 = param_10;
  _objc_retain(param_9);
  uStack_68 = param_9;
  ppuVar3 = &puStack_98;
  _objc_retainBlock(ppuVar3);
  func_0x00010c1862a0(param_1,param_2,ppuVar3);
  _objc_release(ppuVar3);
  _objc_release(uStack_68);
  lVar1 = lStack_70;
LAB_10711983c:
  _objc_release(lVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071198ec; end: 107119963;  */

void FUN_1071198ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf8d5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0c60(uVar1,param_2,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48,uVar2,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                      *(undefined8 *)(param_1 + 0x30),0x101);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107119964; end: 10711999f; -[PreviewViewController _enableSpotlightCrossPost] */

undefined8 FUN_107119964(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071199a0; end: 107119fdb; -[PreviewViewController _sendToRecipientsAfterInterceptorCheck:massSnapRecipients:storiesPostingConfig:phoneNumbers:businessIds:groups:additionalText:isCrossPosting:isEligibleForCrossPostingSpotlightToStories:] */

void FUN_1071199a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  byte bVar17;
  long lStack_1f8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  byte bStack_138;
  byte bStack_137;
  byte bStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  ulong uVar16;
  uint uVar18;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_5;
  func_0x00010c105440();
  lVar2 = param_5;
  func_0x00010c0d4ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c071ae0();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_5;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    bVar17 = 0;
    uVar12 = 0;
  }
  else {
    uVar18 = 0;
    uVar12 = 0;
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar4);
        }
        uVar16 = *(ulong *)(lStack_128 + lVar14 * 8);
        uVar15 = (uint)uVar16;
        func_0x00010c071ae0();
        if ((uVar16 & 1) == 0) {
          func_0x00010c071ae0();
          uVar18 = uVar15 | uVar18;
        }
        else {
          uVar12 = 1;
        }
        bVar17 = (byte)uVar18;
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  uVar5 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  if (param_10._1_1_ == '\0') {
    lStack_1f8 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001070c5824();
    _objc_retainAutoreleasedReturnValue();
    lStack_1f8 = lVar4;
    func_0x00010bf22120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c15bd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0ee420();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf100(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105440(param_5);
  func_0x00010bf529e0(param_7);
  lVar4 = lVar2;
  func_0x00010c22e160();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_5;
  func_0x00010beffdc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf62100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar2);
  lVar2 = lVar14;
  func_0x00010bf529e0();
  ppuVar11 = &PTR___NSConcreteGlobalBlock_11098f2d8;
  uVar9 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11098f2d8);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_107119fec;
  puStack_198 = &UNK_11098f3b8;
  uStack_160 = param_9;
  bStack_136 = bVar17 & 1;
  uStack_134 = (undefined1)lVar3;
  uStack_133 = (undefined1)lVar1;
  lStack_190 = param_1;
  lStack_188 = param_5;
  uStack_180 = param_3;
  uStack_178 = uVar9;
  uStack_170 = uVar5;
  uStack_168 = param_8;
  uStack_158 = param_7;
  uStack_150 = param_6;
  uStack_148 = param_4;
  lStack_140 = lVar14;
  bStack_138 = lVar2 != 0 | (byte)lVar4 & 1;
  bStack_137 = (byte)lVar4;
  uStack_135 = uVar12;
  _objc_retain(lVar14);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(uVar5);
  _objc_retain(uVar9);
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar10 = &puStack_1b0;
  _objc_retainBlock(ppuVar10);
  func_0x00010be2f120(param_1);
  _objc_release(ppuVar10);
  _objc_release(lStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(lStack_188);
  _objc_release(lVar14);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(lStack_1f8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar11,PTR_s_userId_112682320);
  return;
}



/* Entry: 107119fdc; end: 107119feb;  */

void FUN_107119fdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 107119fec; end: 10711c7ab;  */

void FUN_107119fec(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined1 *puVar32;
  long lVar33;
  undefined *puVar34;
  byte bVar35;
  undefined8 *puVar36;
  undefined *puVar37;
  double dVar38;
  double dVar39;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_1c8 [8];
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  byte bStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010c07e8c0();
  if ((int)uVar16 == 0) {
    _objc_release(uVar3);
LAB_10711a2c0:
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010c230840();
    if ((int)uVar16 == 0) {
      uVar6 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010c07e960();
      _objc_release(uVar6);
      _objc_release(uVar3);
      if ((int)uVar16 == 0) goto LAB_10711a3ec;
      lVar14 = *(long *)(param_5 + 0x30);
      func_0x00010bf529e0();
      if (lVar14 != 0) {
LAB_10711a330:
        uVar9 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c2431e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c22bc80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar8;
        func_0x0001070c4598();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar16;
        func_0x00010c0b3920();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar6;
        func_0x00010c0f3940();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar15;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
LAB_10711a874:
        func_0x00010c15b840(uVar9);
        _objc_release(uVar5);
        _objc_release(uVar15);
        _objc_release(uVar6);
        _objc_release(uVar3);
        _objc_release(uVar16);
        _objc_release(uVar8);
        _objc_release(uVar7);
        goto LAB_10711a8b8;
      }
      lVar14 = *(long *)(param_5 + 0x48);
      func_0x00010bf529e0();
      if (lVar14 != 0) goto LAB_10711a330;
    }
    else {
      _objc_release(uVar3);
LAB_10711a3ec:
      uVar12 = *(ulong *)(param_5 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar12;
      func_0x00010c230840();
      if ((uVar4 & 1) != 0) {
LAB_10711a650:
        _objc_release(uVar12);
LAB_10711a658:
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar3;
        func_0x00010c230840();
        if ((int)uVar16 != 0) {
          _objc_release(uVar3);
LAB_10711a67c:
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar3;
          func_0x00010c07ea60();
          _objc_release(uVar3);
          if ((int)uVar16 != 0) {
            lVar14 = *(long *)(param_5 + 0x30);
            func_0x00010bf529e0();
            if (lVar14 == 0) {
              lVar14 = *(long *)(param_5 + 0x48);
              func_0x00010bf529e0();
              if (lVar14 == 0) goto LAB_10711a8bc;
            }
            uVar10 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar10;
            func_0x0001070c5554();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c1519c0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar11;
            func_0x0001070c4598();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010c0b3920();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c0f3940();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0aed60(uVar6);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar5);
            _objc_release(uVar15);
            _objc_release(uVar11);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar16);
            _objc_release(uVar10);
            uVar9 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c2431e0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c22bc80(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar8;
            func_0x0001070c4598();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c0b3920();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar6;
            func_0x00010c0f3940();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10711a874;
          }
          puVar34 = PTR_PTR_1126cbed8;
          func_0x00010c111ca0(PTR_PTR_1126cbed8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b69a0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b6980(puVar34);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2ba320(puVar34);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b55c0(puVar34);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2a9aa0(puVar34);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2ae860(puVar34);
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010bf46560(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar3;
          func_0x00010bf311e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aa1c0(puVar34);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar16);
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          uVar16 = uVar3;
          func_0x00010c15e020(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar34;
          func_0x00010bf21f60(puVar34);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be9f040(uVar3);
          _objc_release(puVar24);
          _objc_release(uVar16);
          uVar4 = *(ulong *)(param_5 + 0x28);
          func_0x00010846b590();
          if ((uVar4 & 1) == 0) {
            lVar14 = *(long *)(param_5 + 0x58);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711af30;
          }
          else {
LAB_10711af30:
            uVar16 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c111180(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf26c80();
            _objc_release(uVar16);
          }
          if (*(char *)(param_5 + 0x78) == '\x01') {
            uVar16 = *(undefined8 *)(param_5 + 0x70);
            func_0x000100504554(uVar16,&PTR___NSConcreteGlobalBlock_11098f378);
            uVar3 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c111180(uVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar24 = PTR_PTR_1126d4c58;
            _objc_alloc(PTR_PTR_1126d4c58);
            func_0x00010bff5dc0();
            func_0x00010bf11c40(uVar3);
            _objc_release(puVar24);
            _objc_release(uVar3);
            lVar14 = *(long *)(param_5 + 0x30);
            func_0x00010bf529e0();
            if (lVar14 == 0) {
              uVar4 = *(ulong *)(param_5 + 0x28);
              func_0x00010846b590();
              if ((uVar4 & 1) == 0) {
                lVar14 = *(long *)(param_5 + 0x58);
                func_0x00010bf529e0();
                if (lVar14 == 0) {
                  uVar5 = *(undefined8 *)(param_5 + 0x20);
                  func_0x00010c15e020(uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar5;
                  func_0x00010bfb1160();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar3;
                  func_0x00010c29a0c0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = uVar6;
                  func_0x00010c29ae80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12b460();
                  _objc_release(uVar15);
                  _objc_release(uVar6);
                  _objc_release(uVar3);
                  _objc_release(uVar5);
                  uVar3 = *(undefined8 *)(param_5 + 0x20);
                  func_0x00010c2bd480(uVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf7b580();
                  _objc_release(uVar3);
                }
              }
            }
            _objc_release(uVar16);
          }
          _objc_release(puVar34);
          goto LAB_10711a998;
        }
        uVar6 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar6;
        func_0x00010c07e920();
        if ((int)uVar16 == 0) {
          uVar15 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010c2330c0();
          _objc_release(uVar15);
          _objc_release(uVar6);
          _objc_release(uVar3);
          if ((int)uVar16 == 0) goto LAB_10711a67c;
        }
        else {
          _objc_release(uVar6);
          _objc_release(uVar3);
        }
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c15e020();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar3;
        func_0x00010c078120();
        if ((int)uVar16 == 0) {
          uVar6 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010c15e020();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar6;
          func_0x00010c0811e0();
          _objc_release(uVar6);
          _objc_release(uVar3);
          if ((int)uVar16 != 0) goto LAB_10711b114;
          func_0x00010c2876e0(*(undefined8 *)(param_5 + 0x20));
          uVar5 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010c13b540(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar5;
          func_0x0001070c4598();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar16;
          func_0x00010c0b3920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar6;
          func_0x00010c0f3940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aeba0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar16);
          _objc_release(uVar5);
          uVar5 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010c13b540(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar5;
          func_0x0001070c4598();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar16;
          func_0x00010c0b3920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar6;
          func_0x00010c0f3940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ae820();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar16);
          _objc_release(uVar5);
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar3;
          func_0x00010c07e920();
          _objc_release(uVar3);
          if ((int)uVar16 != 0) {
            uVar15 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c0c9d20(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar15;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bf46560(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            func_0x00010c2440e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c07e5c0(uVar16);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar5);
            _objc_release(uVar16);
            _objc_release(uVar15);
            uVar5 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar5;
            func_0x0001070c4598();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c0b3920();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar6;
            func_0x00010c0f3940();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b1820();
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar15);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar16);
            _objc_release(uVar5);
          }
          puVar25 = *(undefined **)(param_5 + 0x20);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          puVar34 = puVar25;
          func_0x0001070c4598();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar34;
          func_0x00010c0b3920();
          _objc_retainAutoreleasedReturnValue();
          puVar37 = puVar24;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar37;
          func_0x00010c0f3940();
          _objc_retainAutoreleasedReturnValue();
          puStack_208 = puVar26;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar26);
          _objc_release(puVar37);
          _objc_release(puVar24);
          _objc_release(puVar34);
          _objc_release(puVar25);
          puVar34 = puStack_208;
          func_0x000107fdc0e0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = *(long *)(param_5 + 0x30);
          func_0x00010bf529e0();
          if (lVar14 == 0) {
            lVar14 = *(long *)(param_5 + 0x48);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711be00;
            lVar14 = *(long *)(param_5 + 0x68);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711be00;
            bVar1 = true;
          }
          else {
LAB_10711be00:
            uVar9 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c2431e0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c22bc80(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar11;
            func_0x0001070c4598();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c0b3920();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar6;
            func_0x00010c0f3940();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            uVar27 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar27;
            FUN_1071145a4();
            _objc_retainAutoreleasedReturnValue();
            uVar28 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar28;
            FUN_107114648();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c15b820(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar28);
            _objc_release(uVar7);
            _objc_release(uVar27);
            _objc_release(uVar5);
            _objc_release(uVar15);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar16);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar9);
            bVar1 = false;
          }
          uVar4 = *(ulong *)(param_5 + 0x28);
          func_0x00010846b590();
          if ((uVar4 & 1) == 0) {
            lVar14 = *(long *)(param_5 + 0x58);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711bf90;
          }
          else {
LAB_10711bf90:
            lVar33 = *(long *)(param_5 + 0x20);
            func_0x00010c15e020();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar33;
            func_0x00010bfb1160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar33);
            if (lVar14 != 0) {
              uVar16 = *(undefined8 *)(param_5 + 0x20);
              uVar3 = uVar16;
              func_0x00010bf46560(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar3;
              func_0x00010c090020();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar6;
              func_0x00010c136ee0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(param_5 + 0x20);
              func_0x00010bdf6c40(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = *(undefined8 *)(param_5 + 0x20);
              func_0x00010bf46560(uVar8);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar8;
              func_0x00010bf311e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be76840(uVar16);
              _objc_release(uVar5);
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_release(uVar15);
              _objc_release(uVar6);
              _objc_release(uVar3);
              uVar3 = *(undefined8 *)(param_5 + 0x20);
              func_0x00010c244120(uVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar16 = uVar3;
              func_0x00010bf954e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b93e0(*(undefined8 *)(param_5 + 0x20));
              _objc_release(uVar16);
              _objc_release(uVar3);
              if (bVar1) {
                param_1 = 0.0;
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_148 = 0;
                uStack_150 = 0;
                uStack_168 = 0;
                plStack_170 = (long *)0x0;
                uStack_178 = 0;
                uStack_180 = 0;
                _objc_retain(puVar34);
                puVar24 = puVar34;
                func_0x00010bf52a60();
                if (puVar24 != (undefined *)0x0) {
                  lVar33 = *plStack_170;
                  do {
                    puVar37 = (undefined *)0x0;
                    do {
                      if (*plStack_170 != lVar33) {
                        _objc_enumerationMutation(puVar34);
                      }
                      uVar15 = *(undefined8 *)(param_5 + 0x20);
                      func_0x00010c13b540(uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar15;
                      func_0x0001070c4604();
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = uVar16;
                      func_0x00010c293fc0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar3;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0b2e60();
                      _objc_release(uVar6);
                      _objc_release(uVar3);
                      _objc_release(uVar16);
                      _objc_release(uVar15);
                      puVar37 = puVar37 + 1;
                    } while (puVar24 != puVar37);
                    puVar24 = puVar34;
                    func_0x00010bf52a60();
                  } while (puVar24 != (undefined *)0x0);
                }
                _objc_release(puVar34);
              }
            }
            _objc_release(lVar14);
          }
          puVar24 = *(undefined **)(param_5 + 0x20);
          func_0x00010bf46560(puVar24);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar24;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar24);
          puStack_220 = *(undefined **)(param_5 + 0x20);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          puStack_218 = puStack_220;
          func_0x0001070c46b8();
          _objc_retainAutoreleasedReturnValue();
          puStack_210 = puStack_218;
          func_0x00010c08f100();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puStack_210;
          func_0x00010c269d40(puStack_210);
          _objc_retainAutoreleasedReturnValue();
          puVar29 = puVar25;
          func_0x00010c23f220(puVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar25;
          func_0x00010bf97060(puVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar31 = puVar25;
          func_0x00010bf0af00(puVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar25;
          func_0x00010c0c7f00(puVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010846b590(*(undefined8 *)(param_5 + 0x28));
          func_0x00010c0df6e0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(*(undefined8 *)(param_5 + 0x30));
          func_0x00010c0df840(puVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb07a0(puVar18);
          _objc_release(puVar26);
        }
        else {
          _objc_release(uVar3);
LAB_10711b114:
          func_0x00010c2876e0(*(undefined8 *)(param_5 + 0x20));
          uVar5 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010c13b540(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar5;
          func_0x0001070c4598();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar16;
          func_0x00010c0b3920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar6;
          func_0x00010c0f3940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aeba0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar16);
          _objc_release(uVar5);
          uVar5 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010c13b540(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar5;
          func_0x0001070c4598();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar16;
          func_0x00010c0b3920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar6;
          func_0x00010c0f3940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ae820();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar16);
          _objc_release(uVar5);
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar3;
          func_0x00010c07e920();
          _objc_release(uVar3);
          if ((int)uVar16 != 0) {
            uVar15 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c0c9d20(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar15;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bf46560(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            func_0x00010c2440e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c07e5c0(uVar16);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar5);
            _objc_release(uVar16);
            _objc_release(uVar15);
            uVar5 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar5;
            func_0x0001070c4598();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c0b3920();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar6;
            func_0x00010c0f3940();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b1820();
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar15);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar16);
            _objc_release(uVar5);
          }
          puVar18 = *(undefined **)(param_5 + 0x20);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          puVar34 = puVar18;
          func_0x0001070c4598();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar34;
          func_0x00010c0b3920();
          _objc_retainAutoreleasedReturnValue();
          puVar37 = puVar24;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar37;
          func_0x00010c0f3940();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar26;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          puStack_208 = puVar25;
          func_0x000107fdc0e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar25);
          _objc_release(puVar26);
          _objc_release(puVar37);
          _objc_release(puVar24);
          _objc_release(puVar34);
          _objc_release(puVar18);
          uVar6 = *(undefined8 *)(param_5 + 0x20);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar6;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar16;
          func_0x00010c07f160();
          _objc_release(uVar16);
          _objc_release(uVar6);
          uVar4 = *(ulong *)(param_5 + 0x28);
          func_0x00010846b590();
          if ((uVar4 & 1) == 0) {
            lVar14 = *(long *)(param_5 + 0x58);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711b470;
          }
          else {
LAB_10711b470:
            puVar34 = PTR_PTR_1126cbed8;
            func_0x00010c111ca0(PTR_PTR_1126cbed8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ba320();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b55c0(puVar34);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2a9aa0(puVar34);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2ae860(puVar34);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2a95a0(puVar34);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2a7fa0(puVar34);
            _objc_unsafeClaimAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bf46560(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar6;
            func_0x00010bf311e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2aa1c0(puVar34);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar16);
            _objc_release(uVar6);
            uVar6 = *(undefined8 *)(param_5 + 0x20);
            uVar16 = uVar6;
            func_0x00010c15e020(uVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar24 = puVar34;
            func_0x00010bf21f60(puVar34);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be9f040(uVar6);
            _objc_release(puVar24);
            _objc_release(uVar16);
            _objc_release(puVar34);
          }
          lVar14 = *(long *)(param_5 + 0x30);
          func_0x00010bf529e0();
          if (lVar14 == 0) {
            lVar14 = *(long *)(param_5 + 0x48);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711b5cc;
            lVar14 = *(long *)(param_5 + 0x68);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711b5cc;
          }
          else {
LAB_10711b5cc:
            bVar35 = (byte)uVar3;
            uVar16 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bf52f80(uVar16);
            func_0x00010c184760(uVar16);
            uVar19 = *(ulong *)(param_5 + 0x20);
            func_0x00010c22bc80();
            _objc_retainAutoreleasedReturnValue();
            puVar34 = PTR_PTR_1126d2a00;
            _objc_opt_class(PTR_PTR_1126d2a00);
            uVar12 = uVar19;
            _objc_opt_isKindOfClass(uVar19,puVar34);
            uVar4 = uVar19;
            if ((uVar12 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain(uVar4);
            _objc_release(uVar19);
            uVar7 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c2431e0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar8;
            func_0x0001070c4598();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c0b3920();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar6;
            func_0x00010c0f3940();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c15b820(uVar7);
            _objc_release(uVar5);
            _objc_release(uVar15);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar16);
            _objc_release(uVar8);
            _objc_release(uVar7);
            uVar3 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c15e020();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar3;
            func_0x00010bfb1160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            uVar6 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c15e020();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c078120();
            if ((int)uVar3 != 0) {
              lVar20 = *(long *)(param_5 + 0x20);
              func_0x00010bfa3600();
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar20;
              func_0x00010c0d20c0();
              _objc_retainAutoreleasedReturnValue();
              lVar33 = lVar14;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar33;
              func_0x00010c0d2440();
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar13;
              func_0x00010c09df80();
              _objc_retainAutoreleasedReturnValue();
              lVar22 = lVar21;
              func_0x00010bf529e0();
              _objc_release(lVar21);
              _objc_release(lVar13);
              _objc_release(lVar33);
              _objc_release(lVar14);
              _objc_release(lVar20);
              bVar35 = lVar22 == 1 | bVar35;
            }
            _objc_release(uVar6);
            puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
            param_1 = 1.60807493534087e-314;
            uStack_138 = 0xc2000000;
            pcStack_130 = FUN_10711c7ac;
            puStack_128 = &UNK_11098f2f8;
            bStack_110 = bVar35 & 1;
            _objc_retain(uVar16);
            uStack_120 = uVar16;
            _objc_retain(uVar4);
            ppuVar23 = &puStack_140;
            uStack_118 = uVar4;
            _objc_retainBlock(ppuVar23);
            uVar6 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c15e020();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c078120();
            _objc_release(uVar6);
            uVar6 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c15e020();
            _objc_retainAutoreleasedReturnValue();
            if ((int)uVar3 == 0) {
              uVar3 = uVar6;
              func_0x00010c0811e0();
              _objc_release(uVar6);
              if ((int)uVar3 != 0) {
                uVar6 = *(undefined8 *)(param_5 + 0x20);
                func_0x00010bfa3600(uVar6);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar6;
                func_0x00010c26fe40();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar3;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf9cf00();
                _objc_release(uVar15);
                _objc_release(uVar3);
                goto LAB_10711b910;
              }
            }
            else {
              func_0x00010bf41880(uVar6);
LAB_10711b910:
              _objc_release(uVar6);
            }
            _objc_release(ppuVar23);
            _objc_release(uStack_118);
            _objc_release(uStack_120);
            _objc_release(uVar16);
            _objc_release(uVar4);
          }
          uVar4 = *(ulong *)(param_5 + 0x28);
          func_0x00010846b590();
          if ((uVar4 & 1) == 0) {
            lVar14 = *(long *)(param_5 + 0x58);
            func_0x00010bf529e0();
            if (lVar14 != 0) goto LAB_10711b958;
          }
          else {
LAB_10711b958:
            uVar3 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010c244120(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar3;
            func_0x00010bf954e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b93e0(*(undefined8 *)(param_5 + 0x20));
            _objc_release(uVar16);
            _objc_release(uVar3);
          }
          puVar24 = *(undefined **)(param_5 + 0x20);
          func_0x00010bf46560(puVar24);
          _objc_retainAutoreleasedReturnValue();
          puVar34 = puVar24;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar24);
          puVar25 = *(undefined **)(param_5 + 0x20);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          puStack_220 = puVar25;
          func_0x0001070c46b8();
          _objc_retainAutoreleasedReturnValue();
          puStack_218 = puStack_220;
          func_0x00010c08f100();
          _objc_retainAutoreleasedReturnValue();
          puStack_210 = puStack_218;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar34;
          func_0x00010c23f220(puVar34);
          _objc_retainAutoreleasedReturnValue();
          puVar29 = puVar34;
          func_0x00010bf97060(puVar34);
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar34;
          func_0x00010bf0af00(puVar34);
          _objc_retainAutoreleasedReturnValue();
          puVar31 = puVar34;
          func_0x00010c0c7f00(puVar34);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010846b590(*(undefined8 *)(param_5 + 0x28));
          func_0x00010c0df6e0(puVar24);
          _objc_retainAutoreleasedReturnValue();
          puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(*(undefined8 *)(param_5 + 0x30));
          func_0x00010c0df840(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb07a0(puStack_210);
        }
        _objc_release(puVar37);
        _objc_release(puVar24);
        _objc_release(puVar31);
        _objc_release(puVar30);
        _objc_release(puVar29);
        _objc_release(puVar18);
        _objc_release(puStack_210);
        _objc_release(puStack_218);
        _objc_release(puStack_220);
        _objc_release(puVar25);
        _objc_release(puVar34);
        _objc_release(puStack_208);
        uVar12 = *(ulong *)(param_5 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010c0792e0();
        _objc_release(uVar12);
        if (((uVar4 & 1) == 0) &&
           ((lVar14 = *(long *)(param_5 + 0x68), lVar14 == 0 || (func_0x00010bf529e0(), lVar14 == 0)
            ))) {
          puVar34 = PTR_PTR_1126afca8;
          uVar16 = 0;
          func_0x000108edeea0();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar37 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c238760(puVar34);
          _objc_release(puVar37);
          _objc_release(puVar24);
          _objc_release(uVar16);
        }
        uVar6 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar6;
        func_0x00010c2485a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar16;
        func_0x00010bf91760();
        _objc_release(uVar16);
        _objc_release(uVar6);
        if ((int)uVar3 == 0) {
          func_0x00010bf4d820(*(undefined8 *)(param_5 + 0x20));
        }
        else {
          puVar24 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c760();
          puVar34 = PTR_PTR_1126b9e78;
          dVar38 = param_3;
          dVar39 = param_4;
          func_0x00010c11cac0(PTR__OBJC_CLASS___UIViewController_1126af898);
          func_0x00010c149020(puVar34);
          func_0x00010b690c48(param_3,param_4,param_1,param_2,dVar38,dVar39);
          param_1 = 0.0;
          if (param_3 != 0.0) {
            if (param_4 == 0.0) {
              param_1 = INFINITY;
            }
            else {
              param_1 = param_3 / param_4;
            }
          }
          _objc_release(puVar24);
        }
        uVar4 = *(ulong *)(param_5 + 0x20);
        func_0x00010c111180(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28d140();
        _objc_release(uVar4);
        uVar12 = *(ulong *)(param_5 + 0x20);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010c083340();
        if ((uVar4 & 1) == 0) {
          uVar4 = *(ulong *)(param_5 + 0x20);
          func_0x00010bfd4160();
          _objc_release(uVar12);
          if ((uVar4 & 1) == 0) {
            puVar36 = (undefined8 *)(param_5 + 0x20);
            uVar15 = *puVar36;
            func_0x00010c244100(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *puVar36;
            func_0x00010c244120(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c07e6a0();
            uVar7 = *puVar36;
            func_0x00010c111f20(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar7;
            func_0x00010bfbc3e0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *puVar36;
            func_0x00010c13b540(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            FUN_1070c4ee8();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c29a6a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c112380(param_1,uVar15);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar8);
            _objc_release(uVar16);
            _objc_release(uVar7);
            _objc_release(uVar5);
            _objc_release(uVar15);
            goto LAB_10711a998;
          }
        }
        else {
          _objc_release(uVar12);
        }
        iVar2 = (int)*(undefined8 *)(param_5 + 0x20);
        func_0x00010bfd4160();
        if (iVar2 != 0) {
          uVar4 = *(ulong *)(param_5 + 0x20);
          func_0x00010bfdc800();
          if ((uVar4 & 1) == 0) {
            uVar6 = *(undefined8 *)(param_5 + 0x20);
            func_0x00010bfa3600(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar6;
            func_0x00010c23fc40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar16;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf5e580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar3);
            _objc_release(uVar16);
            _objc_release(uVar6);
          }
        }
        uVar16 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010bfc43e0(uVar16);
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_10711c8a8;
        puStack_198 = &UNK_11098f328;
        uStack_190 = *(undefined8 *)(param_5 + 0x20);
        dStack_188 = param_1;
        func_0x00010bfbf0e0(uVar16);
        goto LAB_10711a998;
      }
      lVar33 = *(long *)(param_5 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar33;
      func_0x00010c243400();
      if (lVar14 != 0x19) {
        _objc_release(lVar33);
        goto LAB_10711a650;
      }
      lVar13 = *(long *)(param_5 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c292420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar13);
      _objc_release(lVar33);
      _objc_release(uVar12);
      if (lVar14 == 0) goto LAB_10711a658;
      lVar14 = *(long *)(param_5 + 0x30);
      func_0x00010bf529e0();
      if (lVar14 == 0) {
        lVar14 = *(long *)(param_5 + 0x48);
        func_0x00010bf529e0();
        if (lVar14 == 0) goto LAB_10711a8bc;
      }
      uVar10 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar10;
      func_0x0001070c5554();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar16;
      func_0x00010c1519c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010c13b540(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar11;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar15;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aed60(uVar6);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar16);
      _objc_release(uVar10);
      uVar9 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010c2431e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010c22bc80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010bf46560(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c292420();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010bf46560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf93620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b6c0(uVar9);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar6);
LAB_10711a8b8:
      _objc_release(uVar9);
    }
LAB_10711a8bc:
    uVar4 = *(ulong *)(param_5 + 0x28);
    func_0x00010846b590();
    if ((uVar4 & 1) == 0) {
      lVar14 = *(long *)(param_5 + 0x58);
      func_0x00010bf529e0();
      if (lVar14 == 0) goto LAB_10711a998;
    }
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    uVar3 = uVar8;
    func_0x00010c15e020(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf46560(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010c090020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010c136ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bdf6c40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be76840(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar6);
  }
  else {
    uVar4 = *(ulong *)(param_5 + 0x28);
    func_0x00010846b590();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_10711a2c0;
    uVar5 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf42b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010c0d3c80();
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(uVar5);
    puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf46560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010bf82940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c0df780(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(puVar34);
    _objc_release(uVar16);
    _objc_release(uVar6);
    puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_5 + 0x30));
    func_0x00010c0df840(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(puVar34);
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c2431e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c22bc80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf46560(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar11;
    func_0x00010bf82940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf1ad20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bb20(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(uVar3);
LAB_10711a998:
  lVar14 = *(long *)(param_5 + 0x30);
  func_0x00010bf529e0();
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c13b540(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0dba0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar15);
  }
  iVar2 = (int)*(undefined8 *)(param_5 + 0x28);
  func_0x00010c105440();
  if (iVar2 != 0) {
    uVar15 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c13b540(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0db20();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar15);
  }
  iVar2 = (int)*(undefined8 *)(param_5 + 0x20);
  func_0x00010c149f40();
  if (iVar2 != 0) {
    uVar16 = *(undefined8 *)(param_5 + 0x70);
    func_0x000100504554(uVar16,&PTR___NSConcreteGlobalBlock_11098f398);
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c111180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR_PTR_1126d4c58;
    _objc_alloc(PTR_PTR_1126d4c58);
    if ((*(byte *)(param_5 + 0x79) & 1) == 0) {
      func_0x00010c149f40(*(undefined8 *)(param_5 + 0x20));
    }
    func_0x00010bff5dc0(puVar34);
    func_0x00010bf11c40(uVar3);
    _objc_release(puVar34);
    _objc_release(uVar3);
    _objc_release(uVar16);
  }
  puVar36 = (undefined8 *)(param_5 + 0x20);
  uVar5 = *puVar36;
  func_0x00010c15d920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *puVar36;
  func_0x00010c13b540(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0e20(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_initWeak(auStack_1b8,*puVar36);
  uVar16 = *puVar36;
  func_0x00010c2431e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = auStack_1b8;
  _objc_copyWeak(auStack_1c8);
  uStack_1c0 = *(undefined4 *)(param_5 + 0x7a);
  uVar5 = *(undefined8 *)(param_5 + 0x58);
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  _objc_retain(uVar7);
  func_0x00010bfc4b40(uVar16);
  _objc_release(uVar16);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c15df80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc20();
  _objc_release(uVar16);
  _objc_release(uVar3);
  uVar16 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c153920(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  _objc_opt_class(uVar3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar16);
  uVar15 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77600();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_1c8);
  puVar17 = auStack_1b8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1b8);
  __Unwind_Resume();
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar32 == (undefined1 *)0x0) {
    func_0x00010c222260(0x3ff0000000000000,*(undefined8 *)(puVar17 + 0x28));
  }
  else {
    if (puVar17[0x30] == '\x01') {
      lVar33 = *(long *)(puVar17 + 0x20);
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar33;
      func_0x00010c0ef740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar33);
      if (lVar14 == 0) {
        puVar34 = (undefined *)0x0;
      }
      else {
        puVar34 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar14);
    }
    else {
      puVar34 = (undefined *)0x0;
    }
    func_0x00010c222260(0x3ff0000000000000,*(undefined8 *)(puVar17 + 0x28));
    _objc_release(puVar34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar32);
  return;
}



/* Entry: 10711c7ac; end: 10711c8a7;  */

void FUN_10711c7ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c222260(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ef740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar2);
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    func_0x00010c222260(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10711c8a8; end: 10711ce37;  */

void FUN_10711c8a8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
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
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c232fa0();
  _objc_release(uVar10);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    uVar3 = uVar10;
    func_0x00010c06e820();
    if ((int)uVar3 != 0) {
      lVar5 = param_2;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar10);
      _objc_release(uVar2);
      if (lVar5 != 0) goto LAB_10711ca5c;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf46560(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x000107ff9dd8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(uVar6);
      uVar10 = uVar2;
      func_0x00010c130740(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c186260(param_2);
    }
  }
  else {
    uVar3 = uVar10;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000107ff9fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(param_2);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release(uVar10);
  _objc_release(uVar2);
LAB_10711ca5c:
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (lVar9 == 0) {
    func_0x00010c244120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e6a0();
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d25a0();
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar7);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c149f40();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar2);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244100();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  uVar27 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar26;
  func_0x0001070c4628();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf2fe40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  FUN_1070c4ee8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c29a6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x0001070c4820();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x0001070c4670();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x0001070c47fc();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x0001070c4700();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1123a0(uVar27,uVar11);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar26);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10711ce38; end: 10711ce4f;  */

void FUN_10711ce38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5070;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  func_0x00010c1143e0(param_2);
  func_0x00010c075620(param_2);
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03bfc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10711ce50; end: 10711cf43;  */

void FUN_10711ce50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10711cf44;
  puStack_60 = &UNK_11094c3a8;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_2);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10711cf44; end: 10711d047;  */

void FUN_10711cf44(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c15df80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  uVar2 = *(undefined1 *)(param_1 + 0x41);
  uVar3 = *(undefined1 *)(param_1 + 0x42);
  uVar4 = *(undefined1 *)(param_1 + 0x43);
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010846b638();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010846b6bc();
  uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010c0a5140(lVar8,param_2,1,uVar1,uVar2,uVar3,uVar4,lVar9 != 0,uVar10,uVar11,uVar5);
  _objc_release(lVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10711d048; end: 10711d04f; -[PreviewViewController didPressSend] */

void FUN_10711d048(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didPressSendFromSource__1125bbc58,3);
  return;
}



/* Entry: 10711d050; end: 10711d17b; -[PreviewViewController didPressSendFromSource:] */

void FUN_10711d050(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078580();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c233be0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__presentMerlinOnboardingFromSour_11257cb98,param_3);
      return;
    }
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010bddd920(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10711d17c; end: 10711d1af;  */

void FUN_10711d17c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfef60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10711d1b0; end: 10711d377; -[PreviewViewController _checkForUnavailableMusicBeforeSendingWithSuccessBlock:] */

void FUN_10711d1b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfddbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10711d378; end: 10711d3fb;  */

void FUN_10711d378(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf1f3c0();
    if ((int)uVar2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    else {
      func_0x00010c23ab00(PTR_PTR_1126b2518);
      func_0x00010c224580(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10711d3fc; end: 10711d6ab; -[PreviewViewController checkSendActionGuardsWithContext:completion:] */

void FUN_10711d3fc(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
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
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10711d6ac;
    puStack_110 = &UNK_11098f3e8;
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
    pcStack_140 = FUN_10711d808;
    puStack_138 = &UNK_110842508;
    _objc_retain(param_4);
    ppuVar4 = &puStack_150;
    lStack_130 = param_4;
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
        lVar8 = 0;
        ppuVar9 = ppuVar4;
        do {
          if (*plStack_180 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar10 = *(undefined8 *)(lStack_188 + lVar8 * 8);
          puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1c8 = 0xc2000000;
          uStack_1c0 = 0x10711d814;
          puStack_1b8 = &UNK_110884738;
          _objc_retain(param_4);
          uStack_1b0 = uVar10;
          lStack_1a0 = param_4;
          _objc_retain(param_3);
          ppuVar4 = &puStack_1d0;
          lStack_1a8 = param_3;
          ppuStack_198 = ppuVar9;
          _objc_retainBlock();
          _objc_release(ppuStack_198);
          _objc_release(lStack_1a8);
          _objc_release(lStack_1a0);
          lVar8 = lVar8 + 1;
          ppuVar9 = ppuVar4;
        } while (lVar5 != lVar8);
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
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar7 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_sendActionGuard_112634748);
  if ((uVar7 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010c15b4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar7 != 0) {
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c113c80(uVar7);
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar10);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10711d6ac; end: 10711d807;  */

void FUN_10711d6ac(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_sendActionGuard_112634748);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c15b4a0();
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



/* Entry: 10711d808; end: 10711d837;  */

void FUN_10711d808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010711d810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10711d838; end: 10711d9af; -[PreviewViewController _didPressSendFromSource:] */

void FUN_10711d838(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c11e8c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126d4ca0;
    func_0x00010c111a20(PTR_PTR_1126d4ca0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf068e0();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c15d2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPressSend_11255d560);
  return;
}



/* Entry: 10711d9b0; end: 10711da3f; -[PreviewViewController didPressSuggestedFriend:] */

void FUN_10711d9b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d4ca8;
  _objc_opt_new(PTR_PTR_1126d4ca8);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239ce0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10711da40; end: 10711da43; -[PreviewViewController didPressSave] */

void FUN_10711da40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__savePressed_112583fa8);
  return;
}



/* Entry: 10711da44; end: 10711dab7; -[PreviewViewController _didPressSend] */

void FUN_10711da44(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  uVar1 = param_1;
  func_0x00010c2a16e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c224580(param_1,param_2,1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10711dab8;
    puStack_30 = &UNK_11085b900;
    uStack_28 = param_1;
    func_0x00010bf37ea0(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10711dab8; end: 10711de2f;  */

/* WARNING: Possible PIC construction at 0x00010711ddac: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10711dab8(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (((param_3 & 1) != 0) || (param_2 == 0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c08fa60();
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c077e60();
      _objc_release(lVar10);
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        goto code_r0x00010be9f280;
      }
      _objc_initWeak(auStack_d0,*(undefined8 *)(param_1 + 0x20));
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_d8,auStack_d0);
      func_0x00010bebaea0(uVar9);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_d0);
    }
    else {
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar3 + _DAT_1127641cc);
      }
      _objc_retain(lVar10);
      _objc_release(lVar3);
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x0001070c5a1c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if ((lVar3 == 0) || (lVar10 == 0)) {
        func_0x00010c224580(*(undefined8 *)(param_1 + 0x20));
        uVar9 = *(undefined8 *)(param_1 + 0x20);
code_r0x00010be9f280:
                    /* WARNING: Could not recover jumptable at 0x00010be9f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s__sendFromDidPressSend_112585648);
        return;
      }
      puVar5 = PTR_PTR_1126c4f30;
      _objc_alloc();
      func_0x00010c044f20();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf46560(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beff600(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10711de30;
      puStack_88 = &UNK_110848bd8;
      _objc_retain(puVar5);
      uStack_78 = *(undefined8 *)(param_1 + 0x20);
      puStack_c8 = puVar1;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10711de58;
      puStack_b0 = &UNK_110842e18;
      puStack_a8 = puVar5;
      puStack_80 = puVar5;
      _objc_retain(puVar5);
      lVar4 = lVar3;
      func_0x00010bf225a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar6);
      func_0x00010c24fbe0(puVar5);
      func_0x00010c224580(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar4);
      _objc_release(puStack_a8);
      _objc_release(puStack_80);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar10);
    }
  }
  return;
}



/* Entry: 10711de30; end: 10711de57;  */

void FUN_10711de30(long param_1)

{
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be9f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__sendFromDidPressSend_112585648);
  return;
}



/* Entry: 10711de58; end: 10711de5f;  */

void FUN_10711de58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishOnboarding_1125c9828);
  return;
}



/* Entry: 10711de60; end: 10711de8b;  */

void FUN_10711de60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10711de8c; end: 10711e3d7; -[PreviewViewController _sendFromDidPressSend] */

void FUN_10711de8c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = param_1;
  func_0x00010be33ba0();
  if ((int)puVar1 != 0) {
    puVar2 = param_1;
    func_0x00010c24bd00();
    if ((int)puVar2 != 0) {
      func_0x00010c208a40(param_1);
      puVar1 = PTR_PTR_1126d4c60;
      func_0x00010befc200(param_1);
      puVar2 = param_1;
      func_0x00010bf25220(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf620e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0ee420(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1054c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010bf38560(param_1);
      _objc_release(puVar1);
      param_1 = puVar1;
      goto LAB_10711e1b0;
    }
    puVar2 = param_1;
    func_0x00010c11e820();
    if ((int)puVar2 != 0) {
      puVar2 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c10ab20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfc8fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x0001070c4598();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0b3920();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0f3940();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c131ca0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar9 = param_1;
          func_0x00010bf46560(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c077de0();
          func_0x00010c2b9300(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        else {
          func_0x00010c2b9300(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        func_0x00010c15da40(param_1);
        func_0x00010c1e6b60(param_1);
        goto LAB_10711e1b0;
      }
    }
  }
  puVar2 = param_1;
  func_0x00010c25ac00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c25ac00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4fc20();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c224590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setWaitingToPresentSendVC__112666b88,0);
      return;
    }
  }
  if (((int)puVar1 == 0) ||
     ((puVar1 = param_1, func_0x00010c23b200(), ((ulong)puVar1 & 1) == 0 &&
      (puVar1 = param_1, func_0x00010c294be0(), (int)puVar1 == 0)))) {
    puVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c134300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15da40(param_1);
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126d4c60;
    func_0x00010befc200(param_1);
    puVar2 = param_1;
    func_0x00010bf25220(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf620e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0ee420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1054c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf38560(param_1);
  }
  _objc_release(puVar1);
  func_0x00010bfe2600(param_1);
LAB_10711e1b0:
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d1ea0);
  puVar1 = param_1;
  func_0x00010beecc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfe63a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10711e3d8; end: 10711e58f;  */

void FUN_10711e3d8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c224580(*(undefined8 *)(param_1 + 0x20),param_2,0);
  if ((param_2 & 1) != 0) {
    func_0x00010c294be0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befc200(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf25220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ee420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf620e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104800(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb3190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_flushPendingQuickPostTrayPageVie_1125ca608);
  return;
}



/* Entry: 10711e590; end: 10711e597;  */

void FUN_10711e590(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sendToLogger_112634ee8);
  return;
}



/* Entry: 10711e598; end: 10711e6fb; -[PreviewViewController didPressSendConfirmationBar:] */

void FUN_10711e598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c077e60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10711e6fc;
    puStack_70 = &UNK_110846540;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_3;
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010bebaea0(param_1);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didPressSendConfirmationBar__11255d570,param_3);
  return;
}



/* Entry: 10711e6fc; end: 10711e72f;  */

void FUN_10711e6fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10711e730; end: 10711e7df;  */

void FUN_10711e730(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb300();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ac0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10711e7e0; end: 10711e863; -[PreviewViewController _didPressSendConfirmationBar:] */

void FUN_10711e7e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bf00fe0();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010c2a16e0(), (uVar1 & 1) == 0)) {
    func_0x00010c224580(param_1,param_2,1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10711e864;
    puStack_38 = &UNK_11098f498;
    uStack_30 = param_1;
    uStack_28 = param_3;
    func_0x00010bf37ea0(param_1,param_2,&puStack_50);
  }
  return;
}



/* Entry: 10711e864; end: 10711e87f;  */

void FUN_10711e864(long param_1,int param_2,ulong param_3)

{
  if (((param_3 & 1) == 0) && (param_2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendFromConfirmationBar_fromCop_112585640,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10711e880; end: 10711ea47; -[PreviewViewController _sendFromConfirmationBar:fromCopyLinkButton:] */

void FUN_10711e880(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = param_1;
  func_0x00010c11e820();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126c3cc8;
    func_0x00010c269300(PTR_PTR_1126c3cc8);
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
    puVar3 = PTR_PTR_1126d4cb0;
    _objc_opt_new(PTR_PTR_1126d4cb0);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x0001070c4604();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    _objc_release(uVar1);
    if (uVar7 == 0) {
      func_0x00010c15da40(param_1);
    }
    else {
      func_0x00010bea1220();
    }
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c224590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setWaitingToPresentSendVC__112666b88,0);
  return;
}



/* Entry: 10711ea48; end: 10711ea4f; -[PreviewViewController _currentLensMetadataFuture] */

undefined8 FUN_10711ea48(void)

{
  return 0;
}



/* Entry: 10711ea50; end: 10711f7a3; -[PreviewViewController _launchLegacySendToScopeWithPreviewViewModel:previewBlob:preselectedShareDestination:isPreload:fromCopyLinkButton:] */

void FUN_10711ea50(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_c0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001070c59b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((param_6 != 0) && (puVar4 != (undefined *)0x0)) goto LAB_10711f704;
  func_0x00010c28a0e0(param_1);
  puVar1 = param_1;
  func_0x00010c292da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c0d9000();
  puVar3 = param_1;
  func_0x00010c2411a0();
  puVar5 = param_1;
  func_0x00010bfd9540();
  puVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c081200();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = param_1;
  func_0x00010c07de40();
  puVar7 = param_1;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    puVar7 = param_1;
    func_0x00010c26e080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = param_1;
      func_0x00010c26e080(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840();
      _objc_release(puVar7);
    }
  }
  puVar7 = param_1;
  func_0x00010c289aa0();
  puVar18 = puVar5;
  if (puVar4 == (undefined *)0x0) {
LAB_10711ed80:
    puVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108423b64();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c122f40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b1a18;
    _objc_alloc();
    puVar9 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar9;
    func_0x00010c243400();
    puStack_140 = param_1;
    func_0x00010c0f2220();
    puVar10 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x00010be20200();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar2;
    func_0x00010c249880();
    puStack_148 = (undefined *)((ulong)puStack_148 & 0xffffffff);
    if (((ulong)puVar18 & 1) == 0) {
      puStack_160 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = puStack_160;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar18 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075080();
    puVar13 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c082aa0();
    puVar15 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07de40();
    puVar16 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f4c0();
    puVar17 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081ae0();
    func_0x00010c048740();
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar18);
    if (((ulong)puVar5 & 1) == 0) {
      _objc_release(puStack_168);
      _objc_release(puStack_160);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar5 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar9;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010c15d5c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8260(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010bfd86a0();
    puVar9 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar9;
    func_0x00010c10ab20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar10;
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010bfba460();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c096060();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    puVar5 = param_1;
    func_0x00010bea0b40();
    if ((int)puVar5 != 0) {
      if (puStack_c0 == (undefined *)0x0) {
        puStack_c0 = PTR_PTR_1126ae6b8;
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = puStack_c0;
        func_0x00010c2519e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_c0);
        _objc_release(puVar5);
        puStack_c0 = puVar9;
      }
    }
    puVar5 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x0001070c5650();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar18;
    func_0x000108c7c620(puVar18,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar5);
    func_0x00010bea0ae0();
    puVar5 = PTR_PTR_1126b1a20;
    _objc_alloc();
    func_0x00010c1229e0();
    func_0x00010c0ce9c0();
    if ((int)puVar12 != 0) {
      puStack_138 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = puStack_138;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puStack_140;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108faa300();
    }
    func_0x00010bfd86a0();
    func_0x00010c07b5a0(puVar2);
    func_0x00010c07a240();
    puVar9 = puVar3;
    func_0x00010bfb8240();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010c275a00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c26e020();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf30e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    puVar13 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d660();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    if ((int)puVar12 != 0) {
      _objc_release(puStack_148);
      _objc_release(puStack_140);
      _objc_release(puStack_138);
    }
    puVar9 = param_1;
    func_0x00010c08f5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 == (undefined *)0x0) {
      puVar9 = PTR_PTR_1126d4cb8;
      _objc_alloc(PTR_PTR_1126d4cb8);
      func_0x00010c038ea0();
      func_0x00010c1e07e0();
      func_0x00010c200400(puVar9);
      func_0x00010c1ba660(param_1);
      _objc_release(puVar9);
    }
    puVar9 = param_1;
    func_0x00010bea0e00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c10aa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar18;
    func_0x00010c10ab20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bfc8fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010be1e560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf09f80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    if (puVar10 != (undefined *)0x0) {
      puVar16 = puVar10;
      func_0x00010bf09f80(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar15);
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar18);
    puVar18 = param_1;
    func_0x00010be79c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    puVar10 = param_1;
    func_0x00010be1ae80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    puVar12 = param_1;
    func_0x00010c08f5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5040(puVar11);
    _objc_release(puVar12);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x0001070c59b0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c08f500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(param_1);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puStack_c0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  else {
    puVar10 = puVar4;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c07f260();
    if ((int)puVar3 != (int)puVar11) {
LAB_10711ed1c:
      _objc_release(puVar10);
LAB_10711ed24:
      func_0x00010c225a20(puVar4);
      puVar3 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x0001070c59b0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08f500();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      goto LAB_10711ed80;
    }
    puVar3 = puVar4;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c0782e0();
    if ((int)puVar5 != (int)puVar11) {
LAB_10711ed14:
      _objc_release(puVar3);
      goto LAB_10711ed1c;
    }
    puVar11 = puVar4;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c22f9a0();
    if ((int)puVar9 != (int)puVar12) {
LAB_10711ed0c:
      _objc_release(puVar11);
      goto LAB_10711ed14;
    }
    puVar9 = puVar4;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010c07de40();
    if ((int)puVar6 != (int)puVar12) {
LAB_10711ed00:
      _objc_release(puVar9);
      goto LAB_10711ed0c;
    }
    puVar6 = puVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010c07a240();
    puVar12 = puVar2;
    func_0x00010c07a240();
    if ((int)puVar18 != (int)puVar12) {
      _objc_release(puVar6);
      puVar18 = (undefined *)((ulong)puVar5 & 0xffffffff);
      goto LAB_10711ed00;
    }
    puVar18 = puVar4;
    func_0x00010c112440();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar18;
    func_0x00010bd86de8();
    _objc_release(puVar18);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar10);
    puVar18 = (undefined *)((ulong)puVar5 & 0xffffffff);
    if ((((uint)puVar7 | (uint)puVar12 ^ 0xffffffff) & 1) != 0) goto LAB_10711ed24;
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_10711f704:
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10711f7a4; end: 10711f7af;  */

void FUN_10711f7a4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_arrayByAddingObjectsFromArray__1125a0188,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 10711f7b0; end: 10711f85b; -[PreviewViewController _sendToIncludeStoriesWithRecipientsConfiguration:] */

undefined8 FUN_10711f7b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb4f20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c243400();
    _objc_release(param_1);
    if (uVar1 == 0x1d) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010c258700(param_3);
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10711f85c; end: 10711f92f; -[PreviewViewController legacySendToScopeWillDismiss:selectedItems:] */

void FUN_10711f85c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf51e00(param_4);
  func_0x00010c1fc860(param_1);
  _objc_release(param_4);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15d5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf51e00();
    func_0x00010c2a5f20(uVar1);
    _objc_release(uVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10711f930; end: 10711f953; -[PreviewViewController legacySendToScopeDidDismiss:selectedItems:] */

void FUN_10711f930(undefined8 param_1)

{
  func_0x00010bea1160();
                    /* WARNING: Could not recover jumptable at 0x00010c0cfa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_modalDismissalDidEnd_1126118b0);
  return;
}



/* Entry: 10711f954; end: 10711fa5f; -[PreviewViewController legacySendToScopeWillSend:sendToSelection:] */

void FUN_10711f954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c08f5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f460(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10711fa60; end: 10711fa93;  */

void FUN_10711fa60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10711fa94; end: 10711fbc3; -[PreviewViewController _didDetachUIWithSendToSelection:] */

void FUN_10711fa94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c59b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf94c40(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10711fbc4; end: 10711fbf7;  */

void FUN_10711fbc4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10711fbf8; end: 10711fe1b; -[PreviewViewController _didEndFeatureWithSendToSelection:] */

void FUN_10711fbf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0bc3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c2584a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0fb120(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf24f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0c40(param_1,param_2,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1ba660(param_1,param_2,0);
  lVar1 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c0bc3c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 != 0) goto LAB_10711fd64;
      lVar1 = param_3;
      func_0x00010c2584a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c2584a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010bebf120(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb4860(param_1,param_2,lVar1,uVar8);
      _objc_release(uVar8);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_10711fd64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10711fe1c; end: 10711fe8f; -[PreviewViewController _didDismissSendToWithSelectedItems:sendToDismissSource:] */

void FUN_10711fe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c1fc860(param_1);
  _objc_release(param_3);
  func_0x00010bea1160(param_1);
  func_0x00010c0cfa60(param_1);
  if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c10d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentMusicPicker_112620e90);
    return;
  }
  return;
}



/* Entry: 10711fe90; end: 107120167; -[PreviewViewController _presentMerlinOnboardingFromSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10711fe90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_78;
  _objc_copyWeak(puVar3,auStack_68);
  uStack_70 = param_3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126c4f00;
  _objc_alloc(PTR_PTR_1126c4f00);
  func_0x00010c0564a0();
  func_0x00010c1e10a0();
  lVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c233d20();
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126b28c0;
  _objc_alloc(PTR_PTR_1126b28c0);
  func_0x00010c031aa0();
  lVar5 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar5 + _DAT_1127641dc);
  }
  _objc_retain(lVar8);
  lVar7 = lVar8;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  _objc_release(lVar5);
  if (lVar7 != 0) {
    lVar5 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar5 + _DAT_1127641dc);
    }
    _objc_retain(uVar9);
    func_0x00010c12e1c0(uVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(lVar5);
  }
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127641dc);
  }
  _objc_retain(uVar9);
  func_0x00010bf9d620(uVar9);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 107120168; end: 1071201f7;  */

void FUN_107120168(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_1 != 0)) &&
     (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    lVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201200();
    _objc_release(lVar2);
    func_0x00010bf78ac0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071201f8; end: 107120333; -[PreviewViewController _snapContainsStoryInviteSticker] */

undefined4 FUN_1071201f8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c114380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c1143a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c233c60();
  if ((int)lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2529e0();
    uVar1 = (undefined4)lVar8;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  _objc_release(lVar4);
  return uVar1;
}



/* Entry: 107120334; end: 107120427; -[PreviewViewController _sendQuickPostSendFlowEvent:] */

void FUN_107120334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6ab60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    func_0x00010c18b460(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107120428; end: 1071204c3; -[PreviewViewController _sendDeferredQuickPostSendFlowEventIfNeeded] */

void FUN_107120428(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf6ac40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c18b460(param_1,param_2,0);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071204c4; end: 107120513; -[PreviewViewController didCancelFromPreview:] */

void FUN_1071204c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2bd480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72d00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107120514; end: 1071205d7; -[PreviewViewController didSendSnapsAndPostToStory:storyTypes:] */

void FUN_107120514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2bd480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b520();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendDeferredQuickPostSendFlowEv_112585538);
  return;
}



/* Entry: 1071205d8; end: 107120653; -[PreviewViewController didComeFromCameraWithoutSendingSnap] */

void FUN_1071205d8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107120654; end: 107120737; -[PreviewViewController didSendDiscoverSharedMessageWithParameters:] */

void FUN_107120654(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b440();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107120738; end: 107120807; -[PreviewViewController didSendChatMessage] */

void FUN_107120738(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf5ca40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf5ca40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(uVar1 + 0x10))();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1862b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCrossPostBlock__11263f2c8,0);
    return;
  }
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107120808; end: 107120883; -[PreviewViewController didSendToGallery] */

void FUN_107120808(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107120884; end: 10712090b; -[PreviewViewController didSaveSnapWithParameters:] */

void FUN_107120884(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a380();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10712090c; end: 107120a43; -[PreviewViewController didPostStoryWithStoryTypes:] */

void FUN_10712090c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf5ca40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c2bd480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010c2bd480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78540();
      _objc_release(uVar1);
    }
    func_0x00010be9ee40(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf5ca40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(uVar1 + 0x10))();
    _objc_release(uVar1);
    func_0x00010c1862a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107120a44; end: 107120acb; -[PreviewViewController didPostStoryWithConfig:] */

void FUN_107120a44(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107120acc; end: 107120baf; -[PreviewViewController didPostNewlyCreatedGroupStoriesWithMetadata:] */

void FUN_107120acc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf784a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107120bb0; end: 107120c2b; -[PreviewViewController didPresentSendTo] */

void FUN_107120bb0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf786c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107120c2c; end: 107120ca7; -[PreviewViewController didDismissSendTo] */

void FUN_107120c2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107120ca8; end: 107120e37; -[PreviewViewController _getLensIdsFromCameraConfig] */

undefined * FUN_107120ca8(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be201a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010befa120(puVar3,param_2,lVar4);
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x00010c110480();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar12 = *plStack_110;
    do {
      lVar13 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        lVar11 = *(long *)(lStack_118 + lVar13 * 8);
        lVar6 = lVar11;
        func_0x00010c08fa60();
        if ((lVar6 != 0) &&
           (puVar7 = puVar3, func_0x00010bf4b900(puVar3,param_2,lVar11), ((ulong)puVar7 & 1) == 0))
        {
          func_0x00010befa120(puVar3,param_2,lVar11);
        }
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      uVar10 = 0;
      lVar5 = param_1;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_1);
  puVar8 = puVar3;
  func_0x00010bf529e0();
  puVar7 = (undefined *)0x0;
  if (puVar8 != (undefined *)0x0) {
    puVar7 = puVar3;
  }
  _objc_retain(puVar7);
  _objc_release(lVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  uVar1 = 1;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0x1fffffc >> (ulong)((uint)puVar9 & 0x1f);
  }
  uVar2 = 1;
  if (puVar9 < (undefined1 *)0x1a) {
    uVar2 = uVar1;
  }
  return (undefined *)(ulong)(uVar2 & 1);
}



/* Entry: 107120e38; end: 107120e5b; -[PreviewViewController _shouldExpandInlineShareSheet:fromCopyLinkButton:] */

uint FUN_107120e38(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if ((param_4 & 1) == 0) {
    uVar1 = 0x1fffffc >> (ulong)((uint)param_3 & 0x1f);
  }
  uVar2 = 1;
  if (param_3 < 0x1a) {
    uVar2 = uVar1;
  }
  return uVar2 & 1;
}



/* Entry: 107120e5c; end: 107121767; -[PreviewViewController _sendToShareSheetConfiguration:fromCopyLinkButton:] */

void FUN_107120e5c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **unaff_x23;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar1;
  func_0x00010c06d080();
  if ((int)ppuVar10 == 0) {
    unaff_x23 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = unaff_x23;
    func_0x00010c0811e0();
    _objc_release(unaff_x23);
    _objc_release();
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar1 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar1;
      func_0x00010c14a120();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar10;
      func_0x00010c07d080();
      _objc_release(ppuVar10);
      _objc_release(ppuVar1);
      ppuVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar1;
      func_0x00010c242400();
      if (ppuVar10 == (undefined **)0x8) {
        ppuVar10 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar10;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar3;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar3);
        _objc_release(ppuVar10);
        _objc_release(ppuVar1);
        if (((uint)(ppuVar9 != (undefined **)0x0) & (uint)ppuVar2) == 1) {
          ppuVar10 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar10;
          func_0x0001070c5188();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar3;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          _objc_release(ppuVar10);
          func_0x000108faa7ac();
          ppuVar10 = ppuVar1;
          func_0x000108faa7c0();
          if ((int)ppuVar10 != 0) {
            ppuVar10 = param_1;
            func_0x00010c1122a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar10;
            func_0x00010c14a120();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c072500();
            _objc_release(ppuVar3);
            _objc_release(ppuVar10);
          }
          func_0x00010beb3a00();
          ppuVar3 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar3;
          func_0x0001070c5de8();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar9;
          func_0x00010c110c00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = param_1;
          func_0x00010bf46560(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar6;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar7;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar5;
          func_0x00010bfc0080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
          _objc_release(ppuVar5);
          _objc_release(ppuVar4);
          _objc_release(ppuVar9);
          _objc_release(ppuVar3);
          _objc_release();
          if (ppuVar10 != (undefined **)0x0) goto LAB_107120ef0;
        }
      }
      else {
        _objc_release(ppuVar1);
      }
      ppuVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar1;
      func_0x00010c242400();
      _objc_release(ppuVar1);
      if (ppuVar10 == (undefined **)0x8 && ((ulong)ppuVar2 & 1) == 0) {
        ppuVar1 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar3;
        func_0x000108faa7d4();
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        if (((ulong)ppuVar9 & 1) == 0) goto LAB_10712122c;
        ppuVar9 = (undefined **)0x0;
      }
      else {
LAB_10712122c:
        ppuVar1 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar3;
        func_0x000108f3dd6c();
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        if ((((ulong)ppuVar9 & 1) == 0) && (ppuVar10 == (undefined **)0x8)) {
          ppuVar1 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar1;
          func_0x0001070c5434();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar10;
          func_0x00010c0e1880();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010c252560();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar4;
          func_0x00010c231ee0();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          _objc_release(ppuVar10);
          _objc_release(ppuVar1);
        }
      }
      ppuVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = ppuVar10;
      func_0x00010c233600();
      _objc_release(ppuVar10);
      _objc_release();
      if (((ulong)unaff_x23 & 1) == 0) {
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar1 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar1;
          func_0x00010c242400();
          _objc_release(ppuVar1);
          if (ppuVar10 == (undefined **)0xb) {
            ppuVar1 = param_1;
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar1;
            func_0x0001070c5188();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar10;
            func_0x00010bf398e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar2;
            func_0x000108f3de48();
            _objc_release(ppuVar2);
            _objc_release(ppuVar10);
            _objc_release(ppuVar1);
            if (((ulong)ppuVar3 & 1) != 0) goto LAB_107121430;
          }
          ppuVar1 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar1;
          func_0x00010c242400();
          if (ppuVar10 != (undefined **)0xc) {
            ppuVar10 = param_1;
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar10;
            func_0x00010c242400();
            if (ppuVar2 != (undefined **)0xe) {
              ppuVar2 = param_1;
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = ppuVar2;
              func_0x00010c243400();
              _objc_release(ppuVar2);
              _objc_release(ppuVar10);
              _objc_release();
              if (unaff_x23 != (undefined **)0x19) goto LAB_107120eec;
              goto LAB_107121430;
            }
            _objc_release(ppuVar10);
          }
          _objc_release(ppuVar1);
        }
      }
      else if (((ulong)ppuVar9 & 1) == 0) goto LAB_107120eec;
LAB_107121430:
      ppuVar1 = param_1;
      func_0x00010c15d200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar10;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar3;
      func_0x000108ec1954();
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(ppuVar10);
      if ((int)ppuVar9 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        ppuVar10 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar10;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar2;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar10;
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 == (undefined **)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          ppuVar9 = ppuVar2;
          func_0x00010c0c7f00();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar9 == (undefined **)0x0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            ppuVar4 = ppuVar10;
            func_0x00010c09da80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            ppuStack_78 = ppuVar4;
            func_0x00010c0c7f00();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            ppuStack_70 = ppuVar5;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar5);
            _objc_release(ppuVar4);
          }
          _objc_release(ppuVar9);
        }
        _objc_release(ppuVar3);
        puVar11 = PTR_PTR_1126b2498;
        _objc_alloc(PTR_PTR_1126b2498);
        if (ppuVar10 == (undefined **)0x0) {
          func_0x00010c037ea0(puVar11);
        }
        else {
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          ppuStack_80 = ppuVar10;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c037ea0(puVar11);
          _objc_release(puVar8);
        }
        _objc_release(puVar12);
        _objc_release(ppuVar10);
        _objc_release(ppuVar2);
      }
      _objc_initWeak(auStack_88,param_1);
      puVar12 = PTR_PTR_1126ae720;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107121768;
      puStack_98 = &UNK_110842c88;
      unaff_x23 = &puStack_b0;
      _objc_copyWeak(auStack_90,auStack_88);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = (undefined **)PTR_PTR_1126b0808;
      _objc_alloc();
      func_0x00010c051820();
      _objc_release(puVar12);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_release(puVar11);
      _objc_release();
      goto LAB_107120ef0;
    }
  }
  else {
    _objc_release();
  }
LAB_107120eec:
  ppuVar10 = (undefined **)0x0;
LAB_107120ef0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x23 + 4);
    _objc_destroyWeak(auStack_88);
    __Unwind_Resume(ppuVar1);
    ppuVar10 = (undefined **)PTR_PTR_1126ae558;
    ppuVar1 = ppuVar1 + 4;
    _objc_loadWeakRetained(ppuVar1);
    ppuVar2 = ppuVar1;
    func_0x00010c15d220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 107121768; end: 1071217d7;  */

void FUN_107121768(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c15d220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071217d8; end: 107121cc3; -[PreviewViewController sendToExternalShareTextConfiguration] */

void FUN_1071217d8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107115820;
  uStack_70 = 0x107115830;
  uStack_68 = 0;
  lVar10 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x0001070c5ba8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar10);
  lVar10 = lVar3;
  func_0x00010c08fa60();
  if (lVar10 != 0) {
    lVar10 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bfbf7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _dispatch_group_create();
    _dispatch_group_enter();
    _objc_retain(lVar10);
    func_0x00010c297260(lVar4);
    _dispatch_group_wait(lVar10,0xffffffffffffffff);
    _objc_release(lVar10);
    _objc_release(lVar10);
    _objc_release(lVar4);
  }
  puVar1 = puStack_88;
  lVar10 = puStack_88[5];
  if (lVar10 != 0) {
    _objc_retain(lVar10);
    lVar4 = puVar1[5];
    func_0x00010beec820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107121bf8;
  }
  lVar10 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c243400();
  if (lVar4 == 0x19) {
    lVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c292420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar10);
    if (lVar5 == 0) goto LAB_107121b18;
    lVar10 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c292420();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c0ee920(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
    lVar5 = lVar8;
    func_0x00010c294420(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar10;
    func_0x00010beec820(lVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(lVar10);
LAB_107121b18:
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x0001070c5650();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(param_1);
    lVar4 = lVar2;
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar5 = lVar10;
    func_0x00010beec820(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010842d260(lVar8,lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(lVar8);
LAB_107121bf8:
  puVar9 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107121cc4; end: 107121d1f;  */

void FUN_107121cc4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107121d20; end: 107122487; -[PreviewViewController sendToExternalShareMediaConfiguration] */

void FUN_107121d20(undefined *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_f8 [8];
  byte bStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  byte bStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puVar9;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075080();
  if ((int)puVar3 == 0) {
    bStack_f0 = 0;
  }
  else {
    puVar3 = param_1;
    func_0x00010bfd4160();
    bStack_f0 = (byte)puVar3 ^ 1;
  }
  _objc_release(puVar2);
  puVar3 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_initWeak(auStack_b0,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_107122488;
  puStack_d0 = &UNK_11098f4c8;
  _objc_copyWeak(auStack_c0,auStack_b0);
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  bStack_b8 = bStack_f0;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2470;
  _objc_copyWeak(auStack_f8,auStack_b0);
  _objc_retain(puVar2);
  func_0x00010c2adce0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x000108ec1954();
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar10);
  if (((ulong)puVar6 & 1) == 0) {
    puVar10 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar10);
    if (puVar5 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar5 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126b2478;
    _objc_alloc(PTR_PTR_1126b2478);
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021e80(puVar5);
    goto LAB_107122154;
  }
  puVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar10;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = puVar10;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar10;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071220e4;
    }
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
LAB_1071220e4:
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  puVar5 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021e80(puVar5);
  _objc_release(puVar6);
LAB_107122154:
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x00010c06e820();
  _objc_release(puVar11);
  _objc_release(puVar10);
  if ((int)puVar6 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b2480;
    _objc_alloc();
    func_0x00010c03a960();
  }
  puVar11 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x00010c075060();
  if ((int)puVar6 == 0) {
    uVar1 = 0;
  }
  else {
    puVar6 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2a29a0();
    uVar1 = (uint)puVar9;
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar11);
  puVar11 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x00010bf9e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar11);
  if (puVar6 == (undefined *)0x0 && (uVar1 & 1) == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9e5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126b2488;
    _objc_alloc();
    func_0x00010c046300();
  }
  puVar6 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bf9e5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f20(puVar6);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b0);
    __Unwind_Resume();
    puVar2 = puVar2 + 0x28;
    _objc_loadWeakRetained(puVar2);
    puVar6 = puVar2;
    func_0x00010bea0a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107122488; end: 1071224d3;  */

void FUN_107122488(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bea0a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1071224d4; end: 107122567;  */

void FUN_1071224d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bea0a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  (**(code **)(param_2 + 0x10))(param_2,0,lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107122568; end: 1071225e3; -[PreviewViewController _getLensIdFromLiveCameraLensConfiguration] */

void FUN_107122568(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1071225e4; end: 10712282f; -[PreviewViewController _sendToExternalShareMediaWithExporter:isImage:] */

void FUN_1071225e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107122830;
  puStack_90 = &UNK_11084ae38;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107115820;
  uStack_b8 = 0x107115830;
  uStack_b0 = 0;
  puVar3 = puVar2;
  puStack_d0 = &uStack_d8;
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107122870;
  puStack_110 = &UNK_11098f588;
  uStack_e0 = param_4;
  _objc_retain(param_3);
  uStack_108 = param_3;
  puStack_e8 = &uStack_d8;
  _objc_retain(puVar2);
  puStack_100 = puVar2;
  _objc_retain(puVar3);
  puStack_f8 = puVar3;
  uStack_f0 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_128);
  _dispatch_group_wait(puVar3,0xffffffffffffffff);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  uVar4 = puStack_d0[5];
  _objc_retain(uVar4);
  _objc_release(puStack_f8);
  _objc_release(puStack_100);
  _objc_release(uStack_108);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107122830; end: 10712286f;  */

void FUN_107122830(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be201a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107122870; end: 107122aab;  */

void FUN_107122870(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107122aac;
    puStack_60 = &UNK_1108e64f0;
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar1;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    func_0x00010bfe9420(uVar2,param_2,0,&puStack_78);
    _objc_release(uStack_50);
    uVar2 = uStack_58;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0811c0();
    if ((int)uVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c070a20();
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        pcStack_d8 = FUN_107122c4c;
        puStack_d0 = &UNK_11098f558;
        uStack_b8 = *(undefined8 *)(param_1 + 0x40);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar1);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        uStack_c8 = uVar1;
        _objc_retain(uVar3);
        uStack_c0 = uVar3;
        func_0x00010c29bba0(uVar2,param_2,0,&puStack_e8);
        _objc_release(uStack_c0);
        uVar2 = uStack_c8;
        goto LAB_107122a90;
      }
    }
    else {
      _objc_release(uVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfa3600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107122b68;
    puStack_98 = &UNK_11098f528;
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = uVar5;
    _objc_retain(uVar4);
    uStack_88 = uVar4;
    func_0x00010bf9cf00(uVar1,param_2,&puStack_b0);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uStack_88);
    uVar2 = uStack_90;
  }
LAB_107122a90:
  _objc_release(uVar2);
  return;
}



/* Entry: 107122aac; end: 107122b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107122aac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [16];
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1c68;
  func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,param_2,0,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar12 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar2;
  _objc_release(uVar12);
  _objc_release(puVar1);
  lVar14 = *(long *)(param_1 + 0x28);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1c68;
  pcStack_38 = FUN_107122b68;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29be00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(lVar14 + 0x30) + 8);
  uVar12 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar2;
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release(param_2);
  lVar15 = *(long *)(lVar14 + 0x28);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_a0;
  pcStack_78 = FUN_107122c4c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b1c68;
  puStack_90 = puVar1;
  lStack_88 = lVar14;
  ppuStack_80 = &puStack_40;
  func_0x00010c29be00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar1;
  _objc_release(uVar13);
  _objc_release(puVar2);
  uVar3 = *(ulong *)(lVar15 + 0x28);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(uVar12);
  uVar4 = uVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar9;
  func_0x00010c27dd80();
  if ((uVar4 == 6) || (uVar4 = uVar9, func_0x00010c27dd80(), uVar4 == 10)) {
    uVar4 = uVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf620c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c22c3c0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar10 & 1) == 0) {
      _objc_initWeak(auStack_120,uVar3);
      puVar1 = PTR_PTR_1126c24a8;
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_1071230d8;
      puStack_150 = &UNK_110861a58;
      uStack_148 = uVar3;
      _objc_copyWeak(auStack_128,auStack_120);
      _objc_retain(uVar6);
      uStack_140 = uVar6;
      _objc_retain(ppuVar11);
      puStack_138 = (undefined1 *)ppuVar11;
      _objc_retain(uVar12);
      uStack_130 = uVar12;
      _objc_copyWeak(auStack_170,auStack_120);
      _objc_retain(uVar12);
      uVar4 = uVar3;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(uVar4 + (long)_DAT_1127641c8);
      }
      _objc_retain(uVar13);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x0001070c5ca4();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf1cf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2393a0(puVar1);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(uVar12);
      _objc_destroyWeak(auStack_170);
      _objc_release(uStack_130);
      _objc_release(puStack_138);
      _objc_release(uStack_140);
      _objc_destroyWeak(auStack_128);
      _objc_destroyWeak(auStack_120);
    }
    else {
      func_0x00010bebacc0(uVar3);
    }
  }
  else if (ppuVar11 != (undefined **)0x0) {
    (**(code **)((long)ppuVar11 + 0x10))(ppuVar11);
  }
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 107122b68; end: 107122c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107122b68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [16];
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b1c68;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29be00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar12 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar2;
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release(param_2);
  lVar14 = *(long *)(param_1 + 0x28);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_70;
  pcStack_48 = FUN_107122c4c;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b1c68;
  puStack_60 = puVar1;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010c29be00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(lVar14 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar1;
  _objc_release(uVar13);
  _objc_release(puVar2);
  uVar3 = *(ulong *)(lVar14 + 0x28);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(uVar12);
  uVar4 = uVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar9;
  func_0x00010c27dd80();
  if ((uVar4 == 6) || (uVar4 = uVar9, func_0x00010c27dd80(), uVar4 == 10)) {
    uVar4 = uVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf620c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c22c3c0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar10 & 1) == 0) {
      _objc_initWeak(auStack_f0,uVar3);
      puVar1 = PTR_PTR_1126c24a8;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_1071230d8;
      puStack_120 = &UNK_110861a58;
      uStack_118 = uVar3;
      _objc_copyWeak(auStack_f8,auStack_f0);
      _objc_retain(uVar6);
      uStack_110 = uVar6;
      _objc_retain(ppuVar11);
      puStack_108 = (undefined1 *)ppuVar11;
      _objc_retain(uVar12);
      uStack_100 = uVar12;
      _objc_copyWeak(auStack_140,auStack_f0);
      _objc_retain(uVar12);
      uVar4 = uVar3;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(uVar4 + (long)_DAT_1127641c8);
      }
      _objc_retain(uVar13);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x0001070c5ca4();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf1cf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2393a0(puVar1);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(uVar12);
      _objc_destroyWeak(auStack_140);
      _objc_release(uStack_100);
      _objc_release(puStack_108);
      _objc_release(uStack_110);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
    }
    else {
      func_0x00010bebacc0(uVar3);
    }
  }
  else if (ppuVar11 != (undefined **)0x0) {
    (**(code **)((long)ppuVar11 + 0x10))(ppuVar11);
  }
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 107122c4c; end: 107122d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107122c4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar11 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1c68;
  func_0x00010c29be00(PTR_PTR_1126b1c68,param_2,param_2,0,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar2;
  _objc_release(uVar13);
  _objc_release(puVar1);
  uVar3 = *(ulong *)(param_1 + 0x28);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(uVar12);
  uVar4 = uVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar9;
  func_0x00010c27dd80();
  if ((uVar4 == 6) || (uVar4 = uVar9, func_0x00010c27dd80(), uVar4 == 10)) {
    uVar4 = uVar3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf620c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c22c3c0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar10 & 1) == 0) {
      _objc_initWeak(auStack_b0,uVar3);
      puVar1 = PTR_PTR_1126c24a8;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_1071230d8;
      puStack_e0 = &UNK_110861a58;
      uStack_d8 = uVar3;
      _objc_copyWeak(auStack_b8,auStack_b0);
      _objc_retain(uVar6);
      uStack_d0 = uVar6;
      _objc_retain(ppuVar11);
      puStack_c8 = (undefined1 *)ppuVar11;
      _objc_retain(uVar12);
      uStack_c0 = uVar12;
      _objc_copyWeak(auStack_100,auStack_b0);
      _objc_retain(uVar12);
      uVar4 = uVar3;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(uVar4 + (long)_DAT_1127641c8);
      }
      _objc_retain(uVar13);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x0001070c5ca4();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf1cf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2393a0(puVar1);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(uVar12);
      _objc_destroyWeak(auStack_100);
      _objc_release(uStack_c0);
      _objc_release(puStack_c8);
      _objc_release(uStack_d0);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_b0);
    }
    else {
      func_0x00010bebacc0(uVar3);
    }
  }
  else if (ppuVar11 != (undefined **)0x0) {
    (**(code **)((long)ppuVar11 + 0x10))(ppuVar11);
  }
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 107122d08; end: 1071230d7; -[PreviewViewController _showSharedStoryTrustAndSafetyPromptIfNecessaryWithAccept:cancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107122d08(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x00010c27dd80();
  if ((uVar2 == 6) || (uVar2 = uVar7, func_0x00010c27dd80(), uVar2 == 10)) {
    uVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf620c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c22c3c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar8 & 1) == 0) {
      _objc_initWeak(auStack_80,param_1);
      puVar1 = PTR_PTR_1126c24a8;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1071230d8;
      puStack_b0 = &UNK_110861a58;
      uStack_a8 = param_1;
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(uVar4);
      uStack_a0 = uVar4;
      _objc_retain(param_3);
      lStack_98 = param_3;
      _objc_retain(param_4);
      uStack_90 = param_4;
      _objc_copyWeak(auStack_d0,auStack_80);
      _objc_retain(param_4);
      uVar2 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(uVar2 + (long)_DAT_1127641c8);
      }
      _objc_retain(uVar9);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x0001070c5ca4();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf1cf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2393a0(puVar1);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_d0);
      _objc_release(uStack_90);
      _objc_release(lStack_98);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    else {
      func_0x00010bebacc0(param_1);
    }
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071230d8; end: 10712318b;  */

void FUN_1071230d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff280();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebacc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712318c; end: 1071231db;  */

void FUN_10712318c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c224580();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071231cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}


