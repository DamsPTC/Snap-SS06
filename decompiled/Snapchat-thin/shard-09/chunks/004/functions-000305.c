/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d7bc80; end: 106d7beb7;  */

void FUN_106d7bc80(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  func_0x00010bf8cb40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79260(*(undefined8 *)(param_1 + 0x20),param_2,uVar2,*(undefined8 *)(param_1 + 0x30),
                      0);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010bf31200(lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c179260(*(undefined8 *)(param_1 + 0x30),param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(ulong *)(param_1 + 0x28);
  func_0x00010c270d80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c4300();
  _objc_release(uVar5);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (uVar6 == 0) {
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf655e0((double)uVar6 / 1000.0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1856c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar7);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1d2c0(uVar8,param_2,*(undefined8 *)(param_1 + 0x28),uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c27dd80();
  _objc_release(uVar9);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000107e629bc();
  if ((iVar1 == 0) || ((int)uVar10 == 1)) {
    func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x30),param_2,1);
    func_0x00010c16c080(*(undefined8 *)(param_1 + 0x30),param_2,1);
    func_0x00010c221ca0(*(undefined8 *)(param_1 + 0x30),param_2,1);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be21a00(uVar9,param_2,*(undefined8 *)(param_1 + 0x28),uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x30),param_2,uVar9);
  }
  else {
    func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x30),param_2,0);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be219e0(uVar9,param_2,*(undefined8 *)(param_1 + 0x28),uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1660(*(undefined8 *)(param_1 + 0x30),param_2,uVar9);
  }
  _objc_release(uVar9);
  func_0x00010bea79a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010beaba20(*(undefined8 *)(param_1 + 0x20),param_2,uVar2,0,0,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d7beb8; end: 106d7bf87; -[SCGalleryPreviewController _applySpotlightPreselectFromReplyConfiguration:toLegacyConfig:] */

void FUN_106d7beb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106d7bf58;
  puStack_30 = &UNK_11097a648;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c0bcaa0(param_3,param_2,&puStack_48,0,0,0,0,0,0,0,0,0,0);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d7bf88; end: 106d7c56f; -[SCGalleryPreviewController presentPreviewWithPhotoAsset:fromViewController:shouldShowPostStorySelection:transitioningDelegate:animated:userContext:preselectedPreviewTool:memoriesCRFeaturedStory:replyConfiguration:musicSelection:triggeringSection:] */

void FUN_106d7bf88(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    puVar1 = PTR_PTR_1126c3290;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar7);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
    uVar7 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106d7c570;
    puStack_88 = &UNK_1108471b0;
    _objc_retain(param_4);
    uStack_80 = param_4;
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined1 *)(param_1 + 0x40) = 1;
    lVar2 = param_3;
    func_0x00010c0c6c20();
    if (lVar2 == 2) {
      _objc_initWeak(auStack_128,param_1);
      puVar1 = PTR_PTR_1126ae560;
      _objc_opt_new();
      lVar2 = param_3;
      func_0x000107f700a0(param_3,*(undefined8 *)(param_1 + 200));
      if ((int)lVar2 == 0) {
        uStack_188 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_190 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_178 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_180 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_168 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_170 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43d60(puVar1);
      }
      else {
        puVar3 = *(undefined **)(param_1 + 0x78);
        func_0x00010c29a4c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c6630;
        _objc_opt_new();
        puVar4 = puVar6;
        func_0x00010bf165a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x128);
        *(undefined **)(param_1 + 0x128) = puVar5;
        _objc_release(uVar7);
        puVar5 = puVar6;
        func_0x00010bdc0da0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x80);
        *(undefined **)(param_1 + 0x80) = puVar5;
        _objc_release(uVar7);
        uVar7 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010bfbc3e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_106d7cf64;
        puStack_148 = &UNK_11097a768;
        _objc_copyWeak(auStack_130,auStack_128);
        _objc_retain(param_4);
        puVar5 = puVar1;
        uStack_140 = param_4;
        _objc_retain(puVar1);
        puStack_138 = puVar1;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar7);
        _objc_release(puVar5);
        _objc_release(uVar7);
        _objc_release(puStack_138);
        _objc_release(uStack_140);
        _objc_destroyWeak(auStack_130);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(puVar6);
      puVar6 = puVar1;
      func_0x00010bfbc3e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_1c0,auStack_128);
      _objc_retain(param_3);
      _objc_retain(param_4);
      uStack_198 = param_5;
      _objc_retain(param_6);
      uStack_1a8 = param_9;
      uStack_1b8 = param_7;
      uStack_1b0 = param_8;
      _objc_retain(param_10);
      _objc_retain(param_11);
      uVar7 = param_12;
      _objc_retain(param_12);
      uStack_1a0 = param_13;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar6);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(param_12);
      _objc_release(param_11);
      _objc_release(param_10);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_1c0);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_128);
    }
    else if (lVar2 == 1) {
      uVar7 = *(undefined8 *)(param_1 + 0x98);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_106d7c5f8;
      puStack_108 = &UNK_11097a708;
      lStack_100 = param_1;
      _objc_retain(param_3);
      lStack_f8 = param_3;
      _objc_retain(param_4);
      uStack_f0 = param_4;
      uStack_a8 = param_5;
      _objc_retain(param_6);
      uStack_b8 = param_9;
      uStack_e8 = param_6;
      uStack_c8 = param_7;
      uStack_c0 = param_8;
      _objc_retain(param_10);
      uStack_e0 = param_10;
      _objc_retain(param_11);
      uStack_d8 = param_11;
      _objc_retain(param_12);
      uStack_d0 = param_12;
      uStack_b0 = param_13;
      func_0x00010c0f7fc0(uVar7);
      _objc_release(uStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
      _objc_release(uStack_f0);
      _objc_release(lStack_f8);
    }
    _objc_release(uStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d7c570; end: 106d7c5f7;  */

void FUN_106d7c570(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d7c5f8; end: 106d7c77b;  */

void FUN_106d7c5f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106d7c77c;
  puStack_a0 = &UNK_11097a6d8;
  _objc_copyWeak(auStack_68,auStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar2;
  _objc_retain(uVar4);
  uStack_40 = *(undefined1 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar4;
  _objc_retain(uVar2);
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar2;
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar4;
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar2;
  _objc_retain(uVar4);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = uVar4;
  func_0x000107f6f148(uVar3,0,&puStack_b8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = uVar3;
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d7c77c; end: 106d7c973;  */

void FUN_106d7c77c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
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
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106d7c974;
    puStack_70 = &UNK_110842e18;
    lStack_68 = lVar2;
    func_0x00010c0f7fc0(*(undefined8 *)(lVar2 + 0x98));
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_106d7c9a8;
    puStack_110 = &UNK_11097a6a8;
    lStack_108 = lVar2;
    _objc_retain(param_2);
    uStack_100 = param_2;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_f8 = param_3;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_f0 = uVar3;
    _objc_retain(uVar4);
    uStack_90 = *(undefined1 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_e8 = uVar4;
    uStack_b8 = param_5;
    _objc_retain(uVar3);
    uStack_a8 = *(undefined8 *)(param_1 + 0x60);
    uStack_b0 = *(undefined8 *)(param_1 + 0x58);
    uStack_a0 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uStack_e0 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uStack_d8 = uVar4;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_d0 = uVar3;
    _objc_retain(uVar4);
    uStack_98 = *(undefined8 *)(param_1 + 0x70);
    uStack_c8 = uVar4;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_128);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d7c974; end: 106d7c9a7;  */

void FUN_106d7c974(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = 0;
  return;
}



/* Entry: 106d7c9a8; end: 106d7cd1f;  */

void FUN_106d7c9a8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1e46a0(0x3f800000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),param_2,1);
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x30) == 0)) {
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e85a78;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar7 = *(long *)(param_1 + 0x20) + 0x1f0;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bfbd380();
    _objc_release(lVar7);
    _objc_release();
  }
  else {
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106d7cd20;
    uStack_88 = 0x106d7cd30;
    puStack_80 = (undefined *)0x0;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_106d7cd38;
    puStack_130 = &UNK_11097a678;
    uStack_128 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puStack_a0 = &uStack_a8;
    _objc_retain(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_120 = uVar2;
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_118 = uVar6;
    _objc_retain(uVar2);
    uStack_d8 = *(undefined8 *)(param_1 + 0x70);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uStack_110 = uVar2;
    puStack_e0 = &uStack_a8;
    _objc_retain(uVar6);
    uStack_b0 = *(undefined1 *)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uStack_108 = uVar6;
    _objc_retain(uVar2);
    uStack_c8 = *(undefined8 *)(param_1 + 0x80);
    uStack_d0 = *(undefined8 *)(param_1 + 0x78);
    uStack_c0 = *(undefined8 *)(param_1 + 0x88);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uStack_100 = uVar2;
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uStack_f8 = uVar6;
    _objc_retain(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    uStack_f0 = uVar2;
    _objc_retain(uVar6);
    uStack_b8 = *(undefined8 *)(param_1 + 0x90);
    ppuVar3 = &puStack_148;
    uStack_e8 = uVar6;
    _objc_retainBlock();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010beb5240();
    if ((iVar1 == 0) || (lVar7 = *(long *)(param_1 + 0x68), lVar7 == 0)) {
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
      _objc_retain(lVar7);
      _objc_retain(ppuVar3);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(ppuVar3);
      _objc_release(lVar7);
    }
    _objc_release(ppuVar3);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    __Block_object_dispose(&uStack_a8,8);
    puVar5 = puStack_80;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 106d7cd20; end: 106d7cd37;  */

void FUN_106d7cd20(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d7cd38; end: 106d7cdab;  */

void FUN_106d7cd38(long param_1)

{
  func_0x00010be7da40(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),0,0,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28),0);
  return;
}



/* Entry: 106d7cdac; end: 106d7cf57;  */

void FUN_106d7cdac(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 106d7cf58; end: 106d7cf63;  */

void FUN_106d7cf58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d7cf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106d7cf64; end: 106d7d067;  */

void FUN_106d7cf64(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 *)(lVar1 + 0x80) = 0;
      _objc_release(uVar2);
      lVar3 = lVar1 + 0x1f0;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bfbd380();
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar3);
      func_0x00010be48800(lVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d7d068; end: 106d7d187;  */

void FUN_106d7d068(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e85a98;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf43ca0(uVar4);
    _objc_release(puVar2);
  }
  else {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_68 = param_3[3];
    uStack_70 = param_3[2];
    uStack_58 = param_3[5];
    uStack_60 = param_3[4];
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf43d60(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  puVar2 = puVar1 + 0x50;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    if (puVar3 == (undefined *)0x0) {
      if (param_2 == 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
      }
      else {
        func_0x00010bdc1120(param_2);
      }
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_106d7d3bc;
      puStack_130 = &UNK_1108dd2b8;
      _objc_copyWeak(auStack_128,puVar1 + 0x50);
      _objc_copyWeak(auStack_178,puVar1 + 0x50);
      uVar4 = *(undefined8 *)(puVar1 + 0x28);
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(puVar1 + 0x20);
      _objc_retain(uVar5);
      uStack_150 = puVar1[0x78];
      uVar6 = *(undefined8 *)(puVar1 + 0x30);
      _objc_retain(uVar6);
      uStack_168 = *(undefined8 *)(puVar1 + 0x60);
      uStack_170 = *(undefined8 *)(puVar1 + 0x58);
      uStack_160 = *(undefined8 *)(puVar1 + 0x68);
      uVar7 = *(undefined8 *)(puVar1 + 0x38);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(puVar1 + 0x40);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(puVar1 + 0x48);
      _objc_retain(uVar9);
      uStack_158 = *(undefined8 *)(puVar1 + 0x70);
      func_0x00010be37d20(puVar2);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_128);
    }
    else {
      uVar4 = *(undefined8 *)(puVar2 + 0x80);
      *(undefined8 *)(puVar2 + 0x80) = 0;
      _objc_release(uVar4);
      func_0x00010c12c960(*(undefined8 *)(puVar2 + 0x50));
      uVar4 = *(undefined8 *)(puVar2 + 0x50);
      *(undefined8 *)(puVar2 + 0x50) = 0;
      _objc_release(uVar4);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d7d188; end: 106d7d3bb;  */

void FUN_106d7d188(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bdc1120(param_2);
      }
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_106d7d3bc;
      puStack_b0 = &UNK_1108dd2b8;
      _objc_copyWeak(auStack_a8,param_1 + 0x50);
      _objc_copyWeak(auStack_f8,param_1 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uStack_d0 = *(undefined1 *)(param_1 + 0x78);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar4);
      uStack_e8 = *(undefined8 *)(param_1 + 0x60);
      uStack_f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_e0 = *(undefined8 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar7);
      uStack_d8 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010be37d20(lVar1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_a8);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 *)(lVar1 + 0x80) = 0;
      _objc_release(uVar2);
      func_0x00010c12c960(*(undefined8 *)(lVar1 + 0x50));
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      *(undefined8 *)(lVar1 + 0x50) = 0;
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d7d3bc; end: 106d7d403;  */

void FUN_106d7d3bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010c1e46a0(param_1,*(undefined8 *)(param_2 + 0x50),param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d7d404; end: 106d7d62f;  */

void FUN_106d7d404(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  undefined *param_5,long param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
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
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  puVar8 = param_4;
  puVar3 = param_5;
  lVar9 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e46a0(0x3f800000,*(undefined8 *)(lVar1 + 0x50));
    func_0x00010c12c960(*(undefined8 *)(lVar1 + 0x50));
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_2 == (undefined8 *)0x0) || (param_3 == 0)) {
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e85a78;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar5 = lVar1 + 0x1f0;
      _objc_loadWeakRetained(lVar5);
      puVar8 = *(undefined8 **)(param_1 + 0x20);
      lVar7 = lVar1;
      puVar3 = puVar4;
      func_0x00010bfbd380();
      _objc_release(lVar5);
      _objc_release(puVar4);
    }
    else {
      uStack_d0 = *(undefined8 *)(param_1 + 0x20);
      lVar7 = *(long *)(param_1 + 0x28);
      uStack_c8 = *(undefined1 *)(param_1 + 0x78);
      uStack_b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_b0 = *(undefined8 *)(param_1 + 0x60);
      uStack_c0 = *(undefined8 *)(param_1 + 0x30);
      uStack_a0 = *(undefined8 *)(param_1 + 0x38);
      uStack_98 = *(undefined8 *)(param_1 + 0x40);
      uStack_88 = *(undefined8 *)(param_1 + 0x48);
      uStack_a8 = *(undefined8 *)(param_1 + 0x68);
      uStack_80 = *(undefined8 *)(param_1 + 0x70);
      uStack_90 = param_9;
      uStack_e0 = SUB84(param_5,0);
      puVar8 = param_2;
      puVar3 = param_8;
      lVar9 = param_3;
      uStack_d8 = param_7;
      func_0x00010be7da40(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_120 = param_9;
  pcStack_e8 = FUN_106d7d630;
  puStack_118 = param_8;
  lStack_110 = param_6;
  puStack_108 = param_4;
  lStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar7);
  _objc_retain(puVar3);
  _objc_retain(lVar9);
  _objc_initWeak(auStack_128,puVar6);
  uVar2 = puVar6[0x13];
  _objc_copyWeak(auStack_160,auStack_128);
  _objc_retain(lVar9);
  _objc_retain(lVar7);
  uStack_150 = puVar8[1];
  uStack_158 = *puVar8;
  uStack_140 = puVar8[3];
  uStack_148 = puVar8[2];
  uStack_130 = puVar8[5];
  uStack_138 = puVar8[4];
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_128);
  _objc_release(lVar9);
  _objc_release(puVar3);
  _objc_release(lVar7);
  return;
}



/* Entry: 106d7d630; end: 106d7d777; -[SCGalleryPreviewController _importVideoAsset:timeRange:progress:completion:] */

void FUN_106d7d630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_copyWeak(auStack_80,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uStack_70 = param_4[1];
  uStack_78 = *param_4;
  uStack_60 = param_4[3];
  uStack_68 = param_4[2];
  uStack_50 = param_4[5];
  uStack_58 = param_4[4];
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d7d778; end: 106d7d8cf;  */

void FUN_106d7d778(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0,0,0,0,0,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106d7d8d0;
    puStack_98 = &UNK_11097a8b8;
    _objc_copyWeak(auStack_78,param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_88 = uVar3;
    _objc_retain(uVar4);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = uVar4;
    _objc_retain(uVar3);
    uStack_80 = uVar3;
    func_0x000107f6f478(uVar2,&puStack_b0);
    *(undefined8 *)(lVar1 + 0x68) = uVar2;
    _objc_release(uStack_80);
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d7d8d0; end: 106d7dc17;  */

void FUN_106d7d8d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    _objc_release(uVar2);
    if (((param_2 != 0) && (param_3 != 0)) && (*(long *)(lVar1 + 0x50) != 0)) {
      lVar3 = *(long *)(lVar1 + 0x78);
      func_0x00010c29a4c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar5 = PTR_PTR_1126c6630;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)(lVar1 + 0x158);
      func_0x00010c27d8a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c240b60();
      func_0x00010c1ee760(puVar5);
      _objc_release(uVar2);
      lVar3 = lVar4;
      func_0x00010bf165a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(lVar1 + 0x80);
      if (lVar7 == 0) {
        lVar7 = lVar4;
        func_0x00010bdc0da0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = *(long *)(lVar1 + 0x80);
        *(long *)(lVar1 + 0x80) = lVar7;
LAB_106d7da8c:
        _objc_release(lVar8);
        lVar7 = *(long *)(lVar1 + 0x80);
      }
      else {
        lVar9 = *(long *)(lVar1 + 0x128);
        if (lVar9 != 0) {
          _objc_retain(lVar9);
          lVar8 = lVar6;
          lVar6 = lVar9;
          goto LAB_106d7da8c;
        }
      }
      func_0x00010bfbc3e0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a0,param_1 + 0x38);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      _objc_retain(lVar4);
      uStack_90 = *(undefined8 *)(param_1 + 0x48);
      uStack_98 = *(undefined8 *)(param_1 + 0x40);
      uStack_80 = *(undefined8 *)(param_1 + 0x58);
      uStack_88 = *(undefined8 *)(param_1 + 0x50);
      uStack_70 = *(undefined8 *)(param_1 + 0x68);
      uStack_78 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain(puVar5);
      _objc_retain(lVar3);
      _objc_retain(lVar6);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar11);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      lVar8 = param_2;
      _objc_retain(param_2);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(param_2);
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_a0);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(lVar4);
      goto LAB_106d7da20;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0,0,0,0,0,0);
LAB_106d7da20:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d7dc18; end: 106d7de9f;  */

void FUN_106d7dc18(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x128);
    *(undefined8 *)(lVar1 + 0x128) = 0;
    _objc_release(uVar2);
    if ((param_2 != 0) && (param_3 == 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x80);
      func_0x00010bf2f5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c06e0e0();
      _objc_release(uVar3);
      if ((int)uVar2 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uStack_78 = *(undefined8 *)(param_1 + 0x70);
        uStack_80 = *(undefined8 *)(param_1 + 0x68);
        uStack_68 = *(undefined8 *)(param_1 + 0x80);
        uStack_70 = *(undefined8 *)(param_1 + 0x78);
        uStack_58 = *(undefined8 *)(param_1 + 0x90);
        uStack_60 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010bf9d400();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(lVar1 + 0x88);
        *(undefined8 *)(lVar1 + 0x88) = uVar2;
        _objc_release(uVar3);
        uVar5 = *(undefined8 *)(lVar1 + 0x88);
        _objc_retain(uVar5);
        uVar3 = *(undefined8 *)(lVar1 + 0x88);
        func_0x00010bfbc3e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_88,param_1 + 0x60);
        uVar6 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(uVar6);
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar7);
        _objc_retain(param_2);
        _objc_retain(uVar5);
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar8);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar2 = uVar4;
        _objc_retain(uVar4);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar3);
        uVar2 = *(undefined8 *)(lVar1 + 0x80);
        *(undefined8 *)(lVar1 + 0x80) = 0;
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(uVar5);
        _objc_release(param_2);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_88);
        _objc_release(uVar5);
        goto LAB_106d7dcd4;
      }
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    _objc_release(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),0,0,0,0,0,0,0,0);
LAB_106d7dcd4:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d7dea0; end: 106d7e1b7;  */

