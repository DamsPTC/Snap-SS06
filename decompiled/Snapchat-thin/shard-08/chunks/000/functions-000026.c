/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c23dfc; end: 105c23e03; -[SCSendFlowMediaSender crossPostHandler] */

undefined8 FUN_105c23dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 105c23e04; end: 105c23e0b; -[SCSendFlowMediaSender setCrossPostHandler:] */

void FUN_105c23e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c23e0c; end: 105c2400b; -[SCSendFlowMediaSender .cxx_destruct] */

void FUN_105c23e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c2400c; end: 105c24013; -[SCSendFlowMetadataHandlerImpl sendToConfig] */

undefined8 FUN_105c2400c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c24014; end: 105c24043; -[SCSendFlowMetadataHandlerImpl setSendToConfig:] */

void FUN_105c24014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c24044; end: 105c2404b; -[SCSendFlowMetadataHandlerImpl mediaList] */

undefined8 FUN_105c24044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c2404c; end: 105c2407b; -[SCSendFlowMetadataHandlerImpl setMediaList:] */

void FUN_105c2404c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2407c; end: 105c24083; -[SCSendFlowMetadataHandlerImpl chatMedias] */

undefined8 FUN_105c2407c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105c24084; end: 105c240b3; -[SCSendFlowMetadataHandlerImpl setChatMedias:] */

void FUN_105c24084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c240b4; end: 105c240bf; -[SCSendFlowMetadataHandlerImpl fullMediaContentBounds] */

undefined8 FUN_105c240b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105c240c0; end: 105c240cb; -[SCSendFlowMetadataHandlerImpl setFullMediaContentBounds:] */

void FUN_105c240c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x40) = param_1;
  *(undefined8 *)(param_5 + 0x48) = param_2;
  *(undefined8 *)(param_5 + 0x50) = param_3;
  *(undefined8 *)(param_5 + 0x58) = param_4;
  return;
}



/* Entry: 105c240cc; end: 105c240d3; -[SCSendFlowMetadataHandlerImpl senderData] */

undefined8 FUN_105c240cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105c240d4; end: 105c24103; -[SCSendFlowMetadataHandlerImpl setSenderData:] */

void FUN_105c240d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c24104; end: 105c2410b; -[SCSendFlowMetadataHandlerImpl commonLoggingParams] */

undefined8 FUN_105c24104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105c2410c; end: 105c2413b; -[SCSendFlowMetadataHandlerImpl setCommonLoggingParams:] */

void FUN_105c2410c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2413c; end: 105c24143; -[SCSendFlowMetadataHandlerImpl sendFlowPageType] */

undefined8 FUN_105c2413c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105c24144; end: 105c2414b; -[SCSendFlowMetadataHandlerImpl setSendFlowPageType:] */

void FUN_105c24144(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105c2414c; end: 105c24153; -[SCSendFlowMetadataHandlerImpl sendToDismissedFromSpotlightEducation] */

undefined1 FUN_105c2414c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105c24154; end: 105c2415b; -[SCSendFlowMetadataHandlerImpl setSendToDismissedFromSpotlightEducation:] */

void FUN_105c24154(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105c2415c; end: 105c24163; -[SCSendFlowMetadataHandlerImpl isCrossPostingToSpotlight] */

undefined1 FUN_105c2415c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105c24164; end: 105c2416b; -[SCSendFlowMetadataHandlerImpl setIsCrossPostingToSpotlight:] */

void FUN_105c24164(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105c2416c; end: 105c24173; -[SCSendFlowMetadataHandlerImpl isEligibleForCrossPostingSpotlightToStories] */

undefined1 FUN_105c2416c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105c24174; end: 105c2417b; -[SCSendFlowMetadataHandlerImpl setIsEligibleForCrossPostingSpotlightToStories:] */

void FUN_105c24174(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 105c2417c; end: 105c2420b; -[SCSendFlowMetadataHandlerImpl .cxx_destruct] */

void FUN_105c2417c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105c2420c; end: 105c246cb;  */

void FUN_105c2420c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
    goto LAB_105c24698;
  }
  _objc_retain(param_1);
  puVar2 = PTR_PTR_1126ba668;
  _objc_alloc_init(PTR_PTR_1126ba668);
  if (param_3 < 0xb) {
    if ((1L << (param_3 & 0x3f) & 0x648U) == 0) {
      if (param_3 != 8) goto LAB_105c242e0;
      puVar12 = PTR_PTR_1126c33a8;
      _objc_alloc_init(PTR_PTR_1126c33a8);
      lVar1 = param_1;
      func_0x00010bfb1920(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0c5900();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x000107d6b30c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4020(puVar12);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar1);
      puVar9 = PTR_PTR_1126be930;
      _objc_opt_new(PTR_PTR_1126be930);
      func_0x00010c1ba540();
      func_0x00010c1fea60(puVar2);
      _objc_release(puVar9);
    }
    else {
      puVar12 = PTR_PTR_1126c33a0;
      _objc_alloc_init(PTR_PTR_1126c33a0);
      lVar1 = param_1;
      func_0x00010bd86420(param_1,&PTR___NSConcreteGlobalBlock_1108ddc28);
      lVar7 = lVar1;
      func_0x00010c0d3c80();
      func_0x00010c206120(puVar12);
      _objc_release(lVar7);
      _objc_release(lVar1);
      func_0x00010c199640(puVar2);
    }
    _objc_release(puVar12);
  }
LAB_105c242e0:
  _objc_release(param_1);
  lVar1 = param_1;
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_1108ddc68);
  lVar7 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lVar8 = lVar7;
    func_0x00010c0c5900(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x000107d6b2ec();
    _objc_release(lVar8);
    lVar8 = lVar7;
  }
  else {
    lVar3 = lVar7;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    func_0x00010c27dd80();
  }
  _objc_release(lVar8);
  func_0x00010bf529e0();
  puVar12 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar9 = puVar12;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar10 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar12 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf21f60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b60(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar12);
  if (param_3 == 10) {
    puVar12 = PTR_PTR_1126be7b0;
    _objc_alloc_init(PTR_PTR_1126be7b0);
    func_0x00010c2ad920(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  puVar12 = puVar10;
  func_0x00010bf21f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar1);
  _objc_release(puVar2);
LAB_105c24698:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105c246cc; end: 105c24893;  */

void FUN_105c246cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c240200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c240200(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c23fe00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x000107d6ae7c(lVar3,lVar2,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      goto LAB_105c2479c;
    }
  }
  func_0x00010c0c5900(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x000107d6ad3c();
  _objc_retainAutoreleasedReturnValue();
LAB_105c2479c:
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c24894; end: 105c2489b;  */

void FUN_105c24894(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105c2489c; end: 105c24ab7;  */

uint FUN_105c2489c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_105c2490c:
    lVar1 = param_1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) goto LAB_105c24a64;
    }
    lVar1 = param_1;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) goto LAB_105c24a64;
    }
    lVar1 = param_1;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c2584a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ee3a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
LAB_105c24a90:
        uVar6 = 0;
      }
      else {
        lVar3 = lVar1;
        func_0x00010c0ee3a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0ee300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 == 0) goto LAB_105c24a90;
        lVar2 = lVar1;
        func_0x00010846ba3c();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf4b900();
        if (((int)lVar3 == 0) ||
           ((lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 1 &&
            (uVar5 = param_2, func_0x000108f483a4(), (uVar5 & 1) != 0)))) {
          uVar6 = 0;
        }
        else {
          uVar5 = param_2;
          func_0x000108f483b8(param_2);
          uVar6 = (uint)uVar5 ^ 1;
        }
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      goto LAB_105c24a68;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_105c2490c;
  }
