/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055969e4; end: 105596a17; -[CTPItemRenderRequestBitmoji isCanceled] */

undefined1 FUN_1055969e4(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return uVar1;
}



/* Entry: 105596a18; end: 105596a23; -[CTPItemRenderRequestBitmoji .cxx_destruct] */

void FUN_105596a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105596a24; end: 105596be7; -[CTPItemRendererBitmoji initWithBitmojiImageFetcher:customojiViewProvider:bitmoji3DStickerFetcher:configProvider:logger:simpleContentFetcher:stickerContentManager:customojiFetcher:clientRendererGatingProvider:] */

undefined8 *
FUN_105596a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126e90e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bb268;
    _objc_alloc();
    func_0x00010bff8120();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar3);
  }
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



/* Entry: 105596be8; end: 105596c2f; -[CTPItemRendererBitmoji dealloc] */

void FUN_105596be8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126e90e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105596c30; end: 105596c37; -[CTPItemRendererBitmoji ctItemEntityCase] */

undefined8 FUN_105596c30(void)

{
  return 2;
}



/* Entry: 105596c38; end: 105596c43; -[CTPItemRendererBitmoji viewReuseIdentifier] */

void FUN_105596c38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb260,PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 105596c44; end: 105596df7; -[CTPItemRendererBitmoji viewForItem:presentationModelProvider:] */