void FUN_106d7dea0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))(*(long *)(param_3 + 0x48),0,0,0,0,0,0,0,0);
    goto LAB_106d7e168;
  }
  lVar2 = param_4;
  func_0x00010bf9d420();
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == 0) && (lVar2 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010bf2f5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06e0e0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) goto LAB_106d7df34;
    puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c057ae0();
    if (puVar5 == (undefined *)0x0) {
      lVar7 = *(long *)(param_3 + 0x48);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,0,0,0,0,0,0,0,0);
      }
    }
    else {
      puVar6 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      func_0x000107f703c4(puVar5);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_106d7e1b8;
      puStack_c0 = &UNK_11097a828;
      _objc_copyWeak(auStack_78,param_3 + 0x50);
      uVar4 = *(undefined8 *)(param_3 + 0x48);
      _objc_retain(uVar4);
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      uStack_80 = uVar4;
      _objc_retain(uVar8);
      uStack_b8 = uVar8;
      _objc_retain(param_4);
      uVar4 = *(undefined8 *)(param_3 + 0x30);
      lStack_b0 = param_4;
      _objc_retain(uVar4);
      uVar8 = *(undefined8 *)(param_3 + 0x38);
      uStack_a8 = uVar4;
      _objc_retain(uVar8);
      uStack_a0 = uVar8;
      _objc_retain(puVar5);
      puStack_98 = puVar5;
      _objc_retain(lVar2);
      uVar4 = *(undefined8 *)(param_3 + 0x40);
      lStack_90 = lVar2;
      _objc_retain(uVar4);
      uStack_88 = uVar4;
      func_0x000107fe9568(param_1,param_2,puVar6,uVar3,1,1,&puStack_d8);
      _objc_release(puVar6);
      _objc_release(uStack_88);
      _objc_release(lStack_90);
      _objc_release(puStack_98);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(lStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_78);
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  else {
LAB_106d7df34:
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    _objc_release(uVar4);
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))(*(long *)(param_3 + 0x48),0,0,0,0,0,0,0,0);
  }
  _objc_release(lVar2);
LAB_106d7e168:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d7e1b8; end: 106d7e31b;  */

void FUN_106d7e1b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d7e31c;
  puStack_88 = &UNK_11097a7f8;
  _objc_copyWeak(auStack_38,param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar3;
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d7e31c; end: 106d7e40f;  */

void FUN_106d7e31c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar5 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar5 == 0) {
    (**(code **)(*(long *)(param_1 + 0x60) + 0x10))(*(long *)(param_1 + 0x60),0,0,0,0,0,0,0,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107f72060(uVar6);
    iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c07e400();
    uVar1 = 0;
    if (iVar4 == 0) {
      uVar1 = uVar6;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf8dc60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf9e3a0(uVar8);
    (**(code **)(lVar9 + 0x10))
              (lVar9,uVar3,uVar6,uVar2,uVar8,uVar7,uVar1,*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58));
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106d7e410; end: 106d7e7a7; -[SCGalleryPreviewController presentPreviewForQuickSendWithGalleryEntry:gallerySnap:cloudFiles:snapAssetCloudFiles:entryAssetCloudFiles:snapDoc:fromViewController:prefilledCaption:recipientName:recipientDisplayName:recipientUserId:recipientIsChatGroup:userContext:replyConfiguration:musicSelection:triggeringSection:] */

void FUN_106d7e410(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined1 param_14)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long lStack_118;
  undefined *puStack_f0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puStack_f0 = (undefined *)0x0;
    }
    else {
      lStack_118 = param_4;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_88 = lStack_118;
      lStack_80 = param_6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_80,&lStack_88,1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = param_7;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      func_0x00010be7d8a0(param_1,param_2,param_3,puVar1,param_4,param_5,puStack_f0,0,0,param_10,
                          param_11,param_12,param_13,param_14);
    }
    else {
      lVar3 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_98 = lVar3;
      lStack_90 = param_7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_90,&lStack_98,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7d8a0(param_1,param_2,param_3,puVar1,param_4,param_5,puStack_f0,puVar4,0,
                          param_10,param_11,param_12,param_13,param_14);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    if (lVar2 != 0) {
      _objc_release(puStack_f0);
      _objc_release(lStack_118);
    }
    _objc_release(puVar1);
  }
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_3 + 0x41) = 1;
  return;
}



/* Entry: 106d7e7a8; end: 106d7e7b3; -[SCGalleryPreviewController _previewViewControllerWillPresent] */

void FUN_106d7e7a8(long param_1)

{
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}



/* Entry: 106d7e7b4; end: 106d7e81b; -[SCGalleryPreviewController didCancelFromPreview:] */

void FUN_106d7e7b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x1f0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0a7200();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 106d7e81c; end: 106d7e8df; -[SCGalleryPreviewController didSendChatMessage] */