LAB_105c24a64:
  uVar6 = 0;
LAB_105c24a68:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 105c24ab8; end: 105c24bbf;  */

void FUN_105c24ab8(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = (undefined *)0x0;
  if (param_1 < 0xb) {
    if ((1L << (param_1 & 0x3f) & 0x648U) == 0) {
      if (param_1 != 8) goto LAB_105c24b58;
      puVar3 = PTR_PTR_1126c33b0;
      _objc_alloc(PTR_PTR_1126c33b0);
      puVar2 = param_2;
      FUN_1067ae6a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028fa0(puVar3);
    }
    else {
      puVar3 = PTR_PTR_1126c33b0;
      _objc_alloc(PTR_PTR_1126c33b0);
      puVar2 = puVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_2;
      func_0x000106e0c1a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028fa0(puVar3);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
LAB_105c24b58:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c24bc0; end: 105c25103; -[SCSendFlowStepProcessorProviderImpl initWithSendFlowScope:userSession:appLifecycleEvent:userLocationServices:previewScopeExposer:previewScopeBuilderServices:sendToScopeLauncher:sendToScopeServices:storyQuickPostScopeExposer:groupsDataFetcher:snapchattersDataFetcher:snapchattersDataSearcher:snapchattersSynchronousFetcher:userInfoProvider:snapchatterPublicInfoFetcher:customStoriesDataFetcher:customStoriesDataMutator:userInfoServices:circumstanceEngine:storiesLegacySnapInfoCollector:myStoriesDataCoordinator:publicStoriesDataCoordinator:selectionStoriesLastPostTimeRepository:mapStoryPostingComplianceChecker:sendToFeedLogger:startupInfoService:appStartExperimentReader:snapProProfilesProvider:storyRankingConfigurationService:promoteSnapService:] */

undefined8 *
FUN_105c24bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126ec630;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_32;
    _objc_release(uVar2);
    func_0x000108f3dfec();
    puVar3 = PTR_PTR_1126c33b8;
    _objc_alloc();
    func_0x00010c019420();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 105c25104; end: 105c251c3; -[SCSendFlowStepProcessorProviderImpl stepProcessorOfPage:] */

void FUN_105c25104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bdf3ea0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,lVar3,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c251c4; end: 105c25267; -[SCSendFlowStepProcessorProviderImpl _createStepProcessorOfPage:] */

void FUN_105c251c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
    _objc_alloc(PTR_PTR_1126c33c8);
    func_0x00010c044260();
  }
  else if (param_3 == 1) {
    _objc_alloc(PTR_PTR_1126c33c0);
    func_0x00010c0442c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c25268; end: 105c25363; -[SCSendFlowStepProcessorProviderImpl .cxx_destruct] */

void FUN_105c25268(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105c25364; end: 105c2540f; -[SCSendFlowTurnBasedRecipientGroups initWithPromptOpponentSenderData:otherRecipientsSenderData:hasOtherRecipients:] */

undefined1 *
FUN_105c25364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec638;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c25410; end: 105c25417; -[SCSendFlowTurnBasedRecipientGroups promptOpponentSenderData] */

undefined8 FUN_105c25410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c25418; end: 105c2541f; -[SCSendFlowTurnBasedRecipientGroups otherRecipientsSenderData] */

undefined8 FUN_105c25418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c25420; end: 105c25427; -[SCSendFlowTurnBasedRecipientGroups hasOtherRecipients] */

undefined1 FUN_105c25420(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105c25428; end: 105c25457; -[SCSendFlowTurnBasedRecipientGroups .cxx_destruct] */

void FUN_105c25428(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105c25458; end: 105c25817; +[SCSendFlowTurnBasedPromptHelper separateRecipientsForTurnBasedPrompt:currentUserId:promptReplyParameters:isPostingToStory:] */

undefined **
FUN_105c25458(undefined *param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
             undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **unaff_x28;
  undefined *puStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *apuStack_248 [16];
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  uint uStack_13c;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_5;
  ppuVar9 = param_6;
  _objc_retain(param_3);
  puVar1 = param_1;
  puVar6 = param_4;
  func_0x00010be6dfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  uVar7 = (uint)ppuVar9;
  if (puVar2 == (undefined *)0x0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    uStack_13c = (uint)param_6;
    param_4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_138 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_3;
    func_0x00010bf52a60();
    uVar7 = (uint)ppuVar9;
    if (ppuVar12 != (undefined **)0x0) {
      lVar11 = *plStack_120;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar13 = *(undefined ***)(lStack_128 + (long)ppuVar8 * 8);
          ppuVar3 = ppuVar13;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = ppuVar3;
          func_0x00010c0720c0();
          _objc_release(ppuVar3);
          puVar2 = param_4;
          if ((int)unaff_x28 == 0) {
            puVar2 = param_1;
          }
          func_0x00010befa120(puVar2,param_2,ppuVar13);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar12 != ppuVar8);
        ppuVar12 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
        uVar7 = (uint)ppuVar9;
        unaff_x25 = (undefined **)0x0;
      } while (ppuVar12 != (undefined **)0x0);
    }
    _objc_release(param_3);
    puVar2 = param_1;
    func_0x00010bf529e0();
    param_3 = ppuStack_138;
    if (puVar2 == (undefined *)0x0) {
      ppuVar9 = ppuStack_138;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010bf529e0();
      if (ppuVar12 == (undefined **)0x0) {
        unaff_x25 = param_3;
        func_0x00010c0fb120();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = unaff_x25;
        func_0x00010bf529e0();
        uVar10 = uStack_13c;
        if (ppuVar12 != (undefined **)0x0) {
          uVar10 = 1;
        }
        ppuVar12 = (undefined **)(ulong)uVar10;
        _objc_release(unaff_x25);
      }
      else {
        ppuVar12 = (undefined **)0x1;
      }
      _objc_release(ppuVar9);
    }
    else {
      ppuVar12 = (undefined **)0x1;
    }
    puVar2 = param_4;
    func_0x00010bf529e0();
    param_6 = &PTR_PTR_1126c3000;
    uVar10 = (uint)ppuVar12;
    if (puVar2 == (undefined *)0x0) {
      unaff_x24 = (undefined *)0x0;
      if (uVar10 != 0) goto LAB_105c25688;
LAB_105c25784:
      unaff_x26 = (undefined **)0x0;
    }
    else {
      unaff_x24 = PTR_PTR_1126c33d0;
      _objc_alloc();
      ppuStack_160 = (undefined **)0x0;
      puVar2 = PTR____NSArray0__struct_11034ab48;
      func_0x00010c03d5e0();
      uVar7 = (uint)puVar2;
      if (uVar10 == 0) goto LAB_105c25784;
LAB_105c25688:
      ppuVar12 = (undefined **)PTR_PTR_1126c33d0;
      _objc_alloc();
      ppuVar9 = param_3;
      ppuStack_148 = ppuVar12;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      param_6 = param_3;
      ppuStack_150 = ppuVar9;
      func_0x00010c0bc3c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = param_3;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_3;
      func_0x00010c2584a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = param_3;
      uStack_13c = uVar10;
      func_0x00010bf24f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befd440();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = ppuStack_148;
      ppuVar12 = unaff_x28;
      ppuStack_160 = param_3;
      func_0x00010c03d5e0(ppuStack_148,param_2,param_1,ppuVar9,param_6,unaff_x28,ppuVar8,unaff_x25);
      ppuVar9 = ppuStack_138;
      uVar7 = (uint)ppuVar12;
      _objc_release(param_3);
      _objc_release(unaff_x25);
      ppuVar12 = (undefined **)(ulong)uStack_13c;
      _objc_release(ppuVar8);
      _objc_release(unaff_x28);
      _objc_release(param_6);
      _objc_release(ppuStack_150);
      param_3 = ppuVar9;
    }
    ppuVar9 = (undefined **)PTR_PTR_1126c33d8;
    _objc_alloc();
    puVar6 = unaff_x24;
    param_5 = unaff_x26;
    func_0x00010c03b6c0();
    _objc_release(unaff_x26);
    _objc_release(unaff_x24);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  ppuVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar3 = &puStack_290;
  pcStack_168 = FUN_105c25818;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1c0 = unaff_x28;
  ppuStack_1b8 = param_3;
  ppuStack_1b0 = unaff_x26;
  ppuStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  ppuStack_198 = ppuVar9;
  puStack_190 = param_1;
  puStack_188 = param_4;
  puStack_180 = puVar1;
  ppuStack_178 = param_6;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  func_0x00010be6dfa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c08fa60();
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x1;
  }
  else {
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lStack_288 = 0;
    puStack_290 = (undefined *)0x0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    puVar1 = puVar6;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = apuStack_248;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 == (undefined *)0x0) {
LAB_105c25960:
      ppuVar9 = (undefined **)0x0;
    }
    else {
      lVar11 = *plStack_280;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_280 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          uVar4 = *(undefined8 *)(lStack_288 + (long)puVar14 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          ppuVar3 = ppuVar8;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((int)uVar5 == 0) goto LAB_105c25960;
          puVar14 = puVar14 + 1;
        } while (puVar2 != puVar14);
        ppuVar12 = apuStack_248;
        puVar2 = puVar1;
        ppuVar3 = &puStack_290;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
      _objc_release(puVar1);
      puVar1 = puVar6;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf529e0();
      if (puVar2 != (undefined *)0x0) goto LAB_105c25960;
      puVar2 = puVar6;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar2;
      func_0x00010bf529e0();
      uVar10 = 0;
      if (puVar14 == (undefined *)0x0) {
        uVar10 = uVar7 ^ 1;
      }
      ppuVar9 = (undefined **)(ulong)uVar10;
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    param_5 = ppuVar3;
  }
  _objc_release(ppuVar8);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    _objc_retain(ppuVar12);
    _objc_retain(param_5);
    ppuVar8 = ppuVar12;
    func_0x00010c118520(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar12;
    func_0x00010c118860(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    ppuVar12 = param_5;
    func_0x00010c0720c0(param_5,param_2,ppuVar8);
    _objc_release(param_5);
    ppuVar9 = ppuVar3;
    if ((int)ppuVar12 == 0) {
      ppuVar9 = ppuVar8;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return ppuVar9;
}



/* Entry: 105c25818; end: 105c259f3; +[SCSendFlowTurnBasedPromptHelper isTurnBasedOpponentOnlyRecipient:currentUserId:promptReplyParameters:isPostingToStory:] */

undefined1 *
FUN_105c25818(undefined1 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,
             undefined1 *param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
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
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be6dfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  func_0x00010c08fa60();
  if (puVar10 == (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x1;
    goto LAB_105c25974;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  param_5 = auStack_e8;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
LAB_105c25960:
    puVar10 = (undefined1 *)0x0;
  }
  else {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        puVar9 = (undefined8 *)param_1;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((int)uVar5 == 0) goto LAB_105c25960;
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      param_5 = auStack_e8;
      lVar3 = lVar2;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) goto LAB_105c25960;
    lVar3 = param_3;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010bf529e0();
    uVar1 = 0;
    if (lVar11 == 0) {
      uVar1 = param_6 ^ 1;
    }
    puVar10 = (undefined1 *)(ulong)uVar1;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  param_4 = (undefined1 *)puVar9;
LAB_105c25974:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  if (param_5 == (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_4);
    puVar6 = param_5;
    func_0x00010c118520(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5;
    func_0x00010c118860(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar8 = param_4;
    func_0x00010c0720c0(param_4,param_2,puVar6);
    _objc_release(param_4);
    puVar10 = puVar7;
    if ((int)puVar8 == 0) {
      puVar10 = puVar6;
    }
    _objc_retain(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 105c259f4; end: 105c25aa3; +[SCSendFlowTurnBasedPromptHelper _opponentUserIdForCurrentUser:promptReplyParameters:] */

void FUN_105c259f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_4;
    func_0x00010c118520(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c118860(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,lVar1);
    _objc_release(param_3);
    lVar4 = lVar2;
    if ((int)uVar3 == 0) {
      lVar4 = lVar1;
    }
    _objc_retain(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c25aa4; end: 105c25be3; -[SCSendFlowWorkflow initWithSendFlowScope:stepProcessorProvider:mediaSender:circumstanceEngine:spotlightAutoShareService:] */

undefined1 *
FUN_105c25aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ec640;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c25be4; end: 105c25db7; -[SCSendFlowWorkflow begin] */

void FUN_105c25be4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126c3350;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105c27b18;
  uStack_40 = 0x105c27b28;
  uStack_38 = 0;
  uVar2 = uVar3;
  func_0x00010bf45e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0220();
  _objc_release(uVar2);
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82260(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c25db8; end: 105c25f8b; -[SCSendFlowWorkflow _processSendFlowStep:uiContainer:] */

void FUN_105c25db8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (param_3 == lVar1) {
    func_0x00010be693e0(param_1);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bec29e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  lVar3 = lVar1;
  func_0x00010c115420(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e0e80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  lVar5 = lVar4;
  lStack_60 = param_3;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105c25f8c; end: 105c25fdf;  */

void FUN_105c25f8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c25fe0; end: 105c260c7; -[SCSendFlowWorkflow _processStepResult:step:] */

void FUN_105c25fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c260c8;
  puStack_38 = &UNK_1108ddcd8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c260d8;
  puStack_68 = &UNK_1108ddd08;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105c26148;
  puStack_98 = &UNK_110848c48;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105c26154;
  puStack_c8 = &UNK_1108ddd38;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105c261ac;
  puStack_f8 = &UNK_110848c48;
  uStack_f0 = param_1;
  uStack_e8 = param_4;
  uStack_c0 = param_1;
  uStack_b8 = param_4;
  uStack_90 = param_1;
  uStack_88 = param_4;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_30 = param_1;
  uStack_28 = param_4;
  func_0x00010c0bf540(param_3,param_2,&puStack_50,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110);
  return;
}



/* Entry: 105c260c8; end: 105c260d7;  */

void FUN_105c260c8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onPreloadNext_onStep__112578500,param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c260d8; end: 105c26147;  */

void FUN_105c260d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar1);
  func_0x00010be6a200(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c26148; end: 105c26153;  */

void FUN_105c26148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onMoveBackOnStep__112578218,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c26154; end: 105c261ab;  */

void FUN_105c26154(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(lVar2 + 0x20) = param_2;
    _objc_release(uVar1);
  }
  func_0x00010be693e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c261ac; end: 105c261b7;  */

void FUN_105c261ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onReleasedOnStep__1125785d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c261b8; end: 105c26223; -[SCSendFlowWorkflow _onPreloadNext:onStep:] */

void FUN_105c261b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4 + 1;
  uVar2 = *(ulong *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    func_0x00010be63880(param_1,param_2,0,uVar1);
    func_0x00010be82260(param_1,param_2,uVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c26224; end: 105c2627b; -[SCSendFlowWorkflow _onMoveToNext:onStep:] */

void FUN_105c26224(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  func_0x00010be63880(param_1,param_2,1,param_4 + 1);
  func_0x00010be82260(param_1,param_2,param_4 + 1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c2627c; end: 105c262ef; -[SCSendFlowWorkflow _onMoveBackOnStep:] */

void FUN_105c2627c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 == 0) {
    param_1 = *(ulong *)(param_1 + 8);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf750e0();
  }
  else {
    func_0x00010bec29e0(param_1,param_2,param_3 + -1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_opt_respondsToSelector();
    if ((uVar1 & 1) != 0) {
      func_0x00010c115440(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c262f0; end: 105c2644b; -[SCSendFlowWorkflow _onFinishOnStep:] */

void FUN_105c262f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010be6f900();
  func_0x00010c1fc120(uVar5,param_2,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000105c247c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf529e0(uVar5);
  func_0x00010c2a6b20(uVar3,param_2,uVar2,uVar4);
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15d7c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c2644c;
  puStack_58 = &UNK_110848c48;
  lStack_50 = param_1;
  uStack_48 = param_3;
  func_0x00010be16740(param_1,param_2,&puStack_70);
  _objc_release(uVar5);
  return;
}



/* Entry: 105c2644c; end: 105c264a7;  */

void FUN_105c2644c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010bf529e0();
  uVar3 = lVar2 - 1;
  if (-1 < (long)uVar3) {
    do {
      uVar1 = 2;
      if (uVar3 <= *(ulong *)(param_1 + 0x28)) {
        uVar1 = 3;
      }
      func_0x00010be63880(*(undefined8 *)(param_1 + 0x20),param_2,uVar1,uVar3);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0xffffffffffffffff);
  }
  return;
}



/* Entry: 105c264a8; end: 105c26537; -[SCSendFlowWorkflow _onReleasedOnStep:] */

void FUN_105c264a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010bf529e0();
    if (lVar2 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bebff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startFinalSending_11258d970);
      return;
    }
  }
  return;
}



/* Entry: 105c26538; end: 105c26577; -[SCSendFlowWorkflow _pageTypeForStep:] */

undefined8 FUN_105c26538(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c26578; end: 105c2659f; -[SCSendFlowWorkflow _stepProcessorForStep:] */

void FUN_105c26578(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be6f900();
                    /* WARNING: Could not recover jumptable at 0x00010c2537b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_stepProcessorOfPage__112672810,lVar1);
  return;
}



/* Entry: 105c265a0; end: 105c26617; -[SCSendFlowWorkflow _nextEventWithTriggerType:onStep:] */

void FUN_105c265a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be6f900(param_1,param_2,param_4);
  puVar1 = PTR_PTR_1126c33e0;
  _objc_alloc(PTR_PTR_1126c33e0);
  func_0x00010c033480();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27be60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c26618; end: 105c26727; -[SCSendFlowWorkflow _finalizedSendMedia:] */

void FUN_105c26618(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24b000(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = uVar4;
    func_0x00010c071400();
    lVar3 = param_1;
    func_0x00010beb2f00(param_1);
    func_0x00010c1b03e0(*(undefined8 *)(param_1 + 0x30),param_2,((uint)lVar3 | (uint)uVar2) & 1);
    if ((uint)uVar2 == 0) {
      lVar3 = param_1;
      func_0x00010beb2f00();
      if ((int)lVar3 == 0) {
        func_0x00010be167a0(param_1,param_2,param_3);
      }
      else {
        func_0x00010be16780(param_1,param_2,param_3);
      }
    }
    else {
      func_0x00010be16760(param_1,param_2,param_3,uVar4);
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c26728; end: 105c2692b; -[SCSendFlowWorkflow _finalizedSendMediaSinglePosting:] */

void FUN_105c26728(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = lVar1;
  func_0x00010c2584a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf24f00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfcf800(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c2584a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = lVar1;
  func_0x00010c0bc3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf100(uVar9,param_2,lVar8,lVar3,lVar2,lVar4,lVar6 != 0,uVar10,0);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22b7e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b860(*(undefined8 *)(param_1 + 0x30),param_2,uVar9);
  _objc_release(uVar9);
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf98360(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4a80(*(undefined8 *)(param_1 + 0x30),param_2,uVar9);
    _objc_release(uVar9);
  }
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c2692c; end: 105c26933;  */

void FUN_105c2692c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105c26934; end: 105c26fef; -[SCSendFlowWorkflow _finalizedSendMediaCrossPostingSpotlightToStoriesWithCompletionBlock:crossPostEligibility:] */

void FUN_105c26934(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar12 = param_4;
  func_0x00010bf8d5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 == 0) {
    func_0x00010be16780(param_1);
    goto LAB_105c26d5c;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = lVar1;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = lVar1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
LAB_105c26a50:
      _objc_release(lVar3);
      goto LAB_105c26a58;
    }
    lVar4 = lVar1;
    func_0x00010c0bc3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
LAB_105c26a48:
      _objc_release(lVar4);
      goto LAB_105c26a50;
    }
    lVar5 = lVar1;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      _objc_release(lVar5);
      goto LAB_105c26a48;
    }
    lVar6 = param_4;
    func_0x00010c0dac00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar12);
    if (lVar6 != 0) goto LAB_105c26a60;
    lVar12 = param_4;
    func_0x00010bf8d5a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    FUN_105c26ff8(0,lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcaa0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar7);
    _objc_release(lVar12);
    func_0x00010c1b0a40(*(undefined8 *)(param_1 + 0x30));
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf22120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar15);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf100(uVar11);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c22b7e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b860(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar7);
    lVar12 = *(long *)(param_1 + 0x20);
    func_0x00010bf98360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf98360(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4a80(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar7);
    }
    (**(code **)(param_3 + 0x10))(param_3);
    _objc_release(uVar17);
  }
  else {
LAB_105c26a58:
    _objc_release(lVar12);
LAB_105c26a60:
    lVar12 = param_4;
    func_0x00010bf8d5a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    FUN_105c26ff8(0,lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdd5fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar3;
    _objc_release(uVar15);
    _objc_release(uVar7);
    _objc_release(lVar12);
    lVar12 = param_4;
    func_0x00010c0dac00(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_105c26ff8(lVar1,lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcaa0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar3);
    _objc_release(lVar12);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf100(uVar16);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c22b7e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b860(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar7);
    lVar12 = *(long *)(param_1 + 0x20);
    func_0x00010bf98360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf98360(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4a80(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar7);
    }
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1862e0();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ca20();
    _objc_release(uVar7);
    _objc_release(param_3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105c26d5c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c26ff0; end: 105c26ff7;  */

void FUN_105c26ff0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105c26ff8; end: 105c27147;  */

void FUN_105c26ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c33d0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c122f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcf800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0bc3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0fb120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf24f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c03d5e0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c27148; end: 105c27173;  */

void FUN_105c27148(long param_1)

{
  func_0x00010be79320(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000105c27170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105c27174; end: 105c274d3; -[SCSendFlowWorkflow _finalizedSendMediaCrossPostingWithCompletionBlock:] */

void FUN_105c27174(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x000108469d58();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bdd5fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar10;
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar13);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x000108469e28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcaa0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar9);
  uVar9 = uVar1;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15db60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf100(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22b7e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b860(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar9);
  lVar10 = *(long *)(param_1 + 0x20);
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf98360(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4a80(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar9);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1862e0();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ca20();
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c274d4; end: 105c274db;  */

void FUN_105c274d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105c274dc; end: 105c27507;  */

void FUN_105c274dc(long param_1)

{
  func_0x00010be79320(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000105c27504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105c27508; end: 105c2762b; -[SCSendFlowWorkflow _buildCrossPostMetadataWithOriginalMetadataData:senderData:isEligibleForCrossPostingSpotlightToStories:] */

void FUN_105c27508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3350;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc460(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c5580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4a80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bfbb9e0(param_3);
  func_0x00010c1a15c0(puVar1);
  uVar2 = param_3;
  func_0x00010bf429e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f520(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15bd40(param_3);
  _objc_release(param_3);
  func_0x00010c1fc120(puVar1,param_2,uVar2);
  func_0x00010c1fcaa0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1b0a40(puVar1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c2762c; end: 105c276ab; -[SCSendFlowWorkflow _startFinalSending] */

void FUN_105c2762c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c1862e0(uVar1,param_2,0);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c15ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c276ac; end: 105c2790b; -[SCSendFlowWorkflow _prepareSpotlight] */

void FUN_105c276ac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c0713e0();
  if (iVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c15db60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf22120(uVar12,param_2,uVar9,&PTR____CFConstantStringClassReference_110daafd8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15db60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x38);
  func_0x00010c15db60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0713e0();
  func_0x00010bfaf100(uVar11,param_2,uVar9,uVar2,PTR____NSArray0__struct_11034ab48,uVar6,lVar8 != 0,
                      uVar13,1);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22b7e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b860(*(undefined8 *)(param_1 + 0x30),param_2,uVar9);
  _objc_release(uVar9);
  lVar10 = *(long *)(param_1 + 0x20);
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf98360(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4a80(*(undefined8 *)(param_1 + 0x38),param_2,uVar9);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 105c2790c; end: 105c27a2f; -[SCSendFlowWorkflow _shouldCrossPost] */

undefined8 FUN_105c2790c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    uVar11 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15db60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf24f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    uVar7 = uVar3;
    func_0x00010c122f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf529e0();
    uVar9 = uVar3;
    func_0x00010bfcf800(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf529e0();
    uVar11 = uVar4;
    func_0x000108469fc8(uVar4,uVar6,uVar8,uVar10,*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  return uVar11;
}



/* Entry: 105c27a30; end: 105c27a37; -[SCSendFlowWorkflow pageStack] */

undefined8 FUN_105c27a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105c27a38; end: 105c27a3f; -[SCSendFlowWorkflow setPageStack:] */

void FUN_105c27a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c27a40; end: 105c27a47; -[SCSendFlowWorkflow isSending] */

undefined1 FUN_105c27a40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 105c27a48; end: 105c27a4f; -[SCSendFlowWorkflow setIsSending:] */

void FUN_105c27a48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 105c27a50; end: 105c27a57; -[SCSendFlowWorkflow removedScopes] */

undefined8 FUN_105c27a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105c27a58; end: 105c27a5f; -[SCSendFlowWorkflow setRemovedScopes:] */

void FUN_105c27a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c27a60; end: 105c27a67; -[SCSendFlowWorkflow processedSteps] */

undefined8 FUN_105c27a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105c27a68; end: 105c27a6f; -[SCSendFlowWorkflow setProcessedSteps:] */

void FUN_105c27a68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c27a70; end: 105c27b17; -[SCSendFlowWorkflow .cxx_destruct] */

void FUN_105c27a70(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105c27b18; end: 105c27b83;  */

void FUN_105c27b18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c27b84; end: 105c27c4f; -[SCEditResendToastContent initWithPrimaryText:secondaryText:actionButton:] */

undefined1 *
FUN_105c27b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec648;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c27c50; end: 105c27c73; -[SCEditResendToastContent copyWithZone:] */

undefined8 FUN_105c27c50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c27c74; end: 105c27cf3; -[SCEditResendToastContent hash] */

undefined8 * FUN_105c27c74(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105c27d8c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105c27d98;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105c27d98;
          }
          goto LAB_105c27d8c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105c27d98:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105c27cf4; end: 105c27db3; -[SCEditResendToastContent isEqual:] */

long FUN_105c27cf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105c27d8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105c27d98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105c27d98;
          }
          goto LAB_105c27d8c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105c27d98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105c27db4; end: 105c27dbb; -[SCEditResendToastContent primaryText] */

undefined8 FUN_105c27db4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c27dbc; end: 105c27dc3; -[SCEditResendToastContent secondaryText] */

undefined8 FUN_105c27dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c27dc4; end: 105c27dcb; -[SCEditResendToastContent actionButton] */

undefined8 FUN_105c27dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c27dcc; end: 105c27e07; -[SCEditResendToastContent .cxx_destruct] */

void FUN_105c27dcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c27e08; end: 105c27e7b; -[SCGrapheneSendFlowEditResendMetric2 init] */

undefined1 * FUN_105c27e08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec650;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c27e7c; end: 105c280ab;  */

char * FUN_105c27e7c(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  char *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar2 = (char *)&uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108dde28);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  uVar1 = uStack_98;
  ppcVar4 = &pcStack_110;
  _objc_retain(pcVar2);
  _objc_retain(uVar8);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_a0);
  _objc_retain(uVar1);
  puStack_108 = PTR_PTR_1126ec658;
  pcStack_110 = pcVar3;
  _objc_msgSendSuper2(&pcStack_110,PTR_s_init_1125d9248);
  puVar5 = PTR_PTR_1126afee0;
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar2);
    _objc_opt_class(puVar5);
    pcVar6 = pcVar2;
    _objc_opt_isKindOfClass(pcVar2,puVar5);
    pcVar3 = pcVar2;
    if (((ulong)pcVar6 & 1) == 0) {
      pcVar3 = (char *)0x0;
    }
    _objc_retain(pcVar3);
    _objc_release(pcVar2);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar3;
    _objc_release(uVar7);
    _objc_retain(param_5);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = param_5;
    _objc_release(uVar7);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = uVar8;
    _objc_release(uVar7);
    _objc_retain(param_7);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x28);
    *(undefined8 *)((long)ppcVar4 + 0x28) = param_7;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x30);
    *(undefined8 *)((long)ppcVar4 + 0x30) = param_8;
    _objc_release(uVar7);
    _objc_retain(uStack_a0);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x38);
    *(undefined8 *)((long)ppcVar4 + 0x38) = uStack_a0;
    _objc_release(uVar7);
    _objc_retain(uVar1);
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x40);
    *(undefined8 *)((long)ppcVar4 + 0x40) = uVar1;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x48);
    *(undefined **)((long)ppcVar4 + 0x48) = puVar5;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x50);
    *(undefined **)((long)ppcVar4 + 0x50) = puVar5;
    _objc_release(uVar7);
    func_0x00010be3b2a0(ppcVar4);
  }
  _objc_release(uVar1);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(uVar8);
  _objc_release(pcVar2);
  return (char *)ppcVar4;
}



/* Entry: 105c280ac; end: 105c2829f; -[SCPreviewSendToConfigurationAdaptor initWithPreviewConfiguration:userSession:userLocationServices:thumbnailMediaSubject:userInfoServices:sendToSelectionItemAdaptor:circumstanceEngine:mapStoryPostingComplianceChecker:] */

undefined1 *
FUN_105c280ac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ec658;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126afee0;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)((long)puVar2 + 8);
    *(ulong *)((long)puVar2 + 8) = uVar1;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_5;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_4;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_10;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined **)((long)puVar2 + 0x48) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined **)((long)puVar2 + 0x50) = puVar3;
    _objc_release(uVar5);
    func_0x00010be3b2a0(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105c282a0; end: 105c285ab; -[SCPreviewSendToConfigurationAdaptor sendflowSendToConfigFromPreview:sendToSessionId:] */

void FUN_105c282a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x00010bec4780(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be87060(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be7fc60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar8 = param_3;
  func_0x00010c105f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    lVar8 = param_3;
    func_0x00010c105f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar6,param_2,lVar8);
    _objc_release(lVar8);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c131e40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be79c80(param_1,param_2,uVar7,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar6,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(uVar7);
  lVar8 = *(long *)(param_1 + 8);
  func_0x00010c243400();
  uVar9 = *(ulong *)(param_1 + 8);
  func_0x00010c075080();
  if ((uVar9 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c083340();
    if (iVar2 == 0) {
      uVar7 = 0xffffffffffffffff;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010bf0f0e0();
      uVar7 = 7;
      if (iVar2 == 0) {
        uVar7 = 8;
      }
    }
  }
  else {
    uVar7 = 6;
  }
  uVar1 = 0x7f;
  if (lVar8 != 7) {
    uVar1 = 0xce;
  }
  puVar10 = PTR_PTR_1126b0818;
  _objc_alloc(PTR_PTR_1126b0818);
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c243400(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf311e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010c22f9a0();
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010c129720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044540(puVar10,param_2,param_4,uVar11,0x17,uVar7,uVar1,uVar12,0,0,0,lVar8,
                      (char)lVar13);
  _objc_release(param_4);
  _objc_release(uVar14);
  _objc_release(lVar8);
  _objc_release(uVar12);
  puVar15 = PTR_PTR_1126c33e8;
  _objc_alloc(PTR_PTR_1126c33e8);
  lVar8 = param_3;
  func_0x00010c22aec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010bf4c100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043c20(puVar15,param_2,puVar6,puVar10,lVar4,lVar3,lVar5,lVar8,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105c285ac; end: 105c28857; -[SCPreviewSendToConfigurationAdaptor _storyConfiguration:] */

void FUN_105c285ac(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  if (*(char *)(param_1 + 0x22) == '\x01') {
    _objc_retain(param_3);
    uVar5 = param_3;
    func_0x00010c275800();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0ee460();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar10 = param_3;
    func_0x00010c292da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf529e0();
    func_0x00010bea1ca0(param_1,param_2,uVar11 != 0,uVar9);
    _objc_release(uVar10);
    func_0x000108423b64();
    puVar14 = PTR_PTR_1126c33f0;
    _objc_alloc();
    uVar10 = uVar5;
    func_0x00010c0ee480();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x21);
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    uVar11 = param_3;
    func_0x00010c0782e0();
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 8);
    func_0x00010bf0f0e0();
    func_0x00010bf0f7a0();
    func_0x00010c075080();
    func_0x00010c07de40();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c082aa0();
    func_0x00010c07f4c0();
    uVar4 = (undefined1)*(undefined8 *)(param_1 + 8);
    func_0x00010c081ae0();
    func_0x00010c07b5a0();
    func_0x00010c07a240();
    uVar12 = param_3;
    func_0x00010c292da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf529e0();
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0326a0(puVar14,param_2,uVar10,uVar6,uVar1,uVar2,0,uVar11 & 0xffffffff,uVar3,
                        (char)uVar8,uVar4);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    puVar14 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105c28858; end: 105c28a87; -[SCPreviewSendToConfigurationAdaptor _recipientConfiguration:] */

void FUN_105c28858(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb88e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
  }
  else {
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb8900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  iVar1 = (int)puVar4;
  func_0x00010b88a2c0();
  puVar4 = puVar5;
  if (iVar1 != 0) {
    puVar6 = puVar5;
    func_0x00010c2519e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar4 = puVar6;
    func_0x00010c0b8600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(param_3);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  puVar5 = puVar4;
  func_0x00010bfb0d80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x000108c7c620(uVar7,*(undefined8 *)(param_1 + 0x28));
  puVar5 = PTR_PTR_1126b0810;
  _objc_alloc(PTR_PTR_1126b0810);
  if ((int)uVar7 != 0) {
    func_0x000108faa300(*(undefined8 *)(param_1 + 0x38));
  }
  func_0x00010c046120(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c28a88; end: 105c28af7;  */

void FUN_105c28a88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c292da0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf09f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c28af8; end: 105c28b03;  */

void FUN_105c28af8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}