void FUN_105596c44(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    param_2 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030a60(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    func_0x00010be4d8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105596df8; end: 105596e7b;  */

void FUN_105596df8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae160();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105596e7c; end: 105596fb7; -[CTPItemRendererBitmoji attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

void FUN_105596e7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
    func_0x00010c0834e0();
    if (iVar1 != 0) {
      _CACurrentMediaTime();
      _objc_initWeak(auStack_58,param_2);
      _objc_copyWeak(auStack_68,auStack_58);
      uStack_60 = param_1;
      func_0x00010be4d8e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      goto LAB_105596f64;
    }
  }
  param_2 = 0;
LAB_105596f64:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105596fb8; end: 10559703b;  */

void FUN_105596fb8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae160();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10559703c; end: 10559721f; -[CTPItemRendererBitmoji _loadImageForBitmojiStickerItem:itemView:presentationModelProvider:completionBlock:] */

void FUN_10559703c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 != 0) {
    puVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba800;
    _objc_opt_class(PTR_PTR_1126ba800);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    _objc_release(puVar1);
    if (((ulong)puVar3 & 1) != 0) {
      puVar1 = param_3;
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ae568;
      _objc_alloc_init(PTR_PTR_1126ae568);
      func_0x00010be4d920(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bb1c8;
      _objc_alloc(PTR_PTR_1126bb1c8);
      goto LAB_1055971c4;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb1c8;
  _objc_alloc(PTR_PTR_1126bb1c8);
  param_1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
LAB_1055971c4:
  func_0x00010c030a60();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105597220; end: 10559761b; -[CTPItemRendererBitmoji _loadImageForItem:subject:itemView:bitmojiEntity:presentationModelProvider:completionBlock:] */

void FUN_105597220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  int iStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126bb270;
  _objc_alloc_init();
  uVar3 = param_7;
  func_0x00010c10f520();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  lVar4 = param_6;
  func_0x00010bf62ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c067f00();
    _objc_release(lVar4);
    if (iVar1 != 0) {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10559761c;
      puStack_a0 = &UNK_110899678;
      puVar7 = auStack_90;
      _objc_copyWeak(puVar7,auStack_80);
      _objc_retain(param_6);
      uVar6 = uVar3;
      lStack_98 = param_6;
      iStack_88 = iVar1;
      func_0x00010c2656e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_105597794;
      puStack_f8 = &UNK_1108996a8;
      _objc_copyWeak(auStack_c0,auStack_80);
      _objc_retain(param_6);
      lStack_f0 = param_6;
      _objc_retain(param_3);
      uStack_e8 = param_3;
      _objc_retain(param_5);
      uStack_e0 = param_5;
      _objc_retain(puVar2);
      puStack_d8 = puVar2;
      _objc_retain(param_4);
      uStack_d0 = param_4;
      _objc_retain(param_8);
      uStack_c8 = param_8;
      func_0x00010c260260(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7e00(*(undefined8 *)(param_1 + 8));
      _objc_release(uVar5);
      _objc_release(uStack_c8);
      _objc_release(uStack_d0);
      _objc_release(puStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
      _objc_release(lStack_f0);
      _objc_destroyWeak(auStack_c0);
      _objc_release(uVar6);
      lVar4 = lStack_98;
      goto LAB_10559755c;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar7 = auStack_118;
  _objc_copyWeak(puVar7,auStack_80);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar2);
  _objc_retain(param_4);
  _objc_retain(param_8);
  func_0x00010c260260(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar6);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  lVar4 = param_6;
LAB_10559755c:
  _objc_release(lVar4);
  _objc_destroyWeak(puVar7);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10559761c; end: 105597793;  */

void FUN_10559761c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bb278;
  _objc_opt_class(PTR_PTR_1126bb278);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfa1820();
  if ((int)uVar3 == 0x12) {
    uVar3 = uVar1;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      puVar2 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained(puVar2);
      puVar8 = puVar2;
      func_0x00010bdf9ae0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105597734;
    }
  }
  puVar8 = PTR_PTR_1126ae6b8;
  puVar2 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf62ee0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1c500(*(undefined8 *)(param_1 + 0x20));
  puVar7 = puVar2;
  func_0x00010bdd4680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_105597734:
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105597794; end: 105597893;  */

void FUN_105597794(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bb278;
  _objc_opt_class(PTR_PTR_1126bb278);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4d980();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105597894; end: 105597cbb; -[CTPItemRendererBitmoji _loadImageForPresentationModel:bitmojiSticker:item:itemView:request:subject:completionBlock:] */

void FUN_105597894(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_7;
  func_0x00010c06e0c0();
  if ((uVar1 & 1) != 0) goto LAB_105597c68;
  puVar2 = PTR_PTR_1126bb278;
  _objc_opt_class(PTR_PTR_1126bb278);
  puVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_8);
    func_0x00010bf436e0(param_8);
LAB_105597c58:
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_4;
    func_0x00010bf1c500();
    puVar3 = param_3;
    if (puVar2 != (undefined *)0x2) {
LAB_105597970:
      puVar4 = param_4;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = param_3;
        func_0x00010c10a7c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar2 = PTR_PTR_1126ba7f0;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = param_4;
          func_0x00010bf62ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_4;
          func_0x00010bf62ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c1306a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26cd80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        else {
          puVar4 = param_3;
          func_0x00010c10a7c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28fac0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
      }
      puVar4 = param_4;
      func_0x00010bf1c500();
      if (puVar4 == (undefined *)0x2) {
        puStack_70 = param_3;
        func_0x00010bfb7be0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_70 = (undefined *)0x0;
      }
      func_0x00010bfe8ba0();
      puVar5 = PTR_PTR_1126b5938;
      _objc_alloc();
      puVar6 = param_4;
      func_0x00010bf41a00(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_3;
      func_0x00010bf12ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c000(param_4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c130220(param_3);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c050fc0(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c12ff20(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1820(param_3);
      func_0x00010c07bbc0(param_3);
      uVar9 = uVar8;
      func_0x00010c12ff80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010c1879e0(param_7);
      _objc_release(uVar9);
      _objc_release(puVar5);
      _objc_release(puStack_70);
      goto LAB_105597c58;
    }
    puVar2 = param_3;
    func_0x00010bfb7be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) goto LAB_105597970;
  }
  _objc_release(puVar3);
LAB_105597c68:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105597cbc; end: 105597edf; -[CTPItemRendererBitmoji _delayedPresentationModelFromModel:entity:delayMs:] */

void FUN_105597cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar2 = PTR_PTR_1126ae6b8;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar12 = param_4;
  func_0x00010bf1c500(param_4);
  uVar1 = param_1;
  func_0x00010bdd4680(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110daafd8,
                      lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae6b8;
  lVar12 = param_4;
  func_0x00010bf62ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf1c500();
  _objc_release(param_4);
  func_0x00010bdd4680(param_1,param_2,param_3,lVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0860a0(puVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2706e0((double)param_5 / 1000.0,puVar4,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar12);
  puVar4 = PTR_PTR_1126ae6b8;
  lVar12 = 2;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar14;
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(lVar12);
    puVar14 = puVar11;
    func_0x00010bfa1820(puVar11);
    puVar4 = puVar11;
    func_0x00010bfa1820();
    if (((int)puVar4 == 0x12) && (lVar15 = lVar12, func_0x00010c08fa60(), lVar15 == 0)) {
      lVar15 = *(long *)(puVar2 + 0x30);
      puVar2 = puVar11;
      func_0x00010bf12ea0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 2) {
        puVar4 = puVar11;
        func_0x00010bfb7be0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc3b60(lVar15,param_2,puVar2,puVar4,0x12);
        _objc_release(puVar4);
      }
      else {
        func_0x00010bfc3b60(lVar15,param_2,puVar2,0,0x12);
      }
      _objc_release(puVar2);
      uVar13 = 0x18;
      if (lVar15 != 0) {
        uVar13 = (uint)puVar14;
      }
      puVar14 = (undefined *)(ulong)uVar13;
    }
    puVar4 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    puVar2 = puVar11;
    func_0x00010bf12ea0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010bfb7be0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010bfe8ba0(puVar11);
    puVar7 = puVar11;
    func_0x00010c07bbc0(puVar11);
    puVar8 = puVar11;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010c130220();
    puVar10 = puVar11;
    func_0x00010bf122a0();
    func_0x00010bff6080(puVar4,param_2,puVar2,puVar5,lVar12,puVar6,puVar14,puVar7,puVar8,puVar9,
                        puVar10);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(lVar12);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105597ee0; end: 1055980bb; -[CTPItemRendererBitmoji _bitmojiCustomojiStickerPresentationModelFromModel:text:type:] */

void FUN_105597ee0(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar10 = param_3;
  func_0x00010bfa1820(param_3);
  uVar1 = param_3;
  func_0x00010bfa1820();
  if (((int)uVar1 == 0x12) && (lVar11 = param_4, func_0x00010c08fa60(), lVar11 == 0)) {
    lVar11 = *(long *)(param_1 + 0x30);
    uVar1 = param_3;
    func_0x00010bf12ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 2) {
      uVar2 = param_3;
      func_0x00010bfb7be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc3b60(lVar11,param_2,uVar1,uVar2,0x12);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bfc3b60(lVar11,param_2,uVar1,0,0x12);
    }
    _objc_release(uVar1);
    uVar9 = 0x18;
    if (lVar11 != 0) {
      uVar9 = (uint)uVar10;
    }
    uVar10 = (ulong)uVar9;
  }
  puVar3 = PTR_PTR_1126bb278;
  _objc_alloc(PTR_PTR_1126bb278);
  uVar1 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe8ba0(param_3);
  uVar5 = param_3;
  func_0x00010c07bbc0(param_3);
  uVar6 = param_3;
  func_0x00010c10a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c130220();
  uVar8 = param_3;
  func_0x00010bf122a0();
  func_0x00010bff6080(puVar3,param_2,uVar1,uVar2,param_4,uVar4,uVar10,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055980bc; end: 10559820b; -[CTPItemRendererBitmoji _bitmojiStickerEntityFromEntity:text:] */

void FUN_1055980bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba800;
  _objc_alloc(PTR_PTR_1126ba800);
  uVar2 = param_3;
  func_0x00010bf41a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1c500(param_3);
  uVar4 = param_3;
  func_0x00010c06c000(param_3);
  lVar5 = param_4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    func_0x00010bfffd00(puVar1,param_2,uVar2,uVar3,uVar4,0);
  }
  else {
    puVar6 = PTR_PTR_1126bb280;
    _objc_alloc(PTR_PTR_1126bb280);
    uVar7 = param_3;
    func_0x00010bf62ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c1306a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e2a0(puVar6,param_2,uVar8,param_4);
    func_0x00010bfffd00(puVar1,param_2,uVar2,uVar3,uVar4,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10559820c; end: 1055982fb; -[CTPItemRendererBitmoji _ctpItemFromItem:entity:] */

void FUN_10559820c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126baa60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf96f00(param_3);
  uVar4 = param_3;
  func_0x00010bf9e140(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01fe20(puVar1,param_2,uVar2,uVar3,param_4,uVar4,uVar5);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055982fc; end: 10559844f; -[CTPItemRendererBitmoji _loadImageWithModifiedEntity:model:item:itemView:request:subject:completionBlock:] */

void FUN_1055982fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf63000(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdd4ac0(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdf6540(param_1,param_2,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be4d960(param_1,param_2,param_4,uVar2,uVar1,param_6,param_7,param_8,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105598450; end: 1055984af; -[CTPItemRendererBitmoji .cxx_destruct] */

void FUN_105598450(long param_1)

{
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



/* Entry: 1055984b0; end: 10559857b; -[CTPBitmojiRenderProvider initBitmojiImageFetcher:bitmoji3DStickerFetcher:configProvider:] */

undefined1 *
FUN_1055984b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e90f0;
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



/* Entry: 10559857c; end: 10559895b; -[CTPBitmojiRenderProvider renderRequestWithParams:item:feature:itemView:subject:isReaction:completion:] */

void FUN_10559857c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126bb260;
  _objc_retain(param_6);
  _objc_opt_class(puVar2);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_6);
  func_0x00010c28c860(uVar1);
  lVar4 = param_3;
  func_0x00010c130220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = param_3;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10559895c;
  uStack_90 = 0x10559896c;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120(param_3);
  uVar8 = uVar6;
  func_0x00010bfa48a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar10 = uVar9;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uVar10;
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10559895c; end: 105598973;  */

void FUN_10559895c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105598974; end: 105598ad7;  */

void FUN_105598974(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105598ad8; end: 105598b9f;  */

void FUN_105598ad8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdd47c0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000105598b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 105598ba0; end: 105598bdb;  */

void FUN_105598ba0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105598bdc; end: 105598d4b; -[CTPBitmojiRenderProvider _bitmojiImageLoadedForItem:itemView:subject:image:fromCache:] */

void FUN_105598bdc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
LAB_105598cec:
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
  }
  else {
    if (param_4 == (undefined *)0x0) {
LAB_105598c94:
      puVar1 = PTR_PTR_1126bb260;
      _objc_alloc();
      func_0x00010c01c560();
      func_0x00010c1be9a0();
      if (puVar1 == (undefined *)0x0) goto LAB_105598cec;
    }
    else {
      puVar1 = PTR_PTR_1126bb260;
      _objc_opt_class(PTR_PTR_1126bb260);
      puVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar1);
      if (((ulong)puVar2 & 1) == 0) goto LAB_105598c94;
      puVar1 = param_4;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != param_3) goto LAB_105598d1c;
      func_0x00010c28c860(param_4);
      _objc_retain(param_4);
      func_0x00010c1be9a0(param_4);
      puVar1 = param_4;
    }
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_105598d1c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105598d4c; end: 105598d87; -[CTPBitmojiRenderProvider .cxx_destruct] */

void FUN_105598d4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105598d88; end: 105598ed3; -[CTPBitmojiRenderStrategiesFactory initWithBitmojiImageFetcher:customojiViewProvider:bitmoji3DStickerFetcher:configProvider:simpleContentFetcher:stickerContentManager:customojiFetcher:] */

undefined1 *
FUN_105598d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e90f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bb288;
    _objc_alloc();
    func_0x00010c008160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bb290;
    _objc_alloc();
    func_0x00010bfee4a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105598ed4; end: 105598f27; -[CTPBitmojiRenderStrategiesFactory renderProviderForBitmojiSticker:] */

void FUN_105598ed4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf62ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0x10;
  if (param_3 != 0) {
    lVar1 = 8;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105598f28; end: 105598f97; -[CTPBitmojiRenderStrategiesFactory isViewSupportedForRecycling:] */

uint FUN_105598f28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb260;
  _objc_opt_class(PTR_PTR_1126bb260);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bb298;
    _objc_opt_class(PTR_PTR_1126bb298);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = (uint)uVar2;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 105598f98; end: 105598f9f; -[CTPBitmojiRenderStrategiesFactory subscribeToPresentationModel:bitmojiEntity:next:] */

void FUN_105598f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__subscribeToDefaultPresentationM_11258f740,param_3,param_5);
  return;
}



/* Entry: 105598fa0; end: 105598fab; -[CTPBitmojiRenderStrategiesFactory _subscribeToDefaultPresentationModel:next:] */

void FUN_105598fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_subscribeOnNext__112675a00,param_4);
  return;
}



/* Entry: 105598fac; end: 105598fdb; -[CTPBitmojiRenderStrategiesFactory .cxx_destruct] */

void FUN_105598fac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105598fdc; end: 1055990d7; -[CTPCustomojiRenderProvider initWithCustomojiViewProvider:simpleContentFetcher:stickerContentManager:customojiFetcher:] */

undefined1 *
FUN_105598fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9100;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055990d8; end: 105599397; -[CTPCustomojiRenderProvider renderRequestWithParams:item:feature:itemView:subject:isReaction:completion:] */

void FUN_1055990d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126bb298;
  _objc_retain(param_6);
  _objc_opt_class(puVar2);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_6);
  func_0x00010c1891a0(uVar1);
  func_0x00010c1b5d40(uVar1);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_105599398;
  uStack_78 = 0x1055993a8;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_105599398;
  uStack_a8 = 0x1055993a8;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_105599398;
  uStack_d8 = 0x1055993a8;
  uStack_d0 = 0;
  uVar4 = param_3;
  func_0x00010bf62f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0c40();
  _objc_release(uVar4);
  lVar5 = puStack_90[5];
  if ((lVar5 == 0) || (func_0x00010c08fa60(), lVar5 == 0)) {
    func_0x00010be8e100(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be4cfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105599398; end: 1055993af;  */

void FUN_105599398(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055993b0; end: 105599423;  */

void FUN_1055993b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105599424; end: 10559945b;  */

void FUN_105599424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10559945c; end: 105599667; -[CTPCustomojiRenderProvider _loadCustomojiFromURL:item:itemView:subject:completion:] */

void FUN_10559945c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar4 = uVar3;
  func_0x00010c13e600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105599668; end: 1055996bf;  */

void FUN_105599668(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055996c0; end: 105599827; -[CTPCustomojiRenderProvider _handleContentResult:item:itemView:subject:completion:] */

void FUN_1055996c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010b7f5374(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105599828;
    puStack_70 = &UNK_110852488;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    _objc_retain(param_6);
    uStack_50 = param_6;
    _objc_retain(param_7);
    uStack_48 = param_7;
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(puStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105599828; end: 1055998eb;  */

void FUN_105599828(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 != 0) {
    puVar3 = PTR_PTR_1126bb260;
    _objc_opt_class(PTR_PTR_1126bb260);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar3);
      goto LAB_105599884;
    }
  }
  puVar3 = PTR_PTR_1126bb260;
  _objc_alloc(PTR_PTR_1126bb260);
  func_0x00010c01c560();
LAB_105599884:
  func_0x00010c28c860(puVar3);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1055998ec; end: 105599d1f; -[CTPCustomojiRenderProvider _renderCustomojiWithParams:item:feature:itemView:subject:isReaction:text:rendererId:completion:] */

void FUN_1055998ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar2 = PTR_PTR_1126bb260;
  _objc_retain(param_6);
  _objc_opt_class(puVar2);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_6);
  func_0x00010c28c860(uVar1);
  _objc_initWeak(auStack_80,param_1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105599398;
  uStack_b0 = 0x1055993a8;
  uStack_a8 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120(param_3);
  uVar8 = uVar4;
  func_0x00010bfa6220();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_11);
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_7);
  uVar11 = uVar10;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = puStack_c8[5];
  puStack_c8[5] = uVar11;
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_d8);
  _objc_release(param_11);
  __Block_object_dispose(&uStack_a0,8);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105599d20; end: 105599e1b;  */

void FUN_105599d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105599398;
  uStack_30 = 0x1055993a8;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105599e1c; end: 105599e93;  */

void FUN_105599e1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105599e94; end: 105599edb;  */

void FUN_105599e94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105599edc; end: 10559a08b;  */

void FUN_105599edc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
  }
  else {
    func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
    lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    _objc_release(uVar1);
    _objc_copyWeak(auStack_58,param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10559a08c; end: 10559a17b;  */

void FUN_10559a08c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be37460();
  _objc_release(param_2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010559a0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10559a17c; end: 10559a237;  */

void FUN_10559a17c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 10559a238; end: 10559a3bb; -[CTPCustomojiRenderProvider _imageLoadedForItem:itemView:subject:image:fromCache:] */

void FUN_10559a238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
LAB_10559a358:
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
  }
  else {
    if (param_4 == (undefined *)0x0) {
LAB_10559a300:
      puVar1 = PTR_PTR_1126bb260;
      _objc_alloc();
      func_0x00010c01c560();
      func_0x00010c1be9a0();
      if (puVar1 == (undefined *)0x0) goto LAB_10559a358;
    }
    else {
      puVar1 = PTR_PTR_1126bb260;
      _objc_opt_class(PTR_PTR_1126bb260);
      puVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar1);
      if (((ulong)puVar2 & 1) == 0) goto LAB_10559a300;
      puVar1 = param_4;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c071ae0();
      _objc_release(puVar1);
      if ((int)puVar2 == 0) goto LAB_10559a388;
      func_0x00010c28c860(param_4);
      _objc_retain(param_4);
      func_0x00010c1be9a0(param_4);
      puVar1 = param_4;
    }
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_10559a388:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10559a3bc; end: 10559a403; -[CTPCustomojiRenderProvider .cxx_destruct] */

void FUN_10559a3bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10559a404; end: 10559a40f; +[CTPItemViewImage reuseIdentifier] */

undefined ** FUN_10559a404(void)

{
  return &PTR____CFConstantStringClassReference_110dec758;
}



/* Entry: 10559a410; end: 10559a4fb; -[CTPItemViewImage initWithImageBackedItem:image:] */

undefined1 *
FUN_10559a410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c23d0a0(param_6);
  func_0x00010c23d0a0(param_6);
  puStack_48 = PTR_PTR_1126e9108;
  uStack_50 = param_3;
  _objc_msgSendSuper2(0,0,param_1,param_2,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bead1a0(puVar1);
    func_0x00010c28c860(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10559a4fc; end: 10559a7b7; -[CTPItemViewImage _setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559a4fc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126bb2a0;
  _objc_alloc_init();
  lVar20 = (long)_DAT_112725dd0;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar2;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar20));
  puVar2 = PTR_PTR_1126bb2a0;
  uVar19 = *(ulong *)(param_1 + lVar20);
  _objc_retain(uVar19);
  _objc_opt_class(puVar2);
  uVar3 = uVar19;
  _objc_opt_isKindOfClass(uVar19,puVar2);
  uVar1 = uVar19;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar19);
  func_0x00010c16ce00(uVar1);
  _objc_release(uVar1);
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 4;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  uVar18 = *(undefined8 *)(lVar4 + _DAT_112725dd4);
  *(undefined **)(lVar4 + _DAT_112725dd4) = puVar15;
  _objc_retain(puVar15);
  _objc_retain(uVar16);
  _objc_release(uVar18);
  func_0x00010c1a9f00(*(undefined8 *)(lVar4 + _DAT_112725dd0));
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 10559a7b8; end: 10559a83b; -[CTPItemViewImage updateWithItem:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559a7b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725dd4);
  *(undefined8 *)(param_1 + _DAT_112725dd4) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112725dd0),param_2,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10559a83c; end: 10559a8c3; -[CTPItemViewImage willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559a83c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126bb2a0;
  uVar4 = *(ulong *)(param_1 + _DAT_112725dd0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010c16ce00(uVar4);
    uVar3 = uVar4;
    func_0x00010c06c0e0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c24dbc0(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10559a8c4; end: 10559a93f; -[CTPItemViewImage didEndDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559a8c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126bb2a0;
  uVar4 = *(ulong *)(param_1 + _DAT_112725dd0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010c16ce00(uVar4);
    func_0x00010c2558c0(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10559a940; end: 10559a94f; -[CTPItemViewImage item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10559a940(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725dd4);
}



/* Entry: 10559a950; end: 10559a95f; -[CTPItemViewImage itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10559a950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725dd8);
}



/* Entry: 10559a960; end: 10559a96f; -[CTPItemViewImage loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10559a960(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112725dcc);
}



/* Entry: 10559a970; end: 10559a97f; -[CTPItemViewImage setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559a970(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112725dcc) = param_3;
  return;
}



/* Entry: 10559a980; end: 10559a98f; -[CTPItemViewImage imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10559a980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725dd0);
}



/* Entry: 10559a990; end: 10559a9df; -[CTPItemViewImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559a990(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725dd0,0);
  _objc_storeStrong(param_1 + _DAT_112725dd8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725dd4,0);
  return;
}



/* Entry: 10559a9e0; end: 10559aa83; -[CTPItemRendererCaptions initWithSnapchatterFetcher:captionDataProvider:creativeToolsABProvider:] */

undefined1 *
FUN_10559a9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9110;
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



/* Entry: 10559aa84; end: 10559aa8b; -[CTPItemRendererCaptions ctItemEntityCase] */

undefined8 FUN_10559aa84(void)

{
  return 0xb;
}



/* Entry: 10559aa8c; end: 10559aa97; -[CTPItemRendererCaptions viewReuseIdentifier] */

undefined ** FUN_10559aa8c(void)

{
  return &PTR____CFConstantStringClassReference_110dec778;
}



/* Entry: 10559aa98; end: 10559aa9f; -[CTPItemRendererCaptions viewForItem:presentationModelProvider:] */

void FUN_10559aa98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f38738,1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb1c8;
  _objc_alloc(PTR_PTR_1126bb1c8);
  func_0x00010c030a60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10559aaa0; end: 10559ab5b;  */

void FUN_10559aaa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f38738,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb1c8;
  _objc_alloc(PTR_PTR_1126bb1c8);
  func_0x00010c030a60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10559ab5c; end: 10559ab63; -[CTPItemRendererCaptions attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

undefined8 FUN_10559ab5c(void)

{
  return 0;
}



/* Entry: 10559ab64; end: 10559afbb; -[CTPItemRendererCaptions viewForItemInstance:presentationModelProviderType:] */

void FUN_10559ab64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar9 = (undefined *)0x2;
    FUN_10559aaa0(2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar10 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar10;
    func_0x00010bf30500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar1 == 0) {
      puVar9 = (undefined *)0x2;
      FUN_10559aaa0(2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_PTR_1126b2700;
      _objc_alloc();
      uVar11 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
      uVar12 = 0x3ff0000000000000;
      uVar13 = 0;
      func_0x00010c055500(*(undefined8 *)PTR__CGPointZero_110347540);
      puVar3 = PTR_PTR_1126bb2a8;
      _objc_alloc();
      puStack_d8 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_e0 = uVar6;
      func_0x00010c052280();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x000108e35fac(param_3,puVar9,uVar4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0c28,
                          0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar9);
      puStack_108 = &uStack_e0;
      uStack_e0 = 0;
      uStack_d0 = 0x3010000000;
      pcStack_c8 = "";
      uStack_b8 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      uStack_c0 = *(undefined8 *)PTR__CGSizeZero_110347620;
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_10559afbc;
      puStack_110 = &UNK_1108997e8;
      ppuVar5 = &puStack_128;
      uStack_100 = uVar6;
      uStack_f8 = uVar11;
      uStack_f0 = uVar12;
      uStack_e8 = uVar13;
      puStack_d8 = puStack_108;
      _objc_retainBlock();
      _objc_retain();
      func_0x00010c0c11a0(param_4);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf2ff00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      lVar7 = param_3;
      func_0x000108e35edc();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_b0 = lVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar10);
      _objc_retain(uVar4);
      _objc_retain(puVar8);
      func_0x00010c09b380(uVar4);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126bb1c8;
      _objc_alloc(PTR_PTR_1126bb1c8);
      func_0x00010c030a60();
      _objc_release(puVar8);
      _objc_release(uVar4);
      _objc_release(lVar10);
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(uVar4);
      _objc_release(ppuVar5);
      _objc_release(ppuVar5);
      __Block_object_dispose(&uStack_e0,8);
      _objc_release(lVar10);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    lVar10 = 8;
    __Block_object_dispose(&uStack_e0);
    __Unwind_Resume();
    if (lVar10 - 1U < 2) {
      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 8);
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      uVar4 = *(undefined8 *)(param_3 + 0x38);
    }
    else {
      if (lVar10 != 0) {
        return;
      }
      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 8);
      uVar6 = 0x4069000000000000;
      uVar4 = 0x4059000000000000;
    }
    *(undefined8 *)(lVar10 + 0x28) = uVar6;
    *(undefined8 *)(lVar10 + 0x20) = uVar4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10559afbc; end: 10559b007;  */

void FUN_10559afbc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 - 1U < 2) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = 0x4069000000000000;
    uVar2 = 0x4059000000000000;
  }
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return;
}



/* Entry: 10559b008; end: 10559b187;  */

void FUN_10559b008(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10559b0c0;
  puStack_68 = &UNK_110899848;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uStack_28 = *(undefined8 *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  return;
}



/* Entry: 10559b188; end: 10559b26f;  */

void FUN_10559b188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126badc8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010c2ad3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bb260;
  _objc_alloc(PTR_PTR_1126bb260);
  func_0x00010c01c560();
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10559b270; end: 10559b29f; -[CTPItemRendererCaptions .cxx_destruct] */

void FUN_10559b270(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10559b2a0; end: 10559b343; -[CTPItemRendererCustomSticker initWithStickerContentManager:circumstanceEngine:] */

undefined1 *
FUN_10559b2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9118;
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



/* Entry: 10559b344; end: 10559b373; -[CTPItemRendererCustomSticker _assetCacheTTLInMinutes] */

long FUN_10559b344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dec798,0x80520,0);
  return (long)(int)uVar1;
}



/* Entry: 10559b374; end: 10559b37b; -[CTPItemRendererCustomSticker ctItemEntityCase] */

undefined8 FUN_10559b374(void)

{
  return 3;
}



/* Entry: 10559b37c; end: 10559b387; -[CTPItemRendererCustomSticker viewReuseIdentifier] */

void FUN_10559b37c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb260,PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 10559b388; end: 10559b46b; -[CTPItemRendererCustomSticker viewForItem:presentationModelProvider:] */

void FUN_10559b388(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1[0x18] = 0;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f38738,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030a60(param_1,param_2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be4d900();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559b46c; end: 10559b537; -[CTPItemRendererCustomSticker attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

void FUN_10559b46c(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126bb260;
    _objc_opt_class(PTR_PTR_1126bb260);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      _objc_retain(param_3);
      func_0x00010c28c860(param_3);
      func_0x00010be4d900(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      goto LAB_10559b50c;
    }
  }
  param_1 = 0;
LAB_10559b50c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559b538; end: 10559b8bb; -[CTPItemRendererCustomSticker _loadImageForCustomStickerItem:itemView:] */

void FUN_10559b538(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf96f00();
  if (uVar2 == 3) {
    uVar3 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ba838;
    _objc_opt_class(PTR_PTR_1126ba838);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar10);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    _objc_initWeak(auStack_78,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf92c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf92c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10559b8bc;
    puStack_90 = &UNK_110899878;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(puVar5);
    uVar8 = uVar6;
    puStack_88 = puVar5;
    func_0x00010c13ef40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar10 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar9 = puVar1;
    _objc_retain(puVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(uVar2);
  }
  else {
    puVar10 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar1);
    _objc_release(puVar10);
    func_0x00010bf436e0(puVar1);
    puVar10 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10559b8bc; end: 10559b973;  */

void FUN_10559b8bc(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be27620();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10559b974; end: 10559ba4f; -[CTPItemRendererCustomSticker _handleContentCompletionWithResult:imagePromise:] */

void FUN_10559b974(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      lVar2 = param_3;
      func_0x00010bfc79a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c09c1e0();
      *(bool *)(param_1 + 0x18) = lVar3 == 1;
      _objc_release(lVar2);
    }
  }
  func_0x00010bf43d60(param_4,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10559ba50; end: 10559bbb3; -[CTPItemRendererCustomSticker _customStickerMediaLoadedForItem:itemView:subject:image:] */

void FUN_10559ba50(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010bf436e0(param_5);
  }
  else {
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126bb260;
      _objc_alloc(PTR_PTR_1126bb260);
      func_0x00010c01c560();
    }
    else {
      puVar1 = param_4;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != param_3) goto LAB_10559bb84;
      func_0x00010c28c860(param_4,param_2,param_3,param_6);
      _objc_retain(param_4);
      puVar1 = param_4;
    }
    func_0x00010c1be9a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x18));
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010bf436e0(param_5);
    _objc_release(puVar1);
  }
LAB_10559bb84:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10559bbb4; end: 10559bbe3; -[CTPItemRendererCustomSticker .cxx_destruct] */

void FUN_10559bbb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10559bbe4; end: 10559bbeb; -[CTPItemRendererDrawing ctItemEntityCase] */

undefined8 FUN_10559bbe4(void)

{
  return 0x14;
}



/* Entry: 10559bbec; end: 10559bbf7; -[CTPItemRendererDrawing viewReuseIdentifier] */

undefined ** FUN_10559bbec(void)

{
  return &PTR____CFConstantStringClassReference_110dec7b8;
}



/* Entry: 10559bbf8; end: 10559bbff; -[CTPItemRendererDrawing viewForItem:presentationModelProvider:] */

void FUN_10559bbf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestFailureWithErrorCode__112581d98,1);
  return;
}



/* Entry: 10559bc00; end: 10559bc07; -[CTPItemRendererDrawing attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

undefined8 FUN_10559bc00(void)

{
  return 0;
}



/* Entry: 10559bc08; end: 10559bf9b; -[CTPItemRendererDrawing viewForItemInstance:presentationModelProviderType:] */

void FUN_10559bc08(undefined8 param_1,undefined8 param_2,double param_3,undefined *param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf21960();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = uVar1;
      func_0x00010bfce320();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2a5040();
      if ((int)uVar4 == 0) {
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      else {
        uVar4 = uVar1;
        func_0x00010bfce320();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfe0640();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((int)uVar5 != 0) {
          puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          dVar12 = param_3;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          uVar2 = uVar1;
          func_0x00010bfce320(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c2a5040();
          uVar4 = uVar1;
          func_0x00010bfce320(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bfe0640();
          _objc_release(uVar4);
          _objc_release(uVar2);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar7 = PTR_PTR_1126bb2b0;
          func_0x00010bf89fa0(param_3,PTR_PTR_1126bb2b0,param_5,uVar1,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126bb2b8;
          if (puVar7 == (undefined *)0x0) {
            puVar11 = (undefined *)0x2;
            func_0x00010be90fe0(param_4,param_5,2);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            dVar12 = (dVar12 / (double)(uVar3 & 0xffffffff)) * (double)(uVar5 & 0xffffffff);
            puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_70 = puVar7;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_70,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c151aa0(param_3,dVar12,param_3,dVar12,puVar6,param_5,puVar11,0,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            puVar11 = PTR_PTR_1126badc8;
            _objc_retain(puVar6);
            _objc_opt_new(puVar11);
            puVar8 = puVar11;
            func_0x00010c2ad3a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar10 = PTR_PTR_1126bb260;
            _objc_alloc(PTR_PTR_1126bb260);
            func_0x00010c01c560();
            _objc_release(puVar6);
            _objc_release(puVar9);
            _objc_release(puVar11);
            param_4 = PTR_PTR_1126bb1c8;
            _objc_alloc();
            puVar8 = PTR_PTR_1126ae6b8;
            puVar9 = PTR_PTR_1126af5d0;
            func_0x00010c2619e0(PTR_PTR_1126af5d0,param_5,puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0860a0(puVar8,param_5,puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar8;
            func_0x00010c030a60(param_4,param_5,puVar8,0);
            _objc_release(puVar8);
            _objc_release(puVar9);
            _objc_release(puVar10);
            _objc_release(puVar6);
          }
          _objc_release(puVar7);
          goto LAB_10559bf30;
        }
      }
    }
  }
  puVar11 = (undefined *)0x2;
  func_0x00010be90fe0(param_4,param_5,2);
  _objc_retainAutoreleasedReturnValue();
LAB_10559bf30:
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_5,
                        &PTR____CFConstantStringClassReference_110f38738,puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    param_4 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10559bf9c; end: 10559c057; -[CTPItemRendererDrawing _requestFailureWithErrorCode:] */

void FUN_10559bf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f38738,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb1c8;
  _objc_alloc(PTR_PTR_1126bb1c8);
  func_0x00010c030a60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10559c058; end: 10559c05f; -[CTPItemRendererEmoji ctItemEntityCase] */

undefined8 FUN_10559c058(void)

{
  return 4;
}



/* Entry: 10559c060; end: 10559c06b; -[CTPItemRendererEmoji viewReuseIdentifier] */

void FUN_10559c060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb2c0,PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 10559c06c; end: 10559c24b; -[CTPItemRendererEmoji viewForItem:presentationModelProvider:] */

void FUN_10559c06c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10559c1d0;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    puVar2 = puStack_38;
    _objc_retain(puVar1);
    _objc_release(puVar2);
    _objc_release(lStack_40);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bb1c8;
  _objc_alloc(PTR_PTR_1126bb1c8);
  func_0x00010c030a60();
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10559c24c; end: 10559c39b; -[CTPItemRendererEmoji attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

void FUN_10559c24c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puVar3 = PTR_PTR_1126bb2c0;
    _objc_opt_class(PTR_PTR_1126bb2c0);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar1 & 1) != 0) {
      _objc_retain(param_3);
      puVar2 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10559c39c;
      puStack_60 = &UNK_110848ba8;
      uStack_58 = param_3;
      _objc_retain(param_4);
      lStack_50 = param_4;
      puStack_48 = puVar2;
      _objc_retain(puVar2);
      _objc_retain(param_3);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_78);
      puVar3 = PTR_PTR_1126bb1c8;
      _objc_alloc(PTR_PTR_1126bb1c8);
      func_0x00010c030a60();
      _objc_release(puStack_48);
      _objc_release(lStack_50);
      _objc_release(uStack_58);
      _objc_release(puVar2);
      _objc_release(param_3);
      goto LAB_10559c368;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_10559c368:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10559c39c; end: 10559c403;  */

void FUN_10559c39c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c28c840(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10559c404; end: 10559c40f; +[CTPItemViewEmoji reuseIdentifier] */

undefined ** FUN_10559c404(void)

{
  return &PTR____CFConstantStringClassReference_110dec7d8;
}



/* Entry: 10559c410; end: 10559c4cf; -[CTPItemViewEmoji initWithEmojiItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10559c410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9120;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112725df0) = 1;
    func_0x00010c28c840(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