void FUN_106d7e81c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x40) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf844d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x1e8),PTR_s_dismissSend_1125bead8);
    return;
  }
  lVar1 = param_1 + 0x1f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_1 + 0x1f8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar1 = param_1 + 0x1f8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf7b400();
      _objc_release(lVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    _objc_release(uVar4);
    func_0x00010be8cee0(param_1);
    *(undefined1 *)(param_1 + 0x41) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 106d7e8e0; end: 106d7e967; -[SCGalleryPreviewController didPostStoryWithStoryTypes:] */

void FUN_106d7e8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x1f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010be03180(param_1);
  }
  else {
    param_1 = param_1 + 0x1f8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d7e968; end: 106d7e9f7; -[SCGalleryPreviewController didSendSnapsAndPostToStory:storyTypes:] */

void FUN_106d7e968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar1 = param_1 + 0x1f8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010be03180(param_1);
    }
    else {
      param_1 = param_1 + 0x1f8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf7b520();
      _objc_release(param_1);
    }
  }
  else {
    func_0x00010bf844c0(*(undefined8 *)(param_1 + 0x1e8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d7e9f8; end: 106d7eabf; -[SCGalleryPreviewController previewViewControllerDidExitSaveAsCopy:copySaved:] */

void FUN_106d7e9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  func_0x00010be031c0(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d7eac0; end: 106d7eb03;  */

void FUN_106d7eac0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    func_0x00010be7ff80(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d7eb04; end: 106d7eb83; -[SCGalleryPreviewController _previewViewControllerDidExitSaveAsCopy] */

void FUN_106d7eb04(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d7eb84; end: 106d7ec63; -[SCGalleryPreviewController didSaveAndDismissIfNeeded:fromViewController:] */

void FUN_106d7eb84(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106d7ec64;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106d7ec64; end: 106d7eca3;  */

void FUN_106d7ec64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be00080(lVar1,param_2,*(undefined1 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d7eca4; end: 106d7eddf; -[SCGalleryPreviewController _didSaveAndDismissIfNeededOnMainThread:fromViewController:] */

void FUN_106d7eca4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x000108df7438(param_4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x1e8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar3);
    func_0x00010be031c0(param_1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106d7ede0; end: 106d7ee6f;  */

void FUN_106d7ede0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbd360();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d7ee70; end: 106d7ee73; -[SCGalleryPreviewController previewViewController:didEditAsset:] */

void FUN_106d7ee70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 106d7ee74; end: 106d7ee77; -[SCGalleryPreviewController previewViewController:didCopyAsset:] */

void FUN_106d7ee74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 106d7ee78; end: 106d7f317; -[SCGalleryPreviewController previewViewControllerDidSendOrPostPhoto:hasUnsavedChange:previewThumbnailFuture:thumbnailAspectRatio:videoNoSoundLogger:] */

void FUN_106d7ee78(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_2;
  func_0x00010bddbde0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    uVar3 = param_4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0792e0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      _objc_initWeak(auStack_80,param_2);
      uVar3 = param_4;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar5 == 0) {
        uVar3 = param_4;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        if (uVar5 == 0) {
          uVar3 = param_4;
          func_0x00010bf46560(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2340a0();
          _objc_release(uVar4);
        }
        else {
          puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f8 = 0xc2000000;
          pcStack_f0 = FUN_106d7f3a4;
          puStack_e8 = &UNK_1108484c8;
          _objc_retain(uVar2);
          puStack_128 = puVar1;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_106d7f3c8;
          puStack_110 = &UNK_1108434b0;
          uStack_e0 = uVar2;
          _objc_copyWeak(auStack_108,auStack_80);
          FUN_106d8ee60(param_1,param_6,param_7,&puStack_100,&puStack_128);
          _objc_destroyWeak(auStack_108);
          uVar3 = uStack_e0;
        }
        _objc_release(uVar3);
      }
      else {
        uVar3 = param_4;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c07f160();
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar3 = param_4;
        func_0x00010bf46560(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c06e820();
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar3 = param_4;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c07f0a0();
        if ((uVar7 & 1) == 0) {
          uVar7 = param_4;
          func_0x00010bf46560(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c07f0c0();
          uVar11 = (uint)uVar9 ^ 1;
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        else {
          uVar11 = 0;
        }
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_106d7f318;
        puStack_98 = &UNK_11084b7a0;
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(uVar2);
        puStack_d8 = puVar1;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_106d7f370;
        puStack_c0 = &UNK_1108434b0;
        uStack_90 = uVar2;
        _objc_copyWeak(auStack_b8,auStack_80);
        FUN_106d8e514(param_1,param_6,(uint)uVar5 & uVar11 & ((uint)uVar6 ^ 1),param_7,&puStack_b0,
                      &puStack_d8);
        _objc_destroyWeak(auStack_b8);
        _objc_release(uStack_90);
        _objc_destroyWeak(auStack_88);
      }
      _objc_destroyWeak(auStack_80);
    }
  }
  uVar3 = param_2 + 0x1f0;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    lVar10 = param_2 + 0x1f0;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bfbd440();
    _objc_release(lVar10);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x00010be03180(param_2);
  }
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106d7f318; end: 106d7f36f;  */

void FUN_106d7f318(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd3c80(*(undefined8 *)(lVar1 + 0x1a0));
    func_0x00010c14ae00(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d7f370; end: 106d7f3a3;  */

void FUN_106d7f370(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be48920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7f3a4; end: 106d7f3c7;  */

void FUN_106d7f3a4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c149f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_saveAssetChangesAsNewCopy__1126301f8,uVar1);
  return;
}



/* Entry: 106d7f3c8; end: 106d7f3fb;  */

void FUN_106d7f3c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be48920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7f3fc; end: 106d7f8fb; -[SCGalleryPreviewController previewViewControllerDidSendOrPostVideo:hasUnsavedChange:previewBlob:thumbnailAspectRatio:captionDataProvider:videoNoSoundLogger:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:itemViewService:] */

void FUN_106d7f3fc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar2 = param_2;
  func_0x00010bddbde0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    uVar3 = param_4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0792e0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      _objc_initWeak(auStack_80,param_2);
      uVar3 = param_4;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar5 == 0) {
        uVar3 = param_4;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        if (uVar5 == 0) {
          uVar3 = param_4;
          func_0x00010bf46560(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2340a0();
          _objc_release(uVar4);
          _objc_release(uVar3);
        }
        else {
          uVar8 = *(undefined8 *)(param_2 + 8);
          puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_108 = 0xc2000000;
          pcStack_100 = FUN_106d7fa10;
          puStack_f8 = &UNK_1108484c8;
          _objc_retain(lVar2);
          puStack_138 = puVar1;
          uStack_130 = 0xc2000000;
          pcStack_128 = FUN_106d7fa34;
          puStack_120 = &UNK_1108434b0;
          lStack_f0 = lVar2;
          _objc_copyWeak(auStack_118,auStack_80);
          FUN_106d8f31c(param_1,param_6,uVar8,param_7,param_8,param_9,param_10,param_11,param_12,
                        param_13,&puStack_110,&puStack_138,*(undefined8 *)(param_2 + 0x90));
          _objc_destroyWeak(auStack_118);
          _objc_release(lStack_f0);
        }
      }
      else {
        uVar3 = param_4;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c07f160();
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar3 = param_4;
        func_0x00010bf46560(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c06e820();
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar7 = lVar2;
        func_0x00010c232ea0();
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_106d7f8fc;
        puStack_a8 = &UNK_1108cd2a8;
        _objc_copyWeak(auStack_90,auStack_80);
        uStack_88 = (undefined1)lVar7;
        _objc_retain(lVar2);
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        pcStack_d8 = FUN_106d7f9dc;
        puStack_d0 = &UNK_1108434b0;
        lStack_a0 = lVar2;
        lStack_98 = param_2;
        _objc_copyWeak(auStack_c8,auStack_80);
        FUN_106d8e92c(param_1,param_6,(uint)uVar5 & ((uint)uVar6 ^ 1),lVar7,&puStack_c0,&puStack_e8,
                      *(undefined8 *)(param_2 + 8),param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,*(undefined8 *)(param_2 + 0x90));
        _objc_destroyWeak(auStack_c8);
        _objc_release(lStack_a0);
        _objc_destroyWeak(auStack_90);
      }
      _objc_destroyWeak(auStack_80);
    }
  }
  uVar3 = param_2 + 0x1f0;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    lVar7 = param_2 + 0x1f0;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bfbd440();
    _objc_release(lVar7);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x00010be03180(param_2);
  }
  _objc_release(lVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106d7f8fc; end: 106d7f9db;  */

void FUN_106d7f8fc(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x00010c232e80();
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        if ((int)uVar4 == 0) {
          func_0x00010c0c9440(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a0ee0();
          _objc_release(uVar2);
        }
        else {
          func_0x00010c14b080();
        }
      }
      else {
        func_0x00010bfd3c80(*(undefined8 *)(lVar1 + 0x1a0));
        func_0x00010c14ae00(uVar4);
      }
      uVar3 = *(ulong *)(lVar1 + 0x1a0);
      func_0x00010bfd3c80();
      if ((uVar3 & 1) == 0) {
        func_0x00010be7ff80(*(undefined8 *)(param_1 + 0x28));
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106d7f9dc; end: 106d7fa0f;  */

void FUN_106d7f9dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be48920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7fa10; end: 106d7fa33;  */

void FUN_106d7fa10(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c149f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_saveAssetChangesAsNewCopy__1126301f8,uVar1);
  return;
}



/* Entry: 106d7fa34; end: 106d7fa67;  */

void FUN_106d7fa34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be48920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7fa68; end: 106d7fad7; -[SCGalleryPreviewController previewViewControllerDidExitAutoSave] */

void FUN_106d7fa68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x1f0;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfbd3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d7fad8; end: 106d7fb2f; -[SCGalleryPreviewController _castedPreviewViewControllerFromViewController:] */

void FUN_106d7fad8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb710;
  _objc_opt_class(PTR_PTR_1126cb710);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d7fb30; end: 106d7fbcf; -[SCGalleryPreviewController _applicationWillEnterBackground] */

void FUN_106d7fb30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07b240();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x1e8),PTR_s_cancelPreviewWithExitType__1125a9480,0);
    return;
  }
  return;
}



/* Entry: 106d7fbd0; end: 106d80327; -[SCGalleryPreviewController _presentPreviewPrepSnapdocPlaceholderImageWithGalleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:prefilledCaption:quickSendRecipientName:quickSendRecipientDisplayName:quickSendRecipientUserId:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:shouldShowPostStorySelection:fromViewController:transitioningDelegate:animated:userContext:snapDoc:preselectedPreviewTool:replyConfiguration:musicSelection:shouldUseRegularPreview:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:triggeringSection:] */

void FUN_106d7fbd0(undefined *param_1,undefined1 *param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined *param_11,undefined8 param_12,
                  undefined8 param_13,uint param_14,undefined4 param_15,ulong param_16,
                  undefined8 param_17,ulong param_18,ulong param_19,long param_20,ulong param_21,
                  undefined8 param_22,undefined8 param_23,uint param_24,byte param_25,ulong param_26
                  )

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 uStack_2b0;
  undefined2 uStack_2af;
  undefined4 uStack_2ad;
  undefined1 uStack_2a9;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [8];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  uStack_180 = param_23;
  uStack_188 = param_22;
  lStack_198 = param_20;
  uStack_1d8 = param_17;
  uStack_1d0 = param_16;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1c8 = param_3;
  puStack_178 = param_1;
  _objc_retain(param_3);
  uStack_190 = param_4;
  _objc_retain(param_4);
  uStack_1c0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar12 = lStack_198;
  _objc_retain(param_8);
  uVar1 = uStack_1d8;
  _objc_retain(param_9);
  uStack_1b8 = param_10;
  _objc_retain(param_10);
  puStack_1b0 = param_11;
  _objc_retain(param_11);
  uStack_1a8 = param_12;
  _objc_retain(param_12);
  uVar2 = uStack_1d0;
  uStack_1a0 = param_13;
  _objc_retain(param_13);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(lVar12);
  _objc_retain(uStack_188);
  _objc_retain(uStack_180);
  if ((puStack_178[0x41] & 1) == 0) {
    if ((uVar2 != 0) && (*(long *)(puStack_178 + 0xa0) == 0)) {
      puVar9 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      puVar13 = (ulong *)(puStack_178 + 0xa0);
      uVar11 = *puVar13;
      *puVar13 = (ulong)puVar9;
      _objc_release(uVar11);
      func_0x00010c219b60(*puVar13);
      func_0x00010c1a8560(*puVar13);
      uVar11 = uVar2;
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar11);
      puStack_1e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *puVar13;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uStack_230 = uVar11;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uStack_238 = uVar4;
      uStack_228 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *puVar13;
      uStack_220 = uVar4;
      uStack_a0 = uVar4;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uStack_210 = uVar11;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_218 = uVar5;
      uStack_208 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *puVar13;
      uStack_200 = uVar5;
      uStack_98 = uVar5;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_1f8 = uVar11;
      func_0x00010bf49420(0x4050000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *puVar13;
      uStack_1f0 = uVar11;
      uStack_90 = uVar11;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_1e8 = uVar4;
      func_0x00010bf49420(0x4050000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_1e0);
      _objc_release(puVar9);
      _objc_release(uVar4);
      _objc_release(uStack_1e8);
      _objc_release(uStack_1f0);
      _objc_release(uStack_1f8);
      _objc_release(uStack_200);
      _objc_release(uStack_208);
      _objc_release(uStack_210);
      _objc_release(uStack_218);
      _objc_release(uStack_220);
      _objc_release(uStack_228);
      _objc_release(uStack_230);
      _objc_release(uStack_238);
      func_0x00010c24dbc0(*puVar13);
    }
    if (lVar12 == 0) {
      uVar6 = uStack_190;
      func_0x00010bfb1920(uStack_190);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puStack_178;
      func_0x00010bdf36a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    else {
      puVar9 = puStack_178;
      func_0x00010be5db20();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_a8,puStack_178);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_106d80328;
    puStack_158 = &UNK_11097a948;
    param_2 = auStack_a8;
    _objc_copyWeak(auStack_d8);
    uVar3 = uStack_190;
    uVar6 = uStack_1c0;
    ppuVar7 = ppuStack_1c8;
    uStack_1e8 = param_26;
    uStack_218 = param_21;
    uStack_220 = param_19;
    uStack_228 = param_18;
    uStack_230 = CONCAT44(uStack_230._4_4_,param_14) & 0xffffffff000000ff;
    uStack_238 = CONCAT44(uStack_238._4_4_,param_14 >> 0x10) & 0xffffffff000000ff;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,param_24) & 0xffffffff000000ff;
    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,param_24 >> 8) & 0xffffffff000000ff;
    uStack_200 = CONCAT44(uStack_200._4_4_,param_24 >> 0x10) & 0xffffffff000000ff;
    uStack_208 = CONCAT44(uStack_208._4_4_,param_24 >> 0x18);
    uStack_210 = CONCAT44(uStack_210._4_4_,(uint)param_25);
    puStack_1e0 = puVar9;
    _objc_retain(uStack_190);
    uStack_150 = uVar3;
    _objc_retain(ppuVar7);
    ppuStack_148 = ppuVar7;
    _objc_retain(uVar6);
    uStack_140 = uVar6;
    _objc_retain(param_6);
    uStack_138 = param_6;
    _objc_retain(param_7);
    uStack_130 = param_7;
    _objc_retain(param_8);
    uStack_128 = param_8;
    _objc_retain(param_9);
    uVar6 = uStack_1b8;
    uStack_120 = param_9;
    _objc_retain(uStack_1b8);
    puVar9 = puStack_1b0;
    uStack_118 = uVar6;
    _objc_retain(puStack_1b0);
    uVar6 = uStack_1a8;
    puStack_110 = puVar9;
    _objc_retain(uStack_1a8);
    uVar3 = uStack_1a0;
    uStack_108 = uVar6;
    _objc_retain(uStack_1a0);
    param_11 = puStack_1e0;
    uStack_100 = uVar3;
    uStack_b0 = (undefined1)uStack_230;
    uStack_ae = (undefined1)uStack_238;
    _objc_retain(uVar2);
    uStack_f8 = uVar2;
    _objc_retain(uVar1);
    uVar6 = uStack_188;
    uStack_f0 = uVar1;
    uStack_d0 = uStack_228;
    uStack_c8 = uStack_220;
    uStack_c0 = uStack_218;
    _objc_retain(uStack_188);
    uVar3 = uStack_180;
    uStack_e8 = uVar6;
    _objc_retain(uStack_180);
    uStack_ad = (undefined1)uStack_1f0;
    uStack_ac = (undefined1)uStack_1f8;
    uStack_ab = (undefined1)uStack_200;
    uStack_aa = (undefined1)uStack_208;
    uStack_a9 = (undefined1)uStack_210;
    uStack_e0 = uVar3;
    uStack_b8 = uStack_1e8;
    param_3 = &puStack_170;
    func_0x00010c297260(param_11);
    _objc_release(uStack_e0);
    lVar12 = lStack_198;
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(ppuStack_148);
    _objc_release(uStack_150);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(param_11);
    param_10 = param_8;
    param_12 = param_9;
  }
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(lVar12);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(puStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uStack_1c0);
  _objc_release(uStack_190);
  ppuVar7 = ppuStack_1c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  uStack_288 = param_9;
  uStack_270 = uVar2;
  uStack_260 = uVar1;
  pcStack_248 = FUN_106d80328;
  uStack_2a0 = param_7;
  uStack_298 = param_12;
  puStack_290 = param_11;
  uStack_280 = param_8;
  uStack_278 = param_10;
  lStack_268 = lVar12;
  ppuStack_258 = ppuVar7;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar7 = ppuVar8 + 0x13;
  _objc_loadWeakRetained();
  if (ppuVar7 != (undefined **)0x0) {
    puVar9 = ppuVar7[3];
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = ppuVar8[4];
    func_0x00010bfb1920(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec16c0(ppuVar7[0x19]);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_2d8,ppuVar8 + 0x13);
    puVar14 = ppuVar8[5];
    _objc_retain(puVar14);
    puVar15 = ppuVar8[4];
    _objc_retain(puVar15);
    puVar16 = ppuVar8[6];
    _objc_retain(puVar16);
    puVar17 = ppuVar8[7];
    _objc_retain(puVar17);
    puVar18 = ppuVar8[8];
    _objc_retain(puVar18);
    puVar19 = ppuVar8[9];
    _objc_retain(puVar19);
    puVar20 = ppuVar8[10];
    _objc_retain(puVar20);
    puVar21 = ppuVar8[0xb];
    _objc_retain(puVar21);
    puVar22 = ppuVar8[0xc];
    _objc_retain(puVar22);
    puVar23 = ppuVar8[0xd];
    _objc_retain(puVar23);
    puVar24 = ppuVar8[0xe];
    _objc_retain(puVar24);
    uStack_2b0 = *(undefined1 *)(ppuVar8 + 0x18);
    uStack_2af = *(undefined2 *)((long)ppuVar8 + 0xc1);
    puVar25 = ppuVar8[0xf];
    _objc_retain(puVar25);
    puVar26 = ppuVar8[0x10];
    _objc_retain(puVar26);
    puStack_2c8 = ppuVar8[0x15];
    puStack_2d0 = ppuVar8[0x14];
    _objc_retain(param_2);
    puStack_2c0 = ppuVar8[0x16];
    puVar27 = ppuVar8[0x11];
    _objc_retain(puVar27);
    puVar28 = ppuVar8[0x12];
    _objc_retain(puVar28);
    uStack_2ad = *(undefined4 *)((long)ppuVar8 + 0xc3);
    uStack_2a9 = *(undefined1 *)((long)ppuVar8 + 199);
    puStack_2b8 = ppuVar8[0x17];
    func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(param_2);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_destroyWeak(auStack_2d8);
  }
  _objc_release(ppuVar7);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d80328; end: 106d8064f;  */

void FUN_106d80328(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined4 uStack_6d;
  undefined1 uStack_69;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec16c0(*(undefined8 *)(lVar1 + 200));
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_98,param_1 + 0x98);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar14);
    uStack_70 = *(undefined1 *)(param_1 + 0xc0);
    uStack_6f = *(undefined2 *)(param_1 + 0xc1);
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar15);
    uVar16 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar16);
    uStack_88 = *(undefined8 *)(param_1 + 0xa8);
    uStack_90 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(param_2);
    uStack_80 = *(undefined8 *)(param_1 + 0xb0);
    uVar17 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar17);
    uVar18 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(uVar18);
    uStack_6d = *(undefined4 *)(param_1 + 0xc3);
    uStack_69 = *(undefined1 *)(param_1 + 199);
    uStack_78 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(param_2);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d80650; end: 106d80717;  */

void FUN_106d80650(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be7d980(lVar1,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),param_2,
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                        *(undefined2 *)(param_1 + 200));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d80718; end: 106d8085f;  */

void FUN_106d80718(long param_1,long param_2)

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
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0xa0,param_2 + 0xa0);
  return;
}



/* Entry: 106d80860; end: 106d8092b; -[SCGalleryPreviewController _masterKeyDecryptSnapDoc:] */

/* WARNING: Removing unreachable block (ram,0x000106d808dc) */

void FUN_106d80860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0bc460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(0);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d8092c; end: 106d80aab; -[SCGalleryPreviewController _createSnapDocFromGallerySnap:] */

void FUN_106d8092c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf510e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126bc7b8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160(puVar5,param_2,param_3,0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106d80aac;
    puStack_68 = &UNK_11084c4a0;
    _objc_retain(param_3);
    uStack_60 = param_3;
    puStack_58 = puVar5;
    lStack_50 = param_1;
    puStack_48 = puVar3;
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_80);
    puVar6 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_48);
    _objc_release(puStack_58);
    _objc_release(uStack_60);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d80aac; end: 106d80b5b;  */

void FUN_106d80aac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x98);
  uVar8 = *(undefined8 *)(lVar2 + 0x188);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106d80b5c;
  puStack_60 = &UNK_11097a978;
  _objc_retain(uVar5);
  uStack_58 = uVar5;
  func_0x000107e60dbc(uVar1,uVar4,uVar3,uVar6,uVar7,uVar7,uVar8,&puStack_78);
  _objc_release(uStack_58);
  return;
}



/* Entry: 106d80b5c; end: 106d80b63;  */

void FUN_106d80b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900);
  return;
}



/* Entry: 106d80b64; end: 106d80bab; +[SCGalleryPreviewController _profileAddToStorySnapPageSourceForSnap:] */

undefined8 FUN_106d80b64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf2a8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  uVar1 = 0x76;
  if (lVar2 != 0) {
    uVar1 = 0x77;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d80bac; end: 106d813db; -[SCGalleryPreviewController _presentPreviewWithGalleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:placeholderImage:prefilledCaption:quickSendRecipientName:quickSendRecipientDisplayName:quickSendRecipientUserId:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:shouldShowPostStorySelection:fromViewController:transitioningDelegate:animated:userContext:snapDoc:preselectedPreviewTool:replyConfiguration:musicSelection:shouldUseRegularPreview:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:triggeringSection:] */

void FUN_106d80bac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,long param_20,
                  undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25,uint param_26)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_24);
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    _objc_retain(param_25);
    func_0x00010be7ffe0(param_1);
    *(undefined8 *)(param_1 + 0x38) = param_19;
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a72c0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afee0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004180();
    _objc_release(puVar4);
    if ((param_26 & 0x10000) == 0) {
      lVar5 = param_12;
      func_0x00010c08fa60();
      bVar1 = lVar5 != 0;
    }
    else {
      bVar1 = true;
    }
    *(bool *)(param_1 + 0x40) = bVar1;
    func_0x00010c201280(puVar3);
    func_0x00010c1e0c00(puVar3);
    func_0x00010be42f00(param_1);
    func_0x00010c167e00(puVar3);
    lVar5 = param_4;
    func_0x00010b5f8c3c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1997e0(puVar3);
    _objc_release(lVar5);
    func_0x00010c1c9fc0(puVar3);
    _objc_release(param_25);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106d813dc;
    puStack_88 = &UNK_11097a648;
    _objc_retain(puVar3);
    puStack_80 = puVar3;
    func_0x00010c0bcaa0(param_24);
    lVar5 = param_4;
    func_0x00010b5f895c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010b5f8a98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106d8140c;
    puStack_b0 = &UNK_110856a28;
    _objc_retain();
    lVar5 = lVar6;
    uStack_a8 = uVar2;
    func_0x0001006372a4(lVar6,&puStack_c8);
    lVar7 = lVar5;
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x170);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010c0ee9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar8 = uVar11;
      func_0x000100504554(uVar11,&PTR___NSConcreteGlobalBlock_11097a9a8);
      func_0x00010c1e0ae0(puVar3);
      _objc_release(uVar8);
      _objc_release(uVar11);
    }
    puVar4 = puVar3;
    func_0x00010bf9e5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf8a940();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf529e0();
    _objc_release(puVar9);
    _objc_release(puVar4);
    if (puVar10 != (undefined *)0x0) {
      func_0x00010c2056c0(puVar3);
    }
    lVar7 = param_12;
    func_0x00010c08fa60();
    if ((lVar7 == 0) && (param_20 != 0xe)) {
      if (param_20 == 0xf) {
        func_0x00010be82c40(PTR_PTR_1126d2630);
      }
      else {
        uVar11 = param_3;
        func_0x00010bfb3860();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar11;
        func_0x00010c067ec0();
        _objc_release(uVar11);
        if ((int)uVar8 != 1) {
          func_0x00010c07b240();
        }
      }
    }
    puVar4 = puVar3;
    func_0x00010c204fa0();
    func_0x0001008e4748();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbc40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b9b80(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f520(puVar3);
    _objc_release(puVar9);
    func_0x00010beb6440(param_1);
    func_0x00010c202080(puVar3);
    uVar11 = *(undefined8 *)(param_1 + 0x98);
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
    _objc_retain(param_17);
    _objc_retain(param_18);
    _objc_retain(param_21);
    _objc_retain(param_24);
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar11);
    _objc_release(param_24);
    _objc_release(param_21);
    _objc_release(param_18);
    _objc_release(param_17);
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
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(uStack_a8);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(puStack_80);
    _objc_release(puVar3);
  }
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_17);
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
  return;
}



