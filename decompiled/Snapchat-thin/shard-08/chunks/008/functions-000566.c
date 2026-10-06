/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066c6ba0; end: 1066c6ba7; -[SCLensExplorerImageMediaDownloaderCache mediaDownloader] */

void FUN_1066c6ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1066c6ba8; end: 1066c6baf; -[SCLensExplorerImageMediaDownloaderCache lensPerformerProvider] */

void FUN_1066c6ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1066c6bb0; end: 1066c6e2b; -[SCLensExplorerImageMediaDownloaderCache storeLensExplorerAnimation:] */

void FUN_1066c6bb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **unaff_x27;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar3 != 0) {
    lVar1 = param_3;
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar4 != 0) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar1 = param_3;
      func_0x00010bfe9920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar10 = *plStack_130;
        unaff_x27 = &puStack_178;
        do {
          lVar8 = 0;
          do {
            if (*plStack_130 != lVar10) {
              _objc_enumerationMutation(lVar1);
            }
            lVar9 = *(long *)(lStack_138 + lVar8 * 8);
            lVar5 = lVar9;
            func_0x00010c247520();
            if ((lVar5 == 3) || (lVar5 = lVar9, func_0x00010c247520(), lVar5 == 0)) {
              _objc_initWeak(auStack_148,param_1);
              uVar6 = param_1;
              func_0x00010c095b60(param_1);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c0680e0();
              _objc_retainAutoreleasedReturnValue();
              puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_170 = 0xc2000000;
              pcStack_168 = FUN_1066c6e2c;
              puStack_160 = &UNK_110841fb0;
              lStack_158 = lVar9;
              _objc_copyWeak(auStack_150,auStack_148);
              func_0x000100a0df38(uVar7,&puStack_178);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_destroyWeak(auStack_150);
              _objc_destroyWeak(auStack_148);
            }
            lVar8 = lVar8 + 1;
          } while (lVar4 != lVar8);
          lVar4 = lVar1;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 5);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfe6ac0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010b69662c(0x42c80000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0c4b00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0c5220(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf264e0(lVar2);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1066c6e2c; end: 1066c6ee3;  */

void FUN_1066c6e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b69662c(0x42c80000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0c4b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf264e0(lVar4);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066c6ee4; end: 1066c703b; -[SCLensExplorerImageMediaDownloaderCache storeLensExplorerImage:forKey:] */

void FUN_1066c6ee4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((param_3 != 0) && ((int)puVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c095b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0680e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1066c703c;
    puStack_68 = &UNK_110848218;
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x000100a0df38(uVar2,&puStack_80);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066c703c; end: 1066c70bb;  */

void FUN_1066c703c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b69662c(0x42c80000,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0c4b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf264e0();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066c70bc; end: 1066c71df; -[SCLensExplorerImageMediaDownloaderCache lensExplorerImageForKey:preferredSize:] */

void FUN_1066c70bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1;
  func_0x00010c0c4b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf26f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1066c71e0;
  puStack_68 = &UNK_110934798;
  uStack_60 = param_3;
  uStack_58 = uVar4;
  _objc_retain(param_3);
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8640(lVar2,param_2,&puStack_80,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066c71e0; end: 1066c72af;  */

void FUN_1066c71e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d080(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ccf50;
    func_0x00010bfe73a0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ccf58;
    _objc_alloc(PTR_PTR_1126ccf58);
    func_0x00010c01c360();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066c72b0; end: 1066c72ff; -[SCLensExplorerImageMediaDownloaderCache cancelOperationsForKeys:] */

void FUN_1066c72b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0c4b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2eee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066c7300; end: 1066c732f; -[SCLensExplorerImageMediaDownloaderCache .cxx_destruct] */

void FUN_1066c7300(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c7330; end: 1066c7447; -[SCLensExplorerContentManagerMediaDownloader initWithMediaDownloader:lensPerformerProvider:storiesThumbnailCoordinator:imageScale:] */

undefined1 *
FUN_1066c7330(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  dVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f2748;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    if (0.0 < param_1) {
      *(double *)((long)puVar1 + 0x20) = param_1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      *(double *)((long)puVar1 + 0x20) = dVar4;
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c7448; end: 1066c748b; -[SCLensExplorerContentManagerMediaDownloader dealloc] */

void FUN_1066c7448(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dcc0();
  puStack_28 = PTR_PTR_1126f2748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1066c748c; end: 1066c7493; -[SCLensExplorerContentManagerMediaDownloader mediaDownloader] */

void FUN_1066c748c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1066c7494; end: 1066c749b; -[SCLensExplorerContentManagerMediaDownloader lensPerformerProvider] */

void FUN_1066c7494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1066c749c; end: 1066c75ff; -[SCLensExplorerContentManagerMediaDownloader downloadAnimationForLensExplorerItem:preferredSize:] */

void FUN_1066c749c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfe8fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066c7600;
  puStack_60 = &UNK_110915478;
  uVar2 = uVar1;
  uStack_58 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar4;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1066c76a0;
  puStack_88 = &UNK_1108ba408;
  uStack_80 = param_3;
  _objc_retain(param_3);
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b8640(puVar3,param_2,&puStack_a0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_80);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c7600; end: 1066c77ab;  */

void FUN_1066c7600(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c4b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4d3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be37480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c77ac; end: 1066c77fb;  */

uint FUN_1066c77ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ccf58;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 1066c77fc; end: 1066c792f; -[SCLensExplorerContentManagerMediaDownloader downloadImageWithURL:preferredSize:imageType:] */

void FUN_1066c77fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5e660(param_1,param_2,param_4);
  lVar1 = param_1;
  func_0x00010c0c4b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_1066c7930;
  puStack_60 = &UNK_1109347e8;
  uStack_58 = uVar4;
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8640(lVar2,param_2,&puStack_78,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066c7930; end: 1066c79df;  */

void FUN_1066c7930(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d080(*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ccf50;
    func_0x00010bfe73a0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066c79e0; end: 1066c7b73; -[SCLensExplorerContentManagerMediaDownloader downloadImageForStoryItem:preferredSize:imageType:] */

void FUN_1066c79e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  FUN_106692260(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1066c7b74;
  puStack_78 = &UNK_110853cf0;
  uStack_70 = param_3;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c11da60(uVar6,param_2,uVar2,PTR___dispatch_main_q_11034be20,&puStack_90);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar5;
  uStack_b0 = 0xc0000000;
  pcStack_a8 = FUN_1066c7b80;
  puStack_a0 = &UNK_1109347e8;
  uStack_98 = uVar7;
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0b8640(puVar3,param_2,&puStack_b8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066c7b74; end: 1066c7b7f;  */

void FUN_1066c7b74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1066c7b80; end: 1066c7c2f;  */

void FUN_1066c7b80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d080(*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ccf50;
    func_0x00010bfe73a0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066c7c30; end: 1066c7c7f; -[SCLensExplorerContentManagerMediaDownloader cancelDownloadForKeys:] */

void FUN_1066c7c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0c4b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2eee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066c7c80; end: 1066c7caf; -[SCLensExplorerContentManagerMediaDownloader cancelAllDownloads] */

void FUN_1066c7c80(undefined8 param_1)

{
  func_0x00010c0c4b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066c7cb0; end: 1066c7ddb; -[SCLensExplorerContentManagerMediaDownloader _imageModelFromContentResult:cacheKey:] */

void FUN_1066c7cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066c7ddc;
  puStack_60 = &UNK_110934808;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3,param_2,&puStack_78,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066c7ddc; end: 1066c7ebb;  */

void FUN_1066c7ddc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_2;
    func_0x00010bf4bc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d080(*(undefined8 *)(param_1 + 0x30),puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c0739e0();
    puVar3 = PTR_PTR_1126ccf58;
    _objc_alloc(PTR_PTR_1126ccf58);
    func_0x00010c01c360();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066c7ebc; end: 1066c7ec7; -[SCLensExplorerContentManagerMediaDownloader _mediaDownloaderContentTypeForImageType:] */

bool FUN_1066c7ebc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 < 2;
}



/* Entry: 1066c7ec8; end: 1066c7f03; -[SCLensExplorerContentManagerMediaDownloader .cxx_destruct] */

void FUN_1066c7ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c7f04; end: 1066c7f0f; +[SCLensExplorerLensHeroLayout metadataHeight] */

undefined8 FUN_1066c7f04(void)

{
  return 0x4050000000000000;
}



/* Entry: 1066c7f10; end: 1066c7f93; +[SCLensExplorerLensHeroLayout itemSizeForWidth:itemAspectRatio:] */

undefined1  [16] FUN_1066c7f10(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar3 = param_1;
  if (param_1 <= 0.0) {
    dVar3 = 0.0;
  }
  func_0x00010c0cc4a0();
  bVar1 = (long)ABS(param_2) + 0xfff0000000000000U >> 0x35 < 0x3ff;
  if (((-1 >= (long)param_2 || !bVar1) && 0xffffffffffffd < (long)param_2 - 1U) &&
      (-1 < (long)param_2 && bVar1 || (long)param_2 - 1U != 0xffffffffffffe)) {
    dVar2 = dVar3 / 1.7777777777777777 + param_1;
  }
  else {
    dVar2 = dVar3 / param_2;
    if (dVar3 / param_2 <= param_1) {
      dVar2 = param_1;
    }
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 1066c7f94; end: 1066c7fc7; +[SCLensExplorerLensHeroLayout previewSizeForCardSize:] */

undefined1  [16] FUN_1066c7f94(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  func_0x00010c0cc4a0();
  auVar2._8_8_ = param_2 - dVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1066c7fc8; end: 1066c8093; -[SCLensExplorerMockedCollectionCategoryProvider initWithBatchUpdateHandler:queryFactory:categoriesFactory:] */

undefined1 *
FUN_1066c7fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2750;
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



/* Entry: 1066c8094; end: 1066c809b; +[SCLensExplorerMockedCollectionCategoryProvider isAvailable] */

undefined8 FUN_1066c8094(void)

{
  return 0;
}



/* Entry: 1066c809c; end: 1066c836f; -[SCLensExplorerMockedCollectionCategoryProvider fetchLensCollectionCategoryWithCollectionId:] */

void FUN_1066c809c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccfd0;
  func_0x00010c0cf880();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1066c8370;
  uStack_80 = 0x1066c8380;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1066c8370;
  uStack_b0 = 0x1066c8380;
  uStack_a8 = 0;
  puVar2 = puVar1;
  func_0x00010bf332e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0bcf20(puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa7fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ccfd8;
  _objc_alloc(PTR_PTR_1126ccfd8);
  func_0x00010c003b80();
  puVar5 = PTR_PTR_1126ccfe0;
  _objc_alloc(PTR_PTR_1126ccfe0);
  func_0x00010c03c280();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1240(uVar3);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d0,8);
  lVar7 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 1066c8370; end: 1066c8387;  */

void FUN_1066c8370(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066c8388; end: 1066c85b7;  */

void FUN_1066c8388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126ccbc8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0430e0(puVar2,param_2,uVar3,PTR____NSArray0__struct_11034ab48);
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010bfa3d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf85d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar8,param_2,uVar3,uVar5,puVar1,0,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066c85b8; end: 1066c85f3; -[SCLensExplorerMockedCollectionCategoryProvider .cxx_destruct] */

void FUN_1066c85b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c85f4; end: 1066c8717; -[SCLensExplorerCollectionCategoryFetcher initWithLensCollectionDataProvider:responseParser:batchUpdateHandler:queryFactory:categoriesFactory:] */

undefined1 *
FUN_1066c85f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2758;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c8718; end: 1066c8833; -[SCLensExplorerCollectionCategoryFetcher fetchLensCollectionCategoryWithCollectionId:] */

void FUN_1066c8718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c135b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066c8834; end: 1066c8897;  */

void FUN_1066c8834(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be2b3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066c8898; end: 1066c8b4b; -[SCLensExplorerCollectionCategoryFetcher _handleLensCollectionResponse:] */

void FUN_1066c8898(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfa3c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0();
    _objc_release(puVar8);
    func_0x00010bfa01c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR_PTR_1126ccbc8;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010bfa3d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0430e0();
    _objc_release(lVar2);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar1;
    func_0x00010bfa3d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf85d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf333a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa7fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar8 = PTR_PTR_1126ccfd8;
    _objc_alloc(PTR_PTR_1126ccfd8);
    func_0x00010c003b80();
    puVar6 = PTR_PTR_1126ccfe0;
    _objc_alloc(PTR_PTR_1126ccfe0);
    func_0x00010c03c280();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1240(uVar4);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  _objc_release(puVar7);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + 0x28,0);
  _objc_storeStrong(lVar1 + 0x20,0);
  _objc_storeStrong(lVar1 + 0x18,0);
  _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 1066c8b4c; end: 1066c8b9f; -[SCLensExplorerCollectionCategoryFetcher .cxx_destruct] */

void FUN_1066c8b4c(long param_1)

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



/* Entry: 1066c8ba0; end: 1066c8cf3; -[SCLensExplorerCollectionDataProvider initWithHTTPMetadataService:httpRequestModifier:countryCodeProvider:performer:customBaseUrl:lensCoreVersionProvider:] */

undefined1 *
FUN_1066c8ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2760;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c8cf4; end: 1066c8f27; -[SCLensExplorerCollectionDataProvider requestLensCollectionWithId:] */

void FUN_1066c8cf4(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar9 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45300();
  puVar5 = PTR_PTR_1126ae558;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e59618;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c00e2e0();
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bfe9c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar1 = param_1;
    func_0x00010be365c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010be36480(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1066c8f28;
    puStack_78 = &UNK_1108a5660;
    puStack_70 = puVar2;
    _objc_retain(puVar2);
    uVar6 = uVar4;
    puVar7 = puVar1;
    puVar8 = puVar5;
    func_0x00010c25f600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    _objc_release(uVar10);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar5 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_70);
    _objc_release(puVar2);
    _objc_release(puVar3);
    param_6 = (undefined1 *)ppuVar9;
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  if (((puVar7 == (undefined *)0x0) && (puVar8 != (undefined *)0x0)) &&
     (param_6 == (undefined1 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s_completeWithValue__1125ae900,puVar8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_completeWithError__1125ae8d0,param_6);
  return;
}



/* Entry: 1066c8f28; end: 1066c8f47;  */

void FUN_1066c8f28(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  if (((param_3 == 0) && (param_5 != 0)) && (param_6 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_6);
  return;
}



/* Entry: 1066c8f48; end: 1066c8fa3; -[SCLensExplorerCollectionDataProvider _isValidCollectionId:] */

bool FUN_1066c8f48(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010c0b4ca0(param_3);
    bVar1 = lVar3 != 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1066c8fa4; end: 1066c92b7; -[SCLensExplorerCollectionDataProvider _httpRequestWithLensCollectionId:] */

void FUN_1066c8fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c078c00();
  if (((ulong)puVar1 & 1) == 0) {
    ppuVar13 = *(undefined ***)(param_1 + 0x30);
  }
  else {
    ppuVar13 = &PTR____CFConstantStringClassReference_110def498;
  }
  _objc_retain(ppuVar13);
  ppuVar2 = ppuVar13;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccfe8;
  _objc_opt_new(PTR_PTR_1126ccfe8);
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x00010c1bb200(puVar4);
  func_0x00010c222da0(puVar4);
  puVar5 = PTR_PTR_1126c0370;
  _objc_opt_new(PTR_PTR_1126c0370);
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2158a0(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184aa0(puVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010c1ebd80(puVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf90;
  func_0x00010bf04c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bbf90;
  func_0x00010c091f80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bbf90;
  func_0x00010c091f60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c091fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf225e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(ppuVar13);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066c92b8; end: 1066c92f3;  */

void FUN_1066c92b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066c92f4; end: 1066c93b3; -[SCLensExplorerCollectionDataProvider _httpContext] */

void FUN_1066c92f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b5730;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b560();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x38,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1066c93b4; end: 1066c941f; -[SCLensExplorerCollectionDataProvider .cxx_destruct] */

void FUN_1066c93b4(long param_1)

{
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



/* Entry: 1066c9420; end: 1066c957f; -[SCLensExplorerFeedLensesProvider initWithCategoriesProviderFactory:queryFactory:queryCoordinatorFactory:feedResponseObservable:] */

undefined1 *
FUN_1066c9420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f2768;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec6d20(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c9580; end: 1066c965b; -[SCLensExplorerFeedLensesProvider _subscribeOnFeedResponseObservable:] */

void FUN_1066c9580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066c965c; end: 1066c96eb;  */

void FUN_1066c965c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfa45e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c11d880(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be296e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066c96ec; end: 1066c9a57; -[SCLensExplorerFeedLensesProvider _handleFeeds:forQueryResult:] */

void FUN_1066c96ec(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puStack_130;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c137200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf4b900();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _os_unfair_lock_lock(param_1 + 0x28);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  ppuVar6 = &puStack_130;
  puVar1 = auStack_f0;
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,ppuVar6,puVar1,0x10);
  if (lVar5 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar15 = *(undefined ***)(lStack_128 + lVar13 * 8);
        ppuVar14 = ppuVar15;
        func_0x00010bfa3d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar15;
        func_0x00010c070480();
        if ((int)ppuVar6 != 0) {
          lVar7 = *(long *)(param_1 + 0x30);
          func_0x00010c0e00e0(lVar7,param_2,&PTR____CFConstantStringClassReference_110e59638);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 != 0) {
            _objc_release(ppuVar14);
            ppuVar14 = &PTR____CFConstantStringClassReference_110e59638;
          }
        }
        if ((int)puVar4 != 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110e59638;
          ppuVar8 = ppuVar14;
          func_0x00010c0720c0(ppuVar14,param_2,&PTR____CFConstantStringClassReference_110e59638);
          if (((ulong)ppuVar8 & 1) == 0) {
            _objc_release(ppuVar14);
            goto LAB_1066c99c8;
          }
        }
        lVar7 = *(long *)(param_1 + 0x30);
        func_0x00010c0e00e0(lVar7,param_2,ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar9 = param_1;
          func_0x00010be4c280(param_1,param_2,ppuVar15,ppuVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126ccff0;
          _objc_alloc(PTR_PTR_1126ccff0);
          puVar2 = param_4;
          func_0x00010c0cc0c0(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          func_0x00010bf4d6a0();
          func_0x00010c025d40(puVar10,param_2,lVar9,puVar1);
          _objc_release(puVar2);
          puVar11 = PTR_PTR_1126af5d0;
          func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(lVar7,param_2,puVar11);
          _objc_release(puVar11);
          puVar2 = param_4;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf4d6a0();
          _objc_release(puVar2);
          if (puVar3 == (undefined1 *)0x0) {
            func_0x00010bf436e0(lVar7);
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30),param_2,ppuVar14);
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38),param_2,ppuVar14);
          }
          _objc_release(puVar10);
          _objc_release(lVar9);
        }
        _objc_release(lVar7);
        _objc_release(ppuVar14);
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      ppuVar6 = &puStack_130;
      puVar1 = auStack_f0;
      lVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,ppuVar6,puVar1,0x10);
    } while (lVar5 != 0);
  }
LAB_1066c99c8:
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x28);
    __Unwind_Resume();
    _objc_retain(ppuVar6);
    _objc_retain(puVar1);
    lVar5 = param_3;
    func_0x00010be0ed00(param_3,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar5 = param_3;
      func_0x00010be91000(param_3,param_2,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc6c20(param_3,param_2,lVar5,ppuVar6,puVar1);
    }
    func_0x00010bddaf40(param_3,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ccff8;
    _objc_alloc(PTR_PTR_1126ccff8);
    func_0x00010c03fc40();
    _objc_release(param_3);
    _objc_release(lVar5);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 1066c9a58; end: 1066c9b3b; -[SCLensExplorerFeedLensesProvider lensesForFeedId:queryType:] */

void FUN_1066c9a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be0ed00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be91000(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc6c20(param_1,param_2,lVar1,param_3,param_4);
  }
  func_0x00010bddaf40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccff8;
  _objc_alloc(PTR_PTR_1126ccff8);
  func_0x00010c03fc40();
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066c9b3c; end: 1066c9b6f; -[SCLensExplorerFeedLensesProvider _feedLensesObservableKeyWithFeedId:] */

void FUN_1066c9b3c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e59638;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1066c9b70; end: 1066c9b9f; -[SCLensExplorerFeedLensesProvider _requestFeedWithFeedId:] */

void FUN_1066c9b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010be90aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be90b20();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066c9ba0; end: 1066c9d27; -[SCLensExplorerFeedLensesProvider _requestCategoriesBatch] */

void FUN_1066c9ba0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126cce30;
  func_0x00010bf68e20(PTR_PTR_1126cce30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf33180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf331c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c9d28; end: 1066c9de7;  */

void FUN_1066c9d28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1066c9de8; end: 1066c9e5f;  */

void FUN_1066c9de8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066c9e60; end: 1066c9fbb; -[SCLensExplorerFeedLensesProvider _requestCategoryWithFeedId:] */

void FUN_1066c9e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be78940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be12240(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c13cfe0(uVar2);
  _objc_retain(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c9fbc; end: 1066ca093;  */

void FUN_1066c9fbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1066ca094; end: 1066ca10b;  */

void FUN_1066ca094(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066ca10c; end: 1066ca213; -[SCLensExplorerFeedLensesProvider _prepareLensQueryCoordinatorWithFeedId:] */

void FUN_1066ca10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0965e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126cd000;
    _objc_alloc(PTR_PTR_1126cd000);
    func_0x00010c03c2c0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar1,param_3);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c137fe0(puVar1);
  }
  puVar4 = puVar1;
  func_0x00010c11d300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066ca214; end: 1066ca2ab; -[SCLensExplorerFeedLensesProvider _fetchLensesQueryForFeedId:] */

void FUN_1066ca214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ccbc8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0430e0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa7fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066ca2ac; end: 1066ca343; -[SCLensExplorerFeedLensesProvider _feedObservableForId:] */

void FUN_1066ca2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = param_1;
  func_0x00010be0ec80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066ca344; end: 1066ca40b; -[SCLensExplorerFeedLensesProvider _addFeedObservable:forFeedId:queryType:] */

void FUN_1066ca344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = param_1;
  func_0x00010be0ec80(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,param_3,lVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,param_5,lVar1);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ca40c; end: 1066ca49b; -[SCLensExplorerFeedLensesProvider _removeFeedObservableForId:] */

void FUN_1066ca40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = param_1;
  func_0x00010be0ec80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30),param_2,lVar1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38),param_2,lVar1);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ca49c; end: 1066ca5f7; -[SCLensExplorerFeedLensesProvider _cancelTokenForFeedId:] */

void FUN_1066ca49c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x28);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf54fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bffae00(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066ca5f8; end: 1066ca633;  */

void FUN_1066ca5f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8c0a0();
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066ca634; end: 1066ca7fb; -[SCLensExplorerFeedLensesProvider _lensesFromFeed:withId:] */

void FUN_1066ca634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c8b38;
    func_0x00010beffb20(PTR_PTR_1126c8b38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0bc7c0(puVar2);
  uVar3 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066ca7fc; end: 1066ca82f;  */

void FUN_1066ca7fc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x7fffffffffffffff;
  return;
}



/* Entry: 1066ca830; end: 1066ca947;  */

void FUN_1066ca830(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_1066ca948;
  uStack_30 = 0x1066ca958;
  uStack_28 = 0;
  func_0x00010c0be960(param_2);
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



/* Entry: 1066ca948; end: 1066ca95f;  */

void FUN_1066ca948(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066ca960; end: 1066caa07;  */

void FUN_1066ca960(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010be4c260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1066caa08; end: 1066caa57;  */

void FUN_1066caa08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4c260(uVar1,param_2,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066caa58; end: 1066caad7; -[SCLensExplorerFeedLensesProvider _lensesFromContainer:itemsLimit:] */

void FUN_1066caa58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x00010c084fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010c099060(uVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066caad8; end: 1066cabbf;  */

void FUN_1066caad8(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_1066ca948;
  uStack_30 = 0x1066ca958;
  uStack_28 = 0;
  func_0x00010c0be980(param_2);
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



/* Entry: 1066cabc0; end: 1066cabf7;  */

void FUN_1066cabc0(long param_1,undefined8 param_2)

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



/* Entry: 1066cabf8; end: 1066cac6f; -[SCLensExplorerFeedLensesProvider .cxx_destruct] */

void FUN_1066cabf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cac70; end: 1066cad03; -[SCLensExplorerFeedLensesQueryCoordinatorState initWithQueryCoordinator:] */

undefined1 * FUN_1066cac70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2770;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cad04; end: 1066cae6b; -[SCLensExplorerFeedLensesQueryCoordinatorState createCancelToken] */

void FUN_1066cad04(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3042000000;
  pcStack_50 = FUN_1066cae6c;
  uStack_48 = 0x1066cae78;
  _objc_initWeak(auStack_40,0);
  puVar1 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  _objc_copyWeak(auStack_70,auStack_38);
  func_0x00010bffae00(puVar1);
  _objc_storeWeak(puStack_60 + 5,puVar1);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_destroyWeak(auStack_70);
  __Block_object_dispose(&uStack_68,8);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066cae6c; end: 1066cae7f;  */

void FUN_1066cae6c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1066cae80; end: 1066caed3;  */

void FUN_1066cae80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010becd040(lVar1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066caed4; end: 1066caf0b; -[SCLensExplorerFeedLensesQueryCoordinatorState reset] */

void FUN_1066caed4(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066caf0c; end: 1066caf77; -[SCLensExplorerFeedLensesQueryCoordinatorState _tokenCancelled:] */

void FUN_1066caf0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    _os_unfair_lock_unlock(param_1 + 0x10);
    if (lVar1 == 0) {
      func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x18));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066caf78; end: 1066caf7f; -[SCLensExplorerFeedLensesQueryCoordinatorState queryCoordinator] */

undefined8 FUN_1066caf78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1066caf80; end: 1066cafaf; -[SCLensExplorerFeedLensesQueryCoordinatorState .cxx_destruct] */

void FUN_1066caf80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cafb0; end: 1066cb0ab; -[SCLensExplorerBannerCellManager initWithBannerModel:layoutBuilder:actionHandler:sectionId:] */

undefined1 *
FUN_1066cafb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2778;
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



/* Entry: 1066cb0ac; end: 1066cb0b7; -[SCLensExplorerBannerCellManager reuseIdentifier] */

undefined ** FUN_1066cb0ac(void)

{
  return &PTR____CFConstantStringClassReference_110e59658;
}



/* Entry: 1066cb0b8; end: 1066cb137; -[SCLensExplorerBannerCellManager identifierToCellClassMap] */

void FUN_1066cb0b8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cd008;
  _objc_opt_class();
  ppuVar5 = &puStack_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar2 = PTR_PTR_1126cd008;
  _objc_opt_class(PTR_PTR_1126cd008);
  ppuVar4 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar2);
  ppuVar1 = ppuVar5;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00010c161980(ppuVar5);
    func_0x00010c1b9a40(ppuVar5);
    func_0x00010bee99c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222900(ppuVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 1066cb138; end: 1066cb1e3; -[SCLensExplorerBannerCellManager configureCollectionViewCell:] */

void FUN_1066cb138(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cd008;
  _objc_opt_class(PTR_PTR_1126cd008);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c161980(param_3);
    func_0x00010c1b9a40(param_3);
    func_0x00010bee99c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222900(param_3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066cb1e4; end: 1066cb30f; -[SCLensExplorerBannerCellManager _viewModelObservableFromBannerModel:] */

void FUN_1066cb1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08c7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar2 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1066cb310;
  puStack_58 = &UNK_1109349b8;
  uVar3 = uVar2;
  uStack_50 = uVar1;
  uStack_48 = uVar5;
  func_0x00010c0b8600(uVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ccb10;
  func_0x00010bee9a40(PTR_PTR_1126ccb10,param_2,0,uVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2519e0(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066cb310; end: 1066cb327;  */

void FUN_1066cb310(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee9a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccb10,PTR_s__viewModelWithBannerViewModel_dy_112598038,param_2,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066cb328; end: 1066cb42b; +[SCLensExplorerBannerCellManager _viewModelWithBannerViewModel:dynamicLayout:sectionId:] */

void FUN_1066cb328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cc910;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c093ee0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbbc40();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ccd40;
  _objc_alloc(PTR_PTR_1126ccd40);
  func_0x00010c01d7e0();
  puVar2 = PTR_PTR_1126cd010;
  _objc_alloc(PTR_PTR_1126cd010);
  func_0x00010c021c40(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cb42c; end: 1066cb473; -[SCLensExplorerBannerCellManager .cxx_destruct] */

void FUN_1066cb42c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cb474; end: 1066cb58b; -[SCLensExplorerBannerSectionViewModel initWithSectionConfiguration:sectionLayoutConfiguration:sectionHeaderProvider:cellManager:] */

undefined1 *
FUN_1066cb474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f2780;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cb58c; end: 1066cb5b3; -[SCLensExplorerBannerSectionViewModel sectionConfiguration] */

void FUN_1066cb58c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cb5b4; end: 1066cb5db; -[SCLensExplorerBannerSectionViewModel sectionLayoutConfiguration] */

void FUN_1066cb5b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cb5dc; end: 1066cb5e3; -[SCLensExplorerBannerSectionViewModel identifierToCellClassMap] */

void FUN_1066cb5dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_identifierToCellClassMap_1125d71a0);
  return;
}