/* Entry: 106d813dc; end: 106d8140b;  */

void FUN_106d813dc(long param_1,long param_2)

{
  func_0x00010c243400(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsSpotlightPreselectedInSendT_11264aca8,
             param_2 == 0x6a);
  return;
}



/* Entry: 106d8140c; end: 106d8142b;  */

uint FUN_106d8140c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106d8142c; end: 106d8157b;  */

void FUN_106d8142c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d4e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = param_2;
  if (lVar3 == 0) {
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  lVar2 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar5);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d8157c; end: 106d815eb;  */

void FUN_106d8157c(long param_1,undefined8 param_2)

{
  func_0x00010bde89e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined2 *)(param_1 + 0xc0));
  return;
}



/* Entry: 106d815ec; end: 106d837bb; -[SCGalleryPreviewController _continuePresentPreviewWithLegacyConfig:galleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:placeholderImage:prefilledCaption:quickSendRecipientName:quickSendRecipientDisplayName:quickSendRecipientUserId:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:fromViewController:transitioningDelegate:animated:userContext:snapDoc:replyConfiguration:shouldUseRegularPreview:showSaveButton:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:] */

void FUN_106d815ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined *param_7,long param_8,undefined *param_9
                  ,long param_10,undefined8 param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,long param_15,undefined8 param_16,undefined8 param_17,
                  undefined4 param_18,undefined4 param_19,undefined8 param_20,undefined8 param_21,
                  undefined4 param_22,undefined4 param_23,undefined8 param_24,long param_25,
                  undefined8 param_26,undefined1 param_27)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  int iVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uStack_5a8;
  uint uStack_5a4;
  undefined *puStack_5a0;
  undefined8 uStack_570;
  long lStack_550;
  long lStack_4f0;
  long lStack_4e0;
  code *pcStack_4d0;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  long lStack_470;
  long lStack_468;
  undefined8 uStack_460;
  long lStack_458;
  code *pcStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b7;
  undefined1 uStack_3b3;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  code *pcStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_25);
  _objc_retain(param_26);
  if (param_25 == 0) {
    lVar6 = param_8;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar6 != 0;
    _objc_release();
    lStack_4f0 = 0;
    lStack_4e0 = 0;
    lStack_550 = 0;
  }
  else {
    lStack_4f0 = param_3;
    func_0x00010bebc940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_25);
    lStack_4e0 = *(long *)(param_3 + 0x148);
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_8;
    func_0x00010b5f7a24(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79260(param_3);
    _objc_release(lVar6);
    lVar6 = param_8;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar6 != 0;
    _objc_release();
    puVar4 = PTR_PTR_1126af4d0;
    lStack_550 = 0;
    if ((lStack_4f0 != 0) && (lVar6 == 0)) {
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010bf529e0(puVar4);
      puVar5 = PTR_PTR_1126bc808;
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6fc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uStack_a0 = 0;
      lStack_550 = param_6;
      func_0x000107950830(param_6,lStack_4f0,puVar4,puVar5,&uStack_a0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uStack_a0;
      _objc_retain(uStack_a0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      bVar2 = false;
    }
  }
  puVar4 = param_7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c241220(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  pcVar8 = (code *)PTR_PTR_1126bc7b8;
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_106d7cd20;
  uStack_b0 = 0x106d7cd30;
  uStack_a8 = 0;
  lVar9 = param_6;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  bVar2 = (bool)(lVar9 == 8 | bVar2);
  if (bVar2) {
    puVar7 = PTR_PTR_1126b0018;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_3 + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840();
    uVar23 = puStack_c8[5];
    puStack_c8[5] = puVar7;
    _objc_release(uVar23);
    _objc_release(uVar3);
    lVar10 = puStack_c8[5];
    lStack_d8 = 0;
    func_0x00010c13e8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_d8;
    _objc_retain(lStack_d8);
    pcStack_4d0 = (code *)0x0;
    if ((lVar9 == 0) && (lVar10 != 0)) {
      pcStack_4d0 = (code *)PTR_PTR_1126bcdd8;
      _objc_alloc();
      func_0x00010c0206e0();
    }
    uStack_570 = puStack_c8[5];
    func_0x00010c13ef00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  else {
    pcStack_4d0 = pcVar8;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_570 = 0;
  }
  func_0x000109023974(puVar4);
  puVar7 = puVar4;
  func_0x000109023714();
  if ((int)puVar7 == 0) {
    puVar7 = puVar4;
    func_0x00010c2a5040();
    iVar24 = (int)puVar7;
    puVar7 = puVar4;
    func_0x00010bfe0640();
    dVar29 = (double)(int)puVar7;
  }
  else {
    puVar7 = puVar4;
    func_0x00010c2a5040();
    iVar24 = (int)puVar7;
    puVar7 = puVar4;
    func_0x00010bfe0640();
    dVar29 = (double)(int)puVar7 / 2.0;
  }
  dVar28 = (double)iVar24;
  func_0x00010c1c5240(param_5);
  func_0x00010c0c6700(param_5);
  dVar30 = 0.0;
  if (dVar28 != 0.0) {
    if (dVar29 == 0.0) {
      dVar30 = INFINITY;
    }
    else {
      dVar30 = dVar28 / dVar29;
    }
  }
  func_0x00010c1c40c0(param_5);
  func_0x00010c0ed100(puVar4);
  func_0x00010c1c4ca0(param_5);
  func_0x00010c1dcac0(param_5);
  lVar9 = param_15;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    puVar7 = PTR_PTR_1126b1010;
    _objc_alloc(PTR_PTR_1126b1010);
    func_0x00010c02ec80();
    func_0x00010c1eb140(param_5);
    _objc_release(puVar7);
    puVar7 = param_5;
    func_0x00010c131e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b13e0();
    _objc_release(puVar7);
    func_0x00010c1f5e00(param_5);
    puVar7 = param_5;
    func_0x00010c131e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb300();
    _objc_release(puVar7);
    puVar7 = param_5;
    func_0x00010c131e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080();
    _objc_release(puVar7);
    puVar7 = param_5;
    func_0x00010c131e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb2e0();
    _objc_release(puVar7);
    func_0x00010c1a0f40(param_5);
    puVar7 = param_5;
    func_0x00010c131e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2900();
    _objc_release(puVar7);
  }
  lVar9 = param_6;
  func_0x000107ade254(param_6,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0720(param_5);
  _objc_release(lVar9);
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106d7cd20;
  uStack_e8 = 0x106d7cd30;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_106d7cd20;
  uStack_118 = 0x106d7cd30;
  uStack_110 = 0;
  if (lStack_4e0 == 0) {
    pcVar11 = pcStack_4d0;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_100[5];
    puStack_100[5] = pcVar11;
    _objc_release(uVar3);
    pcVar11 = pcStack_4d0;
    func_0x00010c096600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_130[5];
    puStack_130[5] = pcVar11;
    _objc_release(uVar3);
  }
  else {
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    dVar30 = 1.60807493534087e-314;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_106d837bc;
    puStack_150 = &UNK_11097a9f8;
    puStack_148 = puStack_100;
    puStack_140 = puStack_130;
    func_0x00010c28a040();
  }
  if (puStack_100[5] != 0) {
    puVar7 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    func_0x00010c2b2880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar27 = PTR_PTR_1126b13a0;
    _objc_opt_new(PTR_PTR_1126b13a0);
    puVar25 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2620(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar25);
    func_0x00010c2b2680(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b2c20(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar25 = puVar27;
    func_0x00010bf21f60(puVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be380(param_5);
    _objc_release(puVar25);
    _objc_release(puVar27);
    _objc_release(puVar7);
  }
  pcVar11 = pcStack_4d0;
  func_0x00010c111620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (pcVar11 == (code *)0x0) {
    if (param_12 != 0) {
      puVar7 = PTR_PTR_1126b13a0;
      _objc_opt_new(PTR_PTR_1126b13a0);
      puVar27 = puVar7;
      func_0x00010c2b2620();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar27;
      func_0x00010c2b2680();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar25;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e1e40(param_5);
      _objc_release(puVar15);
      goto LAB_106d82018;
    }
  }
  else {
    puVar27 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    pcVar11 = pcStack_4d0;
    func_0x00010c111620(pcStack_4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar27;
    func_0x00010c2b2880(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar11);
    _objc_release(puVar27);
    puVar27 = puVar4;
    func_0x00010b5fa760();
    ppuVar26 = &PTR_PTR_1133c9318;
    if ((int)puVar27 == 0) {
      ppuVar26 = &PTR_PTR_1133c92a8;
    }
    puVar27 = *ppuVar26;
    _objc_retain(puVar27);
    puVar25 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b13a0;
    _objc_opt_new(PTR_PTR_1126b13a0);
    puVar12 = puVar15;
    func_0x00010c2b2620();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2b2680();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1e40(param_5);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar15);
    puVar15 = puVar4;
    func_0x00010b5fa088();
    if (puVar15 + -2 < (undefined *)0xb) {
      func_0x00010b5fa760(puVar4);
    }
    func_0x00010c1a59c0(param_5);
LAB_106d82018:
    _objc_release(puVar25);
    _objc_release(puVar27);
    _objc_release(puVar7);
  }
  lVar9 = param_8;
  func_0x00010b5f88e4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfd5900();
  if ((int)lVar10 != 0) {
    lVar10 = lVar9;
    func_0x00010bf45f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb340(param_5);
    _objc_release();
  }
  _dispatch_group_create();
  puVar27 = puVar4;
  func_0x00010b5fa088();
  puVar7 = puVar27;
  if ((bVar2) && (lStack_4f0 != 0)) {
    lVar16 = lStack_4f0;
    func_0x000107e629cc();
    puVar7 = (undefined *)0x0;
    if ((int)lVar16 == 0) {
      puVar7 = puVar27;
    }
  }
  lVar16 = param_6;
  func_0x00010bf977c0();
  if ((int)lVar16 == 0x28) {
    puVar7 = (undefined *)0x1;
  }
  puVar27 = PTR_PTR_1126d2398;
  _objc_alloc();
  lVar16 = param_3;
  func_0x00010bed0aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057f80();
  _objc_release(lVar16);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (bVar2) {
    lVar16 = param_3;
    func_0x00010be24200();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c08fa60();
    if (lVar17 == 0) {
      puStack_5a0 = (undefined *)0x0;
      uStack_5a8 = 0;
    }
    else {
      puStack_5a0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      uStack_5a8 = (uint)(lVar16 != 0);
    }
    _objc_release(lVar16);
  }
  else {
    puVar25 = puVar27;
    func_0x00010c2423a0();
    uStack_5a8 = (uint)puVar25;
    puStack_5a0 = puVar27;
    func_0x00010c2423c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf8b160(puVar4);
  dVar29 = dVar30;
  func_0x00010c23cf80(PTR_PTR_1126b6600);
  dVar28 = (double)SUB84(dVar30,0);
  if (dVar28 <= dVar29) {
    uStack_5a4 = 0;
  }
  else {
    puVar25 = puVar4;
    func_0x00010b5fa088();
    uStack_5a4 = (uint)(puVar25 != (undefined *)0xc);
  }
  if (puVar7 < (undefined *)0xd) {
    if ((1L << ((ulong)puVar7 & 0x3f) & 0xa99U) == 0) {
      if ((1L << ((ulong)puVar7 & 0x3f) & 0x1564U) != 0) {
        puVar7 = param_5;
        func_0x00010bf5aac0();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar7;
        if (puVar7 == (undefined *)0x0) {
          puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c1856c0(param_5);
        if (puVar7 == (undefined *)0x0) {
          _objc_release(puVar25);
        }
        _objc_release(puVar7);
      }
      func_0x00010c1c5440(param_5);
      puVar7 = param_5;
      func_0x00010bf5aac0();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        puVar25 = puVar4;
        func_0x00010b5f7a24(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1856c0(param_5);
      if (puVar7 == (undefined *)0x0) {
        _objc_release(puVar25);
      }
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      if (bVar2 == false) {
        puVar25 = (undefined *)0x0;
        while( true ) {
          puVar15 = param_7;
          func_0x00010bf529e0();
          puVar12 = param_9;
          func_0x00010bf529e0();
          if (puVar12 <= puVar15) {
            puVar15 = puVar12;
          }
          if (puVar15 <= puVar25) break;
          puVar15 = PTR_PTR_1126c3c70;
          _objc_alloc(PTR_PTR_1126c3c70);
          puVar12 = param_7;
          func_0x00010c0dfd40(param_7);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = param_9;
          func_0x00010c0dfd40(param_9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c046e40(puVar15);
          func_0x00010befa120(puVar7);
          _objc_release(puVar15);
          _objc_release(puVar13);
          _objc_release(puVar12);
          puVar25 = puVar25 + 1;
        }
        lVar16 = param_3;
        func_0x00010beb62c0();
        if ((int)lVar16 == 0) {
          puVar25 = puVar7;
          func_0x00010bf529e0();
          if (puVar25 < (undefined *)0x2) {
            lVar16 = lVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((uStack_5a4 == 0) || (lVar16 == 0)) {
              puVar25 = puVar7;
              func_0x00010bfb1920(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c221d20(param_5);
            }
            else {
              puVar25 = PTR_PTR_1126d2648;
              _objc_alloc(PTR_PTR_1126d2648);
              func_0x00010c046e40();
              func_0x00010c221d20(param_5);
            }
            _objc_release(puVar25);
            lVar17 = param_3;
            func_0x00010be43d00();
            if ((int)lVar17 == 0) {
              ppuVar26 = (undefined **)0x0;
            }
            else {
              lVar17 = param_3;
              func_0x00010becc0c0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c215940(param_5);
              _objc_release(lVar17);
              lVar17 = param_3;
              func_0x00010be43ee0();
              if ((int)lVar17 == 0) {
                uVar19 = *(undefined8 *)(param_3 + 0x110);
                func_0x00010bf7f280();
                _objc_retainAutoreleasedReturnValue();
                uVar23 = uVar19;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar21 = uVar23;
                func_0x00010bf926c0();
                _objc_release(uVar23);
                _objc_release(uVar19);
                if ((int)uVar21 != 0) {
                  func_0x00010c1b0700(param_5);
                  func_0x00010c1c40c0(0x3fe2000000000000,param_5);
                }
              }
              else {
                func_0x00010c0c6700(param_5);
                puVar25 = param_5;
                func_0x00010c26fea0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1ea900(dVar29,dVar28);
                _objc_release(puVar25);
              }
              _objc_initWeak(&uStack_240,param_3);
              puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
              dVar29 = 1.60807493534087e-314;
              uStack_330 = 0xc2000000;
              pcStack_328 = FUN_106d840bc;
              puStack_320 = &UNK_11097ab18;
              _objc_copyWeak(auStack_310,&uStack_240);
              _objc_retain(param_5);
              ppuVar26 = &puStack_338;
              puStack_318 = param_5;
              _objc_retainBlock();
              _objc_release(puStack_318);
              _objc_destroyWeak(auStack_310);
              _objc_destroyWeak(&uStack_240);
            }
            uVar1 = 0;
            if (lVar16 != 0) {
              uVar1 = uStack_5a8;
            }
            if ((uVar1 == 1) &&
               (lVar17 = param_3, func_0x00010be44ea0(),
               ((uint)lVar17 & (uStack_5a4 ^ 0xffffffff) & 1) != 0)) {
              lVar17 = lVar6;
              func_0x00010c0e00e0(lVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13c800(puVar27);
              _objc_release(lVar17);
            }
            _objc_release(ppuVar26);
            _objc_release(lVar16);
          }
          else {
            lVar16 = param_3;
            func_0x00010becc0c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c215940(param_5);
            _objc_release(lVar16);
            uVar19 = *(undefined8 *)(param_3 + 0x110);
            func_0x00010bf7f280();
            _objc_retainAutoreleasedReturnValue();
            uVar23 = uVar19;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar23;
            func_0x00010bf926c0();
            _objc_release(uVar23);
            _objc_release(uVar19);
            if ((int)uVar21 != 0) {
              func_0x00010c1b0700(param_5);
              dVar29 = 0.5625;
              func_0x00010c1c40c0(param_5);
            }
          }
        }
        else {
          puVar25 = PTR_PTR_1126d2640;
          _objc_alloc(PTR_PTR_1126d2640);
          func_0x00010c04a100();
          func_0x00010c221d20(param_5);
          _objc_release(puVar25);
        }
      }
      else {
        _dispatch_group_enter(lVar10);
        puStack_238 = &uStack_240;
        uStack_240 = 0;
        uStack_230 = 0x3032000000;
        pcStack_228 = FUN_106d7cd20;
        uStack_220 = 0x106d7cd30;
        uStack_5a8 = uStack_5a8 ^ 1;
        if (lStack_4e0 == 0) {
          uStack_5a8 = 1;
        }
        uStack_218 = 0;
        if ((uStack_5a8 & 1) == 0) {
          puVar15 = PTR_PTR_1126d2638;
          _objc_opt_new(PTR_PTR_1126d2638);
          puVar25 = puVar15;
          func_0x00010c13c200();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
        }
        else {
          puVar25 = PTR_PTR_1126ae558;
          func_0x00010bfe9ca0(PTR_PTR_1126ae558);
          _objc_retainAutoreleasedReturnValue();
        }
        puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
        dVar29 = 1.60807493534087e-314;
        uStack_300 = 0xc2000000;
        pcStack_2f8 = FUN_106d83d68;
        puStack_2f0 = &UNK_11097aab8;
        puStack_2b8 = &uStack_d0;
        lStack_2e8 = param_3;
        _objc_retain(param_6);
        uStack_2a8 = param_27;
        puStack_2b0 = &uStack_240;
        lStack_2e0 = param_6;
        _objc_retain(param_5);
        puStack_2d8 = param_5;
        _objc_retain(lStack_4f0);
        lStack_2d0 = lStack_4f0;
        _objc_retain(lVar10);
        lStack_2c8 = lVar10;
        _objc_retain(lStack_4e0);
        lStack_2c0 = lStack_4e0;
        func_0x00010c297260(puVar25);
        _objc_release(lStack_2c0);
        _objc_release(lStack_2c8);
        _objc_release(lStack_2d0);
        _objc_release(puStack_2d8);
        _objc_release(lStack_2e0);
        _objc_release(puVar25);
        __Block_object_dispose(&uStack_240,8);
        _objc_release(uStack_218);
      }
      func_0x00010902369c(puVar4);
      if (0.0 < SUB84(dVar29,0)) {
        puVar25 = PTR_PTR_1126b9e18;
        _objc_alloc();
        puStack_348 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
        uStack_350 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_340 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_240 = uStack_350;
        puStack_238 = puStack_348;
        uStack_230 = uStack_340;
        func_0x00010c0389e0(dVar29);
        puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_98 = puVar25;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e8f80(param_5);
        _objc_release(puVar15);
        _objc_release(puVar25);
      }
      func_0x00010c1dcac0(param_5);
      func_0x00010c221700(param_5);
      func_0x00010c16c080(param_5);
      pcVar11 = pcStack_4d0;
      func_0x00010bf0efa0(pcStack_4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c16bc20(param_5);
      _objc_release(pcVar11);
      func_0x00010be43ee0();
      func_0x00010c221ca0(param_5);
      pcVar11 = pcStack_4d0;
      func_0x00010bf10220(pcStack_4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16bca0(param_5);
      _objc_release(pcVar11);
      pcVar11 = pcStack_4d0;
      func_0x00010bf20900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (pcVar11 != (code *)0x0) {
        pcVar11 = pcStack_4d0;
        func_0x00010bf20900(pcStack_4d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar20 = pcVar11;
        func_0x00010c0e1c40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1738a0(param_5);
        _objc_release(pcVar20);
        _objc_release(pcVar11);
      }
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      for (puVar25 = (undefined *)0x0; puVar12 = param_7, func_0x00010bf529e0(), puVar25 < puVar12;
          puVar25 = puVar25 + 1) {
        puVar12 = param_7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x000109023a90();
        _objc_release(puVar12);
        if ((int)puVar13 != 0) {
          lVar18 = *(long *)(param_3 + 0x60);
          func_0x00010bf0b480();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar18;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = param_7;
          func_0x00010c0dfd40(param_7);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar7;
          func_0x00010c0dfd40(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0d9500();
          lVar17 = lVar16;
          func_0x00010bf9ee60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(lVar16);
          _objc_release(lVar18);
          if (lVar17 != 0) {
            func_0x00010befa120(puVar15);
          }
          _objc_release(lVar17);
        }
      }
      _objc_retain(puVar15);
      uVar23 = *(undefined8 *)(param_3 + 0x58);
      *(undefined **)(param_3 + 0x58) = puVar15;
      _objc_release(uVar23);
      puVar25 = puVar4;
      func_0x000109023a28();
      if ((int)puVar25 != 0) {
        uVar19 = *(undefined8 *)(param_3 + 0x60);
        func_0x00010c1307e0();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar23;
        func_0x00010c124600();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c207a40(param_5);
        _objc_release(uVar21);
        _objc_release(uVar23);
        _objc_release(uVar19);
        puVar25 = param_5;
        func_0x00010c249660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar25 == (undefined *)0x0) {
          _objc_release(puVar15);
          _objc_release(puVar7);
          goto LAB_106d832cc;
        }
      }
      _objc_release(puVar15);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c1c5440(param_5);
      if ((lStack_4e0 == 0) || (!bVar2)) {
LAB_106d82ae4:
        puVar7 = puVar4;
        func_0x000109023a28();
        if ((int)puVar7 == 0) {
          puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_200 = 0xc2000000;
          pcStack_1f8 = FUN_106d83b18;
          puStack_1f0 = &UNK_11086dbb8;
          _objc_retain(param_5);
          puStack_1e8 = param_5;
          func_0x00010c135800(uVar3);
          _objc_release(puStack_1e8);
        }
        else {
          uVar21 = *(undefined8 *)(param_3 + 0x60);
          func_0x00010bf0b480(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar23 = uVar21;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d8 = 0xc2000000;
          pcStack_1d0 = FUN_106d83914;
          puStack_1c8 = &UNK_11097aa58;
          lStack_1c0 = param_3;
          _objc_retain(param_5);
          puStack_1b8 = param_5;
          _objc_retain(puVar4);
          puStack_1b0 = puVar4;
          func_0x00010c1357e0(uVar23);
          _objc_release(uVar23);
          _objc_release(uVar21);
          _objc_release(puStack_1b0);
          _objc_release(puStack_1b8);
        }
        puStack_238 = &uStack_240;
        uStack_240 = 0;
        uStack_230 = 0x3032000000;
        pcStack_228 = FUN_106d7cd20;
        uStack_220 = 0x106d7cd30;
        uStack_218 = 0;
        pcVar11 = pcStack_4d0;
        func_0x00010c111620();
        _objc_retainAutoreleasedReturnValue();
        if (pcVar11 == (code *)0x0) {
          pcVar11 = pcStack_4d0;
          func_0x00010c2453c0();
          _objc_retainAutoreleasedReturnValue();
          if (pcVar11 != (code *)0x0) goto LAB_106d82c90;
          pcVar11 = pcStack_4d0;
          func_0x00010bf987a0();
          _objc_retainAutoreleasedReturnValue();
          pcVar20 = pcVar11;
          func_0x00010bfd7fa0();
          _objc_retainAutoreleasedReturnValue();
          if (pcVar20 != (code *)0x0) {
            _objc_release();
            goto LAB_106d82c90;
          }
          pcVar20 = pcStack_4d0;
          func_0x00010bfaebe0();
          _objc_retainAutoreleasedReturnValue();
          pcVar22 = pcVar20;
          func_0x00010bf4e780();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(pcVar20);
          _objc_release(pcVar11);
          if (pcVar22 != (code *)0x0) goto LAB_106d82c98;
        }
        else {
LAB_106d82c90:
          _objc_release(pcVar11);
LAB_106d82c98:
          pcVar11 = pcStack_4d0;
          func_0x00010c2453c0(pcStack_4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203ce0(param_5);
          _objc_release(pcVar11);
          puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_270 = 0xc2000000;
          pcStack_268 = FUN_106d83b8c;
          puStack_260 = &UNK_110977488;
          puStack_248 = &uStack_240;
          _objc_retain(param_5);
          puStack_258 = param_5;
          _objc_retain(pcStack_4d0);
          pcStack_250 = pcStack_4d0;
          func_0x00010c136020(uVar3);
          _objc_release(pcStack_250);
          _objc_release(puStack_258);
        }
        if (uStack_5a8 != 0) {
          lVar16 = lVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 == 0) {
            if (puStack_238[5] == 0) {
              puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_298 = 0xc2000000;
              pcStack_290 = FUN_106d83d30;
              puStack_288 = &UNK_1108bccf0;
              puStack_280 = &uStack_240;
              func_0x00010c136020(uVar3);
            }
            func_0x00010c13c7e0(puVar27);
          }
          else {
            lVar17 = lVar6;
            func_0x00010c0e00e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13c7c0(puVar27);
            _objc_release(lVar17);
          }
          _objc_release(lVar16);
        }
        __Block_object_dispose(&uStack_240,8);
        _objc_release(uStack_218);
      }
      else if (uStack_5a8 == 0) {
        lVar16 = param_3;
        func_0x00010be219e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar16 == 0) goto LAB_106d82ae4;
        func_0x00010c1a1660(param_5);
        _objc_release(lVar16);
      }
      else {
        _dispatch_group_enter(lVar10);
        puVar7 = PTR_PTR_1126d2638;
        _objc_opt_new(PTR_PTR_1126d2638);
        puVar25 = puVar7;
        func_0x00010c13c200();
        _objc_retainAutoreleasedReturnValue();
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        uStack_198 = 0x106d838a8;
        puStack_190 = &UNK_11097aa28;
        _objc_retain(lVar10);
        lStack_188 = lVar10;
        lStack_180 = param_3;
        _objc_retain(lStack_4e0);
        lStack_178 = lStack_4e0;
        _objc_retain(param_5);
        puStack_170 = param_5;
        func_0x00010c297260(puVar25);
        _objc_release(puStack_170);
        _objc_release(lStack_178);
        _objc_release(lStack_188);
        _objc_release(puVar25);
        _objc_release(puVar7);
      }
    }
  }
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x2020000000;
  pcVar11 = pcStack_4d0;
  func_0x00010c095720();
  _objc_retainAutoreleasedReturnValue();
  pcVar20 = pcVar11;
  func_0x00010c282800();
  _objc_release(pcVar11);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_370 = 0xc2000000;
  pcStack_368 = FUN_106d84214;
  puStack_360 = &UNK_1108a72f8;
  puStack_358 = &uStack_240;
  pcStack_228 = pcVar20;
  func_0x00010c2849a0(lStack_4e0);
  if (puStack_238[3] != 0) {
    _dispatch_group_enter(lVar10);
    uVar23 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c269d40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c11de00(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puStack_3b0 = puVar7;
    uStack_3a8 = 0xc2000000;
    pcStack_3a0 = FUN_106d8429c;
    puStack_398 = &UNK_11097ab48;
    _objc_retain(param_5);
    puStack_380 = &uStack_240;
    puStack_390 = param_5;
    _objc_retain(lVar10);
    lStack_388 = lVar10;
    func_0x00010bfa5de0(uVar23);
    _objc_release(uVar21);
    _objc_release(uVar23);
    _objc_release(lStack_388);
    _objc_release(puStack_390);
  }
  _objc_initWeak(&uStack_350,param_3);
  uVar23 = *(undefined8 *)(param_3 + 0x98);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_4a0 = puVar7;
  uStack_498 = 0xc2000000;
  pcStack_490 = FUN_106d8438c;
  puStack_488 = &UNK_11097aba8;
  _objc_copyWeak(auStack_3d8,&uStack_350);
  _objc_retain(param_5);
  puStack_480 = param_5;
  _objc_retain(puVar4);
  puStack_478 = puVar4;
  _objc_retain(param_15);
  lStack_470 = param_15;
  uStack_3d0 = param_24;
  _objc_retain(param_8);
  lStack_468 = param_8;
  _objc_retain(param_26);
  uStack_460 = param_26;
  _objc_retain(param_6);
  lStack_458 = param_6;
  _objc_retain(pcStack_4d0);
  pcStack_450 = pcStack_4d0;
  _objc_retain(lStack_4f0);
  lStack_448 = lStack_4f0;
  _objc_retain(uStack_570);
  uStack_440 = uStack_570;
  _objc_retain(param_14);
  uStack_438 = param_14;
  uStack_3c8 = param_1;
  uStack_3c0 = param_2;
  uStack_3b7 = bVar2;
  _objc_retain(lStack_4e0);
  lStack_430 = lStack_4e0;
  _objc_retain(puVar5);
  puStack_428 = puVar5;
  _objc_retain(param_11);
  uStack_420 = param_11;
  _objc_retain(lVar6);
  puStack_3e0 = &uStack_d0;
  lStack_418 = lVar6;
  _objc_retain(param_7);
  uStack_3b3 = (undefined1)uStack_5a4;
  puStack_410 = param_7;
  _objc_retain(param_9);
  puStack_408 = param_9;
  _objc_retain(param_13);
  uStack_400 = param_13;
  _objc_retain(param_20);
  uStack_3f8 = param_20;
  _objc_retain(param_21);
  uStack_3f0 = param_21;
  _objc_retain(lStack_550);
  lStack_3e8 = lStack_550;
  func_0x000100bc0718(lVar10,uVar23,&puStack_4a0);
  _objc_release(uVar23);
  _objc_release(lStack_3e8);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3f8);
  _objc_release(uStack_400);
  _objc_release(puStack_408);
  _objc_release(puStack_410);
  _objc_release(lStack_418);
  _objc_release(uStack_420);
  _objc_release(puStack_428);
  _objc_release(lStack_430);
  _objc_release(uStack_438);
  _objc_release(uStack_440);
  _objc_release(lStack_448);
  _objc_release(pcStack_450);
  _objc_release(lStack_458);
  _objc_release(uStack_460);
  _objc_release(lStack_468);
  _objc_release(lStack_470);
  _objc_release(puStack_478);
  _objc_release(puStack_480);
  _objc_destroyWeak(auStack_3d8);
  _objc_destroyWeak(&uStack_350);
  __Block_object_dispose(&uStack_240,8);
LAB_106d832cc:
  _objc_release(puStack_5a0);
  _objc_release(uVar3);
  _objc_release(puVar27);
  _objc_release(lVar10);
  _objc_release(lVar9);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(uStack_570);
  _objc_release(pcStack_4d0);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(pcVar8);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lStack_4e0);
  _objc_release(lStack_550);
  _objc_release(param_26);
  _objc_release(lStack_4f0);
  _objc_release(param_21);
  _objc_release(param_20);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_108,8);
  uVar23 = 8;
  __Block_object_dispose(&uStack_d0);
  __Unwind_Resume();
  _objc_retain(uVar23);
  uVar3 = uVar23;
  func_0x00010bfd84e0();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 != 0) {
    uVar3 = uVar23;
    func_0x00010c08fb40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 8) + 0x28);
    *(undefined **)(*(long *)(*(long *)(param_5 + 0x20) + 8) + 0x28) = puVar5;
    _objc_release(uVar21);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = uVar23;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x28);
    *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x28) = uVar21;
    _objc_release(uVar19);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar23);
  return;
}



/* Entry: 106d837bc; end: 106d83913;  */

void FUN_106d837bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd84e0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d83914; end: 106d83b17;  */

void FUN_106d83914(undefined8 param_1,double param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_7 == 0) {
    if (param_5 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x58);
      *(undefined **)(*(long *)(param_3 + 0x20) + 0x58) = puVar1;
      _objc_release(uVar7);
    }
    func_0x00010c207b00(*(undefined8 *)(param_3 + 0x28));
    _objc_retain(param_4);
    func_0x00010c23d0a0(param_4);
    uVar7 = param_1;
    func_0x00010c23d0a0(param_4);
    func_0x00010c14e120(param_4);
    _UIGraphicsBeginImageContextWithOptions(param_1,param_2 * 0.5,uVar7,1);
    uVar7 = 0;
    dVar8 = 0.0;
    if (param_6 != 1) {
      dVar8 = -(param_2 * 0.5);
    }
    func_0x00010c23d0a0(param_4);
    func_0x00010bf89920(0,dVar8,param_1,uVar7,param_4);
    lVar2 = param_4;
    _objc_release(param_4);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    func_0x00010c1a1640(*(undefined8 *)(param_3 + 0x28));
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x60);
    func_0x00010c1307e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c124600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207a40(*(undefined8 *)(param_3 + 0x28));
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c07f160();
  _objc_release(uVar4);
  if ((int)uVar7 != 0) {
    func_0x00010c207b00(*(undefined8 *)(param_4 + 0x20));
  }
  func_0x00010c1a1640(*(undefined8 *)(param_4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106d83b18; end: 106d83b8b;  */

void FUN_106d83b18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f160();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c207b00(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010c1a1640(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d83b8c; end: 106d83d2f;  */

void FUN_106d83b8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c183020(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0c5d00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183020(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c2453c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c20ebc0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0c5d00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20ebc0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c111620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c1e1e20(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0c5d00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1e20(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d83d30; end: 106d83d67;  */

void FUN_106d83d30(long param_1,undefined8 param_2)

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



/* Entry: 106d83d68; end: 106d83fa7;  */

void FUN_106d83d68(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126b0018;
    _objc_alloc();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840();
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf92160();
  _objc_release(uVar4);
  lVar7 = *(long *)(param_1 + 0x28);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar7 == 8) {
LAB_106d83e54:
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
      func_0x00010bf977c0(*(undefined8 *)(param_1 + 0x28));
      lVar7 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar8);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar3);
      func_0x00010c270060(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar8);
      goto LAB_106d83f74;
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf3d240();
    if ((int)uVar4 == 0) {
      bVar1 = false;
    }
    else {
      if ((uVar4 & 0x1f) != 0) goto LAB_106d83e54;
      bVar1 = (uVar4 & 0xffe0) != 0;
    }
    if (bVar1 || (uVar5 & 1) != 0) goto LAB_106d83e54;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010be21a00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x30));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
LAB_106d83f74:
  _objc_release(lVar7);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d83fa8; end: 106d840bb;  */

void FUN_106d83fa8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c215940(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bdc8aa0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bea79a0(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x110);
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf926c0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x0001084541ec(*(undefined8 *)(param_1 + 0x30));
      func_0x00010c1b0700(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c1c40c0(0x3fe2000000000000,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d840bc; end: 106d841bf;  */

void FUN_106d840bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26fea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bdc8200(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106d841c0; end: 106d84213;  */

void FUN_106d841c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26fea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c1c0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d84214; end: 106d8429b;  */

void FUN_106d84214(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0d3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c277e80();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c277e80();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2;
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d8429c; end: 106d8438b;  */

void FUN_106d8429c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b25f8;
    _objc_opt_new(PTR_PTR_1126b25f8);
    _objc_release(param_2);
    puVar2 = PTR_PTR_1126d2650;
    _objc_opt_new(PTR_PTR_1126d2650);
    func_0x00010c184940(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b0008;
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  _objc_release(puVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d8438c; end: 106d858eb;  */

void FUN_106d8438c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined *puStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3 + 200;
  _objc_loadWeakRetained();
  if (uVar5 == 0) goto LAB_106d85848;
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(param_3 + 0xe8) == '\x01') {
    func_0x00010c2056c0();
  }
  else {
    func_0x00010bf9e5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2056c0(*(undefined8 *)(param_3 + 0x20));
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0c5180(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179260(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar6);
  lVar7 = *(long *)(param_3 + 0x30);
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    if (*(long *)(param_3 + 0xd0) == 0xf) {
      func_0x00010be82c40(PTR_PTR_1126d2630);
      func_0x00010c204fa0(*(undefined8 *)(param_3 + 0x20));
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c2720a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb140(*(undefined8 *)(param_3 + 0x20));
      _objc_release(uVar6);
      func_0x00010c2056c0(*(undefined8 *)(param_3 + 0x20));
    }
    else {
      if (*(long *)(param_3 + 0xd0) == 0xe) {
        func_0x00010c204fa0(*(undefined8 *)(param_3 + 0x20));
        puVar8 = PTR_PTR_1126b1010;
        _objc_alloc(PTR_PTR_1126b1010);
        func_0x00010c02ec80();
        func_0x00010c1eb140(*(undefined8 *)(param_3 + 0x20));
        _objc_release(puVar8);
        uVar6 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c131e40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c165620();
      }
      else {
        uVar9 = *(undefined8 *)(param_3 + 0x48);
        func_0x00010bfb3860();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010c067ec0();
        _objc_release(uVar9);
        if ((int)uVar6 == 1) {
          uVar6 = *(undefined8 *)(param_3 + 0x20);
          goto LAB_106d84460;
        }
        func_0x00010c07b240();
        func_0x00010c204fa0(*(undefined8 *)(param_3 + 0x20));
        uVar6 = *(undefined8 *)(param_3 + 0x40);
        func_0x00010c2720a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1eb140(*(undefined8 *)(param_3 + 0x20));
      }
      _objc_release(uVar6);
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x20);
LAB_106d84460:
    func_0x00010c204fa0(uVar6);
  }
  uVar6 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010bf5c920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd400(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar6);
  func_0x00010c0c5b60(*(undefined8 *)(param_3 + 0x50));
  func_0x00010c1c60e0(*(undefined8 *)(param_3 + 0x20));
  if (*(long *)(param_3 + 0x58) == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107ff9c0c(uVar6,*(undefined8 *)(param_3 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    iVar3 = (int)*(undefined8 *)(param_3 + 0x28);
    func_0x00010bfe0640();
    iVar4 = (int)*(undefined8 *)(param_3 + 0x28);
    func_0x00010c2a5040();
    fVar28 = ABS((float)iVar3 / (float)iVar4 + -1.3333334);
    fVar26 = ABS((float)iVar3 / (float)iVar4 + 1.3333334) * 1.1920929e-07;
    bVar1 = true;
    if ((1.1754944e-38 <= fVar28) && (bVar1 = false, !NAN(fVar28) && !NAN(fVar26))) {
      bVar1 = fVar28 < fVar26;
    }
    if (bVar1) {
      func_0x00010c1af360(*(undefined8 *)(param_3 + 0x20));
    }
  }
  else {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    iVar3 = (int)*(undefined8 *)(param_3 + 0x20);
    func_0x00010c070a20();
    if (iVar3 != 0) {
      func_0x000109200028(param_1,param_2);
    }
    uVar6 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107ff9770(param_1,param_2,uVar6,*(undefined8 *)(param_3 + 0x50));
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = uVar6;
  func_0x00010c130740(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186260(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar9);
  uStack_a0 = 0;
  uVar9 = *(undefined8 *)(param_3 + 0x50);
  func_0x000107ff8a40(uVar9,*(undefined8 *)(param_3 + 0x60),&uStack_a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ce0(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar9);
  lVar7 = *(long *)(param_3 + 0x68);
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    lVar10 = *(long *)(param_3 + 0x20);
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10;
    func_0x00010bf529e0();
    _objc_release(lVar10);
    puVar8 = PTR_PTR_1126cbf60;
    if (lVar7 == 0) {
      puVar16 = PTR_PTR_1126cbf68;
      func_0x00010bf8b640(PTR_PTR_1126cbf68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252940();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178ce0(*(undefined8 *)(param_3 + 0x20));
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar16);
    }
  }
  uStack_a8 = 1;
  puVar22 = (undefined8 *)(param_3 + 0x50);
  uVar9 = *puVar22;
  func_0x000107ff8ca8(*(undefined8 *)(param_3 + 0xd8),*(undefined8 *)(param_3 + 0xe0),uVar9,
                      &uStack_a8);
  _objc_retainAutoreleasedReturnValue();
  plVar24 = (long *)(param_3 + 0x20);
  func_0x00010c1919a0(*plVar24);
  _objc_release(uVar9);
  uVar9 = *puVar22;
  func_0x000107ff9214(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186500(*plVar24);
  _objc_release(uVar9);
  uVar9 = *puVar22;
  func_0x000107ff89cc(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cd00(*plVar24);
  _objc_release(uVar9);
  uStack_b0 = 0;
  lVar7 = *plVar24;
  func_0x00010c0d32a0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar9 = *puVar22;
  func_0x000107ff86c4(uVar9,*(undefined8 *)(uVar5 + 0x130),*(undefined8 *)(param_3 + 0x60),
                      &uStack_b0,lVar7 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd80(*plVar24);
  _objc_release(uVar9);
  puVar8 = PTR_PTR_1126bcd50;
  func_0x00010bfd4e80();
  if (((uint)*(byte *)(param_3 + 0xe9) & (uint)puVar8 & 1) == 0) {
LAB_106d84988:
    uVar14 = *(undefined8 *)(uVar5 + 0x178);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010bf81100();
    _objc_release(uVar14);
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    uVar25 = *(undefined8 *)(param_3 + 0x50);
    uVar27 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c09a760(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf4e7c0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    FUN_106d942e4(uVar25,uVar27,uVar15,uVar13,*(undefined8 *)(uVar5 + 8),
                  *(undefined8 *)(uVar5 + 0x60),uVar9,*(undefined8 *)(uVar5 + 0x150),
                  *(undefined8 *)(uVar5 + 0x100),*(undefined8 *)(uVar5 + 0x1b0),
                  *(undefined8 *)(uVar5 + 0x1b8),*(undefined8 *)(uVar5 + 0x108));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    iVar3 = (int)*(undefined8 *)(uVar5 + 0x150);
    func_0x00010bfaec60();
    if (iVar3 == 0) goto LAB_106d84988;
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    uVar25 = *(undefined8 *)(param_3 + 0x70);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c09a760(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf4e7c0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    FUN_106d95b08(uVar25,uVar9,uVar15,uVar13,*(undefined8 *)(uVar5 + 8),
                  *(undefined8 *)(uVar5 + 0x60),*(undefined8 *)(uVar5 + 0x150),
                  *(undefined8 *)(uVar5 + 0x100),*(undefined8 *)(uVar5 + 0x1b0),
                  *(undefined8 *)(uVar5 + 0x1b8),*(undefined8 *)(uVar5 + 0x108));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19bee0(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar25);
  _objc_release(uVar13);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  lVar10 = *(long *)(param_3 + 0x28);
  func_0x00010c26fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar8;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    puStack_1c8 = *(undefined **)(param_3 + 0x28);
    func_0x00010c26fd20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar10);
  uVar14 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010bfaebe0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010b5f7a24(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bab38;
  func_0x00010c22b6a0(PTR_PTR_1126bab38);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar14;
  func_0x000108e5a4cc(uVar14,uVar15,puStack_1c8,puVar8,*(undefined8 *)(uVar5 + 0x138));
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined8 *)(param_3 + 0x20);
  func_0x00010c1ac540(*puVar22);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar15);
  _objc_release(uVar14);
  puVar8 = PTR_PTR_1126b5fa8;
  _objc_alloc_init(PTR_PTR_1126b5fa8);
  func_0x00010c205d00(*puVar22);
  _objc_release(puVar8);
  uVar9 = *puVar22;
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196760();
  _objc_release(uVar9);
  uVar9 = *puVar22;
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203860();
  _objc_release(uVar9);
  uVar9 = *puVar22;
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d7c0();
  _objc_release(uVar9);
  lVar7 = *(long *)(param_3 + 0x48);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar7 == 8) {
    uVar14 = *(undefined8 *)(param_3 + 0x80);
    uVar9 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010bf97200(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar14 = *(undefined8 *)(param_3 + 0x88);
  }
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c2440e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a820();
  _objc_release(uVar15);
  if (lVar7 == 8) {
    _objc_release(uVar14);
    _objc_release(uVar9);
  }
  puVar22 = (undefined8 *)(param_3 + 0x20);
  uVar9 = *puVar22;
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e120();
  _objc_release(uVar9);
  uVar9 = *puVar22;
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2012e0();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010902339c(uVar9,*(undefined8 *)(param_3 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *puVar22;
  func_0x00010c2440e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2079a0();
  _objc_release(uVar14);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_3 + 0x50);
  func_0x000108d3fd44(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2039e0(*puVar22);
  _objc_release(uVar9);
  func_0x00010bf298a0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c1a0f00(*puVar22);
  uVar9 = *puVar22;
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200f40();
  _objc_release(uVar9);
  if (*(char *)(param_3 + 0xec) == '\x01') {
    func_0x00010bf3d240();
  }
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c2440e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2000c0();
  _objc_release(uVar9);
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar14;
  func_0x00010c07f160();
  _objc_release(uVar14);
  if ((int)uVar9 != 0) {
    puVar22 = (undefined8 *)(param_3 + 0x20);
    uVar9 = *puVar22;
    func_0x00010c2440e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141c60();
    _objc_release(uVar9);
    puVar8 = PTR_PTR_1126d2658;
    _objc_alloc(PTR_PTR_1126d2658);
    uVar9 = *puVar22;
    func_0x00010c2440e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd9520();
    uVar14 = *puVar22;
    func_0x00010c2440e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141c60();
    func_0x00010c00f8e0(puVar8);
    func_0x00010c207700(*puVar22);
    _objc_release(puVar8);
    _objc_release(uVar14);
    _objc_release(uVar9);
  }
  iVar3 = (int)*(undefined8 *)(param_3 + 0x28);
  func_0x00010bfd89e0();
  if (iVar3 != 0) {
    uVar9 = *(undefined8 *)(uVar5 + 0x1c0);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c241220(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106d858ec;
    puStack_c0 = &UNK_1108e87f0;
    uVar15 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar15);
    uStack_b8 = uVar15;
    func_0x00010c135bc0(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uStack_b8);
  }
  puVar16 = *(undefined **)(param_3 + 0x88);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  fVar26 = 7.450581e-09;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106d7cd20;
  uStack_e8 = 0x106d7cd30;
  uStack_e0 = 0;
  puVar8 = puVar16;
  if (*(char *)(param_3 + 0xe9) == '\x01') {
    puVar8 = PTR_PTR_1126bce60;
    _objc_alloc_init();
    func_0x00010c193c20(*(undefined8 *)(param_3 + 0x20));
    puVar11 = PTR_PTR_1126c4908;
    _objc_alloc();
    uStack_118 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar9 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_120 = uVar9;
    func_0x00010c0522a0();
    fVar26 = (float)uVar9;
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf30960(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010c0d3c80();
    func_0x00010c178c80(puVar11);
    _objc_release(uVar9);
    _objc_release(uVar14);
    uVar9 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107ff89cc(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16cc80(puVar11);
    _objc_release(uVar9);
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c255460(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010c0d3c80();
    func_0x00010c20bc80(puVar11);
    _objc_release(uVar9);
    _objc_release(uVar14);
    uVar15 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf89f40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010c0d3c80();
    func_0x00010c191a20(puVar11);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar15);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf5c9c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(puVar11);
    _objc_release(uVar9);
    func_0x00010c1a3c60(puVar8);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0xc0) + 8) + 0x28);
    func_0x00010c13ef00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(ulong *)(*(long *)(*(long *)(param_3 + 0xc0) + 8) + 0x28);
    lStack_128 = 0;
    func_0x00010c13eac0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_128;
    _objc_retain(lStack_128);
    if ((lVar7 == 0) && (uVar23 = uVar17, func_0x00010bf529e0(), uVar23 != 0)) {
      uVar25 = *(undefined8 *)(param_3 + 0x58);
      uVar15 = *(undefined8 *)(uVar5 + 0x130);
      uVar12 = *(undefined8 *)(param_3 + 0x70);
      uVar13 = *(undefined8 *)(uVar5 + 0x150);
      uVar14 = *(undefined8 *)(uVar5 + 0x170);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = *(undefined8 *)(param_3 + 0xd8);
      uVar18 = uVar17;
      func_0x000107ffa714(uVar27,*(undefined8 *)(param_3 + 0xe0),param_1,param_2,uVar17,uVar25,uVar9
                          ,uVar15,uVar12,&uStack_b0,&uStack_a8,&uStack_a0,uVar13,uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      uVar23 = 0;
      while( true ) {
        uVar19 = uVar18;
        func_0x00010bf529e0();
        fVar26 = (float)uVar27;
        if (uVar19 <= uVar23) break;
        uVar19 = uVar18;
        func_0x00010c0dfd40(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar8;
        func_0x00010c09e9e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar20);
        if (uVar23 == 0) {
          uVar15 = *(undefined8 *)(param_3 + 0x20);
          func_0x00010bf30960(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar19;
          func_0x00010bf308c0(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar15;
          func_0x00010bf09f80(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c178ce0(*(undefined8 *)(param_3 + 0x20));
          _objc_release(uVar14);
          _objc_release(uVar21);
          _objc_release(uVar15);
          uVar15 = *(undefined8 *)(param_3 + 0x20);
          func_0x00010c255460(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar19;
          func_0x00010c2553e0(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar15;
          func_0x00010bf09f80(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20bd80(*(undefined8 *)(param_3 + 0x20));
          _objc_release(uVar14);
          _objc_release(uVar21);
          _objc_release(uVar15);
          uVar12 = *(undefined8 *)(param_3 + 0x20);
          func_0x00010bf89f40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010bf8a020();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar19;
          func_0x00010bf8a020(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010bf09f80(uVar14);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar21);
          _objc_release(uVar14);
          _objc_release(uVar12);
          puVar20 = PTR_PTR_1126c3d88;
          _objc_alloc(PTR_PTR_1126c3d88);
          uVar14 = *(undefined8 *)(param_3 + 0x20);
          func_0x00010bf89f40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23ef60();
          func_0x00010c00e5c0(puVar20);
          func_0x00010c1919a0(*(undefined8 *)(param_3 + 0x20));
          _objc_release(puVar20);
          _objc_release(uVar14);
          _objc_release(uVar15);
        }
        _objc_release(uVar19);
        uVar23 = uVar23 + 1;
      }
      _objc_release(uVar18);
    }
    _objc_release(uVar17);
    _objc_release(lVar7);
    _objc_release(uVar9);
    _objc_release(puVar11);
    _objc_release();
  }
  if (puVar16 != (undefined *)0x0) {
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar15 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c241220(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x000107e00ff0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    fVar26 = -32.0;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x106d8593c;
    puStack_140 = &UNK_110949f00;
    puStack_130 = &uStack_108;
    _objc_retain(puVar8);
    uVar14 = uVar9;
    puStack_138 = puVar8;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _dispatch_group_wait(puVar8,0xffffffffffffffff);
    _objc_release(puStack_138);
    _objc_release(puVar8);
  }
  if (puStack_100[5] != 0) {
    func_0x00010c17e100(*(undefined8 *)(param_3 + 0x20));
  }
  func_0x00010be94960(uVar5);
  func_0x00010bf8b160(*(undefined8 *)(param_3 + 0x28));
  uVar17 = uVar5;
  func_0x00010beb62c0();
  if ((int)uVar17 == 0) {
    bVar1 = false;
  }
  else if (3.0 <= fVar26) {
    bVar1 = true;
  }
  else {
    uVar17 = *(ulong *)(param_3 + 0x90);
    func_0x00010bf529e0();
    bVar1 = 1 < uVar17;
  }
  lVar7 = *(long *)(param_3 + 0x20);
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    bVar2 = false;
  }
  else {
    uVar17 = *(ulong *)(param_3 + 0x90);
    func_0x00010bf529e0();
    if (uVar17 < 2) {
      lVar10 = *(long *)(param_3 + 0x28);
      func_0x00010b5fa088();
      bVar2 = lVar10 == 0xc;
    }
    else {
      bVar2 = true;
    }
  }
  _objc_release(lVar7);
  uVar17 = uVar5;
  func_0x00010be43d00();
  if (bVar2 || (uVar17 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2440e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215b00();
    _objc_release(uVar9);
  }
  if (bVar2) {
    uVar9 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010bfbdda0(uVar9);
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2440e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5fa33c(uVar9);
    func_0x00010c1b1440(uVar14);
    _objc_release(uVar14);
  }
  if (*(long *)(param_3 + 0x58) == 0 && (uVar17 & 1) == 0) {
    lVar7 = *(long *)(param_3 + 0x20);
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar7 == 0) || ((!bVar1 && ((*(byte *)(param_3 + 0xed) & 1) == 0)))) {
      _objc_release();
      goto LAB_106d857fc;
    }
    _objc_release();
    if (bVar2) goto LAB_106d857fc;
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2440e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c99a0();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2440e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c96e0();
    _objc_release(uVar9);
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010c0d9500();
    _objc_release(uVar14);
    _objc_initWeak(&uStack_120,uVar5);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x106d859e0;
    puStack_1a0 = &UNK_1108e3c60;
    _objc_copyWeak(auStack_168,&uStack_120);
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_3 + 0x70);
    uStack_198 = uVar14;
    _objc_retain(uVar15);
    uStack_190 = uVar15;
    _objc_retain(uVar9);
    uVar14 = *(undefined8 *)(param_3 + 0xa0);
    uStack_188 = uVar9;
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_3 + 0xa8);
    uStack_180 = uVar14;
    _objc_retain(uVar15);
    uVar14 = *(undefined8 *)(param_3 + 0xb0);
    uStack_178 = uVar15;
    _objc_retain(uVar14);
    uStack_160 = *(undefined8 *)(param_3 + 0xd0);
    uStack_170 = uVar14;
    func_0x000100162d98("APPSTORE",&puStack_1b8);
    _objc_release(uStack_170);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(uStack_198);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(&uStack_120);
    _objc_release(uVar9);
  }
  else {
LAB_106d857fc:
    func_0x00010beaba20(uVar5);
  }
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(puVar16);
  _objc_release(puStack_1c8);
  _objc_release(uVar6);
LAB_106d85848:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    uVar9 = 8;
    __Block_object_dispose(&uStack_108,8);
    __Unwind_Resume();
    uVar6 = *(undefined8 *)(uVar5 + 0x20);
    _objc_retain(uVar9);
    func_0x00010c2440e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203b20();
    _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 106d858ec; end: 106d85beb;  */

void FUN_106d858ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2440e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d85bec; end: 106d86007; -[SCGalleryPreviewController _setupConfigAndPresentPreviewWithSnapDocEditor:gallerySnap:snapDocMediaIdToAssetIdMap:legacyConfig:fromViewController:transitioningDelegate:userContext:] */

void FUN_106d85bec(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_4 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010bfce280(param_4);
    if (param_1 == 0.0) {
      func_0x00010c0c4080(param_7);
      func_0x00010c1a44c0(param_4);
    }
    puVar8 = PTR_PTR_1126c7c40;
    _objc_opt_new();
    lVar1 = param_5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar9 = param_7;
      func_0x00010bf311e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205660(puVar8);
      _objc_release(uVar9);
    }
    else {
      func_0x00010c205660(puVar8);
    }
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c23fe00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00(puVar8);
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_6);
    lVar1 = param_6;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          puVar2 = puVar8;
          func_0x00010c0c5200(puVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_6;
          func_0x00010c0e00e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c55e0(uVar9);
          func_0x00010c1d0560(puVar2);
          _objc_release(lVar3);
          _objc_release(puVar2);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = param_6;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_6);
  }
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x106d85f40;
  puStack_178 = &UNK_1108ba8b8;
  uStack_138 = param_10;
  uStack_170 = param_2;
  puStack_168 = puVar8;
  uStack_160 = param_7;
  lStack_158 = param_4;
  lStack_150 = param_5;
  uStack_148 = param_8;
  uStack_140 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(puVar8);
  func_0x000100162d98("APPSTORE",&puStack_190);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_158);
  _objc_release(uStack_160);
  _objc_release(puStack_168);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_6 + 0x20) + 0xa0));
  uVar9 = *(undefined8 *)(*(long *)(param_6 + 0x20) + 0xa0);
  *(undefined8 *)(*(long *)(param_6 + 0x20) + 0xa0) = 0;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_6 + 0x20);
  uVar4 = *(undefined8 *)(param_6 + 0x40);
  func_0x00010c23f420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_6 + 0x40);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0d140(uVar9);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106d86008; end: 106d861eb; -[SCGalleryPreviewController _launchTrimmerWithVideoAsset:fromViewController:withCompletion:] */

void FUN_106d86008(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126cbfe0;
  func_0x00010703cdd0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010703ce30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5dda0(param_2);
  func_0x00010bf46460(0,param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_initWeak(auStack_58,param_2);
  puVar5 = PTR_PTR_1126c6738;
  _objc_alloc(PTR_PTR_1126c6738);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010c01d380(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x140));
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d861ec; end: 106d86293;  */

void FUN_106d861ec(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    bVar1 = (param_2 & 1) == 0;
    if (bVar1) {
      uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
      uStack_60 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
      uStack_48 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
      uStack_50 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
      uStack_38 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
      uStack_40 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    }
    else {
      uStack_58 = param_4[1];
      uStack_60 = *param_4;
      uStack_48 = param_4[3];
      uStack_50 = param_4[2];
      uStack_38 = param_4[5];
      uStack_40 = param_4[4];
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),!bVar1,&uStack_60);
    func_0x00010c12e1c0(*(undefined8 *)(lVar2 + 0x140));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106d86294; end: 106d86bff; -[SCGalleryPreviewController _presentPreviewWithLegacyConfig:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:fromViewController:transitioningDelegate:animated:userContext:snapDoc:] */

void FUN_106d86294(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106d7cd20;
  uStack_88 = 0x106d7cd30;
  puVar1 = PTR_PTR_1126b0018;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047840();
  puStack_80 = puVar1;
  _objc_release(uVar2);
  lVar3 = puStack_a0[5];
  puStack_b0 = (undefined *)0x0;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_b0;
  puVar4 = puStack_b0;
  _objc_retain();
  puVar17 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) && (lVar3 != 0)) {
    puVar4 = PTR_PTR_1126bcdd8;
    _objc_alloc();
    func_0x00010c0206e0();
    puVar17 = puVar4;
  }
  _dispatch_group_create();
  func_0x00010c1c5440(param_3);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(param_3);
  _objc_release(puVar5);
  _dispatch_group_enter(puVar4);
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_106d7cd20;
  uStack_c0 = 0x106d7cd30;
  uStack_b8 = 0;
  lVar6 = *(long *)(param_1 + 0x148);
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79260(param_1);
  lVar7 = param_1;
  func_0x00010be24200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = PTR_PTR_1126d2638;
    _objc_opt_new();
    puVar5 = puVar8;
    func_0x00010c13c200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106d86c00;
  puStack_118 = &UNK_11097ac38;
  puStack_f0 = &uStack_a8;
  puStack_e8 = &uStack_e0;
  lStack_110 = param_1;
  _objc_retain(param_3);
  lStack_108 = param_3;
  _objc_retain(param_10);
  uStack_100 = param_10;
  _objc_retain(puVar4);
  puStack_f8 = puVar4;
  func_0x00010c297260(puVar5);
  func_0x00010c1dcac0(param_3);
  func_0x00010c16c080(param_3);
  puVar8 = puVar17;
  func_0x00010bf0efa0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c16bc20(param_3);
  _objc_release(puVar8);
  func_0x00010c221ca0(param_3);
  puVar8 = puVar17;
  func_0x00010bf10220(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16bca0(param_3);
  _objc_release(puVar8);
  puVar8 = puVar17;
  func_0x00010bf20900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar17;
    func_0x00010bf20900(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1738a0(param_3);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  puVar8 = puVar17;
  func_0x00010c095720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c282800();
  _objc_release(puVar8);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  uStack_168 = 0x106d86e0c;
  puStack_160 = &UNK_1108a72f8;
  puStack_158 = &uStack_150;
  puStack_138 = puVar9;
  func_0x00010c2849a0(lVar6);
  lVar7 = param_3;
  func_0x00010c11e4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    lVar7 = param_3;
    func_0x00010c11e4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c0fbb80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x000108420984();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar7);
    func_0x00010c1c9fc0(param_3);
    lVar7 = lVar11;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c277e80();
    puStack_148[3] = lVar10;
    lVar10 = lVar7;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      func_0x00010bef9ea0(PTR_PTR_1126bf6f0);
    }
    lVar12 = param_3;
    func_0x00010c11e4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    if (lVar6 != 0) {
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      uStack_190 = 0x106d86e94;
      puStack_188 = &UNK_11084e6e0;
      _objc_retain(lVar13);
      lStack_180 = lVar13;
      func_0x00010c28a040(lVar6);
      _objc_release(lStack_180);
    }
    puVar9 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    lVar12 = param_3;
    func_0x00010c11e4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar12;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar12);
    puVar15 = PTR_PTR_1126b13a0;
    _objc_opt_new(PTR_PTR_1126b13a0);
    puVar8 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2620(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c2b2680(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bd498;
    lVar12 = param_3;
    func_0x00010c11e4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c096ca0();
    func_0x00010bf1cec0(puVar8);
    func_0x00010c2b2ca0(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar12);
    puVar8 = puVar15;
    func_0x00010bf21f60(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be380(param_3);
    _objc_release(puVar8);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lVar11);
  }
  if (puStack_148[3] != 0) {
    _dispatch_group_enter(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c11de00(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_106d86f0c;
    puStack_1c0 = &UNK_11097ab48;
    _objc_retain(param_3);
    puStack_1a8 = &uStack_150;
    lStack_1b8 = param_3;
    _objc_retain(puVar4);
    puStack_1b0 = puVar4;
    func_0x00010bfa5de0(uVar2);
    _objc_release(uVar16);
    _objc_release(uVar2);
    _objc_release(puStack_1b0);
    _objc_release(lStack_1b8);
  }
  _objc_initWeak(auStack_1e0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_106d86ffc;
  puStack_230 = &UNK_11097ac68;
  _objc_copyWeak(auStack_1f8,auStack_1e0);
  uStack_1f0 = param_9;
  uStack_218 = param_10;
  lStack_228 = param_3;
  puStack_220 = puVar17;
  lStack_210 = lVar6;
  uStack_208 = param_6;
  uStack_200 = param_7;
  uStack_1e8 = param_5;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(lVar6);
  _objc_retain(param_10);
  _objc_retain(puVar17);
  _objc_retain(param_3);
  func_0x000100bc0718(puVar4,uVar2,&puStack_248);
  _objc_release(uVar2);
  _objc_release(uStack_200);
  _objc_release(uStack_208);
  _objc_release(lStack_210);
  _objc_release(uStack_218);
  _objc_release(puStack_220);
  _objc_release(lStack_228);
  _objc_destroyWeak(auStack_1f8);
  _objc_destroyWeak(auStack_1e0);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(puStack_f8);
  _objc_release(uStack_100);
  _objc_release(lStack_108);
  _objc_release(lVar6);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_10);
  _objc_release(param_3);
  return;
}



/* Entry: 106d86c00; end: 106d86d53;  */

void FUN_106d86c00(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b0018;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840();
    _objc_release(param_2);
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c270060(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 106d86d54; end: 106d86f0b;  */

void FUN_106d86d54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c215940(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bdc8aa0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bea79a0(*(undefined8 *)(param_1 + 0x28));
    func_0x0001084541ec(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1b0700(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1c40c0(0x3fe2000000000000,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d86f0c; end: 106d86ffb;  */

void FUN_106d86f0c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b25f8;
    _objc_opt_new(PTR_PTR_1126b25f8);
    _objc_release(param_2);
    puVar2 = PTR_PTR_1126d2650;
    _objc_opt_new(PTR_PTR_1126d2650);
    func_0x00010c184940(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b0008;
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  _objc_release(puVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d86ffc; end: 106d87527;  */

void FUN_106d86ffc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2056c0(*(undefined8 *)(param_2 + 0x20));
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010c11e4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c11e4a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c243400();
      func_0x00010c2056c0(*(undefined8 *)(param_2 + 0x20));
      _objc_release(uVar4);
      func_0x00010c204fa0(*(undefined8 *)(param_2 + 0x20));
    }
    func_0x00010c179260(*(undefined8 *)(param_2 + 0x20));
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf5c920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd400(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar4);
    func_0x00010c0c5b60(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c1c60e0(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    func_0x000109200028();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107ff9770(uVar4,*(undefined8 *)(param_2 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107ff8a10(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ce0(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107ff89cc(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16cd00(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar5);
    uStack_58 = 0;
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010c0d32a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107ff86c4(uVar5,*(undefined8 *)(lVar1 + 0x130),0,&uStack_58,lVar3 != 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bd80(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126b62b0;
    _objc_alloc(PTR_PTR_1126b62b0);
    func_0x00010c048840();
    func_0x00010c19bee0(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b5fa8;
    _objc_alloc_init(PTR_PTR_1126b5fa8);
    func_0x00010c205d00(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar6);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2440e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e120();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2440e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2012e0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000108d3fd44(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2039e0(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar5);
    if (*(long *)(param_2 + 0x30) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x148);
      func_0x00010bf8cb40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79260(lVar1);
      func_0x00010bfce280(uVar5);
      if (param_1 == 0.0) {
        func_0x00010c0c4080(*(undefined8 *)(param_2 + 0x20));
        func_0x00010c1a44c0(uVar5);
      }
      puVar6 = PTR_PTR_1126c7c40;
      _objc_opt_new();
      func_0x00010c205660();
      uVar7 = uVar5;
      func_0x00010c23fe00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00(puVar6);
      _objc_release(uVar7);
      _objc_release(uVar5);
    }
    _objc_initWeak(auStack_60,lVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106d87474;
    puStack_a0 = &UNK_110852860;
    _objc_copyWeak(auStack_70,auStack_60);
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puStack_98 = puVar6;
    _objc_retain(uVar5);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uStack_90 = uVar5;
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    uStack_88 = uVar7;
    _objc_retain(uVar5);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    uStack_80 = uVar5;
    _objc_retain(uVar7);
    uStack_68 = *(undefined8 *)(param_2 + 0x58);
    uStack_78 = uVar7;
    func_0x000100162d98("APPSTORE",&puStack_b8);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(puStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d87528; end: 106d8752f; -[SCGalleryPreviewController _isSpectaclesSingleSegmentTimeline:] */

bool FUN_106d87528(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_3;
  func_0x00010b5fa088();
  if (lVar2 == 0xb) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010b5fa088(param_3);
    bVar1 = lVar2 == 0xc;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106d87530; end: 106d8756f; -[SCGalleryPreviewController _isSnapEligibleForSuperCutsEffect:] */

bool FUN_106d87530(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010b5fa088(param_3);
  _objc_release(param_3);
  return lVar1 == 0xc;
}



/* Entry: 106d87570; end: 106d875bf; -[SCGalleryPreviewController _shouldShowMultiSnapUIForSpectacles:] */

uint FUN_106d87570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010b5fa7fc();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x0001090240d4(param_3);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106d875c0; end: 106d8765b; -[SCGalleryPreviewController _resolveDepthDataIfNeededForGallerySnaps:primarySnap:config:] */

void FUN_106d875c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010b5fa088();
  if (lVar1 - 2U < 0xb) {
    puVar2 = PTR_PTR_1126d2660;
    _objc_alloc(PTR_PTR_1126d2660);
    func_0x00010c00b900();
    func_0x00010c18be80(param_5,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d8765c; end: 106d877fb; -[SCGalleryPreviewController _presentPreviewMultisnapWithLegacyConfig:snapDocEditor:videoAsset:placeholderImage:fromViewController:transitioningDelegate:userContext:] */

void FUN_106d8765c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_70 = param_9;
  func_0x00010be20980(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d877fc; end: 106d8790b;  */

void FUN_106d877fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106d8790c;
  puStack_70 = &UNK_110852860;
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106d8790c; end: 106d87b93;  */

long FUN_106d8790c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar9 != 0) {
    puVar2 = PTR_PTR_1126affb0;
    _objc_alloc(PTR_PTR_1126affb0);
    func_0x00010bffe1e0();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar10 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar10);
    lVar3 = lVar10;
    func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar3 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar10);
          }
          func_0x00010bef9e40(puVar2,param_2,*(undefined8 *)(lStack_128 + lVar12 * 8));
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar10);
    func_0x00010c1c9700(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c07f160();
    _objc_release(uVar4);
    puVar5 = puVar2;
    if ((int)uVar6 == 0) {
      func_0x00010c26f640(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfb4f40();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2440e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9a00();
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c210140(puVar2,param_2,0);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c07f160();
    if ((int)uVar6 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c073ea0();
      _objc_release(uVar7);
      _objc_release(uVar4);
      if ((int)uVar6 != 0) goto LAB_106d87af0;
    }
    else {
      _objc_release(uVar4);
LAB_106d87af0:
      func_0x00010c1b59a0(puVar2,param_2,0);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = uVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    func_0x00010be0d140(lVar9,param_2,0,uVar6,uVar7,0,uVar4,uVar1,uVar8,
                        *(undefined8 *)(param_1 + 0x50));
    _objc_release(uVar8);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0c6c20();
  if (lVar3 == 2) {
    uVar6 = *(undefined8 *)(lVar9 + 200);
    func_0x00010bf1f440(uVar6,param_2,&PTR____CFConstantStringClassReference_110e85ad8,0,0);
    if ((int)uVar6 != 0) {
      func_0x00010bf8b160(param_3);
      func_0x00010be457a0(lVar9);
      goto LAB_106d87bf8;
    }
  }
  lVar9 = 0;
LAB_106d87bf8:
  _objc_release(param_3);
  return lVar9;
}



/* Entry: 106d87b94; end: 106d87c0f; -[SCGalleryPreviewController _shouldShowPostToSpotlightActionBarForCameraRollLegacyPreviewWithPHAsset:] */

long FUN_106d87b94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c6c20();
  if (lVar1 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e85ad8,0,0);
    if ((int)uVar2 != 0) {
      func_0x00010bf8b160(param_3);
      func_0x00010be457a0(param_1);
      goto LAB_106d87bf8;
    }
  }
  param_1 = 0;
LAB_106d87bf8:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106d87c10; end: 106d87cab; -[SCGalleryPreviewController _shouldShowPostToSpotlightActionBarForHomeLegacyPreviewWithSnap:] */

long FUN_106d87c10(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010b5fa088();
  lVar3 = 0;
  if ((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) {
    uVar2 = *(undefined8 *)(param_2 + 200);
    func_0x00010bf1f440(uVar2,param_3,&PTR____CFConstantStringClassReference_110e85af8,0,0);
    lVar3 = 0;
    if ((int)uVar2 != 0) {
      func_0x00010bf8b160(param_4);
      func_0x00010be457a0((double)param_1,param_2);
      lVar3 = param_2;
    }
  }
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 106d87cac; end: 106d87f57; -[SCGalleryPreviewController _shouldShowPostToSpotlightActionBarWithSnapDoc:] */

ulong FUN_106d87cac(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 200);
  func_0x00010c0b84a0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e85b18,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((int)uVar5 == 0) {
    param_2 = 0;
  }
  else {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar6 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar7;
    func_0x00010bf52a60(lVar7,param_3,&uStack_130,auStack_e8,0x10);
    if (lVar6 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar7);
          }
          uVar10 = *(ulong *)(lStack_128 + lVar12 * 8);
          uVar8 = uVar10;
          func_0x00010c08c3a0();
          if ((int)uVar8 == 1) {
            uVar8 = uVar10;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010bf0b760();
            _objc_release(uVar8);
            if ((int)uVar9 == 5) {
              _objc_retain(uVar10);
              _objc_release(lVar7);
              if (uVar10 == 0) goto LAB_106d87f04;
              uVar8 = uVar10;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c27dd80();
              _objc_release(uVar8);
              if ((int)uVar9 != 1) goto LAB_106d87f04;
              uVar8 = uVar10;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c0c4bc0();
              _objc_release(uVar8);
              uVar3 = *(undefined8 *)(param_2 + 200);
              func_0x00010c0b84a0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e85b38,0);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf1f3c0();
              _objc_release(uVar4);
              _objc_release(uVar3);
              if ((int)uVar5 == 0) goto LAB_106d87f04;
              param_1 = (double)(uVar9 & 0xffffffff) / 1000.0;
              func_0x00010be457a0();
              goto LAB_106d87f08;
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar6 != lVar12);
        lVar6 = lVar7;
        func_0x00010bf52a60(lVar7,param_3,&uStack_130,auStack_e8,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(lVar7);
    uVar10 = 0;
LAB_106d87f04:
    param_2 = 0;
LAB_106d87f08:
    _objc_release(uVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar9 = *(ulong *)(param_4 + 200);
  func_0x00010c0b84a0(uVar9,param_3,&PTR____CFConstantStringClassReference_110e85b58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c067ec0();
  _objc_release(uVar8);
  _objc_release(uVar9);
  bVar1 = true;
  bVar2 = false;
  if (param_1 < (double)(uVar10 & 0xffffffff)) {
    bVar2 = SBORROW4((int)uVar10,1);
    bVar1 = (int)uVar10 + -1 < 0;
  }
  return (ulong)(bVar1 != bVar2);
}



/* Entry: 106d87f58; end: 106d87fdb; -[SCGalleryPreviewController _isVideoEligibleForSpotlightPostWithDurationSeconds:] */

bool FUN_106d87f58(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_2 + 200);
  func_0x00010c0b84a0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e85b58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  bVar1 = true;
  bVar2 = false;
  if (param_1 < (double)(uVar5 & 0xffffffff)) {
    bVar2 = SBORROW4((int)uVar5,1);
    bVar1 = (int)uVar5 + -1 < 0;
  }
  return bVar1 != bVar2;
}



/* Entry: 106d87fdc; end: 106d88b8f; -[SCGalleryPreviewController _exposePreviewScopeWithSnapEditorConfig:legacyConfig:snapDocEditor:snapAssets:fromViewController:transitioningDelegate:snapId:userContext:] */

ulong FUN_106d87fdc(long param_1,undefined **param_2,ulong param_3,long param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar10 = param_3;
  func_0x00010bfdc2e0();
  uVar2 = param_3;
  if ((int)uVar10 == 0) {
    uVar2 = param_5;
  }
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    func_0x00010bdd9fe0(param_1);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x160);
    func_0x00010c071800();
    lVar3 = param_1;
    func_0x00010bdd9fe0();
    if ((iVar1 != 0) && ((int)lVar3 != 0)) {
      ppuVar4 = *(undefined ***)(param_1 + 400);
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bf55bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      if (param_5 == 0) {
        uVar10 = *(ulong *)(param_1 + 0x148);
        func_0x00010bf8cb40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_5);
        uVar10 = param_5;
      }
      func_0x00010bee01e0(param_1);
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar3 = param_1;
      func_0x00010bebcc60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010c1d0640(puVar9);
      }
      puVar11 = PTR_PTR_1126c81a0;
      _objc_opt_new();
      lVar8 = param_1;
      func_0x00010bebcc40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c07c0(puVar11);
      _objc_release(lVar8);
      func_0x00010c1d0640(puVar9);
      puVar12 = PTR_PTR_1126c81d8;
      _objc_alloc_init();
      lVar8 = param_4;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = PTR_PTR_1126c81b8;
      func_0x00010befc200();
      func_0x00010befc240();
      func_0x00010befc300();
      lVar25 = lVar8;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar8;
      func_0x00010bf252a0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077e60(lVar8);
      func_0x00010c077de0();
      func_0x00010c0729c0();
      lVar14 = lVar8;
      func_0x00010c1322c0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar8;
      func_0x00010c1322e0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar8;
      func_0x00010c131ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar8;
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar8;
      func_0x00010bfceb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6ef20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar25);
      lVar25 = param_4;
      func_0x00010c07f480();
      if ((int)lVar25 != 0) {
        puVar28 = PTR_PTR_1126c81b8;
        func_0x00010c24b160(PTR_PTR_1126c81b8);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar27;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar27);
        _objc_release(puVar28);
        puVar27 = puVar19;
      }
      puVar28 = puVar27;
      func_0x00010bf529e0();
      if (puVar28 == (undefined *)0x0) {
        puVar28 = (undefined *)0x0;
      }
      else {
        puVar28 = PTR_PTR_1126c81b0;
        _objc_opt_new();
        func_0x00010c1e0b60();
      }
      uVar20 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar20);
      puVar19 = PTR_PTR_1126c81c8;
      _objc_alloc(PTR_PTR_1126c81c8);
      func_0x00010c044220();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126c81b8;
      func_0x00010bf4ba80();
      if ((int)puVar19 == 0) {
        uVar20 = *(undefined8 *)(param_1 + 200);
        param_2 = *(undefined ***)(param_1 + 0xd0);
        func_0x0001009703d0(uVar20,param_2);
        if ((int)uVar20 != 0) {
          func_0x00010beb6460();
        }
        puVar21 = PTR_PTR_1126c81f8;
        func_0x00010c101a60(PTR_PTR_1126c81f8);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar21;
        func_0x00010c101a40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar9);
        _objc_release(puVar22);
        puVar23 = puVar21;
        func_0x00010bf1da40(puVar21);
        _objc_retainAutoreleasedReturnValue();
        lVar25 = param_4;
        func_0x00010c233e40();
        puVar22 = PTR_PTR_1126d2668;
        if ((int)lVar25 == 0) {
          func_0x00010c10aac0(param_4);
          func_0x00010bfca6c0(puVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e0ba0(puVar12);
        }
        else {
          func_0x00010c1e0ba0(puVar12);
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          pcStack_a0 = FUN_106d88b90;
          puStack_98 = &UNK_110856a28;
          _objc_retain(puVar12);
          param_2 = &puStack_b0;
          puVar24 = puVar23;
          puStack_90 = puVar12;
          func_0x0001006372a4(puVar23,param_2);
          _objc_release(puVar23);
          puVar22 = puStack_90;
          puVar23 = puVar24;
        }
        _objc_release(puVar22);
        func_0x00010c1ddee0(puVar12);
        _objc_release(puVar23);
        _objc_release(puVar21);
      }
      else {
        puVar22 = PTR_PTR_1126c81c0;
        _objc_opt_new(PTR_PTR_1126c81c0);
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar22);
        puStack_88 = PTR_PTR_1133bb5a0;
        puStack_80 = PTR_PTR_1133bb560;
        puStack_78 = PTR_PTR_1133bb590;
        puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddee0(puVar12);
        _objc_release(puVar22);
      }
      lVar25 = param_4;
      func_0x00010c29a1e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar25 == 0) {
        lVar13 = param_4;
        func_0x00010c0fd9a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 == 0) {
          lVar14 = param_4;
          func_0x00010bfbbbc0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar13);
          lVar14 = lVar13;
        }
        _objc_release(lVar13);
      }
      else {
        _objc_retain(lVar25);
        lVar14 = lVar25;
      }
      _objc_release(lVar25);
      puVar22 = PTR_PTR_1126c81e0;
      _objc_alloc(PTR_PTR_1126c81e0);
      func_0x00010c242400(param_4);
      puVar21 = puVar9;
      func_0x00010bf51e00();
      puVar23 = puVar21;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_4;
      func_0x00010bf429e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a600(puVar22);
      _objc_release(lVar25);
      _objc_release(puVar23);
      _objc_release(puVar21);
      lVar25 = param_1;
      func_0x00010bebcc00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193840(puVar22);
      _objc_release(lVar25);
      lVar25 = param_1;
      func_0x00010bebcbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179000(puVar22);
      _objc_release(lVar25);
      lVar25 = param_1;
      func_0x00010bebcba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178ea0(puVar22);
      _objc_release(lVar25);
      if ((int)puVar19 != 0) {
        func_0x00010c161720(puVar22);
      }
      uVar20 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010bf22a80();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = *(long *)(param_1 + 0x160);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar25 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x160));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_retain(param_4);
      uVar26 = *(undefined8 *)(param_1 + 0x1e0);
      *(long *)(param_1 + 0x1e0) = param_4;
      _objc_release(uVar26);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x160));
      _objc_release(uVar20);
      _objc_release(puVar22);
      _objc_release(lVar14);
      _objc_release(puVar28);
      _objc_release(puVar27);
      _objc_release(lVar8);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar3);
      _objc_release(puVar9);
      _objc_release(uVar10);
      _objc_release(ppuVar7);
      goto LAB_106d88ad0;
    }
  }
  lVar3 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar8 != 0) {
    func_0x00010be8cee0(param_1);
  }
  _objc_initWeak(&puStack_b8,param_1);
  puVar9 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x106d88bf8;
  puStack_e8 = &UNK_11097acc8;
  ppuVar7 = &puStack_100;
  param_2 = &puStack_b8;
  _objc_copyWeak(auStack_c0,param_2);
  _objc_retain(param_4);
  lStack_e0 = param_4;
  _objc_retain(param_6);
  uStack_d8 = param_6;
  _objc_retain(param_7);
  uStack_d0 = param_7;
  _objc_retain(param_8);
  uStack_c8 = param_8;
  func_0x00010c0311a0();
  func_0x00010bf42760(param_4);
  if (param_3 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar20 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf22c20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar20);
  _objc_release(puVar27);
  _objc_release(puVar9);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(lStack_e0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_b8);
LAB_106d88ad0:
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar7 + 8);
    _objc_destroyWeak(&puStack_b8);
    __Unwind_Resume();
    uVar20 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(param_2);
    func_0x00010c10aa80(uVar20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_2;
    func_0x00010c0720c0(param_2);
    _objc_release(param_2);
    _objc_release(uVar20);
    return (ulong)((uint)ppuVar7 ^ 1);
  }
  return param_3;
}


